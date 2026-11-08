#pragma once


struct FPrimalPlayerDataStruct
{
	// Fields

	unsigned __int64& PlayerDataIDField() { return *GetNativePointerField<unsigned __int64*>(this, "FPrimalPlayerDataStruct.PlayerDataID"); }
	FUniqueNetIdRepl& UniqueIDField() { return *GetNativePointerField<FUniqueNetIdRepl*>(this, "FPrimalPlayerDataStruct.UniqueID"); }
	FString& SavedNetworkAddressField() { return *GetNativePointerField<FString*>(this, "FPrimalPlayerDataStruct.SavedNetworkAddress"); }
	FString& PlayerNameField() { return *GetNativePointerField<FString*>(this, "FPrimalPlayerDataStruct.PlayerName"); }
	unsigned int& LocalPlayerIndexField() { return *GetNativePointerField<unsigned int*>(this, "FPrimalPlayerDataStruct.LocalPlayerIndex"); }
	FPrimalPlayerCharacterConfigStruct& MyPlayerCharacterConfigField() { return *GetNativePointerField<FPrimalPlayerCharacterConfigStruct*>(this, "FPrimalPlayerDataStruct.MyPlayerCharacterConfig"); }
	int& LastPinCodeUsedField() { return *GetNativePointerField<int*>(this, "FPrimalPlayerDataStruct.LastPinCodeUsed"); }
	FPrimalPersistentCharacterStatsStruct& MyPersistentCharacterStatsField() { return *GetNativePointerField<FPrimalPersistentCharacterStatsStruct*>(this, "FPrimalPlayerDataStruct.MyPersistentCharacterStats"); }
	int& NumPersonalDinosField() { return *GetNativePointerField<int*>(this, "FPrimalPlayerDataStruct.NumPersonalDinos"); }
	int& TribeIDField() { return *GetNativePointerField<int*>(this, "FPrimalPlayerDataStruct.TribeID"); }
	TArray<int, TSizedDefaultAllocator<32> >& AppIDSetField() { return *GetNativePointerField<TArray<int, TSizedDefaultAllocator<32> >*>(this, "FPrimalPlayerDataStruct.AppIDSet"); }
	int& PlayerDataVersionField() { return *GetNativePointerField<int*>(this, "FPrimalPlayerDataStruct.PlayerDataVersion"); }
	long double& NextAllowedRespawnTimeField() { return *GetNativePointerField<long double*>(this, "FPrimalPlayerDataStruct.NextAllowedRespawnTime"); }
	long double& LastTimeDiedToEnemyTeamField() { return *GetNativePointerField<long double*>(this, "FPrimalPlayerDataStruct.LastTimeDiedToEnemyTeam"); }
	long double& LoginTimeField() { return *GetNativePointerField<long double*>(this, "FPrimalPlayerDataStruct.LoginTime"); }
	long double& LastLoginTimeField() { return *GetNativePointerField<long double*>(this, "FPrimalPlayerDataStruct.LastLoginTime"); }
	float& AllowedRespawnIntervalField() { return *GetNativePointerField<float*>(this, "FPrimalPlayerDataStruct.AllowedRespawnInterval"); }
	float& NumOfDeathsField() { return *GetNativePointerField<float*>(this, "FPrimalPlayerDataStruct.NumOfDeaths"); }
	int& SpawnDayNumberField() { return *GetNativePointerField<int*>(this, "FPrimalPlayerDataStruct.SpawnDayNumber"); }
	float& SpawnDayTimeField() { return *GetNativePointerField<float*>(this, "FPrimalPlayerDataStruct.SpawnDayTime"); }
	long double& LastInventoryRetrievalUTCTimeField() { return *GetNativePointerField<long double*>(this, "FPrimalPlayerDataStruct.LastInventoryRetrievalUTCTime"); }
	long double& SuicideCooldownStartTimeField() { return *GetNativePointerField<long double*>(this, "FPrimalPlayerDataStruct.SuicideCooldownStartTime"); }
	TArray<FLatestMissionScore, TSizedDefaultAllocator<32> >& LatestMissionScoresField() { return *GetNativePointerField<TArray<FLatestMissionScore, TSizedDefaultAllocator<32> >*>(this, "FPrimalPlayerDataStruct.LatestMissionScores"); }
	TArray<FTrackedActorPlusInfoStruct, TSizedDefaultAllocator<32> >& PersonalCachedTeamActorList_UpdatedOnIntervalField() { return *GetNativePointerField<TArray<FTrackedActorPlusInfoStruct, TSizedDefaultAllocator<32> >*>(this, "FPrimalPlayerDataStruct.PersonalCachedTeamActorList_UpdatedOnInterval"); }
	long double& LastNetworkTimeUpdatedPersonalCachedTeamActorListsField() { return *GetNativePointerField<long double*>(this, "FPrimalPlayerDataStruct.LastNetworkTimeUpdatedPersonalCachedTeamActorLists"); }
	//TArray<FVectorBoolPair, TSizedDefaultAllocator<32> >& ServerSavedLastDeathLocationsField() { return *GetNativePointerField<TArray<FVectorBoolPair, TSizedDefaultAllocator<32> >*>(this, "FPrimalPlayerDataStruct.ServerSavedLastDeathLocations"); }
	//TArray<FTrackedActorIDCategoryPair, TSizedDefaultAllocator<32> >& SavedFavoritedTrackedActorInfoField() { return *GetNativePointerField<TArray<FTrackedActorIDCategoryPair, TSizedDefaultAllocator<32> >*>(this, "FPrimalPlayerDataStruct.SavedFavoritedTrackedActorInfo"); }
	//TArray<FTrackedActorIDCategoryPairWithBool, TSizedDefaultAllocator<32> >& SavedWaypointTrackedActorInfoField() { return *GetNativePointerField<TArray<FTrackedActorIDCategoryPairWithBool, TSizedDefaultAllocator<32> >*>(this, "FPrimalPlayerDataStruct.SavedWaypointTrackedActorInfo"); }

	// Bitfields

	BitFieldValue<bool, unsigned __int32> bFirstSpawned() { return { this, "FPrimalPlayerDataStruct.bFirstSpawned" }; }
	BitFieldValue<bool, unsigned __int32> bUseSpectator() { return { this, "FPrimalPlayerDataStruct.bUseSpectator" }; }

	// Functions

	static UScriptStruct* StaticStruct() { return FindScriptStruct<FPrimalPlayerDataStruct>(); }
	FPrimalPlayerDataStruct* operator=(const FPrimalPlayerDataStruct* __that) { return NativeCall<FPrimalPlayerDataStruct*, const FPrimalPlayerDataStruct*>(this, "FPrimalPlayerDataStruct.operator=(FPrimalPlayerDataStruct&)", __that); }
};