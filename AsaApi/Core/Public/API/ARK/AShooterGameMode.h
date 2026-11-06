#pragma once
#include "BulkForward.h"


struct AShooterGameMode : APrimalGameMode
{
	// Fields

	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// TArray<FAttachedInstancedHarvestingElement*, TSizedDefaultAllocator<32> >& HiddenHarvestingComponentsField();
	int& LastRepopulationIndexToCheckField() { return *GetNativePointerField<int*>(this, "AShooterGameMode.LastRepopulationIndexToCheck"); }
	TMap<UClass*, TMap<FString, FString, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<FString, FString, 0> >, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<UClass*, TMap<FString, FString, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<FString, FString, 0> >, 0> >& LiveTuningOverloadBaselineValuesField() { return *GetNativePointerField<TMap<UClass*, TMap<FString, FString, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<FString, FString, 0> >, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<UClass*, TMap<FString, FString, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<FString, FString, 0> >, 0> >*>(this, "AShooterGameMode.LiveTuningOverloadBaselineValues"); }
	FTimerHandle& DynamicConfigHandleField() { return *GetNativePointerField<FTimerHandle*>(this, "AShooterGameMode.DynamicConfigHandle"); }
	FString& AlarmNotificationKeyField() { return *GetNativePointerField<FString*>(this, "AShooterGameMode.AlarmNotificationKey"); }
	FString& AlarmNotificationURLField() { return *GetNativePointerField<FString*>(this, "AShooterGameMode.AlarmNotificationURL"); }
	TArray<TWeakObjectPtr<APrimalStructure>, TSizedDefaultAllocator<32> >& PendingStructureDestroysField() { return *GetNativePointerField<TArray<TWeakObjectPtr<APrimalStructure>, TSizedDefaultAllocator<32> >*>(this, "AShooterGameMode.PendingStructureDestroys"); }
	TArray<FAtlasAdminCommandTrackingEntry, TSizedDefaultAllocator<32> >& QueuedAdminCommandsField() { return *GetNativePointerField<TArray<FAtlasAdminCommandTrackingEntry, TSizedDefaultAllocator<32> >*>(this, "AShooterGameMode.QueuedAdminCommands"); }
	TSet<FString, DefaultKeyFuncs<FString, 0>, FDefaultSetAllocator>& AllowedAdminIPsField() { return *GetNativePointerField<TSet<FString, DefaultKeyFuncs<FString, 0>, FDefaultSetAllocator>*>(this, "AShooterGameMode.AllowedAdminIPs"); }
	FString& BanFileNameField() { return *GetNativePointerField<FString*>(this, "AShooterGameMode.BanFileName"); }
	TMap<FString, FPlayerBanInfo, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<FString, FPlayerBanInfo, 0> >& BannedMapField() { return *GetNativePointerField<TMap<FString, FPlayerBanInfo, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<FString, FPlayerBanInfo, 0> >*>(this, "AShooterGameMode.BannedMap"); }
	TMap<FString, FPlayerBanInfo, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<FString, FPlayerBanInfo, 0> >& GlobalBannedMapField() { return *GetNativePointerField<TMap<FString, FPlayerBanInfo, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<FString, FPlayerBanInfo, 0> >*>(this, "AShooterGameMode.GlobalBannedMap"); }
	TDelegate<void __cdecl(bool), FDefaultDelegateUserPolicy>& OnSavingWorldFinishedDelegateField() { return *GetNativePointerField<TDelegate<void __cdecl(bool), FDefaultDelegateUserPolicy>*>(this, "AShooterGameMode.OnSavingWorldFinishedDelegate"); }
	TDelegate<void __cdecl(void), FDefaultDelegateUserPolicy>& OnSavingWorldStartedDelegateField() { return *GetNativePointerField<TDelegate<void __cdecl(void), FDefaultDelegateUserPolicy>*>(this, "AShooterGameMode.OnSavingWorldStartedDelegate"); }
	bool& IsSavingPlayerDataField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.IsSavingPlayerData"); }
	bool& IsSavingWorldDataField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.IsSavingWorldData"); }
	bool& IsSavingOverlayOpenedField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.IsSavingOverlayOpened"); }
	double& LastTimeCheckedForSaveBackupField() { return *GetNativePointerField<double*>(this, "AShooterGameMode.LastTimeCheckedForSaveBackup"); }
	int& LastDayOfYearBackedUpField() { return *GetNativePointerField<int*>(this, "AShooterGameMode.LastDayOfYearBackedUp"); }
	FProcHandle& GameBackupProcHandleField() { return *GetNativePointerField<FProcHandle*>(this, "AShooterGameMode.GameBackupProcHandle"); }
	double& TimeLastStartedDoingRemoteBackupField() { return *GetNativePointerField<double*>(this, "AShooterGameMode.TimeLastStartedDoingRemoteBackup"); }
	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// FAmazonS3GetObject*& S3CheatDownloaderField();
	double& TimeTillNextCheaterUpdateField() { return *GetNativePointerField<double*>(this, "AShooterGameMode.TimeTillNextCheaterUpdate"); }
	float& UpdateAllowedCheatersIntervalField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.UpdateAllowedCheatersInterval"); }
	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// FAmazonS3GetObject*& S3BanDownloaderField();
	double& TimeTillNextBanUpdateField() { return *GetNativePointerField<double*>(this, "AShooterGameMode.TimeTillNextBanUpdate"); }
	float& UpdateBanIntervalField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.UpdateBanInterval"); }
	FString& UnofficalBanListURLField() { return *GetNativePointerField<FString*>(this, "AShooterGameMode.UnofficalBanListURL"); }
	FString& UnofficalAdminListURLField() { return *GetNativePointerField<FString*>(this, "AShooterGameMode.UnofficalAdminListURL"); }
	TMap<FClassMapKey, FMissionGlobalData, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<FClassMapKey, FMissionGlobalData, 0> >& MissionGlobalDataField() { return *GetNativePointerField<TMap<FClassMapKey, FMissionGlobalData, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<FClassMapKey, FMissionGlobalData, 0> >*>(this, "AShooterGameMode.MissionGlobalData"); }
	UShooterCheatManager*& ServerCheatManagerField() { return *GetNativePointerField<UShooterCheatManager**>(this, "AShooterGameMode.ServerCheatManager"); }
	float& ForceLoadWorldSecondsField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.ForceLoadWorldSeconds"); }
	float& LoadedAtTimeSecondsField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.LoadedAtTimeSeconds"); }
	double& LoadedAtPersistentTimeField() { return *GetNativePointerField<double*>(this, "AShooterGameMode.LoadedAtPersistentTime"); }
	bool& InitiatedArkTributeAvailabilityCheckField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.InitiatedArkTributeAvailabilityCheck"); }
	URCONServer*& RCONSocketField() { return *GetNativePointerField<URCONServer**>(this, "AShooterGameMode.RCONSocket"); }
	FString& PlayersJoinNoCheckFilenameField() { return *GetNativePointerField<FString*>(this, "AShooterGameMode.PlayersJoinNoCheckFilename"); }
	FString& PlayersExclusiveCheckFilenameField() { return *GetNativePointerField<FString*>(this, "AShooterGameMode.PlayersExclusiveCheckFilename"); }
	UShooterCheatManager*& GlobalCommandsCheatManagerField() { return *GetNativePointerField<UShooterCheatManager**>(this, "AShooterGameMode.GlobalCommandsCheatManager"); }
	double& LastUpdatedLoginLocksTimeField() { return *GetNativePointerField<double*>(this, "AShooterGameMode.LastUpdatedLoginLocksTime"); }
	double& LastLoginLocksConnectedTimeField() { return *GetNativePointerField<double*>(this, "AShooterGameMode.LastLoginLocksConnectedTime"); }
	FString& CheckGlobalEnablesURLField() { return *GetNativePointerField<FString*>(this, "AShooterGameMode.CheckGlobalEnablesURL"); }
	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// UDatabase_LoginData*& Database_LoginDataRefField();
	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// UDatabase_PubSub_GeneralNotifications*& PubSub_GeneralNotificationsRefField();
	int& TerrainGeneratorVersionField() { return *GetNativePointerField<int*>(this, "AShooterGameMode.TerrainGeneratorVersion"); }
	TArray<FUniqueNetIdString, TSizedDefaultAllocator<32> >& PlayersJoinNoCheckField() { return *GetNativePointerField<TArray<FUniqueNetIdString, TSizedDefaultAllocator<32> >*>(this, "AShooterGameMode.PlayersJoinNoCheck"); }
	TArray<FUniqueNetIdString, TSizedDefaultAllocator<32> >& PlayersExclusiveListField() { return *GetNativePointerField<TArray<FUniqueNetIdString, TSizedDefaultAllocator<32> >*>(this, "AShooterGameMode.PlayersExclusiveList"); }
	void*& GameBackupPipeReadField() { return *GetNativePointerField<void**>(this, "AShooterGameMode.GameBackupPipeRead"); }
	void*& GameBackupPipeWriteField() { return *GetNativePointerField<void**>(this, "AShooterGameMode.GameBackupPipeWrite"); }
	TSet<unsigned int, DefaultKeyFuncs<unsigned int, 0>, FDefaultSetAllocator>& TribesIdsField() { return *GetNativePointerField<TSet<unsigned int, DefaultKeyFuncs<unsigned int, 0>, FDefaultSetAllocator>*>(this, "AShooterGameMode.TribesIds"); }
	TMap<int, unsigned __int64, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<int, unsigned __int64, 0> >& PlayersIdsField() { return *GetNativePointerField<TMap<int, unsigned __int64, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<int, unsigned __int64, 0> >*>(this, "AShooterGameMode.PlayersIds"); }
	TMap<unsigned __int64, int, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<unsigned __int64, int, 0> >& SteamIdsField() { return *GetNativePointerField<TMap<unsigned __int64, int, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<unsigned __int64, int, 0> >*>(this, "AShooterGameMode.SteamIds"); }
	TMap<int, FString, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<int, FString, 0> >& PlayerStringIdsField() { return *GetNativePointerField<TMap<int, FString, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<int, FString, 0> >*>(this, "AShooterGameMode.PlayerStringIds"); }
	bool& bGlobalDisableLoginLockCheckField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bGlobalDisableLoginLockCheck"); }
	bool& bTempDisableLoginLockCheckField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bTempDisableLoginLockCheck"); }
	FString& MyServerIdField() { return *GetNativePointerField<FString*>(this, "AShooterGameMode.MyServerId"); }
	TArray<FString, TSizedDefaultAllocator<32> >& PendingLoginLockReleasesField() { return *GetNativePointerField<TArray<FString, TSizedDefaultAllocator<32> >*>(this, "AShooterGameMode.PendingLoginLockReleases"); }
	TMap<FString, double, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<FString, double, 0> >& ActiveProfilesSavingField() { return *GetNativePointerField<TMap<FString, double, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<FString, double, 0> >*>(this, "AShooterGameMode.ActiveProfilesSaving"); }
	FString& LaunchOptionsField() { return *GetNativePointerField<FString*>(this, "AShooterGameMode.LaunchOptions"); }
	TArray<FTribeData, TSizedDefaultAllocator<32> >& TribesDataField() { return *GetNativePointerField<TArray<FTribeData, TSizedDefaultAllocator<32> >*>(this, "AShooterGameMode.TribesData"); }
	TArray<APrimalDinoCharacter*, TSizedDefaultAllocator<32> >& ActivelyTamingDinosField() { return *GetNativePointerField<TArray<APrimalDinoCharacter*, TSizedDefaultAllocator<32> >*>(this, "AShooterGameMode.ActivelyTamingDinos"); }
	bool& bAutoCreateNewPlayerDataField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bAutoCreateNewPlayerData"); }
	bool& bIsRestartingField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bIsRestarting"); }
	bool& bProximityVoiceChatField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bProximityVoiceChat"); }
	bool& bProximityChatField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bProximityChat"); }
	bool& bAutoRestoreBackupsField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bAutoRestoreBackups"); }
	float& DifficultyValueField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.DifficultyValue"); }
	float& DifficultyValueMinField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.DifficultyValueMin"); }
	float& DifficultyValueMaxField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.DifficultyValueMax"); }
	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// float& ProximityRadiusField();
	float& ProximityRadiusUnconsiousScaleField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.ProximityRadiusUnconsiousScale"); }
	TSubclassOf<UCheatManager>& CheatClassField() { return *GetNativePointerField<TSubclassOf<UCheatManager>*>(this, "AShooterGameMode.CheatClass"); }
	bool& bIsOfficialServerField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bIsOfficialServer"); }
	bool& bIsCurrentlySavingWorldField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bIsCurrentlySavingWorld"); }
	std::atomic<bool>& bBusySavingWorldField() { return *GetNativePointerField<std::atomic<bool>*>(this, "AShooterGameMode.bBusySavingWorld"); }
	bool& bIsConsoleUnOfficialPCServerField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bIsConsoleUnOfficialPCServer"); }
	bool& bServerAllowArkDownloadField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bServerAllowArkDownload"); }
	bool& bServerAllowThirdPersonPlayerField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bServerAllowThirdPersonPlayer"); }
	bool& bUseExclusiveListField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bUseExclusiveList"); }
	bool& bAlwaysNotifyPlayerLeftField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bAlwaysNotifyPlayerLeft"); }
	bool& bAlwaysNotifyPlayerJoinedField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bAlwaysNotifyPlayerJoined"); }
	bool& bServerHardcoreField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bServerHardcore"); }
	bool& bServerPVEField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bServerPVE"); }
	bool& bServerCrosshairField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bServerCrosshair"); }
	bool& bServerForceNoHUDField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bServerForceNoHUD"); }
	bool& bMapPlayerLocationField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bMapPlayerLocation"); }
	bool& bAllowFlyerCarryPvEField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bAllowFlyerCarryPvE"); }
	bool& bDisableStructureDecayPvEField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bDisableStructureDecayPvE"); }
	bool& bDisableDinoDecayPvEField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bDisableDinoDecayPvE"); }
	bool& bEnablePvPGammaField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bEnablePvPGamma"); }
	bool& bDisablePvEGammaField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bDisablePvEGamma"); }
	bool& bClampResourceHarvestDamageField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bClampResourceHarvestDamage"); }
	bool& bPreventStructurePaintingField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bPreventStructurePainting"); }
	bool& bAllowCaveBuildingPvEField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bAllowCaveBuildingPvE"); }
	bool& bAllowCaveBuildingPvPField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bAllowCaveBuildingPvP"); }
	bool& bAdminLoggingField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bAdminLogging"); }
	bool& bPvPStructureDecayField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bPvPStructureDecay"); }
	bool& bAutoDestroyStructuresField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bAutoDestroyStructures"); }
	bool& bForceAllStructureLockingField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bForceAllStructureLocking"); }
	bool& bAllowDeprecatedStructuresField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bAllowDeprecatedStructures"); }
	bool& bPreventTribeAlliancesField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bPreventTribeAlliances"); }
	bool& bAllowHitMarkersField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bAllowHitMarkers"); }
	bool& bOnlyAutoDestroyCoreStructuresField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bOnlyAutoDestroyCoreStructures"); }
	bool& bPreventMateBoostField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bPreventMateBoost"); }
	bool& bTribeLogDestroyedEnemyStructuresField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bTribeLogDestroyedEnemyStructures"); }
	bool& bPvEAllowStructuresAtSupplyDropsField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bPvEAllowStructuresAtSupplyDrops"); }
	bool& bServerGameLogIncludeTribeLogsField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bServerGameLogIncludeTribeLogs"); }
	bool& bServerRCONOutputTribeLogsField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bServerRCONOutputTribeLogs"); }
	bool& bUseOptimizedHarvestingHealthField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bUseOptimizedHarvestingHealth"); }
	bool& bClampItemSpoilingTimesField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bClampItemSpoilingTimes"); }
	bool& bClampItemStatsField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bClampItemStats"); }
	bool& bAutoDestroyDecayedDinosField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bAutoDestroyDecayedDinos"); }
	bool& bAllowMultipleAttachedC4Field() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bAllowMultipleAttachedC4"); }
	bool& bAllowFlyingStaminaRecoveryField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bAllowFlyingStaminaRecovery"); }
	bool& bCrossARKAllowForeignDinoDownloadsField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bCrossARKAllowForeignDinoDownloads"); }
	bool& bPreventSpawnAnimationsField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bPreventSpawnAnimations"); }
	bool& bIsLegacyServerField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bIsLegacyServer"); }
	bool& bIdlePlayerKickAllowedField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bIdlePlayerKickAllowed"); }
	bool& bEnableVictoryCoreDupeCheckField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bEnableVictoryCoreDupeCheck"); }
	bool& bIgnoreLimitMaxStructuresInRangeTypeFlagField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bIgnoreLimitMaxStructuresInRangeTypeFlag"); }
	bool& bEnableOfficialOnlyVersioningCodeField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bEnableOfficialOnlyVersioningCode"); }
	bool& bEnableCryopodNerfField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bEnableCryopodNerf"); }
	bool& bUseAlarmNotificationsField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bUseAlarmNotifications"); }
	int& TheMaxStructuresInRangeField() { return *GetNativePointerField<int*>(this, "AShooterGameMode.TheMaxStructuresInRange"); }
	int& MaxStructuresInSmallRadiusField() { return *GetNativePointerField<int*>(this, "AShooterGameMode.MaxStructuresInSmallRadius"); }
	bool& bPreventDroppedItemPhysicsField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bPreventDroppedItemPhysics"); }
	bool& bEnableCryoSicknessPVEField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bEnableCryoSicknessPVE"); }
	float& CryopodNerfDamageMultField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.CryopodNerfDamageMult"); }
	float& CryopodNerfDurationField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.CryopodNerfDuration"); }
	bool& bEnableMeshBitingProtectionField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bEnableMeshBitingProtection"); }
	float& CryopodNerfIncomingDamageMultPercentField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.CryopodNerfIncomingDamageMultPercent"); }
	int& RCONPortField() { return *GetNativePointerField<int*>(this, "AShooterGameMode.RCONPort"); }
	float& DayCycleSpeedScaleField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.DayCycleSpeedScale"); }
	float& NightTimeSpeedScaleField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.NightTimeSpeedScale"); }
	float& DayTimeSpeedScaleField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.DayTimeSpeedScale"); }
	float& PvEStructureDecayPeriodMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.PvEStructureDecayPeriodMultiplier"); }
	float& StructurePreventResourceRadiusMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.StructurePreventResourceRadiusMultiplier"); }
	float& PvEDinoDecayPeriodMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.PvEDinoDecayPeriodMultiplier"); }
	float& MaxTamedDinosField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.MaxTamedDinos"); }
	float& ListenServerTetherDistanceMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.ListenServerTetherDistanceMultiplier"); }
	float& PerPlatformMaxStructuresMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.PerPlatformMaxStructuresMultiplier"); }
	float& AutoDestroyOldStructuresMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.AutoDestroyOldStructuresMultiplier"); }
	float& RCONServerGameLogBufferField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.RCONServerGameLogBuffer"); }
	float& OxygenSwimSpeedStatMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.OxygenSwimSpeedStatMultiplier"); }
	float& ServerAutoForceRespawnWildDinosIntervalField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.ServerAutoForceRespawnWildDinosInterval"); }
	float& RadiusStructuresInSmallRadiusField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.RadiusStructuresInSmallRadius"); }
	float& EnableAFKKickPlayerCountPercentField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.EnableAFKKickPlayerCountPercent"); }
	bool& OverrideStartTimeField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.OverrideStartTime"); }
	int& StartTimeHourField() { return *GetNativePointerField<int*>(this, "AShooterGameMode.StartTimeHour"); }
	float& ResourcesRespawnPeriodMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.ResourcesRespawnPeriodMultiplier"); }
	float& KickIdlePlayersPeriodField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.KickIdlePlayersPeriod"); }
	float& MateBoostEffectMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.MateBoostEffectMultiplier"); }
	float& AutoSavePeriodMinutesField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.AutoSavePeriodMinutes"); }
	float& XPMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.XPMultiplier"); }
	FName& ActiveEventField() { return *GetNativePointerField<FName*>(this, "AShooterGameMode.ActiveEvent"); }
	float& TribeNameChangeCooldownField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.TribeNameChangeCooldown"); }
	float& PlatformSaddleBuildAreaBoundsMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.PlatformSaddleBuildAreaBoundsMultiplier"); }
	bool& bAlwaysAllowStructurePickupField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bAlwaysAllowStructurePickup"); }
	float& StructurePickupTimeAfterPlacementField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.StructurePickupTimeAfterPlacement"); }
	float& StructurePickupHoldDurationField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.StructurePickupHoldDuration"); }
	bool& bAllowHideDamageSourceFromLogsField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bAllowHideDamageSourceFromLogs"); }
	float& KillXPMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.KillXPMultiplier"); }
	float& HarvestXPMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.HarvestXPMultiplier"); }
	float& CraftXPMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.CraftXPMultiplier"); }
	float& GenericXPMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.GenericXPMultiplier"); }
	float& SpecialXPMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.SpecialXPMultiplier"); }
	float& AlphaKillXPMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.AlphaKillXPMultiplier"); }
	float& CaveKillXPMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.CaveKillXPMultiplier"); }
	float& WildKillXPMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.WildKillXPMultiplier"); }
	float& BossKillXPMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.BossKillXPMultiplier"); }
	float& TamedKillXPMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.TamedKillXPMultiplier"); }
	float& UnclaimedKillXPMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.UnclaimedKillXPMultiplier"); }
	float& ExplorerNoteXPMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.ExplorerNoteXPMultiplier"); }
	FTimerHandle& MaintenanceRestartHandleField() { return *GetNativePointerField<FTimerHandle*>(this, "AShooterGameMode.MaintenanceRestartHandle"); }
	float& RandomAutoSaveSpreadField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.RandomAutoSaveSpread"); }
	FString& SteamAPIKeyField() { return *GetNativePointerField<FString*>(this, "AShooterGameMode.SteamAPIKey"); }
	FString& LastServerNotificationMessageField() { return *GetNativePointerField<FString*>(this, "AShooterGameMode.LastServerNotificationMessage"); }
	double& LastServerNotificationRecievedAtField() { return *GetNativePointerField<double*>(this, "AShooterGameMode.LastServerNotificationRecievedAt"); }
	double& LastExecSaveTimeField() { return *GetNativePointerField<double*>(this, "AShooterGameMode.LastExecSaveTime"); }
	double& LastTimeSavedWorldField() { return *GetNativePointerField<double*>(this, "AShooterGameMode.LastTimeSavedWorld"); }
	FString& LastClaimedGameCodeField() { return *GetNativePointerField<FString*>(this, "AShooterGameMode.LastClaimedGameCode"); }
	TArray<FString, TSizedDefaultAllocator<32> >& ArkGameCodesField() { return *GetNativePointerField<TArray<FString, TSizedDefaultAllocator<32> >*>(this, "AShooterGameMode.ArkGameCodes"); }
	bool& bIsCurrentlyRequestingKeyField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bIsCurrentlyRequestingKey"); }
	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// FString& SaveDirectoryNameField();
	TArray<UPrimalPlayerData*, TSizedDefaultAllocator<32> >& PlayerDatasField() { return *GetNativePointerField<TArray<UPrimalPlayerData*, TSizedDefaultAllocator<32> >*>(this, "AShooterGameMode.PlayerDatas"); }
	FTimerHandle& DoNPCZoneManagerLandscapeChangeFixupsHandleField() { return *GetNativePointerField<FTimerHandle*>(this, "AShooterGameMode.DoNPCZoneManagerLandscapeChangeFixupsHandle"); }
	int& NPCZoneManagerModField() { return *GetNativePointerField<int*>(this, "AShooterGameMode.NPCZoneManagerMod"); }
	bool& bPopulatingSpawnZonesField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bPopulatingSpawnZones"); }
	bool& bRestartedAPlayerField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bRestartedAPlayer"); }
	bool& bForceRespawnDinosField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bForceRespawnDinos"); }
	bool& bFirstSaveWorldField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bFirstSaveWorld"); }
	bool& bAllowRaidDinoFeedingField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bAllowRaidDinoFeeding"); }
	FDateTime& LastBackupTimeField() { return *GetNativePointerField<FDateTime*>(this, "AShooterGameMode.LastBackupTime"); }
	FDateTime& LastSaveWorldTimeField() { return *GetNativePointerField<FDateTime*>(this, "AShooterGameMode.LastSaveWorldTime"); }
	TArray<int, TSizedDefaultAllocator<32> >& DeferredTribeSavesField() { return *GetNativePointerField<TArray<int, TSizedDefaultAllocator<32> >*>(this, "AShooterGameMode.DeferredTribeSaves"); }
	FCharacterPossessionByPlayer& OnCharacterPossessedByPlayerField() { return *GetNativePointerField<FCharacterPossessionByPlayer*>(this, "AShooterGameMode.OnCharacterPossessedByPlayer"); }
	FCharacterPossessionByPlayer& OnCharacterUnpossessedByPlayerField() { return *GetNativePointerField<FCharacterPossessionByPlayer*>(this, "AShooterGameMode.OnCharacterUnpossessedByPlayer"); }
	FShooterCharacterSpawned& OnShooterCharacterSpawnedField() { return *GetNativePointerField<FShooterCharacterSpawned*>(this, "AShooterGameMode.OnShooterCharacterSpawned"); }
	FShooterCharacterDied& OnShooterCharacterDiedField() { return *GetNativePointerField<FShooterCharacterDied*>(this, "AShooterGameMode.OnShooterCharacterDied"); }
	FMissionTriggerBeginOverlap& OnMissionTriggerBeginOverlapField() { return *GetNativePointerField<FMissionTriggerBeginOverlap*>(this, "AShooterGameMode.OnMissionTriggerBeginOverlap"); }
	FMissionTriggerEndOverlap& OnMissionTriggerEndOverlapField() { return *GetNativePointerField<FMissionTriggerEndOverlap*>(this, "AShooterGameMode.OnMissionTriggerEndOverlap"); }
	float& TamedDinoDamageMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.TamedDinoDamageMultiplier"); }
	float& DinoDamageMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.DinoDamageMultiplier"); }
	float& PlayerDamageMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.PlayerDamageMultiplier"); }
	float& StructureDamageMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.StructureDamageMultiplier"); }
	float& PlayerResistanceMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.PlayerResistanceMultiplier"); }
	float& DinoResistanceMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.DinoResistanceMultiplier"); }
	float& TamedDinoResistanceMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.TamedDinoResistanceMultiplier"); }
	float& StructureResistanceMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.StructureResistanceMultiplier"); }
	bool& bJoinInProgressGamesAsSpectatorField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bJoinInProgressGamesAsSpectator"); }
	float& TamingSpeedMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.TamingSpeedMultiplier"); }
	float& HarvestAmountMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.HarvestAmountMultiplier"); }
	float& HarvestHealthMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.HarvestHealthMultiplier"); }
	float& PlayerCharacterWaterDrainMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.PlayerCharacterWaterDrainMultiplier"); }
	float& PlayerCharacterFoodDrainMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.PlayerCharacterFoodDrainMultiplier"); }
	float& DinoCharacterFoodDrainMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.DinoCharacterFoodDrainMultiplier"); }
	float& RaidDinoCharacterFoodDrainMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.RaidDinoCharacterFoodDrainMultiplier"); }
	float& PlayerCharacterStaminaDrainMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.PlayerCharacterStaminaDrainMultiplier"); }
	float& DinoCharacterStaminaDrainMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.DinoCharacterStaminaDrainMultiplier"); }
	float& PlayerCharacterHealthRecoveryMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.PlayerCharacterHealthRecoveryMultiplier"); }
	float& DinoCharacterHealthRecoveryMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.DinoCharacterHealthRecoveryMultiplier"); }
	float& CarnivoreNaturalTargetingRangeMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.CarnivoreNaturalTargetingRangeMultiplier"); }
	float& CarnivorePlayerAggroMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.CarnivorePlayerAggroMultiplier"); }
	float& HerbivoreNaturalTargetingRangeMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.HerbivoreNaturalTargetingRangeMultiplier"); }
	float& HerbivorePlayerAggroMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.HerbivorePlayerAggroMultiplier"); }
	bool& AIForceTargetPlayersField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.AIForceTargetPlayers"); }
	bool& AIForceOverlapCheckField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.AIForceOverlapCheck"); }
	float& DinoCountMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.DinoCountMultiplier"); }
	bool& bDisableSaveLoadField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bDisableSaveLoad"); }
	bool& bDisableXPField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bDisableXP"); }
	bool& bDisableDynamicMusicField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bDisableDynamicMusic"); }
	TArray<FLevelExperienceRamp, TSizedDefaultAllocator<32> >& LevelExperienceRampOverridesField() { return *GetNativePointerField<TArray<FLevelExperienceRamp, TSizedDefaultAllocator<32> >*>(this, "AShooterGameMode.LevelExperienceRampOverrides"); }
	TArray<int, TSizedDefaultAllocator<32> >& OverridePlayerLevelEngramPointsField() { return *GetNativePointerField<TArray<int, TSizedDefaultAllocator<32> >*>(this, "AShooterGameMode.OverridePlayerLevelEngramPoints"); }
	TArray<int, TSizedDefaultAllocator<32> >& ExcludeItemIndicesField() { return *GetNativePointerField<TArray<int, TSizedDefaultAllocator<32> >*>(this, "AShooterGameMode.ExcludeItemIndices"); }
	TArray<FEngramEntryOverride, TSizedDefaultAllocator<32> >& OverrideEngramEntriesField() { return *GetNativePointerField<TArray<FEngramEntryOverride, TSizedDefaultAllocator<32> >*>(this, "AShooterGameMode.OverrideEngramEntries"); }
	TArray<FEngramEntryOverride, TSizedDefaultAllocator<32> >& OverrideNamedEngramEntriesField() { return *GetNativePointerField<TArray<FEngramEntryOverride, TSizedDefaultAllocator<32> >*>(this, "AShooterGameMode.OverrideNamedEngramEntries"); }
	TArray<FEngramEntryAutoUnlock, TSizedDefaultAllocator<32> >& EngramEntryAutoUnlocksField() { return *GetNativePointerField<TArray<FEngramEntryAutoUnlock, TSizedDefaultAllocator<32> >*>(this, "AShooterGameMode.EngramEntryAutoUnlocks"); }
	TArray<FString, TSizedDefaultAllocator<32> >& PreventDinoTameClassNamesField() { return *GetNativePointerField<TArray<FString, TSizedDefaultAllocator<32> >*>(this, "AShooterGameMode.PreventDinoTameClassNames"); }
	TArray<FClassMultiplier, TSizedDefaultAllocator<32> >& DinoClassStaminaMultipliersField() { return *GetNativePointerField<TArray<FClassMultiplier, TSizedDefaultAllocator<32> >*>(this, "AShooterGameMode.DinoClassStaminaMultipliers"); }
	TArray<FClassMultiplier, TSizedDefaultAllocator<32> >& TamedDinoClassStaminaMultipliersField() { return *GetNativePointerField<TArray<FClassMultiplier, TSizedDefaultAllocator<32> >*>(this, "AShooterGameMode.TamedDinoClassStaminaMultipliers"); }
	TArray<FClassMultiplier, TSizedDefaultAllocator<32> >& DinoClassSpeedMultipliersField() { return *GetNativePointerField<TArray<FClassMultiplier, TSizedDefaultAllocator<32> >*>(this, "AShooterGameMode.DinoClassSpeedMultipliers"); }
	TArray<FClassMultiplier, TSizedDefaultAllocator<32> >& TamedDinoClassSpeedMultipliersField() { return *GetNativePointerField<TArray<FClassMultiplier, TSizedDefaultAllocator<32> >*>(this, "AShooterGameMode.TamedDinoClassSpeedMultipliers"); }
	TArray<FDinoSpawnWeightMultiplier, TSizedDefaultAllocator<32> >& DinoSpawnWeightMultipliersField() { return *GetNativePointerField<TArray<FDinoSpawnWeightMultiplier, TSizedDefaultAllocator<32> >*>(this, "AShooterGameMode.DinoSpawnWeightMultipliers"); }
	TArray<FClassMultiplier, TSizedDefaultAllocator<32> >& DinoClassResistanceMultipliersField() { return *GetNativePointerField<TArray<FClassMultiplier, TSizedDefaultAllocator<32> >*>(this, "AShooterGameMode.DinoClassResistanceMultipliers"); }
	TArray<FClassMultiplier, TSizedDefaultAllocator<32> >& TamedDinoClassResistanceMultipliersField() { return *GetNativePointerField<TArray<FClassMultiplier, TSizedDefaultAllocator<32> >*>(this, "AShooterGameMode.TamedDinoClassResistanceMultipliers"); }
	TArray<FClassMultiplier, TSizedDefaultAllocator<32> >& DinoClassDamageMultipliersField() { return *GetNativePointerField<TArray<FClassMultiplier, TSizedDefaultAllocator<32> >*>(this, "AShooterGameMode.DinoClassDamageMultipliers"); }
	TArray<FClassMultiplier, TSizedDefaultAllocator<32> >& TamedDinoClassDamageMultipliersField() { return *GetNativePointerField<TArray<FClassMultiplier, TSizedDefaultAllocator<32> >*>(this, "AShooterGameMode.TamedDinoClassDamageMultipliers"); }
	TArray<FClassMultiplier, TSizedDefaultAllocator<32> >& HarvestResourceItemAmountClassMultipliersField() { return *GetNativePointerField<TArray<FClassMultiplier, TSizedDefaultAllocator<32> >*>(this, "AShooterGameMode.HarvestResourceItemAmountClassMultipliers"); }
	TArray<FClassNameReplacement, TSizedDefaultAllocator<32> >& NPCReplacementsField() { return *GetNativePointerField<TArray<FClassNameReplacement, TSizedDefaultAllocator<32> >*>(this, "AShooterGameMode.NPCReplacements"); }
	float& PvPZoneStructureDamageMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.PvPZoneStructureDamageMultiplier"); }
	bool& bOnlyAllowSpecifiedEngramsField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bOnlyAllowSpecifiedEngrams"); }
	int& OverrideMaxExperiencePointsPlayerField() { return *GetNativePointerField<int*>(this, "AShooterGameMode.OverrideMaxExperiencePointsPlayer"); }
	int& OverrideMaxExperiencePointsDinoField() { return *GetNativePointerField<int*>(this, "AShooterGameMode.OverrideMaxExperiencePointsDino"); }
	float& GlobalSpoilingTimeMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.GlobalSpoilingTimeMultiplier"); }
	float& GlobalItemDecompositionTimeMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.GlobalItemDecompositionTimeMultiplier"); }
	float& GlobalCorpseDecompositionTimeMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.GlobalCorpseDecompositionTimeMultiplier"); }
	float& MaxFallSpeedMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.MaxFallSpeedMultiplier"); }
	bool& bAutoPvETimerField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bAutoPvETimer"); }
	bool& bAutoPvEUseSystemTimeField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bAutoPvEUseSystemTime"); }
	bool& bUsingStructureDestructionTagField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bUsingStructureDestructionTag"); }
	FName& StructureDestructionTagField() { return *GetNativePointerField<FName*>(this, "AShooterGameMode.StructureDestructionTag"); }
	float& AutoPvEStartTimeSecondsField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.AutoPvEStartTimeSeconds"); }
	float& AutoPvEStopTimeSecondsField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.AutoPvEStopTimeSeconds"); }
	AHibernationManager*& HibernationManagerField() { return *GetNativePointerField<AHibernationManager**>(this, "AShooterGameMode.HibernationManager"); }
	int& TributeItemExpirationSecondsField() { return *GetNativePointerField<int*>(this, "AShooterGameMode.TributeItemExpirationSeconds"); }
	int& TributeDinoExpirationSecondsField() { return *GetNativePointerField<int*>(this, "AShooterGameMode.TributeDinoExpirationSeconds"); }
	int& TributeCharacterExpirationSecondsField() { return *GetNativePointerField<int*>(this, "AShooterGameMode.TributeCharacterExpirationSeconds"); }
	bool& PreventDownloadSurvivorsField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.PreventDownloadSurvivors"); }
	bool& PreventDownloadItemsField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.PreventDownloadItems"); }
	bool& PreventDownloadDinosField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.PreventDownloadDinos"); }
	bool& bPreventUploadSurvivorsField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bPreventUploadSurvivors"); }
	bool& bPreventUploadItemsField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bPreventUploadItems"); }
	bool& bPreventUploadDinosField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bPreventUploadDinos"); }
	int& MaxTributeItemsField() { return *GetNativePointerField<int*>(this, "AShooterGameMode.MaxTributeItems"); }
	int& MaxTributeDinosField() { return *GetNativePointerField<int*>(this, "AShooterGameMode.MaxTributeDinos"); }
	int& MaxTributeCharactersField() { return *GetNativePointerField<int*>(this, "AShooterGameMode.MaxTributeCharacters"); }
	bool& bIncreasePvPRespawnIntervalField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bIncreasePvPRespawnInterval"); }
	float& IncreasePvPRespawnIntervalCheckPeriodField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.IncreasePvPRespawnIntervalCheckPeriod"); }
	float& IncreasePvPRespawnIntervalMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.IncreasePvPRespawnIntervalMultiplier"); }
	float& IncreasePvPRespawnIntervalBaseAmountField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.IncreasePvPRespawnIntervalBaseAmount"); }
	float& ResourceNoReplenishRadiusStructuresField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.ResourceNoReplenishRadiusStructures"); }
	float& ResourceNoReplenishRadiusPlayersField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.ResourceNoReplenishRadiusPlayers"); }
	float& CropGrowthSpeedMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.CropGrowthSpeedMultiplier"); }
	float& LayEggIntervalMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.LayEggIntervalMultiplier"); }
	float& PoopIntervalMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.PoopIntervalMultiplier"); }
	float& CropDecaySpeedMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.CropDecaySpeedMultiplier"); }
	bool& bAllowChatFromDeadNonAdminsField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bAllowChatFromDeadNonAdmins"); }
	bool& bAllowDisablingSpectatorField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bAllowDisablingSpectator"); }
	bool& bPvEDisableFriendlyFireField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bPvEDisableFriendlyFire"); }
	bool& bFlyerPlatformAllowUnalignedDinoBasingField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bFlyerPlatformAllowUnalignedDinoBasing"); }
	bool& bAllowUnclaimDinosField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bAllowUnclaimDinos"); }
	int& MaxPerTribePlatformSaddleStructureLimitField() { return *GetNativePointerField<int*>(this, "AShooterGameMode.MaxPerTribePlatformSaddleStructureLimit"); }
	int& MaxPlatformSaddleStructureLimitField() { return *GetNativePointerField<int*>(this, "AShooterGameMode.MaxPlatformSaddleStructureLimit"); }
	int& MaxDinoBaseLevelField() { return *GetNativePointerField<int*>(this, "AShooterGameMode.MaxDinoBaseLevel"); }
	int& MaxNumberOfPlayersInTribeField() { return *GetNativePointerField<int*>(this, "AShooterGameMode.MaxNumberOfPlayersInTribe"); }
	float& TribeSlotReuseCooldownField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.TribeSlotReuseCooldown"); }
	float& MatingIntervalMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.MatingIntervalMultiplier"); }
	float& EggHatchSpeedMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.EggHatchSpeedMultiplier"); }
	float& BabyMatureSpeedMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.BabyMatureSpeedMultiplier"); }
	float& BabyFoodConsumptionSpeedMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.BabyFoodConsumptionSpeedMultiplier"); }
	int& CurrentPlatformSaddleStructuresField() { return *GetNativePointerField<int*>(this, "AShooterGameMode.CurrentPlatformSaddleStructures"); }
	FieldArray<float, 12>& PerLevelStatsMultiplier_PlayerField() { return *GetNativePointerField<FieldArray<float, 12>*>(this, "AShooterGameMode.PerLevelStatsMultiplier_Player"); }
	FieldArray<float, 12>& PerLevelStatsMultiplier_DinoTamedField() { return *GetNativePointerField<FieldArray<float, 12>*>(this, "AShooterGameMode.PerLevelStatsMultiplier_DinoTamed"); }
	FieldArray<float, 12>& PerLevelStatsMultiplier_DinoTamed_AddField() { return *GetNativePointerField<FieldArray<float, 12>*>(this, "AShooterGameMode.PerLevelStatsMultiplier_DinoTamed_Add"); }
	FieldArray<float, 12>& PerLevelStatsMultiplier_DinoTamed_AffinityField() { return *GetNativePointerField<FieldArray<float, 12>*>(this, "AShooterGameMode.PerLevelStatsMultiplier_DinoTamed_Affinity"); }
	FieldArray<float, 12>& PerLevelStatsMultiplier_DinoWildField() { return *GetNativePointerField<FieldArray<float, 12>*>(this, "AShooterGameMode.PerLevelStatsMultiplier_DinoWild"); }
	FieldArray<int, 12>& MutagenLevelBoostField() { return *GetNativePointerField<FieldArray<int, 12>*>(this, "AShooterGameMode.MutagenLevelBoost"); }
	FieldArray<int, 12>& MutagenLevelBoost_BredField() { return *GetNativePointerField<FieldArray<int, 12>*>(this, "AShooterGameMode.MutagenLevelBoost_Bred"); }
	FieldArray<int, 8>& ItemStatClampsField() { return *GetNativePointerField<FieldArray<int, 8>*>(this, "AShooterGameMode.ItemStatClamps"); }
	int& MaxGateFrameOnSaddlesField() { return *GetNativePointerField<int*>(this, "AShooterGameMode.MaxGateFrameOnSaddles"); }
	int& MaxHexagonsPerCharacterField() { return *GetNativePointerField<int*>(this, "AShooterGameMode.MaxHexagonsPerCharacter"); }
	bool& bCustomGameModeAllowSpectatorJoinAfterMatchStartField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bCustomGameModeAllowSpectatorJoinAfterMatchStart"); }
	FOutputDeviceFile& GameplayLogFileField() { return *GetNativePointerField<FOutputDeviceFile*>(this, "AShooterGameMode.GameplayLogFile"); }
	FOutputDeviceFile& ServerGameLogFileField() { return *GetNativePointerField<FOutputDeviceFile*>(this, "AShooterGameMode.ServerGameLogFile"); }
	bool& bGameplayLogEnabledField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bGameplayLogEnabled"); }
	bool& bServerGameLogEnabledField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bServerGameLogEnabled"); }
	TSubclassOf<UPrimalItem>& BonusSupplyCrateItemClassField() { return *GetNativePointerField<TSubclassOf<UPrimalItem>*>(this, "AShooterGameMode.BonusSupplyCrateItemClass"); }
	float& BonusSupplyCrateItemGiveIntervalField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.BonusSupplyCrateItemGiveInterval"); }
	float& StructureDamageRepairCooldownField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.StructureDamageRepairCooldown"); }
	float& CustomRecipeEffectivenessMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.CustomRecipeEffectivenessMultiplier"); }
	float& CustomRecipeSkillMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.CustomRecipeSkillMultiplier"); }
	FString& BonusSupplyCrateItemStringField() { return *GetNativePointerField<FString*>(this, "AShooterGameMode.BonusSupplyCrateItemString"); }
	bool& MaxDifficultyField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.MaxDifficulty"); }
	bool& bPvEAllowTribeWarField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bPvEAllowTribeWar"); }
	bool& bPvEAllowTribeWarCancelField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bPvEAllowTribeWarCancel"); }
	bool& bAllowCustomRecipesField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bAllowCustomRecipes"); }
	bool& bPassiveDefensesDamageRiderlessDinosField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bPassiveDefensesDamageRiderlessDinos"); }
	double& LastBonusSupplyCrateItemGiveTimeField() { return *GetNativePointerField<double*>(this, "AShooterGameMode.LastBonusSupplyCrateItemGiveTime"); }
	bool& bEnableDeathTeamSpectatorField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bEnableDeathTeamSpectator"); }
	bool& bTribeStoreCharacterConfigurationField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bTribeStoreCharacterConfiguration"); }
	TMap<int, TSet<int, DefaultKeyFuncs<int, 0>, FDefaultSetAllocator>, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<int, TSet<int, DefaultKeyFuncs<int, 0>, FDefaultSetAllocator>, 0> >& PvEActiveTribeWarsField() { return *GetNativePointerField<TMap<int, TSet<int, DefaultKeyFuncs<int, 0>, FDefaultSetAllocator>, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<int, TSet<int, DefaultKeyFuncs<int, 0>, FDefaultSetAllocator>, 0> >*>(this, "AShooterGameMode.PvEActiveTribeWars"); }
	TMap<int, TSet<int, DefaultKeyFuncs<int, 0>, FDefaultSetAllocator>, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<int, TSet<int, DefaultKeyFuncs<int, 0>, FDefaultSetAllocator>, 0> >& TribeAlliesField() { return *GetNativePointerField<TMap<int, TSet<int, DefaultKeyFuncs<int, 0>, FDefaultSetAllocator>, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<int, TSet<int, DefaultKeyFuncs<int, 0>, FDefaultSetAllocator>, 0> >*>(this, "AShooterGameMode.TribeAllies"); }
	TMap<unsigned __int64, UPrimalPlayerData*, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<unsigned __int64, UPrimalPlayerData*, 0> >& IDtoPlayerDatasField() { return *GetNativePointerField<TMap<unsigned __int64, UPrimalPlayerData*, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<unsigned __int64, UPrimalPlayerData*, 0> >*>(this, "AShooterGameMode.IDtoPlayerDatas"); }
	int& MaxTribeLogsField() { return *GetNativePointerField<int*>(this, "AShooterGameMode.MaxTribeLogs"); }
	int& MaxPersonalTamedDinosField() { return *GetNativePointerField<int*>(this, "AShooterGameMode.MaxPersonalTamedDinos"); }
	int& PersonalTamedDinosSaddleStructureCostField() { return *GetNativePointerField<int*>(this, "AShooterGameMode.PersonalTamedDinosSaddleStructureCost"); }
	TArray<FString, TSizedDefaultAllocator<32> >& CachedGameLogField() { return *GetNativePointerField<TArray<FString, TSizedDefaultAllocator<32> >*>(this, "AShooterGameMode.CachedGameLog"); }
	int& MaxPlayersOverrideField() { return *GetNativePointerField<int*>(this, "AShooterGameMode.MaxPlayersOverride"); }
	bool& bDisableFriendlyFireField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bDisableFriendlyFire"); }
	bool& bAllowInactiveTribesField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bAllowInactiveTribes"); }
	bool& bForceMapPlayerLocationField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bForceMapPlayerLocation"); }
	float& DinoHarvestingDamageMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.DinoHarvestingDamageMultiplier"); }
	float& PlayerHarvestingDamageMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.PlayerHarvestingDamageMultiplier"); }
	float& DinoTurretDamageMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.DinoTurretDamageMultiplier"); }
	bool& bDisableLootCratesField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bDisableLootCrates"); }
	float& ExtinctionEventTimeIntervalField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.ExtinctionEventTimeInterval"); }
	bool& bEnableExtraStructurePreventionVolumesField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bEnableExtraStructurePreventionVolumes"); }
	unsigned int& NextExtinctionEventUTCField() { return *GetNativePointerField<unsigned int*>(this, "AShooterGameMode.NextExtinctionEventUTC"); }
	bool& bForceAllowCaveFlyersField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bForceAllowCaveFlyers"); }
	bool& bDoExtinctionEventField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bDoExtinctionEvent"); }
	bool& bPreventOfflinePvPField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bPreventOfflinePvP"); }
	bool& bPvPDinoDecayField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bPvPDinoDecay"); }
	bool& bOverideStructurePlatformPreventionField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bOverideStructurePlatformPrevention"); }
	bool& bAllowAnyoneBabyImprintCuddleField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bAllowAnyoneBabyImprintCuddle"); }
	bool& bDisableImprintDinoBuffField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bDisableImprintDinoBuff"); }
	bool& bOnlyDecayUnsnappedCoreStructuresField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bOnlyDecayUnsnappedCoreStructures"); }
	bool& bFastDecayUnsnappedCoreStructuresField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bFastDecayUnsnappedCoreStructures"); }
	bool& bDestroyUnconnectedWaterPipesField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bDestroyUnconnectedWaterPipes"); }
	bool& bAllowCrateSpawnsOnTopOfStructuresField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bAllowCrateSpawnsOnTopOfStructures"); }
	bool& bNotifyAdminCommandsInChatField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bNotifyAdminCommandsInChat"); }
	bool& bRandomSupplyCratePointsField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bRandomSupplyCratePoints"); }
	bool& bOfficialDisableGenesisMissionsField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bOfficialDisableGenesisMissions"); }
	bool& bAllowSharedConnectionsField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bAllowSharedConnections"); }
	bool& bPreventOutOfTribePinCodeUseField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bPreventOutOfTribePinCodeUse"); }
	bool& bDisabledTranfersDueToRedisConnectionLostField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bDisabledTranfersDueToRedisConnectionLost"); }
	float& PreventOfflinePvPIntervalField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.PreventOfflinePvPInterval"); }
	float& ImplantSuicideCDField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.ImplantSuicideCD"); }
	bool& bUseCharacterTrackerField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bUseCharacterTracker"); }
	bool& bShowFloatingDamageTextField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bShowFloatingDamageText"); }
	int& SavedGameModeVersionField() { return *GetNativePointerField<int*>(this, "AShooterGameMode.SavedGameModeVersion"); }
	int& CurrentGameModeVersionField() { return *GetNativePointerField<int*>(this, "AShooterGameMode.CurrentGameModeVersion"); }
	bool& bAllowTekSuitPowersInGenesisField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bAllowTekSuitPowersInGenesis"); }
	FString& CurrentMerticsURLField() { return *GetNativePointerField<FString*>(this, "AShooterGameMode.CurrentMerticsURL"); }
	FString& CurrentNotificationURLField() { return *GetNativePointerField<FString*>(this, "AShooterGameMode.CurrentNotificationURL"); }
	FString& CurrentAdminCommandTrackingAPIKeyField() { return *GetNativePointerField<FString*>(this, "AShooterGameMode.CurrentAdminCommandTrackingAPIKey"); }
	FString& CurrentAdminCommandTrackingURLField() { return *GetNativePointerField<FString*>(this, "AShooterGameMode.CurrentAdminCommandTrackingURL"); }
	TArray<FItemCraftingCostOverride, TSizedDefaultAllocator<32> >& OverrideItemCraftingCostsField() { return *GetNativePointerField<TArray<FItemCraftingCostOverride, TSizedDefaultAllocator<32> >*>(this, "AShooterGameMode.OverrideItemCraftingCosts"); }
	TArray<FConfigItemCraftingCostOverride, TSizedDefaultAllocator<32> >& ConfigOverrideItemCraftingCostsField() { return *GetNativePointerField<TArray<FConfigItemCraftingCostOverride, TSizedDefaultAllocator<32> >*>(this, "AShooterGameMode.ConfigOverrideItemCraftingCosts"); }
	TArray<FConfigMaxItemQuantityOverride, TSizedDefaultAllocator<32> >& ConfigOverrideItemMaxQuantityField() { return *GetNativePointerField<TArray<FConfigMaxItemQuantityOverride, TSizedDefaultAllocator<32> >*>(this, "AShooterGameMode.ConfigOverrideItemMaxQuantity"); }
	TMap<FClassMapKey, FMaxItemQuantityOverride, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<FClassMapKey, FMaxItemQuantityOverride, 0> >& OverrideMaxItemQuantityMapField() { return *GetNativePointerField<TMap<FClassMapKey, FMaxItemQuantityOverride, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<FClassMapKey, FMaxItemQuantityOverride, 0> >*>(this, "AShooterGameMode.OverrideMaxItemQuantityMap"); }
	TArray<FConfigSupplyCrateItemsOverride, TSizedDefaultAllocator<32> >& ConfigOverrideSupplyCrateItemsField() { return *GetNativePointerField<TArray<FConfigSupplyCrateItemsOverride, TSizedDefaultAllocator<32> >*>(this, "AShooterGameMode.ConfigOverrideSupplyCrateItems"); }
	TArray<FConfigNPCSpawnEntriesContainer, TSizedDefaultAllocator<32> >& ConfigOverrideNPCSpawnEntriesContainerField() { return *GetNativePointerField<TArray<FConfigNPCSpawnEntriesContainer, TSizedDefaultAllocator<32> >*>(this, "AShooterGameMode.ConfigOverrideNPCSpawnEntriesContainer"); }
	TArray<FConfigNPCSpawnEntriesContainer, TSizedDefaultAllocator<32> >& ConfigAddNPCSpawnEntriesContainerField() { return *GetNativePointerField<TArray<FConfigNPCSpawnEntriesContainer, TSizedDefaultAllocator<32> >*>(this, "AShooterGameMode.ConfigAddNPCSpawnEntriesContainer"); }
	TArray<FConfigNPCSpawnEntriesContainer, TSizedDefaultAllocator<32> >& ConfigSubtractNPCSpawnEntriesContainerField() { return *GetNativePointerField<TArray<FConfigNPCSpawnEntriesContainer, TSizedDefaultAllocator<32> >*>(this, "AShooterGameMode.ConfigSubtractNPCSpawnEntriesContainer"); }
	float& BabyImprintingStatScaleMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.BabyImprintingStatScaleMultiplier"); }
	float& BabyCuddleIntervalMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.BabyCuddleIntervalMultiplier"); }
	float& BabyImprintAmountMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.BabyImprintAmountMultiplier"); }
	float& BabyCuddleGracePeriodMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.BabyCuddleGracePeriodMultiplier"); }
	float& BabyCuddleLoseImprintQualitySpeedMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.BabyCuddleLoseImprintQualitySpeedMultiplier"); }
	float& HairGrowthSpeedMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.HairGrowthSpeedMultiplier"); }
	float& DinoHairGrowthSpeedMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.DinoHairGrowthSpeedMultiplier"); }
	bool& bPreventDiseasesField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bPreventDiseases"); }
	bool& bNonPermanentDiseasesField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bNonPermanentDiseases"); }
	UAllClustersInventory*& AllClustersInventoryField() { return *GetNativePointerField<UAllClustersInventory**>(this, "AShooterGameMode.AllClustersInventory"); }
	int& SaveForceRespawnDinosVersionField() { return *GetNativePointerField<int*>(this, "AShooterGameMode.SaveForceRespawnDinosVersion"); }
	unsigned long& ServerIDField() { return *GetNativePointerField<unsigned long*>(this, "AShooterGameMode.ServerID"); }
	int& LoadForceRespawnDinosVersionField() { return *GetNativePointerField<int*>(this, "AShooterGameMode.LoadForceRespawnDinosVersion"); }
	bool& bIsLoadedServerField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bIsLoadedServer"); }
	TMap<FString, FTributePlayerTribeInfo, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<FString, FTributePlayerTribeInfo, 0> >& TributePlayerTribeInfosField() { return *GetNativePointerField<TMap<FString, FTributePlayerTribeInfo, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<FString, FTributePlayerTribeInfo, 0> >*>(this, "AShooterGameMode.TributePlayerTribeInfos"); }
	TArray<int, TSizedDefaultAllocator<32> >& SupportedSpawnRegionsField() { return *GetNativePointerField<TArray<int, TSizedDefaultAllocator<32> >*>(this, "AShooterGameMode.SupportedSpawnRegions"); }
	bool& bServerUseDinoListField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bServerUseDinoList"); }
	float& MaxAllowedRespawnIntervalField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.MaxAllowedRespawnInterval"); }
	bool& bUseDinoLevelUpAnimationsField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bUseDinoLevelUpAnimations"); }
	bool& bDisableDinoTamingField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bDisableDinoTaming"); }
	bool& bDisableDinoRidingField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bDisableDinoRiding"); }
	float& MinimumDinoReuploadIntervalField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.MinimumDinoReuploadInterval"); }
	int& SaveGameCustomVersionField() { return *GetNativePointerField<int*>(this, "AShooterGameMode.SaveGameCustomVersion"); }
	float& OverrideOfficialDifficultyField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.OverrideOfficialDifficulty"); }
	float& AutoRestartIntervalSecondsField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.AutoRestartIntervalSeconds"); }
	FOutputDeviceFile& DinoDupeIDLogFileField() { return *GetNativePointerField<FOutputDeviceFile*>(this, "AShooterGameMode.DinoDupeIDLogFile"); }
	bool& bFailedWaterDinoSpawnLogEnabledField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bFailedWaterDinoSpawnLogEnabled"); }
	FOutputDeviceFile& FailedWaterDinoSpawnLogFileField() { return *GetNativePointerField<FOutputDeviceFile*>(this, "AShooterGameMode.FailedWaterDinoSpawnLogFile"); }
	FieldArray<float, 12>& PlayerBaseStatMultipliersField() { return *GetNativePointerField<FieldArray<float, 12>*>(this, "AShooterGameMode.PlayerBaseStatMultipliers"); }
	int& NPCActiveCountTamedField() { return *GetNativePointerField<int*>(this, "AShooterGameMode.NPCActiveCountTamed"); }
	int& NPCActiveCountField() { return *GetNativePointerField<int*>(this, "AShooterGameMode.NPCActiveCount"); }
	int& NPCCountField() { return *GetNativePointerField<int*>(this, "AShooterGameMode.NPCCount"); }
	float& RTSModeNumSelectableDinosScaleField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.RTSModeNumSelectableDinosScale"); }
	float& RTSMaxRangeFromPlayerCharacterScaleField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.RTSMaxRangeFromPlayerCharacterScale"); }
	float& RTSProximityToEnemyStructureScaleField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.RTSProximityToEnemyStructureScale"); }
	float& MatingSpeedMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.MatingSpeedMultiplier"); }
	float& FastDecayIntervalField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.FastDecayInterval"); }
	bool& bUseSingleplayerSettingsField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bUseSingleplayerSettings"); }
	bool& bDisableGenesisMissionsField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bDisableGenesisMissions"); }
	bool& bDisableStructurePlacementCollisionField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bDisableStructurePlacementCollision"); }
	bool& bForceUseInventoryAppendsField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bForceUseInventoryAppends"); }
	bool& bDisableWirelessCraftingField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bDisableWirelessCrafting"); }
	bool& bDisableWirelessCraftingForDinosField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bDisableWirelessCraftingForDinos"); }
	bool& bDisableWirelessCraftingForPlayersField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bDisableWirelessCraftingForPlayers"); }
	bool& bDisableWirelessCraftingForStructuresField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bDisableWirelessCraftingForStructures"); }
	float& WirelessCraftingRangeOverrideField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.WirelessCraftingRangeOverride"); }
	float& SupplyCrateLootQualityMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.SupplyCrateLootQualityMultiplier"); }
	float& FishingLootQualityMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.FishingLootQualityMultiplier"); }
	float& ItemStackSizeMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.ItemStackSizeMultiplier"); }
	float& CraftingSkillBonusMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.CraftingSkillBonusMultiplier"); }
	bool& bAllowPlatformSaddleMultiFloorsField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bAllowPlatformSaddleMultiFloors"); }
	bool& bAllowUnlimitedRespecsField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bAllowUnlimitedRespecs"); }
	float& FuelConsumptionIntervalMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.FuelConsumptionIntervalMultiplier"); }
	int& DestroyTamesOverLevelClampField() { return *GetNativePointerField<int*>(this, "AShooterGameMode.DestroyTamesOverLevelClamp"); }
	int& MaxAlliancesPerTribeField() { return *GetNativePointerField<int*>(this, "AShooterGameMode.MaxAlliancesPerTribe"); }
	int& MaxTribesPerAllianceField() { return *GetNativePointerField<int*>(this, "AShooterGameMode.MaxTribesPerAlliance"); }
	bool& bDisableDinoDecayClaimingField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bDisableDinoDecayClaiming"); }
	bool& bDisableNonTribePinAccessField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bDisableNonTribePinAccess"); }
	bool& bUseTameLimitForStructuresOnlyField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bUseTameLimitForStructuresOnly"); }
	bool& bLimitTurretsInRangeField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bLimitTurretsInRange"); }
	float& LimitTurretsRangeField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.LimitTurretsRange"); }
	int& LimitTurretsNumField() { return *GetNativePointerField<int*>(this, "AShooterGameMode.LimitTurretsNum"); }
	bool& bHardLimitTurretsInRangeField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bHardLimitTurretsInRange"); }
	int& LimitGeneratorsNumField() { return *GetNativePointerField<int*>(this, "AShooterGameMode.LimitGeneratorsNum"); }
	float& LimitGeneratorsRangeField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.LimitGeneratorsRange"); }
	int& CropPlotStackLimitField() { return *GetNativePointerField<int*>(this, "AShooterGameMode.CropPlotStackLimit"); }
	bool& bDisablePhotoModeField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bDisablePhotoMode"); }
	bool& bDisableTekLegsBoostField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bDisableTekLegsBoost"); }
	bool& bUseOnLoadClampItemQualityRatingField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bUseOnLoadClampItemQualityRating"); }
	bool& bDisableCryopodEnemyCheckField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bDisableCryopodEnemyCheck"); }
	bool& bAllowCryoFridgeOnSaddleField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bAllowCryoFridgeOnSaddle"); }
	bool& bDisableCryopodFridgeRequirementField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bDisableCryopodFridgeRequirement"); }
	float& OnLoadItemQualityRatingClampField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.OnLoadItemQualityRatingClamp"); }
	float& PhotoModeRangeLimitField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.PhotoModeRangeLimit"); }
	bool& bAutoUnlockAllEngramsField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bAutoUnlockAllEngrams"); }
	double& ServerLastForceRespawnWildDinosTimeField() { return *GetNativePointerField<double*>(this, "AShooterGameMode.ServerLastForceRespawnWildDinosTime"); }
	FString& UseStructurePreventionVolumeTagStringField() { return *GetNativePointerField<FString*>(this, "AShooterGameMode.UseStructurePreventionVolumeTagString"); }
	float& BaseTemperatureMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.BaseTemperatureMultiplier"); }
	bool& bForceAllowAllStructuresField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bForceAllowAllStructures"); }
	bool& bForceAllowAscensionItemDownloadsField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bForceAllowAscensionItemDownloads"); }
	bool& bShowCreativeModeField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bShowCreativeMode"); }
	float& LimitNonPlayerDroppedItemsRangeField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.LimitNonPlayerDroppedItemsRange"); }
	int& LimitNonPlayerDroppedItemsCountField() { return *GetNativePointerField<int*>(this, "AShooterGameMode.LimitNonPlayerDroppedItemsCount"); }
	float& GlobalPoweredBatteryDurabilityDecreasePerSecondField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.GlobalPoweredBatteryDurabilityDecreasePerSecond"); }
	float& SingleplayerSettingsCorpseLifespanMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.SingleplayerSettingsCorpseLifespanMultiplier"); }
	float& UseCorpseLifeSpanMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.UseCorpseLifeSpanMultiplier"); }
	float& TimePeriodToHideDisconnectedPlayersField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.TimePeriodToHideDisconnectedPlayers"); }
	bool& bUseBPPreSpawnedDinoField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bUseBPPreSpawnedDino"); }
	float& PreventOfflinePvPConnectionInvincibleIntervalField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.PreventOfflinePvPConnectionInvincibleInterval"); }
	float& TamedDinoCharacterFoodDrainMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.TamedDinoCharacterFoodDrainMultiplier"); }
	float& WildDinoCharacterFoodDrainMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.WildDinoCharacterFoodDrainMultiplier"); }
	float& WildDinoTorporDrainMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.WildDinoTorporDrainMultiplier"); }
	float& PassiveTameIntervalMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.PassiveTameIntervalMultiplier"); }
	float& TamedDinoTorporDrainMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.TamedDinoTorporDrainMultiplier"); }
	bool& bDisableWeatherFogField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bDisableWeatherFog"); }
	float& MeshCheckingRayDistanceField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.MeshCheckingRayDistance"); }
	float& MeshCheckingSubdivisonsField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.MeshCheckingSubdivisons"); }
	float& MeshCheckingPercentageToFailField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.MeshCheckingPercentageToFail"); }
	bool& bIgnoreStructuresPreventionVolumesField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bIgnoreStructuresPreventionVolumes"); }
	bool& bGenesisUseStructuresPreventionVolumesField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bGenesisUseStructuresPreventionVolumes"); }
	bool& bServerEnableMeshCheckingField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bServerEnableMeshChecking"); }
	FString& LiveTuningFileNameField() { return *GetNativePointerField<FString*>(this, "AShooterGameMode.LiveTuningFileName"); }
	FString& ArkServerMetricsKeyField() { return *GetNativePointerField<FString*>(this, "AShooterGameMode.ArkServerMetricsKey"); }
	FString& ArkServerMetricsURLField() { return *GetNativePointerField<FString*>(this, "AShooterGameMode.ArkServerMetricsURL"); }
	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// TArray<FString, TSizedDefaultAllocator<32> >& CachedArkMetricsPayloadsField();
	bool& bCollectArkMetricsField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bCollectArkMetrics"); }
	bool& bLogChatMessagesField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bLogChatMessages"); }
	int& ChatLogFlushIntervalSecondsField() { return *GetNativePointerField<int*>(this, "AShooterGameMode.ChatLogFlushIntervalSeconds"); }
	int& ChatLogFileSplitIntervalSecondsField() { return *GetNativePointerField<int*>(this, "AShooterGameMode.ChatLogFileSplitIntervalSeconds"); }
	int& ChatLogMaxAgeInDaysField() { return *GetNativePointerField<int*>(this, "AShooterGameMode.ChatLogMaxAgeInDays"); }
	TArray<TSharedPtr<FJsonObject>, TSizedDefaultAllocator<32> >& ChatMessageBufferField() { return *GetNativePointerField<TArray<TSharedPtr<FJsonObject>, TSizedDefaultAllocator<32> >*>(this, "AShooterGameMode.ChatMessageBuffer"); }
	FString& CurrentChatLogFilenameField() { return *GetNativePointerField<FString*>(this, "AShooterGameMode.CurrentChatLogFilename"); }
	FDateTime& LastChatLogFlushTimeField() { return *GetNativePointerField<FDateTime*>(this, "AShooterGameMode.LastChatLogFlushTime"); }
	FDateTime& LastChatLogFileCreateTimeField() { return *GetNativePointerField<FDateTime*>(this, "AShooterGameMode.LastChatLogFileCreateTime"); }
	bool& bDamageEventLoggingEnabledField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bDamageEventLoggingEnabled"); }
	bool& bIsGenesisMapField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bIsGenesisMap"); }
	TArray<TSharedPtr<FJsonObject>, TSizedDefaultAllocator<32> >& DamageEventBufferField() { return *GetNativePointerField<TArray<TSharedPtr<FJsonObject>, TSizedDefaultAllocator<32> >*>(this, "AShooterGameMode.DamageEventBuffer"); }
	FString& CurrentDamageEventLogFilenameField() { return *GetNativePointerField<FString*>(this, "AShooterGameMode.CurrentDamageEventLogFilename"); }
	FTimerHandle& DamageEventLogFlushHandleField() { return *GetNativePointerField<FTimerHandle*>(this, "AShooterGameMode.DamageEventLogFlushHandle"); }
	FLeaderboardsContainer& LeaderboardContainerField() { return *GetNativePointerField<FLeaderboardsContainer*>(this, "AShooterGameMode.LeaderboardContainer"); }
	TMap<FName, int, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<FName, int, 0> >& MissionTagToLeaderboardEntryField() { return *GetNativePointerField<TMap<FName, int, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<FName, int, 0> >*>(this, "AShooterGameMode.MissionTagToLeaderboardEntry"); }
	FName& UseStructurePreventionVolumeTagField() { return *GetNativePointerField<FName*>(this, "AShooterGameMode.UseStructurePreventionVolumeTag"); }
	bool& bHasCovertedToStoreField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bHasCovertedToStore"); }
	bool& bAllowStoredDatasField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bAllowStoredDatas"); }
	bool& bBackupTransferProfilesField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bBackupTransferProfiles"); }
	bool& bDisableListenServerTetheringField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bDisableListenServerTethering"); }
	FDataStore<unsigned int>& TribeDataStoreField() { return *GetNativePointerField<FDataStore<unsigned int>*>(this, "AShooterGameMode.TribeDataStore"); }
	FDataStore<unsigned __int64>& PlayerDataStoreField() { return *GetNativePointerField<FDataStore<unsigned __int64>*>(this, "AShooterGameMode.PlayerDataStore"); }
	bool& bHasLoadedSaveGameField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bHasLoadedSaveGame"); }
	bool& bEnableStasisGridField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bEnableStasisGrid"); }
	TMap<FName, TWeakObjectPtr<UClass>, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<FName, TWeakObjectPtr<UClass>, 0> >& PrioritizedObjectMapField() { return *GetNativePointerField<TMap<FName, TWeakObjectPtr<UClass>, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<FName, TWeakObjectPtr<UClass>, 0> >*>(this, "AShooterGameMode.PrioritizedObjectMap"); }
	AOceanDinoManager*& TheOceanDinoManagerField() { return *GetNativePointerField<AOceanDinoManager**>(this, "AShooterGameMode.TheOceanDinoManager"); }
	bool& bCheckedForOceanDinoManagerField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bCheckedForOceanDinoManager"); }
	TArray<FBuffAddition, TSizedDefaultAllocator<32> >& AdditionalDefaultBuffsField() { return *GetNativePointerField<TArray<FBuffAddition, TSizedDefaultAllocator<32> >*>(this, "AShooterGameMode.AdditionalDefaultBuffs"); }
	bool& bParseServerToJsonField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bParseServerToJson"); }
	FStasisGrid& MyStasisGridField() { return *GetNativePointerField<FStasisGrid*>(this, "AShooterGameMode.MyStasisGrid"); }
	FPreSpawnedDino& OnPreSpawnedDinoField() { return *GetNativePointerField<FPreSpawnedDino*>(this, "AShooterGameMode.OnPreSpawnedDino"); }
	FOnKilled& OnKilledField() { return *GetNativePointerField<FOnKilled*>(this, "AShooterGameMode.OnKilled"); }
	FOnPostLogin& OnPostLoginField() { return *GetNativePointerField<FOnPostLogin*>(this, "AShooterGameMode.OnPostLogin"); }
	FOnStartNewPlayer& OnStartNewPlayerField() { return *GetNativePointerField<FOnStartNewPlayer*>(this, "AShooterGameMode.OnStartNewPlayer"); }
	FOnAddNewTribe& OnAddNewTribeField() { return *GetNativePointerField<FOnAddNewTribe*>(this, "AShooterGameMode.OnAddNewTribe"); }
	FOnRemoveTribe& OnRemoveTribeField() { return *GetNativePointerField<FOnRemoveTribe*>(this, "AShooterGameMode.OnRemoveTribe"); }
	FOnRemovePlayerFromTribe& OnRemovePlayerFromTribeField() { return *GetNativePointerField<FOnRemovePlayerFromTribe*>(this, "AShooterGameMode.OnRemovePlayerFromTribe"); }
	FOnServerChatMessage& OnServerChatMessageField() { return *GetNativePointerField<FOnServerChatMessage*>(this, "AShooterGameMode.OnServerChatMessage"); }
	FOnServerDirectMessage& OnServerDirectMessageField() { return *GetNativePointerField<FOnServerDirectMessage*>(this, "AShooterGameMode.OnServerDirectMessage"); }
	FOnServerNotification& OnServerNotificationField() { return *GetNativePointerField<FOnServerNotification*>(this, "AShooterGameMode.OnServerNotification"); }
	FOnNotifyDamage& OnNotifyDamageField() { return *GetNativePointerField<FOnNotifyDamage*>(this, "AShooterGameMode.OnNotifyDamage"); }
	FOnSerializeForSaveFile& OnSerializeForSaveFileField() { return *GetNativePointerField<FOnSerializeForSaveFile*>(this, "AShooterGameMode.OnSerializeForSaveFile"); }
	TArray<FWorldBuffTrackerItem, TSizedDefaultAllocator<32> >& WorldBuffsField() { return *GetNativePointerField<TArray<FWorldBuffTrackerItem, TSizedDefaultAllocator<32> >*>(this, "AShooterGameMode.WorldBuffs"); }
	TArray<FPropertyModificationsTracker, TSizedDefaultAllocator<32> >& WorldBuffPropertyModificationsTrackersField() { return *GetNativePointerField<TArray<FPropertyModificationsTracker, TSizedDefaultAllocator<32> >*>(this, "AShooterGameMode.WorldBuffPropertyModificationsTrackers"); }
	float& BaseHexagonRewardMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.BaseHexagonRewardMultiplier"); }
	float& HexagonRewardMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.HexagonRewardMultiplier"); }
	float& HexagonCostMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.HexagonCostMultiplier"); }
	bool& bDisableHexagonStoreField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bDisableHexagonStore"); }
	bool& bHexStoreAllowOnlyEngramTradeOptionField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bHexStoreAllowOnlyEngramTradeOption"); }
	TArray<FClassNameReplacement, TSizedDefaultAllocator<32> >& DynamicNPCReplacementsField() { return *GetNativePointerField<TArray<FClassNameReplacement, TSizedDefaultAllocator<32> >*>(this, "AShooterGameMode.DynamicNPCReplacements"); }
	TArray<FClassNameReplacement, TSizedDefaultAllocator<32> >& CollectiveNPCReplacementsField() { return *GetNativePointerField<TArray<FClassNameReplacement, TSizedDefaultAllocator<32> >*>(this, "AShooterGameMode.CollectiveNPCReplacements"); }
	TArray<FString, TSizedDefaultAllocator<32> >& PreventTransferForClassNamesField() { return *GetNativePointerField<TArray<FString, TSizedDefaultAllocator<32> >*>(this, "AShooterGameMode.PreventTransferForClassNames"); }
	bool& bAllowSpeedLevelingField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bAllowSpeedLeveling"); }
	bool& bAllowFlyerSpeedLevelingField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bAllowFlyerSpeedLeveling"); }
	bool& bEnableWorldBuffScalingField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bEnableWorldBuffScaling"); }
	bool& bDisableWorldBuffsField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bDisableWorldBuffs"); }
	bool& bEnablePlayerMoveThroughSleepingField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bEnablePlayerMoveThroughSleeping"); }
	bool& bEnablePlayerMoveThroughAllyField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bEnablePlayerMoveThroughAlly"); }
	bool& bAutoCreateTribesField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bAutoCreateTribes"); }
	bool& bRiderDinoCollisionField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bRiderDinoCollision"); }
	bool& bFreezeTribesField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bFreezeTribes"); }
	float& WorldBuffScalingEfficacyField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.WorldBuffScalingEfficacy"); }
	bool& bUseOverrideTimeToRecoverValuesOnPlayerStatusCompField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bUseOverrideTimeToRecoverValuesOnPlayerStatusComp"); }
	FieldArray<float, 12>& OverrideTimeToRecoverAfterDepletionStatusValueField() { return *GetNativePointerField<FieldArray<float, 12>*>(this, "AShooterGameMode.OverrideTimeToRecoverAfterDepletionStatusValue"); }
	FieldArray<float, 12>& OverrideTimeToRecoverAfterDecreaseStatusValueField() { return *GetNativePointerField<FieldArray<float, 12>*>(this, "AShooterGameMode.OverrideTimeToRecoverAfterDecreaseStatusValue"); }
	bool& bUseOverrideTimeToRecoverValuesOnDinoStatusCompField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bUseOverrideTimeToRecoverValuesOnDinoStatusComp"); }
	FieldArray<float, 12>& OverrideDinoTimeToRecoverAfterDepletionStatusValueField() { return *GetNativePointerField<FieldArray<float, 12>*>(this, "AShooterGameMode.OverrideDinoTimeToRecoverAfterDepletionStatusValue"); }
	FieldArray<float, 12>& OverrideDinoTimeToRecoverAfterDecreaseStatusValueField() { return *GetNativePointerField<FieldArray<float, 12>*>(this, "AShooterGameMode.OverrideDinoTimeToRecoverAfterDecreaseStatusValue"); }
	bool& bUseDisabledStatusStatesField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bUseDisabledStatusStates"); }
	FieldArray<unsigned char, 14>& DisabledStatusStatesField() { return *GetNativePointerField<FieldArray<unsigned char, 14>*>(this, "AShooterGameMode.DisabledStatusStates"); }
	TArray<FCrateTemporaryQualityModifierSet, TSizedDefaultAllocator<32> >& TemporaryCrateModifiersField() { return *GetNativePointerField<TArray<FCrateTemporaryQualityModifierSet, TSizedDefaultAllocator<32> >*>(this, "AShooterGameMode.TemporaryCrateModifiers"); }
	TArray<FResourceTemporaryAmountModifierSet, TSizedDefaultAllocator<32> >& TemporaryResourceModifiersField() { return *GetNativePointerField<TArray<FResourceTemporaryAmountModifierSet, TSizedDefaultAllocator<32> >*>(this, "AShooterGameMode.TemporaryResourceModifiers"); }
	float& AdjustableMutagenSpawnDelayMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.AdjustableMutagenSpawnDelayMultiplier"); }
	bool& bDisableDefaultMapItemSetsField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bDisableDefaultMapItemSets"); }
	bool& DisableRailgunPVPField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.DisableRailgunPVP"); }
	int& EggsHatchedThisFrameField() { return *GetNativePointerField<int*>(this, "AShooterGameMode.EggsHatchedThisFrame"); }
	TArray<FName, TSizedDefaultAllocator<32> >& DynamicDisabledWorldBuffsField() { return *GetNativePointerField<TArray<FName, TSizedDefaultAllocator<32> >*>(this, "AShooterGameMode.DynamicDisabledWorldBuffs"); }
	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// FString& DynamicUndermeshRegionsRawField();
	float& RedisTimeoutInMinutesField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.RedisTimeoutInMinutes"); }
	bool& RestartedDueToRedisTimeoutField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.RestartedDueToRedisTimeout"); }
	float& ImprintLimitField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.ImprintLimit"); }
	int& MaxStructuresToAllowForPickupOverrideField() { return *GetNativePointerField<int*>(this, "AShooterGameMode.MaxStructuresToAllowForPickupOverride"); }
	bool& bDisableCustomFoldersInTributeInventoriesField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bDisableCustomFoldersInTributeInventories"); }
	bool& bDisableRailgunPVPField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bDisableRailgunPVP"); }
	float& MinimumTimebetweeninventoryRetrievalField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.MinimumTimebetweeninventoryRetrieval"); }
	float& WildFollowerSpawnChanceMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.WildFollowerSpawnChanceMultiplier"); }
	float& WildFollowerSpawnCountMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.WildFollowerSpawnCountMultiplier"); }
	bool& bDisableDinoItemBlacklistField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bDisableDinoItemBlacklist"); }
	bool& bPreventHibernationManagerField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bPreventHibernationManager"); }
	bool& bSaveFormerTribeOwnerLogField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bSaveFormerTribeOwnerLog"); }
	float& DinoArmorDurabilityScaleField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.DinoArmorDurabilityScale"); }
	TMap<int, unsigned int, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<int, unsigned int, 0> >& CustomLevelEventsSingletonIDsField() { return *GetNativePointerField<TMap<int, unsigned int, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<int, unsigned int, 0> >*>(this, "AShooterGameMode.CustomLevelEventsSingletonIDs"); }
	TArray<TSharedPtr<FCompressTaskInfo>, TSizedDefaultAllocator<32> >& CompressTasksField() { return *GetNativePointerField<TArray<TSharedPtr<FCompressTaskInfo>, TSizedDefaultAllocator<32> >*>(this, "AShooterGameMode.CompressTasks"); }
	TMap<FString, TArray<TArray<TArray<unsigned int, TSizedDefaultAllocator<32> >, TSizedDefaultAllocator<32> >, TSizedDefaultAllocator<32> >, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<FString, TArray<TArray<TArray<unsigned int, TSizedDefaultAllocator<32> >, TSizedDefaultAllocator<32> >, TSizedDefaultAllocator<32> >, 0> >& LocalInstancedStaticMeshComponentInstancesVisibilityStateField() { return *GetNativePointerField<TMap<FString, TArray<TArray<TArray<unsigned int, TSizedDefaultAllocator<32> >, TSizedDefaultAllocator<32> >, TSizedDefaultAllocator<32> >, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<FString, TArray<TArray<TArray<unsigned int, TSizedDefaultAllocator<32> >, TSizedDefaultAllocator<32> >, TSizedDefaultAllocator<32> >, 0> >*>(this, "AShooterGameMode.LocalInstancedStaticMeshComponentInstancesVisibilityState"); }
	UAntiDupeTransactionLog*& AntiDupeTransactionLogField() { return *GetNativePointerField<UAntiDupeTransactionLog**>(this, "AShooterGameMode.AntiDupeTransactionLog"); }
	double& TimestampField() { return *GetNativePointerField<double*>(this, "AShooterGameMode.Timestamp"); }
	TWeakObjectPtr<APrimalStructureItemContainer_CropPlot>& CropPlotField() { return *GetNativePointerField<TWeakObjectPtr<APrimalStructureItemContainer_CropPlot>*>(this, "AShooterGameMode.CropPlot"); }
	TArray<FCachedTeamTameListStruct, TSizedDefaultAllocator<32> >& CurrentTeamBatchThatAreUpdatingTheirCachedTeamTameListsField() { return *GetNativePointerField<TArray<FCachedTeamTameListStruct, TSizedDefaultAllocator<32> >*>(this, "AShooterGameMode.CurrentTeamBatchThatAreUpdatingTheirCachedTeamTameLists"); }
	TArray<FCachedTeamTameListStruct, TSizedDefaultAllocator<32> >& NextTeamBatchtoUpdateCachedTeamTameListsField() { return *GetNativePointerField<TArray<FCachedTeamTameListStruct, TSizedDefaultAllocator<32> >*>(this, "AShooterGameMode.NextTeamBatchtoUpdateCachedTeamTameLists"); }
	TArray<FPlayersAwaitingUpdatedCachedTeamTameListStruct, TSizedDefaultAllocator<32> >& AllPlayersAwaitingUpdatedCachedTeamTameListsField() { return *GetNativePointerField<TArray<FPlayersAwaitingUpdatedCachedTeamTameListStruct, TSizedDefaultAllocator<32> >*>(this, "AShooterGameMode.AllPlayersAwaitingUpdatedCachedTeamTameLists"); }
	TArray<AShooterPlayerController*, TSizedDefaultAllocator<32> >& PlayersAwaitingUpdatedCachedTeamTameListWhosTeamsAreInCurrentEvaluatedBatchField() { return *GetNativePointerField<TArray<AShooterPlayerController*, TSizedDefaultAllocator<32> >*>(this, "AShooterGameMode.PlayersAwaitingUpdatedCachedTeamTameListWhosTeamsAreInCurrentEvaluatedBatch"); }
	TArray<AShooterPlayerController*, TSizedDefaultAllocator<32> >& NextTeamBatchPlayersAwaitingUpdatedCachedTeamTameListField() { return *GetNativePointerField<TArray<AShooterPlayerController*, TSizedDefaultAllocator<32> >*>(this, "AShooterGameMode.NextTeamBatchPlayersAwaitingUpdatedCachedTeamTameList"); }
	TArray<AActor*, TSizedDefaultAllocator<32> >& CurrentBatchCachedTeamTameListsField() { return *GetNativePointerField<TArray<AActor*, TSizedDefaultAllocator<32> >*>(this, "AShooterGameMode.CurrentBatchCachedTeamTameLists"); }
	int& CurrentIndexOfTameToBeAddedToCachedTeamTameListsField() { return *GetNativePointerField<int*>(this, "AShooterGameMode.CurrentIndexOfTameToBeAddedToCachedTeamTameLists"); }
	int& MaxAllowedUpdatedCachedTeamTamesPerTickField() { return *GetNativePointerField<int*>(this, "AShooterGameMode.MaxAllowedUpdatedCachedTeamTamesPerTick"); }
	int& MaxAllowedPlayersRecieveCachedTeamTameListPerTickField() { return *GetNativePointerField<int*>(this, "AShooterGameMode.MaxAllowedPlayersRecieveCachedTeamTameListPerTick"); }
	FTimerHandle& UpdateCachedTeamTameLists_OnIntervalHandleField() { return *GetNativePointerField<FTimerHandle*>(this, "AShooterGameMode.UpdateCachedTeamTameLists_OnIntervalHandle"); }
	FTimerHandle& ReturnCachedTeamTameListsToAwaitingPlayers_OnIntervalHandleField() { return *GetNativePointerField<FTimerHandle*>(this, "AShooterGameMode.ReturnCachedTeamTameListsToAwaitingPlayers_OnIntervalHandle"); }
	int& PreviousFrameTimeField() { return *GetNativePointerField<int*>(this, "AShooterGameMode.PreviousFrameTime"); }
	//TArray<AShooterGameMode::FAutoWaterRefreshCropData, TSizedDefaultAllocator<32> >& AutoWaterRefreshCropQueueField() { return *GetNativePointerField<TArray<AShooterGameMode::FAutoWaterRefreshCropData, TSizedDefaultAllocator<32> >*>(this, "AShooterGameMode.AutoWaterRefreshCropQueue"); }
	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// FString& CachedSaveDirectoryOverrideField();
	int& TicksUntilRegisterField() { return *GetNativePointerField<int*>(this, "AShooterGameMode.TicksUntilRegister"); }
	bool& bFilterCharacterNamesField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bFilterCharacterNames"); }
	bool& bFilterTribeNamesField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bFilterTribeNames"); }
	bool& bFilterChatField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bFilterChat"); }
	int& CurrentChatFilterVersionField() { return *GetNativePointerField<int*>(this, "AShooterGameMode.CurrentChatFilterVersion"); }
	int& RequestedChatFilterVersionField() { return *GetNativePointerField<int*>(this, "AShooterGameMode.RequestedChatFilterVersion"); }
	bool& bForceLoadingPlayerDataField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bForceLoadingPlayerData"); }
	FString& BadWordListURLField() { return *GetNativePointerField<FString*>(this, "AShooterGameMode.BadWordListURL"); }
	FString& BadWordWhiteListURLField() { return *GetNativePointerField<FString*>(this, "AShooterGameMode.BadWordWhiteListURL"); }
	//FAhoCorasickMatcher& BadWordMatcherField() { return *GetNativePointerField<FAhoCorasickMatcher*>(this, "AShooterGameMode.BadWordMatcher"); }
	//FAhoCorasickMatcher& BadWordWhitelistMatcherField() { return *GetNativePointerField<FAhoCorasickMatcher*>(this, "AShooterGameMode.BadWordWhitelistMatcher"); }
	bool& bEnableServerDestroyTamesAboveSoftTameLimitField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bEnableServerDestroyTamesAboveSoftTameLimit"); }
	bool& bCheckSoftTameLimitOnTickField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bCheckSoftTameLimitOnTick"); }
	int& MaxTamedDinos_SoftTameLimitField() { return *GetNativePointerField<int*>(this, "AShooterGameMode.MaxTamedDinos_SoftTameLimit"); }
	int& MaxTamedDinos_SoftTameLimit_CountdownForDeletionDurationField() { return *GetNativePointerField<int*>(this, "AShooterGameMode.MaxTamedDinos_SoftTameLimit_CountdownForDeletionDuration"); }
	TMap<wchar_t, wchar_t, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<wchar_t, wchar_t, 0> >& CharacterReplacementMapField() { return *GetNativePointerField<TMap<wchar_t, wchar_t, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<wchar_t, wchar_t, 0> >*>(this, "AShooterGameMode.CharacterReplacementMap"); }
	FTimerHandle& CosmeticWhitelistTimerHandleField() { return *GetNativePointerField<FTimerHandle*>(this, "AShooterGameMode.CosmeticWhitelistTimerHandle"); }
	bool& bDisableCustomCosmeticsField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bDisableCustomCosmetics"); }
	//FOnExplorerNoteUnlocked& OnExplorerNoteUnlockedField() { return *GetNativePointerField<FOnExplorerNoteUnlocked*>(this, "AShooterGameMode.OnExplorerNoteUnlocked"); }
	bool& bDisableGeneTraitsField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bDisableGeneTraits"); }
	float& ServerGeneTraitSpawnRateMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.ServerGeneTraitSpawnRateMultiplier"); }

	// Bitfields

	BitFieldValue<bool, unsigned __int32> bDestroyCharacterOnLogoutInLobbyField() { return { this, "AShooterGameMode.bDestroyCharacterOnLogoutInLobby" }; }
	BitFieldValue<bool, unsigned __int32> bPreventJoiningDuringMatchField() { return { this, "AShooterGameMode.bPreventJoiningDuringMatch" }; }

	// Functions

	int ForceCreateTribe(const class FString* TribeName, int TeamOverride) { return NativeCall<int, const class FString*, int>(this, "AShooterGameMode.ForceCreateTribe(FString&,int)", TribeName, TeamOverride); }
	bool TryGetIntOption(const FString& Section, const FString& Options, const FString& OptionName, int& value) { return NativeCall<bool, const FString&, const FString&, const FString&, int&>(this, "AShooterGameMode.TryGetIntOption(FString&,FString&,FString&,int&)", Section, Options, OptionName, value); }
	void ShowMessageOfTheDay() { NativeCall<void>(this, "AShooterGameMode.ShowMessageOfTheDay()"); }
	void LoadTribeIds() { NativeCall<void>(this, "AShooterGameMode.LoadTribeIds()"); }
	bool AllowRenameTribe(AShooterPlayerState* ForPlayerState, const FString& TribeName) { return NativeCall<bool, AShooterPlayerState*, const FString&>(this, "AShooterGameMode.AllowRenameTribe(AShooterPlayerState*,FString&)", ForPlayerState, TribeName); }
	void AddPlayerToBeNotifiedWhenCachedTeamTameListIsUpdated(AShooterPlayerController* RequestingPlayer) { NativeCall<void, AShooterPlayerController*>(this, "AShooterGameMode.AddPlayerToBeNotifiedWhenCachedTeamTameListIsUpdated(AShooterPlayerController*)", RequestingPlayer); }
	FString GetSessionTimeString_Implementation() { using AsaReturnType = FString; alignas(AsaReturnType) unsigned char AsaReturnBytes[sizeof(AsaReturnType)]; auto* AsaReturnPointer = reinterpret_cast<AsaReturnType*>(AsaReturnBytes); auto* AsaReturnedPointer = NativeCall<AsaReturnType*, AsaReturnType*>(this, "AShooterGameMode.GetSessionTimeString_Implementation()", AsaReturnPointer); if (AsaReturnedPointer != AsaReturnPointer) throw std::runtime_error("Unexpected native result buffer"); std::unique_ptr<AsaReturnType, void(*)(AsaReturnType*)> AsaReturnOwner(std::launder(AsaReturnPointer), [](AsaReturnType* value) { value->~AsaReturnType(); }); return MoveTemp(*AsaReturnOwner); }
	void HandleTransferCharacterDialogResult(bool bAccept, AShooterPlayerController* NewPlayer) { NativeCall<void, bool, AShooterPlayerController*>(this, "AShooterGameMode.HandleTransferCharacterDialogResult(bool,AShooterPlayerController*)", bAccept, NewPlayer); }
	AActor* ChoosePlayerStart_Implementation(AController* Player) { return NativeCall<AActor*, AController*>(this, "AShooterGameMode.ChoosePlayerStart_Implementation(AController*)", Player); }
	void SendServerNotification(const FString& MessageText, FLinearColor MessageColor, float DisplayScale, float DisplayTime, UTexture2D* MessageIcon, USoundBase* SoundToPlay, int ReceiverTeamId, int ReceiverPlayerID, bool bDoBillboard) { NativeCall<void, const FString&, FLinearColor, float, float, UTexture2D*, USoundBase*, int, int, bool>(this, "AShooterGameMode.SendServerNotification(FString&,FLinearColor,float,float,UTexture2D*,USoundBase*,int,int,bool,int)", MessageText, MessageColor, DisplayScale, DisplayTime, MessageIcon, SoundToPlay, ReceiverTeamId, ReceiverPlayerID, bDoBillboard); }
	void StartNewPlayer(APlayerController* NewPlayer) { NativeCall<void, APlayerController*>(this, "AShooterGameMode.StartNewPlayer(APlayerController*)", NewPlayer); }
	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// void OutputThreadProc();
	int CountOverlappingDinoCharactersOfTeamAndClass(const UE::Math::TVector<double>& AtLocation, float OverlapRange, TSubclassOf<APrimalDinoCharacter> DinoClass, int DinoTeam, bool bExactClassMatch, bool bIgnoreClass) { return NativeCall<int, const UE::Math::TVector<double>&, float, TSubclassOf<APrimalDinoCharacter>, int, bool, bool>(this, "AShooterGameMode.CountOverlappingDinoCharactersOfTeamAndClass(UE::Math::TVector<double>&,float,TSubclassOf<APrimalDinoCharacter>,int,bool,bool)", AtLocation, OverlapRange, DinoClass, DinoTeam, bExactClassMatch, bIgnoreClass); }
	void LoadTributePlayerDatas(const FUniqueNetId* UniqueID) { NativeCall<void, const FUniqueNetId*>(this, "AShooterGameMode.LoadTributePlayerDatas(FUniqueNetId&)", UniqueID); }
	int GetPlayerIDForSteamID(unsigned long steamID) { return NativeCall<int, unsigned long>(this, "AShooterGameMode.GetPlayerIDForSteamID(unsigned__int64)", steamID); }
	void OnFinishedUpdatingCurrentBatchOfCachedTeamTameLists() { NativeCall<void>(this, "AShooterGameMode.OnFinishedUpdatingCurrentBatchOfCachedTeamTameLists()"); }
	void ActorStasised(AActor* theActor) { NativeCall<void, AActor*>(this, "AShooterGameMode.ActorStasised(AActor*)", theActor); }
	//void HttpGetCheaterListComplete(TSharedPtr<IHttpRequest, 1>* HttpRequest, TSharedPtr<IHttpResponse>* HttpResponse, bool bSucceeded) { NativeCall<void, TSharedPtr<IHttpRequest>*, TSharedPtr<IHttpResponse>*, bool>(this, "AShooterGameMode.HttpGetCheaterListComplete(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool)", HttpRequest, HttpResponse, bSucceeded); }
	void UpdateTribeAllianceData(FTribeAlliance* TribeAllianceData, TArray<unsigned int, TSizedDefaultAllocator<32> >* OldMembersArray, bool bIsAdd) { NativeCall<void, FTribeAlliance*, TArray<unsigned int, TSizedDefaultAllocator<32> >*, bool>(this, "AShooterGameMode.UpdateTribeAllianceData(FTribeAlliance*,TArray<unsignedint,TSizedDefaultAllocator<32>>*,bool)", TribeAllianceData, OldMembersArray, bIsAdd); }
	void SendServerDirectMessage(const FString& PlayerSteamID, const FString& MessageText, FLinearColor MessageColor, bool bIsBold, int ReceiverTeamId, int ReceiverPlayerID, const FString& PlayerName, const FString& SenderId) { NativeCall<void, const FString&, const FString&, FLinearColor, bool, int, int, const FString&, const FString&>(this, "AShooterGameMode.SendServerDirectMessage(FString&,FString&,FLinearColor,bool,int,int,FString&,FString&)", PlayerSteamID, MessageText, MessageColor, bIsBold, ReceiverTeamId, ReceiverPlayerID, PlayerName, SenderId); }
	UPrimalPlayerData* GetPlayerData(const FString& PlayerDataID) { return NativeCall<UPrimalPlayerData*, const FString&>(this, "AShooterGameMode.GetPlayerData(FString&)", PlayerDataID); }
	void DoNPCZoneManagerLandscapeChangeFixups() { NativeCall<void>(this, "AShooterGameMode.DoNPCZoneManagerLandscapeChangeFixups()"); }
	void DoMaintenanceRestartWarning() { NativeCall<void>(this, "AShooterGameMode.DoMaintenanceRestartWarning()"); }
	//void HttpGetBadWordWhiteListComplete(TSharedPtr<IHttpRequest, 1>* HttpRequest, TSharedPtr<IHttpResponse>* HttpResponse, bool bSucceeded) { NativeCall<void, TSharedPtr<IHttpRequest, 1>*, TSharedPtr<IHttpResponse>*, bool>(this, "AShooterGameMode.HttpGetBadWordWhiteListComplete(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool)", HttpRequest, HttpResponse, bSucceeded); }
	void InitSeamlessTravelPlayer(AController* NewController) { NativeCall<void, AController*>(this, "AShooterGameMode.InitSeamlessTravelPlayer(AController*)", NewController); }
	void PostAlarmNotification(FString* SteamID, const FString& Title, const FString& Message) { NativeCall<void, FString*, const FString&, const FString&>(this, "AShooterGameMode.PostAlarmNotification(FString,FString&,FString&)", SteamID, Title, Message); }
	void TickLoginLocks() { NativeCall<void>(this, "AShooterGameMode.TickLoginLocks()"); }
	void AdjustDamage(AActor* Victim, float& Damage, const FDamageEvent* DamageEvent, AController* EventInstigator, AActor* DamageCauser) { NativeCall<void, AActor*, float&, const FDamageEvent*, AController*, AActor*>(this, "AShooterGameMode.AdjustDamage(AActor*,float&,FDamageEvent&,AController*,AActor*)", Victim, Damage, DamageEvent, EventInstigator, DamageCauser); }
	bool AllowCheats(APlayerController* P) { return NativeCall<bool, APlayerController*>(this, "AShooterGameMode.AllowCheats(APlayerController*)", P); }
	void AddTrackedAdminCommand(APlayerController* Controller, const FString& CommandType, const FString& Command) { NativeCall<void, APlayerController*, const FString&, const FString&>(this, "AShooterGameMode.AddTrackedAdminCommand(APlayerController*,FString&,FString&)", Controller, CommandType, Command); }
	bool IsFirstPlayerSpawn(APlayerController* NewPlayer) { return NativeCall<bool, APlayerController*>(this, "AShooterGameMode.IsFirstPlayerSpawn(APlayerController*)", NewPlayer); }
	bool LoadWorld(bool bForceEvenIfSaveLoadIsDisabled) { return NativeCall<bool, bool>(this, "AShooterGameMode.LoadWorld(bool)", bForceEvenIfSaveLoadIsDisabled); }
	void ChangePlayerDataConfig(APlayerController* ToPlayer, const FPrimalPlayerCharacterConfigStruct* charConfig) { NativeCall<void, APlayerController*, const FPrimalPlayerCharacterConfigStruct*>(this, "AShooterGameMode.ChangePlayerDataConfig(APlayerController*,FPrimalPlayerCharacterConfigStruct&)", ToPlayer, charConfig); }
	bool SaveSimpleLogFileOfFormerTribeOwnerIDsAndTheirTimestamps(int TribeID, int OwnerIDToAdd) { return NativeCall<bool, int, int>(this, "AShooterGameMode.SaveSimpleLogFileOfFormerTribeOwnerIDsAndTheirTimestamps(int,int)", TribeID, OwnerIDToAdd); }
	bool IsUsedSpawnPointStillSupported(APlayerStart* SpawnPoint, AController* Player) const { return NativeCall<bool, APlayerStart*, AController*>(this, "AShooterGameMode.IsUsedSpawnPointStillSupported(APlayerStart*,AController*)", SpawnPoint, Player); }
	AOceanDinoManager* GetOceanDinoManager() { return NativeCall<AOceanDinoManager*>(this, "AShooterGameMode.GetOceanDinoManager()"); }
	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// void LoadBanListFromString(FString& FileString, bool GlobalList);
	void InitGameStateDataSets_Implementation() { NativeCall<void>(this, "AShooterGameMode.InitGameStateDataSets_Implementation()"); }
	void Tick(float DeltaSeconds) { NativeCall<void, float>(this, "AShooterGameMode.Tick(float)", DeltaSeconds); }
	void BPDoInitGame(const FString& MapName, const FString& Options) { NativeCall<void, const FString&, const FString&>(this, "AShooterGameMode.BPDoInitGame(FString&,FString&)", MapName, Options); }
	void ReloadAdminIPs() { NativeCall<void>(this, "AShooterGameMode.ReloadAdminIPs()"); }
	void OnHarvestingComponentHidden(FAttachedInstancedHarvestingElement* component) { NativeCall<void, FAttachedInstancedHarvestingElement*>(this, "AShooterGameMode.OnHarvestingComponentHidden(FAttachedInstancedHarvestingElement*)", component); }
	void SortCurrentlyEvaluatedTameIntoAppropriateCachedTeamTameListForThisCurrentBatch() { NativeCall<void>(this, "AShooterGameMode.SortCurrentlyEvaluatedTameIntoAppropriateCachedTeamTameListForThisCurrentBatch()"); }
	bool AddPlayerToNextTeamBatchPlayersAwaitingUpdatedCachedTeamTameList(AShooterPlayerController* RequestingPlayer) { return NativeCall<bool, AShooterPlayerController*>(this, "AShooterGameMode.AddPlayerToNextTeamBatchPlayersAwaitingUpdatedCachedTeamTameList(AShooterPlayerController*)", RequestingPlayer); }
	int GetNumDinosOnTeam(int OnTeam) { return NativeCall<int, int>(this, "AShooterGameMode.GetNumDinosOnTeam(int)", OnTeam); }
	FString* GetSteamIDStringForPlayerID(FString* result, int playerDataID) { return NativeCall<FString*, FString*, int>(this, "AShooterGameMode.GetSteamIDStringForPlayerID(int)", result, playerDataID); }
	//FString GetSteamIDStringForPlayerID(int playerDataID) { return NativeCall<FString, int>(this, "AShooterGameMode.GetSteamIDStringForPlayerID(int)", playerDataID); }
	void Serialize(FStructuredArchiveRecord Record) { NativeCall<void, FStructuredArchiveRecord>(this, "AShooterGameMode.Serialize(FStructuredArchiveRecord)", Record); }
	void Serialize(FArchive* Ar) { NativeCall<void, FArchive*>(this, "AShooterGameMode.Serialize(FArchive&)", Ar); }
	bool FilterBadWords(FString& String, bool bCheckWithoutSpecialChars) { return NativeCall<bool, FString&, bool>(this, "AShooterGameMode.FilterBadWords(FString&,bool)", String, bCheckWithoutSpecialChars); }
	//TSharedPtr<FWriteFileTaskInfo> SaveWorldToFile(const FString& Filename, const FString& TempFilename, const FString& SnapshotFilename, TFunction<void __cdecl(bool)>* SaveCompleteCallback, const TArray<TSubclassOf<AActor>, TSizedDefaultAllocator<32> >& typesToSave, bool bDoPartialSave) > &&, TArray<TSubclassOf<AActor>, TSizedDefaultAllocator<32> > const&, bool) { return NativeCall<TSharedPtr<FWriteFileTaskInfo, 1>, const FString&, const FString&, const FString&, TFunction<void __cdecl(bool)>*, const TArray<TSubclassOf<AActor>, TSizedDefaultAllocator<32> >&, bool>(this, "AShooterGameMode.SaveWorldToFile(FString&,FString&,FString&,TFunction<void__cdecl(bool)", Filename, TempFilename, SnapshotFilename, SaveCompleteCallback, typesToSave, bDoPartialSave); }
	//FString GetServerName(bool bNumbersAndLettersOnly) const { return NativeCall<FString, bool>(this, "AShooterGameMode.GetServerName(bool)", bNumbersAndLettersOnly); }
	FString* GetServerName(FString* result, bool bNumbersAndLettersOnly) const { return NativeCall<FString*, FString*, bool>(this, "AShooterGameMode.GetServerName(bool)", result, bNumbersAndLettersOnly); }
	void CleanupShooterController(AShooterPlayerController* theController) { NativeCall<void, AShooterPlayerController*>(this, "AShooterGameMode.CleanupShooterController(AShooterPlayerController*)", theController); }
	void TempBlockCustomCosmetics() { NativeCall<void>(this, "AShooterGameMode.TempBlockCustomCosmetics()"); }
	void LoadPlayersJoinNoCheckList() { NativeCall<void>(this, "AShooterGameMode.LoadPlayersJoinNoCheckList()"); }
	bool AllowAddToTribe(AShooterPlayerState* ForPlayerState, const FTribeData* MyNewTribe) { return NativeCall<bool, AShooterPlayerState*, const FTribeData*>(this, "AShooterGameMode.AllowAddToTribe(AShooterPlayerState*,FTribeData&)", ForPlayerState, MyNewTribe); }
	void ClearSavesAndRestart() { NativeCall<void>(this, "AShooterGameMode.ClearSavesAndRestart()"); }
	void RequestBadWordList() { NativeCall<void>(this, "AShooterGameMode.RequestBadWordList()"); }
	void IncrementNumDinos(int ForTeam, int ByAmount) { NativeCall<void, int, int>(this, "AShooterGameMode.IncrementNumDinos(int,int)", ForTeam, ByAmount); }
	void CheckArkTributeAvailability() { NativeCall<void>(this, "AShooterGameMode.CheckArkTributeAvailability()"); }
	void LoadPlayerDataIds() { NativeCall<void>(this, "AShooterGameMode.LoadPlayerDataIds()"); }
	bool HandleNewPlayer_Implementation(AShooterPlayerController* NewPlayer, UPrimalPlayerData* PlayerData, AShooterCharacter* PlayerCharacter, bool bIsFromLogin) { return NativeCall<bool, AShooterPlayerController*, UPrimalPlayerData*, AShooterCharacter*, bool>(this, "AShooterGameMode.HandleNewPlayer_Implementation(AShooterPlayerController*,UPrimalPlayerData*,AShooterCharacter*,bool)", NewPlayer, PlayerData, PlayerCharacter, bIsFromLogin); }
	bool LoadWorldFromFile(const FString& filename) { return NativeCall<bool, const FString&>(this, "AShooterGameMode.LoadWorldFromFile(FString&)", filename); }
	void GameWelcomePlayer(UNetConnection* Connection, FString& RedirectURL) { NativeCall<void, UNetConnection*, FString&>(this, "AShooterGameMode.GameWelcomePlayer(UNetConnection*,FString&)", Connection, RedirectURL); }
	FString LoadAbandonedTribeFile(int TribeID) { using AsaReturnType = FString; alignas(AsaReturnType) unsigned char AsaReturnBytes[sizeof(AsaReturnType)]; auto* AsaReturnPointer = reinterpret_cast<AsaReturnType*>(AsaReturnBytes); auto* AsaReturnedPointer = NativeCall<AsaReturnType*, AsaReturnType*, int>(this, "AShooterGameMode.LoadAbandonedTribeFile(int)", AsaReturnPointer, TribeID); if (AsaReturnedPointer != AsaReturnPointer) throw std::runtime_error("Unexpected native result buffer"); std::unique_ptr<AsaReturnType, void(*)(AsaReturnType*)> AsaReturnOwner(std::launder(AsaReturnPointer), [](AsaReturnType* value) { value->~AsaReturnType(); }); return MoveTemp(*AsaReturnOwner); }
	FString* GetBanDurationString(FString* result, FTimespan& TimeLeft) { return NativeCall<FString*, FString*, FTimespan&>(this, "AShooterGameMode.GetBanDurationString(FTimespan&)", result, TimeLeft); }
	void SendDatadogMetricEvent(const FString& Title, const FString& Message) { NativeCall<void, const FString&, const FString&>(this, "AShooterGameMode.SendDatadogMetricEvent(FString&,FString&)", Title, Message); }
	void DoMaintenanceRestart() { NativeCall<void>(this, "AShooterGameMode.DoMaintenanceRestart()"); }
	bool ReadyToStartMatch_Implementation() { return NativeCall<bool>(this, "AShooterGameMode.ReadyToStartMatch_Implementation()"); }
	void BPPreSpawnedDino(APrimalDinoCharacter* theDino) { NativeCall<void, APrimalDinoCharacter*>(this, "AShooterGameMode.BPPreSpawnedDino(APrimalDinoCharacter*)", theDino); }
	void InitOptionBool(const wchar_t* Commandline, const wchar_t* Section, const wchar_t* Option, bool bDefaultValue) { NativeCall<void, const wchar_t*, const wchar_t*, const wchar_t*, bool>(this, "AShooterGameMode.InitOptionBool(wchar_t*,wchar_t*,wchar_t*,bool)", Commandline, Section, Option, bDefaultValue); }
	void InitOptionBool(FString* Commandline, FString* Section, FString* Option, bool bDefaultValue) { NativeCall<void, FString*, FString*, FString*, bool>(this, "AShooterGameMode.InitOptionBool(FString,FString,FString,bool)", Commandline, Section, Option, bDefaultValue); }
	bool KickPlayer(FString* PlayerSteamName) { return NativeCall<bool, FString*>(this, "AShooterGameMode.KickPlayer(FString)", PlayerSteamName); }
	void CheckForDupedDinos() { NativeCall<void>(this, "AShooterGameMode.CheckForDupedDinos()"); }
	bool IsPlayerControllerAllowedToJoinNoCheck(AShooterPlayerController* ForPlayer) { return NativeCall<bool, AShooterPlayerController*>(this, "AShooterGameMode.IsPlayerControllerAllowedToJoinNoCheck(AShooterPlayerController*)", ForPlayer); }
	TSubclassOf<AGameSession> GetGameSessionClass()const { return NativeCall<TSubclassOf<AGameSession>>(this, "AShooterGameMode.GetGameSessionClass()"); }
	void AddToTribeLog(int TribeId, const FString* NewLog) { NativeCall<void, int, const FString*>(this, "AShooterGameMode.AddToTribeLog(int,FString&)", TribeId, NewLog); }
	void LoadedWorld_Implementation() { NativeCall<void>(this, "AShooterGameMode.LoadedWorld_Implementation()"); }
	bool GetBoolOptionIni(const wchar_t* Section, const wchar_t* OptionName, bool bDefaultValue) { return NativeCall<bool, const wchar_t*, const wchar_t*, bool>(this, "AShooterGameMode.GetBoolOptionIni(wchar_t*,wchar_t*,bool)", Section, OptionName, bDefaultValue); }
	TArray<APrimalDinoCharacter*, TSizedDefaultAllocator<32> >* GetOverlappingDinoCharactersOfTeamAndClass(TArray<APrimalDinoCharacter*, TSizedDefaultAllocator<32> >* result, const UE::Math::TVector<double>& AtLocation, float OverlapRange, TSubclassOf<APrimalDinoCharacter> DinoClass, int DinoTeam, bool bExactClassMatch, bool bIgnoreClass) { return NativeCall<TArray<APrimalDinoCharacter*, TSizedDefaultAllocator<32> >*, TArray<APrimalDinoCharacter*, TSizedDefaultAllocator<32> >*, const UE::Math::TVector<double>&, float, TSubclassOf<APrimalDinoCharacter>*, int, bool, bool>(this, "AShooterGameMode.GetOverlappingDinoCharactersOfTeamAndClass(UE::Math::TVector<double>&,float,TSubclassOf<APrimalDinoCharacter>,int,bool,bool)", result, AtLocation, OverlapRange, &DinoClass, DinoTeam, bExactClassMatch, bIgnoreClass); }
	void PostLogin(APlayerController* NewPlayer) { NativeCall<void, APlayerController*>(this, "AShooterGameMode.PostLogin(APlayerController*)", NewPlayer); }
	void InitializeHUDForPlayer_Implementation(APlayerController* NewPlayer) { NativeCall<void, APlayerController*>(this, "AShooterGameMode.InitializeHUDForPlayer_Implementation(APlayerController*)", NewPlayer); }
	void EndPlay(EEndPlayReason::Type EndPlayReason) { NativeCall<void, EEndPlayReason::Type>(this, "AShooterGameMode.EndPlay(EEndPlayReason::Type)", EndPlayReason); }
	void FindOrCreateSerializedObject(FAtlasSaveObjectData* SavedObject, const TArray<UObject*, TSizedDefaultAllocator<32> >& Levels, FName Name, TArray<TObjectPtr<AActor>, TSizedDefaultAllocator<32> >& ActorsToBeginPlay, UWorld* World) { NativeCall<void, FAtlasSaveObjectData*, const TArray<UObject*, TSizedDefaultAllocator<32> >&, FName, TArray<TObjectPtr<AActor>, TSizedDefaultAllocator<32> >&, UWorld*>(this, "AShooterGameMode.FindOrCreateSerializedObject(FAtlasSaveObjectData*,TArray<UObject*,TSizedDefaultAllocator<32>>&,FName,TArray<TObjectPtr<AActor>,TSizedDefaultAllocator<32>>&,UWorld*)", SavedObject, Levels, Name, ActorsToBeginPlay, World); }
	float GetFloatOption(const FString& Options, const FString& ParseString, float CurrentValue) { return NativeCall<float, const FString&, const FString&, float>(this, "AShooterGameMode.GetFloatOption(FString&,FString&,float)", Options, ParseString, CurrentValue); }
	UClass* GetDefaultPawnClassForController_Implementation(AController* InController) { return NativeCall<UClass*, AController*>(this, "AShooterGameMode.GetDefaultPawnClassForController_Implementation(AController*)", InController); }
	void LoadBannedList() { NativeCall<void>(this, "AShooterGameMode.LoadBannedList()"); }
	void SerializeForSaveFile(int SaveVersion, FArchive* InArchive, bool bDataStoresAreSerialized) { NativeCall<void, int, FArchive*, bool>(this, "AShooterGameMode.SerializeForSaveFile(int,FArchive&,bool)", SaveVersion, InArchive, bDataStoresAreSerialized); }
	bool IsTribeWar(int TribeID1, int TribeID2) { return NativeCall<bool, int, int>(this, "AShooterGameMode.IsTribeWar(int,int)", TribeID1, TribeID2); }
	void SetDamageEventLoggingEnabled(bool bEnabled) { NativeCall<void, bool>(this, "AShooterGameMode.SetDamageEventLoggingEnabled(bool)", bEnabled); }
	void UpdateUnofficialBanCheaterList(float DeltaSeconds) { NativeCall<void, float>(this, "AShooterGameMode.UpdateUnofficialBanCheaterList(float)", DeltaSeconds); }
	bool AllowAddXP(UPrimalCharacterStatusComponent* forComp) { return NativeCall<bool, UPrimalCharacterStatusComponent*>(this, "AShooterGameMode.AllowAddXP(UPrimalCharacterStatusComponent*)", forComp); }
	void SendChatMessage(const FPrimalChatMessage* Message) { NativeCall<void, const FPrimalChatMessage*>(this, "AShooterGameMode.SendChatMessage(FPrimalChatMessage&)", Message); }
	void OnLogout_Implementation(AController* Exiting) { NativeCall<void, AController*>(this, "AShooterGameMode.OnLogout_Implementation(AController*)", Exiting); }
	bool ShouldSpawnAtStartSpot(AController* Player) { return NativeCall<bool, AController*>(this, "AShooterGameMode.ShouldSpawnAtStartSpot(AController*)", Player); }
	void InitGame(const FString& MapName, const FString& Options, FString& ErrorMessage) { NativeCall<void, const FString&, const FString&, FString&>(this, "AShooterGameMode.InitGame(FString&,FString&,FString&)", MapName, Options, ErrorMessage); }
	//void HttpGetBanListComplete(TSharedPtr<IHttpRequest, 1>* HttpRequest, TSharedPtr<IHttpResponse, 1>* HttpResponse, bool bSucceeded) { NativeCall<void, TSharedPtr<IHttpRequest, 1>*, TSharedPtr<IHttpResponse, 1>*, bool>(this, "AShooterGameMode.HttpGetBanListComplete(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool)", HttpRequest, HttpResponse, bSucceeded); }
	//void HttpGetDynamicConfigComplete(TSharedPtr<IHttpRequest, 1>* HttpRequest, TSharedPtr<IHttpResponse, 1>* HttpResponse, bool bSucceeded) { NativeCall<void, TSharedPtr<IHttpRequest, 1>*, TSharedPtr<IHttpResponse, 1>*, bool>(this, "AShooterGameMode.HttpGetDynamicConfigComplete(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool)", HttpRequest, HttpResponse, bSucceeded); }
	FString DoGameCommand(const FString& TheCommand) { using AsaReturnType = FString; alignas(AsaReturnType) unsigned char AsaReturnBytes[sizeof(AsaReturnType)]; auto* AsaReturnPointer = reinterpret_cast<AsaReturnType*>(AsaReturnBytes); auto* AsaReturnedPointer = NativeCall<AsaReturnType*, AsaReturnType*, const FString &>(this, "AShooterGameMode.DoGameCommand(FString&)", AsaReturnPointer, TheCommand); if (AsaReturnedPointer != AsaReturnPointer) throw std::runtime_error("Unexpected native result buffer"); std::unique_ptr<AsaReturnType, void(*)(AsaReturnType*)> AsaReturnOwner(std::launder(AsaReturnPointer), [](AsaReturnType* value) { value->~AsaReturnType(); }); return MoveTemp(*AsaReturnOwner); }
	// 	void LoadWorldFromFileWrapper() { NativeCall<void>(this, "AShooterGameMode.LoadWorldFromFileWrapper()"); }
	// FUNCTION MISSING: AShooterGameMode.LoadWorldFromFileWrapper()
	bool AllowTaming(int ForTeam, APrimalDinoCharacter* TheDino) { return NativeCall<bool, int, APrimalDinoCharacter*>(this, "AShooterGameMode.AllowTaming(int,APrimalDinoCharacter*)", ForTeam, TheDino); }
	bool BPIsSpawnpointAllowed_Implementation(APlayerStart* SpawnPoint, AController* Player) const { return NativeCall<bool, APlayerStart*, AController*>(this, "AShooterGameMode.BPIsSpawnpointAllowed_Implementation(APlayerStart*,AController*)", SpawnPoint, Player); }
	void ForceRepopulateAllHarvestElements(UE::Math::TVector<double> AtPoint, float MaxRangeFromPoint) { NativeCall<void, UE::Math::TVector<double>, float>(this, "AShooterGameMode.ForceRepopulateAllHarvestElements(UE::Math::TVector<double>,float)", AtPoint, MaxRangeFromPoint); }
	void SetDayCycleSpeed(float speed) { NativeCall<void, float>(this, "AShooterGameMode.SetDayCycleSpeed(float)", speed); }
	FString* ValidateTribeName(FString* result, FString* theTribeName) { return NativeCall<FString*, FString*, FString*>(this, "AShooterGameMode.ValidateTribeName(FString)", result, theTribeName); }
	//void HttpGetLiveTuningOverloadsComplete(TSharedPtr<IHttpRequest, 1>* HttpRequest, TSharedPtr<IHttpResponse, 1>* HttpResponse, bool bSucceeded) { NativeCall<void, TSharedPtr<IHttpRequest, 1>*, TSharedPtr<IHttpResponse, 1>*, bool>(this, "AShooterGameMode.HttpGetLiveTuningOverloadsComplete(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool)", HttpRequest, HttpResponse, bSucceeded); }
	bool IsEngramClassHidden(TSubclassOf<UPrimalItem> ForItemClass) { return NativeCall<bool, TSubclassOf<UPrimalItem>>(this, "AShooterGameMode.IsEngramClassHidden(TSubclassOf<UPrimalItem>)", ForItemClass); }
	void DDoSDetected() { NativeCall<void>(this, "AShooterGameMode.DDoSDetected()"); }
	bool CheckJoinInProgress_Implementation(bool bIsFromLogin, APlayerController* NewPlayer) { return NativeCall<bool, bool, APlayerController*>(this, "AShooterGameMode.CheckJoinInProgress_Implementation(bool,APlayerController*)", bIsFromLogin, NewPlayer); }
	// 	bool SetTranfers(bool enabled) { return NativeCall<bool, bool>(this, "AShooterGameMode.SetTranfers(bool)", enabled); }
	// FUNCTION MISSING: AShooterGameMode.SetTranfers(bool)
	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// static void StaticRegisterNativesAShooterGameMode();
	void RestartPlayer(AController* NewPlayer) { NativeCall<void, AController*>(this, "AShooterGameMode.RestartPlayer(AController*)", NewPlayer); }
	bool IsCachedTeamTameListOutOfDate(AShooterPlayerController* RequestingPlayer) { return NativeCall<bool, AShooterPlayerController*>(this, "AShooterGameMode.IsCachedTeamTameListOutOfDate(AShooterPlayerController*)", RequestingPlayer); }
	void BeginPlay() { NativeCall<void>(this, "AShooterGameMode.BeginPlay()"); }
	UClass* AttemptLoadClass(FName ClassName) { return NativeCall<UClass*, FName>(this, "AShooterGameMode.AttemptLoadClass(FName)", ClassName); }
	void PlayEnded() { NativeCall<void>(this, "AShooterGameMode.PlayEnded()"); }
	UObject* _getUObject()const { return NativeCall<UObject*>(this, "AShooterGameMode._getUObject()"); }
	bool IsPlayerAllowedToJoinNoCheck(const FUniqueNetId* PlayerId) { return NativeCall<bool, const FUniqueNetId*>(this, "AShooterGameMode.IsPlayerAllowedToJoinNoCheck(FUniqueNetId&)", PlayerId); }
	TSharedPtr<FWriteFileTaskInfo> SaveTribeData(const FTribeData* TribeData, bool bCanDeferToTick) { return NativeCall<TSharedPtr<FWriteFileTaskInfo>, const FTribeData*, bool>(this, "AShooterGameMode.SaveTribeData(FTribeData&,bool)", TribeData, bCanDeferToTick); }
	void InitShooterPlayer(APlayerController* NewPlayer) { NativeCall<void, APlayerController*>(this, "AShooterGameMode.InitShooterPlayer(APlayerController*)", NewPlayer); }
	FString* GeneratePGMapFolderName(FString* result, TMap<FString, FString, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<FString, FString, 0> >* PGMapOptionsString) { return NativeCall<FString*, FString*, TMap<FString, FString, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<FString, FString, 0> >*>(this, "AShooterGameMode.GeneratePGMapFolderName(TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>>)", result, PGMapOptionsString); }
	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// void UpdateSaveBackupFiles();
	void PostServerMetrics() { NativeCall<void>(this, "AShooterGameMode.PostServerMetrics()"); }
	bool IsTimeSinceMissionDeactivated(TSubclassOf<AMissionType> MissionType, float CheckTimeSince, bool bForceTrueAtZeroTime) { return NativeCall<bool, TSubclassOf<AMissionType>, float, bool>(this, "AShooterGameMode.IsTimeSinceMissionDeactivated(TSubclassOf<AMissionType>,float,bool)", MissionType, CheckTimeSince, bForceTrueAtZeroTime); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("AShooterGameMode"); }
	void GetDynamicConfig() { NativeCall<void>(this, "AShooterGameMode.GetDynamicConfig()"); }
	static APlayerController* GetPlayerControllerByUniqueID(UWorld* World, FUniqueNetIdRepl* PlayerID) { return NativeCall<APlayerController*, UWorld*, FUniqueNetIdRepl*>(nullptr, "AShooterGameMode.GetPlayerControllerByUniqueID(UWorld*,FUniqueNetIdRepl)", World, PlayerID); }
	bool ShouldChatMessageBeBlocked(const FPrimalChatMessage* Message, AShooterPlayerController* Recipient) { return NativeCall<bool, const FPrimalChatMessage*, AShooterPlayerController*>(this, "AShooterGameMode.ShouldChatMessageBeBlocked(FPrimalChatMessage&,AShooterPlayerController*)", Message, Recipient); }
	unsigned int GenerateTribeId() { return NativeCall<unsigned int>(this, "AShooterGameMode.GenerateTribeId()"); }
	unsigned int GeneratePlayerDataId(TSharedPtr<FUniqueNetId const>* UniqueID) { return NativeCall<unsigned int, TSharedPtr<FUniqueNetId const>*>(this, "AShooterGameMode.GeneratePlayerDataId(TSharedPtr<FUniqueNetId,1>)", UniqueID); }
	void PreInitializeComponents() { NativeCall<void>(this, "AShooterGameMode.PreInitializeComponents()"); }
	float GetHarvestResourceItemAmountMultiplier(TSubclassOf<UPrimalItem> HarvestItemClass) { return NativeCall<float, TSubclassOf<UPrimalItem>>(this, "AShooterGameMode.GetHarvestResourceItemAmountMultiplier(TSubclassOf<UPrimalItem>)", HarvestItemClass); }
	static FString GetSaveDirectoryName(UWorld* InWorld, ESaveType::Type SaveType, bool RemoveSavedArksDir, bool IncludeMapSaveDirectory) { using AsaReturnType = FString; alignas(AsaReturnType) unsigned char AsaReturnBytes[sizeof(AsaReturnType)]; auto* AsaReturnPointer = reinterpret_cast<AsaReturnType*>(AsaReturnBytes); auto* AsaReturnedPointer = NativeCall<AsaReturnType*, AsaReturnType*, UWorld *, ESaveType :: Type, bool, bool>(nullptr, "AShooterGameMode.GetSaveDirectoryName(UWorld*,ESaveType::Type,bool,bool)", AsaReturnPointer, InWorld, SaveType, RemoveSavedArksDir, IncludeMapSaveDirectory); if (AsaReturnedPointer != AsaReturnPointer) throw std::runtime_error("Unexpected native result buffer"); std::unique_ptr<AsaReturnType, void(*)(AsaReturnType*)> AsaReturnOwner(std::launder(AsaReturnPointer), [](AsaReturnType* value) { value->~AsaReturnType(); }); return MoveTemp(*AsaReturnOwner); }
	void RemovePlayerFromTribe(unsigned long TribeID, unsigned long PlayerDataID, bool bDontUpdatePlayerState) { NativeCall<void, unsigned long, unsigned long, bool>(this, "AShooterGameMode.RemovePlayerFromTribe(unsigned__int64,unsigned__int64,bool)", TribeID, PlayerDataID, bDontUpdatePlayerState); }
	void ChatLogFlushOnTick() { NativeCall<void>(this, "AShooterGameMode.ChatLogFlushOnTick()"); }
	void LoadPlayerIds_Process(unsigned long InPlayerID, TArray<unsigned char, TSizedDefaultAllocator<32> >& ReadBytes) { NativeCall<void, unsigned long, TArray<unsigned char, TSizedDefaultAllocator<32> >&>(this, "AShooterGameMode.LoadPlayerIds_Process(unsigned__int64,TArray<unsignedchar,TSizedDefaultAllocator<32>>&)", InPlayerID, ReadBytes); }
	UPrimalPlayerData* LoadPlayerData(AShooterPlayerState* PlayerState, bool bIsLoadingBackup, int LocalPlayerIndex) { return NativeCall<UPrimalPlayerData*, AShooterPlayerState*, bool, int>(this, "AShooterGameMode.LoadPlayerData(AShooterPlayerState*,bool,int)", PlayerState, bIsLoadingBackup, LocalPlayerIndex); }
	void IncrementPreLoginMetric() { NativeCall<void>(this, "AShooterGameMode.IncrementPreLoginMetric()"); }
	void MaxTamedDinos_SoftTameLimit_MarkAllTamesForSoftTameLimit() { NativeCall<void>(this, "AShooterGameMode.MaxTamedDinos_SoftTameLimit_MarkAllTamesForSoftTameLimit()"); }
	void RemoveInactivePlayersAndTribes() { NativeCall<void>(this, "AShooterGameMode.RemoveInactivePlayersAndTribes()"); }
	void ShiftAwaitingNEXTBatchOfTeamsToUpdateCachedTeamTameListsToCurrentBatch() { NativeCall<void>(this, "AShooterGameMode.ShiftAwaitingNEXTBatchOfTeamsToUpdateCachedTeamTameListsToCurrentBatch()"); }
	void MovePlayersAwaitingUpdatedCachedTeamTameListToArrayOfPlayersToGetNotifiedAndRecieveUpdatedList() { NativeCall<void>(this, "AShooterGameMode.MovePlayersAwaitingUpdatedCachedTeamTameListToArrayOfPlayersToGetNotifiedAndRecieveUpdatedList()"); }
	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// bool IsLoginLockDisabled();
	void DamageEventLogFlush() { NativeCall<void>(this, "AShooterGameMode.DamageEventLogFlush()"); }
	void SaveBannedList() { NativeCall<void>(this, "AShooterGameMode.SaveBannedList()"); }
	void NotifyDamage(AActor* Victim, float DamageAmount, const FDamageEvent* Event, AController* EventInstigator, AActor* DamageCauser) { NativeCall<void, AActor*, float, const FDamageEvent*, AController*, AActor*>(this, "AShooterGameMode.NotifyDamage(AActor*,float,FDamageEvent&,AController*,AActor*)", Victim, DamageAmount, Event, EventInstigator, DamageCauser); }
	bool CanDealDamage(AShooterPlayerState* DamageInstigator, AShooterPlayerState* DamagedPlayer) const { return NativeCall<bool, AShooterPlayerState*, AShooterPlayerState*>(this, "AShooterGameMode.CanDealDamage(AShooterPlayerState*,AShooterPlayerState*)", DamageInstigator, DamagedPlayer); }
	float ModifyDamage(float Damage, AActor* DamagedActor, const FDamageEvent* DamageEvent, AController* EventInstigator, AActor* DamageCauser) const { return NativeCall<float, float, AActor*, const FDamageEvent*, AController*, AActor*>(this, "AShooterGameMode.ModifyDamage(float,AActor*,FDamageEvent&,AController*,AActor*)", Damage, DamagedActor, DamageEvent, EventInstigator, DamageCauser); }
	float GetDinoDamageMultiplier(APrimalDinoCharacter* ForDino) { return NativeCall<float, APrimalDinoCharacter*>(this, "AShooterGameMode.GetDinoDamageMultiplier(APrimalDinoCharacter*)", ForDino); }
	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// bool CreatePipes();
	void BeginUnloadingWorld() { NativeCall<void>(this, "AShooterGameMode.BeginUnloadingWorld()"); }
	void AddPlayerID(int playerDataID, FString* netUniqueString, bool bForce) { NativeCall<void, int, FString*, bool>(this, "AShooterGameMode.AddPlayerID(int,FString,bool)", playerDataID, netUniqueString, bForce); }
	// 	void ArkMetricsAppend(const FString& Type, TSharedPtr<FJsonObject>* Payload) { NativeCall<void, const FString&, TSharedPtr<FJsonObject>*>(this, "AShooterGameMode.ArkMetricsAppend(FString&,TSharedPtr<FJsonObject,1>)", Type, Payload); }
	// FUNCTION MISSING: AShooterGameMode.ArkMetricsAppend(FString&,TSharedPtr<FJsonObject,1>)
	void GenericPlayerInitialization(AController* C) { NativeCall<void, AController*>(this, "AShooterGameMode.GenericPlayerInitialization(AController*)", C); }
	// 	void SingleplayerSetupValues() { NativeCall<void>(this, "AShooterGameMode.SingleplayerSetupValues()"); }
	// FUNCTION MISSING: AShooterGameMode.SingleplayerSetupValues()
	FString* InitNewPlayer(FString* result, APlayerController* NewPlayerController, const FUniqueNetIdRepl& UniqueId, const FString& Options, const FString& Portal) { return NativeCall<FString*, FString*, APlayerController*, const FUniqueNetIdRepl&, const FString&, const FString&>(this, "AShooterGameMode.InitNewPlayer(APlayerController*,FUniqueNetIdRepl&,FString&,FString&)", result, NewPlayerController, UniqueId, Options, Portal); }
	void PostAlarmNotificationTribe(int TribeID, FString* Title, FString* Message) { NativeCall<void, int, FString*, FString*>(this, "AShooterGameMode.PostAlarmNotificationTribe(int,FString,FString)", TribeID, Title, Message); }
	unsigned __int64 GetSteamIDForPlayerID(int playerDataID) { return NativeCall<unsigned __int64, int>(this, "AShooterGameMode.GetSteamIDForPlayerID(int)", playerDataID); }
	void UpConvertTribeDataToDataStore() { NativeCall<void>(this, "AShooterGameMode.UpConvertTribeDataToDataStore()"); }
	int GetIntOptionIni(const wchar_t* Section, const wchar_t* OptionName) { return NativeCall<int, const wchar_t*, const wchar_t*>(this, "AShooterGameMode.GetIntOptionIni(wchar_t*,wchar_t*)", Section, OptionName); }
	bool GetOrLoadTribeData_ReturnAbandonedResult(int TribeID, FTribeData* LoadedTribeData, bool& IsAbandoned, ETribeDataExclude ExcludeFilter) { return NativeCall<bool, int, FTribeData*, bool&, ETribeDataExclude>(this, "AShooterGameMode.GetOrLoadTribeData_ReturnAbandonedResult(int,FTribeData&,bool&,ETribeDataExclude)", TribeID, LoadedTribeData, IsAbandoned, ExcludeFilter); }
	FLeaderboardEntry* GetOrCreateLeaderboardEntry(FName MissionTag) { return NativeCall<FLeaderboardEntry*, FName>(this, "AShooterGameMode.GetOrCreateLeaderboardEntry(FName)", MissionTag); }
	void AllowPlayerToJoinNoCheck(const FUniqueNetId* PlayerId) { NativeCall<void, const FUniqueNetId*>(this, "AShooterGameMode.AllowPlayerToJoinNoCheck(FUniqueNetId&)", PlayerId); }
	void OnDeserializedByGame(EOnDeserializationType::Type DeserializationType) { NativeCall<void, EOnDeserializationType::Type>(this, "AShooterGameMode.OnDeserializedByGame(EOnDeserializationType::Type)", DeserializationType); }
	void QueueUpTeamForItsCachedTeamTameListToBeUpdated(AShooterPlayerController* RequestingPlayer) { NativeCall<void, AShooterPlayerController*>(this, "AShooterGameMode.QueueUpTeamForItsCachedTeamTameListToBeUpdated(AShooterPlayerController*)", RequestingPlayer); }
	bool TryGetIntOptionIni(const wchar_t* Section, const wchar_t* OptionName, int& value) { return NativeCall<bool, const wchar_t*, const wchar_t*, int&>(this, "AShooterGameMode.TryGetIntOptionIni(FString,FString,int&)", Section, OptionName, value); }
	bool TryGetIntOptionIni(FString* Section, FString* OptionName, int& value) { return NativeCall<bool, FString*, FString*, int&>(this, "AShooterGameMode.TryGetIntOptionIni(FString,FString,int&)", Section, OptionName, value); }
	void SpawnedPawnFor(AController* PC, APawn* SpawnedPawn) { NativeCall<void, AController*, APawn*>(this, "AShooterGameMode.SpawnedPawnFor(AController*,APawn*)", PC, SpawnedPawn); }
	void UpConvertPlayerDataToDataStore() { NativeCall<void>(this, "AShooterGameMode.UpConvertPlayerDataToDataStore()"); }
	bool AreTribesAllied(int TribeID1, int TribeID2) { return NativeCall<bool, int, int>(this, "AShooterGameMode.AreTribesAllied(int,int)", TribeID1, TribeID2); }
	// 	AActor* FindDeadCharOrCacheAtLocation(unsigned long ForPlayerId, UE::Math::TVector<double> AtLocation) { return NativeCall<AActor*, unsigned long, UE::Math::TVector<double>>(this, "AShooterGameMode.FindDeadCharOrCacheAtLocation(unsigned__int64,UE::Math::TVector<double>)", ForPlayerId, AtLocation); }
	// FUNCTION MISSING: AShooterGameMode.FindDeadCharOrCacheAtLocation(unsigned__int64,UE::Math::TVector<double>)
	bool UnbanPlayer(FString* PlayerSteamName) { return NativeCall<bool, FString*>(this, "AShooterGameMode.UnbanPlayer(FString)", PlayerSteamName); }
	bool TryGetBoolOptionIni(const wchar_t* Section, const wchar_t* OptionName, bool& value) { return NativeCall<bool, const wchar_t*, const wchar_t*, bool&>(this, "AShooterGameMode.TryGetBoolOptionIni(FString,FString,bool&)", Section, OptionName, value); }
	bool TryGetBoolOptionIni(FString* Section, FString* OptionName, bool& value) { return NativeCall<bool, FString*, FString*, bool&>(this, "AShooterGameMode.TryGetBoolOptionIni(FString,FString,bool&)", Section, OptionName, value); }
	bool BPIsSpawnpointPreferred_Implementation(APlayerStart* SpawnPoint, AController* Player) const { return NativeCall<bool, APlayerStart*, AController*>(this, "AShooterGameMode.BPIsSpawnpointPreferred_Implementation(APlayerStart*,AController*)", SpawnPoint, Player); }
	void ServerConstructedFoliageHiddenAttachedComponent(FAttachedInstanced* aComponent) { NativeCall<void, FAttachedInstanced*>(this, "AShooterGameMode.ServerConstructedFoliageHiddenAttachedComponent(FAttachedInstanced*)", aComponent); }
	void PrintToGameplayLog(const FString& InString) { NativeCall<void, const FString&>(this, "AShooterGameMode.PrintToGameplayLog(FString&)", InString); }
	void Killed(AController* Killer, AController* KilledPlayer, APawn* KilledPawn, const UDamageType* DamageType) { NativeCall<void, AController*, AController*, APawn*, const UDamageType*>(this, "AShooterGameMode.Killed(AController*,AController*,APawn*,UDamageType*)", Killer, KilledPlayer, KilledPawn, DamageType); }
	void ReassertColorization() { NativeCall<void>(this, "AShooterGameMode.ReassertColorization()"); }
	void DeletePlayerData(AShooterPlayerState* PlayerState, bool bMakeBackup) { NativeCall<void, AShooterPlayerState*, bool>(this, "AShooterGameMode.DeletePlayerData(AShooterPlayerState*,bool)", PlayerState, bMakeBackup); }
	bool IsPlayerControllerAllowedToExclusiveJoin(AShooterPlayerController* ForPlayer) { return NativeCall<bool, AShooterPlayerController*>(this, "AShooterGameMode.IsPlayerControllerAllowedToExclusiveJoin(AShooterPlayerController*)", ForPlayer); }
	void ReturnCachedTeamTameListsToAwaitingPlayers_OnInterval() { NativeCall<void>(this, "AShooterGameMode.ReturnCachedTeamTameListsToAwaitingPlayers_OnInterval()"); }
	void OnLandscapeLevelLoaded() { NativeCall<void>(this, "AShooterGameMode.OnLandscapeLevelLoaded()"); }
	void StartNewShooterPlayer(APlayerController* NewPlayer, bool bForceCreateNewPlayerData, bool bIsFromLogin, const FPrimalPlayerCharacterConfigStruct* charConfig, UPrimalPlayerData* ArkPlayerData, bool bForceCreateNewTribe) { NativeCall<void, APlayerController*, bool, bool, const FPrimalPlayerCharacterConfigStruct*, UPrimalPlayerData*, bool>(this, "AShooterGameMode.StartNewShooterPlayer(APlayerController*,bool,bool,FPrimalPlayerCharacterConfigStruct&,UPrimalPlayerData*,bool)", NewPlayer, bForceCreateNewPlayerData, bIsFromLogin, charConfig, ArkPlayerData, bForceCreateNewTribe); }
	void PostAdminTrackedCommands() { NativeCall<void>(this, "AShooterGameMode.PostAdminTrackedCommands()"); }
	void InitOptionFloat(const wchar_t* Commandline, const wchar_t* Section, const wchar_t* Option, float CurrentValue) { NativeCall<void, const wchar_t*, const wchar_t*, const wchar_t*, float>(this, "AShooterGameMode.InitOptionFloat(wchar_t*,wchar_t*,wchar_t*,float)", Commandline, Section, Option, CurrentValue); }
	void InitOptionFloat(FString* Commandline, FString* Section, FString* Option, float CurrentValue) { NativeCall<void, FString*, FString*, FString*, float>(this, "AShooterGameMode.InitOptionFloat(FString,FString,FString,float)", Commandline, Section, Option, CurrentValue); }
	void UpdateCachedTeamTameLists_OnInterval() { NativeCall<void>(this, "AShooterGameMode.UpdateCachedTeamTameLists_OnInterval()"); }
	void InitOptionInteger(const wchar_t* Commandline, const wchar_t* Section, const wchar_t* Option, int CurrentValue) { NativeCall<void, const wchar_t*, const wchar_t*, const wchar_t*, int>(this, "AShooterGameMode.InitOptionInteger(wchar_t*,wchar_t*,wchar_t*,int)", Commandline, Section, Option, CurrentValue); }
	void RequestUpdateCachedTeamTameList(AShooterPlayerController* RequestingPlayer) { NativeCall<void, AShooterPlayerController*>(this, "AShooterGameMode.RequestUpdateCachedTeamTameList(AShooterPlayerController*)", RequestingPlayer); }
	bool LoadTribeData(int TribeID, FTribeData* LoadedTribeData, bool bIsLoadingBackup, bool bDontCheckDirtyTribeWar, ETribeDataExclude ExcludeFilter) { return NativeCall<bool, int, FTribeData*, bool, bool, ETribeDataExclude>(this, "AShooterGameMode.LoadTribeData(int,FTribeData&,bool,bool,ETribeDataExclude)", TribeID, LoadedTribeData, bIsLoadingBackup, bDontCheckDirtyTribeWar, ExcludeFilter); }
	void SlowFrameDetected(float FrameTime, float SlowFrameThresholdSeconds) { NativeCall<void, float,float>(this, "AShooterGameMode.SlowFrameDetected(float,float)", FrameTime, SlowFrameThresholdSeconds); }
	bool AllowSpectatorJoinAfterMatchStart(APlayerController* ForPlayerController) { return NativeCall<bool, APlayerController*>(this, "AShooterGameMode.AllowSpectatorJoinAfterMatchStart(APlayerController*)", ForPlayerController); }
	bool IsSpawnpointPreferred(APlayerStart* SpawnPoint, AController* Player) const { return NativeCall<bool, APlayerStart*, AController*>(this, "AShooterGameMode.IsSpawnpointPreferred(APlayerStart*,AController*)", SpawnPoint, Player); }
	// 	bool IsBusySavingWorld()const { return NativeCall<bool>(this, "AShooterGameMode.IsBusySavingWorld()"); }
	// FUNCTION MISSING: AShooterGameMode.IsBusySavingWorld()
	float GetFloatOptionIni(const wchar_t* Section, const wchar_t* OptionName) { return NativeCall<float, const wchar_t*, const wchar_t*>(this, "AShooterGameMode.GetFloatOptionIni(wchar_t*,wchar_t*)", Section, OptionName); }
	void LoadTribeIds_Process(unsigned int theTribeID) { NativeCall<void, unsigned int>(this, "AShooterGameMode.LoadTribeIds_Process(unsignedint)", theTribeID); }
	void UpdateTribeWars() { NativeCall<void>(this, "AShooterGameMode.UpdateTribeWars()"); }
	void UpdateBanCheaterList(float DeltaSeconds) { NativeCall<void, float>(this, "AShooterGameMode.UpdateBanCheaterList(float)", DeltaSeconds); }
	void HandleMatchHasStarted() { NativeCall<void>(this, "AShooterGameMode.HandleMatchHasStarted()"); }
	bool HandleNewPlayer(AShooterPlayerController* NewPlayer, UPrimalPlayerData* PlayerData, AShooterCharacter* PlayerCharacter, bool bIsFromLogin) { return NativeCall<bool, AShooterPlayerController*, UPrimalPlayerData*, AShooterCharacter*, bool>(this, "AShooterGameMode.HandleNewPlayer(AShooterPlayerController*,UPrimalPlayerData*,AShooterCharacter*,bool)", NewPlayer, PlayerData, PlayerCharacter, bIsFromLogin); }
	void HandleLeavingMap() { NativeCall<void>(this, "AShooterGameMode.HandleLeavingMap()"); }
	//FShooterGameSessionParams BPDoInitSessionParams_Implementation(const FShooterGameSessionParams* Params) { return NativeCall<FShooterGameSessionParams, const FShooterGameSessionParams*>(this, "AShooterGameMode.BPDoInitSessionParams_Implementation(FShooterGameSessionParams&)", Params); }
	//void HttpCheckGlobalEnablesComplete(TSharedPtr<IHttpRequest, 1>* HttpRequest, TSharedPtr<IHttpResponse, 1>* HttpResponse, bool bSucceeded) { NativeCall<void, TSharedPtr<IHttpRequest, 1>*, TSharedPtr<IHttpResponse, 1>*, bool>(this, "AShooterGameMode.HttpCheckGlobalEnablesComplete(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool)", HttpRequest, HttpResponse, bSucceeded); }
	void SetLastMissionDeactivatedUtcTime(TSubclassOf<AMissionType> MissionType, double UtcTime) { NativeCall<void, TSubclassOf<AMissionType>, double>(this, "AShooterGameMode.SetLastMissionDeactivatedUtcTime(TSubclassOf<AMissionType>,double)", MissionType, UtcTime); }
	void ChatLogFlush(bool bFinalize) { NativeCall<void, bool>(this, "AShooterGameMode.ChatLogFlush(bool)", bFinalize); }
	void ResyncZoneVolumesWithHibernationManager(UWorld* World) { NativeCall<void, UWorld*>(this, "AShooterGameMode.ResyncZoneVolumesWithHibernationManager(UWorld*)", World); }
	UE::Math::TVector<double> GetTracedSpawnLocation(const UE::Math::TVector<double>& SpawnLoc, float CharHalfHeight) { using AsaReturnType = UE :: Math :: TVector < double >; alignas(AsaReturnType) unsigned char AsaReturnBytes[sizeof(AsaReturnType)]; auto* AsaReturnPointer = reinterpret_cast<AsaReturnType*>(AsaReturnBytes); auto* AsaReturnedPointer = NativeCall<AsaReturnType*, AsaReturnType*, const UE :: Math :: TVector < double > &, float>(this, "AShooterGameMode.GetTracedSpawnLocation(UE::Math::TVector<double>&,float)", AsaReturnPointer, SpawnLoc, CharHalfHeight); if (AsaReturnedPointer != AsaReturnPointer) throw std::runtime_error("Unexpected native result buffer"); std::unique_ptr<AsaReturnType, void(*)(AsaReturnType*)> AsaReturnOwner(std::launder(AsaReturnPointer), [](AsaReturnType* value) { value->~AsaReturnType(); }); return MoveTemp(*AsaReturnOwner); }
	void RequestPlayerRecieveKnownCachedTeamTameList(AShooterPlayerController* RequestingPlayer) { NativeCall<void, AShooterPlayerController*>(this, "AShooterGameMode.RequestPlayerRecieveKnownCachedTeamTameList(AShooterPlayerController*)", RequestingPlayer); }
	TSharedPtr<FWriteFileTaskInfo> SavePlayerData(UPrimalPlayerData* PlayerData, bool bSaveBackup, bool bForceSave, bool bSkipBuffRefresh) { return NativeCall<TSharedPtr<FWriteFileTaskInfo>, UPrimalPlayerData*, bool, bool, bool>(this, "AShooterGameMode.SavePlayerData(UPrimalPlayerData*,bool,bool,bool)", PlayerData, bSaveBackup, bForceSave, bSkipBuffRefresh); }
	bool DumpAssetProperties(const FString& Asset, FString& OutFilename) { return NativeCall<bool, const FString&, FString&>(this, "AShooterGameMode.DumpAssetProperties(FString&,FString&)", Asset, OutFilename); }
	void RequestFinishAndExitToMainMenu() { NativeCall<void>(this, "AShooterGameMode.RequestFinishAndExitToMainMenu()"); }
	void UpdateCosmeticWhitelist() { NativeCall<void>(this, "AShooterGameMode.UpdateCosmeticWhitelist()"); }
	void DownloadTransferredPlayer(AShooterPlayerController* NewPlayer) { NativeCall<void, AShooterPlayerController*>(this, "AShooterGameMode.DownloadTransferredPlayer(AShooterPlayerController*)", NewPlayer); }
	void CheckGlobalEnables() { NativeCall<void>(this, "AShooterGameMode.CheckGlobalEnables()"); }
	void DedicatedForceLoadSoftAssets() { NativeCall<void>(this, "AShooterGameMode.DedicatedForceLoadSoftAssets()"); }
	void RemoveTribe(unsigned long TribeID) { NativeCall<void, unsigned long>(this, "AShooterGameMode.RemoveTribe(unsigned__int64)", TribeID); }
	void ParseServerToJson() { NativeCall<void>(this, "AShooterGameMode.ParseServerToJson()"); }
	void GetActorSaveGameTypes(TArray<TSubclassOf<AActor>, TSizedDefaultAllocator<32> >& saveGameTypes) { NativeCall<void, TArray<TSubclassOf<AActor>, TSizedDefaultAllocator<32> >&>(this, "AShooterGameMode.GetActorSaveGameTypes(TArray<TSubclassOf<AActor>,TSizedDefaultAllocator<32>>&)", saveGameTypes); }
	float GetDinoResistanceMultiplier(APrimalDinoCharacter* ForDino) { return NativeCall<float, APrimalDinoCharacter*>(this, "AShooterGameMode.GetDinoResistanceMultiplier(APrimalDinoCharacter*)", ForDino); }
	void SaveTributePlayerDatas(const FUniqueNetId* UniqueID) { NativeCall<void, const FUniqueNetId*>(this, "AShooterGameMode.SaveTributePlayerDatas(FUniqueNetId&)", UniqueID); }
	UPrimalPlayerData* GetPlayerDataFor(AShooterPlayerController* PC, bool& bCreatedNewPlayerData, bool bForceCreateNewPlayerData, const FPrimalPlayerCharacterConfigStruct* charConfig, bool bAutoCreateNewData, bool bDontSaveNewData) { return NativeCall<UPrimalPlayerData*, AShooterPlayerController*, bool&, bool, const FPrimalPlayerCharacterConfigStruct*, bool, bool>(this, "AShooterGameMode.GetPlayerDataFor(AShooterPlayerController*,bool&,bool,FPrimalPlayerCharacterConfigStruct&,bool,bool)", PC, bCreatedNewPlayerData, bForceCreateNewPlayerData, charConfig, bAutoCreateNewData, bDontSaveNewData); }
	void RemoveConnectedPlayer(const TSharedPtr<FUniqueNetId const>* UniqueNetId) { NativeCall<void, const TSharedPtr<FUniqueNetId const>*>(this, "AShooterGameMode.RemoveConnectedPlayer(TSharedPtr<FUniqueNetId,1>&)", UniqueNetId); }
	bool StartSaveBackup() { return NativeCall<bool>(this, "AShooterGameMode.StartSaveBackup()"); }
	void InitializeDatabaseRefs() { NativeCall<void>(this, "AShooterGameMode.InitializeDatabaseRefs()"); }
	bool ExtraPreLoginChecksBeforeWelcomePlayer(UNetConnection* Connection) { return NativeCall<bool, UNetConnection*>(this, "AShooterGameMode.ExtraPreLoginChecksBeforeWelcomePlayer(UNetConnection*)", Connection); }
	bool IsPlayerAllowedToCheat(AShooterPlayerController* ForPlayer) { return NativeCall<bool, AShooterPlayerController*>(this, "AShooterGameMode.IsPlayerAllowedToCheat(AShooterPlayerController*)", ForPlayer); }
	bool HasOption(const FString& Options, const FString& InKey) { return NativeCall<bool, const FString&, const FString&>(this, "AShooterGameMode.HasOption(FString&,FString&)", Options, InKey); }
	void UpdateStructureStasisGrid(float DeltaSeconds) { NativeCall<void, float>(this, "AShooterGameMode.UpdateStructureStasisGrid(float)", DeltaSeconds); }
	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// void ExecuteCommand(const FString& command);
	void RemoveLoginLock(const TSharedPtr<FUniqueNetId const>* UniqueNetId) { NativeCall<void, const TSharedPtr<FUniqueNetId const>*>(this, "AShooterGameMode.RemoveLoginLock(TSharedPtr<FUniqueNetId,1>&)", UniqueNetId); }
	void ChatLogAppend(AShooterPlayerController* SenderController, const FPrimalChatMessage* Msg) { NativeCall<void, AShooterPlayerController*, const FPrimalChatMessage*>(this, "AShooterGameMode.ChatLogAppend(AShooterPlayerController*,FPrimalChatMessage&)", SenderController, Msg); }
	void StartIntervalUpdatingCachedTeamTameLists(AShooterPlayerController* RequestingPlayer) { NativeCall<void, AShooterPlayerController*>(this, "AShooterGameMode.StartIntervalUpdatingCachedTeamTameLists(AShooterPlayerController*)", RequestingPlayer); }
	bool GetOrLoadTribeData(int TribeID, FTribeData* LoadedTribeData, ETribeDataExclude ExcludeFilter) { return NativeCall<bool, int, FTribeData*, ETribeDataExclude>(this, "AShooterGameMode.GetOrLoadTribeData(int,FTribeData&,ETribeDataExclude)", TribeID, LoadedTribeData, ExcludeFilter); }
	//void SendServerChatMessage(const FString& MessageText, FLinearColor MessageColor, bool bIsBold, int ReceiverTeamId, int ReceiverPlayerID, FString* SenderID) { NativeCall<void, const FString&, FLinearColor, bool, int, int, FString*>(this, "AShooterGameMode.SendServerChatMessage(FString&,FLinearColor,bool,int,int,FString)", MessageText, MessageColor, bIsBold, ReceiverTeamId, ReceiverPlayerID, SenderID); }
	void SendServerChatMessage(FString* MessageText, FLinearColor MessageColor, bool bIsBold, int ReceiverTeamId, int ReceiverPlayerID, FString SenderID) { NativeCall<void, FString*, FLinearColor, bool, int, int, FString>(this, "AShooterGameMode.SendServerChatMessage(FString&,FLinearColor,bool,int,int,FString)", MessageText, MessageColor, bIsBold, ReceiverTeamId, ReceiverPlayerID, SenderID); }
	void PrintToServerGameLog(const FString& InString, bool bSendChatToAllAdmins) { NativeCall<void, const FString&, bool>(this, "AShooterGameMode.PrintToServerGameLog(FString&,bool)", InString, bSendChatToAllAdmins); }
	void SaveWorld(bool bForceSynchronous, bool bForceEvenIfSaveLoadIsDisabled, bool bSaveAsBackup) { NativeCall<void, bool, bool, bool>(this, "AShooterGameMode.SaveWorld(bool,bool,bool)", bForceSynchronous, bForceEvenIfSaveLoadIsDisabled, bSaveAsBackup); }
	//void HttpGetCosmeticWhitelistComplete(TSharedPtr<IHttpRequest, 1>* HttpRequest, TSharedPtr<IHttpResponse, 1>* HttpResponse, bool bSucceeded) { NativeCall<void, TSharedPtr<IHttpRequest, 1>*, TSharedPtr<IHttpResponse, 1>*, bool>(this, "AShooterGameMode.HttpGetCosmeticWhitelistComplete(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool)", HttpRequest, HttpResponse, bSucceeded); }
	bool GetIsMapActor() { return NativeCall<bool>(this, "AShooterGameMode.GetIsMapActor()"); }
	void ForceRepopulateFoliageAtPoint(UE::Math::TVector<double> AtPoint, float MaxRangeFromPoint, int MaxNumFoliages, TSubclassOf<APrimalEmitterSpawnable> RepopulatedEmitter, const UE::Math::TVector<double>& StructureDownTraceVector, const UE::Math::TVector<double>& StructureUpTraceVector, bool bDontCheckForOverlaps, int TriggeredByTeamID, bool bCheckAreaAroundEachIndividualFoliage, float RadiusAroundEachIndivitualFoliageToCheck, bool bReallyForceIt) { NativeCall<void, UE::Math::TVector<double>, float, int, TSubclassOf<APrimalEmitterSpawnable>, const UE::Math::TVector<double>&, const UE::Math::TVector<double>&, bool, int, bool, float, bool>(this, "AShooterGameMode.ForceRepopulateFoliageAtPoint(UE::Math::TVector<double>,float,int,TSubclassOf<APrimalEmitterSpawnable>,UE::Math::TVector<double>&,UE::Math::TVector<double>&,bool,int,bool,float,bool)", AtPoint, MaxRangeFromPoint, MaxNumFoliages, RepopulatedEmitter, StructureDownTraceVector, StructureUpTraceVector, bDontCheckForOverlaps, TriggeredByTeamID, bCheckAreaAroundEachIndividualFoliage, RadiusAroundEachIndivitualFoliageToCheck, bReallyForceIt); }
	// 	void TickAutoWaterRefreshCrop() { NativeCall<void>(this, "AShooterGameMode.TickAutoWaterRefreshCrop()"); }
	// FUNCTION MISSING: AShooterGameMode.TickAutoWaterRefreshCrop()
	void PrintHibernatingDino(const FString* DinoToFind) { NativeCall<void, const FString*>(this, "AShooterGameMode.PrintHibernatingDino(FString)", DinoToFind); }
	FTribeData* GetTribeData(FTribeData* result, unsigned __int64 TribeID) { return NativeCall<FTribeData*, FTribeData*, unsigned __int64>(this, "AShooterGameMode.GetTribeData(unsigned__int64)", result, TribeID); }
	int GetNumberOfLivePlayersOnTribe(const FString& TribeName) { return NativeCall<int, const FString&>(this, "AShooterGameMode.GetNumberOfLivePlayersOnTribe(FString&)", TribeName); }
	bool GetBoolOption(const FString& Options, const FString& ParseString, bool CurrentValue) { return NativeCall<bool, const FString&, const FString&, bool>(this, "AShooterGameMode.GetBoolOption(FString&,FString&,bool)", Options, ParseString, CurrentValue); }
	void Logout(AController* Exiting) { NativeCall<void, AController*>(this, "AShooterGameMode.Logout(AController*)", Exiting); }
	bool PlayerCanRestart_Implementation(APlayerController* Player) { return NativeCall<bool, APlayerController*>(this, "AShooterGameMode.PlayerCanRestart_Implementation(APlayerController*)", Player); }
	static UClass* StaticClass() { return AsaApi::ResolveClass("AShooterGameMode"); }
	void LoadedWorld() { NativeCall<void>(this, "AShooterGameMode.LoadedWorld()"); }
	void SavePlayersJoinNoCheckList() { NativeCall<void>(this, "AShooterGameMode.SavePlayersJoinNoCheckList()"); }
	void KickPlayerController(APlayerController* thePC, const FString& KickMessage) { NativeCall<void, APlayerController*, const FString&>(this, "AShooterGameMode.KickPlayerController(APlayerController*,FString&)", thePC, KickMessage); }
	FPrimalPlayerCharacterConfigStruct* ValidateCharacterConfig(FPrimalPlayerCharacterConfigStruct* result, const FPrimalPlayerCharacterConfigStruct& charConfig) { return NativeCall<FPrimalPlayerCharacterConfigStruct*, FPrimalPlayerCharacterConfigStruct*, const FPrimalPlayerCharacterConfigStruct&>(this, "AShooterGameMode.ValidateCharacterConfig(FPrimalPlayerCharacterConfigStruct&)", result, charConfig); }
	//void HttpGetBadWordListComplete(TSharedPtr<IHttpRequest, 1>* HttpRequest, TSharedPtr<IHttpResponse, 1>* HttpResponse, bool bSucceeded) { NativeCall<void, TSharedPtr<IHttpRequest, 1>*, TSharedPtr<IHttpResponse, 1>*, bool>(this, "AShooterGameMode.HttpGetBadWordListComplete(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool)", HttpRequest, HttpResponse, bSucceeded); }
	bool BanPlayer(FString* PlayerSteamName, unsigned int DurationMinutes) { return NativeCall<bool, FString*, unsigned int>(this, "AShooterGameMode.BanPlayer(FString,unsignedint)", PlayerSteamName, DurationMinutes); }
	unsigned __int64 AddNewTribe(AShooterPlayerState* PlayerOwner, FTribeData* TribeName, const FTribeGovernment* TribeGovernment, const FUserCosmeticInfo* UserCosmeticInfo) { return NativeCall<unsigned __int64, AShooterPlayerState*, FTribeData*, const FTribeGovernment*, const FUserCosmeticInfo*>(this, "AShooterGameMode.AddNewTribe(AShooterPlayerState*,FString&,FTribeGovernment&,FUserCosmeticInfo)", PlayerOwner, TribeName, TribeGovernment, UserCosmeticInfo); }
	int GetIntOption(const FString& Options, const FString& ParseString, int CurrentValue) { return NativeCall<int, const FString&, const FString&, int>(this, "AShooterGameMode.GetIntOption(FString&,FString&,int)", Options, ParseString, CurrentValue); }
	void UpdateMemoryState(FString* PackageName, bool bSave, ULevel* Level) { NativeCall<void, FString*, bool, ULevel*>(this, "AShooterGameMode.UpdateMemoryState(FString,bool,ULevel*)", PackageName, bSave, Level); }
	void SetMessageOfTheDay(const FString& Message, const FString& SetterID) { NativeCall<void, const FString&, const FString&>(this, "AShooterGameMode.SetMessageOfTheDay(FString&,FString&)", Message, SetterID); }
	bool AllowClearTribe(AShooterPlayerState* ForPlayerState) { return NativeCall<bool, AShooterPlayerState*>(this, "AShooterGameMode.AllowClearTribe(AShooterPlayerState*)", ForPlayerState); }
	APawn* SpawnDefaultPawnFor_Implementation(AController* NewPlayer, AActor* StartSpot) { return NativeCall<APawn*, AController*, AActor*>(this, "AShooterGameMode.SpawnDefaultPawnFor_Implementation(AController*,AActor*)", NewPlayer, StartSpot); }
	void PreLogin(const FString& Options, const FString& Address, const FUniqueNetIdRepl* UniqueId, FString& ErrorMessage) { NativeCall<void, const FString&, const FString&, const FUniqueNetIdRepl*, FString&>(this, "AShooterGameMode.PreLogin(FString&,FString&,FUniqueNetIdRepl&,FString&)", Options, Address, UniqueId, ErrorMessage); }
	void FlushPrimalStats(AShooterPlayerController* ForPC) { NativeCall<void, AShooterPlayerController*>(this, "AShooterGameMode.FlushPrimalStats(AShooterPlayerController*)", ForPC); }
	void HitchDetected(const FSoftObjectPath* ForAsset, float HitchTime) { NativeCall<void, const FSoftObjectPath*, float>(this, "AShooterGameMode.HitchDetected(FSoftObjectPath&,float)", ForAsset, HitchTime); }
	void ActorDestroyed(AActor* theActor) { NativeCall<void, AActor*>(this, "AShooterGameMode.ActorDestroyed(AActor*)", theActor); }
	void ListAllPlayers(FString& Message) { NativeCall<void, FString&>(this, "AShooterGameMode.ListAllPlayers(FString&)", Message); }
	bool IsPlayerAwaitingToRecieveCachedTeamTameListASAP(AShooterPlayerController* RequestingPlayer, int& FoundIndex) { return NativeCall<bool, AShooterPlayerController*, int&>(this, "AShooterGameMode.IsPlayerAwaitingToRecieveCachedTeamTameListASAP(AShooterPlayerController*,int&)", RequestingPlayer, FoundIndex); }
	void InitOptions(FString* InOptions) { NativeCall<void, FString*>(this, "AShooterGameMode.InitOptions(FString)", InOptions); }
	bool TryGetBoolOption(const FString& Section, const FString& Options, const FString& OptionName, bool& value) { return NativeCall<bool, const FString&, const FString&, const FString&, bool&>(this, "AShooterGameMode.TryGetBoolOption(FString&,FString&,FString&,bool&)", Section, Options, OptionName, value); }
	void InitOptionString(const wchar_t* Commandline, const wchar_t* Section, const wchar_t* Option) { NativeCall<void, const wchar_t*, const wchar_t*, const wchar_t*>(this, "AShooterGameMode.InitOptionString(wchar_t*,wchar_t*,wchar_t*)", Commandline, Section, Option); }
	void SendAllCachedArkMetrics() { NativeCall<void>(this, "AShooterGameMode.SendAllCachedArkMetrics()"); }
	void AddTribeWar(int MyTribeID, int EnemyTeamID, int StartDayNum, int EndDayNumber, float WarStartTime, float WarEndTime, bool bForceApprove) { NativeCall<void, int, int, int, int, float, float, bool>(this, "AShooterGameMode.AddTribeWar(int,int,int,int,float,float,bool)", MyTribeID, EnemyTeamID, StartDayNum, EndDayNumber, WarStartTime, WarEndTime, bForceApprove); }
	void DisallowPlayerToJoinNoCheck(const FUniqueNetId* PlayerId) { NativeCall<void, const FUniqueNetId*>(this, "AShooterGameMode.DisallowPlayerToJoinNoCheck(FUniqueNetId&)", PlayerId); }
	FString* GenerateProfileFileName(FString* result, const FUniqueNetIdRepl& UniqueId, const FString& NetworkAddress, const FString& PlayerName) { return NativeCall<FString*, FString*, const FUniqueNetIdRepl&, const FString&, const FString&>(this, "AShooterGameMode.GenerateProfileFileName(FUniqueNetIdRepl&,FString&,FString&)", result, UniqueId, NetworkAddress, PlayerName); }
	void ActorUnstasised(AActor* theActor) { NativeCall<void, AActor*>(this, "AShooterGameMode.ActorUnstasised(AActor*)", theActor); }
	void SetCreatedCachedTeamTameListsOnTribeDataOrPlayerData() { NativeCall<void>(this, "AShooterGameMode.SetCreatedCachedTeamTameListsOnTribeDataOrPlayerData()"); }
	void SetTimeOfDay(const FString& timeString) { NativeCall<void, const FString&>(this, "AShooterGameMode.SetTimeOfDay(FString&)", timeString); }
	bool IsPlayerArrayOfInAllPlayersAwaitingUpdatedCachedTeamTameLists(AShooterPlayerController* RequestingPlayer, int& FoundIndex) { return NativeCall<bool, AShooterPlayerController*, int&>(this, "AShooterGameMode.IsPlayerArrayOfInAllPlayersAwaitingUpdatedCachedTeamTameLists(AShooterPlayerController*,int&)", RequestingPlayer, FoundIndex); }
	//void HttpSendAllCachedArkMetricsRequestComplete(TSharedPtr<IHttpRequest, 1>* HttpRequest, TSharedPtr<IHttpResponse, 1>* HttpResponse, bool bSucceeded) { NativeCall<void, TSharedPtr<IHttpRequest, 1>*, TSharedPtr<IHttpResponse, 1>*, bool>(this, "AShooterGameMode.HttpSendAllCachedArkMetricsRequestComplete(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool)", HttpRequest, HttpResponse, bSucceeded); }
	void InitGameState() { NativeCall<void>(this, "AShooterGameMode.InitGameState()"); }
	//void ArkTributeAvailabilityRequestComplete(TSharedPtr<IHttpRequest, 1>* HttpRequest, TSharedPtr<IHttpResponse, 1>* HttpResponse, bool bSucceeded) { NativeCall<void, TSharedPtr<IHttpRequest, 1>*, TSharedPtr<IHttpResponse, 1>*, bool>(this, "AShooterGameMode.ArkTributeAvailabilityRequestComplete(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool)", HttpRequest, HttpResponse, bSucceeded); }
	bool AllowModifyStatusValue(UPrimalCharacterStatusComponent* forComp, EPrimalCharacterStatusValue::Type valueType, float Amount) { return NativeCall<bool, UPrimalCharacterStatusComponent*, EPrimalCharacterStatusValue::Type, float>(this, "AShooterGameMode.AllowModifyStatusValue(UPrimalCharacterStatusComponent*,EPrimalCharacterStatusValue::Type,float)", forComp, valueType, Amount); }
	void CheckIsOfficialServer() { NativeCall<void>(this, "AShooterGameMode.CheckIsOfficialServer()"); }
	//FString GetMapName() { return NativeCall<FString>(this, "AShooterGameMode.GetMapName()"); }
	FString* GetMapName(FString* result) { return NativeCall<FString*, FString*>(this, "AShooterGameMode.GetMapName()", result); }
	void UpdateTribeData(FTribeData* NewTribeData) { NativeCall<void, FTribeData*>(this, "AShooterGameMode.UpdateTribeData(FTribeData)", NewTribeData); }
	bool IsSpawnpointAllowed(APlayerStart* SpawnPoint, AController* Player) const { return NativeCall<bool, APlayerStart*, AController*>(this, "AShooterGameMode.IsSpawnpointAllowed(APlayerStart*,AController*)", SpawnPoint, Player); }
	void LogFailedWaterDinoSpawn(AActor* FailedSpawned) { NativeCall<void, AActor*>(this, "AShooterGameMode.LogFailedWaterDinoSpawn(AActor*)", FailedSpawned); }
	bool AllowNotifyRemotePlayerDeath(AShooterCharacter* forChar) { return NativeCall<bool, AShooterCharacter*>(this, "AShooterGameMode.AllowNotifyRemotePlayerDeath(AShooterCharacter*)", forChar); }
	int GetTribeIDOfPlayerID(unsigned long PlayerDataID) { return NativeCall<int, unsigned long>(this, "AShooterGameMode.GetTribeIDOfPlayerID(unsigned__int64)", PlayerDataID); }

	double& LastWildThrottlingUpdateField() { return *GetNativePointerField<double*>(this, "AShooterGameMode.LastWildThrottlingUpdate"); }
	bool& bEnableSteamValidationField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bEnableSteamValidation"); }
	bool& bEnableEOSValidationField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bEnableEOSValidation"); }
	int& FailedAttemptsField() { return *GetNativePointerField<int*>(this, "AShooterGameMode.FailedAttempts"); }
	double& StartRealTimeField() { return *GetNativePointerField<double*>(this, "AShooterGameMode.StartRealTime"); }
	double& NextAttemptRealTimeField() { return *GetNativePointerField<double*>(this, "AShooterGameMode.NextAttemptRealTime"); }
	int& WorldSaveStartedCountField() { return *GetNativePointerField<int*>(this, "AShooterGameMode.WorldSaveStartedCount"); }
	int& WorldSaveCompletedCountField() { return *GetNativePointerField<int*>(this, "AShooterGameMode.WorldSaveCompletedCount"); }
	float& ProximityChatInnerRadiusField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.ProximityChatInnerRadius"); }
	float& ProximityChatOuterRadiusField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.ProximityChatOuterRadius"); }
	int& MinutesPlayedRequirementField() { return *GetNativePointerField<int*>(this, "AShooterGameMode.MinutesPlayedRequirement"); }
	bool& bResetDecayTimersField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bResetDecayTimers"); }
	bool& bIgnorePVPMountedWeaponryRestrictionsField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bIgnorePVPMountedWeaponryRestrictions"); }
	bool& bEnableStructureComponentMemOptField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bEnableStructureComponentMemOpt"); }
	bool& bPlaceholderBool1Field() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bPlaceholderBool1"); }
	float& PlaceholderFloat1Field() { return *GetNativePointerField<float*>(this, "AShooterGameMode.PlaceholderFloat1"); }
	int& MaxAnchoredVesselsInRangeField() { return *GetNativePointerField<int*>(this, "AShooterGameMode.MaxAnchoredVesselsInRange"); }
	int& AnchoredVesselCheckRadiusField() { return *GetNativePointerField<int*>(this, "AShooterGameMode.AnchoredVesselCheckRadius"); }
	bool& bServerTickRateLoggingField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bServerTickRateLogging"); }
	bool& bForceResetWildDinosField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bForceResetWildDinos"); }
	bool& bAllowGCMOnOfficialField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bAllowGCMOnOfficial"); }
	bool& bPreventNonClusterCharacterUploadsWithItemsField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bPreventNonClusterCharacterUploadsWithItems"); }
	int& MaxBlueprintDinoLevelField() { return *GetNativePointerField<int*>(this, "AShooterGameMode.MaxBlueprintDinoLevel"); }
	int& MaxBlueprintDinoQualityField() { return *GetNativePointerField<int*>(this, "AShooterGameMode.MaxBlueprintDinoQuality"); }
	int& MaxBlueprintItemQualityField() { return *GetNativePointerField<int*>(this, "AShooterGameMode.MaxBlueprintItemQuality"); }
	int& MaxBlueprintScoutQualityField() { return *GetNativePointerField<int*>(this, "AShooterGameMode.MaxBlueprintScoutQuality"); }
	bool& bForceWipeBlueprintItemQualityField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bForceWipeBlueprintItemQuality"); }
	bool& bForceWipeBlueprintDinoLevelField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bForceWipeBlueprintDinoLevel"); }
	bool& bForceClampItemQualityField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bForceClampItemQuality"); }
	int& MaxHexagonsToAwardField() { return *GetNativePointerField<int*>(this, "AShooterGameMode.MaxHexagonsToAward"); }
	bool& bPreventStructurePlanningField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bPreventStructurePlanning"); }
	bool& bDisableDefaultDinoTamingField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bDisableDefaultDinoTaming"); }
	int& NumStructureActorsField() { return *GetNativePointerField<int*>(this, "AShooterGameMode.NumStructureActors"); }
	bool& bNeedsPowerToActivateAquaticCompartmentsField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bNeedsPowerToActivateAquaticCompartments"); }
	bool& bPreventPlannedStructureDecayResetField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bPreventPlannedStructureDecayReset"); }
	int& LimitBunkersPerTribeNumField() { return *GetNativePointerField<int*>(this, "AShooterGameMode.LimitBunkersPerTribeNum"); }
	bool& bLimitBunkersPerTribeField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bLimitBunkersPerTribe"); }
	bool& bAllowBunkersInPreventionZonesField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bAllowBunkersInPreventionZones"); }
	bool& bAllowRidingDinosInsideBunkersField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bAllowRidingDinosInsideBunkers"); }
	bool& bAllowBunkerModulesAboveGroundField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bAllowBunkerModulesAboveGround"); }
	bool& bAllowDinoAIInsideBunkersField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bAllowDinoAIInsideBunkers"); }
	bool& bAllowBunkerModulesInPreventionZonesField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bAllowBunkerModulesInPreventionZones"); }
	float& MinDistanceBetweenBunkersField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.MinDistanceBetweenBunkers"); }
	float& EnemyAccessBunkerHPThresholdField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.EnemyAccessBunkerHPThreshold"); }
	float& BunkerUnderHPThresholdDmgMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.BunkerUnderHPThresholdDmgMultiplier"); }
	float& CryoHospitalHoursToRegenHPField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.CryoHospitalHoursToRegenHP"); }
	float& CryoHospitalHoursToRegenFoodField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.CryoHospitalHoursToRegenFood"); }
	float& CryoHospitalHoursToDrainTorporField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.CryoHospitalHoursToDrainTorpor"); }
	float& CryoHospitalMatingCooldownReductionField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.CryoHospitalMatingCooldownReduction"); }
	float& BloodforgeReinforceExtraDurabilityField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.BloodforgeReinforceExtraDurability"); }
	float& BloodforgeReinforceResourceCostMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.BloodforgeReinforceResourceCostMultiplier"); }
	float& BloodforgeReinforceSpeedMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.BloodforgeReinforceSpeedMultiplier"); }
	bool& bAllowVariantDinoPacksField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bAllowVariantDinoPacks"); }
	float& TribeTowerBonusMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.TribeTowerBonusMultiplier"); }
	int& LimitLinkedStoragesNumField() { return *GetNativePointerField<int*>(this, "AShooterGameMode.LimitLinkedStoragesNum"); }
	int& MaxCosmoWeaponAmmoField() { return *GetNativePointerField<int*>(this, "AShooterGameMode.MaxCosmoWeaponAmmo"); }
	int& CosmoWeaponAmmoReloadAmountField() { return *GetNativePointerField<int*>(this, "AShooterGameMode.CosmoWeaponAmmoReloadAmount"); }
	float& ArmadoggoDeathCooldownField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.ArmadoggoDeathCooldown"); }
	float& YoungIceFoxDeathCooldownField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.YoungIceFoxDeathCooldown"); }
	float& CompanionsDeathCooldownField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.CompanionsDeathCooldown"); }
	bool& bPreventTemplateOnSaddleField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bPreventTemplateOnSaddle"); }
	float& CryopodFridgeCooldownTimeField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.CryopodFridgeCooldownTime"); }
	bool& bDisableBurrowDecayTimersField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bDisableBurrowDecayTimers"); }
	bool& bForceExploitedTameDeletionField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bForceExploitedTameDeletion"); }
	bool& bServerEnableDestroyByMeshingField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bServerEnableDestroyByMeshing"); }
	bool& bServerEnableDestroyOutsideMapField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bServerEnableDestroyOutsideMap"); }
	bool& bServerUseLineOfSightInteractionCheckField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bServerUseLineOfSightInteractionCheck"); }
	bool& bParseServerToSQLiteField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bParseServerToSQLite"); }
	bool& bPreventOverworldBossesField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bPreventOverworldBosses"); }
	bool& bPreventItemTraitEffectsField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bPreventItemTraitEffects"); }
	bool& bPreventTekChemBenchBabiesField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bPreventTekChemBenchBabies"); }
	bool& bDisableBuffSavePlayerDataOnSaveWorldField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bDisableBuffSavePlayerDataOnSaveWorld"); }
	bool& bAllowTeslaCoilCaveBuildingPVPField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bAllowTeslaCoilCaveBuildingPVP"); }
	bool& bForceGachaUnhappyInCavesField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bForceGachaUnhappyInCaves"); }
	int& MaxActiveOutpostsField() { return *GetNativePointerField<int*>(this, "AShooterGameMode.MaxActiveOutposts"); }
	int& MaxActiveOutpostsSPField() { return *GetNativePointerField<int*>(this, "AShooterGameMode.MaxActiveOutpostsSP"); }
	int& MaxActiveResourceCachesField() { return *GetNativePointerField<int*>(this, "AShooterGameMode.MaxActiveResourceCaches"); }
	int& MaxActiveResourceCachesSPField() { return *GetNativePointerField<int*>(this, "AShooterGameMode.MaxActiveResourceCachesSP"); }
	int& MaxActiveCityOutpostsField() { return *GetNativePointerField<int*>(this, "AShooterGameMode.MaxActiveCityOutposts"); }
	int& MaxActiveCityOutpostsSPField() { return *GetNativePointerField<int*>(this, "AShooterGameMode.MaxActiveCityOutpostsSP"); }
	bool& bOutpostsNoInitialDinosSPField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bOutpostsNoInitialDinosSP"); }
	int& OutpostAllowMaxStructuresNearbyField() { return *GetNativePointerField<int*>(this, "AShooterGameMode.OutpostAllowMaxStructuresNearby"); }
	int& CityOutpostAllowMaxStructuresNearbyField() { return *GetNativePointerField<int*>(this, "AShooterGameMode.CityOutpostAllowMaxStructuresNearby"); }
	float& OutpostSigilRewardMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.OutpostSigilRewardMultiplier"); }
	int& MaxActiveGenesisLandOutpostsField() { return *GetNativePointerField<int*>(this, "AShooterGameMode.MaxActiveGenesisLandOutposts"); }
	bool& bDoNotStarveDinosField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bDoNotStarveDinos"); }
	bool& bEnableDinoStackingDetectionField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bEnableDinoStackingDetection"); }
	float& DinoStackingCheckRadiusField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.DinoStackingCheckRadius"); }
	int& DinoStackingMaxOverlapField() { return *GetNativePointerField<int*>(this, "AShooterGameMode.DinoStackingMaxOverlap"); }
	int& DinoStackingChecksPerFrameField() { return *GetNativePointerField<int*>(this, "AShooterGameMode.DinoStackingChecksPerFrame"); }
	int& DinoStackingUnstasisCounterField() { return *GetNativePointerField<int*>(this, "AShooterGameMode.DinoStackingUnstasisCounter"); }
	float& VTuneOnLowServerFPSThresholdField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.VTuneOnLowServerFPSThreshold"); }
	float& VTuneOnLowServerFPSDurationField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.VTuneOnLowServerFPSDuration"); }
	float& VTuneOnLowServerFPSCooldownField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.VTuneOnLowServerFPSCooldown"); }
	bool& bVTuneLowFPSCaptureActiveField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bVTuneLowFPSCaptureActive"); }
	bool& bVTuneLowFPSCaptureDisabledField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bVTuneLowFPSCaptureDisabled"); }
	bool& bVTuneLowFPSServerReadyField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bVTuneLowFPSServerReady"); }
	bool& bVTuneLowFPSSetupValidatedField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bVTuneLowFPSSetupValidated"); }
	double& VTuneLowFPSCaptureStartTimeField() { return *GetNativePointerField<double*>(this, "AShooterGameMode.VTuneLowFPSCaptureStartTime"); }
	double& VTuneLowFPSLastCaptureEndTimeField() { return *GetNativePointerField<double*>(this, "AShooterGameMode.VTuneLowFPSLastCaptureEndTime"); }
	int& OverrideSecondsUntilBuriedTreasureAutoRevealsField() { return *GetNativePointerField<int*>(this, "AShooterGameMode.OverrideSecondsUntilBuriedTreasureAutoReveals"); }
	float& DynamicColorSetChanceField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.DynamicColorSetChance"); }
	bool& bDontEnforceMilestoneTaskOrderField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bDontEnforceMilestoneTaskOrder"); }
	int& ModValidationFailureWarningsField() { return *GetNativePointerField<int*>(this, "AShooterGameMode.ModValidationFailureWarnings"); }
	bool& bDoAutomatedModValidationModerationField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bDoAutomatedModValidationModeration"); }
	bool& bDisableAllMissionRewardsField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bDisableAllMissionRewards"); }
	bool& bDisableGenesisMissionRewardsField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bDisableGenesisMissionRewards"); }
	bool& bDisableHexagonRewardsField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bDisableHexagonRewards"); }
	bool& bDisableHexagonMarketField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bDisableHexagonMarket"); }
	bool& bDisableNonPlayerHexagonMarketField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bDisableNonPlayerHexagonMarket"); }
	bool& bMaintenanceRestartAlreadySavedField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bMaintenanceRestartAlreadySaved"); }

	TArray<FAttachedInstancedHarvestingElement*, TSizedDefaultAllocator<32> >& HiddenHarvestingComponentsArrayField() { return *GetNativePointerField<TArray<FAttachedInstancedHarvestingElement*, TSizedDefaultAllocator<32> >*>(this, "AShooterGameMode.HiddenHarvestingComponentsArray"); }
	FString& PendingPublicDynamicConfigField() { return *GetNativePointerField<FString*>(this, "AShooterGameMode.PendingPublicDynamicConfig"); }
	FString& PendingPublicDynamicConfigURLField() { return *GetNativePointerField<FString*>(this, "AShooterGameMode.PendingPublicDynamicConfigURL"); }
	FOnAscensionSaveWorldFinishedDelegate& Placeholder1Field() { return *GetNativePointerField<FOnAscensionSaveWorldFinishedDelegate*>(this, "AShooterGameMode.Placeholder1"); }
	FString& OfficialBanListURLOverrideField() { return *GetNativePointerField<FString*>(this, "AShooterGameMode.OfficialBanListURLOverride"); }
	FString& OfficialBanListFileNameOverrideField() { return *GetNativePointerField<FString*>(this, "AShooterGameMode.OfficialBanListFileNameOverride"); }
	FString& OfficialAdminListFileNameOverrideField() { return *GetNativePointerField<FString*>(this, "AShooterGameMode.OfficialAdminListFileNameOverride"); }
	FString& ServerRegionField() { return *GetNativePointerField<FString*>(this, "AShooterGameMode.ServerRegion"); }
	FOnTryCryoDino& OnTryCryoDinoField() { return *GetNativePointerField<FOnTryCryoDino*>(this, "AShooterGameMode.OnTryCryoDino"); }
	FOnPostCryoDino& OnPostCryoDinoField() { return *GetNativePointerField<FOnPostCryoDino*>(this, "AShooterGameMode.OnPostCryoDino"); }
	FOnTryUnCryoDino& OnTryUnCryoDinoField() { return *GetNativePointerField<FOnTryUnCryoDino*>(this, "AShooterGameMode.OnTryUnCryoDino"); }
	FOnPostUnCryoDino& OnPostUnCryoDinoField() { return *GetNativePointerField<FOnPostUnCryoDino*>(this, "AShooterGameMode.OnPostUnCryoDino"); }
	TArray<FString, TSizedDefaultAllocator<32> >& PreventDisableDefaultDinoTameClassNamesField() { return *GetNativePointerField<TArray<FString, TSizedDefaultAllocator<32> >*>(this, "AShooterGameMode.PreventDisableDefaultDinoTameClassNames"); }
	TArray<TWeakObjectPtr<APrimalCharacter, FWeakObjectPtr>, TSizedDefaultAllocator<32> >& CustomMovementCharactersField() { return *GetNativePointerField<TArray<TWeakObjectPtr<APrimalCharacter, FWeakObjectPtr>, TSizedDefaultAllocator<32> >*>(this, "AShooterGameMode.CustomMovementCharacters"); }
	FString& ValgueroMemorialEntriesField() { return *GetNativePointerField<FString*>(this, "AShooterGameMode.ValgueroMemorialEntries"); }
	UPrimalInventoryComponent*& ClubArkTributeInventoryField() { return *GetNativePointerField<UPrimalInventoryComponent**>(this, "AShooterGameMode.ClubArkTributeInventory"); }
	FString& DynamicGameplayVolumesRawField() { return *GetNativePointerField<FString*>(this, "AShooterGameMode.DynamicGameplayVolumesRaw"); }
	FAhoCorasickMatcher& BadWordMatcherField() { return *GetNativePointerField<FAhoCorasickMatcher*>(this, "AShooterGameMode.BadWordMatcher"); }
	FAhoCorasickMatcher& BadWordWhitelistMatcherField() { return *GetNativePointerField<FAhoCorasickMatcher*>(this, "AShooterGameMode.BadWordWhitelistMatcher"); }
	TArray<TWeakObjectPtr<APrimalDinoCharacter, FWeakObjectPtr>, TSizedDefaultAllocator<32> >& PendingDinoStackingChecksField() { return *GetNativePointerField<TArray<TWeakObjectPtr<APrimalDinoCharacter, FWeakObjectPtr>, TSizedDefaultAllocator<32> >*>(this, "AShooterGameMode.PendingDinoStackingChecks"); }
	FString& VTuneExePathField() { return *GetNativePointerField<FString*>(this, "AShooterGameMode.VTuneExePath"); }
	FString& VTuneLowFPSActiveResultDirField() { return *GetNativePointerField<FString*>(this, "AShooterGameMode.VTuneLowFPSActiveResultDir"); }
	FString& VTuneLowFPSResolvedExePathField() { return *GetNativePointerField<FString*>(this, "AShooterGameMode.VTuneLowFPSResolvedExePath"); }
	FTimerHandle& NetModBanlistTimerHandleField() { return *GetNativePointerField<FTimerHandle*>(this, "AShooterGameMode.NetModBanlistTimerHandle"); }
	FOnExplorerNoteUnlocked& OnExplorerNoteUnlockedField() { return *GetNativePointerField<FOnExplorerNoteUnlocked*>(this, "AShooterGameMode.OnExplorerNoteUnlocked"); }
	UPrimalColorSet*& DynamicColorSetInstanceField() { return *GetNativePointerField<UPrimalColorSet**>(this, "AShooterGameMode.DynamicColorSetInstance"); }
	BitFieldValue<bool, unsigned char> bDestroyCharacterOnLogoutInLobby() { return { this, "AShooterGameMode.bDestroyCharacterOnLogoutInLobby"}; }
	BitFieldValue<bool, unsigned char> bPreventJoiningDuringMatch() { return { this, "AShooterGameMode.bPreventJoiningDuringMatch"}; }
	void OnLogout(AController* Exiting) { NativeCall<void, AController*>(this, "AShooterGameMode.OnLogout(AController*)", Exiting); }
	void InitGameStateDataSets() { NativeCall<void>(this, "AShooterGameMode.InitGameStateDataSets()"); }
	bool IsTeamCurrentlyUpdatingItsCachedTeamTameList(int Team, int& FoundIndex) { return NativeCall<bool, int, int&>(this, "AShooterGameMode.IsTeamCurrentlyUpdatingItsCachedTeamTameList(int,int&)", Team, FoundIndex); }
	static bool CreatePreUpgradeBackup(const FString& SaveDirectory, const FString& MapName) { return NativeCall<bool, const FString&, const FString&>(nullptr, "AShooterGameMode.CreatePreUpgradeBackup(FString&,FString&)", SaveDirectory, MapName); }
	void OnTributeDownloadClaimStamped(const FGuid& ClaimId) { NativeCall<void, const FGuid&>(this, "AShooterGameMode.OnTributeDownloadClaimStamped(FGuid&)", ClaimId); }
	static void SerializeArchiveVersion(FArchive& Ar, int CurrentVersion, int PreArk52Version, int Ark52Version, int Ark55Version) { NativeCall<void, FArchive&, int, int, int, int>(nullptr, "AShooterGameMode.SerializeArchiveVersion(FArchive&,int,int,int,int)", Ar, CurrentVersion, PreArk52Version, Ark52Version, Ark55Version); }
	void SendChatMessageToPlayer(AShooterPlayerController* toPlayer, const FPrimalChatMessage& Message) { NativeCall<void, AShooterPlayerController*, const FPrimalChatMessage&>(this, "AShooterGameMode.SendChatMessageToPlayer(AShooterPlayerController*,FPrimalChatMessage&)", toPlayer, Message); }
	bool IsTeamIncludedInNextBatchToProcessTameList(int Team, int& FoundIndex) { return NativeCall<bool, int, int&>(this, "AShooterGameMode.IsTeamIncludedInNextBatchToProcessTameList(int,int&)", Team, FoundIndex); }
	void AddAutoWaterRefreshCrop(APrimalStructureItemContainer_CropPlot* CropPlot, double NextTimestamp) { NativeCall<void, APrimalStructureItemContainer_CropPlot*, double>(this, "AShooterGameMode.AddAutoWaterRefreshCrop(APrimalStructureItemContainer_CropPlot*,double)", CropPlot, NextTimestamp); }
	void AddToDynamicColorSet(FString& newColorsetValue) { NativeCall<void, FString&>(this, "AShooterGameMode.AddToDynamicColorSet(FString&)", newColorsetValue); }
	static bool RestoreBackupForMap(const FString& SaveDirectory, const FString& MapName, const FString& BackupFileToRestore) { return NativeCall<bool, const FString&, const FString&, const FString&>(nullptr, "AShooterGameMode.RestoreBackupForMap(FString&,FString&,FString&)", SaveDirectory, MapName, BackupFileToRestore); }
	FString* GetTributeDownloadClaimServerId(FString* result) { return NativeCall<FString*, FString*>(this, "AShooterGameMode.GetTributeDownloadClaimServerId()", result); }
	void GetGameplayVolumesDynamicConfig(const FString& commandLine) { NativeCall<void, const FString&>(this, "AShooterGameMode.GetGameplayVolumesDynamicConfig(FString&)", commandLine); }
	int GetTribePerDinoAmountForDino(int ForTeam, APrimalDinoCharacter* TheDino) { return NativeCall<int, int, APrimalDinoCharacter*>(this, "AShooterGameMode.GetTribePerDinoAmountForDino(int,APrimalDinoCharacter*)", ForTeam, TheDino); }
	void TickOrphanedProfileUploads() { NativeCall<void>(this, "AShooterGameMode.TickOrphanedProfileUploads()"); }
	void ParseServerToSQLite() { NativeCall<void>(this, "AShooterGameMode.ParseServerToSQLite()"); }
	void DownloadedClassLiveTunableConfig(bool bRequestWasSuccessful, const FString& RequestedFileURL, int ResponseCode, const FString& FileContent) { NativeCall<void, bool, const FString&, int, const FString&>(this, "AShooterGameMode.DownloadedClassLiveTunableConfig(bool,FString&,int,FString&)", bRequestWasSuccessful, RequestedFileURL, ResponseCode, FileContent); }
	float ModifyNPCSpawnLimits(FName DinoNameTag, float CurrentLimit) { return NativeCall<float, FName, float>(this, "AShooterGameMode.ModifyNPCSpawnLimits(FName,float)", DinoNameTag, CurrentLimit); }
	void StopVTuneLowFPSCapture(bool bEarlyRecovery) { NativeCall<void, bool>(this, "AShooterGameMode.StopVTuneLowFPSCapture(bool)", bEarlyRecovery); }
	void RegisterBunkerForTribeLimit(APrimalStructure* Structure, bool overrideTeam, int teamOverride) { NativeCall<void, APrimalStructure*, bool, int>(this, "AShooterGameMode.RegisterBunkerForTribeLimit(APrimalStructure*,bool,int)", Structure, overrideTeam, teamOverride); }
	static bool IsSaveUpgradeGuardEnabled() { return NativeCall<bool>(nullptr, "AShooterGameMode.IsSaveUpgradeGuardEnabled()"); }
	void DownloadedDynamicConfig(bool bRequestWasSuccessful, const FString& RequestedFileURL, int ResponseCode, const FString& FileContent) { NativeCall<void, bool, const FString&, int, const FString&>(this, "AShooterGameMode.DownloadedDynamicConfig(bool,FString&,int,FString&)", bRequestWasSuccessful, RequestedFileURL, ResponseCode, FileContent); }
	void KickAllPlayersAndReload() { NativeCall<void>(this, "AShooterGameMode.KickAllPlayersAndReload()"); }
	void UnlockServerFPS() { NativeCall<void>(this, "AShooterGameMode.UnlockServerFPS()"); }
	UShooterCheatManager* GetOrCreateServerCheatManager() { return NativeCall<UShooterCheatManager*>(this, "AShooterGameMode.GetOrCreateServerCheatManager()"); }
	void PostAlarmNotificationPlayerID(int PlayerID, const FString& Title, const FString& Message) { NativeCall<void, int, const FString&, const FString&>(this, "AShooterGameMode.PostAlarmNotificationPlayerID(int,FString&,FString&)", PlayerID, Title, Message); }
	bool IsPlayerInNextTeamBatchPlayersAwaitingUpdatedCachedTeamTameList(AShooterPlayerController* RequestingPlayer, int& FoundIndex) { return NativeCall<bool, AShooterPlayerController*, int&>(this, "AShooterGameMode.IsPlayerInNextTeamBatchPlayersAwaitingUpdatedCachedTeamTameList(AShooterPlayerController*,int&)", RequestingPlayer, FoundIndex); }
	void DownloadedBadWordWhiteList(bool bRequestWasSuccessful, const FString& RequestedFileURL, int ResponseCode, const FString& FileContent) { NativeCall<void, bool, const FString&, int, const FString&>(this, "AShooterGameMode.DownloadedBadWordWhiteList(bool,FString&,int,FString&)", bRequestWasSuccessful, RequestedFileURL, ResponseCode, FileContent); }
	void RegisterCustomMovementCharacter(APrimalCharacter* Character) { NativeCall<void, APrimalCharacter*>(this, "AShooterGameMode.RegisterCustomMovementCharacter(APrimalCharacter*)", Character); }
	void RestartServer() { NativeCall<void>(this, "AShooterGameMode.RestartServer()"); }
	void RemovePlayerData(AShooterPlayerState* PlayerState) { NativeCall<void, AShooterPlayerState*>(this, "AShooterGameMode.RemovePlayerData(AShooterPlayerState*)", PlayerState); }
	static TArray<FString, TSizedDefaultAllocator<32> >* GetBackupsForMap(TArray<FString, TSizedDefaultAllocator<32> >* result, const FString& SaveDirectory, const FString& MapName) { return NativeCall<TArray<FString, TSizedDefaultAllocator<32> >*, TArray<FString, TSizedDefaultAllocator<32> >*, const FString&, const FString&>(nullptr, "AShooterGameMode.GetBackupsForMap(FString&,FString&)", result, SaveDirectory, MapName); }
	void ValidateVTuneLowFPSCaptureSetup() { NativeCall<void>(this, "AShooterGameMode.ValidateVTuneLowFPSCaptureSetup()"); }
	void DownloadedPublicDynamicConfig(bool bRequestWasSuccessful, const FString& RequestedFileURL, int ResponseCode, const FString& FileContent) { NativeCall<void, bool, const FString&, int, const FString&>(this, "AShooterGameMode.DownloadedPublicDynamicConfig(bool,FString&,int,FString&)", bRequestWasSuccessful, RequestedFileURL, ResponseCode, FileContent); }
	static bool GetPreUpgradeBackupTime(const FString& SaveDirectory, const FString& MapName, FDateTime& OutTime) { return NativeCall<bool, const FString&, const FString&, FDateTime&>(nullptr, "AShooterGameMode.GetPreUpgradeBackupTime(FString&,FString&,FDateTime&)", SaveDirectory, MapName, OutTime); }
	void OnHarvestingComponentShown(FAttachedInstancedHarvestingElement* component) { NativeCall<void, FAttachedInstancedHarvestingElement*>(this, "AShooterGameMode.OnHarvestingComponentShown(FAttachedInstancedHarvestingElement*)", component); }
	int ForceAddPlayerToTribe(AShooterPlayerState* ForPlayerState, const FString& TribeName) { return NativeCall<int, AShooterPlayerState*, const FString&>(this, "AShooterGameMode.ForceAddPlayerToTribe(AShooterPlayerState*,FString&)", ForPlayerState, TribeName); }
	void ResetDynamicColorSet() { NativeCall<void>(this, "AShooterGameMode.ResetDynamicColorSet()"); }
	void IncrementNumDinos_PerDino(int ForTeam, APrimalDinoCharacter* ForDino, int Amount) { NativeCall<void, int, APrimalDinoCharacter*, int>(this, "AShooterGameMode.IncrementNumDinos_PerDino(int,APrimalDinoCharacter*,int)", ForTeam, ForDino, Amount); }
	void StructureHibernationTick() { NativeCall<void>(this, "AShooterGameMode.StructureHibernationTick()"); }
	void LoadModValidationFiles() { NativeCall<void>(this, "AShooterGameMode.LoadModValidationFiles()"); }
	static bool DeletePreUpgradeBackup(const FString& SaveDirectory) { return NativeCall<bool, const FString&>(nullptr, "AShooterGameMode.DeletePreUpgradeBackup(FString&)", SaveDirectory); }
	void EnableExecLoggingForPlayer(const FString& PlayerID, int Method) { NativeCall<void, const FString&, int>(this, "AShooterGameMode.EnableExecLoggingForPlayer(FString&,int)", PlayerID, Method); }
	bool IsCustomMovementCharacterNear(const UE::Math::TVector<double>& Location, float Range) { return NativeCall<bool, const UE::Math::TVector<double>&, float>(this, "AShooterGameMode.IsCustomMovementCharacterNear(UE::Math::TVector<double>&,float)", Location, Range); }
	void DownloadedNetModBanlist(bool bRequestWasSuccessful, const FString& RequestedFileURL, int ResponseCode, const FString& FileContent) { NativeCall<void, bool, const FString&, int, const FString&>(this, "AShooterGameMode.DownloadedNetModBanlist(bool,FString&,int,FString&)", bRequestWasSuccessful, RequestedFileURL, ResponseCode, FileContent); }
	static unsigned __int64 GetPlayerIDFromUniqueId(const FString& UniqueIdStr) { return NativeCall<unsigned __int64, const FString&>(nullptr, "AShooterGameMode.GetPlayerIDFromUniqueId(FString&)", UniqueIdStr); }
	int GetNumDeaths(const FString& PlayerDataID) { return NativeCall<int, const FString&>(this, "AShooterGameMode.GetNumDeaths(FString&)", PlayerDataID); }
	void UnregisterCustomMovementCharacter(APrimalCharacter* Character) { NativeCall<void, APrimalCharacter*>(this, "AShooterGameMode.UnregisterCustomMovementCharacter(APrimalCharacter*)", Character); }
	void UpdateGlobalBans() { NativeCall<void>(this, "AShooterGameMode.UpdateGlobalBans()"); }
	bool GetServerSettingsFloat(const FString& Keyvalue, float& OutFloat) { return NativeCall<bool, const FString&, float&>(this, "AShooterGameMode.GetServerSettingsFloat(FString&,float&)", Keyvalue, OutFloat); }
	void ForceRefreshBanCheaterlist() { NativeCall<void>(this, "AShooterGameMode.ForceRefreshBanCheaterlist()"); }
	void RemoveMaxItemQuantityOverrides(const TArray<FString, TSizedDefaultAllocator<32> >& ItemClasses) { NativeCall<void, const TArray<FString, TSizedDefaultAllocator<32> >&>(this, "AShooterGameMode.RemoveMaxItemQuantityOverrides(TArray<FString,TSizedDefaultAllocator<32>>&)", ItemClasses); }
	bool GetLaunchOptionFloat(const FString& LaunchOptionKey, float& ReturnVal) { return NativeCall<bool, const FString&, float&>(this, "AShooterGameMode.GetLaunchOptionFloat(FString&,float&)", LaunchOptionKey, ReturnVal); }
	static bool RestorePreUpgradeBackup(const FString& SaveDirectory, const FString& MapName) { return NativeCall<bool, const FString&, const FString&>(nullptr, "AShooterGameMode.RestorePreUpgradeBackup(FString&,FString&)", SaveDirectory, MapName); }
	void TogglePhysicsSimulationAllowed() { NativeCall<void>(this, "AShooterGameMode.TogglePhysicsSimulationAllowed()"); }
	void DownloadedLiveTuningOverloads(bool bRequestWasSuccessful, const FString& RequestedFileURL, int ResponseCode, const FString& FileContent) { NativeCall<void, bool, const FString&, int, const FString&>(this, "AShooterGameMode.DownloadedLiveTuningOverloads(bool,FString&,int,FString&)", bRequestWasSuccessful, RequestedFileURL, ResponseCode, FileContent); }
	static FString* GetMapsSavedDirAllPlatforms(FString* result, UWorld* World, bool includeCurrentWorldMapName) { return NativeCall<FString*, FString*, UWorld*, bool>(nullptr, "AShooterGameMode.GetMapsSavedDirAllPlatforms(UWorld*,bool)", result, World, includeCurrentWorldMapName); }
	void QueueDinoForStackingCheck(APrimalDinoCharacter* Dino) { NativeCall<void, APrimalDinoCharacter*>(this, "AShooterGameMode.QueueDinoForStackingCheck(APrimalDinoCharacter*)", Dino); }
	void DownloadedBadWordList(bool bRequestWasSuccessful, const FString& RequestedFileURL, int ResponseCode, const FString& FileContent) { NativeCall<void, bool, const FString&, int, const FString&>(this, "AShooterGameMode.DownloadedBadWordList(bool,FString&,int,FString&)", bRequestWasSuccessful, RequestedFileURL, ResponseCode, FileContent); }
	void ToggleServerTickRateLogging() { NativeCall<void>(this, "AShooterGameMode.ToggleServerTickRateLogging()"); }
	void StartVTuneLowFPSCapture() { NativeCall<void>(this, "AShooterGameMode.StartVTuneLowFPSCapture()"); }
	bool IsPlayerAwaitingNotificationOnceTheirCachedTeamTameListFinishesUpdating(AShooterPlayerController* RequestingPlayer, int& FoundIndex) { return NativeCall<bool, AShooterPlayerController*, int&>(this, "AShooterGameMode.IsPlayerAwaitingNotificationOnceTheirCachedTeamTameListFinishesUpdating(AShooterPlayerController*,int&)", RequestingPlayer, FoundIndex); }
	void AddToHiddenHarvestingComponents(FAttachedInstancedHarvestingElement* pComponent) { NativeCall<void, FAttachedInstancedHarvestingElement*>(this, "AShooterGameMode.AddToHiddenHarvestingComponents(FAttachedInstancedHarvestingElement*)", pComponent); }
	void RemoveFromHiddenHarvestingComponents(FAttachedInstancedHarvestingElement* pComponent) { NativeCall<void, FAttachedInstancedHarvestingElement*>(this, "AShooterGameMode.RemoveFromHiddenHarvestingComponents(FAttachedInstancedHarvestingElement*)", pComponent); }
	FString* GetStringOption(FString* result, const wchar_t* Section, const wchar_t* OptionName) { return NativeCall<FString*, FString*, const wchar_t*, const wchar_t*>(this, "AShooterGameMode.GetStringOption(wchar_t*,wchar_t*)", result, Section, OptionName); }
	void ListCurrentLoggingPlayers() { NativeCall<void>(this, "AShooterGameMode.ListCurrentLoggingPlayers()"); }
	void UpdateNetModBanlist() { NativeCall<void>(this, "AShooterGameMode.UpdateNetModBanlist()"); }
	void CheckForRepopulation() { NativeCall<void>(this, "AShooterGameMode.CheckForRepopulation()"); }
	bool SetTransfers(bool enabled) { return NativeCall<bool, bool>(this, "AShooterGameMode.SetTransfers(bool)", enabled); }
	bool HasReachedPerDinoAmountLimit(int ForTeam, APrimalDinoCharacter* TheDino) { return NativeCall<bool, int, APrimalDinoCharacter*>(this, "AShooterGameMode.HasReachedPerDinoAmountLimit(int,APrimalDinoCharacter*)", ForTeam, TheDino); }
	void OnLandscapeLevelUnloaded() { NativeCall<void>(this, "AShooterGameMode.OnLandscapeLevelUnloaded()"); }
	void BroadcastPreSpawnDino(APrimalDinoCharacter* TheDino) { NativeCall<void, APrimalDinoCharacter*>(this, "AShooterGameMode.BroadcastPreSpawnDino(APrimalDinoCharacter*)", TheDino); }
	APlayerState* FindInactivePlayerFromHashedUniqueID(unsigned int HashedUniqueID) { return NativeCall<APlayerState*, unsigned int>(this, "AShooterGameMode.FindInactivePlayerFromHashedUniqueID(unsignedint)", HashedUniqueID); }
	void UpdateDynamicGameplayVolumes() { NativeCall<void>(this, "AShooterGameMode.UpdateDynamicGameplayVolumes()"); }
	void AddToPendingStructureDestroys(APrimalStructure* theStructure) { NativeCall<void, APrimalStructure*>(this, "AShooterGameMode.AddToPendingStructureDestroys(APrimalStructure*)", theStructure); }
	void AdminBroadcast(const FString& MessageText) { NativeCall<void, const FString&>(this, "AShooterGameMode.AdminBroadcast(FString&)", MessageText); }
	void DownloadedCosmeticWhitelist(bool bRequestWasSuccessful, const FString& RequestedFileURL, int ResponseCode, const FString& FileContent) { NativeCall<void, bool, const FString&, int, const FString&>(this, "AShooterGameMode.DownloadedCosmeticWhitelist(bool,FString&,int,FString&)", bRequestWasSuccessful, RequestedFileURL, ResponseCode, FileContent); }
	static bool TriggerLevelCustomEvents(UWorld* InWorld, const FString& EventName, int IDtoOnlyAllowExecutionOncePerFrame, bool bOnlyTriggerOnFirstLevel) { return NativeCall<bool, UWorld*, const FString&, int, bool>(nullptr, "AShooterGameMode.TriggerLevelCustomEvents(UWorld*,FString&,int,bool)", InWorld, EventName, IDtoOnlyAllowExecutionOncePerFrame, bOnlyTriggerOnFirstLevel); }
	bool IsAllowedToCheat(const FUniqueNetId& UserId) { return NativeCall<bool, const FUniqueNetId&>(this, "AShooterGameMode.IsAllowedToCheat(FUniqueNetId&)", UserId); }
	float GetExtraDinoSpawnWeight(FName DinoNameTag) { return NativeCall<float, FName>(this, "AShooterGameMode.GetExtraDinoSpawnWeight(FName)", DinoNameTag); }
	void DisableExecLoggingForPlayers() { NativeCall<void>(this, "AShooterGameMode.DisableExecLoggingForPlayers()"); }
	void SendChatMessageToTeam(int team, const FPrimalChatMessage& Message) { NativeCall<void, int, const FPrimalChatMessage&>(this, "AShooterGameMode.SendChatMessageToTeam(int,FPrimalChatMessage&)", team, Message); }
	void ProcessDinoStackingChecks() { NativeCall<void>(this, "AShooterGameMode.ProcessDinoStackingChecks()"); }
	static FString* GetNextBackupFilenameForMap(FString* result, const FString& SaveDirectory, const FString& MapName) { return NativeCall<FString*, FString*, const FString&, const FString&>(nullptr, "AShooterGameMode.GetNextBackupFilenameForMap(FString&,FString&)", result, SaveDirectory, MapName); }
	void DelayedRestart(int RestartInSeconds) { NativeCall<void, int>(this, "AShooterGameMode.DelayedRestart(int)", RestartInSeconds); }
	void DownloadedBanList(bool bRequestWasSuccessful, const FString& RequestedFileURL, int ResponseCode, const FString& FileContent) { NativeCall<void, bool, const FString&, int, const FString&>(this, "AShooterGameMode.DownloadedBanList(bool,FString&,int,FString&)", bRequestWasSuccessful, RequestedFileURL, ResponseCode, FileContent); }
	void TickPrivateDynamicConfigDownload() { NativeCall<void>(this, "AShooterGameMode.TickPrivateDynamicConfigDownload()"); }
	bool FilterBadWordsAndURLs(FString& String, bool bCheckWithoutSpecialChars, bool& bOutFilteredURL) { return NativeCall<bool, FString&, bool, bool&>(this, "AShooterGameMode.FilterBadWordsAndURLs(FString&,bool,bool&)", String, bCheckWithoutSpecialChars, bOutFilteredURL); }
	static bool DeleteBackupForMap(const FString& SaveDirectory, const FString& MapName, const FString& BackupFileToDelete) { return NativeCall<bool, const FString&, const FString&, const FString&>(nullptr, "AShooterGameMode.DeleteBackupForMap(FString&,FString&,FString&)", SaveDirectory, MapName, BackupFileToDelete); }
	static bool AllowDamage(UWorld* ForWorld, int TargetingTeam1, int TargetingTeam2, bool bIgnoreDamageIfAllied) { return NativeCall<bool, UWorld*, int, int, bool>(nullptr, "AShooterGameMode.AllowDamage(UWorld*,int,int,bool)", ForWorld, TargetingTeam1, TargetingTeam2, bIgnoreDamageIfAllied); }
	void UnRegisterBunkerForTribeLimit(APrimalStructure* Structure, bool overrideTeam, int teamOverride) { NativeCall<void, APrimalStructure*, bool, int>(this, "AShooterGameMode.UnRegisterBunkerForTribeLimit(APrimalStructure*,bool,int)", Structure, overrideTeam, teamOverride); }
	UPrimalPlayerData* GetPlayerDataByInt(unsigned __int64& PlayerDataIDInt) { return NativeCall<UPrimalPlayerData*, unsigned __int64&>(this, "AShooterGameMode.GetPlayerDataByInt(unsigned__int64&)", PlayerDataIDInt); }
	void IncrementNumDeaths(const FString& PlayerDataID) { NativeCall<void, const FString&>(this, "AShooterGameMode.IncrementNumDeaths(FString&)", PlayerDataID); }
	bool IsAHiddenHarvestingComponent(FAttachedInstancedHarvestingElement* pComponent) { return NativeCall<bool, FAttachedInstancedHarvestingElement*>(this, "AShooterGameMode.IsAHiddenHarvestingComponent(FAttachedInstancedHarvestingElement*)", pComponent); }
	bool CheckJoinInProgress(bool bIsFromLogin, APlayerController* NewPlayer) { return NativeCall<bool, bool, APlayerController*>(this, "AShooterGameMode.CheckJoinInProgress(bool,APlayerController*)", bIsFromLogin, NewPlayer); }
};