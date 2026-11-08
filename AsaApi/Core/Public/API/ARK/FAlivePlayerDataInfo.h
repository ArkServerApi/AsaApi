#pragma once


struct FAlivePlayerDataInfo
{
	// Fields

	FString& PlayerNameField() { return *GetNativePointerField<FString*>(this, "FAlivePlayerDataInfo.PlayerName"); }
	FString& PlayerSteamNameField() { return *GetNativePointerField<FString*>(this, "FAlivePlayerDataInfo.PlayerSteamName"); }
	unsigned __int64& PlayerIDField() { return *GetNativePointerField<unsigned __int64*>(this, "FAlivePlayerDataInfo.PlayerID"); }
	FString& TribeNameField() { return *GetNativePointerField<FString*>(this, "FAlivePlayerDataInfo.TribeName"); }
	unsigned __int64& TargetingTeamIDField() { return *GetNativePointerField<unsigned __int64*>(this, "FAlivePlayerDataInfo.TargetingTeamID"); }

	// Bitfields

	// Functions

	static UScriptStruct* StaticStruct() { return FindScriptStruct<FAlivePlayerDataInfo>(); }
};