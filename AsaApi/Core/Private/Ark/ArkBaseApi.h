#pragma once

#include "../IBaseApi.h"
#include <IApiUtils.h>
#include "Containers/UnrealString.h"
#include <filesystem>
#include <json.hpp>

namespace API
{
	class ArkBaseApi : public IBaseApi
	{
	public:
		ArkBaseApi();
		~ArkBaseApi() override = default;

		bool Init() override;
		float GetVersion() override;
		std::string GetApiName() override;
		void RegisterCommands() override;

		std::unique_ptr<AsaApi::ICommands>& GetCommands() override;
		std::unique_ptr<AsaApi::IHooks>& GetHooks() override;
		std::unique_ptr<AsaApi::IApiUtils>& GetApiUtils() override;

	private:
		nlohmann::json GetConfig();
		bool DownloadCacheFiles(const std::filesystem::path downloadFile, const std::filesystem::path localFile);

		// Callbacks
		static FString LoadPlugin(FString* cmd);
		static FString UnloadPlugin(FString* cmd);

		static void LoadPluginCmd(APlayerController* /*player_controller*/, FString* /*cmd*/, bool /*unused*/);
		static void UnloadPluginCmd(APlayerController* /*player_controller*/, FString* /*cmd*/, bool /*unused*/);

		static void LoadPluginRcon(RCONClientConnection* /*rcon_connection*/, RCONPacket* /*rcon_packet*/,
			UWorld* /*unused*/);
		static void UnloadPluginRcon(RCONClientConnection* /*rcon_connection*/, RCONPacket* /*rcon_packet*/,
			UWorld* /*unused*/);

		static void SetServerID(RCONClientConnection* /*rcon_connection*/, RCONPacket* /*rcon_packet*/,
			UWorld* /*unused*/);

		std::unique_ptr<AsaApi::ICommands> commands_;
		std::unique_ptr<AsaApi::IHooks> hooks_;
		std::unique_ptr<AsaApi::IApiUtils> api_utils_;
	};
} // namespace API
