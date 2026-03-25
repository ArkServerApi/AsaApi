#include "Hooks.h"
#include <string>
#include <fstream>
#include <Logger/Logger.h>
#include "Offsets.h"
#include "IBaseApi.h"
#include "detours/detours.h"
#include <windows.h>
#include <tlhelp32.h>
#include <mutex>
#include <condition_variable>
#include <chrono>
#include <json.hpp>
#include <Tools.h>

namespace
{
	std::mutex g_hookInstallMutex;
	std::condition_variable g_rebuildDone;

	void UpdateAllThreads()
	{
		const DWORD selfId = GetCurrentThreadId();
		HANDLE hSnap = CreateToolhelp32Snapshot(TH32CS_SNAPTHREAD, 0);
		if (hSnap == INVALID_HANDLE_VALUE)
			return;

		THREADENTRY32 te{ sizeof(te) };
		if (Thread32First(hSnap, &te))
		{
			do
			{
				if (te.th32OwnerProcessID != GetCurrentProcessId() || te.th32ThreadID == selfId)
					continue;

				HANDLE hThread = OpenThread(THREAD_SUSPEND_RESUME | THREAD_GET_CONTEXT | THREAD_SET_CONTEXT,
					FALSE, te.th32ThreadID);
				if (hThread)
					DetourUpdateThread(hThread);
				
			} while (Thread32Next(hSnap, &te));
		}
		CloseHandle(hSnap);
	}

	std::string ModuleName(HMODULE hModule)
	{
		if (!hModule)
			return "<unknown>";

		char path[MAX_PATH]{};
		if (!GetModuleFileNameA(hModule, path, MAX_PATH))
			return "<unknown>";

		const std::string full(path);
		const auto slash = full.find_last_of("\\/");
		std::string name = (slash != std::string::npos) ? full.substr(slash + 1) : full;

		const auto dot = name.rfind('.');
		if (dot != std::string::npos)
			name.erase(dot);

		return name;
	}

	bool RunTransaction(auto fn)
	{
		if (DetourTransactionBegin() != NO_ERROR)
		{
			Log::GetLog()->error("DetourTransactionBegin failed");
			return false;
		}

		UpdateAllThreads();

		fn();

		const LONG err = DetourTransactionCommit();
		if (err != NO_ERROR)
		{
			Log::GetLog()->error("DetourTransactionCommit failed (err={})", err);
			DetourTransactionAbort();
			return false;
		}
		return true;
	}
}

namespace API
{
	Hooks::Hooks()
	{
		DetourSetRetainRegions(TRUE);

		try
		{
			const std::string config_path = AsaApi::Tools::GetCurrentDir() + "/config.json";
			std::ifstream f(config_path);
			if (f.is_open())
			{
				nlohmann::json cfg;
				f >> cfg;
				extended_debug_ = cfg["settings"].value("ExtendedDebug", false);
			}
		}
		catch (...) {}
	}

	bool Hooks::SetHookInternal(const std::string& func_name, LPVOID detour, LPVOID* original)
	{
		HMODULE hOwner = nullptr;
		GetModuleHandleExW(
			GET_MODULE_HANDLE_EX_FLAG_FROM_ADDRESS |
			GET_MODULE_HANDLE_EX_FLAG_UNCHANGED_REFCOUNT,
			reinterpret_cast<LPCWSTR>(detour),
			&hOwner);

		return SetHookInternalImpl(func_name, detour, original, hOwner);
	}

	bool Hooks::SetHookInternalImpl(const std::string& func_name, LPVOID detour,
		LPVOID* original, HMODULE hOwner)
	{
		LPVOID target = Offsets::Get().GetAddress(func_name);
		if (target == nullptr)
		{
			Log::GetLog()->error("[{}] {} does not exist", ModuleName(hOwner), func_name);
			return false;
		}

		std::unique_lock installLock(g_hookInstallMutex);
		g_rebuildDone.wait(installLock, [&]
			{
				return !rebuilding_.count(func_name);
			});

		auto& hook_vector = all_hooks_[func_name];
		*original = target;

		bool ok = RunTransaction([&]()
		{
			const LONG attachErr = DetourAttach(original, detour);
			if (attachErr != NO_ERROR)
				Log::GetLog()->error("[{}] DetourAttach failed for {} (err={})", ModuleName(hOwner), func_name, attachErr);
		});

		if (!ok)
		{
			Log::GetLog()->error("[{}] Hook failed for {}", ModuleName(hOwner), func_name);
			*original = nullptr;
			return false;
		}

		if (extended_debug_)
			Log::GetLog()->info("[{}] Hook installed for {} (trampoline=0x{:X})", ModuleName(hOwner), func_name, reinterpret_cast<ULONG_PTR>(*original));

		hook_vector.push_back(std::make_shared<Hook>(target, detour, original, hOwner));
		return true;
	}

	bool Hooks::DisableHook(const std::string& func_name, LPVOID detour)
	{
		const LPVOID target = Offsets::Get().GetAddress(func_name);
		if (target == nullptr)
		{
			Log::GetLog()->error("{} does not exist", func_name);
			return false;
		}

		const auto makeChainSnapshot = [](const std::vector<std::shared_ptr<Hook>>& vec) -> std::string
		{
			if (vec.empty())
				return "0 hooks: <empty>";

			std::string s = std::to_string(vec.size()) + " hooks: ";
			for (std::size_t i = 0; i < vec.size(); ++i)
			{
				char buf[24];
				std::snprintf(buf, sizeof(buf), "0x%llX",
					static_cast<unsigned long long>(reinterpret_cast<ULONG_PTR>(vec[i]->detour)));
				s += '[';
				s += ModuleName(vec[i]->hOwnerModule);
				s += '(';
				s += buf;
				s += ")]";
				if (i + 1 < vec.size())
					s += " -> ";
			}
			return s;
		};

		std::shared_ptr<Hook> removedHook;
		std::vector<std::shared_ptr<Hook>> survivors;

		{
			std::unique_lock installLock(g_hookInstallMutex);

			if (rebuilding_.count(func_name))
			{
				if (extended_debug_)
					Log::GetLog()->warn("DisableHook called for {} while a rebuild is already in progress - ignoring to prevent chain corruption", func_name);

				return false;
			}

			auto& hook_vector = all_hooks_[func_name];

			const auto iter = std::find_if(hook_vector.begin(), hook_vector.end(),
				[detour](const std::shared_ptr<Hook>& h) { return h->detour == detour; });

			if (iter == hook_vector.end())
				return false;

			removedHook = *iter;

			if (extended_debug_)
				Log::GetLog()->info("[{}] DisableHook: removing hook for {} | chain before: {}", ModuleName(removedHook->hOwnerModule), func_name, makeChainSnapshot(hook_vector));

			rebuilding_.insert(func_name);

			bool ok = RunTransaction([&]()
			{
				for (const auto& h : hook_vector)
				{
					const LONG detachErr = DetourDetach(h->original, h->detour);
					if (detachErr != NO_ERROR)
						Log::GetLog()->error("[{}] DetourDetach failed for {} (err={})", ModuleName(removedHook->hOwnerModule), func_name, detachErr);
				}
			});

			if (!ok)
			{
				rebuilding_.erase(func_name);
				return false;
			}

			for (const auto& h : hook_vector)
			{
				if (h != removedHook)
					survivors.push_back(h);
			}

			hook_vector.clear();

			if (removedHook->original)
				*removedHook->original = nullptr;
		}

		std::size_t reinstalled = 0;
		for (const auto& h : survivors)
		{
			if (SetHookInternalImpl(func_name, h->detour, h->original, h->hOwnerModule))
				++reinstalled;
			else
				Log::GetLog()->error("[{}] Failed to reinstall hook for {} during chain rebuild", ModuleName(h->hOwnerModule), func_name);
		}

		{
			std::unique_lock installLock(g_hookInstallMutex);

			if (reinstalled != survivors.size())
				Log::GetLog()->error("DisableHook chain rebuild for {} is incomplete: expected {} survivors, reinstalled {}", func_name, survivors.size(), reinstalled);

			if (extended_debug_)
				Log::GetLog()->info("[{}] DisableHook: rebuild complete for {} | chain after: {}", ModuleName(removedHook->hOwnerModule), func_name, makeChainSnapshot(all_hooks_[func_name]));

			rebuilding_.erase(func_name);
		}

		g_rebuildDone.notify_all();

		return true;
	}

	void Hooks::DisableAllHooksFromModule(HMODULE hModule)
	{
		if (!hModule) return;

		std::vector<std::pair<std::string, LPVOID>> toDisable;
		{
			std::lock_guard snapLock(g_hookInstallMutex);
			for (const auto& [func_name, hook_vec] : all_hooks_)
			{
				for (const auto& h : hook_vec)
				{
					if (h->hOwnerModule == hModule)
						toDisable.emplace_back(func_name, h->detour);
				}
			}
		}

		const std::string modName = ModuleName(hModule);

		for (const auto& [func_name, det] : toDisable)
		{
			if (extended_debug_)
				Log::GetLog()->info("[{}] Auto-disabling hook for {} (module unloading)", modName, func_name);

			constexpr int kMaxRetries = 5;
			constexpr auto kRetryTimeout = std::chrono::milliseconds(500);

			for (int attempt = 0; attempt < kMaxRetries; ++attempt)
			{
				if (DisableHook(func_name, det))
					break;

				bool stillPresent = false;
				{
					std::unique_lock checkLock(g_hookInstallMutex);

					const auto it = all_hooks_.find(func_name);
					if (it != all_hooks_.end())
					{
						for (const auto& h : it->second)
						{
							if (h->detour == det)
							{
								stillPresent = true;
								break;
							}
						}
					}

					if (!stillPresent)
						break;

					if (extended_debug_)
						Log::GetLog()->warn("[{}] DisableAllHooksFromModule: hook for {} is mid-rebuild, waiting (attempt {}/{})", modName, func_name, attempt + 1, kMaxRetries);

					g_rebuildDone.wait_for(checkLock, kRetryTimeout);
				}
			}

			{
				std::lock_guard checkLock(g_hookInstallMutex);
				const auto it = all_hooks_.find(func_name);
				if (it != all_hooks_.end())
				{
					for (const auto& h : it->second)
					{
						if (h->detour == det)
						{
							Log::GetLog()->error("[{}] FATAL: hook for {} could not be removed after {} retries ({}ms each). FreeLibrary will proceed with a dangling hook — expect a crash.",
								modName, func_name, kMaxRetries, std::chrono::duration_cast<std::chrono::milliseconds>(kRetryTimeout).count());
							break;
						}
					}
				}
			}
		}
	}

} // namespace API

AsaApi::IHooks& AsaApi::GetHooks()
{
	return reinterpret_cast<IHooks&>(*API::game_api->GetHooks());
}