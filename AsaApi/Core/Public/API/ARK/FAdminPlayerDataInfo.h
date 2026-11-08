#pragma once


struct FAdminPlayerDataInfo
{
	// Fields

	FString& PlayerNameField() { return *GetNativePointerField<FString*>(this, "FAdminPlayerDataInfo.PlayerName"); }
	FString& PlayerSteamNameField() { return *GetNativePointerField<FString*>(this, "FAdminPlayerDataInfo.PlayerSteamName"); }
	FString& SteamIDField() { return *GetNativePointerField<FString*>(this, "FAdminPlayerDataInfo.SteamID"); }
	__int64& LinkedPlayerIDField() { return *GetNativePointerField<__int64*>(this, "FAdminPlayerDataInfo.LinkedPlayerID"); }

	// Bitfields

	// Functions

	static UScriptStruct* StaticStruct() { return FindScriptStruct<FAdminPlayerDataInfo>(); }
};