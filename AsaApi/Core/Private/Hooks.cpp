#include "Hooks.h"

#include <string>

#include <Logger/Logger.h>

#include "Offsets.h"
#include "IBaseApi.h"
#include "detours/detours.h"

namespace API
{
	Hooks::Hooks()
	{
		//No Longer Required.
	}

	bool Hooks::SetHookInternal(const std::string& func_name, LPVOID detour, LPVOID* original)
	{
		LPVOID target = Offsets::Get().GetAddress(func_name);
		if (target == nullptr)
		{
			Log::GetLog()->error("{} does not exist", func_name);
			return false;
		}

		auto& hook_vector = all_hooks_[func_name];

		LPVOID new_target = hook_vector.empty()
			                    ? target
			                    : hook_vector.back()->detour;


		if (DetourTransactionBegin())
		{
			Log::GetLog()->error("Failed to create Detour Transaction for {}", func_name);
			DetourTransactionAbort();
			return false;
		}
		if (DetourUpdateThread(GetCurrentThread()))
		{
			Log::GetLog()->error("Failed to update thread for {}", func_name);
			DetourTransactionAbort();
			return false;
		}
		if (DetourAttach(&new_target, detour))
		{
			Log::GetLog()->error("Failed to attach hook for {}", func_name);
			DetourTransactionAbort();
			return false;
		}

		if (DetourTransactionCommit())
		{
			Log::GetLog()->error("Failed to commit Detour Transaction for {}", func_name);
			DetourTransactionAbort();
			return false;
		}
		*original = new_target; //same as ppOriginal in MH_CreateHook

		hook_vector.push_back(std::make_shared<Hook>(new_target, detour, original));

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

		auto& hook_vector = all_hooks_[func_name];

		const auto iter = std::find_if(hook_vector.begin(), hook_vector.end(),
		                               [detour](const std::shared_ptr<Hook>& hook) -> bool
		                               {
			                               return hook->detour == detour;
		                               });

		if (iter == hook_vector.end())
		{
			Log::GetLog()->warn("Failed to find hook ({})", func_name);
			return false;
		}

		if (DetourTransactionBegin())
		{
			Log::GetLog()->error("Failed to create Detour Transaction for {}", func_name);
			DetourTransactionAbort();
			return false;
		}
		if (DetourUpdateThread(GetCurrentThread()))
		{
			Log::GetLog()->error("Failed to update thread for {}", func_name);
			DetourTransactionAbort();
			return false;
		}

		// Remove all hooks placed on this function
		for (const auto& hook : hook_vector)
		{
			if (DetourDetach(&hook->target, hook->detour))
			{
				Log::GetLog()->error("Failed to detach Detour Transaction for {}", func_name);
				DetourTransactionAbort();
				return false;
			}
		}

		if (DetourTransactionCommit())
		{
			Log::GetLog()->error("Failed to commit Detour Transaction for {}", func_name);
			DetourTransactionAbort();
			return false;
		}

		// Remove hook from all_hooks vector
		hook_vector.erase(std::remove(hook_vector.begin(), hook_vector.end(), *iter), hook_vector.end());

		auto hook_vec(move(hook_vector));
		hook_vector.clear();

		// Enable all hooks again
		for (const auto& hook : hook_vec)
		{
			SetHookInternal(func_name, hook->detour, hook->original);
		}

		return true;
	}
} // namespace API

// Free function
AsaApi::IHooks& AsaApi::GetHooks()
{
	return reinterpret_cast<IHooks&>(*API::game_api->GetHooks());
}
