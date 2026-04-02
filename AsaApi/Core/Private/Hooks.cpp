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

	enum class TransactionFailureKind
	{
		None,
		Snapshot,
		Enumeration,
		OpenThread,
		UpdateThread,
		Operation,
		Commit
	};

	struct TransactionContext
	{
		void Reset()
		{
			for (HANDLE hThread : handles)
			{
				if (hThread && hThread != INVALID_HANDLE_VALUE)
					CloseHandle(hThread);
			}

			handles.clear();
			skipped_threads = 0;
			retried_threads = 0;
			attempts = 0;
			open_invalid_parameter_skips = 0;
			open_invalid_handle_skips = 0;
			open_access_denied_skips = 0;
			update_invalid_parameter_skips = 0;
			update_invalid_handle_skips = 0;
			update_access_denied_skips = 0;
			terminating_thread_skips = 0;
			failure_kind = TransactionFailureKind::None;
			failure_thread_id = 0;
			failure_error = NO_ERROR;
		}

		~TransactionContext()
		{
			Reset();
		}

		std::vector<HANDLE> handles;
		std::size_t skipped_threads = 0;
		std::size_t retried_threads = 0;
		std::size_t attempts = 0;
		std::size_t open_invalid_parameter_skips = 0;
		std::size_t open_invalid_handle_skips = 0;
		std::size_t open_access_denied_skips = 0;
		std::size_t update_invalid_parameter_skips = 0;
		std::size_t update_invalid_handle_skips = 0;
		std::size_t update_access_denied_skips = 0;
		std::size_t terminating_thread_skips = 0;
		TransactionFailureKind failure_kind = TransactionFailureKind::None;
		DWORD failure_thread_id = 0;
		LONG failure_error = NO_ERROR;
	};

	constexpr int kMaxRetries = 5;
	constexpr auto kRetryTimeout = std::chrono::milliseconds(500);
	constexpr int kThreadUpdateRetryCount = 3;
	constexpr DWORD kThreadUpdateRetryDelayMs = 1;
	constexpr int kTransactionRetryCount = 4;
	constexpr DWORD kTransactionRetryDelayMs = 15;

	std::string DescribeTransactionFailure(const TransactionContext& transaction)
	{
		auto suffix = [&]() -> std::string
		{
			std::string s;
			if (transaction.attempts > 1)
				s += ", attempts=" + std::to_string(transaction.attempts);

			if (transaction.retried_threads != 0)
				s += ", retried threads=" + std::to_string(transaction.retried_threads);

			if (transaction.skipped_threads != 0)
				s += ", skipped threads=" + std::to_string(transaction.skipped_threads);

			if (transaction.open_invalid_parameter_skips != 0)
				s += ", open err=87=" + std::to_string(transaction.open_invalid_parameter_skips);

			if (transaction.open_invalid_handle_skips != 0)
				s += ", open invalid handle=" + std::to_string(transaction.open_invalid_handle_skips);

			if (transaction.open_access_denied_skips != 0)
				s += ", open err=5=" + std::to_string(transaction.open_access_denied_skips);

			if (transaction.update_invalid_parameter_skips != 0)
				s += ", update err=87=" + std::to_string(transaction.update_invalid_parameter_skips);

			if (transaction.update_invalid_handle_skips != 0)
				s += ", update invalid handle=" + std::to_string(transaction.update_invalid_handle_skips);

			if (transaction.update_access_denied_skips != 0)
				s += ", update err=5=" + std::to_string(transaction.update_access_denied_skips);

			if (transaction.terminating_thread_skips != 0)
				s += ", terminating threads=" + std::to_string(transaction.terminating_thread_skips);

			return s;
		};

		switch (transaction.failure_kind)
		{
			case TransactionFailureKind::None:
				return "transaction failed" + suffix();
			case TransactionFailureKind::Snapshot:
				return "thread snapshot failed (err=" + std::to_string(transaction.failure_error) + ')' + suffix();
			case TransactionFailureKind::Enumeration:
				return "thread enumeration failed (err=" + std::to_string(transaction.failure_error) + ')' + suffix();
			case TransactionFailureKind::OpenThread:
				return "OpenThread failed for thread " + std::to_string(transaction.failure_thread_id) +
					" (err=" + std::to_string(transaction.failure_error) + ')' + suffix();
			case TransactionFailureKind::UpdateThread:
				return "DetourUpdateThread failed for thread " + std::to_string(transaction.failure_thread_id) +
					" (err=" + std::to_string(transaction.failure_error) + ')' + suffix();
			case TransactionFailureKind::Operation:
				return "detour operation failed" + suffix();
			case TransactionFailureKind::Commit:
				return "transaction commit failed (err=" + std::to_string(transaction.failure_error) + ')' + suffix();
		}

		return "transaction failed" + suffix();
	}

	bool IsIgnorableThreadError(const DWORD error)
	{
		return error == ERROR_INVALID_PARAMETER || error == ERROR_INVALID_HANDLE;
	}

	bool TryOpenThreadForTransaction(const DWORD threadId, HANDLE& hThread, TransactionContext& transaction)
	{
		for (int attempt = 0; attempt < kThreadUpdateRetryCount; ++attempt)
		{
			hThread = OpenThread(THREAD_SUSPEND_RESUME | THREAD_GET_CONTEXT | THREAD_SET_CONTEXT |
				THREAD_QUERY_INFORMATION | THREAD_QUERY_LIMITED_INFORMATION,
				FALSE, threadId);
			if (hThread)
			{
				if (attempt != 0)
					++transaction.retried_threads;

				return true;
			}

			const DWORD openErr = GetLastError();
			if (IsIgnorableThreadError(openErr))
			{
				++transaction.skipped_threads;
				if (attempt != 0)
					++transaction.retried_threads;

				if (openErr == ERROR_INVALID_PARAMETER)
					++transaction.open_invalid_parameter_skips;
				else
					++transaction.open_invalid_handle_skips;

				return false;
			}

			if (openErr == ERROR_ACCESS_DENIED)
			{
				if (attempt + 1 < kThreadUpdateRetryCount)
				{
					Sleep(kThreadUpdateRetryDelayMs);
					continue;
				}

				++transaction.retried_threads;
				++transaction.skipped_threads;
				++transaction.open_access_denied_skips;
				return false;
			}

			transaction.failure_kind = TransactionFailureKind::OpenThread;
			transaction.failure_thread_id = threadId;
			transaction.failure_error = static_cast<LONG>(openErr);
			return false;
		}

		return false;
	}

	bool TryUpdateThreadForTransaction(const DWORD threadId, HANDLE hThread, TransactionContext& transaction)
	{
		for (int attempt = 0; attempt < kThreadUpdateRetryCount; ++attempt)
		{
			const LONG updateErr = DetourUpdateThread(hThread);
			if (updateErr == NO_ERROR)
			{
				if (attempt != 0)
					++transaction.retried_threads;

				return true;
			}

			if (IsIgnorableThreadError(static_cast<DWORD>(updateErr)))
			{
				++transaction.skipped_threads;
				if (attempt != 0)
					++transaction.retried_threads;

				if (updateErr == ERROR_INVALID_PARAMETER)
					++transaction.update_invalid_parameter_skips;
				else
					++transaction.update_invalid_handle_skips;

				return false;
			}

			if (updateErr == ERROR_ACCESS_DENIED)
			{
				DWORD exitCode = STILL_ACTIVE;
				if (GetExitCodeThread(hThread, &exitCode) && exitCode != STILL_ACTIVE)
				{
					++transaction.skipped_threads;

					if (attempt != 0)
						++transaction.retried_threads;

					++transaction.terminating_thread_skips;

					return false;
				}

				if (attempt + 1 < kThreadUpdateRetryCount)
				{
					Sleep(kThreadUpdateRetryDelayMs);
					continue;
				}

				++transaction.retried_threads;
				++transaction.skipped_threads;
				++transaction.update_access_denied_skips;
				return false;
			}

			transaction.failure_kind = TransactionFailureKind::UpdateThread;
			transaction.failure_thread_id = threadId;
			transaction.failure_error = updateErr;
			return false;
		}

		return false;
	}

	bool ShouldRetryTransaction(const TransactionContext& transaction, const LONG operationError)
	{
		if (transaction.failure_kind == TransactionFailureKind::Operation)
			return operationError == ERROR_ACCESS_DENIED;

		if (transaction.failure_kind == TransactionFailureKind::Commit)
			return transaction.failure_error == ERROR_ACCESS_DENIED;

		return false;
	}

	bool UpdateAllThreads(TransactionContext& transaction)
	{
		const DWORD selfId = GetCurrentThreadId();
		HANDLE hSnap = CreateToolhelp32Snapshot(TH32CS_SNAPTHREAD, 0);
		if (hSnap == INVALID_HANDLE_VALUE)
		{
			transaction.failure_kind = TransactionFailureKind::Snapshot;
			transaction.failure_error = static_cast<LONG>(GetLastError());
			Log::GetLog()->error("CreateToolhelp32Snapshot failed (err={})", transaction.failure_error);
			return false;
		}

		THREADENTRY32 te{ sizeof(te) };
		if (Thread32First(hSnap, &te))
		{
			do
			{
				if (te.th32OwnerProcessID != GetCurrentProcessId() || te.th32ThreadID == selfId)
					continue;

				HANDLE hThread = nullptr;
				if (!TryOpenThreadForTransaction(te.th32ThreadID, hThread, transaction))
				{
					if (transaction.failure_kind != TransactionFailureKind::None)
					{
						CloseHandle(hSnap);
						return false;
					}

					continue;
				}

				transaction.handles.push_back(hThread);

				if (!TryUpdateThreadForTransaction(te.th32ThreadID, hThread, transaction))
				{
					if (transaction.failure_kind != TransactionFailureKind::None)
					{
						CloseHandle(hSnap);
						return false;
					}

					continue;
				}
			} while (Thread32Next(hSnap, &te));
		}
		else
		{
			transaction.failure_kind = TransactionFailureKind::Enumeration;
			transaction.failure_error = static_cast<LONG>(GetLastError());
			Log::GetLog()->error("Thread32First failed (err={})", transaction.failure_error);
			CloseHandle(hSnap);
			return false;
		}

		CloseHandle(hSnap);
		return true;
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

	bool RunTransaction(auto fn, TransactionContext& transaction, const bool* operationSucceeded = nullptr)
	{
		if (DetourTransactionBegin() != NO_ERROR)
		{
			Log::GetLog()->error("DetourTransactionBegin failed");
			return false;
		}

		if (!UpdateAllThreads(transaction))
		{
			DetourTransactionAbort();
			return false;
		}

		fn();

		if (operationSucceeded && !*operationSucceeded)
		{
			transaction.failure_kind = TransactionFailureKind::Operation;
			DetourTransactionAbort();
			return false;
		}

		const LONG err = DetourTransactionCommit();
		if (err != NO_ERROR)
		{
			transaction.failure_kind = TransactionFailureKind::Commit;
			transaction.failure_error = err;
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

		return SetHookInternalImplNoWait(func_name, detour, original, hOwner);
	}

	bool Hooks::SetHookInternalImplNoWait(const std::string& func_name, LPVOID detour,
		LPVOID* original, HMODULE hOwner)
	{
		auto& hook_vector = all_hooks_[func_name];
		TransactionContext transaction;
		LONG attachErr = NO_ERROR;
		bool ok = false;

		for (int attempt = 0; attempt < kTransactionRetryCount; ++attempt)
		{
			transaction.Reset();
			transaction.attempts = static_cast<std::size_t>(attempt + 1);
			*original = Offsets::Get().GetAddress(func_name);

			bool attachSucceeded = true;
			attachErr = NO_ERROR;

			ok = RunTransaction([&]()
				{
					attachErr = DetourAttach(original, detour);
					if (attachErr != NO_ERROR)
						attachSucceeded = false;
				}, transaction, &attachSucceeded);

			if (ok || attempt + 1 >= kTransactionRetryCount || !ShouldRetryTransaction(transaction, attachErr))
				break;

			Sleep(kTransactionRetryDelayMs);
		}

		if (!ok)
		{
			if (attachErr != NO_ERROR)
				Log::GetLog()->error("[{}] Hook failed for {} (chain depth: {}, DetourAttach err={}, {})", ModuleName(hOwner), func_name, hook_vector.size(), attachErr, DescribeTransactionFailure(transaction));
			else
				Log::GetLog()->error("[{}] Hook failed for {} (chain depth: {}, {})", ModuleName(hOwner), func_name, hook_vector.size(), DescribeTransactionFailure(transaction));
			
			*original = nullptr;
			return false;
		}

		if (extended_debug_)
			Log::GetLog()->info("[{}] Hook installed for {} (trampoline=0x{:X})", ModuleName(hOwner), func_name, reinterpret_cast<ULONG_PTR>(*original));

		hook_vector.push_back(std::make_shared<Hook>(Offsets::Get().GetAddress(func_name), detour, original, hOwner));
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
			TransactionContext transaction;
			LONG detachErr = NO_ERROR;
			bool ok = false;

			for (int attempt = 0; attempt < kTransactionRetryCount; ++attempt)
			{
				transaction.Reset();
				transaction.attempts = static_cast<std::size_t>(attempt + 1);

				bool detachSucceeded = true;
				detachErr = NO_ERROR;

				ok = RunTransaction([&]()
					{
						for (const auto& h : hook_vector)
						{
							detachErr = DetourDetach(h->original, h->detour);
							if (detachErr != NO_ERROR)
							{
								if (extended_debug_)
									Log::GetLog()->warn("[{}] DetourDetach failed for {} (err={})", ModuleName(removedHook->hOwnerModule), func_name, detachErr);

								detachSucceeded = false;
								break;
							}
						}
					}, transaction, &detachSucceeded);

				if (ok || attempt + 1 >= kTransactionRetryCount || !ShouldRetryTransaction(transaction, detachErr))
					break;

				Sleep(kTransactionRetryDelayMs);
			}

			if (!ok)
			{
				Log::GetLog()->error("[{}] DisableHook transaction failed for {} ({})", ModuleName(removedHook->hOwnerModule), func_name, DescribeTransactionFailure(transaction));
				rebuilding_.erase(func_name);
				g_rebuildDone.notify_all();
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
			if (SetHookInternalImplNoWait(func_name, h->detour, h->original, h->hOwnerModule))
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