#pragma once

#include "MessagingManager.h"
#include "..\AsaApiModUtils.hpp"

class AsaApiUtilsMessagingManager : public MessagingManager
{
public:
	std::optional<std::string> MeetsRequirementsToWork() override
	{
		AActor* singleton = AsaApiModUtils::GetSingleton();
		if (!singleton)
			return "Singleton not found, please check the mod is correctly installed";
		return {};
	}

	// this function lets you send a notification to a player using the pretty widgets from the api utils mod, will all the possible params, to specific player
	FORCEINLINE FString SendNotificationPrettyToPlayer(APlayerController* PC, const FString& Text, const FLinearColor& BackgroundColor, const FLinearColor& TextColor,
		const double TextScale, const double Duration, const Position TextJustification, const Position ScreenPosition, const bool bAddToChat)
	{
		return SendNotificationPrettyToPlayer(PC->GetEOSId(), Text, BackgroundColor, TextColor, TextScale, Duration, TextJustification, ScreenPosition, bAddToChat);
	}

	// this function lets you send a notification to a player using the pretty widgets from the api utils mod, will all the possible params, to specific player
	FORCEINLINE FString SendNotificationPrettyToPlayer(const FString& EOSid, const FString& Text, const FLinearColor& BackgroundColor, const FLinearColor& TextColor,
		const double TextScale, const double Duration, const Position TextJustification, const Position ScreenPosition, const bool bAddToChat)
	{
		TArray<FString> ids;
		ids.Add(EOSid);
		return SendNotificationPrettyToPlayers(ids, Text, BackgroundColor, TextColor, TextScale, Duration, TextJustification, ScreenPosition, bAddToChat);
	}

	// this function lets you send a notification to a player using the pretty widgets from the api utils mod, will all the possible params, to all players
	FORCEINLINE FString SendNotificationPrettyToPlayers(TArray<APlayerController*> PCs, const FString& Text, const FLinearColor& BackgroundColor, const FLinearColor& TextColor,
		const double TextScale, const double Duration, const Position TextJustification, const Position ScreenPosition, const bool bAddToChat)
	{
		TArray<FString> ids;
		for (APlayerController* PC : PCs)
			ids.Add(PC->GetEOSId());
		return SendNotificationPrettyToPlayers(ids, Text, BackgroundColor, TextColor, TextScale, Duration, TextJustification, ScreenPosition, bAddToChat);
	}

	FORCEINLINE FString SendNotificationPrettyToPlayers(const TArray<FString>& IDs, const FString& Text, const FLinearColor& BackgroundColor, const FLinearColor& TextColor,
		const double TextScale, const double Duration, const Position TextJustification, const Position ScreenPosition, const bool bAddToChat)
	{
		AsaApiUtilsNotification params(Text, IDs, BackgroundColor, TextColor, TextScale, Duration, TextJustification, ScreenPosition, bAddToChat);
		return AsaApiModUtils::AddNotification(params);
	}
protected:
	// changes the server messages to use pretty widgets from the api utils mod
	void SendServerMessage_Impl(AShooterPlayerController* player_controller, FLinearColor msg_color, const FString& msg) override
	{
		TArray<FString> ids;
		ids.Add(player_controller->GetEOSId());
		SendNotificationPrettyToPlayers(ids, msg, FLinearColor(0, 0, 0, 0), msg_color, 1.0, 0.0, Position::Center, Position::Center, true);
	}

	// changes notifications to use pretty widgets from the api utils mod, this version mostly mimics old ASE notifications
	void SendNotification_Impl(AShooterPlayerController* player_controller, FLinearColor color, float display_scale,
		float display_time, UTexture2D* icon, const FString& msg) override
	{
		TArray<FString> ids;
		ids.Add(player_controller->GetEOSId());
		SendNotificationPrettyToPlayers(ids, msg, FLinearColor(0, 0, 0, 0), color, display_scale, display_time, Position::Center, Position::Center, false);
	}
};

// now you would call "AsaApi::GetApiUtils().SetMessagingManager<AsaApiUtilsMessagingManager>(); in your plugin's load function"
