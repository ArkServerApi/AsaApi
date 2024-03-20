#include "ApiUtils.h"

#include "../IBaseApi.h"
#include "Ark/MessagingManager.h"
#include "Ark/AsaApiUtilsMessagingManager.h"
#include <fstream>
#include "json.hpp"

namespace AsaApi
{
	// UWorld

	void ApiUtils::SetWorld(UWorld* uworld)
	{
		u_world_ = uworld;

		std::shared_ptr<MessagingManager> manager = ReadApiMessagingManager();
		manager->SetWorldContext(uworld);
		SetMessagingManagerInternal("Default", manager);
	}

	UWorld* ApiUtils::GetWorld() const
	{
		return u_world_;
	}

	// AShooterGameMode

	void ApiUtils::SetShooterGameMode(AShooterGameMode* shooter_game_mode)
	{
		shooter_game_mode_ = shooter_game_mode;
	}

	AShooterGameMode* ApiUtils::GetShooterGameMode() const
	{
		return shooter_game_mode_;
	}

	// Status

	void ApiUtils::SetStatus(ServerStatus status)
	{
		status_ = status;
	}

	ServerStatus ApiUtils::GetStatus() const
	{
		return status_;
	}

	// Cheat Manager
	void ApiUtils::SetCheatManager(UShooterCheatManager* cheatmanager)
	{
		cheatmanager_ = cheatmanager;
	}

	void ApiUtils::SetPlayerController(AShooterPlayerController* player_controller)
	{		
		if (!player_controller)
			return;
		
		const FString eos_id = AsaApi::IApiUtils::GetEOSIDFromController(player_controller);

		if (!eos_id.IsEmpty())
		{
			eos_id_map_[eos_id] = player_controller;
		}
	}

	void ApiUtils::RemovePlayerController(AShooterPlayerController* player_controller)
	{
		if (!player_controller)
			return;

		const FString eos_id = AsaApi::IApiUtils::GetEOSIDFromController(player_controller);

		if (!eos_id.IsEmpty())
		{
			eos_id_map_.erase(eos_id);
		}
	}

	AShooterPlayerController* ApiUtils::FindPlayerFromEOSID_Internal(const FString& eos_id) const
	{
		AShooterPlayerController* found_player = nullptr;
		if (eos_id.IsEmpty())
		{
			return found_player;
		}
		auto iter = eos_id_map_.find(eos_id);
		if (iter != eos_id_map_.end()
			&& iter->first == eos_id)
		{
			found_player = iter->second;
		}

		if (found_player == nullptr)
		{
			const auto& player_controllers = GetWorld()->PlayerControllerListField();
			for (TWeakObjectPtr<APlayerController> player_controller : player_controllers)
			{
				AShooterPlayerController* shooter_pc = static_cast<AShooterPlayerController*>(player_controller.Get());

				if (shooter_pc)
				{
					const FString& iter_eos_id = *API::game_api->GetApiUtils()->GetEOSIDFromController(shooter_pc);
					if (iter_eos_id == eos_id)
					{
						found_player = shooter_pc;
						break;
					}
				}
			}
		}

		return found_player;
	}

	UShooterCheatManager* ApiUtils::GetCheatManager() const
	{
		return cheatmanager_;
	}

	std::shared_ptr<MessagingManager> ApiUtils::GetMessagingManagerInternal(const FString& forPlugin) const
	{
		auto iter = messaging_managers_.find(forPlugin);
		if (forPlugin.IsEmpty()
			|| iter == messaging_managers_.end())
		{
			return messaging_managers_.find("Default")->second;
		}
		return iter->second;
	}

	void ApiUtils::SetMessagingManagerInternal(const FString& forPlugin, std::shared_ptr<MessagingManager> manager)
	{
		if (manager == nullptr)
			throw std::invalid_argument("MessagingManager cannot be null");

		messaging_managers_[forPlugin] = manager;
		manager->SetWorldContext(u_world_);

		if (GetStatus() == ServerStatus::Ready)
			CheckMessagingManagersRequirements();
	}

	void ApiUtils::RemoveMessagingManagerInternal(const FString& forPlugin)
	{
		if (forPlugin.IsEmpty())
			return;

		messaging_managers_.erase(forPlugin);
	}

	void ApiUtils::CheckMessagingManagersRequirements()
	{
		for (auto it = messaging_managers_.begin(); it != messaging_managers_.end(); /*manual increm*/)
		{
			auto& manager = it->second;
			if (!manager)
			{
				it = messaging_managers_.erase(it);
				continue;
			}
			else
			{
				std::optional<std::string> error = manager->MeetsRequirementsToWork();
				if (error.has_value())
				{
					TArray<FString> parsedName;
					it->first.ParseIntoArray(parsedName, L"\\", true);
					Log::GetLog()->error("Custom messaging error for '{}', using normal messaging. Reason: {}", parsedName.Last().ToString(), error.value());
					it = messaging_managers_.erase(it);
					continue;
				}
				else
				{
					manager->SetWorldContext(u_world_);
					++it;
				}
			}
		}
	}

	std::shared_ptr<MessagingManager> ApiUtils::ReadApiMessagingManager()
	{
		const std::string config_path = AsaApi::Tools::GetCurrentDir() + "/config.json";
		std::ifstream file{ config_path };
		if (!file.is_open())
			return std::make_shared<MessagingManager>();

		nlohmann::json config;
		file >> config;
		file.close();

		std::string messaging_manager_name = config["settings"].value("DefaultMessaging", "Default");
		if (messaging_manager_name == "Default")
			return std::make_shared<MessagingManager>();
		else if (messaging_manager_name == "AsaApiUtilsMod")
			return std::make_shared<AsaApiUtilsMessagingManager>();
		else
			return std::make_shared<MessagingManager>(); // fall back to default
	}

	// Free function
	IApiUtils& GetApiUtils()
	{
		return *API::game_api->GetApiUtils();
	}
} // namespace AsaApi