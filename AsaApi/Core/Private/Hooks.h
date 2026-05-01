#pragma once

#include <IHooks.h>
#include <memory>
#include <unordered_map>
#include <unordered_set>
#include <vector>
#include <windows.h>

namespace API
{
	class Hooks : public AsaApi::IHooks
	{
	public:
		Hooks();

		Hooks(const Hooks&) = delete;
		Hooks(Hooks&&) = delete;
		Hooks& operator=(const Hooks&) = delete;
		Hooks& operator=(Hooks&&) = delete;

		~Hooks() override = default;

		bool SetHookInternal(const std::string& func_name, LPVOID detour, LPVOID* original) override;

		bool DisableHook(const std::string& func_name, LPVOID detour) override;

		void DisableAllHooksFromModule(HMODULE hModule);

	private:
		struct Hook
		{
			Hook(LPVOID target, LPVOID detour, LPVOID* original, HMODULE hOwner)
				: target(target),
				detour(detour),
				original(original),
				hOwnerModule(hOwner)
			{}

			LPVOID  target;
			LPVOID  detour;
			LPVOID* original;
			HMODULE hOwnerModule;
		};

		bool SetHookInternalImpl(const std::string& func_name, LPVOID detour,
			LPVOID* original, HMODULE hOwnerOverride);

		// Called only during chain rebuild — skips the rebuilding_ guard
		bool SetHookInternalImplNoWait(const std::string& func_name, LPVOID detour,
			LPVOID* original, HMODULE hOwner);

		std::unordered_map<std::string, std::vector<std::shared_ptr<Hook>>> all_hooks_;
		std::unordered_set<std::string> rebuilding_;
		bool extended_debug_ = false;
	};
} // namespace API
