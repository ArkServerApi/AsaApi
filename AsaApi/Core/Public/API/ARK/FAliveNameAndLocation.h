#pragma once


struct FAliveNameAndLocation
{
	// Fields

	FString& PlayerNameField() { return *GetNativePointerField<FString*>(this, "FAliveNameAndLocation.PlayerName"); }
	FString& TribeNameField() { return *GetNativePointerField<FString*>(this, "FAliveNameAndLocation.TribeName"); }
	unsigned int& TargetingTeamField() { return *GetNativePointerField<unsigned int*>(this, "FAliveNameAndLocation.TargetingTeam"); }
	unsigned __int64& PlayerIDField() { return *GetNativePointerField<unsigned __int64*>(this, "FAliveNameAndLocation.PlayerID"); }
	UE::Math::TVector<double>& LocationField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "FAliveNameAndLocation.Location"); }

	// Bitfields

	// Functions

	static UScriptStruct* StaticStruct() { return FindScriptStruct<FAliveNameAndLocation>(); }
};