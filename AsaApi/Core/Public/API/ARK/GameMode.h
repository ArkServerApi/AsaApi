#pragma once
struct FNetworkNotify {

};


struct AGameStateBase : AInfo
{
	// Fields

	TSubclassOf<AGameModeBase>& GameModeClassField() { return *GetNativePointerField<TSubclassOf<AGameModeBase>*>(this, "AGameStateBase.GameModeClass"); }
	TObjectPtr<AGameModeBase>& AuthorityGameModeField() { return *GetNativePointerField<TObjectPtr<AGameModeBase>*>(this, "AGameStateBase.AuthorityGameMode"); }
	TSubclassOf<ASpectatorPawn>& SpectatorClassField() { return *GetNativePointerField<TSubclassOf<ASpectatorPawn>*>(this, "AGameStateBase.SpectatorClass"); }
	TArray<TObjectPtr<APlayerState>, TSizedDefaultAllocator<32> >& PlayerArrayField() { return *GetNativePointerField<TArray<TObjectPtr<APlayerState>, TSizedDefaultAllocator<32> >*>(this, "AGameStateBase.PlayerArray"); }
	float& ReplicatedWorldTimeSecondsField() { return *GetNativePointerField<float*>(this, "AGameStateBase.ReplicatedWorldTimeSeconds"); }
	long double& ReplicatedWorldTimeSecondsDoubleField() { return *GetNativePointerField<long double*>(this, "AGameStateBase.ReplicatedWorldTimeSecondsDouble"); }
	float& ServerWorldTimeSecondsDeltaField() { return *GetNativePointerField<float*>(this, "AGameStateBase.ServerWorldTimeSecondsDelta"); }
	float& ServerWorldTimeSecondsUpdateFrequencyField() { return *GetNativePointerField<float*>(this, "AGameStateBase.ServerWorldTimeSecondsUpdateFrequency"); }
	FTimerHandle& TimerHandle_UpdateServerTimeSecondsField() { return *GetNativePointerField<FTimerHandle*>(this, "AGameStateBase.TimerHandle_UpdateServerTimeSeconds"); }
	long double& SumServerWorldTimeSecondsDeltaField() { return *GetNativePointerField<long double*>(this, "AGameStateBase.SumServerWorldTimeSecondsDelta"); }
	unsigned int& NumServerWorldTimeSecondsDeltasField() { return *GetNativePointerField<unsigned int*>(this, "AGameStateBase.NumServerWorldTimeSecondsDeltas"); }
	TMap<FName, TArray<FSemaphoreEntry, TSizedDefaultAllocator<32> >, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<FName, TArray<FSemaphoreEntry, TSizedDefaultAllocator<32> >, 0> >& SemaphoreStorageField() { return *GetNativePointerField<TMap<FName, TArray<FSemaphoreEntry, TSizedDefaultAllocator<32> >, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<FName, TArray<FSemaphoreEntry, TSizedDefaultAllocator<32> >, 0> >*>(this, "AGameStateBase.SemaphoreStorage"); }
	FPostProcessOverlapEvent& OnAnyPostProcessVolumeEnteredField() { return *GetNativePointerField<FPostProcessOverlapEvent*>(this, "AGameStateBase.OnAnyPostProcessVolumeEntered"); }
	FPostProcessOverlapEvent& OnAnyPostProcessVolumeLeftField() { return *GetNativePointerField<FPostProcessOverlapEvent*>(this, "AGameStateBase.OnAnyPostProcessVolumeLeft"); }

	// Bitfields


	// Functions

	static UClass* StaticClass() { return NativeCall<UClass*>(nullptr, "AGameStateBase.StaticClass()"); }
	static void StaticRegisterNativesAGameStateBase() { NativeCall<void>(nullptr, "AGameStateBase.StaticRegisterNativesAGameStateBase()"); }
	void ValidateGeneratedRepEnums(const TArray<FRepRecord, TSizedDefaultAllocator<32> >* ClassReps) { NativeCall<void, const TArray<FRepRecord, TSizedDefaultAllocator<32> >*>(this, "AGameStateBase.ValidateGeneratedRepEnums(TArray<FRepRecord,TSizedDefaultAllocator<32>>&)", ClassReps); }
	const AGameModeBase* GetDefaultGameMode() { return NativeCall<const AGameModeBase*>(this, "AGameStateBase.GetDefaultGameMode()"); }
	void PostInitializeComponents() { NativeCall<void>(this, "AGameStateBase.PostInitializeComponents()"); }
	void OnRep_GameModeClass() { NativeCall<void>(this, "AGameStateBase.OnRep_GameModeClass()"); }
	void OnRep_SpectatorClass(FName NewState) { NativeCall<void, FName>(this, "AGameStateBase.OnRep_SpectatorClass()", NewState); }
	void ReceivedGameModeClass() { NativeCall<void>(this, "AGameStateBase.ReceivedGameModeClass()"); }
	void ReceivedSpectatorClass() { NativeCall<void>(this, "AGameStateBase.ReceivedSpectatorClass()"); }
	void SeamlessTravelTransitionCheckpoint(bool bToTransitionMap) { NativeCall<void, bool>(this, "AGameStateBase.SeamlessTravelTransitionCheckpoint(bool)", bToTransitionMap); }
	void AddPlayerState(APlayerState* PlayerState) { NativeCall<void, APlayerState*>(this, "AGameStateBase.AddPlayerState(APlayerState*)", PlayerState); }
	void RemovePlayerState(APlayerState* PlayerState) { NativeCall<void, APlayerState*>(this, "AGameStateBase.RemovePlayerState(APlayerState*)", PlayerState); }
	long double GetServerWorldTimeSeconds() { return NativeCall<long double>(this, "AGameStateBase.GetServerWorldTimeSeconds()"); }
	void UpdateServerTimeSeconds() { NativeCall<void>(this, "AGameStateBase.UpdateServerTimeSeconds()"); }
	void OnRep_ReplicatedWorldTimeSeconds() { NativeCall<void>(this, "AGameStateBase.OnRep_ReplicatedWorldTimeSeconds()"); }
	void OnRep_ReplicatedWorldTimeSecondsDouble() { NativeCall<void>(this, "AGameStateBase.OnRep_ReplicatedWorldTimeSecondsDouble()"); }
	void OnRep_ReplicatedHasBegunPlay() { NativeCall<void>(this, "AGameStateBase.OnRep_ReplicatedHasBegunPlay()"); }
	void HandleBeginPlay() { NativeCall<void>(this, "AGameStateBase.HandleBeginPlay()"); }
	bool HasBegunPlay() { return NativeCall<bool>(this, "AGameStateBase.HasBegunPlay()"); }
	bool HasMatchStarted() { return NativeCall<bool>(this, "AGameStateBase.HasMatchStarted()"); }
	float GetPlayerStartTime(AController* Controller) { return NativeCall<float, AController*>(this, "AGameStateBase.GetPlayerStartTime(AController*)", Controller); }
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty, TSizedDefaultAllocator<32> >* OutLifetimeProps) { NativeCall<void, TArray<FLifetimeProperty, TSizedDefaultAllocator<32> >*>(this, "AGameStateBase.GetLifetimeReplicatedProps(TArray<FLifetimeProperty,TSizedDefaultAllocator<32>>&)", OutLifetimeProps); }
	APlayerState* GetPlayerStateFromUniqueNetId(const FUniqueNetIdWrapper* InPlayerId) { return NativeCall<APlayerState*, const FUniqueNetIdWrapper*>(this, "AGameStateBase.GetPlayerStateFromUniqueNetId(FUniqueNetIdWrapper&)", InPlayerId); }
};

struct AGameState : AGameStateBase
{
	// Fields

	FName& MatchStateField() { return *GetNativePointerField<FName*>(this, "AGameState.MatchState"); }
	FName& PreviousMatchStateField() { return *GetNativePointerField<FName*>(this, "AGameState.PreviousMatchState"); }
	int& ElapsedTimeField() { return *GetNativePointerField<int*>(this, "AGameState.ElapsedTime"); }
	FTimerHandle& TimerHandle_DefaultTimerField() { return *GetNativePointerField<FTimerHandle*>(this, "AGameState.TimerHandle_DefaultTimer"); }

	// Bitfields


	// Functions

	static UClass* StaticClass() { return NativeCall<UClass*>(nullptr, "AGameState.StaticClass()"); }
	static void StaticRegisterNativesAGameState() { NativeCall<void>(nullptr, "AGameState.StaticRegisterNativesAGameState()"); }
	void ValidateGeneratedRepEnums(const TArray<FRepRecord, TSizedDefaultAllocator<32> >* ClassReps) { NativeCall<void, const TArray<FRepRecord, TSizedDefaultAllocator<32> >*>(this, "AGameState.ValidateGeneratedRepEnums(TArray<FRepRecord,TSizedDefaultAllocator<32>>&)", ClassReps); }
	void ReceivedGameModeClass() { NativeCall<void>(this, "AGameState.ReceivedGameModeClass()"); }
	void DefaultTimer() { NativeCall<void>(this, "AGameState.DefaultTimer()"); }
	void PostInitializeComponents() { NativeCall<void>(this, "AGameState.PostInitializeComponents()"); }
	void HandleMatchIsWaitingToStart() { NativeCall<void>(this, "AGameState.HandleMatchIsWaitingToStart()"); }
	void HandleMatchHasStarted() { NativeCall<void>(this, "AGameState.HandleMatchHasStarted()"); }
	bool HasMatchStarted() { return NativeCall<bool>(this, "AGameState.HasMatchStarted()"); }
	bool IsMatchInProgress() { return NativeCall<bool>(this, "AGameState.IsMatchInProgress()"); }
	bool HasMatchEnded() { return NativeCall<bool>(this, "AGameState.HasMatchEnded()"); }
	void OnRep_MatchState() { NativeCall<void>(this, "AGameState.OnRep_MatchState()"); }
	float GetPlayerStartTime(AController* Controller) { return NativeCall<float, AController*>(this, "AGameState.GetPlayerStartTime(AController*)", Controller); }
	float GetPlayerRespawnDelay(AController* Controller) { return NativeCall<float, AController*>(this, "AGameState.GetPlayerRespawnDelay(AController*)", Controller); }
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty, TSizedDefaultAllocator<32> >* OutLifetimeProps) { NativeCall<void, TArray<FLifetimeProperty, TSizedDefaultAllocator<32> >*>(this, "AGameState.GetLifetimeReplicatedProps(TArray<FLifetimeProperty,TSizedDefaultAllocator<32>>&)", OutLifetimeProps); }
};


struct AShooterGameState : AGameState
{
	// Fields

	int& NumNPCField() { return *GetNativePointerField<int*>(this, "AShooterGameState.NumNPC"); }
	int& NumHibernatedNPCField() { return *GetNativePointerField<int*>(this, "AShooterGameState.NumHibernatedNPC"); }
	int& NPCActiveCountTamedField() { return *GetNativePointerField<int*>(this, "AShooterGameState.NPCActiveCountTamed"); }
	int& NumActiveNPCField() { return *GetNativePointerField<int*>(this, "AShooterGameState.NumActiveNPC"); }
	int& NumDeadNPCField() { return *GetNativePointerField<int*>(this, "AShooterGameState.NumDeadNPC"); }
	int& NumPlayerActorsField() { return *GetNativePointerField<int*>(this, "AShooterGameState.NumPlayerActors"); }
	int& NumPlayerConnectedField() { return *GetNativePointerField<int*>(this, "AShooterGameState.NumPlayerConnected"); }
	float& LocalizedChatRadiusField() { return *GetNativePointerField<float*>(this, "AShooterGameState.LocalizedChatRadius"); }
	float& LocalizedChatRadiusUnconsiousScaleField() { return *GetNativePointerField<float*>(this, "AShooterGameState.LocalizedChatRadiusUnconsiousScale"); }
	float& ServerFramerateField() { return *GetNativePointerField<float*>(this, "AShooterGameState.ServerFramerate"); }
	FString& NewStructureDestructionTagField() { return *GetNativePointerField<FString*>(this, "AShooterGameState.NewStructureDestructionTag"); }
	int& DayNumberField() { return *GetNativePointerField<int*>(this, "AShooterGameState.DayNumber"); }
	float& DayTimeField() { return *GetNativePointerField<float*>(this, "AShooterGameState.DayTime"); }
	long double& NetworkTimeField() { return *GetNativePointerField<long double*>(this, "AShooterGameState.NetworkTime"); }
	unsigned int& TimeUTCField() { return *GetNativePointerField<unsigned int*>(this, "AShooterGameState.TimeUTC"); }
	int& NetUTCField() { return *GetNativePointerField<int*>(this, "AShooterGameState.NetUTC"); }
	bool& bIsListenServerField() { return *GetNativePointerField<bool*>(this, "AShooterGameState.bIsListenServer"); }
	bool& bIsServerRunningOnConsoleField() { return *GetNativePointerField<bool*>(this, "AShooterGameState.bIsServerRunningOnConsole"); }
	bool& bIsArkDownloadsAllowedField() { return *GetNativePointerField<bool*>(this, "AShooterGameState.bIsArkDownloadsAllowed"); }
	bool& bServerHardcoreField() { return *GetNativePointerField<bool*>(this, "AShooterGameState.bServerHardcore"); }
	bool& bAutoPvEField() { return *GetNativePointerField<bool*>(this, "AShooterGameState.bAutoPvE"); }
	bool& bServerForceNoHUDField() { return *GetNativePointerField<bool*>(this, "AShooterGameState.bServerForceNoHUD"); }
	bool& bMapPlayerLocationField() { return *GetNativePointerField<bool*>(this, "AShooterGameState.bMapPlayerLocation"); }
	bool& bPvEAllowTribeWarField() { return *GetNativePointerField<bool*>(this, "AShooterGameState.bPvEAllowTribeWar"); }
	bool& bEnablePvPGammaField() { return *GetNativePointerField<bool*>(this, "AShooterGameState.bEnablePvPGamma"); }
	bool& bDisablePvEGammaField() { return *GetNativePointerField<bool*>(this, "AShooterGameState.bDisablePvEGamma"); }
	int& NumTamedDinosField() { return *GetNativePointerField<int*>(this, "AShooterGameState.NumTamedDinos"); }
	int& MaxStructuresInRangeField() { return *GetNativePointerField<int*>(this, "AShooterGameState.MaxStructuresInRange"); }
	float& DayCycleSpeedScaleField() { return *GetNativePointerField<float*>(this, "AShooterGameState.DayCycleSpeedScale"); }
	float& DayTimeSpeedScaleField() { return *GetNativePointerField<float*>(this, "AShooterGameState.DayTimeSpeedScale"); }
	float& NightTimeSpeedScaleField() { return *GetNativePointerField<float*>(this, "AShooterGameState.NightTimeSpeedScale"); }
	int& StartTimeHourField() { return *GetNativePointerField<int*>(this, "AShooterGameState.StartTimeHour"); }
	float& PvEStructureDecayPeriodMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameState.PvEStructureDecayPeriodMultiplier"); }
	float& PvEDinoDecayPeriodMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameState.PvEDinoDecayPeriodMultiplier"); }
	float& PerPlatformMaxStructuresMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameState.PerPlatformMaxStructuresMultiplier"); }
	float& ImplantSuicideCDField() { return *GetNativePointerField<float*>(this, "AShooterGameState.ImplantSuicideCD"); }
	bool& bDisableDinoDecayPvEField() { return *GetNativePointerField<bool*>(this, "AShooterGameState.bDisableDinoDecayPvE"); }
	bool& bAllowCaveBuildingPvPField() { return *GetNativePointerField<bool*>(this, "AShooterGameState.bAllowCaveBuildingPvP"); }
	bool& bReachedPlatformStructureLimitField() { return *GetNativePointerField<bool*>(this, "AShooterGameState.bReachedPlatformStructureLimit"); }
	bool& bPvPStructureDecayField() { return *GetNativePointerField<bool*>(this, "AShooterGameState.bPvPStructureDecay"); }
	bool& bPreventDownloadItemsField() { return *GetNativePointerField<bool*>(this, "AShooterGameState.bPreventDownloadItems"); }
	bool& bPreventUploadItemsField() { return *GetNativePointerField<bool*>(this, "AShooterGameState.bPreventUploadItems"); }
	bool& bPreventMateBoostField() { return *GetNativePointerField<bool*>(this, "AShooterGameState.bPreventMateBoost"); }
	bool& bAllowCharacterCreationField() { return *GetNativePointerField<bool*>(this, "AShooterGameState.bAllowCharacterCreation"); }
	int& MaxTamedDinosField() { return *GetNativePointerField<int*>(this, "AShooterGameState.MaxTamedDinos"); }
	FString& PlayerListStringField() { return *GetNativePointerField<FString*>(this, "AShooterGameState.PlayerListString"); }
	FOnPlayerListReady& OnPlayerListPopulatedField() { return *GetNativePointerField<FOnPlayerListReady*>(this, "AShooterGameState.OnPlayerListPopulated"); }
	float& GlobalSpoilingTimeMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameState.GlobalSpoilingTimeMultiplier"); }
	float& GlobalItemDecompositionTimeMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameState.GlobalItemDecompositionTimeMultiplier"); }
	int& MaxNumberOfPlayersInTribeField() { return *GetNativePointerField<int*>(this, "AShooterGameState.MaxNumberOfPlayersInTribe"); }
	float& TribeSlotReuseCooldownField() { return *GetNativePointerField<float*>(this, "AShooterGameState.TribeSlotReuseCooldown"); }
	float& GlobalCorpseDecompositionTimeMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameState.GlobalCorpseDecompositionTimeMultiplier"); }
	float& EggHatchSpeedMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameState.EggHatchSpeedMultiplier"); }
	FName& ActiveEventField() { return *GetNativePointerField<FName*>(this, "AShooterGameState.ActiveEvent"); }
	bool& bEnableExtraStructurePreventionVolumesField() { return *GetNativePointerField<bool*>(this, "AShooterGameState.bEnableExtraStructurePreventionVolumes"); }
	TArray<FItemCraftingCostOverride, TSizedDefaultAllocator<32> >& OverrideItemCraftingCostsField() { return *GetNativePointerField<TArray<FItemCraftingCostOverride, TSizedDefaultAllocator<32> >*>(this, "AShooterGameState.OverrideItemCraftingCosts"); }
	TArray<FItemMaxItemQuantityOverride, TSizedDefaultAllocator<32> >& OverrideItemMaxQuantityField() { return *GetNativePointerField<TArray<FItemMaxItemQuantityOverride, TSizedDefaultAllocator<32> >*>(this, "AShooterGameState.OverrideItemMaxQuantity"); }
	TMap<FClassMapKey, FMaxItemQuantityOverride, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<FClassMapKey, FMaxItemQuantityOverride, 0> >& OverrideItemMaxQuantityMapField() { return *GetNativePointerField<TMap<FClassMapKey, FMaxItemQuantityOverride, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<FClassMapKey, FMaxItemQuantityOverride, 0> >*>(this, "AShooterGameState.OverrideItemMaxQuantityMap"); }
	TSet<FName, DefaultKeyFuncs<FName, 0>, FDefaultSetAllocator>& LevelNameHashField() { return *GetNativePointerField<TSet<FName, DefaultKeyFuncs<FName, 0>, FDefaultSetAllocator>*>(this, "AShooterGameState.LevelNameHash"); }
	long double& PrivateNetworkTimeField() { return *GetNativePointerField<long double*>(this, "AShooterGameState.PrivateNetworkTime"); }
	long double& LastServerSaveTimeField() { return *GetNativePointerField<long double*>(this, "AShooterGameState.LastServerSaveTime"); }
	float& ServerSaveIntervalField() { return *GetNativePointerField<float*>(this, "AShooterGameState.ServerSaveInterval"); }
	float& TribeNameChangeCooldownField() { return *GetNativePointerField<float*>(this, "AShooterGameState.TribeNameChangeCooldown"); }
	float& PlatformSaddleBuildAreaBoundsMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameState.PlatformSaddleBuildAreaBoundsMultiplier"); }
	float& StructurePickupTimeAfterPlacementField() { return *GetNativePointerField<float*>(this, "AShooterGameState.StructurePickupTimeAfterPlacement"); }
	float& StructurePickupHoldDurationField() { return *GetNativePointerField<float*>(this, "AShooterGameState.StructurePickupHoldDuration"); }
	TArray<FClassMultiplier, TSizedDefaultAllocator<32> >& DinoClassSpeedMultipliersField() { return *GetNativePointerField<TArray<FClassMultiplier, TSizedDefaultAllocator<32> >*>(this, "AShooterGameState.DinoClassSpeedMultipliers"); }
	TArray<FClassMultiplier, TSizedDefaultAllocator<32> >& TamedDinoClassSpeedMultipliersField() { return *GetNativePointerField<TArray<FClassMultiplier, TSizedDefaultAllocator<32> >*>(this, "AShooterGameState.TamedDinoClassSpeedMultipliers"); }
	FieldArray<ExpensiveFunctionRegister, 1> ExpensiveFunctionsField() { return { this, "AShooterGameState.ExpensiveFunctions" }; }
	UAudioComponent*& DynamicMusicAudioComponentField() { return *GetNativePointerField<UAudioComponent**>(this, "AShooterGameState.DynamicMusicAudioComponent"); }
	UAudioComponent*& DynamicMusicAudioComponent2Field() { return *GetNativePointerField<UAudioComponent**>(this, "AShooterGameState.DynamicMusicAudioComponent2"); }
	bool& bPlayingDynamicMusic1Field() { return *GetNativePointerField<bool*>(this, "AShooterGameState.bPlayingDynamicMusic1"); }
	long double& LastHadMusicTimeField() { return *GetNativePointerField<long double*>(this, "AShooterGameState.LastHadMusicTime"); }
	TArray<FLevelExperienceRamp, TSizedDefaultAllocator<32> >& LevelExperienceRampOverridesField() { return *GetNativePointerField<TArray<FLevelExperienceRamp, TSizedDefaultAllocator<32> >*>(this, "AShooterGameState.LevelExperienceRampOverrides"); }
	TArray<FEngramEntryOverride, TSizedDefaultAllocator<32> >& OverrideEngramEntriesField() { return *GetNativePointerField<TArray<FEngramEntryOverride, TSizedDefaultAllocator<32> >*>(this, "AShooterGameState.OverrideEngramEntries"); }
	TSubclassOf<UPrimalUI>& CustomGameUITemplateField() { return *GetNativePointerField<TSubclassOf<UPrimalUI>*>(this, "AShooterGameState.CustomGameUITemplate"); }
	TArray<FString, TSizedDefaultAllocator<32> >& PreventDinoTameClassNamesField() { return *GetNativePointerField<TArray<FString, TSizedDefaultAllocator<32> >*>(this, "AShooterGameState.PreventDinoTameClassNames"); }
	float& ListenServerTetherDistanceMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameState.ListenServerTetherDistanceMultiplier"); }
	FString& PGMapNameField() { return *GetNativePointerField<FString*>(this, "AShooterGameState.PGMapName"); }
	TArray<int, TSizedDefaultAllocator<32> >& SupportedSpawnRegionsField() { return *GetNativePointerField<TArray<int, TSizedDefaultAllocator<32> >*>(this, "AShooterGameState.SupportedSpawnRegions"); }
	UPaintingCache*& PaintingCacheField() { return *GetNativePointerField<UPaintingCache**>(this, "AShooterGameState.PaintingCache"); }
	USoundBase*& StaticOverrideMusicField() { return *GetNativePointerField<USoundBase**>(this, "AShooterGameState.StaticOverrideMusic"); }
	UE::Math::TVector<double>& PlayerFloatingHUDOffsetField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "AShooterGameState.PlayerFloatingHUDOffset"); }
	float& PlayerFloatingHUDOffsetScreenYField() { return *GetNativePointerField<float*>(this, "AShooterGameState.PlayerFloatingHUDOffsetScreenY"); }
	float& StructureDamageRepairCooldownField() { return *GetNativePointerField<float*>(this, "AShooterGameState.StructureDamageRepairCooldown"); }
	bool& bAllowCustomRecipesField() { return *GetNativePointerField<bool*>(this, "AShooterGameState.bAllowCustomRecipes"); }
	float& CustomRecipeEffectivenessMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameState.CustomRecipeEffectivenessMultiplier"); }
	float& CustomRecipeSkillMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameState.CustomRecipeSkillMultiplier"); }
	bool& bAlwaysAllowHostMessagesField() { return *GetNativePointerField<bool*>(this, "AShooterGameState.bAlwaysAllowHostMessages"); }
	USoundBase*& OverrideAreaMusicField() { return *GetNativePointerField<USoundBase**>(this, "AShooterGameState.OverrideAreaMusic"); }
	UE::Math::TVector<double>& OverrideAreaMusicPositionField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "AShooterGameState.OverrideAreaMusicPosition"); }
	float& OverrideAreaMusicRangeField() { return *GetNativePointerField<float*>(this, "AShooterGameState.OverrideAreaMusicRange"); }
	float& FloatingHUDRangeField() { return *GetNativePointerField<float*>(this, "AShooterGameState.FloatingHUDRange"); }
	float& FloatingChatRangeField() { return *GetNativePointerField<float*>(this, "AShooterGameState.FloatingChatRange"); }
	int& ExtinctionEventTimeIntervalField() { return *GetNativePointerField<int*>(this, "AShooterGameState.ExtinctionEventTimeInterval"); }
	float& RTSModeNumSelectableDinosScaleField() { return *GetNativePointerField<float*>(this, "AShooterGameState.RTSModeNumSelectableDinosScale"); }
	float& RTSMaxRangeFromPlayerCharacterScaleField() { return *GetNativePointerField<float*>(this, "AShooterGameState.RTSMaxRangeFromPlayerCharacterScale"); }
	float& ExtinctionEventPercentField() { return *GetNativePointerField<float*>(this, "AShooterGameState.ExtinctionEventPercent"); }
	int& ExtinctionEventSecondsRemainingField() { return *GetNativePointerField<int*>(this, "AShooterGameState.ExtinctionEventSecondsRemaining"); }
	int& DestroyTamesOverLevelClampField() { return *GetNativePointerField<int*>(this, "AShooterGameState.DestroyTamesOverLevelClamp"); }
	TArray<FInventoryComponentDefaultItemsAppend, TSizedDefaultAllocator<32> >& InventoryComponentAppendsField() { return *GetNativePointerField<TArray<FInventoryComponentDefaultItemsAppend, TSizedDefaultAllocator<32> >*>(this, "AShooterGameState.InventoryComponentAppends"); }
	bool& bPvPDinoDecayField() { return *GetNativePointerField<bool*>(this, "AShooterGameState.bPvPDinoDecay"); }
	bool& bForceUseInventoryAppendsField() { return *GetNativePointerField<bool*>(this, "AShooterGameState.bForceUseInventoryAppends"); }
	float& ItemStackSizeMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameState.ItemStackSizeMultiplier"); }
	TArray<int, TSizedDefaultAllocator<32> >& PreventOfflinePvPLiveTeamsField() { return *GetNativePointerField<TArray<int, TSizedDefaultAllocator<32> >*>(this, "AShooterGameState.PreventOfflinePvPLiveTeams"); }
	TArray<int, TSizedDefaultAllocator<32> >& PreventOfflinePvPExpiringTeamsField() { return *GetNativePointerField<TArray<int, TSizedDefaultAllocator<32> >*>(this, "AShooterGameState.PreventOfflinePvPExpiringTeams"); }
	TArray<float, TSizedDefaultAllocator<32> >& PreventOfflinePvPExpiringTimesField() { return *GetNativePointerField<TArray<float, TSizedDefaultAllocator<32> >*>(this, "AShooterGameState.PreventOfflinePvPExpiringTimes"); }
	TMap<int, float, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<int, float, 0> >& PreventOfflinePvPLiveTimesField() { return *GetNativePointerField<TMap<int, float, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<int, float, 0> >*>(this, "AShooterGameState.PreventOfflinePvPLiveTimes"); }
	TMap<int, double, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<int, double, 0> >& PreventOfflinePvPFirstLiveTimeField() { return *GetNativePointerField<TMap<int, double, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<int, double, 0> >*>(this, "AShooterGameState.PreventOfflinePvPFirstLiveTime"); }
	bool& bDisableImprintDinoBuffField() { return *GetNativePointerField<bool*>(this, "AShooterGameState.bDisableImprintDinoBuff"); }
	int& MaxPersonalTamedDinosField() { return *GetNativePointerField<int*>(this, "AShooterGameState.MaxPersonalTamedDinos"); }
	TArray<FFloatingTextEntry, TSizedDefaultAllocator<32> >& FloatingTextEntriesField() { return *GetNativePointerField<TArray<FFloatingTextEntry, TSizedDefaultAllocator<32> >*>(this, "AShooterGameState.FloatingTextEntries"); }
	bool& bIsClientField() { return *GetNativePointerField<bool*>(this, "AShooterGameState.bIsClient"); }
	FString& ClusterIdField() { return *GetNativePointerField<FString*>(this, "AShooterGameState.ClusterId"); }
	FString& AmazonS3AccessKeyIDField() { return *GetNativePointerField<FString*>(this, "AShooterGameState.AmazonS3AccessKeyID"); }
	FString& AmazonS3SecretAccessKeyField() { return *GetNativePointerField<FString*>(this, "AShooterGameState.AmazonS3SecretAccessKey"); }
	FString& AmazonS3BucketNameField() { return *GetNativePointerField<FString*>(this, "AShooterGameState.AmazonS3BucketName"); }
	FString& ServerSessionNameField() { return *GetNativePointerField<FString*>(this, "AShooterGameState.ServerSessionName"); }
	FString& LoadForceRespawnDinosTagField() { return *GetNativePointerField<FString*>(this, "AShooterGameState.LoadForceRespawnDinosTag"); }
	bool& bFastDecayUnsnappedCoreStructuresField() { return *GetNativePointerField<bool*>(this, "AShooterGameState.bFastDecayUnsnappedCoreStructures"); }
	bool& bPvEAllowStructuresAtSupplyDropsField() { return *GetNativePointerField<bool*>(this, "AShooterGameState.bPvEAllowStructuresAtSupplyDrops"); }
	float& MinimumDinoReuploadIntervalField() { return *GetNativePointerField<float*>(this, "AShooterGameState.MinimumDinoReuploadInterval"); }
	float& HairGrowthSpeedMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameState.HairGrowthSpeedMultiplier"); }
	float& DinoHairGrowthSpeedMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameState.DinoHairGrowthSpeedMultiplier"); }
	float& FastDecayIntervalField() { return *GetNativePointerField<float*>(this, "AShooterGameState.FastDecayInterval"); }
	FString& CachedSessionOwnerIdField() { return *GetNativePointerField<FString*>(this, "AShooterGameState.CachedSessionOwnerId"); }
	float& OxygenSwimSpeedStatMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameState.OxygenSwimSpeedStatMultiplier"); }
	FOnHTTPGetProcessed& OnHTTPGetResponseField() { return *GetNativePointerField<FOnHTTPGetProcessed*>(this, "AShooterGameState.OnHTTPGetResponse"); }
	FOnHTTPPostResponse& OnHTTPPostResponseField() { return *GetNativePointerField<FOnHTTPPostResponse*>(this, "AShooterGameState.OnHTTPPostResponse"); }
	bool& bCrossARKAllowForeignDinoDownloadsField() { return *GetNativePointerField<bool*>(this, "AShooterGameState.bCrossARKAllowForeignDinoDownloads"); }
	long double& LastPlayedDynamicMusic1Field() { return *GetNativePointerField<long double*>(this, "AShooterGameState.LastPlayedDynamicMusic1"); }
	long double& LastPlayedDynamicMusic2Field() { return *GetNativePointerField<long double*>(this, "AShooterGameState.LastPlayedDynamicMusic2"); }
	bool& bEnablePlayerMoveThroughSleepingField() { return *GetNativePointerField<bool*>(this, "AShooterGameState.bEnablePlayerMoveThroughSleeping"); }
	bool& bDisableStructurePlacementCollisionField() { return *GetNativePointerField<bool*>(this, "AShooterGameState.bDisableStructurePlacementCollision"); }
	bool& bAllowPlatformSaddleMultiFloorsField() { return *GetNativePointerField<bool*>(this, "AShooterGameState.bAllowPlatformSaddleMultiFloors"); }
	int& MaxAlliancesPerTribeField() { return *GetNativePointerField<int*>(this, "AShooterGameState.MaxAlliancesPerTribe"); }
	int& MaxTribesPerAllianceField() { return *GetNativePointerField<int*>(this, "AShooterGameState.MaxTribesPerAlliance"); }
	bool& bDisableDinoDecayClaimingField() { return *GetNativePointerField<bool*>(this, "AShooterGameState.bDisableDinoDecayClaiming"); }
	FName& UseStructurePreventionVolumeTagField() { return *GetNativePointerField<FName*>(this, "AShooterGameState.UseStructurePreventionVolumeTag"); }
	int& MaxStructuresInSmallRadiusField() { return *GetNativePointerField<int*>(this, "AShooterGameState.MaxStructuresInSmallRadius"); }
	float& RadiusStructuresInSmallRadiusField() { return *GetNativePointerField<float*>(this, "AShooterGameState.RadiusStructuresInSmallRadius"); }
	bool& bDisableWirelessCraftingField() { return *GetNativePointerField<bool*>(this, "AShooterGameState.bDisableWirelessCrafting"); }
	bool& bDisableWirelessCraftingForPlayersField() { return *GetNativePointerField<bool*>(this, "AShooterGameState.bDisableWirelessCraftingForPlayers"); }
	float& WirelessCraftingRangeOverrideField() { return *GetNativePointerField<float*>(this, "AShooterGameState.WirelessCraftingRangeOverride"); }
	int& AmbientSoundCheckIncrementField() { return *GetNativePointerField<int*>(this, "AShooterGameState.AmbientSoundCheckIncrement"); }
	int& STASISAUTODESTROY_CheckIncrementField() { return *GetNativePointerField<int*>(this, "AShooterGameState.STASISAUTODESTROY_CheckIncrement"); }
	float& NetUTCCacheField() { return *GetNativePointerField<float*>(this, "AShooterGameState.NetUTCCache"); }
	float& LimitTurretsRangeField() { return *GetNativePointerField<float*>(this, "AShooterGameState.LimitTurretsRange"); }
	int& LimitTurretsNumField() { return *GetNativePointerField<int*>(this, "AShooterGameState.LimitTurretsNum"); }
	int& LimitGeneratorsNumField() { return *GetNativePointerField<int*>(this, "AShooterGameState.LimitGeneratorsNum"); }
	float& LimitGeneratorsRangeField() { return *GetNativePointerField<float*>(this, "AShooterGameState.LimitGeneratorsRange"); }
	int& CropPlotStackLimitField() { return *GetNativePointerField<int*>(this, "AShooterGameState.CropPlotStackLimit"); }
	bool& bDisableTekLegsBoostField() { return *GetNativePointerField<bool*>(this, "AShooterGameState.bDisableTekLegsBoost"); }
	float& PhotoModeRangeLimitField() { return *GetNativePointerField<float*>(this, "AShooterGameState.PhotoModeRangeLimit"); }
	bool& bShowCreativeModeField() { return *GetNativePointerField<bool*>(this, "AShooterGameState.bShowCreativeMode"); }
	TArray<FPlayerLocatorEffectMap, TSizedDefaultAllocator<32> >& PlayerLocatorEffectMapsField() { return *GetNativePointerField<TArray<FPlayerLocatorEffectMap, TSizedDefaultAllocator<32> >*>(this, "AShooterGameState.PlayerLocatorEffectMaps"); }
	int& ThrottledTicksModField() { return *GetNativePointerField<int*>(this, "AShooterGameState.ThrottledTicksMod"); }
	int& PlayerListThrottledModField() { return *GetNativePointerField<int*>(this, "AShooterGameState.PlayerListThrottledMod"); }
	int& PerformanceThrottledTicksModField() { return *GetNativePointerField<int*>(this, "AShooterGameState.PerformanceThrottledTicksMod"); }
	float& PreventOfflinePvPConnectionInvincibleIntervalField() { return *GetNativePointerField<float*>(this, "AShooterGameState.PreventOfflinePvPConnectionInvincibleInterval"); }
	float& PassiveTameIntervalMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameState.PassiveTameIntervalMultiplier"); }
	TArray<TSubclassOf<APrimalDinoCharacter>, TSizedDefaultAllocator<32> >& UniqueDinosField() { return *GetNativePointerField<TArray<TSubclassOf<APrimalDinoCharacter>, TSizedDefaultAllocator<32> >*>(this, "AShooterGameState.UniqueDinos"); }
	TArray<FName, TSizedDefaultAllocator<32> >& ActiveMissionTagsField() { return *GetNativePointerField<TArray<FName, TSizedDefaultAllocator<32> >*>(this, "AShooterGameState.ActiveMissionTags"); }
	unsigned int& MinimumUniqueDownloadIntervalField() { return *GetNativePointerField<unsigned int*>(this, "AShooterGameState.MinimumUniqueDownloadInterval"); }
	unsigned int& MaximumUniqueDownloadIntervalField() { return *GetNativePointerField<unsigned int*>(this, "AShooterGameState.MaximumUniqueDownloadInterval"); }
	bool& bPreventOutOfTribePinCodeUseField() { return *GetNativePointerField<bool*>(this, "AShooterGameState.bPreventOutOfTribePinCodeUse"); }
	TArray<FDinoDownloadData, TSizedDefaultAllocator<32> >& UniqueDownloadsField() { return *GetNativePointerField<TArray<FDinoDownloadData, TSizedDefaultAllocator<32> >*>(this, "AShooterGameState.UniqueDownloads"); }
	TArray<FDataSet, TSizedDefaultAllocator<32> >& GameDataSetsField() { return *GetNativePointerField<TArray<FDataSet, TSizedDefaultAllocator<32> >*>(this, "AShooterGameState.GameDataSets"); }
	UPrimalWorldSettingsEventOverrides*& ActiveEventOverridesField() { return *GetNativePointerField<UPrimalWorldSettingsEventOverrides**>(this, "AShooterGameState.ActiveEventOverrides"); }
	TArray<FMassTeleportData, TSizedDefaultAllocator<32> >& MassTeleportQueueField() { return *GetNativePointerField<TArray<FMassTeleportData, TSizedDefaultAllocator<32> >*>(this, "AShooterGameState.MassTeleportQueue"); }
	TArray<AActor*, TSizedDefaultAllocator<32> >& MassTeleportQueueToRemoveField() { return *GetNativePointerField<TArray<AActor*, TSizedDefaultAllocator<32> >*>(this, "AShooterGameState.MassTeleportQueueToRemove"); }
	TArray<FMassTeleportData, TSizedDefaultAllocator<32> >& MassTeleportQueueToAddField() { return *GetNativePointerField<TArray<FMassTeleportData, TSizedDefaultAllocator<32> >*>(this, "AShooterGameState.MassTeleportQueueToAdd"); }
	TSet<UDataLayerInstance const*, DefaultKeyFuncs<UDataLayerInstance const*, 0>, FDefaultSetAllocator>& StreamingDataLayersField() { return *GetNativePointerField<TSet<UDataLayerInstance const*, DefaultKeyFuncs<UDataLayerInstance const*, 0>, FDefaultSetAllocator>*>(this, "AShooterGameState.StreamingDataLayers"); }
	TMap<FName, UDataLayerInstance const*, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<FName, UDataLayerInstance const*, 0> >& DataLayerMapField() { return *GetNativePointerField<TMap<FName, UDataLayerInstance const*, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<FName, UDataLayerInstance const*, 0> >*>(this, "AShooterGameState.DataLayerMap"); }
	TArray<FName, TSizedDefaultAllocator<32> >& BiomeBuffTagsField() { return *GetNativePointerField<TArray<FName, TSizedDefaultAllocator<32> >*>(this, "AShooterGameState.BiomeBuffTags"); }
	FOnDinoDownloaded& OnDinoDownloadedField() { return *GetNativePointerField<FOnDinoDownloaded*>(this, "AShooterGameState.OnDinoDownloaded"); }
	FOnDinoUploaded& OnDinoUploadedField() { return *GetNativePointerField<FOnDinoUploaded*>(this, "AShooterGameState.OnDinoUploaded"); }
	TArray<FWorldBuffPersistantData, TSizedDefaultAllocator<32> >& WorldBuffPersistantDatasField() { return *GetNativePointerField<TArray<FWorldBuffPersistantData, TSizedDefaultAllocator<32> >*>(this, "AShooterGameState.WorldBuffPersistantDatas"); }
	float& TurretCopySettingsCooldownField() { return *GetNativePointerField<float*>(this, "AShooterGameState.TurretCopySettingsCooldown"); }
	float& BaseHexagonRewardMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameState.BaseHexagonRewardMultiplier"); }
	float& HexagonRewardMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameState.HexagonRewardMultiplier"); }
	float& HexagonCostMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameState.HexagonCostMultiplier"); }
	bool& bHexStoreAllowOnlyEngramTradeOptionField() { return *GetNativePointerField<bool*>(this, "AShooterGameState.bHexStoreAllowOnlyEngramTradeOption"); }
	bool& bAllowFlyerSpeedLevelingField() { return *GetNativePointerField<bool*>(this, "AShooterGameState.bAllowFlyerSpeedLeveling"); }
	TArray<FString, TSizedDefaultAllocator<32> >& PreventBreedingForClassNamesField() { return *GetNativePointerField<TArray<FString, TSizedDefaultAllocator<32> >*>(this, "AShooterGameState.PreventBreedingForClassNames"); }
	int& LiveTuningReplicatedChunkSizeField() { return *GetNativePointerField<int*>(this, "AShooterGameState.LiveTuningReplicatedChunkSize"); }
	TArray<FString, TSizedDefaultAllocator<32> >& LiveTuningOverloadChunksField() { return *GetNativePointerField<TArray<FString, TSizedDefaultAllocator<32> >*>(this, "AShooterGameState.LiveTuningOverloadChunks"); }
	TArray<FString, TSizedDefaultAllocator<32> >& PreventTransferForClassNamesField() { return *GetNativePointerField<TArray<FString, TSizedDefaultAllocator<32> >*>(this, "AShooterGameState.PreventTransferForClassNames"); }
	int& EnvironmentIndexField() { return *GetNativePointerField<int*>(this, "AShooterGameState.EnvironmentIndex"); }
	int& NextEnvironmentIndexField() { return *GetNativePointerField<int*>(this, "AShooterGameState.NextEnvironmentIndex"); }
	FColor& FloatingPlatformProfileNameColorField() { return *GetNativePointerField<FColor*>(this, "AShooterGameState.FloatingPlatformProfileNameColor"); }
	FColor& FloatingNameColorField() { return *GetNativePointerField<FColor*>(this, "AShooterGameState.FloatingNameColor"); }
	long double& NextMutagenTimeField() { return *GetNativePointerField<long double*>(this, "AShooterGameState.NextMutagenTime"); }
	int& OverrideMaxExperiencePointsPlayerField() { return *GetNativePointerField<int*>(this, "AShooterGameState.OverrideMaxExperiencePointsPlayer"); }
	int& OverrideMaxExperiencePointsDinoField() { return *GetNativePointerField<int*>(this, "AShooterGameState.OverrideMaxExperiencePointsDino"); }
	TArray<int, TSizedDefaultAllocator<32> >& DeferredExplorerNoteUnlockQueueField() { return *GetNativePointerField<TArray<int, TSizedDefaultAllocator<32> >*>(this, "AShooterGameState.DeferredExplorerNoteUnlockQueue"); }
	TArray<TWeakObjectPtr<AActor>, TSizedDefaultAllocator<32> >& ForcedRelevantPOIActorsField() { return *GetNativePointerField<TArray<TWeakObjectPtr<AActor>, TSizedDefaultAllocator<32> >*>(this, "AShooterGameState.ForcedRelevantPOIActors"); }
	float& MinimumTimebetweeninventoryRetrievalField() { return *GetNativePointerField<float*>(this, "AShooterGameState.MinimumTimebetweeninventoryRetrieval"); }
	float& WildFollowerSpawnChanceMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameState.WildFollowerSpawnChanceMultiplier"); }
	float& WildFollowerSpawnCountMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameState.WildFollowerSpawnCountMultiplier"); }
	TSet<FName, DefaultKeyFuncs<FName, 0>, FDefaultSetAllocator>& LoadedDataLayersField() { return *GetNativePointerField<TSet<FName, DefaultKeyFuncs<FName, 0>, FDefaultSetAllocator>*>(this, "AShooterGameState.LoadedDataLayers"); }
	long double& RealtimeThrottledTickTimeAmountField() { return *GetNativePointerField<long double*>(this, "AShooterGameState.RealtimeThrottledTickTimeAmount"); }
	int& RealtimeThrottledTickOffsetField() { return *GetNativePointerField<int*>(this, "AShooterGameState.RealtimeThrottledTickOffset"); }
	TArray<FNetChangeDefaultPropertyValue, TSizedDefaultAllocator<32> >& CurrentDefaultPropertyValueUpdatesField() { return *GetNativePointerField<TArray<FNetChangeDefaultPropertyValue, TSizedDefaultAllocator<32> >*>(this, "AShooterGameState.CurrentDefaultPropertyValueUpdates"); }
	FCDODebugData& CDODebugDataField() { return *GetNativePointerField<FCDODebugData*>(this, "AShooterGameState.CDODebugData"); }
	int& DedicatedWorldPartitionTicksField() { return *GetNativePointerField<int*>(this, "AShooterGameState.DedicatedWorldPartitionTicks"); }
	TSharedPtr<IDataLayerWatcher>& DataLayerWatcherPtrField() { return *GetNativePointerField<TSharedPtr<IDataLayerWatcher>*>(this, "AShooterGameState.DataLayerWatcherPtr"); }

	// Bitfields


	// Functions

	static UClass* StaticClass() { return NativeCall<UClass*>(nullptr, "AShooterGameState.StaticClass()"); }
	void AddTokens(int Quantity, int byTribe) { NativeCall<void, int, int>(this, "AShooterGameState.AddTokens(int,int)", Quantity, byTribe); }
	bool AllowDownloadDino(const TSoftClassPtr<APrimalDinoCharacter>* TheDinoClass) { return NativeCall<bool, const TSoftClassPtr<APrimalDinoCharacter>*>(this, "AShooterGameState.AllowDownloadDino(TSoftClassPtr<APrimalDinoCharacter>&)", TheDinoClass); }
	void ForceStartMatch(bool PreventFinishTheMatch, bool UseQuetzalBus) { NativeCall<void, bool, bool>(this, "AShooterGameState.ForceStartMatch(bool,bool)", PreventFinishTheMatch, UseQuetzalBus); }
	static void StaticRegisterNativesAShooterGameState() { NativeCall<void>(nullptr, "AShooterGameState.StaticRegisterNativesAShooterGameState()"); }
	void ValidateGeneratedRepEnums(const TArray<FRepRecord, TSizedDefaultAllocator<32> >* ClassReps) { NativeCall<void, const TArray<FRepRecord, TSizedDefaultAllocator<32> >*>(this, "AShooterGameState.ValidateGeneratedRepEnums(TArray<FRepRecord,TSizedDefaultAllocator<32>>&)", ClassReps); }
	void NotifyPlayerDied(AShooterCharacter* theShooterChar, AShooterPlayerController* prevController, APawn* InstigatingPawn, AActor* DamageCauser) { NativeCall<void, AShooterCharacter*, AShooterPlayerController*, APawn*, AActor*>(this, "AShooterGameState.NotifyPlayerDied(AShooterCharacter*,AShooterPlayerController*,APawn*,AActor*)", theShooterChar, prevController, InstigatingPawn, DamageCauser); }
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty, TSizedDefaultAllocator<32> >* OutLifetimeProps) { NativeCall<void, TArray<FLifetimeProperty, TSizedDefaultAllocator<32> >*>(this, "AShooterGameState.GetLifetimeReplicatedProps(TArray<FLifetimeProperty,TSizedDefaultAllocator<32>>&)", OutLifetimeProps); }
	bool GetItemMaxQuantityOverride(TSubclassOf<UPrimalItem> ForClass, FMaxItemQuantityOverride* OutMaxQuantity) { return NativeCall<bool, TSubclassOf<UPrimalItem>, FMaxItemQuantityOverride*>(this, "AShooterGameState.GetItemMaxQuantityOverride(TSubclassOf<UPrimalItem>,FMaxItemQuantityOverride&)", ForClass, OutMaxQuantity); }
	void OnRep_ReplicateLocalizedChatRadius() { NativeCall<void>(this, "AShooterGameState.OnRep_ReplicateLocalizedChatRadius()"); }
	void RequestFinishAndExitToMainMenu() { NativeCall<void>(this, "AShooterGameState.RequestFinishAndExitToMainMenu()"); }
	void Tick(float DeltaSeconds) { NativeCall<void, float>(this, "AShooterGameState.Tick(float)", DeltaSeconds); }
	void UpdateDynamicMusic(float DeltaSeconds) { NativeCall<void, float>(this, "AShooterGameState.UpdateDynamicMusic(float)", DeltaSeconds); }
	void CreateCustomGameUI(AShooterPlayerController* SceneOwner) { NativeCall<void, AShooterPlayerController*>(this, "AShooterGameState.CreateCustomGameUI(AShooterPlayerController*)", SceneOwner); }
	void DrawHUD(AShooterHUD* HUD) { NativeCall<void, AShooterHUD*>(this, "AShooterGameState.DrawHUD(AShooterHUD*)", HUD); }
	void PostInitializeComponents() { NativeCall<void>(this, "AShooterGameState.PostInitializeComponents()"); }
	void Destroyed() { NativeCall<void>(this, "AShooterGameState.Destroyed()"); }
	float GetClientReplicationRateFor(UNetConnection* InConnection, AActor* InActor) { return NativeCall<float, UNetConnection*, AActor*>(this, "AShooterGameState.GetClientReplicationRateFor(UNetConnection*,AActor*)", InConnection, InActor); }
	void OnDeserializedByGame(EOnDeserializationType::Type DeserializationType) { NativeCall<void, EOnDeserializationType::Type>(this, "AShooterGameState.OnDeserializedByGame(EOnDeserializationType::Type)", DeserializationType); }
	void BeginPlay() { NativeCall<void>(this, "AShooterGameState.BeginPlay()"); }
	void EndPlay(const EEndPlayReason::Type EndPlayReason) { NativeCall<void, const EEndPlayReason::Type>(this, "AShooterGameState.EndPlay(EEndPlayReason::Type)", EndPlayReason); }
	float GetMatineePlayRate(AActor* forMatineeActor) { return NativeCall<float, AActor*>(this, "AShooterGameState.GetMatineePlayRate(AActor*)", forMatineeActor); }
	float GetDayCycleSpeed() { return NativeCall<float>(this, "AShooterGameState.GetDayCycleSpeed()"); }
	int GetStartTimeHour() { return NativeCall<int>(this, "AShooterGameState.GetStartTimeHour()"); }
	bool AllowDinoTame(APrimalDinoCharacter* DinoChar, AShooterPlayerController* ForPC) { return NativeCall<bool, APrimalDinoCharacter*, AShooterPlayerController*>(this, "AShooterGameState.AllowDinoTame(APrimalDinoCharacter*,AShooterPlayerController*)", DinoChar, ForPC); }
	bool AllowDinoClassTame(TSubclassOf<APrimalDinoCharacter> DinoCharClass, AShooterPlayerController* ForPC) { return NativeCall<bool, TSubclassOf<APrimalDinoCharacter>, AShooterPlayerController*>(this, "AShooterGameState.AllowDinoClassTame(TSubclassOf<APrimalDinoCharacter>,AShooterPlayerController*)", DinoCharClass, ForPC); }
	FString* GetSaveDirectoryName(FString* result, ESaveType::Type SaveType) { return NativeCall<FString*, FString*, ESaveType::Type>(this, "AShooterGameState.GetSaveDirectoryName(ESaveType::Type)", result, SaveType); }
	FString* GetDayTimeString(FString* result) { return NativeCall<FString*, FString*>(this, "AShooterGameState.GetDayTimeString()", result); }
	static APrimalBuff* BaseSpawnBuffAndAttachToCharacter(UClass* Buff, APrimalCharacter* PrimalCharacter, float ExperiencePoints) { return NativeCall<APrimalBuff*, UClass*, APrimalCharacter*, float>(nullptr, "AShooterGameState.BaseSpawnBuffAndAttachToCharacter(UClass*,APrimalCharacter*,float)", Buff, PrimalCharacter, ExperiencePoints); }
	void InitializedGameState() { NativeCall<void>(this, "AShooterGameState.InitializedGameState()"); }
	void SetTileUnstreamable(FName InTileName) { NativeCall<void, FName>(this, "AShooterGameState.SetTileUnstreamable(FName)", InTileName); }
	bool IsTeamIDInvincible(int TargetingTeamID, bool bInvincibleOnlyWhenOffline) { return NativeCall<bool, int, bool>(this, "AShooterGameState.IsTeamIDInvincible(int,bool)", TargetingTeamID, bInvincibleOnlyWhenOffline); }
	float GetOfflineDamagePreventionTime(int TargetingTeamID) { return NativeCall<float, int>(this, "AShooterGameState.GetOfflineDamagePreventionTime(int)", TargetingTeamID); }
	void NetUpdateOfflinePvPLiveTeams_Implementation(const TArray<int, TSizedDefaultAllocator<32> >* NewPreventOfflinePvPLiveTeams) { NativeCall<void, const TArray<int, TSizedDefaultAllocator<32> >*>(this, "AShooterGameState.NetUpdateOfflinePvPLiveTeams_Implementation(TArray<int,TSizedDefaultAllocator<32>>&)", NewPreventOfflinePvPLiveTeams); }
	void NetUpdateOfflinePvPExpiringTeams_Implementation(const TArray<int, TSizedDefaultAllocator<32> >* NewPreventOfflinePvPExpiringTeams, const TArray<float, TSizedDefaultAllocator<32> >* NewPreventOfflinePvPExpiringTimes) { NativeCall<void, const TArray<int, TSizedDefaultAllocator<32> >*, const TArray<float, TSizedDefaultAllocator<32> >*>(this, "AShooterGameState.NetUpdateOfflinePvPExpiringTeams_Implementation(TArray<int,TSizedDefaultAllocator<32>>&,TArray<float,TSizedDefaultAllocator<32>>&)", NewPreventOfflinePvPExpiringTeams, NewPreventOfflinePvPExpiringTimes); }
	void UpdatePreventOfflinePvPStatus() { NativeCall<void>(this, "AShooterGameState.UpdatePreventOfflinePvPStatus()"); }
	void AddFloatingText(UE::Math::TVector<double>* AtLocation, FString* FloatingTextString, FColor FloatingTextColor, float ScaleX, float ScaleY, float TextLifeSpan, UE::Math::TVector<double>* TextVelocity, float MinScale, float FadeInTime, float FadeOutTime) { NativeCall<void, UE::Math::TVector<double>*, FString*, FColor, float, float, float, UE::Math::TVector<double>*, float, float, float>(this, "AShooterGameState.AddFloatingText(UE::Math::TVector<double>,FString,FColor,float,float,float,UE::Math::TVector<double>,float,float,float)", AtLocation, FloatingTextString, FloatingTextColor, ScaleX, ScaleY, TextLifeSpan, TextVelocity, MinScale, FadeInTime, FadeOutTime); }
	void NetAddFloatingDamageText(UE::Math::TVector<double>* AtLocation, int DamageAmount, int FromTeamID, int OnlySendToTeamID) { NativeCall<void, UE::Math::TVector<double>*, int, int, int>(this, "AShooterGameState.NetAddFloatingDamageText(UE::Math::TVector<double>,int,int,int)", AtLocation, DamageAmount, FromTeamID, OnlySendToTeamID); }
	void NetAddFloatingText(UE::Math::TVector<double>* AtLocation, FString* FloatingTextString, FColor FloatingTextColor, float ScaleX, float ScaleY, float TextLifeSpan, UE::Math::TVector<double>* TextVelocity, float MinScale, float FadeInTime, float FadeOutTime, int OnlySendToTeamID) { NativeCall<void, UE::Math::TVector<double>*, FString*, FColor, float, float, float, UE::Math::TVector<double>*, float, float, float, int>(this, "AShooterGameState.NetAddFloatingText(UE::Math::TVector<double>,FString,FColor,float,float,float,UE::Math::TVector<double>,float,float,float,int)", AtLocation, FloatingTextString, FloatingTextColor, ScaleX, ScaleY, TextLifeSpan, TextVelocity, MinScale, FadeInTime, FadeOutTime, OnlySendToTeamID); }
	FString* GetCleanServerSessionName(FString* result) { return NativeCall<FString*, FString*>(this, "AShooterGameState.GetCleanServerSessionName()", result); }
	void ForceNetUpdate(bool bDormantDontReplicateProperties, bool bAbsoluteForceNetUpdate, bool bDontUpdateChannel) { NativeCall<void, bool, bool, bool>(this, "AShooterGameState.ForceNetUpdate(bool,bool,bool)", bDormantDontReplicateProperties, bAbsoluteForceNetUpdate, bDontUpdateChannel); }
	void WorldCompositionRescan() { NativeCall<void>(this, "AShooterGameState.WorldCompositionRescan()"); }
	void HTTPGetRequest(FString* InURL) { NativeCall<void, FString*>(this, "AShooterGameState.HTTPGetRequest(FString)", InURL); }
	//void HTTPGetRequestCompleted(TSharedPtr<IHttpRequest>* HttpRequest, TSharedPtr<IHttpResponse>* HttpResponse, bool bSucceeded) { NativeCall<void, TSharedPtr<IHttpRequest>*, TSharedPtr<IHttpResponse>*, bool>(this, "AShooterGameState.HTTPGetRequestCompleted(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool)", HttpRequest, HttpResponse, bSucceeded); }
	void HTTPPostRequest(FString InURL, FString Content) { NativeCall<void, FString, FString>(this, "AShooterGameState.HTTPPostRequest(FString,FString)", InURL, Content); }
	//void HTTPPostRequestCompleted(TSharedPtr<IHttpRequest>* HttpRequest, TSharedPtr<IHttpResponse>* HttpResponse, bool bSucceeded) { NativeCall<void, TSharedPtr<IHttpRequest>*, TSharedPtr<IHttpResponse>*, bool>(this, "AShooterGameState.HTTPPostRequestCompleted(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool)", HttpRequest, HttpResponse, bSucceeded); }
	TArray<FGameIniData, TSizedDefaultAllocator<32> >* GetIniArray(TArray<FGameIniData, TSizedDefaultAllocator<32> >* result, FString* SectionName) { return NativeCall<TArray<FGameIniData, TSizedDefaultAllocator<32> >*, TArray<FGameIniData, TSizedDefaultAllocator<32> >*, FString*>(this, "AShooterGameState.GetIniArray(FString)", result, SectionName); }
	bool IsUniqueDinoAlreadySpawned(const TSoftClassPtr<APrimalDinoCharacter>* UniqueDino) { return NativeCall<bool, const TSoftClassPtr<APrimalDinoCharacter>*>(this, "AShooterGameState.IsUniqueDinoAlreadySpawned(TSoftClassPtr<APrimalDinoCharacter>&)", UniqueDino); }
	bool AllowDownloadDino_Implementation(const TSoftClassPtr<APrimalDinoCharacter>* TheDinoClass) { return NativeCall<bool, const TSoftClassPtr<APrimalDinoCharacter>*>(this, "AShooterGameState.AllowDownloadDino_Implementation(TSoftClassPtr<APrimalDinoCharacter>&)", TheDinoClass); }
	void DinoDownloaded(TSubclassOf<APrimalDinoCharacter> TheDinoClass) { NativeCall<void, TSubclassOf<APrimalDinoCharacter>>(this, "AShooterGameState.DinoDownloaded(TSubclassOf<APrimalDinoCharacter>)", TheDinoClass); }
	bool IsEngramClassHidden(TSubclassOf<UPrimalItem> ForItemClass) { return NativeCall<bool, TSubclassOf<UPrimalItem>>(this, "AShooterGameState.IsEngramClassHidden(TSubclassOf<UPrimalItem>)", ForItemClass); }
	//void NetSpawnActorAtLocation(TSubclassOf<AActor> AnActorClass, FVector_NetQuantize* AtLocation, FRotator_NetQuantize* AtRotation, AActor* EffectOwnerToIgnore, float MaxRangeToReplicate, USceneComponent* attachToComponent, int dataIndex, FName attachSocketName, bool bOnlySendToEffectOwner) { NativeCall<void, TSubclassOf<AActor>, FVector_NetQuantize*, FRotator_NetQuantize*, AActor*, float, USceneComponent*, int, FName, bool>(this, "AShooterGameState.NetSpawnActorAtLocation(TSubclassOf<AActor>,FVector_NetQuantize,FRotator_NetQuantize,AActor*,float,USceneComponent*,int,FName,bool)", AnActorClass, AtLocation, AtRotation, EffectOwnerToIgnore, MaxRangeToReplicate, attachToComponent, dataIndex, attachSocketName, bOnlySendToEffectOwner); }
	void NetSpawnFoliageVFXActorAtLocationAndDoFoliageInteraction(TSubclassOf<AActor> AnActorClass, FVector_NetQuantize* AtLocation, FRotator_NetQuantize* AtRotation, AActor* EffectOwnerToIgnore, float MaxRangeToReplicate, USceneComponent* attachToComponent, int dataIndex, FName attachSocketName, bool bOnlySendToEffectOwner, bool IsSimpleFoliageInteraction, UE::Math::TVector<double>* FoliageOrigin_ImpactPoint, UE::Math::TVector<double>* TraceEndpoint) { NativeCall<void, TSubclassOf<AActor>, FVector_NetQuantize*, FRotator_NetQuantize*, AActor*, float, USceneComponent*, int, FName, bool, bool, UE::Math::TVector<double>*, UE::Math::TVector<double>*>(this, "AShooterGameState.NetSpawnFoliageVFXActorAtLocationAndDoFoliageInteraction(TSubclassOf<AActor>,FVector_NetQuantize,FRotator_NetQuantize,AActor*,float,USceneComponent*,int,FName,bool,bool,UE::Math::TVector<double>,UE::Math::TVector<double>)", AnActorClass, AtLocation, AtRotation, EffectOwnerToIgnore, MaxRangeToReplicate, attachToComponent, dataIndex, attachSocketName, bOnlySendToEffectOwner, IsSimpleFoliageInteraction, FoliageOrigin_ImpactPoint, TraceEndpoint); }
	void Multi_SpawnCosmeticActor_Implementation(TSubclassOf<AActor> SpawnActorOfClass, const UE::Math::TVector<double>* SpawnAtLocation, const UE::Math::TRotator<double>* SpawnWithRotation) { NativeCall<void, TSubclassOf<AActor>, const UE::Math::TVector<double>*, const UE::Math::TRotator<double>*>(this, "AShooterGameState.Multi_SpawnCosmeticActor_Implementation(TSubclassOf<AActor>,UE::Math::TVector<double>,UE::Math::TRotator<double>)", SpawnActorOfClass, SpawnAtLocation, SpawnWithRotation); }
	bool StartMassTeleport(FMassTeleportData* NewMassTeleportData, const FTeleportDestination* TeleportDestination, AActor* InitiatingActor, TArray<AActor*, TSizedDefaultAllocator<32> >* TeleportActors, TSubclassOf<APrimalBuff> BuffToApply, const float TeleportDuration, const float TeleportRadius, const bool bTeleportingSnapsToGround, const bool bMaintainRotation) { return NativeCall<bool, FMassTeleportData*, const FTeleportDestination*, AActor*, TArray<AActor*, TSizedDefaultAllocator<32> >*, TSubclassOf<APrimalBuff>, const float, const float, const bool, const bool>(this, "AShooterGameState.StartMassTeleport(FMassTeleportData&,FTeleportDestination&,AActor*,TArray<AActor*,TSizedDefaultAllocator<32>>,TSubclassOf<APrimalBuff>,float,float,bool,bool)", NewMassTeleportData, TeleportDestination, InitiatingActor, TeleportActors, BuffToApply, TeleportDuration, TeleportRadius, bTeleportingSnapsToGround, bMaintainRotation); }
	bool ShouldMassTeleportMoveActor(AActor* ForActor, const FMassTeleportData* WithMassTeleportData) { return NativeCall<bool, AActor*, const FMassTeleportData*>(this, "AShooterGameState.ShouldMassTeleportMoveActor(AActor*,FMassTeleportData&)", ForActor, WithMassTeleportData); }
	void Tick_MassTeleport(float DeltaTime) { NativeCall<void, float>(this, "AShooterGameState.Tick_MassTeleport(float)", DeltaTime); }
	void RemoveIrrelevantBiomeBuffs(APrimalCharacter* PrimalChar) { NativeCall<void, APrimalCharacter*>(this, "AShooterGameState.RemoveIrrelevantBiomeBuffs(APrimalCharacter*)", PrimalChar); }
	void PrepareActorForMassTeleport(AActor* PrepareActor, const FMassTeleportData* WithMassTeleportData) { NativeCall<void, AActor*, const FMassTeleportData*>(this, "AShooterGameState.PrepareActorForMassTeleport(AActor*,FMassTeleportData&)", PrepareActor, WithMassTeleportData); }
	void ApplyLiveTuningOverloads(TSharedPtr<FJsonObject>* Overloads) { NativeCall<void, TSharedPtr<FJsonObject>*>(this, "AShooterGameState.ApplyLiveTuningOverloads(TSharedPtr<FJsonObject,1>)", Overloads); }
	void ResetLiveTuningOverloads() { NativeCall<void>(this, "AShooterGameState.ResetLiveTuningOverloads()"); }
	static bool IsSupportedLiveTuningProperty(FProperty* Property, bool bIgnoreLiveTuningFlag) { return NativeCall<bool, FProperty*, bool>(nullptr, "AShooterGameState.IsSupportedLiveTuningProperty(FProperty*,bool)", Property, bIgnoreLiveTuningFlag); }
	void OnLevelsChanged() { NativeCall<void>(this, "AShooterGameState.OnLevelsChanged()"); }
	void QueueExplorerNoteForDeferredUnlock(int ExplorerNoteIndex) { NativeCall<void, int>(this, "AShooterGameState.QueueExplorerNoteForDeferredUnlock(int)", ExplorerNoteIndex); }
	void AddRelevantPOIActor(AActor* POI) { NativeCall<void, AActor*>(this, "AShooterGameState.AddRelevantPOIActor(AActor*)", POI); }
	void OnNewClassInitialized(UClass* ForClass) { NativeCall<void, UClass*>(this, "AShooterGameState.OnNewClassInitialized(UClass*)", ForClass); }
	static void ServerProcessDefaultPropertyValueUpdates(UShooterGameInstance* GameInstance) { NativeCall<void, UShooterGameInstance*>(nullptr, "AShooterGameState.ServerProcessDefaultPropertyValueUpdates(UShooterGameInstance*)", GameInstance); }
	static void ProcessAllCDOUpdates(UShooterGameInstance* GameInstance, const TArray<FNetChangeDefaultPropertyValue, TSizedDefaultAllocator<32> >* CDOPropertyValueUpdates) { NativeCall<void, UShooterGameInstance*, const TArray<FNetChangeDefaultPropertyValue, TSizedDefaultAllocator<32> >*>(nullptr, "AShooterGameState.ProcessAllCDOUpdates(UShooterGameInstance*,TArray<FNetChangeDefaultPropertyValue,TSizedDefaultAllocator<32>>&)", GameInstance, CDOPropertyValueUpdates); }
	static void ProcessCDOUpdateEntry(UShooterGameInstance* GameInstance, const FNetChangeDefaultPropertyValue* CDOPropertyValueUpdates, UClass* PostInitializedClass) { NativeCall<void, UShooterGameInstance*, const FNetChangeDefaultPropertyValue*, UClass*>(nullptr, "AShooterGameState.ProcessCDOUpdateEntry(UShooterGameInstance*,FNetChangeDefaultPropertyValue&,UClass*)", GameInstance, CDOPropertyValueUpdates, PostInitializedClass); }
	static bool ShouldProcessCDOPropertyAndClass(UClass* TheClass, FName PropertyName, TMap<UClass*, TMap<FString, FString, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<FString, FString, 0> >, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<UClass*, TMap<FString, FString, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<FString, FString, 0> >, 0> >* CDOBaselineValues, bool bDontApplyIfPropertyEdited, bool bIsPostInitializedClass, bool bIsChildClass) { return NativeCall<bool, UClass*, FName, TMap<UClass*, TMap<FString, FString, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<FString, FString, 0> >, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<UClass*, TMap<FString, FString, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<FString, FString, 0> >, 0> >*, bool, bool, bool>(nullptr, "AShooterGameState.ShouldProcessCDOPropertyAndClass(UClass*,FName,TMap<UClass*,TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass*,TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>>,0>>&,bool,bool,bool)", TheClass, PropertyName, CDOBaselineValues, bDontApplyIfPropertyEdited, bIsPostInitializedClass, bIsChildClass); }
	static char CDORemoveFromArray(UObject* DefaultObject, FName PropertyName, TArray<unsigned int, TSizedDefaultAllocator<32> >* IndexesToRemove) { return NativeCall<char, UObject*, FName, TArray<unsigned int, TSizedDefaultAllocator<32> >*>(nullptr, "AShooterGameState.CDORemoveFromArray(UObject*,FName,TArray<unsignedint,TSizedDefaultAllocator<32>>)", DefaultObject, PropertyName, IndexesToRemove); }
	static bool CDOSetValueForPropertyWrapper(FPropertyWrapper* PropertyWrapper, long double NewValue) { return NativeCall<bool, FPropertyWrapper*, long double>(nullptr, "AShooterGameState.CDOSetValueForPropertyWrapper(FPropertyWrapper&,double)", PropertyWrapper, NewValue); }
	static bool IsPropertyValueEqualToCachedParentValue(UClass* ForClass, FName PropertyName, TMap<UClass*, TMap<FString, FString, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<FString, FString, 0> >, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<UClass*, TMap<FString, FString, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<FString, FString, 0> >, 0> >* CDOBaselineValues) { return NativeCall<bool, UClass*, FName, TMap<UClass*, TMap<FString, FString, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<FString, FString, 0> >, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<UClass*, TMap<FString, FString, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<FString, FString, 0> >, 0> >*>(nullptr, "AShooterGameState.IsPropertyValueEqualToCachedParentValue(UClass*,FName,TMap<UClass*,TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass*,TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>>,0>>&)", ForClass, PropertyName, CDOBaselineValues); }
	static bool IsParentPropertyCached(UClass* ForClass, FName PropertyName, TMap<UClass*, TMap<FString, FString, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<FString, FString, 0> >, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<UClass*, TMap<FString, FString, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<FString, FString, 0> >, 0> >* CDOBaselineValues) { return NativeCall<bool, UClass*, FName, TMap<UClass*, TMap<FString, FString, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<FString, FString, 0> >, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<UClass*, TMap<FString, FString, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<FString, FString, 0> >, 0> >*>(nullptr, "AShooterGameState.IsParentPropertyCached(UClass*,FName,TMap<UClass*,TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass*,TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>>,0>>&)", ForClass, PropertyName, CDOBaselineValues); }
	static bool IsPropertyValueEqualToParentValue(UClass* ForClass, FName PropertyName) { return NativeCall<bool, UClass*, FName>(nullptr, "AShooterGameState.IsPropertyValueEqualToParentValue(UClass*,FName)", ForClass, PropertyName); }
	static bool CDOCacheBaselineValue(TMap<UClass*, TMap<FString, FString, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<FString, FString, 0> >, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<UClass*, TMap<FString, FString, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<FString, FString, 0> >, 0> >* CDOBaselineValues, FPropertyWrapper* prop) { return NativeCall<bool, TMap<UClass*, TMap<FString, FString, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<FString, FString, 0> >, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<UClass*, TMap<FString, FString, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<FString, FString, 0> >, 0> >*, FPropertyWrapper*>(nullptr, "AShooterGameState.CDOCacheBaselineValue(TMap<UClass*,TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass*,TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>>,0>>&,FPropertyWrapper&)", CDOBaselineValues, prop); }
	static void RemoveCDOCachedBaselineValue(TMap<UClass*, TMap<FString, FString, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<FString, FString, 0> >, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<UClass*, TMap<FString, FString, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<FString, FString, 0> >, 0> >* CDOBaselineValues, FPropertyWrapper* prop) { NativeCall<void, TMap<UClass*, TMap<FString, FString, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<FString, FString, 0> >, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<UClass*, TMap<FString, FString, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<FString, FString, 0> >, 0> >*, FPropertyWrapper*>(nullptr, "AShooterGameState.RemoveCDOCachedBaselineValue(TMap<UClass*,TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass*,TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>>,0>>&,FPropertyWrapper&)", CDOBaselineValues, prop); }
	static void ResetCDOProperties(TMap<UClass*, TMap<FString, FString, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<FString, FString, 0> >, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<UClass*, TMap<FString, FString, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<FString, FString, 0> >, 0> >* CDOBaselineValues, bool bHasAppliedCDOUpdates, bool bForceReset) { NativeCall<void, TMap<UClass*, TMap<FString, FString, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<FString, FString, 0> >, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<UClass*, TMap<FString, FString, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<FString, FString, 0> >, 0> >*, bool, bool>(nullptr, "AShooterGameState.ResetCDOProperties(TMap<UClass*,TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass*,TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>>,0>>&,bool,bool)", CDOBaselineValues, bHasAppliedCDOUpdates, bForceReset); }
	static void PrintCDODebug(APrimalCharacter* ReferenceChar, FCDODebugData* CDODebugData) { NativeCall<void, APrimalCharacter*, FCDODebugData*>(nullptr, "AShooterGameState.PrintCDODebug(APrimalCharacter*,FCDODebugData&)", ReferenceChar, CDODebugData); }
	static bool CDOGetPrintStringForObjectProperties(UObject* TheObject, TArray<FName, TSizedDefaultAllocator<32> >* PropertyNames, FString* OutString) { return NativeCall<bool, UObject*, TArray<FName, TSizedDefaultAllocator<32> >*, FString*>(nullptr, "AShooterGameState.CDOGetPrintStringForObjectProperties(UObject*,TArray<FName,TSizedDefaultAllocator<32>>&,FString&)", TheObject, PropertyNames, OutString); }
	static bool CDOGetPrintStringForObjectProperty(UObject* TheObject, FName PropertyName, FString* OutString) { return NativeCall<bool, UObject*, FName, FString*>(nullptr, "AShooterGameState.CDOGetPrintStringForObjectProperty(UObject*,FName,FString&)", TheObject, PropertyName, OutString); }
	void Tick_WorldPartition(float DeltaTime) { NativeCall<void, float>(this, "AShooterGameState.Tick_WorldPartition(float)", DeltaTime); }
	//static void CDOUpdateSingleValueForClassAndChildren<bool>(UClass* TheClass, FName PropertyName, bool NewVal, TMap<UClass*, TMap<FString, FString, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<FString, FString, 0> >, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<UClass*, TMap<FString, FString, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<FString, FString, 0> >, 0> >* CDOBaselineValues, bool bApplyToChildren, bool bDontApplyIfPropertyEdited, bool bIsPostInitializedClass, bool bIsChildClass) { NativeCall<void, UClass*, FName, bool, TMap<UClass*, TMap<FString, FString, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<FString, FString, 0> >, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<UClass*, TMap<FString, FString, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<FString, FString, 0> >, 0> >*, bool, bool, bool, bool>(nullptr, "AShooterGameState.CDOUpdateSingleValueForClassAndChildren<bool>(UClass*,FName,bool,TMap<UClass*,TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass*,TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>>,0>>&,bool,bool,bool,bool)", TheClass, PropertyName, NewVal, CDOBaselineValues, bApplyToChildren, bDontApplyIfPropertyEdited, bIsPostInitializedClass, bIsChildClass); }
	//static void CDOProcessTArrayForClassAndChildren<bool>(UClass* TheClass, FName PropertyName, TEnumAsByte<ECDOArrayModificationType> ArrayOperation, const TArray<unsigned int, TSizedDefaultAllocator<32> >* IndexesToModify, const TArray<unsigned int, TSizedDefaultAllocator<32> >* IndexesToRemove, const TArray<bool, TSizedDefaultAllocator<32> >* Values, TMap<UClass*, TMap<FString, FString, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<FString, FString, 0> >, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<UClass*, TMap<FString, FString, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<FString, FString, 0> >, 0> >* CDOBaselineValues, bool bApplyToChildren, bool bDontApplyIfPropertyEdited, bool bIsPostInitializedClass, bool bIsChildClass) { NativeCall<void, UClass*, FName, TEnumAsByte<ECDOArrayModificationType>, const TArray<unsigned int, TSizedDefaultAllocator<32> >*, const TArray<unsigned int, TSizedDefaultAllocator<32> >*, const TArray<bool, TSizedDefaultAllocator<32> >*, TMap<UClass*, TMap<FString, FString, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<FString, FString, 0> >, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<UClass*, TMap<FString, FString, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<FString, FString, 0> >, 0> >*, bool, bool, bool, bool>(nullptr, "AShooterGameState.CDOProcessTArrayForClassAndChildren<bool>(UClass*,FName,TEnumAsByte<ECDOArrayModificationType>,TArray<unsignedint,TSizedDefaultAllocator<32>>&,TArray<unsignedint,TSizedDefaultAllocator<32>>&,TArray<bool,TSizedDefaultAllocator<32>>&,TMap<UClass*,TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass*,TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>>,0>>&,bool,bool,bool,bool)", TheClass, PropertyName, ArrayOperation, IndexesToModify, IndexesToRemove, Values, CDOBaselineValues, bApplyToChildren, bDontApplyIfPropertyEdited, bIsPostInitializedClass, bIsChildClass); }
	//static void CDOUpdateSingleValueForClassAndChildren<int>(UClass* TheClass, FName PropertyName, int NewVal, TMap<UClass*, TMap<FString, FString, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<FString, FString, 0> >, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<UClass*, TMap<FString, FString, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<FString, FString, 0> >, 0> >* CDOBaselineValues, bool bApplyToChildren, bool bDontApplyIfPropertyEdited, bool bIsPostInitializedClass, bool bIsChildClass) { NativeCall<void, UClass*, FName, int, TMap<UClass*, TMap<FString, FString, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<FString, FString, 0> >, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<UClass*, TMap<FString, FString, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<FString, FString, 0> >, 0> >*, bool, bool, bool, bool>(nullptr, "AShooterGameState.CDOUpdateSingleValueForClassAndChildren<int>(UClass*,FName,int,TMap<UClass*,TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass*,TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>>,0>>&,bool,bool,bool,bool)", TheClass, PropertyName, NewVal, CDOBaselineValues, bApplyToChildren, bDontApplyIfPropertyEdited, bIsPostInitializedClass, bIsChildClass); }
	//static void CDOProcessTArrayForClassAndChildren<int>(UClass* TheClass, FName PropertyName, TEnumAsByte<ECDOArrayModificationType> ArrayOperation, const TArray<unsigned int, TSizedDefaultAllocator<32> >* IndexesToModify, const TArray<unsigned int, TSizedDefaultAllocator<32> >* IndexesToRemove, const TArray<int, TSizedDefaultAllocator<32> >* Values, TMap<UClass*, TMap<FString, FString, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<FString, FString, 0> >, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<UClass*, TMap<FString, FString, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<FString, FString, 0> >, 0> >* CDOBaselineValues, bool bApplyToChildren, bool bDontApplyIfPropertyEdited, bool bIsPostInitializedClass, bool bIsChildClass) { NativeCall<void, UClass*, FName, TEnumAsByte<ECDOArrayModificationType>, const TArray<unsigned int, TSizedDefaultAllocator<32> >*, const TArray<unsigned int, TSizedDefaultAllocator<32> >*, const TArray<int, TSizedDefaultAllocator<32> >*, TMap<UClass*, TMap<FString, FString, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<FString, FString, 0> >, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<UClass*, TMap<FString, FString, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<FString, FString, 0> >, 0> >*, bool, bool, bool, bool>(nullptr, "AShooterGameState.CDOProcessTArrayForClassAndChildren<int>(UClass*,FName,TEnumAsByte<ECDOArrayModificationType>,TArray<unsignedint,TSizedDefaultAllocator<32>>&,TArray<unsignedint,TSizedDefaultAllocator<32>>&,TArray<int,TSizedDefaultAllocator<32>>&,TMap<UClass*,TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass*,TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>>,0>>&,bool,bool,bool,bool)", TheClass, PropertyName, ArrayOperation, IndexesToModify, IndexesToRemove, Values, CDOBaselineValues, bApplyToChildren, bDontApplyIfPropertyEdited, bIsPostInitializedClass, bIsChildClass); }
	//static void CDOUpdateSingleValueForClassAndChildren<float>(UClass* TheClass, FName PropertyName, float NewVal, TMap<UClass*, TMap<FString, FString, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<FString, FString, 0> >, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<UClass*, TMap<FString, FString, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<FString, FString, 0> >, 0> >* CDOBaselineValues, bool bApplyToChildren, bool bDontApplyIfPropertyEdited, bool bIsPostInitializedClass, bool bIsChildClass) { NativeCall<void, UClass*, FName, float, TMap<UClass*, TMap<FString, FString, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<FString, FString, 0> >, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<UClass*, TMap<FString, FString, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<FString, FString, 0> >, 0> >*, bool, bool, bool, bool>(nullptr, "AShooterGameState.CDOUpdateSingleValueForClassAndChildren<float>(UClass*,FName,float,TMap<UClass*,TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass*,TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>>,0>>&,bool,bool,bool,bool)", TheClass, PropertyName, NewVal, CDOBaselineValues, bApplyToChildren, bDontApplyIfPropertyEdited, bIsPostInitializedClass, bIsChildClass); }
	//static void CDOProcessTArrayForClassAndChildren<float>(UClass* TheClass, FName PropertyName, TEnumAsByte<ECDOArrayModificationType> ArrayOperation, const TArray<unsigned int, TSizedDefaultAllocator<32> >* IndexesToModify, const TArray<unsigned int, TSizedDefaultAllocator<32> >* IndexesToRemove, const TArray<float, TSizedDefaultAllocator<32> >* Values, TMap<UClass*, TMap<FString, FString, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<FString, FString, 0> >, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<UClass*, TMap<FString, FString, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<FString, FString, 0> >, 0> >* CDOBaselineValues, bool bApplyToChildren, bool bDontApplyIfPropertyEdited, bool bIsPostInitializedClass, bool bIsChildClass) { NativeCall<void, UClass*, FName, TEnumAsByte<ECDOArrayModificationType>, const TArray<unsigned int, TSizedDefaultAllocator<32> >*, const TArray<unsigned int, TSizedDefaultAllocator<32> >*, const TArray<float, TSizedDefaultAllocator<32> >*, TMap<UClass*, TMap<FString, FString, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<FString, FString, 0> >, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<UClass*, TMap<FString, FString, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<FString, FString, 0> >, 0> >*, bool, bool, bool, bool>(nullptr, "AShooterGameState.CDOProcessTArrayForClassAndChildren<float>(UClass*,FName,TEnumAsByte<ECDOArrayModificationType>,TArray<unsignedint,TSizedDefaultAllocator<32>>&,TArray<unsignedint,TSizedDefaultAllocator<32>>&,TArray<float,TSizedDefaultAllocator<32>>&,TMap<UClass*,TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass*,TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>>,0>>&,bool,bool,bool,bool)", TheClass, PropertyName, ArrayOperation, IndexesToModify, IndexesToRemove, Values, CDOBaselineValues, bApplyToChildren, bDontApplyIfPropertyEdited, bIsPostInitializedClass, bIsChildClass); }
	//static void CDOUpdateSingleValueForClassAndChildren<double>(UClass* TheClass, FName PropertyName, long double NewVal, TMap<UClass*, TMap<FString, FString, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<FString, FString, 0> >, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<UClass*, TMap<FString, FString, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<FString, FString, 0> >, 0> >* CDOBaselineValues, bool bApplyToChildren, bool bDontApplyIfPropertyEdited, bool bIsPostInitializedClass, bool bIsChildClass) { NativeCall<void, UClass*, FName, long double, TMap<UClass*, TMap<FString, FString, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<FString, FString, 0> >, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<UClass*, TMap<FString, FString, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<FString, FString, 0> >, 0> >*, bool, bool, bool, bool>(nullptr, "AShooterGameState.CDOUpdateSingleValueForClassAndChildren<double>(UClass*,FName,double,TMap<UClass*,TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass*,TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>>,0>>&,bool,bool,bool,bool)", TheClass, PropertyName, NewVal, CDOBaselineValues, bApplyToChildren, bDontApplyIfPropertyEdited, bIsPostInitializedClass, bIsChildClass); }
	//static void CDOProcessTArrayForClassAndChildren<double>(UClass* TheClass, FName PropertyName, TEnumAsByte<ECDOArrayModificationType> ArrayOperation, const TArray<unsigned int, TSizedDefaultAllocator<32> >* IndexesToModify, const TArray<unsigned int, TSizedDefaultAllocator<32> >* IndexesToRemove, const TArray<double, TSizedDefaultAllocator<32> >* Values, TMap<UClass*, TMap<FString, FString, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<FString, FString, 0> >, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<UClass*, TMap<FString, FString, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<FString, FString, 0> >, 0> >* CDOBaselineValues, bool bApplyToChildren, bool bDontApplyIfPropertyEdited, bool bIsPostInitializedClass, bool bIsChildClass) { NativeCall<void, UClass*, FName, TEnumAsByte<ECDOArrayModificationType>, const TArray<unsigned int, TSizedDefaultAllocator<32> >*, const TArray<unsigned int, TSizedDefaultAllocator<32> >*, const TArray<double, TSizedDefaultAllocator<32> >*, TMap<UClass*, TMap<FString, FString, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<FString, FString, 0> >, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<UClass*, TMap<FString, FString, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<FString, FString, 0> >, 0> >*, bool, bool, bool, bool>(nullptr, "AShooterGameState.CDOProcessTArrayForClassAndChildren<double>(UClass*,FName,TEnumAsByte<ECDOArrayModificationType>,TArray<unsignedint,TSizedDefaultAllocator<32>>&,TArray<unsignedint,TSizedDefaultAllocator<32>>&,TArray<double,TSizedDefaultAllocator<32>>&,TMap<UClass*,TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass*,TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>>,0>>&,bool,bool,bool,bool)", TheClass, PropertyName, ArrayOperation, IndexesToModify, IndexesToRemove, Values, CDOBaselineValues, bApplyToChildren, bDontApplyIfPropertyEdited, bIsPostInitializedClass, bIsChildClass); }
	//static void CDOUpdateSingleValueForClassAndChildren<class FString>(UClass* TheClass, FName PropertyName, FString* NewVal, TMap<UClass*, TMap<FString, FString, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<FString, FString, 0> >, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<UClass*, TMap<FString, FString, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<FString, FString, 0> >, 0> >* CDOBaselineValues, bool bApplyToChildren, bool bDontApplyIfPropertyEdited, bool bIsPostInitializedClass, bool bIsChildClass) { NativeCall<void, UClass*, FName, FString*, TMap<UClass*, TMap<FString, FString, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<FString, FString, 0> >, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<UClass*, TMap<FString, FString, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<FString, FString, 0> >, 0> >*, bool, bool, bool, bool>(nullptr, "AShooterGameState.CDOUpdateSingleValueForClassAndChildren<class FString>(UClass*,FName,FString&,TMap<UClass*,TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass*,TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>>,0>>&,bool,bool,bool,bool)", TheClass, PropertyName, NewVal, CDOBaselineValues, bApplyToChildren, bDontApplyIfPropertyEdited, bIsPostInitializedClass, bIsChildClass); }
	//static void CDOProcessTArrayForClassAndChildren<class FString>(UClass* TheClass, FName PropertyName, TEnumAsByte<ECDOArrayModificationType> ArrayOperation, const TArray<unsigned int, TSizedDefaultAllocator<32> >* IndexesToModify, const TArray<unsigned int, TSizedDefaultAllocator<32> >* IndexesToRemove, const TArray<FString, TSizedDefaultAllocator<32> >* Values, TMap<UClass*, TMap<FString, FString, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<FString, FString, 0> >, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<UClass*, TMap<FString, FString, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<FString, FString, 0> >, 0> >* CDOBaselineValues, bool bApplyToChildren, bool bDontApplyIfPropertyEdited, bool bIsPostInitializedClass, bool bIsChildClass) { NativeCall<void, UClass*, FName, TEnumAsByte<ECDOArrayModificationType>, const TArray<unsigned int, TSizedDefaultAllocator<32> >*, const TArray<unsigned int, TSizedDefaultAllocator<32> >*, const TArray<FString, TSizedDefaultAllocator<32> >*, TMap<UClass*, TMap<FString, FString, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<FString, FString, 0> >, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<UClass*, TMap<FString, FString, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<FString, FString, 0> >, 0> >*, bool, bool, bool, bool>(nullptr, "AShooterGameState.CDOProcessTArrayForClassAndChildren<class FString>(UClass*,FName,TEnumAsByte<ECDOArrayModificationType>,TArray<unsignedint,TSizedDefaultAllocator<32>>&,TArray<unsignedint,TSizedDefaultAllocator<32>>&,TArray<FString,TSizedDefaultAllocator<32>>&,TMap<UClass*,TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass*,TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>>,0>>&,bool,bool,bool,bool)", TheClass, PropertyName, ArrayOperation, IndexesToModify, IndexesToRemove, Values, CDOBaselineValues, bApplyToChildren, bDontApplyIfPropertyEdited, bIsPostInitializedClass, bIsChildClass); }
	//static void TVector<double >> (UClass* TheClass, FName PropertyName, UE::Math::TVector<double>* NewVal, TMap<UClass*, TMap<FString, FString, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<FString, FString, 0> >, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<UClass*, TMap<FString, FString, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<FString, FString, 0> >, 0> >* CDOBaselineValues, bool bApplyToChildren, bool bDontApplyIfPropertyEdited, bool bIsPostInitializedClass, bool bIsChildClass) { NativeCall<void, UClass*, FName, UE::Math::TVector<double>*, TMap<UClass*, TMap<FString, FString, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<FString, FString, 0> >, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<UClass*, TMap<FString, FString, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<FString, FString, 0> >, 0> >*, bool, bool, bool, bool>(nullptr, "AShooterGameState.TVector<double>>(UClass*,FName,UE::Math::TVector<double>&,TMap<UClass*,TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass*,TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>>,0>>&,bool,bool,bool,bool)", TheClass, PropertyName, NewVal, CDOBaselineValues, bApplyToChildren, bDontApplyIfPropertyEdited, bIsPostInitializedClass, bIsChildClass); }
	//static void TVector<double >> (UClass* TheClass, FName PropertyName, TEnumAsByte<ECDOArrayModificationType> ArrayOperation, const TArray<unsigned int, TSizedDefaultAllocator<32> >* IndexesToModify, const TArray<unsigned int, TSizedDefaultAllocator<32> >* IndexesToRemove, const TArray<UE::Math::TVector<double>, TSizedDefaultAllocator<32> >* Values, TMap<UClass*, TMap<FString, FString, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<FString, FString, 0> >, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<UClass*, TMap<FString, FString, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<FString, FString, 0> >, 0> >* CDOBaselineValues, bool bApplyToChildren, bool bDontApplyIfPropertyEdited, bool bIsPostInitializedClass, bool bIsChildClass) { NativeCall<void, UClass*, FName, TEnumAsByte<ECDOArrayModificationType>, const TArray<unsigned int, TSizedDefaultAllocator<32> >*, const TArray<unsigned int, TSizedDefaultAllocator<32> >*, const TArray<UE::Math::TVector<double>, TSizedDefaultAllocator<32> >*, TMap<UClass*, TMap<FString, FString, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<FString, FString, 0> >, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<UClass*, TMap<FString, FString, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<FString, FString, 0> >, 0> >*, bool, bool, bool, bool>(nullptr, "AShooterGameState.TVector<double>>(UClass*,FName,TEnumAsByte<ECDOArrayModificationType>,TArray<unsignedint,TSizedDefaultAllocator<32>>&,TArray<unsignedint,TSizedDefaultAllocator<32>>&,TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>>&,TMap<UClass*,TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass*,TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>>,0>>&,bool,bool,bool,bool)", TheClass, PropertyName, ArrayOperation, IndexesToModify, IndexesToRemove, Values, CDOBaselineValues, bApplyToChildren, bDontApplyIfPropertyEdited, bIsPostInitializedClass, bIsChildClass); }
	//static void TRotator<double >> (UClass* TheClass, FName PropertyName, UE::Math::TRotator<double>* NewVal, TMap<UClass*, TMap<FString, FString, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<FString, FString, 0> >, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<UClass*, TMap<FString, FString, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<FString, FString, 0> >, 0> >* CDOBaselineValues, bool bApplyToChildren, bool bDontApplyIfPropertyEdited, bool bIsPostInitializedClass, bool bIsChildClass) { NativeCall<void, UClass*, FName, UE::Math::TRotator<double>*, TMap<UClass*, TMap<FString, FString, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<FString, FString, 0> >, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<UClass*, TMap<FString, FString, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<FString, FString, 0> >, 0> >*, bool, bool, bool, bool>(nullptr, "AShooterGameState.TRotator<double>>(UClass*,FName,UE::Math::TRotator<double>&,TMap<UClass*,TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass*,TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>>,0>>&,bool,bool,bool,bool)", TheClass, PropertyName, NewVal, CDOBaselineValues, bApplyToChildren, bDontApplyIfPropertyEdited, bIsPostInitializedClass, bIsChildClass); }
	//static bool CDOAddToArray<bool>(UObject* DefaultObject, FName PropertyName, const TArray<bool, TSizedDefaultAllocator<32> >* ElementsToAdd) { return NativeCall<bool, UObject*, FName, const TArray<bool, TSizedDefaultAllocator<32> >*>(nullptr, "AShooterGameState.CDOAddToArray<bool>(UObject*,FName,TArray<bool,TSizedDefaultAllocator<32>>&)", DefaultObject, PropertyName, ElementsToAdd); }
	//static bool CDOModifyArray<bool>(UObject* DefaultObject, FName PropertyName, const TArray<unsigned int, TSizedDefaultAllocator<32> >* IndexesToModify, const TArray<bool, TSizedDefaultAllocator<32> >* NewValues) { return NativeCall<bool, UObject*, FName, const TArray<unsigned int, TSizedDefaultAllocator<32> >*, const TArray<bool, TSizedDefaultAllocator<32> >*>(nullptr, "AShooterGameState.CDOModifyArray<bool>(UObject*,FName,TArray<unsignedint,TSizedDefaultAllocator<32>>&,TArray<bool,TSizedDefaultAllocator<32>>&)", DefaultObject, PropertyName, IndexesToModify, NewValues); }
	//static bool TVector<double >> (UObject* DefaultObject, FName PropertyName, const TArray<bool, TSizedDefaultAllocator<32> >* NewArray) { return NativeCall<bool, UObject*, FName, const TArray<bool, TSizedDefaultAllocator<32> >*>(nullptr, "AShooterGameState.TVector<double>>(UObject*,FName,TArray<bool,TSizedDefaultAllocator<32>>&)", DefaultObject, PropertyName, NewArray); }
	//static bool CDOAddToArray<int>(UObject* DefaultObject, FName PropertyName, const TArray<int, TSizedDefaultAllocator<32> >* ElementsToAdd) { return NativeCall<bool, UObject*, FName, const TArray<int, TSizedDefaultAllocator<32> >*>(nullptr, "AShooterGameState.CDOAddToArray<int>(UObject*,FName,TArray<int,TSizedDefaultAllocator<32>>&)", DefaultObject, PropertyName, ElementsToAdd); }
	//static bool CDOModifyArray<int>(UObject* DefaultObject, FName PropertyName, const TArray<unsigned int, TSizedDefaultAllocator<32> >* IndexesToModify, const TArray<int, TSizedDefaultAllocator<32> >* NewValues) { return NativeCall<bool, UObject*, FName, const TArray<unsigned int, TSizedDefaultAllocator<32> >*, const TArray<int, TSizedDefaultAllocator<32> >*>(nullptr, "AShooterGameState.CDOModifyArray<int>(UObject*,FName,TArray<unsignedint,TSizedDefaultAllocator<32>>&,TArray<int,TSizedDefaultAllocator<32>>&)", DefaultObject, PropertyName, IndexesToModify, NewValues); }
	//static bool CDOAddToArray<float>(UObject* DefaultObject, FName PropertyName, const TArray<float, TSizedDefaultAllocator<32> >* ElementsToAdd) { return NativeCall<bool, UObject*, FName, const TArray<float, TSizedDefaultAllocator<32> >*>(nullptr, "AShooterGameState.CDOAddToArray<float>(UObject*,FName,TArray<float,TSizedDefaultAllocator<32>>&)", DefaultObject, PropertyName, ElementsToAdd); }
	//static bool CDOModifyArray<float>(UObject* DefaultObject, FName PropertyName, const TArray<unsigned int, TSizedDefaultAllocator<32> >* IndexesToModify, const TArray<float, TSizedDefaultAllocator<32> >* NewValues) { return NativeCall<bool, UObject*, FName, const TArray<unsigned int, TSizedDefaultAllocator<32> >*, const TArray<float, TSizedDefaultAllocator<32> >*>(nullptr, "AShooterGameState.CDOModifyArray<float>(UObject*,FName,TArray<unsignedint,TSizedDefaultAllocator<32>>&,TArray<float,TSizedDefaultAllocator<32>>&)", DefaultObject, PropertyName, IndexesToModify, NewValues); }
	//static bool CDOAddToArray<double>(UObject* DefaultObject, FName PropertyName, const TArray<double, TSizedDefaultAllocator<32> >* ElementsToAdd) { return NativeCall<bool, UObject*, FName, const TArray<double, TSizedDefaultAllocator<32> >*>(nullptr, "AShooterGameState.CDOAddToArray<double>(UObject*,FName,TArray<double,TSizedDefaultAllocator<32>>&)", DefaultObject, PropertyName, ElementsToAdd); }
	//static bool CDOModifyArray<double>(UObject* DefaultObject, FName PropertyName, const TArray<unsigned int, TSizedDefaultAllocator<32> >* IndexesToModify, const TArray<double, TSizedDefaultAllocator<32> >* NewValues) { return NativeCall<bool, UObject*, FName, const TArray<unsigned int, TSizedDefaultAllocator<32> >*, const TArray<double, TSizedDefaultAllocator<32> >*>(nullptr, "AShooterGameState.CDOModifyArray<double>(UObject*,FName,TArray<unsignedint,TSizedDefaultAllocator<32>>&,TArray<double,TSizedDefaultAllocator<32>>&)", DefaultObject, PropertyName, IndexesToModify, NewValues); }
	//static bool CDOAddToArray<class FString>(UObject* DefaultObject, FName PropertyName, const TArray<FString, TSizedDefaultAllocator<32> >* ElementsToAdd) { return NativeCall<bool, UObject*, FName, const TArray<FString, TSizedDefaultAllocator<32> >*>(nullptr, "AShooterGameState.CDOAddToArray<class FString>(UObject*,FName,TArray<FString,TSizedDefaultAllocator<32>>&)", DefaultObject, PropertyName, ElementsToAdd); }
	//static bool CDOModifyArray<class FString>(UObject* DefaultObject, FName PropertyName, const TArray<unsigned int, TSizedDefaultAllocator<32> >* IndexesToModify, const TArray<FString, TSizedDefaultAllocator<32> >* NewValues) { return NativeCall<bool, UObject*, FName, const TArray<unsigned int, TSizedDefaultAllocator<32> >*, const TArray<FString, TSizedDefaultAllocator<32> >*>(nullptr, "AShooterGameState.CDOModifyArray<class FString>(UObject*,FName,TArray<unsignedint,TSizedDefaultAllocator<32>>&,TArray<FString,TSizedDefaultAllocator<32>>&)", DefaultObject, PropertyName, IndexesToModify, NewValues); }
	//static bool TVector<double >> (UObject* DefaultObject, FName PropertyName, const TArray<UE::Math::TVector<double>, TSizedDefaultAllocator<32> >* ElementsToAdd) { return NativeCall<bool, UObject*, FName, const TArray<UE::Math::TVector<double>, TSizedDefaultAllocator<32> >*>(nullptr, "AShooterGameState.TVector<double>>(UObject*,FName,TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>>&)", DefaultObject, PropertyName, ElementsToAdd); }
	//static bool TVector<double >> (UObject* DefaultObject, FName PropertyName, const TArray<unsigned int, TSizedDefaultAllocator<32> >* IndexesToModify, const TArray<UE::Math::TVector<double>, TSizedDefaultAllocator<32> >* NewValues) { return NativeCall<bool, UObject*, FName, const TArray<unsigned int, TSizedDefaultAllocator<32> >*, const TArray<UE::Math::TVector<double>, TSizedDefaultAllocator<32> >*>(nullptr, "AShooterGameState.TVector<double>>(UObject*,FName,TArray<unsignedint,TSizedDefaultAllocator<32>>&,TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>>&)", DefaultObject, PropertyName, IndexesToModify, NewValues); }
};


struct UPrimalWorld : UObject
{
	// Fields

	int& FrameCounterField() { return *GetNativePointerField<int*>(this, "UPrimalWorld.FrameCounter"); }
	int& DinosDestroyedThisFrameField() { return *GetNativePointerField<int*>(this, "UPrimalWorld.DinosDestroyedThisFrame"); }
	FString& CurrentDayTimeField() { return *GetNativePointerField<FString*>(this, "UPrimalWorld.CurrentDayTime"); }
	//TOctree2<UPrimitiveComponent*, FInternalPrimitiveOctreeSemantics>*& InternalPrimitiveOctreeField() { return *GetNativePointerField<TOctree2<UPrimitiveComponent*, FInternalPrimitiveOctreeSemantics>**>(this, "UPrimalWorld.InternalPrimitiveOctree"); }
	//TOctree2<UPrimitiveComponent*, FInternalPrimitiveOctreeSemantics>* [18] & InternalSpecializedPrimitiveOctreeField() { return *GetNativePointerField<TOctree2<UPrimitiveComponent*, FInternalPrimitiveOctreeSemantics>* [18] *>(this, "UPrimalWorld.InternalSpecializedPrimitiveOctree"); }
	//TOctree2<UActorComponent*, FInternalActorCompOctreeSemantics>*& InternalActorComponentOctreeField() { return *GetNativePointerField<TOctree2<UActorComponent*, FInternalActorCompOctreeSemantics>**>(this, "UPrimalWorld.InternalActorComponentOctree"); }
	//TOctree2<FOctreeElementSimple*, FInternalSimpleOctreeSemantics>*& InternalSimpleOctreeField() { return *GetNativePointerField<TOctree2<FOctreeElementSimple*, FInternalSimpleOctreeSemantics>**>(this, "UPrimalWorld.InternalSimpleOctree"); }
	long double& LoadedAtTimeSecondsField() { return *GetNativePointerField<long double*>(this, "UPrimalWorld.LoadedAtTimeSeconds"); }
	long double& LoadedAtPersistentTimeField() { return *GetNativePointerField<long double*>(this, "UPrimalWorld.LoadedAtPersistentTime"); }
	long double& PersistentTimeField() { return *GetNativePointerField<long double*>(this, "UPrimalWorld.PersistentTime"); }
	long double& ForceBlockLoadTimeoutField() { return *GetNativePointerField<long double*>(this, "UPrimalWorld.ForceBlockLoadTimeout"); }
	unsigned int& StasisThisFrameField() { return *GetNativePointerField<unsigned int*>(this, "UPrimalWorld.StasisThisFrame"); }
	unsigned int& UnStasisThisFrameField() { return *GetNativePointerField<unsigned int*>(this, "UPrimalWorld.UnStasisThisFrame"); }
	unsigned int& StasisOssilationThisFrameField() { return *GetNativePointerField<unsigned int*>(this, "UPrimalWorld.StasisOssilationThisFrame"); }
	unsigned int& StasisThisFrameMaxField() { return *GetNativePointerField<unsigned int*>(this, "UPrimalWorld.StasisThisFrameMax"); }
	unsigned int& UnStasisThisFrameMaxField() { return *GetNativePointerField<unsigned int*>(this, "UPrimalWorld.UnStasisThisFrameMax"); }
	unsigned int& StasisOssilationThisFrameMaxField() { return *GetNativePointerField<unsigned int*>(this, "UPrimalWorld.StasisOssilationThisFrameMax"); }
	float& StasisThisFrameAvgField() { return *GetNativePointerField<float*>(this, "UPrimalWorld.StasisThisFrameAvg"); }
	float& UnStasisThisFrameAvgField() { return *GetNativePointerField<float*>(this, "UPrimalWorld.UnStasisThisFrameAvg"); }
	float& StasisOssilationThisFrameAvgField() { return *GetNativePointerField<float*>(this, "UPrimalWorld.StasisOssilationThisFrameAvg"); }
	float& StasisMaxResetTimerField() { return *GetNativePointerField<float*>(this, "UPrimalWorld.StasisMaxResetTimer"); }
	unsigned int& LastUnstasisCountField() { return *GetNativePointerField<unsigned int*>(this, "UPrimalWorld.LastUnstasisCount"); }
	unsigned int& LoadedSaveIncrementorField() { return *GetNativePointerField<unsigned int*>(this, "UPrimalWorld.LoadedSaveIncrementor"); }
	unsigned int& CurrentSaveIncrementorField() { return *GetNativePointerField<unsigned int*>(this, "UPrimalWorld.CurrentSaveIncrementor"); }
	TArray<TWeakObjectPtr<AActor>, TSizedDefaultAllocator<32> >& LocalStasisActorsField() { return *GetNativePointerField<TArray<TWeakObjectPtr<AActor>, TSizedDefaultAllocator<32> >*>(this, "UPrimalWorld.LocalStasisActors"); }
	long double& IgnoreForcedLevelAsDistanceStreamingEnabledUntilTimeField() { return *GetNativePointerField<long double*>(this, "UPrimalWorld.IgnoreForcedLevelAsDistanceStreamingEnabledUntilTime"); }
	TArray<TWeakObjectPtr<APostProcessVolume>, TSizedDefaultAllocator<32> >& PreviousPostVolumesField() { return *GetNativePointerField<TArray<TWeakObjectPtr<APostProcessVolume>, TSizedDefaultAllocator<32> >*>(this, "UPrimalWorld.PreviousPostVolumes"); }
	//TMap<unsigned int, FProxyMeshContainer*, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<unsigned int, FProxyMeshContainer*, 0> >& LinkedProxyMeshesField() { return *GetNativePointerField<TMap<unsigned int, FProxyMeshContainer*, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<unsigned int, FProxyMeshContainer*, 0> >*>(this, "UPrimalWorld.LinkedProxyMeshes"); }

	// Bitfields

	BitFieldValue<bool, unsigned __int32> bLoadedFromSaveGame() { return { this, "UPrimalWorld.bLoadedFromSaveGame" }; }
	BitFieldValue<bool, unsigned __int32> bWorldWasPlayerView() { return { this, "UPrimalWorld.bWorldWasPlayerView" }; }
	BitFieldValue<bool, unsigned __int32> bUseSimpleWorld() { return { this, "UPrimalWorld.bUseSimpleWorld" }; }
	BitFieldValue<bool, unsigned __int32> bBlockAllOnNextLevelStreamingProcess() { return { this, "UPrimalWorld.bBlockAllOnNextLevelStreamingProcess" }; }

	// Functions

	static UClass* StaticClass() { return NativeCall<UClass*>(nullptr, "UPrimalWorld.StaticClass()"); }
	void ConstructOctree() { NativeCall<void>(this, "UPrimalWorld.ConstructOctree()"); }
	void UpdateInternalOctreeTransform(UPrimitiveComponent* InComponent) { NativeCall<void, UPrimitiveComponent*>(this, "UPrimalWorld.UpdateInternalOctreeTransform(UPrimitiveComponent*)", InComponent); }
	void RemoveFromInternalOctree(UPrimitiveComponent* InComponent) { NativeCall<void, UPrimitiveComponent*>(this, "UPrimalWorld.RemoveFromInternalOctree(UPrimitiveComponent*)", InComponent); }
	bool OverlapMultiInternalOctree(TArray<UPrimitiveComponent*, TSizedDefaultAllocator<32> >* OutPrimitives, const FBoxCenterAndExtent* InBounds, unsigned int InSearchMask, bool bDontClearOutArray) { return NativeCall<bool, TArray<UPrimitiveComponent*, TSizedDefaultAllocator<32> >*, const FBoxCenterAndExtent*, unsigned int, bool>(this, "UPrimalWorld.OverlapMultiInternalOctree(TArray<UPrimitiveComponent*,TSizedDefaultAllocator<32>>*,FBoxCenterAndExtent*,unsignedint,bool)", OutPrimitives, InBounds, InSearchMask, bDontClearOutArray); }
	int OverlapNumInternalOctree(const FBoxCenterAndExtent* InBounds, unsigned int InSearchMask) { return NativeCall<int, const FBoxCenterAndExtent*, unsigned int>(this, "UPrimalWorld.OverlapNumInternalOctree(FBoxCenterAndExtent*,unsignedint)", InBounds, InSearchMask); }
	void GetPrimitiveOctreeIterator(const UE::Math::TVector<double>* InLocation, float Extents, unsigned int InSearchMask, TFunction<void __cdecl(UPrimitiveComponent*)>* InFunc) { NativeCall<void, const UE::Math::TVector<double>*, float, unsigned int, TFunction<void __cdecl(UPrimitiveComponent*)>*>(this, "UPrimalWorld.GetPrimitiveOctreeIterator(UE::Math::TVector<double>*,float,unsignedint,TFunction<void__cdecl(UPrimitiveComponent*)>*)", InLocation, Extents, InSearchMask, InFunc); }
	void GetPrimitiveOctreeIteratorEarlyOut(const UE::Math::TVector<double>* InLocation, float Extents, unsigned int InSearchMask, TFunction<bool __cdecl(UPrimitiveComponent*)>* InFunc) { NativeCall<void, const UE::Math::TVector<double>*, float, unsigned int, TFunction<bool __cdecl(UPrimitiveComponent*)>*>(this, "UPrimalWorld.GetPrimitiveOctreeIteratorEarlyOut(UE::Math::TVector<double>*,float,unsignedint,TFunction<bool__cdecl(UPrimitiveComponent*)>*)", InLocation, Extents, InSearchMask, InFunc); }
	void DestroyOctree() { NativeCall<void>(this, "UPrimalWorld.DestroyOctree()"); }
	bool OverlapMultiInternalSimpleOctree(TArray<FOctreeElementSimple*, TSizedDefaultAllocator<32> >* OutPrimitives, const FBoxCenterAndExtent* InBounds, unsigned int InSearchMask, bool bDontClearOutArray) { return NativeCall<bool, TArray<FOctreeElementSimple*, TSizedDefaultAllocator<32> >*, const FBoxCenterAndExtent*, unsigned int, bool>(this, "UPrimalWorld.OverlapMultiInternalSimpleOctree(TArray<FOctreeElementSimple*,TSizedDefaultAllocator<32>>*,FBoxCenterAndExtent*,unsignedint,bool)", OutPrimitives, InBounds, InSearchMask, bDontClearOutArray); }
};

struct UWorld : UPrimalWorld
{
	// Fields

	TObjectPtr<ULevel>& PersistentLevelField() { return *GetNativePointerField<TObjectPtr<ULevel>*>(this, "UWorld.PersistentLevel"); }
	TObjectPtr<UNetDriver>& NetDriverField() { return *GetNativePointerField<TObjectPtr<UNetDriver>*>(this, "UWorld.NetDriver"); }
	//TObjectPtr<ULineBatchComponent>& LineBatcherField() { return *GetNativePointerField<TObjectPtr<ULineBatchComponent>*>(this, "UWorld.LineBatcher"); }
	//TObjectPtr<ULineBatchComponent>& PersistentLineBatcherField() { return *GetNativePointerField<TObjectPtr<ULineBatchComponent>*>(this, "UWorld.PersistentLineBatcher"); }
	//TObjectPtr<ULineBatchComponent>& ForegroundLineBatcherField() { return *GetNativePointerField<TObjectPtr<ULineBatchComponent>*>(this, "UWorld.ForegroundLineBatcher"); }
	//TObjectPtr<AGameNetworkManager>& NetworkManagerField() { return *GetNativePointerField<TObjectPtr<AGameNetworkManager>*>(this, "UWorld.NetworkManager"); }
	//TObjectPtr<UPhysicsCollisionHandler>& PhysicsCollisionHandlerField() { return *GetNativePointerField<TObjectPtr<UPhysicsCollisionHandler>*>(this, "UWorld.PhysicsCollisionHandler"); }
	TArray<TObjectPtr<UObject>, TSizedDefaultAllocator<32> >& ExtraReferencedObjectsField() { return *GetNativePointerField<TArray<TObjectPtr<UObject>, TSizedDefaultAllocator<32> >*>(this, "UWorld.ExtraReferencedObjects"); }
	TArray<TObjectPtr<UObject>, TSizedDefaultAllocator<32> >& PerModuleDataObjectsField() { return *GetNativePointerField<TArray<TObjectPtr<UObject>, TSizedDefaultAllocator<32> >*>(this, "UWorld.PerModuleDataObjects"); }
	//TArray<TObjectPtr<ULevelStreaming>, TSizedDefaultAllocator<32> >& StreamingLevelsField() { return *GetNativePointerField<TArray<TObjectPtr<ULevelStreaming>, TSizedDefaultAllocator<32> >*>(this, "UWorld.StreamingLevels"); }
	//FStreamingLevelsToConsider& StreamingLevelsToConsiderField() { return *GetNativePointerField<FStreamingLevelsToConsider*>(this, "UWorld.StreamingLevelsToConsider"); }
	//TObjectPtr<AServerStreamingLevelsVisibility>& ServerStreamingLevelsVisibilityField() { return *GetNativePointerField<TObjectPtr<AServerStreamingLevelsVisibility>*>(this, "UWorld.ServerStreamingLevelsVisibility"); }
	FString& StreamingLevelsPrefixField() { return *GetNativePointerField<FString*>(this, "UWorld.StreamingLevelsPrefix"); }
	TOptional<bool>& bSupportsMakingVisibleTransactionRequestsField() { return *GetNativePointerField<TOptional<bool>*>(this, "UWorld.bSupportsMakingVisibleTransactionRequests"); }
	TOptional<bool>& bSupportsMakingInvisibleTransactionRequestsField() { return *GetNativePointerField<TOptional<bool>*>(this, "UWorld.bSupportsMakingInvisibleTransactionRequests"); }
	TObjectPtr<ULevel>& CurrentLevelPendingVisibilityField() { return *GetNativePointerField<TObjectPtr<ULevel>*>(this, "UWorld.CurrentLevelPendingVisibility"); }
	TObjectPtr<ULevel>& CurrentLevelPendingInvisibilityField() { return *GetNativePointerField<TObjectPtr<ULevel>*>(this, "UWorld.CurrentLevelPendingInvisibility"); }
	//TObjectPtr<UDemoNetDriver>& DemoNetDriverField() { return *GetNativePointerField<TObjectPtr<UDemoNetDriver>*>(this, "UWorld.DemoNetDriver"); }
	//TObjectPtr<AParticleEventManager>& MyParticleEventManagerField() { return *GetNativePointerField<TObjectPtr<AParticleEventManager>*>(this, "UWorld.MyParticleEventManager"); }
	TObjectPtr<APhysicsVolume>& DefaultPhysicsVolumeField() { return *GetNativePointerField<TObjectPtr<APhysicsVolume>*>(this, "UWorld.DefaultPhysicsVolume"); }
	TArray<UE::Math::TVector<double>, TSizedDefaultAllocator<32> >& ViewLocationsRenderedLastFrameField() { return *GetNativePointerField<TArray<UE::Math::TVector<double>, TSizedDefaultAllocator<32> >*>(this, "UWorld.ViewLocationsRenderedLastFrame"); }
	//TArray<FWorldCachedViewInfo, TSizedDefaultAllocator<32> >& CachedViewInfoRenderedLastFrameField() { return *GetNativePointerField<TArray<FWorldCachedViewInfo, TSizedDefaultAllocator<32> >*>(this, "UWorld.CachedViewInfoRenderedLastFrame"); }
	long double& LastRenderTimeField() { return *GetNativePointerField<long double*>(this, "UWorld.LastRenderTime"); }
	TEnumAsByte<enum ETickingGroup>& TickGroupField() { return *GetNativePointerField<TEnumAsByte<enum ETickingGroup>*>(this, "UWorld.TickGroup"); }
	unsigned int& IsInBlockTillLevelStreamingCompletedField() { return *GetNativePointerField<unsigned int*>(this, "UWorld.IsInBlockTillLevelStreamingCompleted"); }
	int& BlockTillLevelStreamingCompletedEpochField() { return *GetNativePointerField<int*>(this, "UWorld.BlockTillLevelStreamingCompletedEpoch"); }
	//TObjectPtr<UNavigationSystemBase>& NavigationSystemField() { return *GetNativePointerField<TObjectPtr<UNavigationSystemBase>*>(this, "UWorld.NavigationSystem"); }
	TObjectPtr<AGameModeBase>& AuthorityGameModeField() { return *GetNativePointerField<TObjectPtr<AGameModeBase>*>(this, "UWorld.AuthorityGameMode"); }
	TObjectPtr<AGameStateBase>& GameStateField() { return *GetNativePointerField<TObjectPtr<AGameStateBase>*>(this, "UWorld.GameState"); }
	//TObjectPtr<UAISystemBase>& AISystemField() { return *GetNativePointerField<TObjectPtr<UAISystemBase>*>(this, "UWorld.AISystem"); }
	//TObjectPtr<UAvoidanceManager>& AvoidanceManagerField() { return *GetNativePointerField<TObjectPtr<UAvoidanceManager>*>(this, "UWorld.AvoidanceManager"); }
	TArray<TObjectPtr<ULevel>, TSizedDefaultAllocator<32> >& LevelsField() { return *GetNativePointerField<TArray<TObjectPtr<ULevel>, TSizedDefaultAllocator<32> >*>(this, "UWorld.Levels"); }
	//TArray<FLevelCollection, TSizedDefaultAllocator<32> >& LevelCollectionsField() { return *GetNativePointerField<TArray<FLevelCollection, TSizedDefaultAllocator<32> >*>(this, "UWorld.LevelCollections"); }
	int& ActiveLevelCollectionIndexField() { return *GetNativePointerField<int*>(this, "UWorld.ActiveLevelCollectionIndex"); }
	//FAudioDeviceHandle& AudioDeviceHandleField() { return *GetNativePointerField<FAudioDeviceHandle*>(this, "UWorld.AudioDeviceHandle"); }
	FDelegateHandle& AudioDeviceDestroyedHandleField() { return *GetNativePointerField<FDelegateHandle*>(this, "UWorld.AudioDeviceDestroyedHandle"); }
	TObjectPtr<UGameInstance>& OwningGameInstanceField() { return *GetNativePointerField<TObjectPtr<UGameInstance>*>(this, "UWorld.OwningGameInstance"); }
	//TArray<TObjectPtr<UMaterialParameterCollectionInstance>, TSizedDefaultAllocator<32> >& ParameterCollectionInstancesField() { return *GetNativePointerField<TArray<TObjectPtr<UMaterialParameterCollectionInstance>, TSizedDefaultAllocator<32> >*>(this, "UWorld.ParameterCollectionInstances"); }
	TObjectPtr<UCanvas>& CanvasForRenderingToTargetField() { return *GetNativePointerField<TObjectPtr<UCanvas>*>(this, "UWorld.CanvasForRenderingToTarget"); }
	TObjectPtr<UCanvas>& CanvasForDrawMaterialToRenderTargetField() { return *GetNativePointerField<TObjectPtr<UCanvas>*>(this, "UWorld.CanvasForDrawMaterialToRenderTarget"); }
	//FSceneInterface*& SceneField() { return *GetNativePointerField<FSceneInterface**>(this, "UWorld.Scene"); }
	TArray<TWeakObjectPtr<AController>, TSizedDefaultAllocator<32> >& ControllerListField() { return *GetNativePointerField<TArray<TWeakObjectPtr<AController>, TSizedDefaultAllocator<32> >*>(this, "UWorld.ControllerList"); }
	TArray<TWeakObjectPtr<APlayerController>, TSizedDefaultAllocator<32> >& PlayerControllerListField() { return *GetNativePointerField<TArray<TWeakObjectPtr<APlayerController>, TSizedDefaultAllocator<32> >*>(this, "UWorld.PlayerControllerList"); }
	//TArray<TWeakObjectPtr<ACameraActor>, TSizedDefaultAllocator<32> >& AutoCameraActorListField() { return *GetNativePointerField<TArray<TWeakObjectPtr<ACameraActor>, TSizedDefaultAllocator<32> >*>(this, "UWorld.AutoCameraActorList"); }
	TArray<TWeakObjectPtr<APhysicsVolume>, TSizedDefaultAllocator<32> >& NonDefaultPhysicsVolumeListField() { return *GetNativePointerField<TArray<TWeakObjectPtr<APhysicsVolume>, TSizedDefaultAllocator<32> >*>(this, "UWorld.NonDefaultPhysicsVolumeList"); }
	//FPhysScene_Chaos*& PhysicsSceneField() { return *GetNativePointerField<FPhysScene_Chaos**>(this, "UWorld.PhysicsScene"); }
	//TSharedPtr<FPhysScene_Chaos, 1>& PhysicsScene_ChaosField() { return *GetNativePointerField<TSharedPtr<FPhysScene_Chaos, 1>*>(this, "UWorld.PhysicsScene_Chaos"); }
	//TSharedPtr<FPhysScene_Chaos, 1>& DefaultPhysicsScene_ChaosField() { return *GetNativePointerField<TSharedPtr<FPhysScene_Chaos, 1>*>(this, "UWorld.DefaultPhysicsScene_Chaos"); }
	//TObjectPtr<UPhysicsFieldComponent>& PhysicsFieldField() { return *GetNativePointerField<TObjectPtr<UPhysicsFieldComponent>*>(this, "UWorld.PhysicsField"); }
	unsigned int& LWILastAssignedUIDField() { return *GetNativePointerField<unsigned int*>(this, "UWorld.LWILastAssignedUID"); }
	TSet<TObjectPtr<UActorComponent>, DefaultKeyFuncs<TObjectPtr<UActorComponent>, 0>, FDefaultSetAllocator>& ComponentsThatNeedPreEndOfFrameSyncField() { return *GetNativePointerField<TSet<TObjectPtr<UActorComponent>, DefaultKeyFuncs<TObjectPtr<UActorComponent>, 0>, FDefaultSetAllocator>*>(this, "UWorld.ComponentsThatNeedPreEndOfFrameSync"); }
	TArray<TObjectPtr<UActorComponent>, TSizedDefaultAllocator<32> >& ComponentsThatNeedEndOfFrameUpdateField() { return *GetNativePointerField<TArray<TObjectPtr<UActorComponent>, TSizedDefaultAllocator<32> >*>(this, "UWorld.ComponentsThatNeedEndOfFrameUpdate"); }
	TArray<TObjectPtr<UActorComponent>, TSizedDefaultAllocator<32> >& ComponentsThatNeedEndOfFrameUpdate_OnGameThreadField() { return *GetNativePointerField<TArray<TObjectPtr<UActorComponent>, TSizedDefaultAllocator<32> >*>(this, "UWorld.ComponentsThatNeedEndOfFrameUpdate_OnGameThread"); }
	//FWorldAsyncTraceState& AsyncTraceStateField() { return *GetNativePointerField<FWorldAsyncTraceState*>(this, "UWorld.AsyncTraceState"); }
	TMulticastDelegate<void __cdecl(AActor*), FDefaultDelegateUserPolicy>& OnActorSpawnedField() { return *GetNativePointerField<TMulticastDelegate<void __cdecl(AActor*), FDefaultDelegateUserPolicy>*>(this, "UWorld.OnActorSpawned"); }
	TMulticastDelegate<void __cdecl(AActor*), FDefaultDelegateUserPolicy>& OnActorPreSpawnInitializationField() { return *GetNativePointerField<TMulticastDelegate<void __cdecl(AActor*), FDefaultDelegateUserPolicy>*>(this, "UWorld.OnActorPreSpawnInitialization"); }
	TMulticastDelegate<void __cdecl(AActor*), FDefaultDelegateUserPolicy>& OnActorDestroyedField() { return *GetNativePointerField<TMulticastDelegate<void __cdecl(AActor*), FDefaultDelegateUserPolicy>*>(this, "UWorld.OnActorDestroyed"); }
	TMulticastDelegate<void __cdecl(AActor*), FDefaultDelegateUserPolicy>& OnPostRegisterAllActorComponentsField() { return *GetNativePointerField<TMulticastDelegate<void __cdecl(AActor*), FDefaultDelegateUserPolicy>*>(this, "UWorld.OnPostRegisterAllActorComponents"); }
	TMulticastDelegate<void __cdecl(AActor*), FDefaultDelegateUserPolicy>& OnPreUnregisterAllActorComponentsField() { return *GetNativePointerField<TMulticastDelegate<void __cdecl(AActor*), FDefaultDelegateUserPolicy>*>(this, "UWorld.OnPreUnregisterAllActorComponents"); }
	TMulticastDelegate<void __cdecl(AActor*), FDefaultDelegateUserPolicy>& OnActorRemovedFromWorldField() { return *GetNativePointerField<TMulticastDelegate<void __cdecl(AActor*), FDefaultDelegateUserPolicy>*>(this, "UWorld.OnActorRemovedFromWorld"); }
	FTimerManager*& TimerManagerField() { return *GetNativePointerField<FTimerManager**>(this, "UWorld.TimerManager"); }
	//FLatentActionManager& LatentActionManagerField() { return *GetNativePointerField<FLatentActionManager*>(this, "UWorld.LatentActionManager"); }
	long double& BuildStreamingDataTimerField() { return *GetNativePointerField<long double*>(this, "UWorld.BuildStreamingDataTimer"); }
	//UWorld::FOnNetTickEvent& TickDispatchEventField() { return *GetNativePointerField<UWorld::FOnNetTickEvent*>(this, "UWorld.TickDispatchEvent"); }
	//UWorld::FOnTickFlushEvent& PostTickDispatchEventField() { return *GetNativePointerField<UWorld::FOnTickFlushEvent*>(this, "UWorld.PostTickDispatchEvent"); }
	//UWorld::FOnNetTickEvent& PreTickFlushEventField() { return *GetNativePointerField<UWorld::FOnNetTickEvent*>(this, "UWorld.PreTickFlushEvent"); }
	//UWorld::FOnNetTickEvent& TickFlushEventField() { return *GetNativePointerField<UWorld::FOnNetTickEvent*>(this, "UWorld.TickFlushEvent"); }
	//UWorld::FOnTickFlushEvent& PostTickFlushEventField() { return *GetNativePointerField<UWorld::FOnTickFlushEvent*>(this, "UWorld.PostTickFlushEvent"); }
	//UWorld::FOnLevelsChangedEvent& LevelsChangedEventField() { return *GetNativePointerField<UWorld::FOnLevelsChangedEvent*>(this, "UWorld.LevelsChangedEvent"); }
	//UWorld::FOnBeginTearingDownEvent& BeginTearingDownEventField() { return *GetNativePointerField<UWorld::FOnBeginTearingDownEvent*>(this, "UWorld.BeginTearingDownEvent"); }
	//UWorld::FWorldPartitionInitializedEvent& OnWorldPartitionInitializedEventField() { return *GetNativePointerField<UWorld::FWorldPartitionInitializedEvent*>(this, "UWorld.OnWorldPartitionInitializedEvent"); }
	//UWorld::FWorldPartitionUninitializedEvent& OnWorldPartitionUninitializedEventField() { return *GetNativePointerField<UWorld::FWorldPartitionUninitializedEvent*>(this, "UWorld.OnWorldPartitionUninitializedEvent"); }
	TMulticastDelegate<void __cdecl(float), FDefaultDelegateUserPolicy>& MovieSceneSequenceTickField() { return *GetNativePointerField<TMulticastDelegate<void __cdecl(float), FDefaultDelegateUserPolicy>*>(this, "UWorld.MovieSceneSequenceTick"); }
	//FURL& URLField() { return *GetNativePointerField<FURL*>(this, "UWorld.URL"); }
	//FFXSystemInterface*& FXSystemField() { return *GetNativePointerField<FFXSystemInterface**>(this, "UWorld.FXSystem"); }
	//FTickTaskLevel*& TickTaskLevelField() { return *GetNativePointerField<FTickTaskLevel**>(this, "UWorld.TickTaskLevel"); }
	//FStartPhysicsTickFunction& StartPhysicsTickFunctionField() { return *GetNativePointerField<FStartPhysicsTickFunction*>(this, "UWorld.StartPhysicsTickFunction"); }
	//FEndPhysicsTickFunction& EndPhysicsTickFunctionField() { return *GetNativePointerField<FEndPhysicsTickFunction*>(this, "UWorld.EndPhysicsTickFunction"); }
	int& PlayerNumField() { return *GetNativePointerField<int*>(this, "UWorld.PlayerNum"); }
	int& StreamingVolumeUpdateDelayField() { return *GetNativePointerField<int*>(this, "UWorld.StreamingVolumeUpdateDelay"); }
	//UWorld::FOnBeginPostProcessSettings& OnBeginPostProcessSettingsField() { return *GetNativePointerField<UWorld::FOnBeginPostProcessSettings*>(this, "UWorld.OnBeginPostProcessSettings"); }
	//TArray<IInterface_PostProcessVolume*, TSizedDefaultAllocator<32> >& PostProcessVolumesField() { return *GetNativePointerField<TArray<IInterface_PostProcessVolume*, TSizedDefaultAllocator<32> >*>(this, "UWorld.PostProcessVolumes"); }
	//TArray<AAudioVolume*, TSizedDefaultAllocator<32> >& AudioVolumesField() { return *GetNativePointerField<TArray<AAudioVolume*, TSizedDefaultAllocator<32> >*>(this, "UWorld.AudioVolumes"); }
	long double& LastTimeUnbuiltLightingWasEncounteredField() { return *GetNativePointerField<long double*>(this, "UWorld.LastTimeUnbuiltLightingWasEncountered"); }
	long double& TimeSecondsField() { return *GetNativePointerField<long double*>(this, "UWorld.TimeSeconds"); }
	long double& UnpausedTimeSecondsField() { return *GetNativePointerField<long double*>(this, "UWorld.UnpausedTimeSeconds"); }
	long double& RealTimeSecondsField() { return *GetNativePointerField<long double*>(this, "UWorld.RealTimeSeconds"); }
	long double& AudioTimeSecondsField() { return *GetNativePointerField<long double*>(this, "UWorld.AudioTimeSeconds"); }
	float& DeltaRealTimeSecondsField() { return *GetNativePointerField<float*>(this, "UWorld.DeltaRealTimeSeconds"); }
	float& DeltaTimeSecondsField() { return *GetNativePointerField<float*>(this, "UWorld.DeltaTimeSeconds"); }
	long double& PauseDelayField() { return *GetNativePointerField<long double*>(this, "UWorld.PauseDelay"); }
	UE::Math::TIntVector3<int>& OriginLocationField() { return *GetNativePointerField<UE::Math::TIntVector3<int>*>(this, "UWorld.OriginLocation"); }
	UE::Math::TIntVector3<int>& RequestedOriginLocationField() { return *GetNativePointerField<UE::Math::TIntVector3<int>*>(this, "UWorld.RequestedOriginLocation"); }
	UE::Math::TVector<double>& OriginOffsetThisFrameField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "UWorld.OriginOffsetThisFrame"); }
	float& NextSwitchCountdownField() { return *GetNativePointerField<float*>(this, "UWorld.NextSwitchCountdown"); }
	//TObjectPtr<UWorldComposition>& WorldCompositionField() { return *GetNativePointerField<TObjectPtr<UWorldComposition>*>(this, "UWorld.WorldComposition"); }
	//TObjectPtr<UContentBundleManager>& ContentBundleManagerField() { return *GetNativePointerField<TObjectPtr<UContentBundleManager>*>(this, "UWorld.ContentBundleManager"); }
	//TEnumAsByte<enum ETravelType>& NextTravelTypeField() { return *GetNativePointerField<TEnumAsByte<enum ETravelType>*>(this, "UWorld.NextTravelType"); }
	unsigned __int16& NumStreamingLevelsBeingLoadedField() { return *GetNativePointerField<unsigned __int16*>(this, "UWorld.NumStreamingLevelsBeingLoaded"); }
	FString& NextURLField() { return *GetNativePointerField<FString*>(this, "UWorld.NextURL"); }
	TArray<FName, TSizedDefaultAllocator<32> >& PreparingLevelNamesField() { return *GetNativePointerField<TArray<FName, TSizedDefaultAllocator<32> >*>(this, "UWorld.PreparingLevelNames"); }
	FName& CommittedPersistentLevelNameField() { return *GetNativePointerField<FName*>(this, "UWorld.CommittedPersistentLevelName"); }
	unsigned int& CleanupWorldTagField() { return *GetNativePointerField<unsigned int*>(this, "UWorld.CleanupWorldTag"); }
	//FWorldInGamePerformanceTrackers*& PerfTrackersField() { return *GetNativePointerField<FWorldInGamePerformanceTrackers**>(this, "UWorld.PerfTrackers"); }
	//struct FParticlePerfStats*& ParticlePerfStatsField() { return *GetNativePointerField<struct FParticlePerfStats**>(this, "UWorld.ParticlePerfStats"); }
	//TMulticastDelegate<void __cdecl(FActorsInitializedParams const&), FDefaultDelegateUserPolicy>& OnActorsInitializedField() { return *GetNativePointerField<TMulticastDelegate<void __cdecl(FActorsInitializedParams const&), FDefaultDelegateUserPolicy>*>(this, "UWorld.OnActorsInitialized"); }
	//TMulticastDelegate<void __cdecl(void), FDefaultDelegateUserPolicy>& OnWorldBeginPlayField() { return *GetNativePointerField<TMulticastDelegate<void __cdecl(void), FDefaultDelegateUserPolicy>*>(this, "UWorld.OnWorldBeginPlay"); }
	//TMulticastDelegate<void __cdecl(void), FDefaultDelegateUserPolicy>& OnWorldMatchStartingField() { return *GetNativePointerField<TMulticastDelegate<void __cdecl(void), FDefaultDelegateUserPolicy>*>(this, "UWorld.OnWorldMatchStarting"); }
	//UWorld::FOnGameStateSetEvent& GameStateSetEventField() { return *GetNativePointerField<UWorld::FOnGameStateSetEvent*>(this, "UWorld.GameStateSetEvent"); }
	//FWorldPSCPool& PSCPoolField() { return *GetNativePointerField<FWorldPSCPool*>(this, "UWorld.PSCPool"); }
	//FObjectSubsystemCollection<UWorldSubsystem>& SubsystemCollectionField() { return *GetNativePointerField<FObjectSubsystemCollection<UWorldSubsystem>*>(this, "UWorld.SubsystemCollection"); }
	
	// Bitfields

	BitFieldValue<bool, unsigned __int32> bWorldWasLoadedThisTick() { return { this, "UWorld.bWorldWasLoadedThisTick" }; }
	BitFieldValue<bool, unsigned __int32> bTriggerPostLoadMap() { return { this, "UWorld.bTriggerPostLoadMap" }; }
	BitFieldValue<bool, unsigned __int32> bInTick() { return { this, "UWorld.bInTick" }; }
	BitFieldValue<bool, unsigned __int32> bIsBuilt() { return { this, "UWorld.bIsBuilt" }; }
	BitFieldValue<bool, unsigned __int32> bTickNewlySpawned() { return { this, "UWorld.bTickNewlySpawned" }; }
	BitFieldValue<bool, unsigned __int32> bPostTickComponentUpdate() { return { this, "UWorld.bPostTickComponentUpdate" }; }
	BitFieldValue<bool, unsigned __int32> bIsWorldInitialized() { return { this, "UWorld.bIsWorldInitialized" }; }
	BitFieldValue<bool, unsigned __int32> bIsLevelStreamingFrozen() { return { this, "UWorld.bIsLevelStreamingFrozen" }; }
	BitFieldValue<bool, unsigned __int32> bDoDelayedUpdateCullDistanceVolumes() { return { this, "UWorld.bDoDelayedUpdateCullDistanceVolumes" }; }
	BitFieldValue<bool, unsigned __int32> bIsRunningConstructionScript() { return { this, "UWorld.bIsRunningConstructionScript" }; }
	BitFieldValue<bool, unsigned __int32> bShouldSimulatePhysics() { return { this, "UWorld.bShouldSimulatePhysics" }; }
	BitFieldValue<bool, unsigned __int32> bDropDetail() { return { this, "UWorld.bDropDetail" }; }
	BitFieldValue<bool, unsigned __int32> bAggressiveLOD() { return { this, "UWorld.bAggressiveLOD" }; }
	BitFieldValue<bool, unsigned __int32> bIsDefaultLevel() { return { this, "UWorld.bIsDefaultLevel" }; }
	BitFieldValue<bool, unsigned __int32> bRequestedBlockOnAsyncLoading() { return { this, "UWorld.bRequestedBlockOnAsyncLoading" }; }
	BitFieldValue<bool, unsigned __int32> bActorsInitialized() { return { this, "UWorld.bActorsInitialized" }; }
	BitFieldValue<bool, unsigned __int32> bBegunPlay() { return { this, "UWorld.bBegunPlay" }; }
	BitFieldValue<bool, unsigned __int32> bMatchStarted() { return { this, "UWorld.bMatchStarted" }; }
	BitFieldValue<bool, unsigned __int32> bPlayersOnly() { return { this, "UWorld.bPlayersOnly" }; }
	BitFieldValue<bool, unsigned __int32> bPlayersOnlyPending() { return { this, "UWorld.bPlayersOnlyPending" }; }
	BitFieldValue<bool, unsigned __int32> bStartup() { return { this, "UWorld.bStartup" }; }
	BitFieldValue<bool, unsigned __int32> bIsTearingDown() { return { this, "UWorld.bIsTearingDown" }; }
	BitFieldValue<bool, unsigned __int32> bKismetScriptError() { return { this, "UWorld.bKismetScriptError" }; }
	BitFieldValue<bool, unsigned __int32> bDebugPauseExecution() { return { this, "UWorld.bDebugPauseExecution" }; }
	BitFieldValue<bool, unsigned __int32> bIsCameraMoveableWhenPaused() { return { this, "UWorld.bIsCameraMoveableWhenPaused" }; }
	BitFieldValue<bool, unsigned __int32> bAllowAudioPlayback() { return { this, "UWorld.bAllowAudioPlayback" }; }
	BitFieldValue<bool, unsigned __int32> bAreConstraintsDirty() { return { this, "UWorld.bAreConstraintsDirty" }; }
	BitFieldValue<bool, unsigned __int32> bRequiresHitProxies() { return { this, "UWorld.bRequiresHitProxies" }; }
	BitFieldValue<bool, unsigned __int32> bShouldTick() { return { this, "UWorld.bShouldTick" }; }
	BitFieldValue<bool, unsigned __int32> bStreamingDataDirty() { return { this, "UWorld.bStreamingDataDirty" }; }
	BitFieldValue<bool, unsigned __int32> bShouldForceUnloadStreamingLevels() { return { this, "UWorld.bShouldForceUnloadStreamingLevels" }; }
	BitFieldValue<bool, unsigned __int32> bShouldForceVisibleStreamingLevels() { return { this, "UWorld.bShouldForceVisibleStreamingLevels" }; }
	BitFieldValue<bool, unsigned __int32> bMaterialParameterCollectionInstanceNeedsDeferredUpdate() { return { this, "UWorld.bMaterialParameterCollectionInstanceNeedsDeferredUpdate" }; }
	BitFieldValue<bool, unsigned __int32> bHasEverBeenInitialized() { return { this, "UWorld.bHasEverBeenInitialized" }; }
	BitFieldValue<bool, unsigned __int32> bMarkedObjectsPendingKill() { return { this, "UWorld.bMarkedObjectsPendingKill" }; }

	// Functions

	AActor* SpawnActor(const FActorSpawnParameters* SpawnParameters) { return NativeCall<AActor*, const FActorSpawnParameters*>(this, "UWorld.SpawnActor<class AActor>(FActorSpawnParameters*)", SpawnParameters); }
	bool NotifyAcceptingChannel(UChannel* Channel) { return NativeCall<bool, UChannel*>(this, "UWorld.NotifyAcceptingChannel(UChannel*)", Channel); }
	AGameStateBase* GetGameState() { return NativeCall<AGameStateBase*>(this, "UWorld.GetGameState()"); }
	bool IsPartitionedWorld() { return NativeCall<bool>(this, "UWorld.IsPartitionedWorld()"); }
	static UClass* GetPrivateStaticClass() { return NativeCall<UClass*>(nullptr, "UWorld.GetPrivateStaticClass()"); }
	//ALevelSequenceActor* SpawnActor<class ALevelSequenceActor>(const FActorSpawnParameters* SpawnParameters) { return NativeCall<ALevelSequenceActor*, const FActorSpawnParameters*>(this, "UWorld.SpawnActor<class ALevelSequenceActor>(FActorSpawnParameters*)", SpawnParameters); }
	//ULandscapeSubsystem* GetSubsystem() { return NativeCall<ULandscapeSubsystem*>(this, "UWorld.GetSubsystem<class ULandscapeSubsystem>()"); }
	//UPCGSubsystem* GetSubsystem() { return NativeCall<UPCGSubsystem*>(this, "UWorld.GetSubsystem<class UPCGSubsystem>()"); }
	//AShooterGameState* GetGameState<class AShooterGameState>() { return NativeCall<AShooterGameState*>(this, "UWorld.GetGameState<class AShooterGameState>()"); }
	//AShooterGameMode* GetAuthGameMode<class AShooterGameMode>() { return NativeCall<AShooterGameMode*>(this, "UWorld.GetAuthGameMode<class AShooterGameMode>()"); }
	//APrimalDinoCharacter* SpawnActor<class APrimalDinoCharacter>(UClass* Class, const UE::Math::TVector<double>* Location, const UE::Math::TRotator<double>* Rotation, const FActorSpawnParameters* SpawnParameters) { return NativeCall<APrimalDinoCharacter*, UClass*, const UE::Math::TVector<double>*, const UE::Math::TRotator<double>*, const FActorSpawnParameters*>(this, "UWorld.SpawnActor<class APrimalDinoCharacter>(UClass*,UE::Math::TVector<double>*,UE::Math::TRotator<double>*,FActorSpawnParameters*)", Class, Location, Rotation, SpawnParameters); }
	//APrimalDinoCharacter* PrimalSpawnActorDeferred<class APrimalDinoCharacter>(UClass* Class, const UE::Math::TTransform<double>* Transform, AActor* Owner, APawn* Instigator, ESpawnActorCollisionHandlingMethod CollisionHandlingOverride, ESpawnActorScaleMethod TransformScaleMethod) { return NativeCall<APrimalDinoCharacter*, UClass*, const UE::Math::TTransform<double>*, AActor*, APawn*, ESpawnActorCollisionHandlingMethod, ESpawnActorScaleMethod>(this, "UWorld.PrimalSpawnActorDeferred<class APrimalDinoCharacter>(UClass*,UE::Math::TTransform<double>*,AActor*,APawn*,ESpawnActorCollisionHandlingMethod,ESpawnActorScaleMethod)", Class, Transform, Owner, Instigator, CollisionHandlingOverride, TransformScaleMethod); }
	//APrimalPreviewSceneSetup* SpawnActor<class APrimalPreviewSceneSetup>(UClass* Class, const FActorSpawnParameters* SpawnParameters) { return NativeCall<APrimalPreviewSceneSetup*, UClass*, const FActorSpawnParameters*>(this, "UWorld.SpawnActor<class APrimalPreviewSceneSetup>(UClass*,FActorSpawnParameters*)", Class, SpawnParameters); }
	//ACustomGameState* GetGameState<class ACustomGameState>() { return NativeCall<ACustomGameState*>(this, "UWorld.GetGameState<class ACustomGameState>()"); }
	//AHibernationManager* SpawnActor<class AHibernationManager>(const UE::Math::TVector<double>* Location, const UE::Math::TRotator<double>* Rotation, const FActorSpawnParameters* SpawnParameters) { return NativeCall<AHibernationManager*, const UE::Math::TVector<double>*, const UE::Math::TRotator<double>*, const FActorSpawnParameters*>(this, "UWorld.SpawnActor<class AHibernationManager>(UE::Math::TVector<double>*,UE::Math::TRotator<double>*,FActorSpawnParameters*)", Location, Rotation, SpawnParameters); }
	//FChildren* GetParameterCollectionInstances() { return NativeCall<FChildren*>(this, "UWorld.GetParameterCollectionInstances()"); }
	APhysicsVolume* GetDefaultPhysicsVolume() { return NativeCall<APhysicsVolume*>(this, "UWorld.GetDefaultPhysicsVolume()"); }
	AGameMode* GetAuthGameMode() { return NativeCall<AGameMode*>(this, "UWorld.GetAuthGameMode<class AGameMode>()"); }
	//AShooterGame_Menu* GetAuthGameMode<class AShooterGame_Menu>() { return NativeCall<AShooterGame_Menu*>(this, "UWorld.GetAuthGameMode<class AShooterGame_Menu>()"); }
	//UDataLayerSubsystem* GetSubsystem<class UDataLayerSubsystem>() { return NativeCall<UDataLayerSubsystem*>(this, "UWorld.GetSubsystem<class UDataLayerSubsystem>()"); }
	//ACustomGameMode* GetAuthGameMode<class ACustomGameMode>() { return NativeCall<ACustomGameMode*>(this, "UWorld.GetAuthGameMode<class ACustomGameMode>()"); }
	//APrimalGameMode* GetAuthGameMode<class APrimalGameMode>() { return NativeCall<APrimalGameMode*>(this, "UWorld.GetAuthGameMode<class APrimalGameMode>()"); }
	//ACameraActor* SpawnActor<class ACameraActor>(const FActorSpawnParameters* SpawnParameters) { return NativeCall<ACameraActor*, const FActorSpawnParameters*>(this, "UWorld.SpawnActor<class ACameraActor>(FActorSpawnParameters*)", SpawnParameters); }
	//UWorldPartitionSubsystem* GetSubsystem<class UWorldPartitionSubsystem>() { return NativeCall<UWorldPartitionSubsystem*>(this, "UWorld.GetSubsystem<class UWorldPartitionSubsystem>()"); }
	//UAutoDestroySubsystem* GetSubsystem<class UAutoDestroySubsystem>() { return NativeCall<UAutoDestroySubsystem*>(this, "UWorld.GetSubsystem<class UAutoDestroySubsystem>()"); }
	bool LineTraceTestByChannel(const UE::Math::TVector<double>* Start, const UE::Math::TVector<double>* End, ECollisionChannel TraceChannel, const FCollisionQueryParams* Params, const struct FCollisionResponseParams* ResponseParam) { return NativeCall<bool, const UE::Math::TVector<double>*, const UE::Math::TVector<double>*, ECollisionChannel, const FCollisionQueryParams*, const FCollisionResponseParams*>(this, "UWorld.LineTraceTestByChannel(UE::Math::TVector<double>*,UE::Math::TVector<double>*,ECollisionChannel,FCollisionQueryParams*,FCollisionResponseParams*)", Start, End, TraceChannel, Params, ResponseParam); }
	bool LineTraceSingleByChannel(FHitResult* OutHit, const UE::Math::TVector<double>* Start, const UE::Math::TVector<double>* End, ECollisionChannel TraceChannel, const FCollisionQueryParams* Params, const FCollisionResponseParams* ResponseParam) { return NativeCall<bool, FHitResult*, const UE::Math::TVector<double>*, const UE::Math::TVector<double>*, ECollisionChannel, const FCollisionQueryParams*, const FCollisionResponseParams*>(this, "UWorld.LineTraceSingleByChannel(FHitResult*,UE::Math::TVector<double>*,UE::Math::TVector<double>*,ECollisionChannel,FCollisionQueryParams*,FCollisionResponseParams*)", OutHit, Start, End, TraceChannel, Params, ResponseParam); }
	bool SweepTestByChannel(const UE::Math::TVector<double>* Start, const UE::Math::TVector<double>* End, const UE::Math::TQuat<double>* Rot, ECollisionChannel TraceChannel, const struct FCollisionShape* CollisionShape, const FCollisionQueryParams* Params, const FCollisionResponseParams* ResponseParam) { return NativeCall<bool, const UE::Math::TVector<double>*, const UE::Math::TVector<double>*, const UE::Math::TQuat<double>*, ECollisionChannel, const FCollisionShape*, const FCollisionQueryParams*, const FCollisionResponseParams*>(this, "UWorld.SweepTestByChannel(UE::Math::TVector<double>*,UE::Math::TVector<double>*,UE::Math::TQuat<double>*,ECollisionChannel,FCollisionShape*,FCollisionQueryParams*,FCollisionResponseParams*)", Start, End, Rot, TraceChannel, CollisionShape, Params, ResponseParam); }
	bool SweepSingleByChannel(FHitResult* OutHit, const UE::Math::TVector<double>* Start, const UE::Math::TVector<double>* End, const UE::Math::TQuat<double>* Rot, ECollisionChannel TraceChannel, const FCollisionShape* CollisionShape, const FCollisionQueryParams* Params, const FCollisionResponseParams* ResponseParam) { return NativeCall<bool, FHitResult*, const UE::Math::TVector<double>*, const UE::Math::TVector<double>*, const UE::Math::TQuat<double>*, ECollisionChannel, const FCollisionShape*, const FCollisionQueryParams*, const FCollisionResponseParams*>(this, "UWorld.SweepSingleByChannel(FHitResult*,UE::Math::TVector<double>*,UE::Math::TVector<double>*,UE::Math::TQuat<double>*,ECollisionChannel,FCollisionShape*,FCollisionQueryParams*,FCollisionResponseParams*)", OutHit, Start, End, Rot, TraceChannel, CollisionShape, Params, ResponseParam); }
	bool SweepMultiByChannel(TArray<FHitResult, TSizedDefaultAllocator<32> >* OutHits, const UE::Math::TVector<double>* Start, const UE::Math::TVector<double>* End, const UE::Math::TQuat<double>* Rot, ECollisionChannel TraceChannel, const FCollisionShape* CollisionShape, const FCollisionQueryParams* Params, const FCollisionResponseParams* ResponseParam) { return NativeCall<bool, TArray<FHitResult, TSizedDefaultAllocator<32> >*, const UE::Math::TVector<double>*, const UE::Math::TVector<double>*, const UE::Math::TQuat<double>*, ECollisionChannel, const FCollisionShape*, const FCollisionQueryParams*, const FCollisionResponseParams*>(this, "UWorld.SweepMultiByChannel(TArray<FHitResult,TSizedDefaultAllocator<32>>*,UE::Math::TVector<double>*,UE::Math::TVector<double>*,UE::Math::TQuat<double>*,ECollisionChannel,FCollisionShape*,FCollisionQueryParams*,FCollisionResponseParams*)", OutHits, Start, End, Rot, TraceChannel, CollisionShape, Params, ResponseParam); }
	bool OverlapBlockingTestByChannel(const UE::Math::TVector<double>* Pos, const UE::Math::TQuat<double>* Rot, ECollisionChannel TraceChannel, const FCollisionShape* CollisionShape, const FCollisionQueryParams* Params, const FCollisionResponseParams* ResponseParam) { return NativeCall<bool, const UE::Math::TVector<double>*, const UE::Math::TQuat<double>*, ECollisionChannel, const FCollisionShape*, const FCollisionQueryParams*, const FCollisionResponseParams*>(this, "UWorld.OverlapBlockingTestByChannel(UE::Math::TVector<double>*,UE::Math::TQuat<double>*,ECollisionChannel,FCollisionShape*,FCollisionQueryParams*,FCollisionResponseParams*)", Pos, Rot, TraceChannel, CollisionShape, Params, ResponseParam); }
	//bool OverlapMultiByChannel(TArray<FOverlapResult, TSizedDefaultAllocator<32> >* OutOverlaps, const UE::Math::TVector<double>* Pos, const UE::Math::TQuat<double>* Rot, ECollisionChannel TraceChannel, const FCollisionShape* CollisionShape, const FCollisionQueryParams* Params, const FCollisionResponseParams* ResponseParam) { return NativeCall<bool, TArray<FOverlapResult, TSizedDefaultAllocator<32> >*, const UE::Math::TVector<double>*, const UE::Math::TQuat<double>*, ECollisionChannel, const FCollisionShape*, const FCollisionQueryParams*, const FCollisionResponseParams*>(this, "UWorld.OverlapMultiByChannel(TArray<FOverlapResult,TSizedDefaultAllocator<32>>*,UE::Math::TVector<double>*,UE::Math::TQuat<double>*,ECollisionChannel,FCollisionShape*,FCollisionQueryParams*,FCollisionResponseParams*)", OutOverlaps, Pos, Rot, TraceChannel, CollisionShape, Params, ResponseParam); }
	bool LineTraceSingleByObjectType(FHitResult* OutHit, const UE::Math::TVector<double>* Start, const UE::Math::TVector<double>* End, const struct FCollisionObjectQueryParams* ObjectQueryParams, const FCollisionQueryParams* Params) { return NativeCall<bool, FHitResult*, const UE::Math::TVector<double>*, const UE::Math::TVector<double>*, const FCollisionObjectQueryParams*, const FCollisionQueryParams*>(this, "UWorld.LineTraceSingleByObjectType(FHitResult*,UE::Math::TVector<double>*,UE::Math::TVector<double>*,FCollisionObjectQueryParams*,FCollisionQueryParams*)", OutHit, Start, End, ObjectQueryParams, Params); }
	bool SweepSingleByObjectType(FHitResult* OutHit, const UE::Math::TVector<double>* Start, const UE::Math::TVector<double>* End, const UE::Math::TQuat<double>* Rot, const FCollisionObjectQueryParams* ObjectQueryParams, const FCollisionShape* CollisionShape, const FCollisionQueryParams* Params) { return NativeCall<bool, FHitResult*, const UE::Math::TVector<double>*, const UE::Math::TVector<double>*, const UE::Math::TQuat<double>*, const FCollisionObjectQueryParams*, const FCollisionShape*, const FCollisionQueryParams*>(this, "UWorld.SweepSingleByObjectType(FHitResult*,UE::Math::TVector<double>*,UE::Math::TVector<double>*,UE::Math::TQuat<double>*,FCollisionObjectQueryParams*,FCollisionShape*,FCollisionQueryParams*)", OutHit, Start, End, Rot, ObjectQueryParams, CollisionShape, Params); }
	bool SweepMultiByObjectType(TArray<FHitResult, TSizedDefaultAllocator<32> >* OutHits, const UE::Math::TVector<double>* Start, const UE::Math::TVector<double>* End, const UE::Math::TQuat<double>* Rot, const FCollisionObjectQueryParams* ObjectQueryParams, const FCollisionShape* CollisionShape, const FCollisionQueryParams* Params) { return NativeCall<bool, TArray<FHitResult, TSizedDefaultAllocator<32> >*, const UE::Math::TVector<double>*, const UE::Math::TVector<double>*, const UE::Math::TQuat<double>*, const FCollisionObjectQueryParams*, const FCollisionShape*, const FCollisionQueryParams*>(this, "UWorld.SweepMultiByObjectType(TArray<FHitResult,TSizedDefaultAllocator<32>>*,UE::Math::TVector<double>*,UE::Math::TVector<double>*,UE::Math::TQuat<double>*,FCollisionObjectQueryParams*,FCollisionShape*,FCollisionQueryParams*)", OutHits, Start, End, Rot, ObjectQueryParams, CollisionShape, Params); }
	bool SweepSingleByProfile(FHitResult* OutHit, const UE::Math::TVector<double>* Start, const UE::Math::TVector<double>* End, const UE::Math::TQuat<double>* Rot, FName ProfileName, const FCollisionShape* CollisionShape, const FCollisionQueryParams* Params) { return NativeCall<bool, FHitResult*, const UE::Math::TVector<double>*, const UE::Math::TVector<double>*, const UE::Math::TQuat<double>*, FName, const FCollisionShape*, const FCollisionQueryParams*>(this, "UWorld.SweepSingleByProfile(FHitResult*,UE::Math::TVector<double>*,UE::Math::TVector<double>*,UE::Math::TQuat<double>*,FName,FCollisionShape*,FCollisionQueryParams*)", OutHit, Start, End, Rot, ProfileName, CollisionShape, Params); }
	bool SweepMultiByProfile(TArray<FHitResult, TSizedDefaultAllocator<32> >* OutHits, const UE::Math::TVector<double>* Start, const UE::Math::TVector<double>* End, const UE::Math::TQuat<double>* Rot, FName ProfileName, const FCollisionShape* CollisionShape, const FCollisionQueryParams* Params) { return NativeCall<bool, TArray<FHitResult, TSizedDefaultAllocator<32> >*, const UE::Math::TVector<double>*, const UE::Math::TVector<double>*, const UE::Math::TQuat<double>*, FName, const FCollisionShape*, const FCollisionQueryParams*>(this, "UWorld.SweepMultiByProfile(TArray<FHitResult,TSizedDefaultAllocator<32>>*,UE::Math::TVector<double>*,UE::Math::TVector<double>*,UE::Math::TQuat<double>*,FName,FCollisionShape*,FCollisionQueryParams*)", OutHits, Start, End, Rot, ProfileName, CollisionShape, Params); }
	//bool ComponentOverlapMultiByChannel(TArray<FOverlapResult, TSizedDefaultAllocator<32> >* OutOverlaps, const UPrimitiveComponent* PrimComp, const UE::Math::TVector<double>* Pos, const UE::Math::TQuat<double>* Quat, ECollisionChannel TraceChannel, const FComponentQueryParams* Params, const FCollisionObjectQueryParams* ObjectQueryParams) { return NativeCall<bool, TArray<FOverlapResult, TSizedDefaultAllocator<32> >*, const UPrimitiveComponent*, const UE::Math::TVector<double>*, const UE::Math::TQuat<double>*, ECollisionChannel, const FComponentQueryParams*, const FCollisionObjectQueryParams*>(this, "UWorld.ComponentOverlapMultiByChannel(TArray<FOverlapResult,TSizedDefaultAllocator<32>>*,UPrimitiveComponent*,UE::Math::TVector<double>*,UE::Math::TQuat<double>*,ECollisionChannel,FComponentQueryParams*,FCollisionObjectQueryParams*)", OutOverlaps, PrimComp, Pos, Quat, TraceChannel, Params, ObjectQueryParams); }
	bool ComponentSweepMultiByChannel(TArray<FHitResult, TSizedDefaultAllocator<32> >* OutHits, UPrimitiveComponent* PrimComp, const UE::Math::TVector<double>* Start, const UE::Math::TVector<double>* End, const UE::Math::TQuat<double>* Rot, ECollisionChannel TraceChannel, const struct FComponentQueryParams* Params) { return NativeCall<bool, TArray<FHitResult, TSizedDefaultAllocator<32> >*, UPrimitiveComponent*, const UE::Math::TVector<double>*, const UE::Math::TVector<double>*, const UE::Math::TQuat<double>*, ECollisionChannel, const FComponentQueryParams*>(this, "UWorld.ComponentSweepMultiByChannel(TArray<FHitResult,TSizedDefaultAllocator<32>>*,UPrimitiveComponent*,UE::Math::TVector<double>*,UE::Math::TVector<double>*,UE::Math::TQuat<double>*,ECollisionChannel,FComponentQueryParams*)", OutHits, PrimComp, Start, End, Rot, TraceChannel, Params); }
	FTraceHandle* AsyncLineTraceByChannel(FTraceHandle* result, EAsyncTraceType InTraceType, const UE::Math::TVector<double>* Start, const UE::Math::TVector<double>* End, ECollisionChannel TraceChannel, const FCollisionQueryParams* Params, const FCollisionResponseParams* ResponseParam, const TDelegate<void __cdecl(FTraceHandle const&, FTraceDatum&), FDefaultDelegateUserPolicy>* InDelegate, unsigned int UserData) { return NativeCall<FTraceHandle*, FTraceHandle*, EAsyncTraceType, const UE::Math::TVector<double>*, const UE::Math::TVector<double>*, ECollisionChannel, const FCollisionQueryParams*, const FCollisionResponseParams*, const TDelegate<void __cdecl(FTraceHandle const&, FTraceDatum&), FDefaultDelegateUserPolicy>*, unsigned int>(this, "UWorld.AsyncLineTraceByChannel(FTraceHandle*,EAsyncTraceType,UE::Math::TVector<double>*,UE::Math::TVector<double>*,ECollisionChannel,FCollisionQueryParams*,FCollisionResponseParams*,TDelegate<void__cdecl(FTraceHandle&,FTraceDatum&),FDefaultDelegateUserPolicy>*,unsignedint)", result, InTraceType, Start, End, TraceChannel, Params, ResponseParam, InDelegate, UserData); }
	void WaitForAllAsyncTraceTasks() { NativeCall<void>(this, "UWorld.WaitForAllAsyncTraceTasks()"); }
	void ResetAsyncTrace() { NativeCall<void>(this, "UWorld.ResetAsyncTrace()"); }
	AActor* SpawnActorDeferred(UClass* Class, const UE::Math::TTransform<double>* Transform, AActor* Owner, APawn* Instigator, ESpawnActorCollisionHandlingMethod CollisionHandlingOverride, ESpawnActorScaleMethod TransformScaleMethod) { return NativeCall<AActor*, UClass*, const UE::Math::TTransform<double>*, AActor*, APawn*, ESpawnActorCollisionHandlingMethod, ESpawnActorScaleMethod>(this, "UWorld.SpawnActorDeferred<class AActor>(UClass*,UE::Math::TTransform<double>*,AActor*,APawn*,ESpawnActorCollisionHandlingMethod,ESpawnActorScaleMethod)", Class, Transform, Owner, Instigator, CollisionHandlingOverride, TransformScaleMethod); }
	AActor* SpawnActorAbsolute(UClass* Class, const UE::Math::TTransform<double>* AbsoluteTransform, const FActorSpawnParameters* SpawnParameters) { return NativeCall<AActor*, UClass*, const UE::Math::TTransform<double>*, const FActorSpawnParameters*>(this, "UWorld.SpawnActorAbsolute(UClass*,UE::Math::TTransform<double>*,FActorSpawnParameters*)", Class, AbsoluteTransform, SpawnParameters); }
	AActor* SpawnActor(UClass* Class, const UE::Math::TVector<double>* Location, const UE::Math::TRotator<double>* Rotation, const FActorSpawnParameters* SpawnParameters) { return NativeCall<AActor*, UClass*, const UE::Math::TVector<double>*, const UE::Math::TRotator<double>*, const FActorSpawnParameters*>(this, "UWorld.SpawnActor(UClass*,UE::Math::TVector<double>*,UE::Math::TRotator<double>*,FActorSpawnParameters&)", Class, Location, Rotation, SpawnParameters); }
	AActor* SpawnActor(UClass* Class, const UE::Math::TTransform<double>* UserTransformPtr, const FActorSpawnParameters* SpawnParameters) { return NativeCall<AActor*, UClass*, const UE::Math::TTransform<double>*, const FActorSpawnParameters*>(this, "UWorld.SpawnActor(UClass*,UE::Math::TTransform<double>*,FActorSpawnParameters&)", Class, UserTransformPtr, SpawnParameters); }
	bool DestroyActor(AActor* ThisActor, bool bNetForce, bool bShouldModifyLevel) { return NativeCall<bool, AActor*, bool, bool>(this, "UWorld.DestroyActor(AActor*,bool,bool)", ThisActor, bNetForce, bShouldModifyLevel); }
	APlayerController* SpawnPlayActor(UPlayer* NewPlayer, ENetRole RemoteRole, const struct FURL* InURL, const FUniqueNetIdRepl* UniqueId, FString* Error, unsigned __int8 InNetPlayerIndex) { return NativeCall<APlayerController*, UPlayer*, ENetRole, const FURL*, const FUniqueNetIdRepl*, FString*, unsigned __int8>(this, "UWorld.SpawnPlayActor(UPlayer*,ENetRole,FURL*,FUniqueNetIdRepl*,FString&,unsigned__int8)", NewPlayer, RemoteRole, InURL, UniqueId, Error, InNetPlayerIndex); }
	static bool FindTeleportSpot() { return NativeCall<bool>(nullptr, "UWorld.FindTeleportSpot()"); }
	static char EncroachingBlockingGeometry() { return NativeCall<char>(nullptr, "UWorld.EncroachingBlockingGeometry()"); }
	void TickNetClient(float DeltaSeconds) { NativeCall<void, float>(this, "UWorld.TickNetClient(float)", DeltaSeconds); }
	bool IsPaused() { return NativeCall<bool>(this, "UWorld.IsPaused()"); }
	void ProcessLevelStreamingVolumes(UE::Math::TVector<double>* OverrideViewLocation) { NativeCall<void, UE::Math::TVector<double>*>(this, "UWorld.ProcessLevelStreamingVolumes(UE::Math::TVector<double>*)", OverrideViewLocation); }
	void MarkActorComponentForNeededEndOfFrameUpdate(UActorComponent* Component, bool bForceGameThread) { NativeCall<void, UActorComponent*, bool>(this, "UWorld.MarkActorComponentForNeededEndOfFrameUpdate(UActorComponent*,bool)", Component, bForceGameThread); }
	void SendAllEndOfFrameUpdates() { NativeCall<void>(this, "UWorld.SendAllEndOfFrameUpdates()"); }
	void Tick(ELevelTick TickType, float DeltaSeconds) { NativeCall<void, ELevelTick, float>(this, "UWorld.Tick(ELevelTick,float)", TickType, DeltaSeconds); }
	void CleanupActors() { NativeCall<void>(this, "UWorld.CleanupActors()"); }
	//ULevelInstanceSubsystem* GetSubsystem<class ULevelInstanceSubsystem>() { return NativeCall<ULevelInstanceSubsystem*>(this, "UWorld.GetSubsystem<class ULevelInstanceSubsystem>()"); }
	ULevel* GetActiveLightingScenario() { return NativeCall<ULevel*>(this, "UWorld.GetActiveLightingScenario()"); }
	void SetupPhysicsTickFunctions(float DeltaSeconds) { NativeCall<void, float>(this, "UWorld.SetupPhysicsTickFunctions(float)", DeltaSeconds); }
	void FinishPhysicsSim() { NativeCall<void>(this, "UWorld.FinishPhysicsSim()"); }
	static void StaticRegisterNativesUWorld() { NativeCall<void>(nullptr, "UWorld.StaticRegisterNativesUWorld()"); }
	void Serialize(FStructuredArchiveRecord Record) { NativeCall<void, FStructuredArchiveRecord>(this, "UWorld.Serialize(FStructuredArchiveRecord)", Record); }
	void Serialize(FArchive* Ar) { NativeCall<void, FArchive*>(this, "UWorld.Serialize(FArchive*)", Ar); }
	static void AddReferencedObjects(UObject* InThis, FReferenceCollector* Collector) { NativeCall<void, UObject*, FReferenceCollector*>(nullptr, "UWorld.AddReferencedObjects(UObject*,FReferenceCollector*)", InThis, Collector); }
	void PostDuplicate(bool bDuplicateForPIE) { NativeCall<void, bool>(this, "UWorld.PostDuplicate(bool)", bDuplicateForPIE); }
	void BeginDestroy() { NativeCall<void>(this, "UWorld.BeginDestroy()"); }
	void FinishDestroy() { NativeCall<void>(this, "UWorld.FinishDestroy()"); }
	bool IsReadyForFinishDestroy() { return NativeCall<bool>(this, "UWorld.IsReadyForFinishDestroy()"); }
	void PostLoad() { NativeCall<void>(this, "UWorld.PostLoad()"); }
	//void PreDuplicate(FObjectDuplicationParameters* DupParams) { NativeCall<void, FObjectDuplicationParameters*>(this, "UWorld.PreDuplicate(FObjectDuplicationParameters*)", DupParams); }
	//void PreSaveRoot(FObjectPreSaveRootContext ObjectSaveContext) { NativeCall<void, FObjectPreSaveRootContext>(this, "UWorld.PreSaveRoot(FObjectPreSaveRootContext)", ObjectSaveContext); }
	//void PostSaveRoot(FObjectPostSaveRootContext ObjectSaveContext) { NativeCall<void, FObjectPostSaveRootContext>(this, "UWorld.PostSaveRoot(FObjectPostSaveRootContext)", ObjectSaveContext); }
	void SetupParameterCollectionInstances() { NativeCall<void>(this, "UWorld.SetupParameterCollectionInstances()"); }
	void AddParameterCollectionInstance(UMaterialParameterCollection* Collection, bool bUpdateScene) { NativeCall<void, UMaterialParameterCollection*, bool>(this, "UWorld.AddParameterCollectionInstance(UMaterialParameterCollection*,bool)", Collection, bUpdateScene); }
	//UMaterialParameterCollectionInstance* GetParameterCollectionInstance(const UMaterialParameterCollection* Collection) { return NativeCall<UMaterialParameterCollectionInstance*, const UMaterialParameterCollection*>(this, "UWorld.GetParameterCollectionInstance(UMaterialParameterCollection*)", Collection); }
	void UpdateParameterCollectionInstances(bool bUpdateInstanceUniformBuffers, bool bRecreateUniformBuffer) { NativeCall<void, bool, bool>(this, "UWorld.UpdateParameterCollectionInstances(bool,bool)", bUpdateInstanceUniformBuffers, bRecreateUniformBuffer); }
	//UAISystemBase* CreateAISystem() { return NativeCall<UAISystemBase*>(this, "UWorld.CreateAISystem()"); }
	static void InitWorld() { NativeCall<void>(nullptr, "UWorld.InitWorld()"); }
	void ConditionallyCreateDefaultLevelCollections() { NativeCall<void>(this, "UWorld.ConditionallyCreateDefaultLevelCollections()"); }
	static void InitializeNewWorld() { NativeCall<void>(nullptr, "UWorld.InitializeNewWorld()"); }
	void MarkObjectsPendingKill() { NativeCall<void>(this, "UWorld.MarkObjectsPendingKill()"); }
	static UWorld* CreateWorld(const EWorldType::Type InWorldType, bool bInformEngineOfWorld, FName WorldName, UPackage* InWorldPackage, bool bAddToRoot, ERHIFeatureLevel::Type InFeatureLevel, const struct FWorldInitializationValues* InIVS, bool bInSkipInitWorld) { return NativeCall<UWorld*, const EWorldType::Type, bool, FName, UPackage*, bool, ERHIFeatureLevel::Type, const FWorldInitializationValues*, bool>(nullptr, "UWorld.CreateWorld(EWorldType::Type,bool,FName,UPackage*,bool,ERHIFeatureLevel::Type,FWorldInitializationValues*,bool)", InWorldType, bInformEngineOfWorld, WorldName, InWorldPackage, bAddToRoot, InFeatureLevel, InIVS, bInSkipInitWorld); }
	void UpdateWorldComponents(bool bRerunConstructionScripts, bool bCurrentLevelOnly, FRegisterComponentContext* Context) { NativeCall<void, bool, bool, FRegisterComponentContext*>(this, "UWorld.UpdateWorldComponents(bool,bool,FRegisterComponentContext*)", bRerunConstructionScripts, bCurrentLevelOnly, Context); }
	bool UpdateCullDistanceVolumes(AActor* ActorToUpdate, UPrimitiveComponent* ComponentToUpdate) { return NativeCall<bool, AActor*, UPrimitiveComponent*>(this, "UWorld.UpdateCullDistanceVolumes(AActor*,UPrimitiveComponent*)", ActorToUpdate, ComponentToUpdate); }
	bool SupportsMakingVisibleTransactionRequests() { return NativeCall<bool>(this, "UWorld.SupportsMakingVisibleTransactionRequests()"); }
	bool SupportsMakingInvisibleTransactionRequests() { return NativeCall<bool>(this, "UWorld.SupportsMakingInvisibleTransactionRequests()"); }
	//void AddToWorld(ULevel* Level, const UE::Math::TTransform<double>* LevelTransform, bool bConsiderTimeLimit, FNetLevelVisibilityTransactionId TransactionId, ULevelStreaming* OwningLevelStreaming) { NativeCall<void, ULevel*, const UE::Math::TTransform<double>*, bool, FNetLevelVisibilityTransactionId, ULevelStreaming*>(this, "UWorld.AddToWorld(ULevel*,UE::Math::TTransform<double>*,bool,FNetLevelVisibilityTransactionId,ULevelStreaming*)", Level, LevelTransform, bConsiderTimeLimit, TransactionId, OwningLevelStreaming); }
	void BeginTearingDown() { NativeCall<void>(this, "UWorld.BeginTearingDown()"); }
	//void RemoveFromWorld(ULevel* Level, bool bAllowIncrementalRemoval, FNetLevelVisibilityTransactionId TransactionId, ULevelStreaming* OwningLevelStreaming) { NativeCall<void, ULevel*, bool, FNetLevelVisibilityTransactionId, ULevelStreaming*>(this, "UWorld.RemoveFromWorld(ULevel*,bool,FNetLevelVisibilityTransactionId,ULevelStreaming*)", Level, bAllowIncrementalRemoval, TransactionId, OwningLevelStreaming); }
	bool IsInstanced() { return NativeCall<bool>(this, "UWorld.IsInstanced()"); }
	static FString* ConvertToPIEPackageName(FString* result, const FString* PackageName, int PIEInstanceID) { return NativeCall<FString*, FString*, const FString*, int>(nullptr, "UWorld.ConvertToPIEPackageName(FString&,FString&,int)", result, PackageName, PIEInstanceID); }
	static FString* StripPIEPrefixFromPackageName(FString* result, const FString* PrefixedName, const FString* Prefix) { return NativeCall<FString*, FString*, const FString*, const FString*>(nullptr, "UWorld.StripPIEPrefixFromPackageName(FString&,FString&,FString&)", result, PrefixedName, Prefix); }
	bool RemapCompiledScriptActor(FString* Str) { return NativeCall<bool, FString*>(this, "UWorld.RemapCompiledScriptActor(FString&)", Str); }
	void BlockTillLevelStreamingCompleted() { NativeCall<void>(this, "UWorld.BlockTillLevelStreamingCompleted()"); }
	void InternalUpdateStreamingState() { NativeCall<void>(this, "UWorld.InternalUpdateStreamingState()"); }
	void UpdateLevelStreaming() { NativeCall<void>(this, "UWorld.UpdateLevelStreaming()"); }
	//void AddStreamingLevel(ULevelStreaming* StreamingLevelToAdd) { NativeCall<void, ULevelStreaming*>(this, "UWorld.AddStreamingLevel(ULevelStreaming*)", StreamingLevelToAdd); }
	static void SetStreamingLevels() { NativeCall<void>(nullptr, "UWorld.SetStreamingLevels()"); }
	bool RemoveStreamingLevelAt(int IndexToRemove) { return NativeCall<bool, int>(this, "UWorld.RemoveStreamingLevelAt(int)", IndexToRemove); }
	//bool RemoveStreamingLevel(ULevelStreaming* StreamingLevelToRemove) { return NativeCall<bool, ULevelStreaming*>(this, "UWorld.RemoveStreamingLevel(ULevelStreaming*)", StreamingLevelToRemove); }
	void PopulateStreamingLevelsToConsider() { NativeCall<void>(this, "UWorld.PopulateStreamingLevelsToConsider()"); }
	void FlushLevelStreaming(EFlushLevelStreamingType FlushType) { NativeCall<void, EFlushLevelStreamingType>(this, "UWorld.FlushLevelStreaming(EFlushLevelStreamingType)", FlushType); }
	bool IsVisibilityRequestPending() { return NativeCall<bool>(this, "UWorld.IsVisibilityRequestPending()"); }
	bool AreAlwaysLoadedLevelsLoaded() { return NativeCall<bool>(this, "UWorld.AreAlwaysLoadedLevelsLoaded()"); }
	void HandleTimelineScrubbed() { NativeCall<void>(this, "UWorld.HandleTimelineScrubbed()"); }
	bool HandleDemoScrubCommand(const wchar_t* Cmd, FOutputDevice* Ar, UWorld* InWorld) { return NativeCall<bool, const wchar_t*, FOutputDevice*, UWorld*>(this, "UWorld.HandleDemoScrubCommand(wchar_t*,FOutputDevice*,UWorld*)", Cmd, Ar, InWorld); }
	bool HandleDemoSpeedCommand(const wchar_t* Cmd, FOutputDevice* Ar, UWorld* InWorld) { return NativeCall<bool, const wchar_t*, FOutputDevice*, UWorld*>(this, "UWorld.HandleDemoSpeedCommand(wchar_t*,FOutputDevice*,UWorld*)", Cmd, Ar, InWorld); }
	bool Exec(UWorld* InWorld, const wchar_t* Cmd, FOutputDevice* Ar) { return NativeCall<bool, UWorld*, const wchar_t*, FOutputDevice*>(this, "UWorld.Exec(UWorld*,wchar_t*,FOutputDevice*)", InWorld, Cmd, Ar); }
	bool HandleDemoRecordCommand(const wchar_t* Cmd, FOutputDevice* Ar, UWorld* InWorld) { return NativeCall<bool, const wchar_t*, FOutputDevice*, UWorld*>(this, "UWorld.HandleDemoRecordCommand(wchar_t*,FOutputDevice*,UWorld*)", Cmd, Ar, InWorld); }
	bool HandleDemoPlayCommand(const wchar_t* Cmd, FOutputDevice* Ar, UWorld* InWorld) { return NativeCall<bool, const wchar_t*, FOutputDevice*, UWorld*>(this, "UWorld.HandleDemoPlayCommand(wchar_t*,FOutputDevice*,UWorld*)", Cmd, Ar, InWorld); }
	void DestroyDemoNetDriver() { NativeCall<void>(this, "UWorld.DestroyDemoNetDriver()"); }
	bool SetGameMode(const FURL* InURL) { return NativeCall<bool, const FURL*>(this, "UWorld.SetGameMode(FURL*)", InURL); }
	void InitializeActorsForPlay(const FURL* InURL, bool bResetTime, FRegisterComponentContext* Context) { NativeCall<void, const FURL*, bool, FRegisterComponentContext*>(this, "UWorld.InitializeActorsForPlay(FURL*,bool,FRegisterComponentContext*)", InURL, bResetTime, Context); }
	void BeginPlay() { NativeCall<void>(this, "UWorld.BeginPlay()"); }
	void CleanupWorldInternal(bool bSessionEnded, bool bCleanupResources, bool bWorldChanged) { NativeCall<void, bool, bool, bool>(this, "UWorld.CleanupWorldInternal(bool,bool,bool)", bSessionEnded, bCleanupResources, bWorldChanged); }
	//UGameViewportClient* GetGameViewport() { return NativeCall<UGameViewportClient*>(this, "UWorld.GetGameViewport()"); }
	APlayerController* GetFirstPlayerController() { return NativeCall<APlayerController*>(this, "UWorld.GetFirstPlayerController()"); }
	ULocalPlayer* GetFirstLocalPlayerFromController() { return NativeCall<ULocalPlayer*>(this, "UWorld.GetFirstLocalPlayerFromController()"); }
	void AddController(AController* Controller) { NativeCall<void, AController*>(this, "UWorld.AddController(AController*)", Controller); }
	void RemoveController(AController* Controller) { NativeCall<void, AController*>(this, "UWorld.RemoveController(AController*)", Controller); }
	void AddNetworkActor(AActor* Actor) { NativeCall<void, AActor*>(this, "UWorld.AddNetworkActor(AActor*)", Actor); }
	void RemoveNetworkActor(AActor* Actor) { NativeCall<void, AActor*>(this, "UWorld.RemoveNetworkActor(AActor*)", Actor); }
	APhysicsVolume* InternalGetDefaultPhysicsVolume() { return NativeCall<APhysicsVolume*>(this, "UWorld.InternalGetDefaultPhysicsVolume()"); }
	AWorldSettings* GetWorldSettings(bool bCheckStreamingPersistent, bool bChecked) { return NativeCall<AWorldSettings*, bool, bool>(this, "UWorld.GetWorldSettings(bool,bool)", bCheckStreamingPersistent, bChecked); }
	float GetDefaultGravityZ() { return NativeCall<float>(this, "UWorld.GetDefaultGravityZ()"); }
	FString* GetMapName(FString* result) {  return NativeCall<FString*, FString*>(this, "UWorld.GetMapName()", result);	}
	void WelcomePlayer(UNetConnection* Connection) { NativeCall<void, UNetConnection*>(this, "UWorld.WelcomePlayer(UNetConnection*)", Connection); }
	bool DestroySwappedPC(UNetConnection* Connection) { return NativeCall<bool, UNetConnection*>(this, "UWorld.DestroySwappedPC(UNetConnection*)", Connection); }
	void NotifyControlMessage(UNetConnection* Connection, unsigned __int8 MessageType, struct FInBunch* Bunch) { NativeCall<void, UNetConnection*, unsigned __int8, FInBunch*>(this, "UWorld.NotifyControlMessage(UNetConnection*,unsigned__int8,FInBunch*)", Connection, MessageType, Bunch); }
	bool Listen(FURL* InURL) { return NativeCall<bool, FURL*>(this, "UWorld.Listen(FURL*)", InURL); }
	FTimerManager* GetTimerManager() { return NativeCall<FTimerManager*>(this, "UWorld.GetTimerManager()"); }
	static char SetNewWorldOrigin() { return NativeCall<char>(nullptr, "UWorld.SetNewWorldOrigin()"); }
	void SeamlessTravel(const FString* SeamlessTravelURL, bool bAbsolute) { NativeCall<void, const FString*, bool>(this, "UWorld.SeamlessTravel(FString&,bool)", SeamlessTravelURL, bAbsolute); }
	bool IsInSeamlessTravel() { return NativeCall<bool>(this, "UWorld.IsInSeamlessTravel()"); }
	int GetActorCount() { return NativeCall<int>(this, "UWorld.GetActorCount()"); }
	bool IsGameWorld() { return NativeCall<bool>(this, "UWorld.IsGameWorld()"); }
	static FString* RemovePIEPrefix(FString* result, const FString* Source, int* OutPIEInstanceID) { return NativeCall<FString*, FString*, const FString*, int*>(nullptr, "UWorld.RemovePIEPrefix(FString&,FString&,int*)", result, Source, OutPIEInstanceID); }
	static UWorld* FindWorldInPackage(UPackage* Package) { return NativeCall<UWorld*, UPackage*>(nullptr, "UWorld.FindWorldInPackage(UPackage*)", Package); }
	static UWorld* FollowWorldRedirectorInPackage(UPackage* Package, UObjectRedirector** OptionalOutRedirector) { return NativeCall<UWorld*, UPackage*, UObjectRedirector**>(nullptr, "UWorld.FollowWorldRedirectorInPackage(UPackage*,UObjectRedirector**)", Package, OptionalOutRedirector); }
	bool ServerTravel(const FString* FURL, bool bAbsolute, bool bShouldSkipGameNotify) { return NativeCall<bool, const FString*, bool, bool>(this, "UWorld.ServerTravel(FString&,bool,bool)", FURL, bAbsolute, bShouldSkipGameNotify); }
	//void SetNavigationSystem(UNavigationSystemBase* InNavigationSystem) { NativeCall<void, UNavigationSystemBase*>(this, "UWorld.SetNavigationSystem(UNavigationSystemBase*)", InNavigationSystem); }
	ENetMode InternalGetNetMode() { return NativeCall<ENetMode>(this, "UWorld.InternalGetNetMode()"); }
	bool IsRecordingClientReplay() { return NativeCall<bool>(this, "UWorld.IsRecordingClientReplay()"); }
	ENetMode AttemptDeriveFromURL() { return NativeCall<ENetMode>(this, "UWorld.AttemptDeriveFromURL()"); }
	void SetGameState(AGameStateBase* NewGameState) { NativeCall<void, AGameStateBase*>(this, "UWorld.SetGameState(AGameStateBase*)", NewGameState); }
	//FLevelCollection* FindOrAddCollectionByType(const ELevelCollectionType InType) { return NativeCall<FLevelCollection*, const ELevelCollectionType>(this, "UWorld.FindOrAddCollectionByType(ELevelCollectionType)", InType); }
	void SetActiveLevelCollection(int LevelCollectionIndex) { NativeCall<void, int>(this, "UWorld.SetActiveLevelCollection(int)", LevelCollectionIndex); }
	bool ResolveSubobject(const wchar_t* SubObjectPath, UObject** OutObject, bool bLoadIfExists) { return NativeCall<bool, const wchar_t*, UObject**, bool>(this, "UWorld.ResolveSubobject(wchar_t*,UObject**,bool)", SubObjectPath, OutObject, bLoadIfExists); }
	FPrimaryAssetId* GetPrimaryAssetId(FPrimaryAssetId* result) { return NativeCall<FPrimaryAssetId*, FPrimaryAssetId*>(this, "UWorld.GetPrimaryAssetId(FPrimaryAssetId*)", result); }
	//void InsertPostProcessVolume(IInterface_PostProcessVolume* InVolume) { NativeCall<void, IInterface_PostProcessVolume*>(this, "UWorld.InsertPostProcessVolume(IInterface_PostProcessVolume*)", InVolume); }
	//void RemovePostProcessVolume(IInterface_PostProcessVolume* InVolume) { NativeCall<void, IInterface_PostProcessVolume*>(this, "UWorld.RemovePostProcessVolume(IInterface_PostProcessVolume*)", InVolume); }
	static void AddPostProcessingSettings() { NativeCall<void>(nullptr, "UWorld.AddPostProcessingSettings()"); }
	//void SetAudioDevice(const FAudioDeviceHandle* InHandle) { NativeCall<void, const FAudioDeviceHandle*>(this, "UWorld.SetAudioDevice(FAudioDeviceHandle*)", InHandle); }
	//FAudioDeviceHandle* GetAudioDevice(FAudioDeviceHandle* result) { return NativeCall<FAudioDeviceHandle*, FAudioDeviceHandle*>(this, "UWorld.GetAudioDevice(FAudioDeviceHandle*)", result); }
	FAudioDevice* GetAudioDeviceRaw() { return NativeCall<FAudioDevice*>(this, "UWorld.GetAudioDeviceRaw()"); }
	//UHLODSubsystem* GetSubsystem<class UHLODSubsystem>() { return NativeCall<UHLODSubsystem*>(this, "UWorld.GetSubsystem<class UHLODSubsystem>()"); }
};

struct UPrimalGameData : UObject
{
	// Fields

	FString& ModNameField() { return *GetNativePointerField<FString*>(this, "UPrimalGameData.ModName"); }
	FString& ModDescriptionField() { return *GetNativePointerField<FString*>(this, "UPrimalGameData.ModDescription"); }
	//FPrimalCharacterStatusValueDefinition[12] & StatusValueDefinitionsField() { return *GetNativePointerField<FPrimalCharacterStatusValueDefinition[12] *>(this, "UPrimalGameData.StatusValueDefinitions"); }
	//FPrimalCharacterStatusStateDefinition[14] & StatusStateDefinitionsField() { return *GetNativePointerField<FPrimalCharacterStatusStateDefinition[14] *>(this, "UPrimalGameData.StatusStateDefinitions"); }
	//FPrimalItemStatDefinition[8] & ItemStatDefinitionsField() { return *GetNativePointerField<FPrimalItemStatDefinition[8] *>(this, "UPrimalGameData.ItemStatDefinitions"); }
	//FPrimalItemDefinition[9] & ItemTypeDefinitionsField() { return *GetNativePointerField<FPrimalItemDefinition[9] *>(this, "UPrimalGameData.ItemTypeDefinitions"); }
	//FPrimalEquipmentDefinition[12] & EquipmentTypeDefinitionsField() { return *GetNativePointerField<FPrimalEquipmentDefinition[12] *>(this, "UPrimalGameData.EquipmentTypeDefinitions"); }
	//TArray<TSubclassOf<UPrimalItem>, TSizedDefaultAllocator<32> >& MasterItemListField() { return *GetNativePointerField<//TArray<TSubclassOf<UPrimalItem>, TSizedDefaultAllocator<32> >*>(this, "UPrimalGameData.MasterItemList"); }
	TArray<FPrimalItemQuality, TSizedDefaultAllocator<32> >& ItemQualityDefinitionsField() { return *GetNativePointerField<TArray<FPrimalItemQuality, TSizedDefaultAllocator<32> >*>(this, "UPrimalGameData.ItemQualityDefinitions"); }
	//TArray<TSubclassOf<UPrimalEngramEntry>, TSizedDefaultAllocator<32> >& EngramBlueprintClassesField() { return *GetNativePointerField<//TArray<TSubclassOf<UPrimalEngramEntry>, TSizedDefaultAllocator<32> >*>(this, "UPrimalGameData.EngramBlueprintClasses"); }
	//TArray<TSubclassOf<UPrimalEngramEntry>, TSizedDefaultAllocator<32> >& AdditionalEngramBlueprintClassesField() { return *GetNativePointerField<//TArray<TSubclassOf<UPrimalEngramEntry>, TSizedDefaultAllocator<32> >*>(this, "UPrimalGameData.AdditionalEngramBlueprintClasses"); }
	//TArray<TSubclassOf<UPrimalEngramEntry>, TSizedDefaultAllocator<32> >& RemoveEngramBlueprintClassesField() { return *GetNativePointerField<//TArray<TSubclassOf<UPrimalEngramEntry>, TSizedDefaultAllocator<32> >*>(this, "UPrimalGameData.RemoveEngramBlueprintClasses"); }
	TArray<FStatusValueModifierDescription, TSizedDefaultAllocator<32> >& StatusValueModifierDescriptionsField() { return *GetNativePointerField<TArray<FStatusValueModifierDescription, TSizedDefaultAllocator<32> >*>(this, "UPrimalGameData.StatusValueModifierDescriptions"); }
	TArray<FString, TSizedDefaultAllocator<32> >& PlayerSpawnRegionsField() { return *GetNativePointerField<TArray<FString, TSizedDefaultAllocator<32> >*>(this, "UPrimalGameData.PlayerSpawnRegions"); }
	USoundBase*& TutorialDisplaySoundField() { return *GetNativePointerField<USoundBase**>(this, "UPrimalGameData.TutorialDisplaySound"); }
	USoundBase*& Sound_StartItemDragField() { return *GetNativePointerField<USoundBase**>(this, "UPrimalGameData.Sound_StartItemDrag"); }
	USoundBase*& Sound_StopItemDragField() { return *GetNativePointerField<USoundBase**>(this, "UPrimalGameData.Sound_StopItemDrag"); }
	UTexture2D*& PreventGrindingIconField() { return *GetNativePointerField<UTexture2D**>(this, "UPrimalGameData.PreventGrindingIcon"); }
	USoundClass*& ExplorerNoteAudioSoundClassField() { return *GetNativePointerField<USoundClass**>(this, "UPrimalGameData.ExplorerNoteAudioSoundClass"); }
	USoundBase*& Sound_CancelPlacingStructureField() { return *GetNativePointerField<USoundBase**>(this, "UPrimalGameData.Sound_CancelPlacingStructure"); }
	USoundBase*& Sound_ChooseStructureRotationField() { return *GetNativePointerField<USoundBase**>(this, "UPrimalGameData.Sound_ChooseStructureRotation"); }
	USoundBase*& Sound_FailPlacingStructureField() { return *GetNativePointerField<USoundBase**>(this, "UPrimalGameData.Sound_FailPlacingStructure"); }
	USoundBase*& Sound_ConfirmPlacingStructureField() { return *GetNativePointerField<USoundBase**>(this, "UPrimalGameData.Sound_ConfirmPlacingStructure"); }
	USoundBase*& Sound_StartPlacingStructureField() { return *GetNativePointerField<USoundBase**>(this, "UPrimalGameData.Sound_StartPlacingStructure"); }
	USoundBase*& Sound_CorpseDecomposeField() { return *GetNativePointerField<USoundBase**>(this, "UPrimalGameData.Sound_CorpseDecompose"); }
	USoundBase*& Sound_ApplyLevelUpField() { return *GetNativePointerField<USoundBase**>(this, "UPrimalGameData.Sound_ApplyLevelUp"); }
	USoundBase*& Sound_ApplyLevelPointField() { return *GetNativePointerField<USoundBase**>(this, "UPrimalGameData.Sound_ApplyLevelPoint"); }
	USoundBase*& Sound_LearnedEngramField() { return *GetNativePointerField<USoundBase**>(this, "UPrimalGameData.Sound_LearnedEngram"); }
	USoundBase*& Sound_ReconnectToCharacterField() { return *GetNativePointerField<USoundBase**>(this, "UPrimalGameData.Sound_ReconnectToCharacter"); }
	USoundBase*& Sound_DropAllItemsField() { return *GetNativePointerField<USoundBase**>(this, "UPrimalGameData.Sound_DropAllItems"); }
	USoundBase*& Sound_TransferAllItemsToRemoteField() { return *GetNativePointerField<USoundBase**>(this, "UPrimalGameData.Sound_TransferAllItemsToRemote"); }
	USoundBase*& Sound_TransferAllItemsFromRemoteField() { return *GetNativePointerField<USoundBase**>(this, "UPrimalGameData.Sound_TransferAllItemsFromRemote"); }
	USoundBase*& Sound_TransferItemToRemoteField() { return *GetNativePointerField<USoundBase**>(this, "UPrimalGameData.Sound_TransferItemToRemote"); }
	USoundBase*& Sound_TransferItemFromRemoteField() { return *GetNativePointerField<USoundBase**>(this, "UPrimalGameData.Sound_TransferItemFromRemote"); }
	USoundBase*& Sound_AddItemToSlotField() { return *GetNativePointerField<USoundBase**>(this, "UPrimalGameData.Sound_AddItemToSlot"); }
	USoundBase*& Sound_RemoveItemFromSlotField() { return *GetNativePointerField<USoundBase**>(this, "UPrimalGameData.Sound_RemoveItemFromSlot"); }
	USoundBase*& Sound_ClearCraftQueueField() { return *GetNativePointerField<USoundBase**>(this, "UPrimalGameData.Sound_ClearCraftQueue"); }
	USoundBase*& Sound_AddToCraftQueueField() { return *GetNativePointerField<USoundBase**>(this, "UPrimalGameData.Sound_AddToCraftQueue"); }
	USoundBase*& Sound_AddToCraftQueueAltField() { return *GetNativePointerField<USoundBase**>(this, "UPrimalGameData.Sound_AddToCraftQueueAlt"); }
	USoundBase*& Sound_SetRadioFrequencyField() { return *GetNativePointerField<USoundBase**>(this, "UPrimalGameData.Sound_SetRadioFrequency"); }
	USoundBase*& Sound_AddPinToMapField() { return *GetNativePointerField<USoundBase**>(this, "UPrimalGameData.Sound_AddPinToMap"); }
	USoundBase*& Sound_RemovePinFromMapField() { return *GetNativePointerField<USoundBase**>(this, "UPrimalGameData.Sound_RemovePinFromMap"); }
	USoundBase*& Sound_ApplyDyeField() { return *GetNativePointerField<USoundBase**>(this, "UPrimalGameData.Sound_ApplyDye"); }
	USoundBase*& Sound_ApplyPaintField() { return *GetNativePointerField<USoundBase**>(this, "UPrimalGameData.Sound_ApplyPaint"); }
	USoundBase*& Sound_SetTextGenericField() { return *GetNativePointerField<USoundBase**>(this, "UPrimalGameData.Sound_SetTextGeneric"); }
	USoundBase*& Sound_SplitItemStackField() { return *GetNativePointerField<USoundBase**>(this, "UPrimalGameData.Sound_SplitItemStack"); }
	USoundBase*& Sound_MergeItemStackField() { return *GetNativePointerField<USoundBase**>(this, "UPrimalGameData.Sound_MergeItemStack"); }
	USoundBase*& Sound_InputPinDigitField() { return *GetNativePointerField<USoundBase**>(this, "UPrimalGameData.Sound_InputPinDigit"); }
	USoundBase*& Sound_PinValidatedField() { return *GetNativePointerField<USoundBase**>(this, "UPrimalGameData.Sound_PinValidated"); }
	USoundBase*& Sound_PinRejectedField() { return *GetNativePointerField<USoundBase**>(this, "UPrimalGameData.Sound_PinRejected"); }
	USoundBase*& Sound_TribeWarBeginField() { return *GetNativePointerField<USoundBase**>(this, "UPrimalGameData.Sound_TribeWarBegin"); }
	USoundBase*& Sound_TribeWarEndField() { return *GetNativePointerField<USoundBase**>(this, "UPrimalGameData.Sound_TribeWarEnd"); }
	USoundBase*& Sound_DropInventoryItemField() { return *GetNativePointerField<USoundBase**>(this, "UPrimalGameData.Sound_DropInventoryItem"); }
	USoundBase*& Sound_RefillWaterContainerField() { return *GetNativePointerField<USoundBase**>(this, "UPrimalGameData.Sound_RefillWaterContainer"); }
	TArray<FAppIDItem, TSizedDefaultAllocator<32> >& CoreAppIDItemsField() { return *GetNativePointerField<TArray<FAppIDItem, TSizedDefaultAllocator<32> >*>(this, "UPrimalGameData.CoreAppIDItems"); }
	TArray<FAppIDItem, TSizedDefaultAllocator<32> >& AppIDItemsField() { return *GetNativePointerField<TArray<FAppIDItem, TSizedDefaultAllocator<32> >*>(this, "UPrimalGameData.AppIDItems"); }
	TArray<UPrimalEngramEntry*, TSizedDefaultAllocator<32> >& EngramBlueprintEntriesField() { return *GetNativePointerField<TArray<UPrimalEngramEntry*, TSizedDefaultAllocator<32> >*>(this, "UPrimalGameData.EngramBlueprintEntries"); }
	TArray<UPrimalDinoEntry*, TSizedDefaultAllocator<32> >& DinoEntriesObjectsField() { return *GetNativePointerField<TArray<UPrimalDinoEntry*, TSizedDefaultAllocator<32> >*>(this, "UPrimalGameData.DinoEntriesObjects"); }
	TArray<UGenericDataListEntry*, TSizedDefaultAllocator<32> >& ExplorerNoteEntriesObjectsField() { return *GetNativePointerField<TArray<UGenericDataListEntry*, TSizedDefaultAllocator<32> >*>(this, "UPrimalGameData.ExplorerNoteEntriesObjects"); }
	TArray<UGenericDataListEntry*, TSizedDefaultAllocator<32> >& HeadHairStylesEntriesObjectsField() { return *GetNativePointerField<TArray<UGenericDataListEntry*, TSizedDefaultAllocator<32> >*>(this, "UPrimalGameData.HeadHairStylesEntriesObjects"); }
	TArray<UGenericDataListEntry*, TSizedDefaultAllocator<32> >& FacialHairStylesEntriesObjectsField() { return *GetNativePointerField<TArray<UGenericDataListEntry*, TSizedDefaultAllocator<32> >*>(this, "UPrimalGameData.FacialHairStylesEntriesObjects"); }
// TSubclassOf<UToolTipWidget>& DefaultMultiUseToolTipWidgetField() { return *GetNativePointerField<TSubclassOf<UToolTipWidget>*>(this, "UPrimalGameData.DefaultMultiUseToolTipWidget"); }
// TSubclassOf<UToolTipWidget>& DefaultToolTipWidgetField() { return *GetNativePointerField<TSubclassOf<UToolTipWidget>*>(this, "UPrimalGameData.DefaultToolTipWidget"); }
// TSubclassOf<UToolTipWidget>& DefaultDinoMinimalTooltipWidgetField() { return *GetNativePointerField<TSubclassOf<UToolTipWidget>*>(this, "UPrimalGameData.DefaultDinoMinimalTooltipWidget"); }
// TSubclassOf<UPrimalItemToolTipWidget>& DefaultItemToolTipWidgetField() { return *GetNativePointerField<TSubclassOf<UPrimalItemToolTipWidget>*>(this, "UPrimalGameData.DefaultItemToolTipWidget"); }
// TSubclassOf<UPrimalItem>& StarterNoteItemField() { return *GetNativePointerField<TSubclassOf<UPrimalItem>*>(this, "UPrimalGameData.StarterNoteItem"); }
	//TArray<TSubclassOf<UPrimalItem>, TSizedDefaultAllocator<32> >& PrimaryResourcesField() { return *GetNativePointerField<//TArray<TSubclassOf<UPrimalItem>, TSizedDefaultAllocator<32> >*>(this, "UPrimalGameData.PrimaryResources"); }
// TSubclassOf<ADroppedItem>& GenericDroppedItemTemplateField() { return *GetNativePointerField<TSubclassOf<ADroppedItem>*>(this, "UPrimalGameData.GenericDroppedItemTemplate"); }
	UMaterialInterface*& PostProcess_KnockoutBlurField() { return *GetNativePointerField<UMaterialInterface**>(this, "UPrimalGameData.PostProcess_KnockoutBlur"); }
	UMaterialInterface*& AdditionalDeathPostProcessEffectField() { return *GetNativePointerField<UMaterialInterface**>(this, "UPrimalGameData.AdditionalDeathPostProcessEffect"); }
	//TArray<TSoftObjectPtr<UMaterialInterface>, TSizedDefaultAllocator<32> >& BuffPostProcessEffectsField() { return *GetNativePointerField<//TArray<TSoftObjectPtr<UMaterialInterface>, TSizedDefaultAllocator<32> >*>(this, "UPrimalGameData.BuffPostProcessEffects"); }
	//TArray<TSoftObjectPtr<UMaterialInterface>, TSizedDefaultAllocator<32> >& AdditionalBuffPostProcessEffectsField() { return *GetNativePointerField<//TArray<TSoftObjectPtr<UMaterialInterface>, TSizedDefaultAllocator<32> >*>(this, "UPrimalGameData.AdditionalBuffPostProcessEffects"); }
	TArray<FRangedValues, TSizedDefaultAllocator<32> >& EngramPointPurchaseRangesField() { return *GetNativePointerField<TArray<FRangedValues, TSizedDefaultAllocator<32> >*>(this, "UPrimalGameData.EngramPointPurchaseRanges"); }
// TSubclassOf<ADroppedItemLowQuality>& GenericDroppedItemTemplateLowQualityField() { return *GetNativePointerField<TSubclassOf<ADroppedItemLowQuality>*>(this, "UPrimalGameData.GenericDroppedItemTemplateLowQuality"); }
	TArray<FTutorialDefinition, TSizedDefaultAllocator<32> >& TutorialDefinitionsField() { return *GetNativePointerField<TArray<FTutorialDefinition, TSizedDefaultAllocator<32> >*>(this, "UPrimalGameData.TutorialDefinitions"); }
	UTexture2D*& UnknownIconField() { return *GetNativePointerField<UTexture2D**>(this, "UPrimalGameData.UnknownIcon"); }
	UMaterialInterface*& UnknownMaterialField() { return *GetNativePointerField<UMaterialInterface**>(this, "UPrimalGameData.UnknownMaterial"); }
	UTexture2D*& MasterDyeListLUTField() { return *GetNativePointerField<UTexture2D**>(this, "UPrimalGameData.MasterDyeListLUT"); }
	UTexture2D*& WhiteTextureField() { return *GetNativePointerField<UTexture2D**>(this, "UPrimalGameData.WhiteTexture"); }
	UTexture2D*& BlueprintBackgroundField() { return *GetNativePointerField<UTexture2D**>(this, "UPrimalGameData.BlueprintBackground"); }
	UTexture2D*& BabyCuddleIconField() { return *GetNativePointerField<UTexture2D**>(this, "UPrimalGameData.BabyCuddleIcon"); }
	UTexture2D*& ParentDinoIconField() { return *GetNativePointerField<UTexture2D**>(this, "UPrimalGameData.ParentDinoIcon"); }
	UTexture2D*& ImprintedRiderIconField() { return *GetNativePointerField<UTexture2D**>(this, "UPrimalGameData.ImprintedRiderIcon"); }
	UTexture2D*& WeaponAccessoryActivatedIconField() { return *GetNativePointerField<UTexture2D**>(this, "UPrimalGameData.WeaponAccessoryActivatedIcon"); }
	UTexture2D*& EngramBackgroundField() { return *GetNativePointerField<UTexture2D**>(this, "UPrimalGameData.EngramBackground"); }
	UTexture2D*& VoiceChatIconField() { return *GetNativePointerField<UTexture2D**>(this, "UPrimalGameData.VoiceChatIcon"); }
	UTexture2D*& VoiceChatMutedIconField() { return *GetNativePointerField<UTexture2D**>(this, "UPrimalGameData.VoiceChatMutedIcon"); }
	UTexture2D*& ItemButtonRecentlySelectedBackgroundField() { return *GetNativePointerField<UTexture2D**>(this, "UPrimalGameData.ItemButtonRecentlySelectedBackground"); }
	//TArray<TSubclassOf<UPrimalDinoEntry>, TSizedDefaultAllocator<32> >& DinoEntriesField() { return *GetNativePointerField<//TArray<TSubclassOf<UPrimalDinoEntry>, TSizedDefaultAllocator<32> >*>(this, "UPrimalGameData.DinoEntries"); }
	//TArray<TSubclassOf<UPrimalDinoEntry>, TSizedDefaultAllocator<32> >& AdditionalDinoEntriesField() { return *GetNativePointerField<//TArray<TSubclassOf<UPrimalDinoEntry>, TSizedDefaultAllocator<32> >*>(this, "UPrimalGameData.AdditionalDinoEntries"); }
	float& GlobalGeneralArmorDegradationMultiplierField() { return *GetNativePointerField<float*>(this, "UPrimalGameData.GlobalGeneralArmorDegradationMultiplier"); }
	float& GlobalSpecificArmorDegradationMultiplierField() { return *GetNativePointerField<float*>(this, "UPrimalGameData.GlobalSpecificArmorDegradationMultiplier"); }
	float& GlobalSpecificArmorRatingMultiplierField() { return *GetNativePointerField<float*>(this, "UPrimalGameData.GlobalSpecificArmorRatingMultiplier"); }
	float& GlobalGeneralArmorRatingMultiplierField() { return *GetNativePointerField<float*>(this, "UPrimalGameData.GlobalGeneralArmorRatingMultiplier"); }
	float& EnemyFoundationPreventionRadiusField() { return *GetNativePointerField<float*>(this, "UPrimalGameData.EnemyFoundationPreventionRadius"); }
	TArray<FColorDefinition, TSizedDefaultAllocator<32> >& ColorDefinitionsField() { return *GetNativePointerField<TArray<FColorDefinition, TSizedDefaultAllocator<32> >*>(this, "UPrimalGameData.ColorDefinitions"); }
	TArray<UObject*, TSizedDefaultAllocator<32> >& ExtraResourcesField() { return *GetNativePointerField<TArray<UObject*, TSizedDefaultAllocator<32> >*>(this, "UPrimalGameData.ExtraResources"); }
	TArray<UObject*, TSizedDefaultAllocator<32> >& BaseExtraResourcesField() { return *GetNativePointerField<TArray<UObject*, TSizedDefaultAllocator<32> >*>(this, "UPrimalGameData.BaseExtraResources"); }
	//TArray<//TSoftClassPtr<UObject>, TSizedDefaultAllocator<32> >& BaseExtraResourcesSoftField() { return *GetNativePointerField<//TArray<//TSoftClassPtr<UObject>, TSizedDefaultAllocator<32> >*>(this, "UPrimalGameData.BaseExtraResourcesSoft"); }
	//TArray<//TSoftClassPtr<UObject>, TSizedDefaultAllocator<32> >& BaseExtraResourcesContainersSoftField() { return *GetNativePointerField<//TArray<//TSoftClassPtr<UObject>, TSizedDefaultAllocator<32> >*>(this, "UPrimalGameData.BaseExtraResourcesContainersSoft"); }
	USoundBase*& CombatMusicDayField() { return *GetNativePointerField<USoundBase**>(this, "UPrimalGameData.CombatMusicDay"); }
	USoundBase*& CombatMusicNightField() { return *GetNativePointerField<USoundBase**>(this, "UPrimalGameData.CombatMusicNight"); }
	USoundBase*& CombatMusicDay_HeavyField() { return *GetNativePointerField<USoundBase**>(this, "UPrimalGameData.CombatMusicDay_Heavy"); }
	USoundBase*& CombatMusicNight_HeavyField() { return *GetNativePointerField<USoundBase**>(this, "UPrimalGameData.CombatMusicNight_Heavy"); }
	USoundBase*& LevelUpStingerSoundField() { return *GetNativePointerField<USoundBase**>(this, "UPrimalGameData.LevelUpStingerSound"); }
	USoundBase*& TrackMissionSoundField() { return *GetNativePointerField<USoundBase**>(this, "UPrimalGameData.TrackMissionSound"); }
	USoundBase*& UntrackMissionSoundField() { return *GetNativePointerField<USoundBase**>(this, "UPrimalGameData.UntrackMissionSound"); }
	//FPlayerCharacterGenderDefinition[2] & PlayerCharacterGenderDefinitionsField() { return *GetNativePointerField<FPlayerCharacterGenderDefinition[2] *>(this, "UPrimalGameData.PlayerCharacterGenderDefinitions"); }
// TSubclassOf<AGameMode>& DefaultGameModeField() { return *GetNativePointerField<TSubclassOf<AGameMode>*>(this, "UPrimalGameData.DefaultGameMode"); }
	//FLevelExperienceRamp[4] & LevelExperienceRampsField() { return *GetNativePointerField<FLevelExperienceRamp[4] *>(this, "UPrimalGameData.LevelExperienceRamps"); }
	//FLevelExperienceRamp[4] & SinglePlayerLevelExperienceRampsField() { return *GetNativePointerField<FLevelExperienceRamp[4] *>(this, "UPrimalGameData.SinglePlayerLevelExperienceRamps"); }
	TArray<FNamedTeamDefinition, TSizedDefaultAllocator<32> >& NamedTeamDefinitionsField() { return *GetNativePointerField<TArray<FNamedTeamDefinition, TSizedDefaultAllocator<32> >*>(this, "UPrimalGameData.NamedTeamDefinitions"); }
	TArray<int, TSizedDefaultAllocator<32> >& PlayerLevelEngramPointsField() { return *GetNativePointerField<TArray<int, TSizedDefaultAllocator<32> >*>(this, "UPrimalGameData.PlayerLevelEngramPoints"); }
	TArray<int, TSizedDefaultAllocator<32> >& PlayerLevelEngramPointsSPField() { return *GetNativePointerField<TArray<int, TSizedDefaultAllocator<32> >*>(this, "UPrimalGameData.PlayerLevelEngramPointsSP"); }
	TArray<FString, TSizedDefaultAllocator<32> >& PreventBuildStructureReasonStringsField() { return *GetNativePointerField<TArray<FString, TSizedDefaultAllocator<32> >*>(this, "UPrimalGameData.PreventBuildStructureReasonStrings"); }
	TArray<FExplorerNoteAchievement, TSizedDefaultAllocator<32> >& ExplorerNoteAchievementsField() { return *GetNativePointerField<TArray<FExplorerNoteAchievement, TSizedDefaultAllocator<32> >*>(this, "UPrimalGameData.ExplorerNoteAchievements"); }
	TArray<FClassRemapping, TSizedDefaultAllocator<32> >& Remap_NPCField() { return *GetNativePointerField<TArray<FClassRemapping, TSizedDefaultAllocator<32> >*>(this, "UPrimalGameData.Remap_NPC"); }
	TArray<FClassRemapping, TSizedDefaultAllocator<32> >& Remap_SupplyCratesField() { return *GetNativePointerField<TArray<FClassRemapping, TSizedDefaultAllocator<32> >*>(this, "UPrimalGameData.Remap_SupplyCrates"); }
	TArray<FActiveEventSupplyCrateWeight, TSizedDefaultAllocator<32> >& Remap_ActiveEventSupplyCratesField() { return *GetNativePointerField<TArray<FActiveEventSupplyCrateWeight, TSizedDefaultAllocator<32> >*>(this, "UPrimalGameData.Remap_ActiveEventSupplyCrates"); }
	TArray<FClassRemapping, TSizedDefaultAllocator<32> >& Remap_ResourceComponentsField() { return *GetNativePointerField<TArray<FClassRemapping, TSizedDefaultAllocator<32> >*>(this, "UPrimalGameData.Remap_ResourceComponents"); }
	TArray<FClassRemapping, TSizedDefaultAllocator<32> >& Remap_NPCSpawnEntriesField() { return *GetNativePointerField<TArray<FClassRemapping, TSizedDefaultAllocator<32> >*>(this, "UPrimalGameData.Remap_NPCSpawnEntries"); }
	TArray<FClassRemapping, TSizedDefaultAllocator<32> >& Remap_EngramsField() { return *GetNativePointerField<TArray<FClassRemapping, TSizedDefaultAllocator<32> >*>(this, "UPrimalGameData.Remap_Engrams"); }
	TArray<FClassRemapping, TSizedDefaultAllocator<32> >& Remap_ItemsField() { return *GetNativePointerField<TArray<FClassRemapping, TSizedDefaultAllocator<32> >*>(this, "UPrimalGameData.Remap_Items"); }
	TArray<FClassAddition, TSizedDefaultAllocator<32> >& AdditionalStructureEngramsField() { return *GetNativePointerField<TArray<FClassAddition, TSizedDefaultAllocator<32> >*>(this, "UPrimalGameData.AdditionalStructureEngrams"); }
	TArray<FBuffAddition, TSizedDefaultAllocator<32> >& AdditionalDefaultBuffsField() { return *GetNativePointerField<TArray<FBuffAddition, TSizedDefaultAllocator<32> >*>(this, "UPrimalGameData.AdditionalDefaultBuffs"); }
	TArray<FAvailableMission, TSizedDefaultAllocator<32> >& AvailableMissionsField() { return *GetNativePointerField<TArray<FAvailableMission, TSizedDefaultAllocator<32> >*>(this, "UPrimalGameData.AvailableMissions"); }
// TSubclassOf<AActor>& ActorToSpawnUponEnemyCoreStructureDeathField() { return *GetNativePointerField<TSubclassOf<AActor>*>(this, "UPrimalGameData.ActorToSpawnUponEnemyCoreStructureDeath"); }
	//TArray<//TSoftClassPtr<APrimalStructure>, TSizedDefaultAllocator<32> >& AdditionalStructuresToPlaceField() { return *GetNativePointerField<//TArray<//TSoftClassPtr<APrimalStructure>, TSizedDefaultAllocator<32> >*>(this, "UPrimalGameData.AdditionalStructuresToPlace"); }
	TArray<FStructureToBuildAddition, TSizedDefaultAllocator<32> >& AdditionalStructuresToBuildField() { return *GetNativePointerField<TArray<FStructureToBuildAddition, TSizedDefaultAllocator<32> >*>(this, "UPrimalGameData.AdditionalStructuresToBuild"); }
	TArray<FStructureVariantAddition, TSizedDefaultAllocator<32> >& AdditionalStructureVariantsField() { return *GetNativePointerField<TArray<FStructureVariantAddition, TSizedDefaultAllocator<32> >*>(this, "UPrimalGameData.AdditionalStructureVariants"); }
	//TArray<TSubclassOf<UPrimalItem>, TSizedDefaultAllocator<32> >& MasterDyeListField() { return *GetNativePointerField<//TArray<TSubclassOf<UPrimalItem>, TSizedDefaultAllocator<32> >*>(this, "UPrimalGameData.MasterDyeList"); }
	TArray<FColor, TSizedDefaultAllocator<32> >& MasterColorTableField() { return *GetNativePointerField<TArray<FColor, TSizedDefaultAllocator<32> >*>(this, "UPrimalGameData.MasterColorTable"); }
	float& EnemyCoreStructureDeathActorRadiusBuildCheckField() { return *GetNativePointerField<float*>(this, "UPrimalGameData.EnemyCoreStructureDeathActorRadiusBuildCheck"); }
// TSubclassOf<APrimalStructureItemContainer>& DeathDestructionDepositInventoryClassField() { return *GetNativePointerField<TSubclassOf<APrimalStructureItemContainer>*>(this, "UPrimalGameData.DeathDestructionDepositInventoryClass"); }
	UTexture2D*& MateBoostIconField() { return *GetNativePointerField<UTexture2D**>(this, "UPrimalGameData.MateBoostIcon"); }
	UTexture2D*& EggBoostIconField() { return *GetNativePointerField<UTexture2D**>(this, "UPrimalGameData.EggBoostIcon"); }
	UTexture2D*& MatingIconField() { return *GetNativePointerField<UTexture2D**>(this, "UPrimalGameData.MatingIcon"); }
	UTexture2D*& NearFeedIconField() { return *GetNativePointerField<UTexture2D**>(this, "UPrimalGameData.NearFeedIcon"); }
	UTexture2D*& BuffedIconField() { return *GetNativePointerField<UTexture2D**>(this, "UPrimalGameData.BuffedIcon"); }
	UTexture2D*& TethererdIconField() { return *GetNativePointerField<UTexture2D**>(this, "UPrimalGameData.TethererdIcon"); }
// TSubclassOf<UUI_XBoxFooter>& FooterTemplateField() { return *GetNativePointerField<TSubclassOf<UUI_XBoxFooter>*>(this, "UPrimalGameData.FooterTemplate"); }
	float& TribeXPSharePercentField() { return *GetNativePointerField<float*>(this, "UPrimalGameData.TribeXPSharePercent"); }
	int& OverrideServerPhysXSubstepsField() { return *GetNativePointerField<int*>(this, "UPrimalGameData.OverrideServerPhysXSubsteps"); }
	float& OverrideServerPhysXSubstepsDeltaTimeField() { return *GetNativePointerField<float*>(this, "UPrimalGameData.OverrideServerPhysXSubstepsDeltaTime"); }
	TArray<FPlayerDynamicMaterialFloat, TSizedDefaultAllocator<32> >& DefaultDynamicMaterialByteFloatsField() { return *GetNativePointerField<TArray<FPlayerDynamicMaterialFloat, TSizedDefaultAllocator<32> >*>(this, "UPrimalGameData.DefaultDynamicMaterialByteFloats"); }
	TArray<FPlayerDynamicMaterialVector, TSizedDefaultAllocator<32> >& DefaultDynamicMaterialByteVectorsField() { return *GetNativePointerField<TArray<FPlayerDynamicMaterialVector, TSizedDefaultAllocator<32> >*>(this, "UPrimalGameData.DefaultDynamicMaterialByteVectors"); }
	TArray<FPlayerDynamicMaterialColors, TSizedDefaultAllocator<32> >& DefaultDynamicMaterialByteColorsField() { return *GetNativePointerField<TArray<FPlayerDynamicMaterialColors, TSizedDefaultAllocator<32> >*>(this, "UPrimalGameData.DefaultDynamicMaterialByteColors"); }
	//TMap<FName, TSubclassOf<UPrimalDinoEntry>, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<FName, TSubclassOf<UPrimalDinoEntry>, 0> >& DinoEntryMapField() { return *GetNativePointerField<TMap<FName, TSubclassOf<UPrimalDinoEntry>, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<FName, TSubclassOf<UPrimalDinoEntry>, 0> >*>(this, "UPrimalGameData.DinoEntryMap"); }
	//USoundBase* [3] & Sound_TamedDinosField() { return *GetNativePointerField<USoundBase * [3] *>(this, "UPrimalGameData.Sound_TamedDinos"); }
	USoundBase*& Sound_ItemStartCraftingField() { return *GetNativePointerField<USoundBase**>(this, "UPrimalGameData.Sound_ItemStartCrafting"); }
	USoundBase*& Sound_ItemFinishCraftingField() { return *GetNativePointerField<USoundBase**>(this, "UPrimalGameData.Sound_ItemFinishCrafting"); }
	USoundBase*& Sound_ItemStartRepairingField() { return *GetNativePointerField<USoundBase**>(this, "UPrimalGameData.Sound_ItemStartRepairing"); }
	USoundBase*& Sound_ItemFinishRepairingField() { return *GetNativePointerField<USoundBase**>(this, "UPrimalGameData.Sound_ItemFinishRepairing"); }
// TSubclassOf<UUI_Notification>& NotifClassField() { return *GetNativePointerField<TSubclassOf<UUI_Notification>*>(this, "UPrimalGameData.NotifClass"); }
// TSubclassOf<UPrimalStructureToolTipWidget>& StructureDefaultOverlayToolTipWidgetField() { return *GetNativePointerField<TSubclassOf<UPrimalStructureToolTipWidget>*>(this, "UPrimalGameData.StructureDefaultOverlayToolTipWidget"); }
// TSubclassOf<UPrimalUI>& MeleeHitColorizeStructuresUIField() { return *GetNativePointerField<TSubclassOf<UPrimalUI>*>(this, "UPrimalGameData.MeleeHitColorizeStructuresUI"); }
	float& MinPaintDurationConsumptionField() { return *GetNativePointerField<float*>(this, "UPrimalGameData.MinPaintDurationConsumption"); }
	float& MaxPaintDurationConsumptionField() { return *GetNativePointerField<float*>(this, "UPrimalGameData.MaxPaintDurationConsumption"); }
	float& MinDinoRadiusForPaintConsumptionField() { return *GetNativePointerField<float*>(this, "UPrimalGameData.MinDinoRadiusForPaintConsumption"); }
	float& MaxDinoRadiusForPaintConsumptionField() { return *GetNativePointerField<float*>(this, "UPrimalGameData.MaxDinoRadiusForPaintConsumption"); }
	TArray<FDinoBabySetup, TSizedDefaultAllocator<32> >& DinoBabySetupsField() { return *GetNativePointerField<TArray<FDinoBabySetup, TSizedDefaultAllocator<32> >*>(this, "UPrimalGameData.DinoBabySetups"); }
	TArray<FDinoBabySetup, TSizedDefaultAllocator<32> >& DinoGestationSetupsField() { return *GetNativePointerField<TArray<FDinoBabySetup, TSizedDefaultAllocator<32> >*>(this, "UPrimalGameData.DinoGestationSetups"); }
// TSubclassOf<UPrimalItem>& SoapItemTemplateField() { return *GetNativePointerField<TSubclassOf<UPrimalItem>*>(this, "UPrimalGameData.SoapItemTemplate"); }
	UTexture2D*& NameTagWildcardAdminField() { return *GetNativePointerField<UTexture2D**>(this, "UPrimalGameData.NameTagWildcardAdmin"); }
	UTexture2D*& NameTagServerAdminField() { return *GetNativePointerField<UTexture2D**>(this, "UPrimalGameData.NameTagServerAdmin"); }
	UTexture2D*& NameTagTribeAdminField() { return *GetNativePointerField<UTexture2D**>(this, "UPrimalGameData.NameTagTribeAdmin"); }
	TArray<UTexture2D*, TSizedDefaultAllocator<32> >& BadgeGroupsNameTagField() { return *GetNativePointerField<TArray<UTexture2D*, TSizedDefaultAllocator<32> >*>(this, "UPrimalGameData.BadgeGroupsNameTag"); }
	UTexture2D*& CrossPlayGenericField() { return *GetNativePointerField<UTexture2D**>(this, "UPrimalGameData.CrossPlayGeneric"); }
	UTexture2D*& CrossPlaySteamField() { return *GetNativePointerField<UTexture2D**>(this, "UPrimalGameData.CrossPlaySteam"); }
	UTexture2D*& CrossPlayPS5Field() { return *GetNativePointerField<UTexture2D**>(this, "UPrimalGameData.CrossPlayPS5"); }
	UTexture2D*& CrossPlayXSXField() { return *GetNativePointerField<UTexture2D**>(this, "UPrimalGameData.CrossPlayXSX"); }
	TArray<FString, TSizedDefaultAllocator<32> >& AchievementIDsField() { return *GetNativePointerField<TArray<FString, TSizedDefaultAllocator<32> >*>(this, "UPrimalGameData.AchievementIDs"); }
	TSet<FString, DefaultKeyFuncs<FString, 0>, FDefaultSetAllocator>& AchievementIDSetField() { return *GetNativePointerField<TSet<FString, DefaultKeyFuncs<FString, 0>, FDefaultSetAllocator>*>(this, "UPrimalGameData.AchievementIDSet"); }
	TArray<float, TSizedDefaultAllocator<32> >& AdditionalEggWeightsToSpawnField() { return *GetNativePointerField<TArray<float, TSizedDefaultAllocator<32> >*>(this, "UPrimalGameData.AdditionalEggWeightsToSpawn"); }
	//TArray<TSubclassOf<UPrimalItem>, TSizedDefaultAllocator<32> >& AdditionalEggItemsToSpawnField() { return *GetNativePointerField<//TArray<TSubclassOf<UPrimalItem>, TSizedDefaultAllocator<32> >*>(this, "UPrimalGameData.AdditionalEggItemsToSpawn"); }
	TArray<float, TSizedDefaultAllocator<32> >& FertilizedAdditionalEggWeightsToSpawnField() { return *GetNativePointerField<TArray<float, TSizedDefaultAllocator<32> >*>(this, "UPrimalGameData.FertilizedAdditionalEggWeightsToSpawn"); }
	//TArray<TSubclassOf<UPrimalItem>, TSizedDefaultAllocator<32> >& FertilizedAdditionalEggItemsToSpawnField() { return *GetNativePointerField<//TArray<TSubclassOf<UPrimalItem>, TSizedDefaultAllocator<32> >*>(this, "UPrimalGameData.FertilizedAdditionalEggItemsToSpawn"); }
	FString& ItemAchievementsNameField() { return *GetNativePointerField<FString*>(this, "UPrimalGameData.ItemAchievementsName"); }
	//TArray<TSubclassOf<UPrimalItem>, TSizedDefaultAllocator<32> >& ItemAchievementsListField() { return *GetNativePointerField<//TArray<TSubclassOf<UPrimalItem>, TSizedDefaultAllocator<32> >*>(this, "UPrimalGameData.ItemAchievementsList"); }
	//TArray<TSubclassOf<UPrimalItem>, TSizedDefaultAllocator<32> >& GlobalCuddleFoodListField() { return *GetNativePointerField<//TArray<TSubclassOf<UPrimalItem>, TSizedDefaultAllocator<32> >*>(this, "UPrimalGameData.GlobalCuddleFoodList"); }
	TArray<FMultiAchievement, TSizedDefaultAllocator<32> >& MultiAchievementsField() { return *GetNativePointerField<TArray<FMultiAchievement, TSizedDefaultAllocator<32> >*>(this, "UPrimalGameData.MultiAchievements"); }
	USoundBase*& DinoIncrementedImprintingSoundField() { return *GetNativePointerField<USoundBase**>(this, "UPrimalGameData.DinoIncrementedImprintingSound"); }
	USoundBase*& HitMarkerCharacterSoundField() { return *GetNativePointerField<USoundBase**>(this, "UPrimalGameData.HitMarkerCharacterSound"); }
	USoundBase*& HitMarkerStructureSoundField() { return *GetNativePointerField<USoundBase**>(this, "UPrimalGameData.HitMarkerStructureSound"); }
	UMaterialParameterCollection*& FOVScaleMaterialParamCollectionField() { return *GetNativePointerField<UMaterialParameterCollection**>(this, "UPrimalGameData.FOVScaleMaterialParamCollection"); }
	TArray<FNPCSpawnEntriesContainerAdditions, TSizedDefaultAllocator<32> >& CoreNPCSpawnEntriesContainerAdditionsField() { return *GetNativePointerField<TArray<FNPCSpawnEntriesContainerAdditions, TSizedDefaultAllocator<32> >*>(this, "UPrimalGameData.CoreNPCSpawnEntriesContainerAdditions"); }
	TArray<FNPCSpawnEntriesContainerAdditions, TSizedDefaultAllocator<32> >& TheNPCSpawnEntriesContainerAdditionsField() { return *GetNativePointerField<TArray<FNPCSpawnEntriesContainerAdditions, TSizedDefaultAllocator<32> >*>(this, "UPrimalGameData.TheNPCSpawnEntriesContainerAdditions"); }
	UMaterialInterface*& PostProcess_ColorLUTField() { return *GetNativePointerField<UMaterialInterface**>(this, "UPrimalGameData.PostProcess_ColorLUT"); }
// TSubclassOf<UPrimalStructureSettings>& DefaultStructureSettingsField() { return *GetNativePointerField<TSubclassOf<UPrimalStructureSettings>*>(this, "UPrimalGameData.DefaultStructureSettings"); }
	USoundBase*& Sound_DossierUnlockedField() { return *GetNativePointerField<USoundBase**>(this, "UPrimalGameData.Sound_DossierUnlocked"); }
	USoundBase*& Sound_ItemUseOnItemField() { return *GetNativePointerField<USoundBase**>(this, "UPrimalGameData.Sound_ItemUseOnItem"); }
	USoundBase*& Sound_RemoveItemSkinField() { return *GetNativePointerField<USoundBase**>(this, "UPrimalGameData.Sound_RemoveItemSkin"); }
	USoundBase*& Sound_RemoveClipAmmoField() { return *GetNativePointerField<USoundBase**>(this, "UPrimalGameData.Sound_RemoveClipAmmo"); }
	TArray<FExplorerNoteEntry, TSizedDefaultAllocator<32> >& ExplorerNoteEntriesField() { return *GetNativePointerField<TArray<FExplorerNoteEntry, TSizedDefaultAllocator<32> >*>(this, "UPrimalGameData.ExplorerNoteEntries"); }
	float& ExplorerNoteXPGainField() { return *GetNativePointerField<float*>(this, "UPrimalGameData.ExplorerNoteXPGain"); }
	TArray<int, TSizedDefaultAllocator<32> >& ExplorerNoteIntroIDsField() { return *GetNativePointerField<TArray<int, TSizedDefaultAllocator<32> >*>(this, "UPrimalGameData.ExplorerNoteIntroIDs"); }
	//UTexture2D* [3] & BuffTypeBackgroundsField() { return *GetNativePointerField<UTexture2D * [3] *>(this, "UPrimalGameData.BuffTypeBackgrounds"); }
	//UTexture2D* [3] & BuffTypeForegroundsField() { return *GetNativePointerField<UTexture2D * [3] *>(this, "UPrimalGameData.BuffTypeForegrounds"); }
	//TSoftClassPtr<APrimalBuff>& ExplorerNoteXPBuffField() { return *GetNativePointerField<//TSoftClassPtr<APrimalBuff>*>(this, "UPrimalGameData.ExplorerNoteXPBuff"); }
	//TSoftClassPtr<APrimalBuff>& SpecialExplorerNoteXPBuffField() { return *GetNativePointerField<//TSoftClassPtr<APrimalBuff>*>(this, "UPrimalGameData.SpecialExplorerNoteXPBuff"); }
	UTexture2D*& PerMapExplorerNoteLockedIconField() { return *GetNativePointerField<UTexture2D**>(this, "UPrimalGameData.PerMapExplorerNoteLockedIcon"); }
	UTexture2D*& TamedDinoUnlockedIconField() { return *GetNativePointerField<UTexture2D**>(this, "UPrimalGameData.TamedDinoUnlockedIcon"); }
	UTexture2D*& TamedDinoLockedIconField() { return *GetNativePointerField<UTexture2D**>(this, "UPrimalGameData.TamedDinoLockedIcon"); }
	TArray<FUnlockableEmoteEntry, TSizedDefaultAllocator<32> >& UnlockableEmotesField() { return *GetNativePointerField<TArray<FUnlockableEmoteEntry, TSizedDefaultAllocator<32> >*>(this, "UPrimalGameData.UnlockableEmotes"); }
	TArray<FEmoteGroup, TSizedDefaultAllocator<32> >& EmoteGroupsField() { return *GetNativePointerField<TArray<FEmoteGroup, TSizedDefaultAllocator<32> >*>(this, "UPrimalGameData.EmoteGroups"); }
	TArray<FClassRemappingWeight, TSizedDefaultAllocator<32> >& GlobalNPCRandomSpawnClassWeightsField() { return *GetNativePointerField<TArray<FClassRemappingWeight, TSizedDefaultAllocator<32> >*>(this, "UPrimalGameData.GlobalNPCRandomSpawnClassWeights"); }
	UTexture2D*& DinoOrderIconField() { return *GetNativePointerField<UTexture2D**>(this, "UPrimalGameData.DinoOrderIcon"); }
	UTexture2D*& DinoMinimalIconField() { return *GetNativePointerField<UTexture2D**>(this, "UPrimalGameData.DinoMinimalIcon"); }
	UTexture2D*& PlayerMinimalIconField() { return *GetNativePointerField<UTexture2D**>(this, "UPrimalGameData.PlayerMinimalIcon"); }
	//TSoftClassPtr<APrimalEmitterSpawnable>& DinoOrderEffect_MoveToField() { return *GetNativePointerField<//TSoftClassPtr<APrimalEmitterSpawnable>*>(this, "UPrimalGameData.DinoOrderEffect_MoveTo"); }
	//TSoftClassPtr<APrimalEmitterSpawnable>& DinoOrderEffect_AttackTargetField() { return *GetNativePointerField<//TSoftClassPtr<APrimalEmitterSpawnable>*>(this, "UPrimalGameData.DinoOrderEffect_AttackTarget"); }
	TArray<FObjectCorrelation, TSizedDefaultAllocator<32> >& AdditionalHumanMaleAnimSequenceOverridesField() { return *GetNativePointerField<TArray<FObjectCorrelation, TSizedDefaultAllocator<32> >*>(this, "UPrimalGameData.AdditionalHumanMaleAnimSequenceOverrides"); }
	TArray<FObjectCorrelation, TSizedDefaultAllocator<32> >& AdditionalHumanFemaleAnimSequenceOverridesField() { return *GetNativePointerField<TArray<FObjectCorrelation, TSizedDefaultAllocator<32> >*>(this, "UPrimalGameData.AdditionalHumanFemaleAnimSequenceOverrides"); }
	TArray<FObjectCorrelation, TSizedDefaultAllocator<32> >& AdditionalHumanMaleAnimMontagesOverridesField() { return *GetNativePointerField<TArray<FObjectCorrelation, TSizedDefaultAllocator<32> >*>(this, "UPrimalGameData.AdditionalHumanMaleAnimMontagesOverrides"); }
	TArray<FObjectCorrelation, TSizedDefaultAllocator<32> >& AdditionalHumanFemaleAnimMontagesOverridesField() { return *GetNativePointerField<TArray<FObjectCorrelation, TSizedDefaultAllocator<32> >*>(this, "UPrimalGameData.AdditionalHumanFemaleAnimMontagesOverrides"); }
	TArray<FOverrideAnimBlueprintEntry, TSizedDefaultAllocator<32> >& AdditionalHumanMaleOverrideAnimBlueprintsField() { return *GetNativePointerField<TArray<FOverrideAnimBlueprintEntry, TSizedDefaultAllocator<32> >*>(this, "UPrimalGameData.AdditionalHumanMaleOverrideAnimBlueprints"); }
	TArray<FOverrideAnimBlueprintEntry, TSizedDefaultAllocator<32> >& AdditionalHumanFemaleOverrideAnimBlueprintsField() { return *GetNativePointerField<TArray<FOverrideAnimBlueprintEntry, TSizedDefaultAllocator<32> >*>(this, "UPrimalGameData.AdditionalHumanFemaleOverrideAnimBlueprints"); }
	//TArray<TSubclassOf<ASaveGameActor>, TSizedDefaultAllocator<32> >& ServerExtraWorldSingletonActorClassesField() { return *GetNativePointerField<//TArray<TSubclassOf<ASaveGameActor>, TSizedDefaultAllocator<32> >*>(this, "UPrimalGameData.ServerExtraWorldSingletonActorClasses"); }
	//TArray<TSubclassOf<UPrimalGameData>, TSizedDefaultAllocator<32> >& ExtraStackedGameDataClassesField() { return *GetNativePointerField<//TArray<TSubclassOf<UPrimalGameData>, TSizedDefaultAllocator<32> >*>(this, "UPrimalGameData.ExtraStackedGameDataClasses"); }
	TArray<FHairStyleDefinition, TSizedDefaultAllocator<32> >& HeadHairStyleDefinitionsField() { return *GetNativePointerField<TArray<FHairStyleDefinition, TSizedDefaultAllocator<32> >*>(this, "UPrimalGameData.HeadHairStyleDefinitions"); }
	TArray<FHairStyleDefinition, TSizedDefaultAllocator<32> >& FacialHairStyleDefinitionsField() { return *GetNativePointerField<TArray<FHairStyleDefinition, TSizedDefaultAllocator<32> >*>(this, "UPrimalGameData.FacialHairStyleDefinitions"); }
	TArray<FHairStyleDefinition, TSizedDefaultAllocator<32> >& EyebrowsDefinitionsField() { return *GetNativePointerField<TArray<FHairStyleDefinition, TSizedDefaultAllocator<32> >*>(this, "UPrimalGameData.EyebrowsDefinitions"); }
	unsigned int& PlayerMeshMaterialIndexField() { return *GetNativePointerField<unsigned int*>(this, "UPrimalGameData.PlayerMeshMaterialIndex"); }
	FName& EyebrowMaskParamNameField() { return *GetNativePointerField<FName*>(this, "UPrimalGameData.EyebrowMaskParamName"); }
	FName& HairMaskParamNameField() { return *GetNativePointerField<FName*>(this, "UPrimalGameData.HairMaskParamName"); }
	FName& FacialHairMaskParamNameField() { return *GetNativePointerField<FName*>(this, "UPrimalGameData.FacialHairMaskParamName"); }
	FHairStyleDefinition& EyelashesDefinitionsField() { return *GetNativePointerField<FHairStyleDefinition*>(this, "UPrimalGameData.EyelashesDefinitions"); }
	TArray<FHairStyleDefinition, TSizedDefaultAllocator<32> >& AdditionalHeadHairStyleDefinitionsField() { return *GetNativePointerField<TArray<FHairStyleDefinition, TSizedDefaultAllocator<32> >*>(this, "UPrimalGameData.AdditionalHeadHairStyleDefinitions"); }
	TArray<FHairStyleDefinition, TSizedDefaultAllocator<32> >& AdditionalFacialHairStyleDefinitionsField() { return *GetNativePointerField<TArray<FHairStyleDefinition, TSizedDefaultAllocator<32> >*>(this, "UPrimalGameData.AdditionalFacialHairStyleDefinitions"); }
	USoundBase*& GenericWaterPostprocessAmbientSoundField() { return *GetNativePointerField<USoundBase**>(this, "UPrimalGameData.GenericWaterPostprocessAmbientSound"); }
// TSubclassOf<UPrimalPlayerData>& OverridePlayerDataClassField() { return *GetNativePointerField<TSubclassOf<UPrimalPlayerData>*>(this, "UPrimalGameData.OverridePlayerDataClass"); }
	TArray<FName, TSizedDefaultAllocator<32> >& AllDinosAchievementNameTagsField() { return *GetNativePointerField<TArray<FName, TSizedDefaultAllocator<32> >*>(this, "UPrimalGameData.AllDinosAchievementNameTags"); }
	USoundBase*& GenericArrowPickedUpSoundField() { return *GetNativePointerField<USoundBase**>(this, "UPrimalGameData.GenericArrowPickedUpSound"); }
	UTexture2D*& AimMagnetismIconField() { return *GetNativePointerField<UTexture2D**>(this, "UPrimalGameData.AimMagnetismIcon"); }
	UTexture2D*& UnlockIconField() { return *GetNativePointerField<UTexture2D**>(this, "UPrimalGameData.UnlockIcon"); }
	FColor& WheelFolderColorField() { return *GetNativePointerField<FColor*>(this, "UPrimalGameData.WheelFolderColor"); }
	FColor& WheelBackColorField() { return *GetNativePointerField<FColor*>(this, "UPrimalGameData.WheelBackColor"); }
	UParticleSystem*& CorpseLocatorEffectField() { return *GetNativePointerField<UParticleSystem**>(this, "UPrimalGameData.CorpseLocatorEffect"); }
	UTexture2D*& MaxInventoryIconField() { return *GetNativePointerField<UTexture2D**>(this, "UPrimalGameData.MaxInventoryIcon"); }
	UTexture2D*& ItemSkinIconField() { return *GetNativePointerField<UTexture2D**>(this, "UPrimalGameData.ItemSkinIcon"); }
	//TArray<TEnumAsByte<enum ECollisionChannel>, TSizedDefaultAllocator<32> >& SkeletalPhysCustomBodyAdditionalIgnoresField() { return *GetNativePointerField<TArray<TEnumAsByte<enum ECollisionChannel>, TSizedDefaultAllocator<32> >*>(this, "UPrimalGameData.SkeletalPhysCustomBodyAdditionalIgnores"); }
	USoundBase*& ActionWheelClickSoundField() { return *GetNativePointerField<USoundBase**>(this, "UPrimalGameData.ActionWheelClickSound"); }
	USoundBase*& ActionWheelSelectSoundField() { return *GetNativePointerField<USoundBase**>(this, "UPrimalGameData.ActionWheelSelectSound"); }
	USoundBase*& ActionWheelProgressSoundField() { return *GetNativePointerField<USoundBase**>(this, "UPrimalGameData.ActionWheelProgressSound"); }
	USoundBase*& ActionWheelProgressCompleteSoundField() { return *GetNativePointerField<USoundBase**>(this, "UPrimalGameData.ActionWheelProgressCompleteSound"); }
	USoundBase*& Sound_GenericBoardPassengerField() { return *GetNativePointerField<USoundBase**>(this, "UPrimalGameData.Sound_GenericBoardPassenger"); }
	USoundBase*& Sound_GenericUnboardPassengerField() { return *GetNativePointerField<USoundBase**>(this, "UPrimalGameData.Sound_GenericUnboardPassenger"); }
	USoundBase*& Sound_CraftingTabToggleField() { return *GetNativePointerField<USoundBase**>(this, "UPrimalGameData.Sound_CraftingTabToggle"); }
	UParticleSystem*& LockedToSeatingStructureParticleField() { return *GetNativePointerField<UParticleSystem**>(this, "UPrimalGameData.LockedToSeatingStructureParticle"); }
// TSubclassOf<UPrimalItem>& GenericBatteryItemClassField() { return *GetNativePointerField<TSubclassOf<UPrimalItem>*>(this, "UPrimalGameData.GenericBatteryItemClass"); }
	TMap<UClass*, UPrimalEngramEntry*, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<UClass*, UPrimalEngramEntry*, 0> >& ItemEngramMapField() { return *GetNativePointerField<TMap<UClass*, UPrimalEngramEntry*, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<UClass*, UPrimalEngramEntry*, 0> >*>(this, "UPrimalGameData.ItemEngramMap"); }
	//TArray<//TSoftClassPtr<UPrimalItem>, TSizedDefaultAllocator<32> >& GenesisSeasonPassItemsField() { return *GetNativePointerField<//TArray<//TSoftClassPtr<UPrimalItem>, TSizedDefaultAllocator<32> >*>(this, "UPrimalGameData.GenesisSeasonPassItems"); }
// TSubclassOf<AActor>& DefaultStructureDestroyedMeshActorClassField() { return *GetNativePointerField<TSubclassOf<AActor>*>(this, "UPrimalGameData.DefaultStructureDestroyedMeshActorClass"); }
	//TArray<TSubclassOf<UHexagonTradableOption>, TSizedDefaultAllocator<32> >& DefaultTradableOptionsField() { return *GetNativePointerField<//TArray<TSubclassOf<UHexagonTradableOption>, TSizedDefaultAllocator<32> >*>(this, "UPrimalGameData.DefaultTradableOptions"); }
	//TArray<TSubclassOf<UHexagonTradableOption>, TSizedDefaultAllocator<32> >& CoreTradableOptionsField() { return *GetNativePointerField<//TArray<TSubclassOf<UHexagonTradableOption>, TSizedDefaultAllocator<32> >*>(this, "UPrimalGameData.CoreTradableOptions"); }
	//TArray<TSubclassOf<UHexagonTradableOption>, TSizedDefaultAllocator<32> >& AdditionalTradableOptionsField() { return *GetNativePointerField<//TArray<TSubclassOf<UHexagonTradableOption>, TSizedDefaultAllocator<32> >*>(this, "UPrimalGameData.AdditionalTradableOptions"); }
	//TArray<//TSoftClassPtr<APrimalBuff>, TSizedDefaultAllocator<32> >& AlwaysAllowBuffClassesField() { return *GetNativePointerField<//TArray<//TSoftClassPtr<APrimalBuff>, TSizedDefaultAllocator<32> >*>(this, "UPrimalGameData.AlwaysAllowBuffClasses"); }
	TArray<FGrinderItemReplacer, TSizedDefaultAllocator<32> >& GrinderReplacementsField() { return *GetNativePointerField<TArray<FGrinderItemReplacer, TSizedDefaultAllocator<32> >*>(this, "UPrimalGameData.GrinderReplacements"); }
	TArray<FInvalidReferenceRedirector, TSizedDefaultAllocator<32> >& InvalidReferenceRedirectsField() { return *GetNativePointerField<TArray<FInvalidReferenceRedirector, TSizedDefaultAllocator<32> >*>(this, "UPrimalGameData.InvalidReferenceRedirects"); }
	TArray<FInvalidReferenceRedirector, TSizedDefaultAllocator<32> >& AdditionalInvalidReferenceRedirectsField() { return *GetNativePointerField<TArray<FInvalidReferenceRedirector, TSizedDefaultAllocator<32> >*>(this, "UPrimalGameData.AdditionalInvalidReferenceRedirects"); }
// TSubclassOf<UPrimalWorldBuffData>& CoreWorldBuffDefinitionsField() { return *GetNativePointerField<TSubclassOf<UPrimalWorldBuffData>*>(this, "UPrimalGameData.CoreWorldBuffDefinitions"); }
	//TArray<TSubclassOf<UPrimalWorldBuffData>, TSizedDefaultAllocator<32> >& AdditionalWorldBuffDefinitionsField() { return *GetNativePointerField<//TArray<TSubclassOf<UPrimalWorldBuffData>, TSizedDefaultAllocator<32> >*>(this, "UPrimalGameData.AdditionalWorldBuffDefinitions"); }
	UPrimalWorldBuffData*& WorldBuffDataField() { return *GetNativePointerField<UPrimalWorldBuffData**>(this, "UPrimalGameData.WorldBuffData"); }
	FLinearColor& PointOfInterest_IndicatorColor_DefaultField() { return *GetNativePointerField<FLinearColor*>(this, "UPrimalGameData.PointOfInterest_IndicatorColor_Default"); }
	FLinearColor& PointOfInterest_IndicatorColor_ObjectiveCompleteField() { return *GetNativePointerField<FLinearColor*>(this, "UPrimalGameData.PointOfInterest_IndicatorColor_ObjectiveComplete"); }
	FLinearColor& PointOfInterest_ProgressBarColor_TamingAffinityField() { return *GetNativePointerField<FLinearColor*>(this, "UPrimalGameData.PointOfInterest_ProgressBarColor_TamingAffinity"); }
	UTexture2D*& PointOfInterest_Icon_TamingInProgressField() { return *GetNativePointerField<UTexture2D**>(this, "UPrimalGameData.PointOfInterest_Icon_TamingInProgress"); }
	UTexture2D*& PointOfInterest_Icon_TamingCompleteField() { return *GetNativePointerField<UTexture2D**>(this, "UPrimalGameData.PointOfInterest_Icon_TamingComplete"); }
	UTexture2D*& PointOfInterest_Icon_PlayerField() { return *GetNativePointerField<UTexture2D**>(this, "UPrimalGameData.PointOfInterest_Icon_Player"); }
// TSubclassOf<UPrimalGlobalUIData>& GlobalUIDataClass_PS5Field() { return *GetNativePointerField<TSubclassOf<UPrimalGlobalUIData>*>(this, "UPrimalGameData.GlobalUIDataClass_PS5"); }
// TSubclassOf<UPrimalGlobalUIData>& GlobalUIDataClass_XSXField() { return *GetNativePointerField<TSubclassOf<UPrimalGlobalUIData>*>(this, "UPrimalGameData.GlobalUIDataClass_XSX"); }
// TSubclassOf<UPrimalGlobalUIData>& GlobalUIDataClassField() { return *GetNativePointerField<TSubclassOf<UPrimalGlobalUIData>*>(this, "UPrimalGameData.GlobalUIDataClass"); }
	TArray<FWorldDefaultItemSet, TSizedDefaultAllocator<32> >& DefaultMapItemSetsField() { return *GetNativePointerField<TArray<FWorldDefaultItemSet, TSizedDefaultAllocator<32> >*>(this, "UPrimalGameData.DefaultMapItemSets"); }
	TArray<FWorldDefaultItemSet, TSizedDefaultAllocator<32> >& AdditionalDefaultMapItemSetsField() { return *GetNativePointerField<TArray<FWorldDefaultItemSet, TSizedDefaultAllocator<32> >*>(this, "UPrimalGameData.AdditionalDefaultMapItemSets"); }
	//TSoftClassPtr<AActor>& PhotoModeClassField() { return *GetNativePointerField<//TSoftClassPtr<AActor>*>(this, "UPrimalGameData.PhotoModeClass"); }
	//TSoftClassPtr<AActor>& OverridePhotoModeClassField() { return *GetNativePointerField<//TSoftClassPtr<AActor>*>(this, "UPrimalGameData.OverridePhotoModeClass"); }
	TArray<FExtraEggItem, TSizedDefaultAllocator<32> >& ExtraEggItemsField() { return *GetNativePointerField<TArray<FExtraEggItem, TSizedDefaultAllocator<32> >*>(this, "UPrimalGameData.ExtraEggItems"); }
	TArray<FExtraEggItem, TSizedDefaultAllocator<32> >& AdditionalExtraEggItemsField() { return *GetNativePointerField<TArray<FExtraEggItem, TSizedDefaultAllocator<32> >*>(this, "UPrimalGameData.AdditionalExtraEggItems"); }
	UStaticMesh*& CopySettingsVisualIndicatorMeshField() { return *GetNativePointerField<UStaticMesh**>(this, "UPrimalGameData.CopySettingsVisualIndicatorMesh"); }
	UMaterialInterface*& CopySettingsVisualIndicatorMaterialField() { return *GetNativePointerField<UMaterialInterface**>(this, "UPrimalGameData.CopySettingsVisualIndicatorMaterial"); }
	TArray<FSlateColor, TSizedDefaultAllocator<32> >& SubtitleColorsField() { return *GetNativePointerField<TArray<FSlateColor, TSizedDefaultAllocator<32> >*>(this, "UPrimalGameData.SubtitleColors"); }
// TSubclassOf<UToolTipWidget>& HUDOverlayGestationTooltipField() { return *GetNativePointerField<TSubclassOf<UToolTipWidget>*>(this, "UPrimalGameData.HUDOverlayGestationTooltip"); }
	//TArray<//TSoftClassPtr<APrimalDinoCharacter>, TSizedDefaultAllocator<32> >& ProfilingDinosField() { return *GetNativePointerField<//TArray<//TSoftClassPtr<APrimalDinoCharacter>, TSizedDefaultAllocator<32> >*>(this, "UPrimalGameData.ProfilingDinos"); }
	//TArray<//TSoftClassPtr<UPrimalItem>, TSizedDefaultAllocator<32> >& ProfilingStructuresField() { return *GetNativePointerField<//TArray<//TSoftClassPtr<UPrimalItem>, TSizedDefaultAllocator<32> >*>(this, "UPrimalGameData.ProfilingStructures"); }
	UShooterHaptics*& HapticsField() { return *GetNativePointerField<UShooterHaptics**>(this, "UPrimalGameData.Haptics"); }
	TArray<FCryopodPersistantBuffs, TSizedDefaultAllocator<32> >& CryopodPersistantBuffsMapField() { return *GetNativePointerField<TArray<FCryopodPersistantBuffs, TSizedDefaultAllocator<32> >*>(this, "UPrimalGameData.CryopodPersistantBuffsMap"); }
	TArray<FConfigSupplyCrateItemsOverride, TSizedDefaultAllocator<32> >& CoreOverrideSupplyCrateItemsField() { return *GetNativePointerField<TArray<FConfigSupplyCrateItemsOverride, TSizedDefaultAllocator<32> >*>(this, "UPrimalGameData.CoreOverrideSupplyCrateItems"); }
	USoundBase*& PreRespawnUISoundField() { return *GetNativePointerField<USoundBase**>(this, "UPrimalGameData.PreRespawnUISound"); }
	USoundBase*& PostRespawnUISoundField() { return *GetNativePointerField<USoundBase**>(this, "UPrimalGameData.PostRespawnUISound"); }
	TArray<FString, TSizedDefaultAllocator<32> >& MapMovieOrderHelperField() { return *GetNativePointerField<TArray<FString, TSizedDefaultAllocator<32> >*>(this, "UPrimalGameData.MapMovieOrderHelper"); }
	TArray<FSubtitleStringMap, TSizedDefaultAllocator<32> >& BookendSubtitlesField() { return *GetNativePointerField<TArray<FSubtitleStringMap, TSizedDefaultAllocator<32> >*>(this, "UPrimalGameData.BookendSubtitles"); }
	//TArray<TSoftObjectPtr<UObject>, TSizedDefaultAllocator<32> >& DLCStructsAndEnumsField() { return *GetNativePointerField<//TArray<TSoftObjectPtr<UObject>, TSizedDefaultAllocator<32> >*>(this, "UPrimalGameData.DLCStructsAndEnums"); }
	TArray<FDinoAbilities, TSizedDefaultAllocator<32> >& AbilityDescriptionsField() { return *GetNativePointerField<TArray<FDinoAbilities, TSizedDefaultAllocator<32> >*>(this, "UPrimalGameData.AbilityDescriptions"); }
	TMap<FName, FDinoAbilities, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<FName, FDinoAbilities, 0> >& AbilityDescriptionsMapField() { return *GetNativePointerField<TMap<FName, FDinoAbilities, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<FName, FDinoAbilities, 0> >*>(this, "UPrimalGameData.AbilityDescriptionsMap"); }
	//TArray<TSubclassOf<UDinoTrackFilterOption>, TSizedDefaultAllocator<32> >& DinoTrackFilterOptionsField() { return *GetNativePointerField<//TArray<TSubclassOf<UDinoTrackFilterOption>, TSizedDefaultAllocator<32> >*>(this, "UPrimalGameData.DinoTrackFilterOptions"); }
	//TArray<TSubclassOf<UDinoTrackFilterOption>, TSizedDefaultAllocator<32> >& CustomDinoTrackFilterOptionsField() { return *GetNativePointerField<//TArray<TSubclassOf<UDinoTrackFilterOption>, TSizedDefaultAllocator<32> >*>(this, "UPrimalGameData.CustomDinoTrackFilterOptions"); }
	UModDataAsset*& AdditionalModDataAssetField() { return *GetNativePointerField<UModDataAsset**>(this, "UPrimalGameData.AdditionalModDataAsset"); }
	TArray<FPlayerConfigVoiceCollectionInfo, TSizedDefaultAllocator<32> >& PlayerConfigVoiceCollectionOptionsField() { return *GetNativePointerField<TArray<FPlayerConfigVoiceCollectionInfo, TSizedDefaultAllocator<32> >*>(this, "UPrimalGameData.PlayerConfigVoiceCollectionOptions"); }
	TArray<FPlayerConfigVoiceCollectionInfo, TSizedDefaultAllocator<32> >& CustomPlayerConfigVoiceCollectionOptionsField() { return *GetNativePointerField<TArray<FPlayerConfigVoiceCollectionInfo, TSizedDefaultAllocator<32> >*>(this, "UPrimalGameData.CustomPlayerConfigVoiceCollectionOptions"); }
	TArray<FPlayerBoneBodyPreset, TSizedDefaultAllocator<32> >& BodyBonePresetOptionsField() { return *GetNativePointerField<TArray<FPlayerBoneBodyPreset, TSizedDefaultAllocator<32> >*>(this, "UPrimalGameData.BodyBonePresetOptions"); }
	TArray<FPlayerBoneBodyPreset, TSizedDefaultAllocator<32> >& CustomBodyBonePresetOptionsField() { return *GetNativePointerField<TArray<FPlayerBoneBodyPreset, TSizedDefaultAllocator<32> >*>(this, "UPrimalGameData.CustomBodyBonePresetOptions"); }
	UTexture2D*& ExperienceIconField() { return *GetNativePointerField<UTexture2D**>(this, "UPrimalGameData.ExperienceIcon"); }
	//TSoftClassPtr<UObject>& CDOLiveUpdatesDataClassField() { return *GetNativePointerField<//TSoftClassPtr<UObject>*>(this, "UPrimalGameData.CDOLiveUpdatesDataClass"); }
// TSubclassOf<AActor>& VolumetricDispatcherClassField() { return *GetNativePointerField<TSubclassOf<AActor>*>(this, "UPrimalGameData.VolumetricDispatcherClass"); }
// TSubclassOf<AActor>& DefaultDestructionInstanceActorWithGeoCollectionField() { return *GetNativePointerField<TSubclassOf<AActor>*>(this, "UPrimalGameData.DefaultDestructionInstanceActorWithGeoCollection"); }
	//TSoftClassPtr<UDamageType>& CheatDestroyFoliageDamageTypeField() { return *GetNativePointerField<//TSoftClassPtr<UDamageType>*>(this, "UPrimalGameData.CheatDestroyFoliageDamageType"); }
// TSubclassOf<AActor>& DefaultFieldSystemActorClassField() { return *GetNativePointerField<TSubclassOf<AActor>*>(this, "UPrimalGameData.DefaultFieldSystemActorClass"); }
// TSubclassOf<UNavAreaBase>& DefaultWaterNavAreaField() { return *GetNativePointerField<TSubclassOf<UNavAreaBase>*>(this, "UPrimalGameData.DefaultWaterNavArea"); }
// TSubclassOf<UNavAreaBase>& DefaultStructureNavAreaField() { return *GetNativePointerField<TSubclassOf<UNavAreaBase>*>(this, "UPrimalGameData.DefaultStructureNavArea"); }
	UDataTable*& ItemSpawnBlacklistDataTableField() { return *GetNativePointerField<UDataTable**>(this, "UPrimalGameData.ItemSpawnBlacklistDataTable"); }
	//TSoftClassPtr<APrimalBuff>& CarriedNotifyBuffField() { return *GetNativePointerField<//TSoftClassPtr<APrimalBuff>*>(this, "UPrimalGameData.CarriedNotifyBuff"); }
	//TSoftObjectPtr<UPrimalWordFilter>& MainNameWordListField() { return *GetNativePointerField<TSoftObjectPtr<UPrimalWordFilter>*>(this, "UPrimalGameData.MainNameWordList"); }

	// Bitfields


	// Functions

	USoundBase* GetGenericCombatMusic(APrimalCharacter* forCharacter, APrimalCharacter* forEnemy) { return NativeCall<USoundBase*, APrimalCharacter*, APrimalCharacter*>(this, "UPrimalGameData.GetGenericCombatMusic(APrimalCharacter*,APrimalCharacter*)", forCharacter, forEnemy); }
	void LoadedWorld(UWorld* TheWorld) { NativeCall<void, UWorld*>(this, "UPrimalGameData.LoadedWorld(UWorld*)", TheWorld); }
	void TickedWorld(UWorld* TheWorld, float DeltaTime) { NativeCall<void, UWorld*, float>(this, "UPrimalGameData.TickedWorld(UWorld*,float)", TheWorld, DeltaTime); }
	static void StaticRegisterNativesUPrimalGameData() { NativeCall<void>(nullptr, "UPrimalGameData.StaticRegisterNativesUPrimalGameData()"); }
	static UClass* StaticClass() { return NativeCall<UClass*>(nullptr, "UPrimalGameData.StaticClass()"); }
	//void ~UPrimalGameData() { NativeCall<void>(this, "UPrimalGameData.~UPrimalGameData()"); }
	//void UPrimalGameData(const FObjectInitializer* ObjectInitializer) { NativeCall<void, const FObjectInitializer*>(this, "UPrimalGameData.UPrimalGameData(FObjectInitializer*)", ObjectInitializer); }
	void SetCoreDefaults() { NativeCall<void>(this, "UPrimalGameData.SetCoreDefaults()"); }
	void Initialize(const TArray<UModDataAsset*, TSizedDefaultAllocator<32> >* AdditionalModDataAssets) { NativeCall<void, const TArray<UModDataAsset*, TSizedDefaultAllocator<32> >*>(this, "UPrimalGameData.Initialize(TArray<UModDataAsset*,TSizedDefaultAllocator<32>>*)", AdditionalModDataAssets); }
	FLinearColor* GetColorForDefinition(FLinearColor* result, int DefinitionIndex) { return NativeCall<FLinearColor*, FLinearColor*, int>(this, "UPrimalGameData.GetColorForDefinition(FLinearColor*,int)", result, DefinitionIndex); }
	bool CanTeamTarget(int attackerTeam, int victimTeam, int originalVictimTargetingTeam, const AActor* Attacker, const AActor* Victim) { return NativeCall<bool, int, int, int, const AActor*, const AActor*>(this, "UPrimalGameData.CanTeamTarget(int,int,int,AActor*,AActor*)", attackerTeam, victimTeam, originalVictimTargetingTeam, Attacker, Victim); }
	bool CanTeamDamage(int attackerTeam, int victimTeam, const AActor* Attacker) { return NativeCall<bool, int, int, const AActor*>(this, "UPrimalGameData.CanTeamDamage(int,int,AActor*)", attackerTeam, victimTeam, Attacker); }
	int GetNamedTargetingTeamIndex(FName TargetingTeamName) { return NativeCall<int, FName>(this, "UPrimalGameData.GetNamedTargetingTeamIndex(FName)", TargetingTeamName); }
	int GetIndexDynamicMatBytesByName(FName Name) { return NativeCall<int, FName>(this, "UPrimalGameData.GetIndexDynamicMatBytesByName(FName)", Name); }
	void GetDataListEntries(TArray<IDataListEntryInterface*, TSizedDefaultAllocator<32> >* OutDataListEntries, int DataListType, bool bCreateFolders, char FolderLevel, TArray<FString, TSizedDefaultAllocator<32> >* FoldersFound, UObject* ForObject, const wchar_t* CustomFolderFilter, char SortType, const wchar_t* NameFilter, bool includeSkins, bool onlySkins, bool bIsSkinSelectorMode) { NativeCall<void, TArray<IDataListEntryInterface*, TSizedDefaultAllocator<32> >*, int, bool, char, TArray<FString, TSizedDefaultAllocator<32> >*, UObject*, const wchar_t*, char, const wchar_t*, bool, bool, bool>(this, "UPrimalGameData.GetDataListEntries(TArray<IDataListEntryInterface*,TSizedDefaultAllocator<32>>*,int,bool,char,TArray<FString,TSizedDefaultAllocator<32>>*,UObject*,wchar_t*,char,wchar_t*,bool,bool,bool)", OutDataListEntries, DataListType, bCreateFolders, FolderLevel, FoldersFound, ForObject, CustomFolderFilter, SortType, NameFilter, includeSkins, onlySkins, bIsSkinSelectorMode); }
	bool GetEntryDefaultEnabled(IDataListEntryInterface* entryInterface) { return NativeCall<bool, IDataListEntryInterface*>(this, "UPrimalGameData.GetEntryDefaultEnabled(IDataListEntryInterface*)", entryInterface); }
	FString* GetEntryDefaultTextOverride(FString* result, IDataListEntryInterface* entryInterface) { return NativeCall<FString*, FString*, IDataListEntryInterface*>(this, "UPrimalGameData.GetEntryDefaultTextOverride(FString&,IDataListEntryInterface*)", result, entryInterface); }
	void GetEntryExtraIcons(IDataListEntryInterface* entryInterface, TArray<UTexture2D*, TSizedDefaultAllocator<32> >* extraIcons) { NativeCall<void, IDataListEntryInterface*, TArray<UTexture2D*, TSizedDefaultAllocator<32> >*>(this, "UPrimalGameData.GetEntryExtraIcons(IDataListEntryInterface*,TArray<UTexture2D*,TSizedDefaultAllocator<32>>*)", entryInterface, extraIcons); }
	void GetEntryCustomColor(IDataListEntryInterface* entryInterface, FLinearColor* CustomColor, FLinearColor* TextColorOverride) { NativeCall<void, IDataListEntryInterface*, FLinearColor*, FLinearColor*>(this, "UPrimalGameData.GetEntryCustomColor(IDataListEntryInterface*,FLinearColor*,FLinearColor*)", entryInterface, CustomColor, TextColorOverride); }
// TSubclassOf<UPrimalDinoEntry>* GetDinoEntry(TSubclassOf<UPrimalDinoEntry>* result, TSubclassOf<APrimalDinoCharacter> DinoClass) { return NativeCall<TSubclassOf<UPrimalDinoEntry> *, TSubclassOf<UPrimalDinoEntry>*, TSubclassOf<APrimalDinoCharacter>>(this, "UPrimalGameData.GetDinoEntry(TSubclassOf<UPrimalDinoEntry>*,TSubclassOf<APrimalDinoCharacter>)", result, DinoClass); }
	//static TSubclassOf<UPrimalDinoEntry>* GetDinoEntrySoft() { return NativeCall<TSubclassOf<UPrimalDinoEntry> *>(nullptr, "UPrimalGameData.GetDinoEntrySoft()"); }
// TSubclassOf<UObject>* GetRedirectedClass(TSubclassOf<UObject>* result, const FString* key, UObject* WorldContextObject) { return NativeCall<TSubclassOf<UObject> *, TSubclassOf<UObject>*, const FString*, UObject*>(this, "UPrimalGameData.GetRedirectedClass(TSubclassOf<UObject>*,FString&,UObject*)", result, key, WorldContextObject); }
	static void ArkChangeUIPlatform() { NativeCall<void>(nullptr, "UPrimalGameData.ArkChangeUIPlatform()"); }
	static UPrimalGlobalUIData* BPGetGlobalUIData(bool* bIsPsOrXbUi) { return NativeCall<UPrimalGlobalUIData*, bool*>(nullptr, "UPrimalGameData.BPGetGlobalUIData(bool*)", bIsPsOrXbUi); }
	USoundBase* GetGenericCombatMusic_Implementation(APrimalCharacter* forCharacter, APrimalCharacter* forEnemy) { return NativeCall<USoundBase*, APrimalCharacter*, APrimalCharacter*>(this, "UPrimalGameData.GetGenericCombatMusic_Implementation(APrimalCharacter*,APrimalCharacter*)", forCharacter, forEnemy); }
	static void AddPartBoneModifiers(USkeletalMeshComponent* ForMesh, const TArray<FBoneModifierRange, TSizedDefaultAllocator<32> >* BoneModifierRanges, float Value, TArray<FBoneModifier, TSizedDefaultAllocator<32> >* BoneModifiers) { NativeCall<void, USkeletalMeshComponent*, const TArray<FBoneModifierRange, TSizedDefaultAllocator<32> >*, float, TArray<FBoneModifier, TSizedDefaultAllocator<32> >*>(nullptr, "UPrimalGameData.AddPartBoneModifiers(USkeletalMeshComponent*,TArray<FBoneModifierRange,TSizedDefaultAllocator<32>>*,float,TArray<FBoneModifier,TSizedDefaultAllocator<32>>*)", ForMesh, BoneModifierRanges, Value, BoneModifiers); }
	//FLevelExperienceRamp* GetLevelExperienceRamp(ELevelExperienceRampType::Type levelType) { return NativeCall<FLevelExperienceRamp*, ELevelExperienceRampType::Type>(this, "UPrimalGameData.GetLevelExperienceRamp(ELevelExperienceRampType::Type)", levelType); }
	TArray<int, TSizedDefaultAllocator<32> >* GetPlayerLevelEngramPoints() { return NativeCall<TArray<int, TSizedDefaultAllocator<32> >*>(this, "UPrimalGameData.GetPlayerLevelEngramPoints()"); }
	static TSubclassOf<UObject>* GetRemappedClass_HardHard(TSubclassOf<UObject>* result, const TArray<FClassRemapping, TSizedDefaultAllocator<32>>* RemappedClasses, TSubclassOf<UObject> ForClass) { return NativeCall<TSubclassOf<UObject>*, TSubclassOf<UObject>*, const TArray<FClassRemapping, TSizedDefaultAllocator<32>>*, TSubclassOf<UObject>>(nullptr, "UPrimalGameData.GetRemappedClass_HardHard(TArray<FClassRemapping,TSizedDefaultAllocator<32>>&,TSubclassOf<UObject>)", result, RemappedClasses, ForClass); }
	static TSubclassOf<UObject>* GetRemappedClass_HardSoft(TSubclassOf<UObject>* result, const TArray<FClassRemapping, TSizedDefaultAllocator<32>>* RemappedClasses, const FSoftObjectPath* ForClass) { return NativeCall<TSubclassOf<UObject>*, TSubclassOf<UObject>*, const TArray<FClassRemapping, TSizedDefaultAllocator<32>>*, const FSoftObjectPath*>(nullptr, "UPrimalGameData.GetRemappedClass_HardSoft(TArray<FClassRemapping,TSizedDefaultAllocator<32>>&,FSoftObjectPath&)", result, RemappedClasses, ForClass); }
	static FSoftObjectPath* GetRemappedClass_SoftSoft(FSoftObjectPath* result, const TArray<FClassRemapping, TSizedDefaultAllocator<32>>* RemappedClasses, const FSoftObjectPath* ForClass) { return NativeCall<FSoftObjectPath*, FSoftObjectPath*, const TArray<FClassRemapping, TSizedDefaultAllocator<32>>*, const FSoftObjectPath*>(nullptr, "UPrimalGameData.GetRemappedClass_SoftSoft(TArray<FClassRemapping,TSizedDefaultAllocator<32>>&,FSoftObjectPath&)", result, RemappedClasses, ForClass); }
	//static void GetClassAdditions(//TArray<TSubclassOf<UObject>, TSizedDefaultAllocator<32> >* TheClassAdditions, const TArray<FClassAddition, TSizedDefaultAllocator<32> >* ClassAdditions, TSubclassOf<UObject> ForClass) { NativeCall<void, //TArray<TSubclassOf<UObject>, TSizedDefaultAllocator<32> >*, const TArray<FClassAddition, TSizedDefaultAllocator<32> >*, TSubclassOf<UObject>>(nullptr, "UPrimalGameData.GetClassAdditions(//TArray<TSubclassOf<UObject>,TSizedDefaultAllocator<32>>*,TArray<FClassAddition,TSizedDefaultAllocator<32>>*,TSubclassOf<UObject>)", TheClassAdditions, ClassAdditions, ForClass); }
	TArray<FString, TSizedDefaultAllocator<32> >* GetPlayerSpawnRegions(UWorld* ForWorld) { return NativeCall<TArray<FString, TSizedDefaultAllocator<32> >*, UWorld*>(this, "UPrimalGameData.GetPlayerSpawnRegions(UWorld*)", ForWorld); }
	bool MergeModData(UPrimalGameData* InMergeCanidate) { return NativeCall<bool, UPrimalGameData*>(this, "UPrimalGameData.MergeModData(UPrimalGameData*)", InMergeCanidate); }
	FDinoBabySetup* GetDinoBabySetup(FName DinoNameTag) { return NativeCall<FDinoBabySetup*, FName>(this, "UPrimalGameData.GetDinoBabySetup(FName)", DinoNameTag); }
	static bool LocalIsGlobalExplorerNoteUnlocked(int ExplorerNoteIndex) { return NativeCall<bool, int>(nullptr, "UPrimalGameData.LocalIsGlobalExplorerNoteUnlocked(int)", ExplorerNoteIndex); }
	void PostLoad() { NativeCall<void>(this, "UPrimalGameData.PostLoad()"); }
	bool GetAllAbilitiesForDino(const FName* DinoTag, TArray<FDinoAbilityInfo, TSizedDefaultAllocator<32> >* AbilityInfos) { return NativeCall<bool, const FName*, TArray<FDinoAbilityInfo, TSizedDefaultAllocator<32> >*>(this, "UPrimalGameData.GetAllAbilitiesForDino(FName*,TArray<FDinoAbilityInfo,TSizedDefaultAllocator<32>>*)", DinoTag, AbilityInfos); }
	static TArray<FDinoAncestorsEntry, TSizedDefaultAllocator<32> >* GetNonBPDinoAncestorsFromBP() { return NativeCall<TArray<FDinoAncestorsEntry, TSizedDefaultAllocator<32> >*>(nullptr, "UPrimalGameData.GetNonBPDinoAncestorsFromBP()"); }
	static TArray<FDinoAncestorsEntryBlueprint, TSizedDefaultAllocator<32> >* GetBPDinoAncestorsFromNonBP() { return NativeCall<TArray<FDinoAncestorsEntryBlueprint, TSizedDefaultAllocator<32> >*>(nullptr, "UPrimalGameData.GetBPDinoAncestorsFromNonBP()"); }
	static void AppendBoneModifiers(USkeletalMeshComponent* ForMesh, const TArray<FBoneModifierNamed, TSizedDefaultAllocator<32> >* Modifiers, TArray<FBoneModifier, TSizedDefaultAllocator<32> >* OutBoneModifiers) { NativeCall<void, USkeletalMeshComponent*, const TArray<FBoneModifierNamed, TSizedDefaultAllocator<32> >*, TArray<FBoneModifier, TSizedDefaultAllocator<32> >*>(nullptr, "UPrimalGameData.AppendBoneModifiers(USkeletalMeshComponent*,TArray<FBoneModifierNamed,TSizedDefaultAllocator<32>>*,TArray<FBoneModifier,TSizedDefaultAllocator<32>>*)", ForMesh, Modifiers, OutBoneModifiers); }
	static void AppendGlobalBoneModifiers(USkeletalMeshComponent* ForMesh, bool IsFemale, TArray<FBoneModifier, TSizedDefaultAllocator<32> >* BoneModifiers) { NativeCall<void, USkeletalMeshComponent*, bool, TArray<FBoneModifier, TSizedDefaultAllocator<32> >*>(nullptr, "UPrimalGameData.AppendGlobalBoneModifiers(USkeletalMeshComponent*,bool,TArray<FBoneModifier,TSizedDefaultAllocator<32>>*)", ForMesh, IsFemale, BoneModifiers); }
	static char GetIsItemBlacklisted() { return NativeCall<char>(nullptr, "UPrimalGameData.GetIsItemBlacklisted()"); }
	const UPrimalGlobalUIData* GetUIDataFast() { return NativeCall<const UPrimalGlobalUIData*>(this, "UPrimalGameData.GetUIDataFast()"); }
	static TSubclassOf<UObject>* GetRedirectedClass(TSubclassOf<UObject>* result, FString* key, UObject* WorldContextObject) { return NativeCall<TSubclassOf<UObject>*, TSubclassOf<UObject>*, FString*, UObject*>(nullptr, "UPrimalGameData.GetRedirectedClass(FString&,UObject*)", result, key, WorldContextObject);  }
};

struct UPrimalGlobals : UObject
{
	// Fields

	UPrimalGameData*& PrimalGameDataField() { return *GetNativePointerField<UPrimalGameData**>(this, "UPrimalGlobals.PrimalGameData"); }
	UPrimalGameData*& PrimalGameDataOverrideField() { return *GetNativePointerField<UPrimalGameData**>(this, "UPrimalGlobals.PrimalGameDataOverride"); }
// TSubclassOf<UShooterReplicationGraph>& DefaultReplicationGraphField() { return *GetNativePointerField<TSubclassOf<UShooterReplicationGraph>*>(this, "UPrimalGlobals.DefaultReplicationGraph"); }
	//TSoftClassPtr<UPrimalGameData>& PrimalGameDataAssetField() { return *GetNativePointerField<//TSoftClassPtr<UPrimalGameData>*>(this, "UPrimalGlobals.PrimalGameDataAsset"); }
	//TArray<//TSoftClassPtr<UObject>, TSizedDefaultAllocator<32> >& PrimalGameDataAssetExtendedField() { return *GetNativePointerField<//TArray<//TSoftClassPtr<UObject>, TSizedDefaultAllocator<32> >*>(this, "UPrimalGlobals.PrimalGameDataAssetExtended"); }
	UPrimalAssets*& AssetsField() { return *GetNativePointerField<UPrimalAssets**>(this, "UPrimalGlobals.Assets"); }
// TSubclassOf<AStaticMeshActor>& RagdollKinematicActorClassField() { return *GetNativePointerField<TSubclassOf<AStaticMeshActor>*>(this, "UPrimalGlobals.RagdollKinematicActorClass"); }
// TSubclassOf<ADestructibleBaseActor>& DefaultHarvestTreeClassField() { return *GetNativePointerField<TSubclassOf<ADestructibleBaseActor>*>(this, "UPrimalGlobals.DefaultHarvestTreeClass"); }
// TSubclassOf<ADestructibleBaseActor>& DefaultHarvestBushClassField() { return *GetNativePointerField<TSubclassOf<ADestructibleBaseActor>*>(this, "UPrimalGlobals.DefaultHarvestBushClass"); }
// TSubclassOf<UUI_GenericConfirmationDialog>& GlobalGenericConfirmationDialogField() { return *GetNativePointerField<TSubclassOf<UUI_GenericConfirmationDialog>*>(this, "UPrimalGlobals.GlobalGenericConfirmationDialog"); }
	TArray<UObject*, TSizedDefaultAllocator<32> >& ExtraResourcesField() { return *GetNativePointerField<TArray<UObject*, TSizedDefaultAllocator<32> >*>(this, "UPrimalGlobals.ExtraResources"); }
	bool& bAllowNonDedicatedHostField() { return *GetNativePointerField<bool*>(this, "UPrimalGlobals.bAllowNonDedicatedHost"); }
	TArray<FString, TSizedDefaultAllocator<32> >& UIOnlyShowMapFileNamesField() { return *GetNativePointerField<TArray<FString, TSizedDefaultAllocator<32> >*>(this, "UPrimalGlobals.UIOnlyShowMapFileNames"); }
	TArray<FString, TSizedDefaultAllocator<32> >& UIOnlyShowModIDsField() { return *GetNativePointerField<TArray<FString, TSizedDefaultAllocator<32> >*>(this, "UPrimalGlobals.UIOnlyShowModIDs"); }
	FString& CreditStringField() { return *GetNativePointerField<FString*>(this, "UPrimalGlobals.CreditString"); }
	FLinearColor& AlphaMissionColorField() { return *GetNativePointerField<FLinearColor*>(this, "UPrimalGlobals.AlphaMissionColor"); }
	FLinearColor& BetaMissionColorField() { return *GetNativePointerField<FLinearColor*>(this, "UPrimalGlobals.BetaMissionColor"); }
	FLinearColor& GammaMissionColorField() { return *GetNativePointerField<FLinearColor*>(this, "UPrimalGlobals.GammaMissionColor"); }
	FLinearColor& MissionCompleteMultiUseWheelTextColorField() { return *GetNativePointerField<FLinearColor*>(this, "UPrimalGlobals.MissionCompleteMultiUseWheelTextColor"); }
	UFont*& BigFont_OfflineField() { return *GetNativePointerField<UFont**>(this, "UPrimalGlobals.BigFont_Offline"); }
	UFont*& NormalFont_OfflineField() { return *GetNativePointerField<UFont**>(this, "UPrimalGlobals.NormalFont_Offline"); }
	UFont*& SmallFont_OfflineField() { return *GetNativePointerField<UFont**>(this, "UPrimalGlobals.SmallFont_Offline"); }
	//TArray<TSoftObjectPtr<UFont>, TSizedDefaultAllocator<32> >& OfflineFontArrayField() { return *GetNativePointerField<//TArray<TSoftObjectPtr<UFont>, TSizedDefaultAllocator<32> >*>(this, "UPrimalGlobals.OfflineFontArray"); }
// TSubclassOf<UPrimalUI>& SpawnMenuUITemplateField() { return *GetNativePointerField<TSubclassOf<UPrimalUI>*>(this, "UPrimalGlobals.SpawnMenuUITemplate"); }
// TSubclassOf<UUI_CustomOverlay>& CustomOverlayClassField() { return *GetNativePointerField<TSubclassOf<UUI_CustomOverlay>*>(this, "UPrimalGlobals.CustomOverlayClass"); }
	TArray<USoundClass*, TSizedDefaultAllocator<32> >& CoreSoundClassesField() { return *GetNativePointerField<TArray<USoundClass*, TSizedDefaultAllocator<32> >*>(this, "UPrimalGlobals.CoreSoundClasses"); }
	USoundClass*& PS5GamepadSoundClassField() { return *GetNativePointerField<USoundClass**>(this, "UPrimalGlobals.PS5GamepadSoundClass"); }
	USoundClass*& PS5GamepadHandsSoundClassField() { return *GetNativePointerField<USoundClass**>(this, "UPrimalGlobals.PS5GamepadHandsSoundClass"); }
	TObjectPtr<USoundSubmix>& PS5GamepadSubmixField() { return *GetNativePointerField<TObjectPtr<USoundSubmix>*>(this, "UPrimalGlobals.PS5GamepadSubmix"); }
	UMaterialInterface*& DefaultRenderTargetMaterialField() { return *GetNativePointerField<UMaterialInterface**>(this, "UPrimalGlobals.DefaultRenderTargetMaterial"); }
	UTriggerEffectLibrary*& TriggerEffectLibraryField() { return *GetNativePointerField<UTriggerEffectLibrary**>(this, "UPrimalGlobals.TriggerEffectLibrary"); }
	bool& bGameMediaLoadedField() { return *GetNativePointerField<bool*>(this, "UPrimalGlobals.bGameMediaLoaded"); }
	bool& bContentStrippedForDedicatedField() { return *GetNativePointerField<bool*>(this, "UPrimalGlobals.bContentStrippedForDedicated"); }
	unsigned __int64& LoadedTotalConversionField() { return *GetNativePointerField<unsigned __int64*>(this, "UPrimalGlobals.LoadedTotalConversion"); }
	int& SavingFilesCounterField() { return *GetNativePointerField<int*>(this, "UPrimalGlobals.SavingFilesCounter"); }
	TDelegate<void __cdecl(bool), FDefaultDelegateUserPolicy>& CompletedDialogField() { return *GetNativePointerField<TDelegate<void __cdecl(bool), FDefaultDelegateUserPolicy>*>(this, "UPrimalGlobals.CompletedDialog"); }
	FStreamableManager& StreamableManagerField() { return *GetNativePointerField<FStreamableManager*>(this, "UPrimalGlobals.StreamableManager"); }
	UMaterialInstanceConstant*& VertexVizField() { return *GetNativePointerField<UMaterialInstanceConstant**>(this, "UPrimalGlobals.VertexViz"); }
	FOpenColorIODisplayConfiguration& DefaultOpenColorIODisplayConfigurationField() { return *GetNativePointerField<FOpenColorIODisplayConfiguration*>(this, "UPrimalGlobals.DefaultOpenColorIODisplayConfiguration"); }
	FCachedDBAccessor& CachedDBsField() { return *GetNativePointerField<FCachedDBAccessor*>(this, "UPrimalGlobals.CachedDBs"); }

	// Bitfields


	// Functions

	static void StaticRegisterNativesUPrimalGlobals() { NativeCall<void>(nullptr, "UPrimalGlobals.StaticRegisterNativesUPrimalGlobals()"); }
	static UClass* StaticClass() { return NativeCall<UClass*>(nullptr, "UPrimalGlobals.StaticClass()"); }
	//void ~UPrimalGlobals() { NativeCall<void>(this, "UPrimalGlobals.~UPrimalGlobals()"); }
	//void UPrimalGlobals(const FObjectInitializer* ObjectInitializer) { NativeCall<void, const FObjectInitializer*>(this, "UPrimalGlobals.UPrimalGlobals(FObjectInitializer*)", ObjectInitializer); }
	void AsyncLoadGameMedia(bool LoadForConsoleDedicated, bool bIsTCSwap, bool bForceSynchronous) { NativeCall<void, bool, bool, bool>(this, "UPrimalGlobals.AsyncLoadGameMedia(bool,bool,bool)", LoadForConsoleDedicated, bIsTCSwap, bForceSynchronous); }
	void UpdateOfflineFonts() { NativeCall<void>(this, "UPrimalGlobals.UpdateOfflineFonts()"); }
	void FinishLoadGameMedia() { NativeCall<void>(this, "UPrimalGlobals.FinishLoadGameMedia()"); }
	void FinishedLoadingGameMedia() { NativeCall<void>(this, "UPrimalGlobals.FinishedLoadingGameMedia()"); }
	void LoadNextTick(UWorld* ForWorld, bool bWithLoadForDedicated) { NativeCall<void, UWorld*, bool>(this, "UPrimalGlobals.LoadNextTick(UWorld*,bool)", ForWorld, bWithLoadForDedicated); }
	void OnConfirmationDialogClosed(bool bAccept) { NativeCall<void, bool>(this, "UPrimalGlobals.OnConfirmationDialogClosed(bool)", bAccept); }
	static AStaticMeshActor* GetRagdollKinematicActor(UWorld* World) { return NativeCall<AStaticMeshActor*, UWorld*>(nullptr, "UPrimalGlobals.GetRagdollKinematicActor(UWorld*)", World); }
	static ADayCycleManager* GetDayCycleManager(UWorld* World) { return NativeCall<ADayCycleManager*, UWorld*>(nullptr, "UPrimalGlobals.GetDayCycleManager(UWorld*)", World); }
	static ASOTFNotification* GetSOTFNotificationManager(UWorld* World) { return NativeCall<ASOTFNotification*, UWorld*>(nullptr, "UPrimalGlobals.GetSOTFNotificationManager(UWorld*)", World); }
	static bool IsAudibleSimple(UAudioComponent* audioComponent, const UE::Math::TVector<double>* location) { return NativeCall<bool, UAudioComponent*, const UE::Math::TVector<double>*>(nullptr, "UPrimalGlobals.IsAudibleSimple(UAudioComponent*,UE::Math::TVector<double>*)", audioComponent, location); }
	static bool SimpleTeleportTo(AActor* ForActor, const UE::Math::TVector<double>* DestLocation, const UE::Math::TRotator<double>* DestRotation) { return NativeCall<bool, AActor*, const UE::Math::TVector<double>*, const UE::Math::TRotator<double>*>(nullptr, "UPrimalGlobals.SimpleTeleportTo(AActor*,UE::Math::TVector<double>*,UE::Math::TRotator<double>*)", ForActor, DestLocation, DestRotation); }
	static UClass* AttemptSlowClassDLO(const FString* ClassName) { return NativeCall<UClass*, const FString*>(nullptr, "UPrimalGlobals.AttemptSlowClassDLO(FString&)", ClassName); }
};

struct ABasePrimalWorldSettings : AInfo
{
	// Fields

	TMap<unsigned int, TObjectPtr<AActor>, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<unsigned int, TObjectPtr<AActor>, 0> >& StructureIDMapField() { return *GetNativePointerField<TMap<unsigned int, TObjectPtr<AActor>, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<unsigned int, TObjectPtr<AActor>, 0> >*>(this, "ABasePrimalWorldSettings.StructureIDMap"); }
	FieldArray<TSet<TWeakObjectPtr<AActor>, DefaultKeyFuncs<TWeakObjectPtr<AActor>, 0>, FDefaultSetAllocator>, 6> UnstasisSetField() { return { this, "ABasePrimalWorldSettings.UnstasisSet" }; }
	std::atomic<int>& AtomicActorUnstasisListCountField() { return *GetNativePointerField<std::atomic<int>*>(this, "ABasePrimalWorldSettings.AtomicActorUnstasisListCount"); }
	TArray<TWeakObjectPtr<AActor>, TSizedDefaultAllocator<32> >& QuickTickUnstasisListField() { return *GetNativePointerField<TArray<TWeakObjectPtr<AActor>, TSizedDefaultAllocator<32> >*>(this, "ABasePrimalWorldSettings.QuickTickUnstasisList"); }
	unsigned int& CurrentUnStasisedIndexField() { return *GetNativePointerField<unsigned int*>(this, "ABasePrimalWorldSettings.CurrentUnStasisedIndex"); }
	float& BaseNetStasisDistanceField() { return *GetNativePointerField<float*>(this, "ABasePrimalWorldSettings.BaseNetStasisDistance"); }
	TMap<AActor*, double, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<AActor*, double, 0> >& PlayerCharacterUnstasisViewpointTimestampsField() { return *GetNativePointerField<TMap<AActor*, double, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<AActor*, double, 0> >*>(this, "ABasePrimalWorldSettings.PlayerCharacterUnstasisViewpointTimestamps"); }
	TObjectPtr<APostProcessVolume>& GlobalPostProcessVolumeField() { return *GetNativePointerField<TObjectPtr<APostProcessVolume>*>(this, "ABasePrimalWorldSettings.GlobalPostProcessVolume"); }
	float& KillZIntervalMinField() { return *GetNativePointerField<float*>(this, "ABasePrimalWorldSettings.KillZIntervalMin"); }
	float& KillZIntervalMaxField() { return *GetNativePointerField<float*>(this, "ABasePrimalWorldSettings.KillZIntervalMax"); }
	FieldArray<TSet<unsigned __int64, DefaultKeyFuncs<unsigned __int64, 0>, FDefaultSetAllocator>, 37> ActorListSetField() { return { this, "ABasePrimalWorldSettings.ActorListSet" }; }
	FieldArray<TArray<TWeakObjectPtr<AActor>, TSizedDefaultAllocator<32> >, 37> ActorListsField() { return { this, "ABasePrimalWorldSettings.ActorLists" }; }
	TMap<UStaticMesh*, UInstancedStaticMeshComponent*, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<UStaticMesh*, UInstancedStaticMeshComponent*, 0> >& TreeStumpComponentsField() { return *GetNativePointerField<TMap<UStaticMesh*, UInstancedStaticMeshComponent*, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<UStaticMesh*, UInstancedStaticMeshComponent*, 0> >*>(this, "ABasePrimalWorldSettings.TreeStumpComponents"); }
	TArray<FTreeStumpCreationTime, TSizedDefaultAllocator<32> >& TreeStumpCreationTimesField() { return *GetNativePointerField<TArray<FTreeStumpCreationTime, TSizedDefaultAllocator<32> >*>(this, "ABasePrimalWorldSettings.TreeStumpCreationTimes"); }
	TMap<FName, TArray<AActor*, TSizedDefaultAllocator<32> >, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<FName, TArray<AActor*, TSizedDefaultAllocator<32> >, 0> >& TaggedActorMapField() { return *GetNativePointerField<TMap<FName, TArray<AActor*, TSizedDefaultAllocator<32> >, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<FName, TArray<AActor*, TSizedDefaultAllocator<32> >, 0> >*>(this, "ABasePrimalWorldSettings.TaggedActorMap"); }
	TArray<AActor*, TSizedDefaultAllocator<32> >& EmptyArrayField() { return *GetNativePointerField<TArray<AActor*, TSizedDefaultAllocator<32> >*>(this, "ABasePrimalWorldSettings.EmptyArray"); }

	// Bitfields


	// Functions

	static void StaticRegisterNativesABasePrimalWorldSettings() { NativeCall<void>(nullptr, "ABasePrimalWorldSettings.StaticRegisterNativesABasePrimalWorldSettings()"); }
	static UClass* StaticClass() { return NativeCall<UClass*>(nullptr, "ABasePrimalWorldSettings.StaticClass()"); }
	void AddToActorList(EActorLists ActorList, AActor* ActorToAdd) { NativeCall<void, EActorLists, AActor*>(this, "ABasePrimalWorldSettings.AddToActorList(EActorLists,AActor*)", ActorList, ActorToAdd); }
	void RemoveFromActorList(EActorLists ActorList, AActor* ActorToRemove) { NativeCall<void, EActorLists, AActor*>(this, "ABasePrimalWorldSettings.RemoveFromActorList(EActorLists,AActor*)", ActorList, ActorToRemove); }
	void ForEachActorInActorList(EActorLists ActorList, TFunctionRef<bool __cdecl(AActor*)>* Callback) { NativeCall<void, EActorLists, TFunctionRef<bool __cdecl(AActor*)>*>(this, "ABasePrimalWorldSettings.ForEachActorInActorList(EActorLists,TFunctionRef<bool__cdecl(AActor*)", ActorList, Callback); }
	void ForEachActorInActorList_Throttled(EActorLists ActorList, int MaxIterations, int* pInOutCurrentActorListOffset, TFunctionRef<bool __cdecl(AActor*)>* Callback) { NativeCall<void, EActorLists, int, int*, TFunctionRef<bool __cdecl(AActor*)>*>(this, "ABasePrimalWorldSettings.ForEachActorInActorList_Throttled(EActorLists,int,int*,TFunctionRef<bool__cdecl(AActor*)", ActorList, MaxIterations, pInOutCurrentActorListOffset, Callback); }
	int GetActorListCount(EActorLists ActorList) { return NativeCall<int, EActorLists>(this, "ABasePrimalWorldSettings.GetActorListCount(EActorLists)", ActorList); }
	TArray<AActor*, TSizedDefaultAllocator<32> >* GetActorList(TArray<AActor*, TSizedDefaultAllocator<32> >* result, EActorLists ActorList) { return NativeCall<TArray<AActor*, TSizedDefaultAllocator<32> >*, TArray<AActor*, TSizedDefaultAllocator<32> >*, EActorLists>(this, "ABasePrimalWorldSettings.GetActorList(EActorLists)", result, ActorList); }
	void DuringPhysxTick(float DeltaSeconds) { NativeCall<void, float>(this, "ABasePrimalWorldSettings.DuringPhysxTick(float)", DeltaSeconds); }
	void AddActorToUnstasisSet(AActor* InActor) { NativeCall<void, AActor*>(this, "ABasePrimalWorldSettings.AddActorToUnstasisSet(AActor*)", InActor); }
	void RemoveActorFromUnstasisSet(AActor* InActor) { NativeCall<void, AActor*>(this, "ABasePrimalWorldSettings.RemoveActorFromUnstasisSet(AActor*)", InActor); }
	void Tick(float DeltaSeconds) { NativeCall<void, float>(this, "ABasePrimalWorldSettings.Tick(float)", DeltaSeconds); }
	void RemoveTaggedActor(AActor* anAct) { NativeCall<void, AActor*>(this, "ABasePrimalWorldSettings.RemoveTaggedActor(AActor*)", anAct); }
	TArray<AActor*, TSizedDefaultAllocator<32> >* GetActorsWithTag(FName theTag) { return NativeCall<TArray<AActor*, TSizedDefaultAllocator<32> >*, FName>(this, "ABasePrimalWorldSettings.GetActorsWithTag(FName)", theTag); }
	AActor* GetActorWithTag(FName theTag) { return NativeCall<AActor*, FName>(this, "ABasePrimalWorldSettings.GetActorWithTag(FName)", theTag); }
	void UpdateTreeStumps() { NativeCall<void>(this, "ABasePrimalWorldSettings.UpdateTreeStumps()"); }
};

struct AWorldSettings : ABasePrimalWorldSettings
{
	// Fields

	int& VisibilityCellSizeField() { return *GetNativePointerField<int*>(this, "AWorldSettings.VisibilityCellSize"); }
	TArray<FName, TSizedDefaultAllocator<32> >& LevelsToForceInvisibleWhenExcludedField() { return *GetNativePointerField<TArray<FName, TSizedDefaultAllocator<32> >*>(this, "AWorldSettings.LevelsToForceInvisibleWhenExcluded"); }
	TArray<FName, TSizedDefaultAllocator<32> >& LevelsToAbsolutelyNotLoadOnDediServerField() { return *GetNativePointerField<TArray<FName, TSizedDefaultAllocator<32> >*>(this, "AWorldSettings.LevelsToAbsolutelyNotLoadOnDediServer"); }
	TArray<FName, TSizedDefaultAllocator<32> >& AlwaysVisibleLevelNamesField() { return *GetNativePointerField<TArray<FName, TSizedDefaultAllocator<32> >*>(this, "AWorldSettings.AlwaysVisibleLevelNames"); }
	//TSoftClassPtr<UAISystemBase>& AISystemClassField() { return *GetNativePointerField<TSoftClassPtr<UAISystemBase>*>(this, "AWorldSettings.AISystemClass"); }
	UE::Math::TVector<double>& LevelInstancePivotOffsetField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "AWorldSettings.LevelInstancePivotOffset"); }
	TObjectPtr<UNavigationSystemConfig>& NavigationSystemConfigField() { return *GetNativePointerField<TObjectPtr<UNavigationSystemConfig>*>(this, "AWorldSettings.NavigationSystemConfig"); }
	TObjectPtr<UNavigationSystemConfig>& NavigationSystemConfigOverrideField() { return *GetNativePointerField<TObjectPtr<UNavigationSystemConfig>*>(this, "AWorldSettings.NavigationSystemConfigOverride"); }
	TObjectPtr<UWorldPartition>& WorldPartitionField() { return *GetNativePointerField<TObjectPtr<UWorldPartition>*>(this, "AWorldSettings.WorldPartition"); }
	TArray<TObjectPtr<UDataLayerAsset>, TSizedDefaultAllocator<32> >& BaseNavmeshDataLayersField() { return *GetNativePointerField<TArray<TObjectPtr<UDataLayerAsset>, TSizedDefaultAllocator<32> >*>(this, "AWorldSettings.BaseNavmeshDataLayers"); }
	float& WorldToMetersField() { return *GetNativePointerField<float*>(this, "AWorldSettings.WorldToMeters"); }
	float& KillZField() { return *GetNativePointerField<float*>(this, "AWorldSettings.KillZ"); }
	TSubclassOf<UDamageType>& KillZDamageTypeField() { return *GetNativePointerField<TSubclassOf<UDamageType>*>(this, "AWorldSettings.KillZDamageType"); }
	float& WorldGravityZField() { return *GetNativePointerField<float*>(this, "AWorldSettings.WorldGravityZ"); }
	float& GlobalGravityZField() { return *GetNativePointerField<float*>(this, "AWorldSettings.GlobalGravityZ"); }
	//TSubclassOf<ADefaultPhysicsVolume>& DefaultPhysicsVolumeClassField() { return *GetNativePointerField<TSubclassOf<ADefaultPhysicsVolume>*>(this, "AWorldSettings.DefaultPhysicsVolumeClass"); }
	//TSubclassOf<UPhysicsCollisionHandler>& PhysicsCollisionHandlerClassField() { return *GetNativePointerField<TSubclassOf<UPhysicsCollisionHandler>*>(this, "AWorldSettings.PhysicsCollisionHandlerClass"); }
	TSubclassOf<AGameModeBase>& DefaultGameModeField() { return *GetNativePointerField<TSubclassOf<AGameModeBase>*>(this, "AWorldSettings.DefaultGameMode"); }
	TSubclassOf<AGameNetworkManager>& GameNetworkManagerClassField() { return *GetNativePointerField<TSubclassOf<AGameNetworkManager>*>(this, "AWorldSettings.GameNetworkManagerClass"); }
	int& PackedLightAndShadowMapTextureSizeField() { return *GetNativePointerField<int*>(this, "AWorldSettings.PackedLightAndShadowMapTextureSize"); }
	UE::Math::TVector<double>& DefaultColorScaleField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "AWorldSettings.DefaultColorScale"); }
	float& DefaultMaxDistanceFieldOcclusionDistanceField() { return *GetNativePointerField<float*>(this, "AWorldSettings.DefaultMaxDistanceFieldOcclusionDistance"); }
	float& GlobalDistanceFieldViewDistanceField() { return *GetNativePointerField<float*>(this, "AWorldSettings.GlobalDistanceFieldViewDistance"); }
	float& DynamicIndirectShadowsSelfShadowingIntensityField() { return *GetNativePointerField<float*>(this, "AWorldSettings.DynamicIndirectShadowsSelfShadowingIntensity"); }
	FReverbSettings& DefaultReverbSettingsField() { return *GetNativePointerField<FReverbSettings*>(this, "AWorldSettings.DefaultReverbSettings"); }
	FInteriorSettings& DefaultAmbientZoneSettingsField() { return *GetNativePointerField<FInteriorSettings*>(this, "AWorldSettings.DefaultAmbientZoneSettings"); }
	TObjectPtr<USoundMix>& DefaultBaseSoundMixField() { return *GetNativePointerField<TObjectPtr<USoundMix>*>(this, "AWorldSettings.DefaultBaseSoundMix"); }
	float& TimeDilationField() { return *GetNativePointerField<float*>(this, "AWorldSettings.TimeDilation"); }
	float& MatineeTimeDilationField() { return *GetNativePointerField<float*>(this, "AWorldSettings.MatineeTimeDilation"); }
	float& DemoPlayTimeDilationField() { return *GetNativePointerField<float*>(this, "AWorldSettings.DemoPlayTimeDilation"); }
	float& MinGlobalTimeDilationField() { return *GetNativePointerField<float*>(this, "AWorldSettings.MinGlobalTimeDilation"); }
	float& MaxGlobalTimeDilationField() { return *GetNativePointerField<float*>(this, "AWorldSettings.MaxGlobalTimeDilation"); }
	float& MinUndilatedFrameTimeField() { return *GetNativePointerField<float*>(this, "AWorldSettings.MinUndilatedFrameTime"); }
	float& MaxUndilatedFrameTimeField() { return *GetNativePointerField<float*>(this, "AWorldSettings.MaxUndilatedFrameTime"); }
	FBroadphaseSettings& BroadphaseSettingsField() { return *GetNativePointerField<FBroadphaseSettings*>(this, "AWorldSettings.BroadphaseSettings"); }
	TArray<FNetViewer, TSizedDefaultAllocator<32> >& ReplicationViewersField() { return *GetNativePointerField<TArray<FNetViewer, TSizedDefaultAllocator<32> >*>(this, "AWorldSettings.ReplicationViewers"); }
	TArray<TObjectPtr<UAssetUserData>, TSizedDefaultAllocator<32> >& AssetUserDataField() { return *GetNativePointerField<TArray<TObjectPtr<UAssetUserData>, TSizedDefaultAllocator<32> >*>(this, "AWorldSettings.AssetUserData"); }
	TObjectPtr<APlayerState>& PauserPlayerStateField() { return *GetNativePointerField<TObjectPtr<APlayerState>*>(this, "AWorldSettings.PauserPlayerState"); }
	int& MaxNumberOfBookmarksField() { return *GetNativePointerField<int*>(this, "AWorldSettings.MaxNumberOfBookmarks"); }
	TSubclassOf<UBookmarkBase>& DefaultBookmarkClassField() { return *GetNativePointerField<TSubclassOf<UBookmarkBase>*>(this, "AWorldSettings.DefaultBookmarkClass"); }
	TArray<TObjectPtr<UBookmarkBase>, TSizedDefaultAllocator<32> >& BookmarkArrayField() { return *GetNativePointerField<TArray<TObjectPtr<UBookmarkBase>, TSizedDefaultAllocator<32> >*>(this, "AWorldSettings.BookmarkArray"); }
	TSubclassOf<UBookmarkBase>& LastBookmarkClassField() { return *GetNativePointerField<TSubclassOf<UBookmarkBase>*>(this, "AWorldSettings.LastBookmarkClass"); }

	// Bitfields

	BitFieldValue<bool, unsigned __int32> bPrecomputeVisibility() { return { this, "AWorldSettings.bPrecomputeVisibility" }; }
	BitFieldValue<bool, unsigned __int32> bPlaceCellsOnlyAlongCameraTracks() { return { this, "AWorldSettings.bPlaceCellsOnlyAlongCameraTracks" }; }
	BitFieldValue<bool, unsigned __int32> bEnableWorldBoundsChecks() { return { this, "AWorldSettings.bEnableWorldBoundsChecks" }; }
	BitFieldValue<bool, unsigned __int32> bUse3DWorldCompStreaming() { return { this, "AWorldSettings.bUse3DWorldCompStreaming" }; }
	BitFieldValue<bool, unsigned __int32> bForceLoadAllLevelsOnDediServer() { return { this, "AWorldSettings.bForceLoadAllLevelsOnDediServer" }; }
	BitFieldValue<bool, unsigned __int32> bEnableNavigationSystem() { return { this, "AWorldSettings.bEnableNavigationSystem" }; }
	BitFieldValue<bool, unsigned __int32> bEnableAISystem() { return { this, "AWorldSettings.bEnableAISystem" }; }
	BitFieldValue<bool, unsigned __int32> bEnableWorldComposition() { return { this, "AWorldSettings.bEnableWorldComposition" }; }
	BitFieldValue<bool, unsigned __int32> bUseClientSideLevelStreamingVolumes() { return { this, "AWorldSettings.bUseClientSideLevelStreamingVolumes" }; }
	BitFieldValue<bool, unsigned __int32> bEnableWorldOriginRebasing() { return { this, "AWorldSettings.bEnableWorldOriginRebasing" }; }
	BitFieldValue<bool, unsigned __int32> bWorldGravitySet() { return { this, "AWorldSettings.bWorldGravitySet" }; }
	BitFieldValue<bool, unsigned __int32> bGlobalGravitySet() { return { this, "AWorldSettings.bGlobalGravitySet" }; }
	BitFieldValue<bool, unsigned __int32> bMinimizeBSPSections() { return { this, "AWorldSettings.bMinimizeBSPSections" }; }
	BitFieldValue<bool, unsigned __int32> bForceNoPrecomputedLighting() { return { this, "AWorldSettings.bForceNoPrecomputedLighting" }; }
	BitFieldValue<bool, unsigned __int32> bHighPriorityLoading() { return { this, "AWorldSettings.bHighPriorityLoading" }; }
	BitFieldValue<bool, unsigned __int32> bHighPriorityLoadingLocal() { return { this, "AWorldSettings.bHighPriorityLoadingLocal" }; }
	BitFieldValue<bool, unsigned __int32> bOverrideDefaultBroadphaseSettings() { return { this, "AWorldSettings.bOverrideDefaultBroadphaseSettings" }; }
	BitFieldValue<bool, unsigned __int32> bGenerateSingleClusterForLevel() { return { this, "AWorldSettings.bGenerateSingleClusterForLevel" }; }

	// Functions

	static UClass* GetPrivateStaticClass() { return NativeCall<UClass*>(nullptr, "AWorldSettings.GetPrivateStaticClass()"); }
	void SetPauserPlayerState(APlayerState* PlayerState) { NativeCall<void, APlayerState*>(this, "AWorldSettings.SetPauserPlayerState(APlayerState*)", PlayerState); }
	//TSubclassOf<UPhysicsCollisionHandler>* GetPhysicsCollisionHandlerClass(TSubclassOf<UPhysicsCollisionHandler>* result) { return NativeCall<TSubclassOf<UPhysicsCollisionHandler> *, TSubclassOf<UPhysicsCollisionHandler>*>(this, "AWorldSettings.GetPhysicsCollisionHandlerClass()", result); }
	static void StaticRegisterNativesAWorldSettings() { NativeCall<void>(nullptr, "AWorldSettings.StaticRegisterNativesAWorldSettings()"); }
	void ValidateGeneratedRepEnums(const TArray<FRepRecord, TSizedDefaultAllocator<32> >* ClassReps) { NativeCall<void, const TArray<FRepRecord, TSizedDefaultAllocator<32> >*>(this, "AWorldSettings.ValidateGeneratedRepEnums(TArray<FRepRecord,TSizedDefaultAllocator<32>>&)", ClassReps); }
	void Serialize(FStructuredArchiveRecord Record) { NativeCall<void, FStructuredArchiveRecord>(this, "AWorldSettings.Serialize(FStructuredArchiveRecord)", Record); }
	void PostInitProperties() { NativeCall<void>(this, "AWorldSettings.PostInitProperties()"); }
	void PreInitializeComponents() { NativeCall<void>(this, "AWorldSettings.PreInitializeComponents()"); }
	void PostRegisterAllComponents() { NativeCall<void>(this, "AWorldSettings.PostRegisterAllComponents()"); }
	float GetGravityZ() { return NativeCall<float>(this, "AWorldSettings.GetGravityZ()"); }
	float FixupDeltaSeconds(float DeltaSeconds, float RealDeltaSeconds) { return NativeCall<float, float, float>(this, "AWorldSettings.FixupDeltaSeconds(float,float)", DeltaSeconds, RealDeltaSeconds); }
	float SetTimeDilation(float NewTimeDilation) { return NativeCall<float, float>(this, "AWorldSettings.SetTimeDilation(float)", NewTimeDilation); }
	void NotifyBeginPlay() { NativeCall<void>(this, "AWorldSettings.NotifyBeginPlay()"); }
	void NotifyMatchStarted() { NativeCall<void>(this, "AWorldSettings.NotifyMatchStarted()"); }
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty, TSizedDefaultAllocator<32> >* OutLifetimeProps) { NativeCall<void, TArray<FLifetimeProperty, TSizedDefaultAllocator<32> >*>(this, "AWorldSettings.GetLifetimeReplicatedProps(TArray<FLifetimeProperty,TSizedDefaultAllocator<32>>&)", OutLifetimeProps); }
	void Serialize(FArchive* Ar) { NativeCall<void, FArchive*>(this, "AWorldSettings.Serialize(FArchive&)", Ar); }
	void AddAssetUserData(UAssetUserData* InUserData) { NativeCall<void, UAssetUserData*>(this, "AWorldSettings.AddAssetUserData(UAssetUserData*)", InUserData); }
	UAssetUserData* GetAssetUserDataOfClass(TSubclassOf<UAssetUserData> InUserDataClass) { return NativeCall<UAssetUserData*, TSubclassOf<UAssetUserData>>(this, "AWorldSettings.GetAssetUserDataOfClass(TSubclassOf<UAssetUserData>)", InUserDataClass); }
	const TArray<UAssetUserData*, TSizedDefaultAllocator<32> >* GetAssetUserDataArray() { return NativeCall<const TArray<UAssetUserData*, TSizedDefaultAllocator<32> >*>(this, "AWorldSettings.GetAssetUserDataArray()"); }
	void RemoveUserDataOfClass(TSubclassOf<UAssetUserData> InUserDataClass) { NativeCall<void, TSubclassOf<UAssetUserData>>(this, "AWorldSettings.RemoveUserDataOfClass(TSubclassOf<UAssetUserData>)", InUserDataClass); }
	void PostLoad() { NativeCall<void>(this, "AWorldSettings.PostLoad()"); }
	void AdjustNumberOfBookmarks() { NativeCall<void>(this, "AWorldSettings.AdjustNumberOfBookmarks()"); }
	void SanitizeBookmarkClasses() { NativeCall<void>(this, "AWorldSettings.SanitizeBookmarkClasses()"); }
	FSoftClassPath* GetAISystemClassName(FSoftClassPath* result) { return NativeCall<FSoftClassPath*, FSoftClassPath*>(this, "AWorldSettings.GetAISystemClassName()", result); }
	char CanSpawnANewDestructableActor_AndIfSoDestroyFurthestActiveActorIfNeeded(UE::Math::TVector<double>* ViewLocation, UE::Math::TVector<double>* NewDestructableActorLocation) { return NativeCall<char, UE::Math::TVector<double>*, UE::Math::TVector<double>*>(this, "AWorldSettings.CanSpawnANewDestructableActor_AndIfSoDestroyFurthestActiveActorIfNeeded(UE::Math::TVector<double>,UE::Math::TVector<double>)", ViewLocation, NewDestructableActorLocation); }
	void RewindForReplay() { NativeCall<void>(this, "AWorldSettings.RewindForReplay()"); }
};

struct AARKNXWorldSettings : AWorldSettings
{
	// Fields

	FNXSettings& NXSettingsField() { return *GetNativePointerField<FNXSettings*>(this, "AARKNXWorldSettings.NXSettings"); }
	FPointLightReductionSettings& PointLightReductionField() { return *GetNativePointerField<FPointLightReductionSettings*>(this, "AARKNXWorldSettings.PointLightReduction"); }
	TMap<FName, FLayerNameArray, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<FName, FLayerNameArray, 0> >& SubmapToDataLayerMapField() { return *GetNativePointerField<TMap<FName, FLayerNameArray, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<FName, FLayerNameArray, 0> >*>(this, "AARKNXWorldSettings.SubmapToDataLayerMap"); }
	TArray<TWeakObjectPtr<UAudioComponent>, TSizedDefaultAllocator<32> >& DeferredAudioActivatesField() { return *GetNativePointerField<TArray<TWeakObjectPtr<UAudioComponent>, TSizedDefaultAllocator<32> >*>(this, "AARKNXWorldSettings.DeferredAudioActivates"); }
	TArray<TWeakObjectPtr<UHierarchicalInstancedStaticMeshComponent>, TSizedDefaultAllocator<32> >& DeferredMeshNavigationUpdatesField() { return *GetNativePointerField<TArray<TWeakObjectPtr<UHierarchicalInstancedStaticMeshComponent>, TSizedDefaultAllocator<32> >*>(this, "AARKNXWorldSettings.DeferredMeshNavigationUpdates"); }

	// Bitfields


	// Functions

	static UClass* StaticClass() { return NativeCall<UClass*>(nullptr, "AARKNXWorldSettings.StaticClass()"); }
	void BeginPlay() { NativeCall<void>(this, "AARKNXWorldSettings.BeginPlay()"); }
	void Tick(float DeltaTime) { NativeCall<void, float>(this, "AARKNXWorldSettings.Tick(float)", DeltaTime); }
};

struct APrimalWorldSettings : AARKNXWorldSettings
{
	// Fields

	//TSubclassOf<UShooterReplicationGraph>& GraphClassField() { return *GetNativePointerField<TSubclassOf<UShooterReplicationGraph>*>(this, "APrimalWorldSettings.GraphClass"); }
	bool& bMapSupportsMissionsField() { return *GetNativePointerField<bool*>(this, "APrimalWorldSettings.bMapSupportsMissions"); }
	AActor*& DefaultCameraPositionActorField() { return *GetNativePointerField<AActor**>(this, "APrimalWorldSettings.DefaultCameraPositionActor"); }
	TArray<UObject*, TSizedDefaultAllocator<32> >& DynamicResourceRefsField() { return *GetNativePointerField<TArray<UObject*, TSizedDefaultAllocator<32> >*>(this, "APrimalWorldSettings.DynamicResourceRefs"); }
	bool& bEditorDoForceDisableNPCSpawnersField() { return *GetNativePointerField<bool*>(this, "APrimalWorldSettings.bEditorDoForceDisableNPCSpawners"); }
	bool& bEditorForceSpawnCharacterAsFemaleField() { return *GetNativePointerField<bool*>(this, "APrimalWorldSettings.bEditorForceSpawnCharacterAsFemale"); }
	FName& PlacingStructureToggleMeshTagVisibilityField() { return *GetNativePointerField<FName*>(this, "APrimalWorldSettings.PlacingStructureToggleMeshTagVisibility"); }
	bool& bForceEnablePhysicsSimulationField() { return *GetNativePointerField<bool*>(this, "APrimalWorldSettings.bForceEnablePhysicsSimulation"); }
	bool& bForceSpawnAnimationTestField() { return *GetNativePointerField<bool*>(this, "APrimalWorldSettings.bForceSpawnAnimationTest"); }
	float& LongitudeScaleField() { return *GetNativePointerField<float*>(this, "APrimalWorldSettings.LongitudeScale"); }
	float& RegularWildDinoResistanceVersusTamesMultiplierField() { return *GetNativePointerField<float*>(this, "APrimalWorldSettings.RegularWildDinoResistanceVersusTamesMultiplier"); }
	float& RegularWildDinoDamageVersusTamesMultiplierField() { return *GetNativePointerField<float*>(this, "APrimalWorldSettings.RegularWildDinoDamageVersusTamesMultiplier"); }
	float& RegularWildDinoXPMultiplierField() { return *GetNativePointerField<float*>(this, "APrimalWorldSettings.RegularWildDinoXPMultiplier"); }
	float& LatitudeScaleField() { return *GetNativePointerField<float*>(this, "APrimalWorldSettings.LatitudeScale"); }
	float& LongitudeOriginField() { return *GetNativePointerField<float*>(this, "APrimalWorldSettings.LongitudeOrigin"); }
	float& LatitudeOriginField() { return *GetNativePointerField<float*>(this, "APrimalWorldSettings.LatitudeOrigin"); }
	float& MinKillXField() { return *GetNativePointerField<float*>(this, "APrimalWorldSettings.MinKillX"); }
	float& MaxKillXField() { return *GetNativePointerField<float*>(this, "APrimalWorldSettings.MaxKillX"); }
	float& MinKillYField() { return *GetNativePointerField<float*>(this, "APrimalWorldSettings.MinKillY"); }
	float& MaxKillYField() { return *GetNativePointerField<float*>(this, "APrimalWorldSettings.MaxKillY"); }
	float& MaxKillZField() { return *GetNativePointerField<float*>(this, "APrimalWorldSettings.MaxKillZ"); }
	float& MaxUnderWorldTraceRangeZField() { return *GetNativePointerField<float*>(this, "APrimalWorldSettings.MaxUnderWorldTraceRangeZ"); }
	//TSubclassOf<UMinimapData>& CurrentMinimapDataField() { return *GetNativePointerField<TSubclassOf<UMinimapData>*>(this, "APrimalWorldSettings.CurrentMinimapData"); }
	UTexture2D*& OverrideWeaponMapTextureEmptyField() { return *GetNativePointerField<UTexture2D**>(this, "APrimalWorldSettings.OverrideWeaponMapTextureEmpty"); }
	UTexture2D*& OverrideWeaponMapTextureFilledField() { return *GetNativePointerField<UTexture2D**>(this, "APrimalWorldSettings.OverrideWeaponMapTextureFilled"); }
	UTexture2D*& OverrideUIMapTextureEmptyField() { return *GetNativePointerField<UTexture2D**>(this, "APrimalWorldSettings.OverrideUIMapTextureEmpty"); }
	UTexture2D*& OverrideUIMapTextureFilledField() { return *GetNativePointerField<UTexture2D**>(this, "APrimalWorldSettings.OverrideUIMapTextureFilled"); }
	UTexture2D*& OverrideUIMapTextureSmallField() { return *GetNativePointerField<UTexture2D**>(this, "APrimalWorldSettings.OverrideUIMapTextureSmall"); }
	AActor*& LevelBlueprintContainerActorField() { return *GetNativePointerField<AActor**>(this, "APrimalWorldSettings.LevelBlueprintContainerActor"); }
	TSubclassOf<UPrimalGameData>& PrimalGameDataOverrideField() { return *GetNativePointerField<TSubclassOf<UPrimalGameData>*>(this, "APrimalWorldSettings.PrimalGameDataOverride"); }
	FString& ForceLoadMapNameField() { return *GetNativePointerField<FString*>(this, "APrimalWorldSettings.ForceLoadMapName"); }
	TArray<FString, TSizedDefaultAllocator<32> >& OverridePlayerSpawnRegionsField() { return *GetNativePointerField<TArray<FString, TSizedDefaultAllocator<32> >*>(this, "APrimalWorldSettings.OverridePlayerSpawnRegions"); }
	TArray<int, TSizedDefaultAllocator<32> >& OverridePlayerSpawnRegionDifficultiesField() { return *GetNativePointerField<TArray<int, TSizedDefaultAllocator<32> >*>(this, "APrimalWorldSettings.OverridePlayerSpawnRegionDifficulties"); }
	TArray<unsigned char, TSizedDefaultAllocator<32> >& OverridePlayerSpawnRegionsHideInSpawnUIField() { return *GetNativePointerField<TArray<unsigned char, TSizedDefaultAllocator<32> >*>(this, "APrimalWorldSettings.OverridePlayerSpawnRegionsHideInSpawnUI"); }
	TArray<TSoftClassPtr<APrimalDinoCharacter>, TSizedDefaultAllocator<32> >& LevelUseNPCClassesField() { return *GetNativePointerField<TArray<TSoftClassPtr<APrimalDinoCharacter>, TSizedDefaultAllocator<32> >*>(this, "APrimalWorldSettings.LevelUseNPCClasses"); }
	AMatineeActorManager*& MatineeManagerField() { return *GetNativePointerField<AMatineeActorManager**>(this, "APrimalWorldSettings.MatineeManager"); }
	TMap<FName, TArray<AActor*, TSizedDefaultAllocator<32> >, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<FName, TArray<AActor*, TSizedDefaultAllocator<32> >, 0> >& MissionActorListsField() { return *GetNativePointerField<TMap<FName, TArray<AActor*, TSizedDefaultAllocator<32> >, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<FName, TArray<AActor*, TSizedDefaultAllocator<32> >, 0> >*>(this, "APrimalWorldSettings.MissionActorLists"); }
	FReverbSettings& DefaultWaterReverbSettingsField() { return *GetNativePointerField<FReverbSettings*>(this, "APrimalWorldSettings.DefaultWaterReverbSettings"); }
	FInteriorSettings& DefaultWaterAmbientZoneSettingsField() { return *GetNativePointerField<FInteriorSettings*>(this, "APrimalWorldSettings.DefaultWaterAmbientZoneSettings"); }
	TMap<unsigned __int64, AActor*, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<unsigned __int64, AActor*, 0> >& TamedDinosField() { return *GetNativePointerField<TMap<unsigned __int64, AActor*, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<unsigned __int64, AActor*, 0> >*>(this, "APrimalWorldSettings.TamedDinos"); }
	TArray<UE::Math::TSphere<double>, TSizedDefaultAllocator<32> >& DynamicUndermeshRegionsField() { return *GetNativePointerField<TArray<UE::Math::TSphere<double>, TSizedDefaultAllocator<32> >*>(this, "APrimalWorldSettings.DynamicUndermeshRegions"); }
	TArray<FClassRemappingWeight, TSizedDefaultAllocator<32> >& NPCRandomSpawnClassWeightsField() { return *GetNativePointerField<TArray<FClassRemappingWeight, TSizedDefaultAllocator<32> >*>(this, "APrimalWorldSettings.NPCRandomSpawnClassWeights"); }
	TArray<FClassRemappingWeight, TSizedDefaultAllocator<32> >& SinglePlayerNPCRandomSpawnClassWeightsField() { return *GetNativePointerField<TArray<FClassRemappingWeight, TSizedDefaultAllocator<32> >*>(this, "APrimalWorldSettings.SinglePlayerNPCRandomSpawnClassWeights"); }
	UE::Math::TVector2<double>& SpawnLevelBoundsMaxField() { return *GetNativePointerField<UE::Math::TVector2<double>*>(this, "APrimalWorldSettings.SpawnLevelBoundsMax"); }
	UE::Math::TVector2<double>& SpawnLevelBoundsMinField() { return *GetNativePointerField<UE::Math::TVector2<double>*>(this, "APrimalWorldSettings.SpawnLevelBoundsMin"); }
	float& AutoSpectatorNamesMinZField() { return *GetNativePointerField<float*>(this, "APrimalWorldSettings.AutoSpectatorNamesMinZ"); }
	TArray<UClass*, TSizedDefaultAllocator<32> >& CachedPersistentObjectClassesField() { return *GetNativePointerField<TArray<UClass*, TSizedDefaultAllocator<32> >*>(this, "APrimalWorldSettings.CachedPersistentObjectClasses"); }
	float& DinosLerpToMaxRandomBaseLevelField() { return *GetNativePointerField<float*>(this, "APrimalWorldSettings.DinosLerpToMaxRandomBaseLevel"); }
	TArray<int, TSizedDefaultAllocator<32> >& DefaultSpawnPointRandomIndicesField() { return *GetNativePointerField<TArray<int, TSizedDefaultAllocator<32> >*>(this, "APrimalWorldSettings.DefaultSpawnPointRandomIndices"); }
	UAnimMontage*& OverrideFirstSpawnAnimField() { return *GetNativePointerField<UAnimMontage**>(this, "APrimalWorldSettings.OverrideFirstSpawnAnim"); }
	UAnimMontage*& OverrideSpawnAnimField() { return *GetNativePointerField<UAnimMontage**>(this, "APrimalWorldSettings.OverrideSpawnAnim"); }
	float& TheWorldGammaOffsetField() { return *GetNativePointerField<float*>(this, "APrimalWorldSettings.TheWorldGammaOffset"); }
	float& GlobalHarvestHealthMultiplierField() { return *GetNativePointerField<float*>(this, "APrimalWorldSettings.GlobalHarvestHealthMultiplier"); }
	float& GlobalHarvestAmountMultiplierField() { return *GetNativePointerField<float*>(this, "APrimalWorldSettings.GlobalHarvestAmountMultiplier"); }
	bool& bFlyersStructurePreventionDismountingUnderTerrainOnlyField() { return *GetNativePointerField<bool*>(this, "APrimalWorldSettings.bFlyersStructurePreventionDismountingUnderTerrainOnly"); }
	float& OverrideDifficultyMaxField() { return *GetNativePointerField<float*>(this, "APrimalWorldSettings.OverrideDifficultyMax"); }
	TArray<FItemMultiplier, TSizedDefaultAllocator<32> >& GlobalSpoilingTimeMultipliersField() { return *GetNativePointerField<TArray<FItemMultiplier, TSizedDefaultAllocator<32> >*>(this, "APrimalWorldSettings.GlobalSpoilingTimeMultipliers"); }
	FieldArray<float, 12> GlobalStatusAdjustmentRateMultipliersPositiveField() { return { this, "APrimalWorldSettings.GlobalStatusAdjustmentRateMultipliersPositive" }; }
	FieldArray<float, 12> GlobalStatusAdjustmentRateMultipliersNegativeField() { return { this, "APrimalWorldSettings.GlobalStatusAdjustmentRateMultipliersNegative" }; }
	int& ValidEngramGroupsBitMaskField() { return *GetNativePointerField<int*>(this, "APrimalWorldSettings.ValidEngramGroupsBitMask"); }
	TArray<FInventoryComponentDefaultItemsAppend, TSizedDefaultAllocator<32> >& InventoryComponentAppendsField() { return *GetNativePointerField<TArray<FInventoryComponentDefaultItemsAppend, TSizedDefaultAllocator<32> >*>(this, "APrimalWorldSettings.InventoryComponentAppends"); }
	TArray<FInventoryComponentDefaultItemsAppend, TSizedDefaultAllocator<32> >& InventoryComponentAppendsNonDedicatedField() { return *GetNativePointerField<TArray<FInventoryComponentDefaultItemsAppend, TSizedDefaultAllocator<32> >*>(this, "APrimalWorldSettings.InventoryComponentAppendsNonDedicated"); }
	float& DayCycleSpeedScaleField() { return *GetNativePointerField<float*>(this, "APrimalWorldSettings.DayCycleSpeedScale"); }
	float& DayTimeSpeedScaleField() { return *GetNativePointerField<float*>(this, "APrimalWorldSettings.DayTimeSpeedScale"); }
	float& NightTimeSpeedScaleField() { return *GetNativePointerField<float*>(this, "APrimalWorldSettings.NightTimeSpeedScale"); }
	float& NegativeHyperthermalInsulationMultiplierField() { return *GetNativePointerField<float*>(this, "APrimalWorldSettings.NegativeHyperthermalInsulationMultiplier"); }
	float& PositiveHyperthermalInsulationMultiplierField() { return *GetNativePointerField<float*>(this, "APrimalWorldSettings.PositiveHyperthermalInsulationMultiplier"); }
	float& NegativeHypothermalInsulationMultiplierField() { return *GetNativePointerField<float*>(this, "APrimalWorldSettings.NegativeHypothermalInsulationMultiplier"); }
	float& PositiveHypothermalInsulationMultiplierField() { return *GetNativePointerField<float*>(this, "APrimalWorldSettings.PositiveHypothermalInsulationMultiplier"); }
	TArray<TSubclassOf<UPrimalItem>, TSizedDefaultAllocator<32> >& GlobalCuddleFoodListField() { return *GetNativePointerField<TArray<TSubclassOf<UPrimalItem>, TSizedDefaultAllocator<32> >*>(this, "APrimalWorldSettings.GlobalCuddleFoodList"); }
	float& CarnivoreNaturalTargetingRangeMultiplierField() { return *GetNativePointerField<float*>(this, "APrimalWorldSettings.CarnivoreNaturalTargetingRangeMultiplier"); }
	float& HerbivoreNaturalTargetingRangeMultiplierField() { return *GetNativePointerField<float*>(this, "APrimalWorldSettings.HerbivoreNaturalTargetingRangeMultiplier"); }
	USoundBase*& OverrideCombatMusicDayField() { return *GetNativePointerField<USoundBase**>(this, "APrimalWorldSettings.OverrideCombatMusicDay"); }
	USoundBase*& OverrideCombatMusicNightField() { return *GetNativePointerField<USoundBase**>(this, "APrimalWorldSettings.OverrideCombatMusicNight"); }
	USoundBase*& OverrideCombatMusicDay_HeavyField() { return *GetNativePointerField<USoundBase**>(this, "APrimalWorldSettings.OverrideCombatMusicDay_Heavy"); }
	USoundBase*& OverrideCombatMusicNight_HeavyField() { return *GetNativePointerField<USoundBase**>(this, "APrimalWorldSettings.OverrideCombatMusicNight_Heavy"); }
	USoundBase*& SplitscreenUnderwaterSoundField() { return *GetNativePointerField<USoundBase**>(this, "APrimalWorldSettings.SplitscreenUnderwaterSound"); }
	TArray<TSoftClassPtr<UPrimalHarvestingComponent>, TSizedDefaultAllocator<32> >& HarvestComponentHealthScaleParentsField() { return *GetNativePointerField<TArray<TSoftClassPtr<UPrimalHarvestingComponent>, TSizedDefaultAllocator<32> >*>(this, "APrimalWorldSettings.HarvestComponentHealthScaleParents"); }
	TArray<float, TSizedDefaultAllocator<32> >& HarvestComponentHealthScaleParentsValueField() { return *GetNativePointerField<TArray<float, TSizedDefaultAllocator<32> >*>(this, "APrimalWorldSettings.HarvestComponentHealthScaleParentsValue"); }
	TArray<TSoftClassPtr<UPrimalHarvestingComponent>, TSizedDefaultAllocator<32> >& HarvestComponentHealthScaleExactMatchField() { return *GetNativePointerField<TArray<TSoftClassPtr<UPrimalHarvestingComponent>, TSizedDefaultAllocator<32> >*>(this, "APrimalWorldSettings.HarvestComponentHealthScaleExactMatch"); }
	TArray<float, TSizedDefaultAllocator<32> >& HarvestComponentHealthScaleExactMatchValueField() { return *GetNativePointerField<TArray<float, TSizedDefaultAllocator<32> >*>(this, "APrimalWorldSettings.HarvestComponentHealthScaleExactMatchValue"); }
	USoundBase*& Override_Sound_ReconnectToCharacterField() { return *GetNativePointerField<USoundBase**>(this, "APrimalWorldSettings.Override_Sound_ReconnectToCharacter"); }
	int& RequiresIDField() { return *GetNativePointerField<int*>(this, "APrimalWorldSettings.RequiresID"); }
	UMaterialInterface*& Override_PostProcess_ColorLUTField() { return *GetNativePointerField<UMaterialInterface**>(this, "APrimalWorldSettings.Override_PostProcess_ColorLUT"); }
	float& DefaultWaterLineStartZField() { return *GetNativePointerField<float*>(this, "APrimalWorldSettings.DefaultWaterLineStartZ"); }
	float& DefaultDeepWaterStartZField() { return *GetNativePointerField<float*>(this, "APrimalWorldSettings.DefaultDeepWaterStartZ"); }
	float& MaximumPlayerFlyZField() { return *GetNativePointerField<float*>(this, "APrimalWorldSettings.MaximumPlayerFlyZ"); }
	TArray<TSoftObjectPtr<UObject>, TSizedDefaultAllocator<32> >& ExtraReferencesField() { return *GetNativePointerField<TArray<TSoftObjectPtr<UObject>, TSizedDefaultAllocator<32> >*>(this, "APrimalWorldSettings.ExtraReferences"); }
	TArray<TSoftClassPtr<APrimalDinoCharacter>, TSizedDefaultAllocator<32> >& AllowDownloadDinoClassesField() { return *GetNativePointerField<TArray<TSoftClassPtr<APrimalDinoCharacter>, TSizedDefaultAllocator<32> >*>(this, "APrimalWorldSettings.AllowDownloadDinoClasses"); }
	FString& DefaultBiomeNameField() { return *GetNativePointerField<FString*>(this, "APrimalWorldSettings.DefaultBiomeName"); }
	UDeferredMovementContext*& DeferredMovementField() { return *GetNativePointerField<UDeferredMovementContext**>(this, "APrimalWorldSettings.DeferredMovement"); }
	TArray<TSoftClassPtr<APrimalStructure>, TSizedDefaultAllocator<32> >& PreventStructureClassesField() { return *GetNativePointerField<TArray<TSoftClassPtr<APrimalStructure>, TSizedDefaultAllocator<32> >*>(this, "APrimalWorldSettings.PreventStructureClasses"); }
	float& MaxFallSpeedMultiplierField() { return *GetNativePointerField<float*>(this, "APrimalWorldSettings.MaxFallSpeedMultiplier"); }
	bool& bForceEnableTurretLimitField() { return *GetNativePointerField<bool*>(this, "APrimalWorldSettings.bForceEnableTurretLimit"); }
	bool& bUseMissionsMetaDataField() { return *GetNativePointerField<bool*>(this, "APrimalWorldSettings.bUseMissionsMetaData"); }
	int& LoadForceRespawnDinosVersionField() { return *GetNativePointerField<int*>(this, "APrimalWorldSettings.LoadForceRespawnDinosVersion"); }
	float& FirstSpawnNotTargetableForTimeField() { return *GetNativePointerField<float*>(this, "APrimalWorldSettings.FirstSpawnNotTargetableForTime"); }
	bool& bAllowRidingFliersField() { return *GetNativePointerField<bool*>(this, "APrimalWorldSettings.bAllowRidingFliers"); }
	bool& bDisableFirstPersonRidingField() { return *GetNativePointerField<bool*>(this, "APrimalWorldSettings.bDisableFirstPersonRiding"); }
	bool& bScaleDinoFloatingHUDByMeshSizeField() { return *GetNativePointerField<bool*>(this, "APrimalWorldSettings.bScaleDinoFloatingHUDByMeshSize"); }
	float& ForceCameraTransitionTimeUponPossessionField() { return *GetNativePointerField<float*>(this, "APrimalWorldSettings.ForceCameraTransitionTimeUponPossession"); }
	float& AdditionalDinoHealthBarOffsetYField() { return *GetNativePointerField<float*>(this, "APrimalWorldSettings.AdditionalDinoHealthBarOffsetY"); }
	float& AIOverrideNotifyNeighborsRangeField() { return *GetNativePointerField<float*>(this, "APrimalWorldSettings.AIOverrideNotifyNeighborsRange"); }
	UE::Math::TVector<double>& SpawnAnimationLocationOffsetField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "APrimalWorldSettings.SpawnAnimationLocationOffset"); }
	TSubclassOf<UToolTipWidget>& MissionMultiUseEntryToolTipWidgetField() { return *GetNativePointerField<TSubclassOf<UToolTipWidget>*>(this, "APrimalWorldSettings.MissionMultiUseEntryToolTipWidget"); }
	TSubclassOf<APrimalBuff_MissionData>& MissionDataBuffField() { return *GetNativePointerField<TSubclassOf<APrimalBuff_MissionData>*>(this, "APrimalWorldSettings.MissionDataBuff"); }
	TSubclassOf<AActor>& ActiveEventSpawnActorField() { return *GetNativePointerField<TSubclassOf<AActor>*>(this, "APrimalWorldSettings.ActiveEventSpawnActor"); }
	TArray<FAvailableMission, TSizedDefaultAllocator<32> >& AvailableMissionsField() { return *GetNativePointerField<TArray<FAvailableMission, TSizedDefaultAllocator<32> >*>(this, "APrimalWorldSettings.AvailableMissions"); }
	TArray<FMissionMetaData, TSizedDefaultAllocator<32> >& AvailableMissionsMetaDataField() { return *GetNativePointerField<TArray<FMissionMetaData, TSizedDefaultAllocator<32> >*>(this, "APrimalWorldSettings.AvailableMissionsMetaData"); }
	TArray<FMissionMetaData, TSizedDefaultAllocator<32> >& NonPlayerFacingMissionsMetaDataField() { return *GetNativePointerField<TArray<FMissionMetaData, TSizedDefaultAllocator<32> >*>(this, "APrimalWorldSettings.NonPlayerFacingMissionsMetaData"); }
	bool& bSetupMaleAnimOverridesField() { return *GetNativePointerField<bool*>(this, "APrimalWorldSettings.bSetupMaleAnimOverrides"); }
	TMap<TSoftObjectPtr<UAnimSequence>, TSoftObjectPtr<UAnimSequence>, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<TSoftObjectPtr<UAnimSequence>, TSoftObjectPtr<UAnimSequence>, 0> >& HumanFemaleAnimSequenceOverridesField() { return *GetNativePointerField<TMap<TSoftObjectPtr<UAnimSequence>, TSoftObjectPtr<UAnimSequence>, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<TSoftObjectPtr<UAnimSequence>, TSoftObjectPtr<UAnimSequence>, 0> >*>(this, "APrimalWorldSettings.HumanFemaleAnimSequenceOverrides"); }
	TMap<TSoftObjectPtr<UAnimMontage>, TSoftObjectPtr<UAnimMontage>, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<TSoftObjectPtr<UAnimMontage>, TSoftObjectPtr<UAnimMontage>, 0> >& HumanFemaleAnimMontageOverridesField() { return *GetNativePointerField<TMap<TSoftObjectPtr<UAnimMontage>, TSoftObjectPtr<UAnimMontage>, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<TSoftObjectPtr<UAnimMontage>, TSoftObjectPtr<UAnimMontage>, 0> >*>(this, "APrimalWorldSettings.HumanFemaleAnimMontageOverrides"); }
	TMap<TSoftObjectPtr<UAnimSequence>, TSoftObjectPtr<UAnimSequence>, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<TSoftObjectPtr<UAnimSequence>, TSoftObjectPtr<UAnimSequence>, 0> >& HumanMaleAnimSequenceOverridesField() { return *GetNativePointerField<TMap<TSoftObjectPtr<UAnimSequence>, TSoftObjectPtr<UAnimSequence>, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<TSoftObjectPtr<UAnimSequence>, TSoftObjectPtr<UAnimSequence>, 0> >*>(this, "APrimalWorldSettings.HumanMaleAnimSequenceOverrides"); }
	TMap<TSoftObjectPtr<UAnimMontage>, TSoftObjectPtr<UAnimMontage>, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<TSoftObjectPtr<UAnimMontage>, TSoftObjectPtr<UAnimMontage>, 0> >& HumanMaleAnimMontageOverridesField() { return *GetNativePointerField<TMap<TSoftObjectPtr<UAnimMontage>, TSoftObjectPtr<UAnimMontage>, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<TSoftObjectPtr<UAnimMontage>, TSoftObjectPtr<UAnimMontage>, 0> >*>(this, "APrimalWorldSettings.HumanMaleAnimMontageOverrides"); }
	float& GlobalDinoCountValueField() { return *GetNativePointerField<float*>(this, "APrimalWorldSettings.GlobalDinoCountValue"); }
	TArray<APrimalBuff*, TSizedDefaultAllocator<32> >& DisableFootstepParticlesBuffsField() { return *GetNativePointerField<TArray<APrimalBuff*, TSizedDefaultAllocator<32> >*>(this, "APrimalWorldSettings.DisableFootstepParticlesBuffs"); }
	TArray<TSubclassOf<UObject>, TSizedDefaultAllocator<32> >& ServerForceReplicateObjectClassesField() { return *GetNativePointerField<TArray<TSubclassOf<UObject>, TSizedDefaultAllocator<32> >*>(this, "APrimalWorldSettings.ServerForceReplicateObjectClasses"); }
	TSoftClassPtr<UObject>& ActiveEventOverrideObjectBlueprintField() { return *GetNativePointerField<TSoftClassPtr<UObject>*>(this, "APrimalWorldSettings.ActiveEventOverrideObjectBlueprint"); }
	TMap<FName, TSoftClassPtr<UObject>, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<FName, TSoftClassPtr<UObject>, 0> >& EventNameToActiveEventOverrideObjectField() { return *GetNativePointerField<TMap<FName, TSoftClassPtr<UObject>, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<FName, TSoftClassPtr<UObject>, 0> >*>(this, "APrimalWorldSettings.EventNameToActiveEventOverrideObject"); }
	TSet<AActor*, DefaultKeyFuncs<AActor*, 0>, FDefaultSetAllocator>& DeferredTickActorsField() { return *GetNativePointerField<TSet<AActor*, DefaultKeyFuncs<AActor*, 0>, FDefaultSetAllocator>*>(this, "APrimalWorldSettings.DeferredTickActors"); }
	TArray<AActor*, TSizedDefaultAllocator<32> >& UnregisteredDeferredTickActorsField() { return *GetNativePointerField<TArray<AActor*, TSizedDefaultAllocator<32> >*>(this, "APrimalWorldSettings.UnregisteredDeferredTickActors"); }
	UPrimalWorldSettingsEventOverrides*& ActiveEventOverridesField() { return *GetNativePointerField<UPrimalWorldSettingsEventOverrides**>(this, "APrimalWorldSettings.ActiveEventOverrides"); }
	//TSubclassOf<UMissionMetaTagInfo>& MetaTagInfoClassField() { return *GetNativePointerField<TSubclassOf<UMissionMetaTagInfo>*>(this, "APrimalWorldSettings.MetaTagInfoClass"); }
	bool& bHideMissionSortByDistanceField() { return *GetNativePointerField<bool*>(this, "APrimalWorldSettings.bHideMissionSortByDistance"); }
	float& SM4DirectionalLightMultiplierField() { return *GetNativePointerField<float*>(this, "APrimalWorldSettings.SM4DirectionalLightMultiplier"); }
	float& SM4SKyLightMultiplierField() { return *GetNativePointerField<float*>(this, "APrimalWorldSettings.SM4SKyLightMultiplier"); }
	float& SM5DirectionalLightMultiplierField() { return *GetNativePointerField<float*>(this, "APrimalWorldSettings.SM5DirectionalLightMultiplier"); }
	float& SM5SKyLightMultiplierField() { return *GetNativePointerField<float*>(this, "APrimalWorldSettings.SM5SKyLightMultiplier"); }
	float& NoTrueSkySM5DirectionalLightMultiplierField() { return *GetNativePointerField<float*>(this, "APrimalWorldSettings.NoTrueSkySM5DirectionalLightMultiplier"); }
	float& NoTrueSkySM5SKyLightMultiplierField() { return *GetNativePointerField<float*>(this, "APrimalWorldSettings.NoTrueSkySM5SKyLightMultiplier"); }
	float& ConsoleSM5DirectionalLightMultiplierField() { return *GetNativePointerField<float*>(this, "APrimalWorldSettings.ConsoleSM5DirectionalLightMultiplier"); }
	float& ConsoleSM5SKyLightMultiplierField() { return *GetNativePointerField<float*>(this, "APrimalWorldSettings.ConsoleSM5SKyLightMultiplier"); }
	float& GlobalIBLCaptureBrightnessField() { return *GetNativePointerField<float*>(this, "APrimalWorldSettings.GlobalIBLCaptureBrightness"); }
	float& GlobalBakeAndStreamIBLMultiplierField() { return *GetNativePointerField<float*>(this, "APrimalWorldSettings.GlobalBakeAndStreamIBLMultiplier"); }
	UE::Math::TVector<double>& TrueSkyColorMultiplierField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "APrimalWorldSettings.TrueSkyColorMultiplier"); }
	float& SkyIBLIntensityMultiplierField() { return *GetNativePointerField<float*>(this, "APrimalWorldSettings.SkyIBLIntensityMultiplier"); }
	float& GroundColorMultiplierField() { return *GetNativePointerField<float*>(this, "APrimalWorldSettings.GroundColorMultiplier"); }
	float& SkyColorMultiplierField() { return *GetNativePointerField<float*>(this, "APrimalWorldSettings.SkyColorMultiplier"); }
	UE::Math::TVector<double>& AtmosphericFogMultiplierField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "APrimalWorldSettings.AtmosphericFogMultiplier"); }
	float& TrueSkyIntensityMultiplierField() { return *GetNativePointerField<float*>(this, "APrimalWorldSettings.TrueSkyIntensityMultiplier"); }
	float& GlobalViewDistanceMultiplierField() { return *GetNativePointerField<float*>(this, "APrimalWorldSettings.GlobalViewDistanceMultiplier"); }
	float& GlobalProxyDistanceMultiplierField() { return *GetNativePointerField<float*>(this, "APrimalWorldSettings.GlobalProxyDistanceMultiplier"); }
	FString& IntroMoviePathField() { return *GetNativePointerField<FString*>(this, "APrimalWorldSettings.IntroMoviePath"); }
	int& IntroExplorerNoteIDField() { return *GetNativePointerField<int*>(this, "APrimalWorldSettings.IntroExplorerNoteID"); }
	FString& OutroMoviePathField() { return *GetNativePointerField<FString*>(this, "APrimalWorldSettings.OutroMoviePath"); }
	int& OutroExplorerNoteIDField() { return *GetNativePointerField<int*>(this, "APrimalWorldSettings.OutroExplorerNoteID"); }
	TArray<FName, TSizedDefaultAllocator<32> >& MainMapDataLayersField() { return *GetNativePointerField<TArray<FName, TSizedDefaultAllocator<32> >*>(this, "APrimalWorldSettings.MainMapDataLayers"); }
	int& GloballyLimitedParticleNumField() { return *GetNativePointerField<int*>(this, "APrimalWorldSettings.GloballyLimitedParticleNum"); }
	TSet<TWeakObjectPtr<UNiagaraComponent>, DefaultKeyFuncs<TWeakObjectPtr<UNiagaraComponent>, 0>, FDefaultSetAllocator>& GloballyLimitedNiagaraComponentsField() { return *GetNativePointerField<TSet<TWeakObjectPtr<UNiagaraComponent>, DefaultKeyFuncs<TWeakObjectPtr<UNiagaraComponent>, 0>, FDefaultSetAllocator>*>(this, "APrimalWorldSettings.GloballyLimitedNiagaraComponents"); }
	TArray<FAdditionalStaticMeshSockets, TSizedDefaultAllocator<32> >& AdditionalFakeStaticMeshSocketsField() { return *GetNativePointerField<TArray<FAdditionalStaticMeshSockets, TSizedDefaultAllocator<32> >*>(this, "APrimalWorldSettings.AdditionalFakeStaticMeshSockets"); }
	TSet<TWeakObjectPtr<UFXSystemComponent>, DefaultKeyFuncs<TWeakObjectPtr<UFXSystemComponent>, 0>, FDefaultSetAllocator>& DeferredFXActivationsField() { return *GetNativePointerField<TSet<TWeakObjectPtr<UFXSystemComponent>, DefaultKeyFuncs<TWeakObjectPtr<UFXSystemComponent>, 0>, FDefaultSetAllocator>*>(this, "APrimalWorldSettings.DeferredFXActivations"); }

	// Bitfields


	// Functions

	static void StaticRegisterNativesAPrimalWorldSettings() { NativeCall<void>(nullptr, "APrimalWorldSettings.StaticRegisterNativesAPrimalWorldSettings()"); }
	static UClass* GetPrivateStaticClass() { return NativeCall<UClass*>(nullptr, "APrimalWorldSettings.GetPrivateStaticClass()"); }
	void DeferFXComponentActivation(UFXSystemComponent* ActorComp) { NativeCall<void, UFXSystemComponent*>(this, "APrimalWorldSettings.DeferFXComponentActivation(UFXSystemComponent*)", ActorComp); }
	bool ForceInactiveMapActorParticles() { return NativeCall<bool>(this, "APrimalWorldSettings.ForceInactiveMapActorParticles()"); }
	bool GetFoliageAndFluidSimEnabled() { return NativeCall<bool>(this, "APrimalWorldSettings.GetFoliageAndFluidSimEnabled()"); }
	float FixupDeltaSeconds(float DeltaSeconds, float RealDeltaSeconds) { return NativeCall<float, float, float>(this, "APrimalWorldSettings.FixupDeltaSeconds(float,float)", DeltaSeconds, RealDeltaSeconds); }
	//bool GetExtraStaticMeshSocketByName(UStaticMesh* ForStaticMesh, const FName* FakeSocketName, FFakeStaticMeshSocketData* OutFakeSocketData) { return NativeCall<bool, UStaticMesh*, const FName*, FFakeStaticMeshSocketData*>(this, "APrimalWorldSettings.GetExtraStaticMeshSocketByName(UStaticMesh*,FName&,FFakeStaticMeshSocketData&)", ForStaticMesh, FakeSocketName, OutFakeSocketData); }
	float SetTimeDilation(float NewTimeDilation) { return NativeCall<float, float>(this, "APrimalWorldSettings.SetTimeDilation(float)", NewTimeDilation); }
	void AddDynamicResourceReference(UObject* DynamicResourceRef) { NativeCall<void, UObject*>(this, "APrimalWorldSettings.AddDynamicResourceReference(UObject*)", DynamicResourceRef); }
	void BeginPlay() { NativeCall<void>(this, "APrimalWorldSettings.BeginPlay()"); }
	bool GetMissionMetaData(FName MissionTag, FMissionMetaData* value) { return NativeCall<bool, FName, FMissionMetaData*>(this, "APrimalWorldSettings.GetMissionMetaData(FName,FMissionMetaData&)", MissionTag, value); }
	void EndPlay(EEndPlayReason::Type EndReason) { NativeCall<void, EEndPlayReason::Type>(this, "APrimalWorldSettings.EndPlay(EEndPlayReason::Type)", EndReason); }
	void PreGameplaySetup() { NativeCall<void>(this, "APrimalWorldSettings.PreGameplaySetup()"); }
	TSoftClassPtr<APrimalDinoCharacter>* GetNPCRandomSpawnClass(TSoftClassPtr<APrimalDinoCharacter>* result, const TArray<FClassNameReplacement, TSizedDefaultAllocator<32> >* ClassNameReplacements, const TArray<FClassRemappingWeight, TSizedDefaultAllocator<32> >* TheNPCRandomSpawnClassWeights, TSoftClassPtr<APrimalDinoCharacter>* forClass, bool bIgnoreNPCRandomClassReplacements) { return NativeCall<TSoftClassPtr<APrimalDinoCharacter> *, TSoftClassPtr<APrimalDinoCharacter>*, const TArray<FClassNameReplacement, TSizedDefaultAllocator<32> >*, const TArray<FClassRemappingWeight, TSizedDefaultAllocator<32> >*, TSoftClassPtr<APrimalDinoCharacter>*, bool>(this, "APrimalWorldSettings.GetNPCRandomSpawnClass(TArray<FClassNameReplacement,TSizedDefaultAllocator<32>>&,TArray<FClassRemappingWeight,TSizedDefaultAllocator<32>>&,TSoftClassPtr<APrimalDinoCharacter>,bool)", result, ClassNameReplacements, TheNPCRandomSpawnClassWeights, forClass, bIgnoreNPCRandomClassReplacements); }
	void PreLoadSaveGame() { NativeCall<void>(this, "APrimalWorldSettings.PreLoadSaveGame()"); }
	float GetEffectiveTimeDilation() { return NativeCall<float>(this, "APrimalWorldSettings.GetEffectiveTimeDilation()"); }
	bool IsAllowedInLevelBounds(const UE::Math::TVector<double>* AtLocat) { return NativeCall<bool, const UE::Math::TVector<double>*>(this, "APrimalWorldSettings.IsAllowedInLevelBounds(UE::Math::TVector<double>&)", AtLocat); }
	float GetItemGlobalSpoilingTimeMultiplier(UPrimalItem* anItem) { return NativeCall<float, UPrimalItem*>(this, "APrimalWorldSettings.GetItemGlobalSpoilingTimeMultiplier(UPrimalItem*)", anItem); }
	float GetHarvestComponentHealthScale(UClass* HarvestComponentClass) { return NativeCall<float, UClass*>(this, "APrimalWorldSettings.GetHarvestComponentHealthScale(UClass*)", HarvestComponentClass); }
	void Tick(float DeltaSeconds) { NativeCall<void, float>(this, "APrimalWorldSettings.Tick(float)", DeltaSeconds); }
	void HandleDeferredTickActors(float DeltaSeconds) { NativeCall<void, float>(this, "APrimalWorldSettings.HandleDeferredTickActors(float)", DeltaSeconds); }
	bool AllowPhysicsSimulation() { return NativeCall<bool>(this, "APrimalWorldSettings.AllowPhysicsSimulation()"); }
	UClass* GetDefaultDestroyedInstanceActor(UMeshComponent* ForMesh) { return NativeCall<UClass*, UMeshComponent*>(this, "APrimalWorldSettings.GetDefaultDestroyedInstanceActor(UMeshComponent*)", ForMesh); }
	static void AddReferencedObjects(UObject* InThis, FReferenceCollector* Collector) { NativeCall<void, UObject*, FReferenceCollector*>(nullptr, "APrimalWorldSettings.AddReferencedObjects(UObject*,FReferenceCollector&)", InThis, Collector); }
};

struct ULevel : UObject
{
	TArray<AActor*> ActorsField() const { return GetNativeField<TArray<AActor*>>(this, "ULevel.Actors2"); }
};

struct AGameModeBase : AInfo
{
	// Fields

	FString& OptionsStringField() { return *GetNativePointerField<FString*>(this, "AGameModeBase.OptionsString"); }
	TSubclassOf<AGameSession>& GameSessionClassField() { return *GetNativePointerField<TSubclassOf<AGameSession>*>(this, "AGameModeBase.GameSessionClass"); }
	TSubclassOf<AGameStateBase>& GameStateClassField() { return *GetNativePointerField<TSubclassOf<AGameStateBase>*>(this, "AGameModeBase.GameStateClass"); }
	TSubclassOf<APlayerController>& PlayerControllerClassField() { return *GetNativePointerField<TSubclassOf<APlayerController>*>(this, "AGameModeBase.PlayerControllerClass"); }
	TSubclassOf<APlayerState>& PlayerStateClassField() { return *GetNativePointerField<TSubclassOf<APlayerState>*>(this, "AGameModeBase.PlayerStateClass"); }
	TSubclassOf<AHUD>& HUDClassField() { return *GetNativePointerField<TSubclassOf<AHUD>*>(this, "AGameModeBase.HUDClass"); }
	TSubclassOf<APawn>& DefaultPawnClassField() { return *GetNativePointerField<TSubclassOf<APawn>*>(this, "AGameModeBase.DefaultPawnClass"); }
	TSubclassOf<ASpectatorPawn>& SpectatorClassField() { return *GetNativePointerField<TSubclassOf<ASpectatorPawn>*>(this, "AGameModeBase.SpectatorClass"); }
	TSubclassOf<APlayerController>& ReplaySpectatorPlayerControllerClassField() { return *GetNativePointerField<TSubclassOf<APlayerController>*>(this, "AGameModeBase.ReplaySpectatorPlayerControllerClass"); }
	TSubclassOf<AServerStatReplicator>& ServerStatReplicatorClassField() { return *GetNativePointerField<TSubclassOf<AServerStatReplicator>*>(this, "AGameModeBase.ServerStatReplicatorClass"); }
	TObjectPtr<AGameSession>& GameSessionField() { return *GetNativePointerField<TObjectPtr<AGameSession>*>(this, "AGameModeBase.GameSession"); }
	TObjectPtr<AGameStateBase>& GameStateField() { return *GetNativePointerField<TObjectPtr<AGameStateBase>*>(this, "AGameModeBase.GameState"); }
	TObjectPtr<AServerStatReplicator>& ServerStatReplicatorField() { return *GetNativePointerField<TObjectPtr<AServerStatReplicator>*>(this, "AGameModeBase.ServerStatReplicator"); }
	FText& DefaultPlayerNameField() { return *GetNativePointerField<FText*>(this, "AGameModeBase.DefaultPlayerName"); }
	TArray<TDelegate<bool __cdecl(void), FDefaultDelegateUserPolicy>, TSizedDefaultAllocator<32> >& PausersField() { return *GetNativePointerField<TArray<TDelegate<bool __cdecl(void), FDefaultDelegateUserPolicy>, TSizedDefaultAllocator<32> >*>(this, "AGameModeBase.Pausers"); }

	// Bitfields

	BitFieldValue<bool, unsigned __int32> bUseSeamlessTravel() { return { this, "AGameModeBase.bUseSeamlessTravel" }; }
	BitFieldValue<bool, unsigned __int32> bStartPlayersAsSpectators() { return { this, "AGameModeBase.bStartPlayersAsSpectators" }; }
	BitFieldValue<bool, unsigned __int32> bPauseable() { return { this, "AGameModeBase.bPauseable" }; }

	// Functions

	static UClass* GetPrivateStaticClass() { return NativeCall<UClass*>(nullptr, "AGameModeBase.GetPrivateStaticClass()"); }
	APlayerController* ProcessClientTravel(FString* URL, FGuid* NextMapGuid, bool bSeamless, bool bAbsolute) { return NativeCall<APlayerController*, FString*, FGuid*, bool, bool>(this, "AGameModeBase.ProcessClientTravel(FString&,FGuid,bool,bool)", URL, NextMapGuid, bSeamless, bAbsolute); }
	bool TeleportTo(const UE::Math::TVector<double>* DestLocation, const UE::Math::TRotator<double>* DestRotation, bool bIsATest, bool bNoCheck) { return NativeCall<bool, const UE::Math::TVector<double>*, const UE::Math::TRotator<double>*, bool, bool>(this, "AGameModeBase.TeleportTo(UE::Math::TVector<double>&,UE::Math::TRotator<double>&,bool,bool)", DestLocation, DestRotation, bIsATest, bNoCheck); }
	AShooterGameState* GetGameState() { return NativeCall<AShooterGameState*>(this, "AGameModeBase.GetGameState<class AShooterGameState>()"); }
	AActor* ChoosePlayerStart(AController* Player) { return NativeCall<AActor*, AController*>(this, "AGameModeBase.ChoosePlayerStart(AController*)", Player); }
	AActor* FindPlayerStart(AController* Player, const FString* IncomingName) { return NativeCall<AActor*, AController*, const FString*>(this, "AGameModeBase.FindPlayerStart(AController*,FString&)", Player, IncomingName); }
	UClass* GetDefaultPawnClassForController(AController* InController) { return NativeCall<UClass*, AController*>(this, "AGameModeBase.GetDefaultPawnClassForController(AController*)", InController); }
	bool MustSpectate(APlayerController* NewPlayerController) { return NativeCall<bool, APlayerController*>(this, "AGameModeBase.MustSpectate(APlayerController*)", NewPlayerController); }
	bool PlayerCanRestart(APlayerController* Player) { return NativeCall<bool, APlayerController*>(this, "AGameModeBase.PlayerCanRestart(APlayerController*)", Player); }
	APawn* SpawnDefaultPawnAtTransform(AController* NewPlayer, const UE::Math::TTransform<double>* SpawnTransform) { return NativeCall<APawn*, AController*, const UE::Math::TTransform<double>*>(this, "AGameModeBase.SpawnDefaultPawnAtTransform(AController*,UE::Math::TTransform<double>&)", NewPlayer, SpawnTransform); }
	static void StaticRegisterNativesAGameModeBase() { NativeCall<void>(nullptr, "AGameModeBase.StaticRegisterNativesAGameModeBase()"); }
	void InitGame(const FString* MapName, const FString* Options, FString* ErrorMessage) { NativeCall<void, const FString*, const FString*, FString*>(this, "AGameModeBase.InitGame(FString&,FString&,FString&)", MapName, Options, ErrorMessage); }
	void InitGameState() { NativeCall<void>(this, "AGameModeBase.InitGameState()"); }
	void PreInitializeComponents() { NativeCall<void>(this, "AGameModeBase.PreInitializeComponents()"); }
	TSubclassOf<AGameSession>* GetGameSessionClass(TSubclassOf<AGameSession>* result) { return NativeCall<TSubclassOf<AGameSession> *, TSubclassOf<AGameSession>*>(this, "AGameModeBase.GetGameSessionClass()", result); }
	UClass* GetDefaultPawnClassForController_Implementation(AController* InController) { return NativeCall<UClass*, AController*>(this, "AGameModeBase.GetDefaultPawnClassForController_Implementation(AController*)", InController); }
	int GetNumPlayers() { return NativeCall<int>(this, "AGameModeBase.GetNumPlayers()"); }
	int GetNumSpectators() { return NativeCall<int>(this, "AGameModeBase.GetNumSpectators()"); }
	void StartPlay() { NativeCall<void>(this, "AGameModeBase.StartPlay()"); }
	bool HasMatchStarted() { return NativeCall<bool>(this, "AGameModeBase.HasMatchStarted()"); }
	bool HasMatchEnded() { return NativeCall<bool>(this, "AGameModeBase.HasMatchEnded()"); }
	bool SetPause(APlayerController* PC, TDelegate<bool __cdecl(void), FDefaultDelegateUserPolicy>* CanUnpauseDelegate) { return NativeCall<bool, APlayerController*, TDelegate<bool __cdecl(void), FDefaultDelegateUserPolicy>*>(this, "AGameModeBase.SetPause(APlayerController*,TDelegate<bool__cdecl(void)", PC, CanUnpauseDelegate); }
	bool ClearPause() { return NativeCall<bool>(this, "AGameModeBase.ClearPause()"); }
	void ForceClearUnpauseDelegates(AActor* PauseActor) { NativeCall<void, AActor*>(this, "AGameModeBase.ForceClearUnpauseDelegates(AActor*)", PauseActor); }
	bool AllowPausing(APlayerController* PC) { return NativeCall<bool, APlayerController*>(this, "AGameModeBase.AllowPausing(APlayerController*)", PC); }
	bool IsPaused() { return NativeCall<bool>(this, "AGameModeBase.IsPaused()"); }
	void Reset() { NativeCall<void>(this, "AGameModeBase.Reset()"); }
	void ResetLevel() { NativeCall<void>(this, "AGameModeBase.ResetLevel()"); }
	void ReturnToMainMenuHost() { NativeCall<void>(this, "AGameModeBase.ReturnToMainMenuHost()"); }
	APlayerController* ProcessClientTravel(FString* FURL, bool bSeamless, bool bAbsolute) { return NativeCall<APlayerController*, FString*, bool, bool>(this, "AGameModeBase.ProcessClientTravel(FString&,bool,bool)", FURL, bSeamless, bAbsolute); }
	bool CanServerTravel(const FString* FURL, bool bAbsolute) { return NativeCall<bool, const FString*, bool>(this, "AGameModeBase.CanServerTravel(FString&,bool)", FURL, bAbsolute); }
	void ProcessServerTravel(const FString* URL, bool bAbsolute) { NativeCall<void, const FString*, bool>(this, "AGameModeBase.ProcessServerTravel(FString&,bool)", URL, bAbsolute); }
	void GetSeamlessTravelActorList(bool bToTransition, TArray<AActor*, TSizedDefaultAllocator<32> >* ActorList) { NativeCall<void, bool, TArray<AActor*, TSizedDefaultAllocator<32> >*>(this, "AGameModeBase.GetSeamlessTravelActorList(bool,TArray<AActor*,TSizedDefaultAllocator<32>>&)", bToTransition, ActorList); }
	void SwapPlayerControllers(APlayerController* OldPC, APlayerController* NewPC) { NativeCall<void, APlayerController*, APlayerController*>(this, "AGameModeBase.SwapPlayerControllers(APlayerController*,APlayerController*)", OldPC, NewPC); }
	TSubclassOf<APlayerController>* GetPlayerControllerClassToSpawnForSeamlessTravel(TSubclassOf<APlayerController>* result, APlayerController* PreviousPC) { return NativeCall<TSubclassOf<APlayerController> *, TSubclassOf<APlayerController>*, APlayerController*>(this, "AGameModeBase.GetPlayerControllerClassToSpawnForSeamlessTravel(APlayerController*)", result, PreviousPC); }
	void HandleSeamlessTravelPlayer(AController** C) { NativeCall<void, AController**>(this, "AGameModeBase.HandleSeamlessTravelPlayer(AController*&)", C); }
	void PostSeamlessTravel() { NativeCall<void>(this, "AGameModeBase.PostSeamlessTravel()"); }
	void PreLogin(const FString* Options, const FString* Address, const FUniqueNetIdRepl* UniqueId, FString* ErrorMessage) { NativeCall<void, const FString*, const FString*, const FUniqueNetIdRepl*, FString*>(this, "AGameModeBase.PreLogin(FString&,FString&,FUniqueNetIdRepl&,FString&)", Options, Address, UniqueId, ErrorMessage); }
	APlayerController* Login(UPlayer* NewPlayer, ENetRole InRemoteRole, const FString* Portal, const FString* Options, const FUniqueNetIdRepl* UniqueId, FString* ErrorMessage) { return NativeCall<APlayerController*, UPlayer*, ENetRole, const FString*, const FString*, const FUniqueNetIdRepl*, FString*>(this, "AGameModeBase.Login(UPlayer*,ENetRole,FString&,FString&,FUniqueNetIdRepl&,FString&)", NewPlayer, InRemoteRole, Portal, Options, UniqueId, ErrorMessage); }
	APlayerController* SpawnPlayerController(ENetRole InRemoteRole, const FString* Options) { return NativeCall<APlayerController*, ENetRole, const FString*>(this, "AGameModeBase.SpawnPlayerController(ENetRole,FString&)", InRemoteRole, Options); }
	APlayerController* SpawnPlayerController(ENetRole InRemoteRole, const UE::Math::TVector<double>* SpawnLocation, const UE::Math::TRotator<double>* SpawnRotation) { return NativeCall<APlayerController*, ENetRole, const UE::Math::TVector<double>*, const UE::Math::TRotator<double>*>(this, "AGameModeBase.SpawnPlayerController(ENetRole,UE::Math::TVector<double>&,UE::Math::TRotator<double>&)", InRemoteRole, SpawnLocation, SpawnRotation); }
	APlayerController* SpawnReplayPlayerController(ENetRole InRemoteRole, const UE::Math::TVector<double>* SpawnLocation, const UE::Math::TRotator<double>* SpawnRotation) { return NativeCall<APlayerController*, ENetRole, const UE::Math::TVector<double>*, const UE::Math::TRotator<double>*>(this, "AGameModeBase.SpawnReplayPlayerController(ENetRole,UE::Math::TVector<double>&,UE::Math::TRotator<double>&)", InRemoteRole, SpawnLocation, SpawnRotation); }
	APlayerController* SpawnPlayerControllerCommon(ENetRole InRemoteRole, const UE::Math::TVector<double>* SpawnLocation, const UE::Math::TRotator<double>* SpawnRotation, TSubclassOf<APlayerController> InPlayerControllerClass) { return NativeCall<APlayerController*, ENetRole, const UE::Math::TVector<double>*, const UE::Math::TRotator<double>*, TSubclassOf<APlayerController>>(this, "AGameModeBase.SpawnPlayerControllerCommon(ENetRole,UE::Math::TVector<double>&,UE::Math::TRotator<double>&,TSubclassOf<APlayerController>)", InRemoteRole, SpawnLocation, SpawnRotation, InPlayerControllerClass); }
	FString* InitNewPlayer(FString* result, APlayerController* NewPlayerController, const FUniqueNetIdRepl* UniqueId, const FString* Options, const FString* Portal) { return NativeCall<FString*, FString*, APlayerController*, const FUniqueNetIdRepl*, const FString*, const FString*>(this, "AGameModeBase.InitNewPlayer(APlayerController*,FUniqueNetIdRepl&,FString&,FString&)", result, NewPlayerController, UniqueId, Options, Portal); }
	void InitSeamlessTravelPlayer(AController* NewController) { NativeCall<void, AController*>(this, "AGameModeBase.InitSeamlessTravelPlayer(AController*)", NewController); }
	bool UpdatePlayerStartSpot(AController* Player, const FString* Portal, FString* OutErrorMessage) { return NativeCall<bool, AController*, const FString*, FString*>(this, "AGameModeBase.UpdatePlayerStartSpot(AController*,FString&,FString&)", Player, Portal, OutErrorMessage); }
	bool ShouldStartInCinematicMode(APlayerController* Player, bool* OutHidePlayer, bool* OutHideHUD, bool* OutDisableMovement, bool* OutDisableTurning) { return NativeCall<bool, APlayerController*, bool*, bool*, bool*, bool*>(this, "AGameModeBase.ShouldStartInCinematicMode(APlayerController*,bool&,bool&,bool&,bool&)", Player, OutHidePlayer, OutHideHUD, OutDisableMovement, OutDisableTurning); }
	void InitializeHUDForPlayer_Implementation(APlayerController* NewPlayer) { NativeCall<void, APlayerController*>(this, "AGameModeBase.InitializeHUDForPlayer_Implementation(APlayerController*)", NewPlayer); }
	void UpdateGameplayMuteList(APlayerController* aPlayer) { NativeCall<void, APlayerController*>(this, "AGameModeBase.UpdateGameplayMuteList(APlayerController*)", aPlayer); }
	void ReplicateStreamingStatus(APlayerController* PC) { NativeCall<void, APlayerController*>(this, "AGameModeBase.ReplicateStreamingStatus(APlayerController*)", PC); }
	void GenericPlayerInitialization(AController* C) { NativeCall<void, AController*>(this, "AGameModeBase.GenericPlayerInitialization(AController*)", C); }
	void PostLogin(APlayerController* NewPlayer) { NativeCall<void, APlayerController*>(this, "AGameModeBase.PostLogin(APlayerController*)", NewPlayer); }
	void Logout(AController* Exiting) { NativeCall<void, AController*>(this, "AGameModeBase.Logout(AController*)", Exiting); }
	void HandleStartingNewPlayer_Implementation(APlayerController* NewPlayer) { NativeCall<void, APlayerController*>(this, "AGameModeBase.HandleStartingNewPlayer_Implementation(APlayerController*)", NewPlayer); }
	bool MustSpectate_Implementation(APlayerController* NewPlayerController) { return NativeCall<bool, APlayerController*>(this, "AGameModeBase.MustSpectate_Implementation(APlayerController*)", NewPlayerController); }
	AActor* ChoosePlayerStart_Implementation(AController* Player) { return NativeCall<AActor*, AController*>(this, "AGameModeBase.ChoosePlayerStart_Implementation(AController*)", Player); }
	bool ShouldSpawnAtStartSpot(AController* Player) { return NativeCall<bool, AController*>(this, "AGameModeBase.ShouldSpawnAtStartSpot(AController*)", Player); }
	AActor* FindPlayerStart_Implementation(AController* Player, const FString* IncomingName) { return NativeCall<AActor*, AController*, const FString*>(this, "AGameModeBase.FindPlayerStart_Implementation(AController*,FString&)", Player, IncomingName); }
	bool PlayerCanRestart_Implementation(APlayerController* Player) { return NativeCall<bool, APlayerController*>(this, "AGameModeBase.PlayerCanRestart_Implementation(APlayerController*)", Player); }
	APawn* SpawnDefaultPawnFor_Implementation(AController* NewPlayer, AActor* StartSpot) { return NativeCall<APawn*, AController*, AActor*>(this, "AGameModeBase.SpawnDefaultPawnFor_Implementation(AController*,AActor*)", NewPlayer, StartSpot); }
	APawn* SpawnDefaultPawnAtTransform_Implementation(AController* NewPlayer, const UE::Math::TTransform<double>* SpawnTransform) { return NativeCall<APawn*, AController*, const UE::Math::TTransform<double>*>(this, "AGameModeBase.SpawnDefaultPawnAtTransform_Implementation(AController*,UE::Math::TTransform<double>&)", NewPlayer, SpawnTransform); }
	void RestartPlayer(AController* NewPlayer) { NativeCall<void, AController*>(this, "AGameModeBase.RestartPlayer(AController*)", NewPlayer); }
	void RestartPlayerAtPlayerStart(AController* NewPlayer, AActor* StartSpot) { NativeCall<void, AController*, AActor*>(this, "AGameModeBase.RestartPlayerAtPlayerStart(AController*,AActor*)", NewPlayer, StartSpot); }
	void RestartPlayerAtTransform(AController* NewPlayer, const UE::Math::TTransform<double>* SpawnTransform) { NativeCall<void, AController*, const UE::Math::TTransform<double>*>(this, "AGameModeBase.RestartPlayerAtTransform(AController*,UE::Math::TTransform<double>&)", NewPlayer, SpawnTransform); }
	void FailedToRestartPlayer(AController* NewPlayer) { NativeCall<void, AController*>(this, "AGameModeBase.FailedToRestartPlayer(AController*)", NewPlayer); }
	void FinishRestartPlayer(AController* NewPlayer, const UE::Math::TRotator<double>* StartRotation) { NativeCall<void, AController*, const UE::Math::TRotator<double>*>(this, "AGameModeBase.FinishRestartPlayer(AController*,UE::Math::TRotator<double>&)", NewPlayer, StartRotation); }
	void SetPlayerDefaults(APawn* PlayerPawn) { NativeCall<void, APawn*>(this, "AGameModeBase.SetPlayerDefaults(APawn*)", PlayerPawn); }
	void ChangeName(AController* Other, const FString* S, bool bNameChange) { NativeCall<void, AController*, const FString*, bool>(this, "AGameModeBase.ChangeName(AController*,FString&,bool)", Other, S, bNameChange); }
	bool AllowCheats(APlayerController* P) { return NativeCall<bool, APlayerController*>(this, "AGameModeBase.AllowCheats(APlayerController*)", P); }
};


struct AGameMode : AGameModeBase
{
	// Fields

	FName& MatchStateField() { return *GetNativePointerField<FName*>(this, "AGameMode.MatchState"); }
	int& NumSpectatorsField() { return *GetNativePointerField<int*>(this, "AGameMode.NumSpectators"); }
	int& NumPlayersField() { return *GetNativePointerField<int*>(this, "AGameMode.NumPlayers"); }
	int& NumBotsField() { return *GetNativePointerField<int*>(this, "AGameMode.NumBots"); }
	float& MinRespawnDelayField() { return *GetNativePointerField<float*>(this, "AGameMode.MinRespawnDelay"); }
	int& NumTravellingPlayersField() { return *GetNativePointerField<int*>(this, "AGameMode.NumTravellingPlayers"); }
	TSubclassOf<ULocalMessage>& EngineMessageClassField() { return *GetNativePointerField<TSubclassOf<ULocalMessage>*>(this, "AGameMode.EngineMessageClass"); }
	TArray<TObjectPtr<APlayerState>, TSizedDefaultAllocator<32> >& InactivePlayerArrayField() { return *GetNativePointerField<TArray<TObjectPtr<APlayerState>, TSizedDefaultAllocator<32> >*>(this, "AGameMode.InactivePlayerArray"); }
	float& InactivePlayerStateLifeSpanField() { return *GetNativePointerField<float*>(this, "AGameMode.InactivePlayerStateLifeSpan"); }
	int& MaxInactivePlayersField() { return *GetNativePointerField<int*>(this, "AGameMode.MaxInactivePlayers"); }

	// Bitfields

	BitFieldValue<bool, unsigned __int32> bDelayedStart() { return { this, "AGameMode.bDelayedStart" }; }

	// Functions

	static UClass* GetPrivateStaticClass() { return NativeCall<UClass*>(nullptr, "AGameMode.GetPrivateStaticClass()"); }
	bool ReadyToStartMatch() { return NativeCall<bool>(this, "AGameMode.ReadyToStartMatch()"); }
	static void StaticRegisterNativesAGameMode() { NativeCall<void>(nullptr, "AGameMode.StaticRegisterNativesAGameMode()"); }
	FString* GetNetworkNumber(FString* result) { return NativeCall<FString*, FString*>(this, "AGameMode.GetNetworkNumber()", result); }
	void InitGame(const FString* MapName, const FString* Options, FString* ErrorMessage) { NativeCall<void, const FString*, const FString*, FString*>(this, "AGameMode.InitGame(FString&,FString&,FString&)", MapName, Options, ErrorMessage); }
	void RestartGame() { NativeCall<void>(this, "AGameMode.RestartGame()"); }
	void PostLogin(APlayerController* NewPlayer) { NativeCall<void, APlayerController*>(this, "AGameMode.PostLogin(APlayerController*)", NewPlayer); }
	void Logout(AController* Exiting) { NativeCall<void, AController*>(this, "AGameMode.Logout(AController*)", Exiting); }
	void StartPlay() { NativeCall<void>(this, "AGameMode.StartPlay()"); }
	void HandleMatchIsWaitingToStart() { NativeCall<void>(this, "AGameMode.HandleMatchIsWaitingToStart()"); }
	bool ReadyToStartMatch_Implementation() { return NativeCall<bool>(this, "AGameMode.ReadyToStartMatch_Implementation()"); }
	void StartMatch() { NativeCall<void>(this, "AGameMode.StartMatch()"); }
	void HandleMatchHasStarted() { NativeCall<void>(this, "AGameMode.HandleMatchHasStarted()"); }
	void EndMatch() { NativeCall<void>(this, "AGameMode.EndMatch()"); }
	void HandleMatchHasEnded() { NativeCall<void>(this, "AGameMode.HandleMatchHasEnded()"); }
	void StartToLeaveMap() { NativeCall<void>(this, "AGameMode.StartToLeaveMap()"); }
	void AbortMatch() { NativeCall<void>(this, "AGameMode.AbortMatch()"); }
	bool HasMatchStarted() { return NativeCall<bool>(this, "AGameMode.HasMatchStarted()"); }
	bool IsMatchInProgress() { return NativeCall<bool>(this, "AGameMode.IsMatchInProgress()"); }
	bool HasMatchEnded() { return NativeCall<bool>(this, "AGameMode.HasMatchEnded()"); }
	void SetMatchState(FName NewState) { NativeCall<void, FName>(this, "AGameMode.SetMatchState(FName)", NewState); }
	void OnMatchStateSet() { NativeCall<void>(this, "AGameMode.OnMatchStateSet()"); }
	void Tick(float DeltaSeconds) { NativeCall<void, float>(this, "AGameMode.Tick(float)", DeltaSeconds); }
	void HandleSeamlessTravelPlayer(AController** C) { NativeCall<void, AController**>(this, "AGameMode.HandleSeamlessTravelPlayer(AController*&)", C); }
	void InitSeamlessTravelPlayer(AController* NewController) { NativeCall<void, AController*>(this, "AGameMode.InitSeamlessTravelPlayer(AController*)", NewController); }
	void SetSeamlessTravelViewTarget(APlayerController* PC) { NativeCall<void, APlayerController*>(this, "AGameMode.SetSeamlessTravelViewTarget(APlayerController*)", PC); }
	void RemovePlayerControllerFromPlayerCount(APlayerController* PC) { NativeCall<void, APlayerController*>(this, "AGameMode.RemovePlayerControllerFromPlayerCount(APlayerController*)", PC); }
	int GetNumPlayers() { return NativeCall<int>(this, "AGameMode.GetNumPlayers()"); }
	int GetNumSpectators() { return NativeCall<int>(this, "AGameMode.GetNumSpectators()"); }
	void HandleStartingNewPlayer_Implementation(APlayerController* NewPlayer) { NativeCall<void, APlayerController*>(this, "AGameMode.HandleStartingNewPlayer_Implementation(APlayerController*)", NewPlayer); }
	bool PlayerCanRestart_Implementation(APlayerController* Player) { return NativeCall<bool, APlayerController*>(this, "AGameMode.PlayerCanRestart_Implementation(APlayerController*)", Player); }
	void Say(const FString* Msg) { NativeCall<void, const FString*>(this, "AGameMode.Say(FString&)", Msg); }
	void Broadcast(AActor* Sender, const FString* Msg, FName Type) { NativeCall<void, AActor*, const FString*, FName>(this, "AGameMode.Broadcast(AActor*,FString&,FName)", Sender, Msg, Type); }
	void BroadcastLocalized(AActor* Sender, TSubclassOf<ULocalMessage> Message, int Switch, APlayerState* RelatedPlayerState_1, APlayerState* RelatedPlayerState_2, UObject* OptionalObject) { NativeCall<void, AActor*, TSubclassOf<ULocalMessage>, int, APlayerState*, APlayerState*, UObject*>(this, "AGameMode.BroadcastLocalized(AActor*,TSubclassOf<ULocalMessage>,int,APlayerState*,APlayerState*,UObject*)", Sender, Message, Switch, RelatedPlayerState_1, RelatedPlayerState_2, OptionalObject); }
	void AddInactivePlayer(APlayerState* PlayerState, APlayerController* PC) { NativeCall<void, APlayerState*, APlayerController*>(this, "AGameMode.AddInactivePlayer(APlayerState*,APlayerController*)", PlayerState, PC); }
	bool FindInactivePlayer(APlayerController* PC) { return NativeCall<bool, APlayerController*>(this, "AGameMode.FindInactivePlayer(APlayerController*)", PC); }
	void OverridePlayerState(APlayerController* PC, APlayerState* OldPlayerState) { NativeCall<void, APlayerController*, APlayerState*>(this, "AGameMode.OverridePlayerState(APlayerController*,APlayerState*)", PC, OldPlayerState); }
	bool CanServerTravel(const FString* URL, bool bAbsolute) { return NativeCall<bool, const FString*, bool>(this, "AGameMode.CanServerTravel(FString&,bool)", URL, bAbsolute); }
	void PostSeamlessTravel() { NativeCall<void>(this, "AGameMode.PostSeamlessTravel()"); }
	bool IsHandlingReplays() { return NativeCall<bool>(this, "AGameMode.IsHandlingReplays()"); }
	void HandleDisconnect(UWorld* InWorld, UNetDriver* NetDriver) { NativeCall<void, UWorld*, UNetDriver*>(this, "AGameMode.HandleDisconnect(UWorld*,UNetDriver*)", InWorld, NetDriver); }
};

struct APrimalGameMode : AGameMode
{
	// Fields

	TArray<APlayerStart*, TSizedDefaultAllocator<32> >& PlayerStartsField() { return *GetNativePointerField<TArray<APlayerStart*, TSizedDefaultAllocator<32> >*>(this, "APrimalGameMode.PlayerStarts"); }
	TArray<APlayerStart*, TSizedDefaultAllocator<32> >& UsedPlayerStartsField() { return *GetNativePointerField<TArray<APlayerStart*, TSizedDefaultAllocator<32> >*>(this, "APrimalGameMode.UsedPlayerStarts"); }

	// Bitfields


	// Functions

	static UClass* StaticClass() { return NativeCall<UClass*>(nullptr, "APrimalGameMode.StaticClass()"); }
	//void ~APrimalGameMode() { NativeCall<void>(this, "APrimalGameMode.~APrimalGameMode()"); }
	void FinishRestartPlayer(AController* NewPlayer, const UE::Math::TRotator<double>* StartRotation) { NativeCall<void, AController*, const UE::Math::TRotator<double>*>(this, "APrimalGameMode.FinishRestartPlayer(AController*,UE::Math::TRotator<double>*)", NewPlayer, StartRotation); }
};

struct AShooterGameMode : APrimalGameMode
{
	// Fields

	TArray<FAttachedInstancedHarvestingElement*, TSizedDefaultAllocator<32> >& HiddenHarvestingComponentsField() { return *GetNativePointerField<TArray<FAttachedInstancedHarvestingElement*, TSizedDefaultAllocator<32> >*>(this, "AShooterGameMode.HiddenHarvestingComponents"); }
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
	bool& IsSavingWorldDataField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.IsSavingWorldData"); }
	long double& LastTimeCheckedForSaveBackupField() { return *GetNativePointerField<long double*>(this, "AShooterGameMode.LastTimeCheckedForSaveBackup"); }
	int& LastDayOfYearBackedUpField() { return *GetNativePointerField<int*>(this, "AShooterGameMode.LastDayOfYearBackedUp"); }
	FProcHandle& GameBackupProcHandleField() { return *GetNativePointerField<FProcHandle*>(this, "AShooterGameMode.GameBackupProcHandle"); }
	long double& TimeLastStartedDoingRemoteBackupField() { return *GetNativePointerField<long double*>(this, "AShooterGameMode.TimeLastStartedDoingRemoteBackup"); }
	FAmazonS3GetObject*& S3CheatDownloaderField() { return *GetNativePointerField<FAmazonS3GetObject**>(this, "AShooterGameMode.S3CheatDownloader"); }
	long double& TimeTillNextCheaterUpdateField() { return *GetNativePointerField<long double*>(this, "AShooterGameMode.TimeTillNextCheaterUpdate"); }
	float& UpdateAllowedCheatersIntervalField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.UpdateAllowedCheatersInterval"); }
	FAmazonS3GetObject*& S3BanDownloaderField() { return *GetNativePointerField<FAmazonS3GetObject**>(this, "AShooterGameMode.S3BanDownloader"); }
	long double& TimeTillNextBanUpdateField() { return *GetNativePointerField<long double*>(this, "AShooterGameMode.TimeTillNextBanUpdate"); }
	float& UpdateBanIntervalField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.UpdateBanInterval"); }
	FString& UnofficalBanListURLField() { return *GetNativePointerField<FString*>(this, "AShooterGameMode.UnofficalBanListURL"); }
	FString& UnofficalAdminListURLField() { return *GetNativePointerField<FString*>(this, "AShooterGameMode.UnofficalAdminListURL"); }
	TMap<FClassMapKey, FMissionGlobalData, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<FClassMapKey, FMissionGlobalData, 0> >& MissionGlobalDataField() { return *GetNativePointerField<TMap<FClassMapKey, FMissionGlobalData, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<FClassMapKey, FMissionGlobalData, 0> >*>(this, "AShooterGameMode.MissionGlobalData"); }
	UShooterCheatManager*& ServerCheatManagerField() { return *GetNativePointerField<UShooterCheatManager**>(this, "AShooterGameMode.ServerCheatManager"); }
	float& ForceLoadWorldSecondsField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.ForceLoadWorldSeconds"); }
	float& LoadedAtTimeSecondsField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.LoadedAtTimeSeconds"); }
	long double& LoadedAtPersistentTimeField() { return *GetNativePointerField<long double*>(this, "AShooterGameMode.LoadedAtPersistentTime"); }
	unsigned int& LoadedSaveIncrementorField() { return *GetNativePointerField<unsigned int*>(this, "AShooterGameMode.LoadedSaveIncrementor"); }
	unsigned int& CurrentSaveIncrementorField() { return *GetNativePointerField<unsigned int*>(this, "AShooterGameMode.CurrentSaveIncrementor"); }
	URCONServer*& RCONSocketField() { return *GetNativePointerField<URCONServer**>(this, "AShooterGameMode.RCONSocket"); }
	FString& PlayersJoinNoCheckFilenameField() { return *GetNativePointerField<FString*>(this, "AShooterGameMode.PlayersJoinNoCheckFilename"); }
	FString& PlayersExclusiveCheckFilenameField() { return *GetNativePointerField<FString*>(this, "AShooterGameMode.PlayersExclusiveCheckFilename"); }
	UShooterCheatManager*& GlobalCommandsCheatManagerField() { return *GetNativePointerField<UShooterCheatManager**>(this, "AShooterGameMode.GlobalCommandsCheatManager"); }
	long double& LastUpdatedLoginLocksTimeField() { return *GetNativePointerField<long double*>(this, "AShooterGameMode.LastUpdatedLoginLocksTime"); }
	long double& LastLoginLocksConnectedTimeField() { return *GetNativePointerField<long double*>(this, "AShooterGameMode.LastLoginLocksConnectedTime"); }
	FString& CheckGlobalEnablesURLField() { return *GetNativePointerField<FString*>(this, "AShooterGameMode.CheckGlobalEnablesURL"); }
	UDatabase_LoginData*& Database_LoginDataRefField() { return *GetNativePointerField<UDatabase_LoginData**>(this, "AShooterGameMode.Database_LoginDataRef"); }
	UDatabase_PubSub_GeneralNotifications*& PubSub_GeneralNotificationsRefField() { return *GetNativePointerField<UDatabase_PubSub_GeneralNotifications**>(this, "AShooterGameMode.PubSub_GeneralNotificationsRef"); }
	int& TerrainGeneratorVersionField() { return *GetNativePointerField<int*>(this, "AShooterGameMode.TerrainGeneratorVersion"); }
	TArray<FUniqueNetIdRepl, TSizedDefaultAllocator<32> >& PlayersJoinNoCheckField() { return *GetNativePointerField<TArray<FUniqueNetIdRepl, TSizedDefaultAllocator<32> >*>(this, "AShooterGameMode.PlayersJoinNoCheck"); }
	TArray<FUniqueNetIdRepl, TSizedDefaultAllocator<32> >& PlayersExclusiveListField() { return *GetNativePointerField<TArray<FUniqueNetIdRepl, TSizedDefaultAllocator<32> >*>(this, "AShooterGameMode.PlayersExclusiveList"); }
	void*& GameBackupPipeReadField() { return *GetNativePointerField<void**>(this, "AShooterGameMode.GameBackupPipeRead"); }
	void*& GameBackupPipeWriteField() { return *GetNativePointerField<void**>(this, "AShooterGameMode.GameBackupPipeWrite"); }
	TSet<unsigned int, DefaultKeyFuncs<unsigned int, 0>, FDefaultSetAllocator>& TribesIdsField() { return *GetNativePointerField<TSet<unsigned int, DefaultKeyFuncs<unsigned int, 0>, FDefaultSetAllocator>*>(this, "AShooterGameMode.TribesIds"); }
	TMap<int, unsigned __int64, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<int, unsigned __int64, 0> >& PlayersIdsField() { return *GetNativePointerField<TMap<int, unsigned __int64, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<int, unsigned __int64, 0> >*>(this, "AShooterGameMode.PlayersIds"); }
	TMap<unsigned __int64, int, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<unsigned __int64, int, 0> >& SteamIdsField() { return *GetNativePointerField<TMap<unsigned __int64, int, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<unsigned __int64, int, 0> >*>(this, "AShooterGameMode.SteamIds"); }
	TMap<int, FString, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<int, FString, 0> >& PlayerStringIdsField() { return *GetNativePointerField<TMap<int, FString, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<int, FString, 0> >*>(this, "AShooterGameMode.PlayerStringIds"); }
	bool& bTempDisableLoginLockCheckField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bTempDisableLoginLockCheck"); }
	FString& MyServerIdField() { return *GetNativePointerField<FString*>(this, "AShooterGameMode.MyServerId"); }
	TArray<FString, TSizedDefaultAllocator<32> >& PendingLoginLockReleasesField() { return *GetNativePointerField<TArray<FString, TSizedDefaultAllocator<32> >*>(this, "AShooterGameMode.PendingLoginLockReleases"); }
	TMap<FString, double, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<FString, double, 0> >& ActiveProfilesSavingField() { return *GetNativePointerField<TMap<FString, double, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<FString, double, 0> >*>(this, "AShooterGameMode.ActiveProfilesSaving"); }
	FString& LaunchOptionsField() { return *GetNativePointerField<FString*>(this, "AShooterGameMode.LaunchOptions"); }
	TArray<FTribeData, TSizedDefaultAllocator<32> >& TribesDataField() { return *GetNativePointerField<TArray<FTribeData, TSizedDefaultAllocator<32> >*>(this, "AShooterGameMode.TribesData"); }
	TArray<APrimalDinoCharacter*, TSizedDefaultAllocator<32> >& ActivelyTamingDinosField() { return *GetNativePointerField<TArray<APrimalDinoCharacter*, TSizedDefaultAllocator<32> >*>(this, "AShooterGameMode.ActivelyTamingDinos"); }
	bool& bAdminLoggingField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bAdminLogging"); }
	bool& bIsRestartingField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bIsRestarting"); }
	bool& bProximityChatField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bProximityChat"); }
	float& DifficultyValueField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.DifficultyValue"); }
	float& DifficultyValueMinField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.DifficultyValueMin"); }
	float& DifficultyValueMaxField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.DifficultyValueMax"); }
	float& ProximityRadiusField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.ProximityRadius"); }
	float& ProximityRadiusUnconsiousScaleField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.ProximityRadiusUnconsiousScale"); }
// TSubclassOf<UCheatManager>& CheatClassField() { return *GetNativePointerField<TSubclassOf<UCheatManager>*>(this, "AShooterGameMode.CheatClass"); }
	bool& bIsCurrentlySavingWorldField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bIsCurrentlySavingWorld"); }
	bool& bServerAllowArkDownloadField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bServerAllowArkDownload"); }
	bool& bUseExclusiveListField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bUseExclusiveList"); }
	bool& bAlwaysNotifyPlayerJoinedField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bAlwaysNotifyPlayerJoined"); }
	bool& bServerPVEField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bServerPVE"); }
	bool& bServerForceNoHUDField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bServerForceNoHUD"); }
	bool& bAllowFlyerCarryPvEField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bAllowFlyerCarryPvE"); }
	bool& bDisableDinoDecayPvEField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bDisableDinoDecayPvE"); }
	bool& bDisablePvEGammaField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bDisablePvEGamma"); }
	bool& bPreventStructurePaintingField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bPreventStructurePainting"); }
	bool& bAllowCaveBuildingPvPField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bAllowCaveBuildingPvP"); }
	bool& bPvPStructureDecayField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bPvPStructureDecay"); }
	bool& bForceAllStructureLockingField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bForceAllStructureLocking"); }
	bool& bPreventTribeAlliancesField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bPreventTribeAlliances"); }
	bool& bOnlyAutoDestroyCoreStructuresField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bOnlyAutoDestroyCoreStructures"); }
	bool& bTribeLogDestroyedEnemyStructuresField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bTribeLogDestroyedEnemyStructures"); }
	bool& bServerGameLogIncludeTribeLogsField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bServerGameLogIncludeTribeLogs"); }
	bool& bUseOptimizedHarvestingHealthField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bUseOptimizedHarvestingHealth"); }
	bool& bClampItemStatsField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bClampItemStats"); }
	bool& bAllowMultipleAttachedC4Field() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bAllowMultipleAttachedC4"); }
	bool& bCrossARKAllowForeignDinoDownloadsField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bCrossARKAllowForeignDinoDownloads"); }
	bool& bIsLegacyServerField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bIsLegacyServer"); }
	bool& bEnableVictoryCoreDupeCheckField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bEnableVictoryCoreDupeCheck"); }
	bool& bEnableOfficialOnlyVersioningCodeField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bEnableOfficialOnlyVersioningCode"); }
	bool& bUseAlarmNotificationsField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bUseAlarmNotifications"); }
	int& TheMaxStructuresInRangeField() { return *GetNativePointerField<int*>(this, "AShooterGameMode.TheMaxStructuresInRange"); }
	int& MaxStructuresInSmallRadiusField() { return *GetNativePointerField<int*>(this, "AShooterGameMode.MaxStructuresInSmallRadius"); }
	bool& bEnableCryoSicknessPVEField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bEnableCryoSicknessPVE"); }
	float& CryopodNerfDamageMultField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.CryopodNerfDamageMult"); }
	float& CryopodNerfDurationField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.CryopodNerfDuration"); }
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
	int& StartTimeHourField() { return *GetNativePointerField<int*>(this, "AShooterGameMode.StartTimeHour"); }
	float& ResourcesRespawnPeriodMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.ResourcesRespawnPeriodMultiplier"); }
	float& KickIdlePlayersPeriodField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.KickIdlePlayersPeriod"); }
	float& MateBoostEffectMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.MateBoostEffectMultiplier"); }
	float& AutoSavePeriodMinutesField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.AutoSavePeriodMinutes"); }
	float& XPMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.XPMultiplier"); }
	FName& ActiveEventField() { return *GetNativePointerField<FName*>(this, "AShooterGameMode.ActiveEvent"); }
	float& TribeNameChangeCooldownField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.TribeNameChangeCooldown"); }
	float& PlatformSaddleBuildAreaBoundsMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.PlatformSaddleBuildAreaBoundsMultiplier"); }
	float& StructurePickupTimeAfterPlacementField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.StructurePickupTimeAfterPlacement"); }
	float& StructurePickupHoldDurationField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.StructurePickupHoldDuration"); }
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
	long double& LastServerNotificationRecievedAtField() { return *GetNativePointerField<long double*>(this, "AShooterGameMode.LastServerNotificationRecievedAt"); }
	long double& LastExecSaveTimeField() { return *GetNativePointerField<long double*>(this, "AShooterGameMode.LastExecSaveTime"); }
	long double& LastTimeSavedWorldField() { return *GetNativePointerField<long double*>(this, "AShooterGameMode.LastTimeSavedWorld"); }
	FString& LastClaimedGameCodeField() { return *GetNativePointerField<FString*>(this, "AShooterGameMode.LastClaimedGameCode"); }
	TArray<FString, TSizedDefaultAllocator<32> >& ArkGameCodesField() { return *GetNativePointerField<TArray<FString, TSizedDefaultAllocator<32> >*>(this, "AShooterGameMode.ArkGameCodes"); }
	FString& SaveDirectoryNameField() { return *GetNativePointerField<FString*>(this, "AShooterGameMode.SaveDirectoryName"); }
	TArray<UPrimalPlayerData*, TSizedDefaultAllocator<32> >& PlayerDatasField() { return *GetNativePointerField<TArray<UPrimalPlayerData*, TSizedDefaultAllocator<32> >*>(this, "AShooterGameMode.PlayerDatas"); }
	FTimerHandle& DoNPCZoneManagerLandscapeChangeFixupsHandleField() { return *GetNativePointerField<FTimerHandle*>(this, "AShooterGameMode.DoNPCZoneManagerLandscapeChangeFixupsHandle"); }
	int& NPCZoneManagerModField() { return *GetNativePointerField<int*>(this, "AShooterGameMode.NPCZoneManagerMod"); }
	bool& bRestartedAPlayerField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bRestartedAPlayer"); }
	bool& bFirstSaveWorldField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bFirstSaveWorld"); }
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
	bool& AIForceOverlapCheckField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.AIForceOverlapCheck"); }
	float& DinoCountMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.DinoCountMultiplier"); }
	bool& bDisableXPField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bDisableXP"); }
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
	int& OverrideMaxExperiencePointsPlayerField() { return *GetNativePointerField<int*>(this, "AShooterGameMode.OverrideMaxExperiencePointsPlayer"); }
	int& OverrideMaxExperiencePointsDinoField() { return *GetNativePointerField<int*>(this, "AShooterGameMode.OverrideMaxExperiencePointsDino"); }
	float& GlobalSpoilingTimeMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.GlobalSpoilingTimeMultiplier"); }
	float& GlobalItemDecompositionTimeMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.GlobalItemDecompositionTimeMultiplier"); }
	float& GlobalCorpseDecompositionTimeMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.GlobalCorpseDecompositionTimeMultiplier"); }
	float& MaxFallSpeedMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.MaxFallSpeedMultiplier"); }
	bool& bAutoPvEUseSystemTimeField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bAutoPvEUseSystemTime"); }
	FName& StructureDestructionTagField() { return *GetNativePointerField<FName*>(this, "AShooterGameMode.StructureDestructionTag"); }
	float& AutoPvEStartTimeSecondsField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.AutoPvEStartTimeSeconds"); }
	float& AutoPvEStopTimeSecondsField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.AutoPvEStopTimeSeconds"); }
	AHibernationManager*& HibernationManagerField() { return *GetNativePointerField<AHibernationManager**>(this, "AShooterGameMode.HibernationManager"); }
	int& TributeItemExpirationSecondsField() { return *GetNativePointerField<int*>(this, "AShooterGameMode.TributeItemExpirationSeconds"); }
	int& TributeDinoExpirationSecondsField() { return *GetNativePointerField<int*>(this, "AShooterGameMode.TributeDinoExpirationSeconds"); }
	int& TributeCharacterExpirationSecondsField() { return *GetNativePointerField<int*>(this, "AShooterGameMode.TributeCharacterExpirationSeconds"); }
	bool& PreventDownloadItemsField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.PreventDownloadItems"); }
	bool& bPreventUploadSurvivorsField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bPreventUploadSurvivors"); }
	bool& bPreventUploadDinosField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bPreventUploadDinos"); }
	int& MaxTributeItemsField() { return *GetNativePointerField<int*>(this, "AShooterGameMode.MaxTributeItems"); }
	int& MaxTributeDinosField() { return *GetNativePointerField<int*>(this, "AShooterGameMode.MaxTributeDinos"); }
	int& MaxTributeCharactersField() { return *GetNativePointerField<int*>(this, "AShooterGameMode.MaxTributeCharacters"); }
	float& IncreasePvPRespawnIntervalCheckPeriodField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.IncreasePvPRespawnIntervalCheckPeriod"); }
	float& IncreasePvPRespawnIntervalMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.IncreasePvPRespawnIntervalMultiplier"); }
	float& IncreasePvPRespawnIntervalBaseAmountField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.IncreasePvPRespawnIntervalBaseAmount"); }
	float& ResourceNoReplenishRadiusStructuresField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.ResourceNoReplenishRadiusStructures"); }
	float& ResourceNoReplenishRadiusPlayersField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.ResourceNoReplenishRadiusPlayers"); }
	float& CropGrowthSpeedMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.CropGrowthSpeedMultiplier"); }
	float& LayEggIntervalMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.LayEggIntervalMultiplier"); }
	float& PoopIntervalMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.PoopIntervalMultiplier"); }
	float& CropDecaySpeedMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.CropDecaySpeedMultiplier"); }
	bool& bAllowDisablingSpectatorField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bAllowDisablingSpectator"); }
	bool& bFlyerPlatformAllowUnalignedDinoBasingField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bFlyerPlatformAllowUnalignedDinoBasing"); }
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
	FieldArray<float, 12> PerLevelStatsMultiplier_PlayerField() { return { this, "AShooterGameMode.PerLevelStatsMultiplier_Player" }; }
	FieldArray<float, 12> PerLevelStatsMultiplier_DinoTamedField() { return { this, "AShooterGameMode.PerLevelStatsMultiplier_DinoTamed"}; }
	FieldArray<float, 12> PerLevelStatsMultiplier_DinoTamed_AddField() { return{ this, "AShooterGameMode.PerLevelStatsMultiplier_DinoTamed_Add"}; }
	FieldArray<float, 12> PerLevelStatsMultiplier_DinoTamed_AffinityField() { return { this, "AShooterGameMode.PerLevelStatsMultiplier_DinoTamed_Affinity" }; }
	//float[12] & PerLevelStatsMultiplier_DinoWildField() { return *GetNativePointerField<float[12] *>(this, "AShooterGameMode.PerLevelStatsMultiplier_DinoWild"); }
	//int[12] & MutagenLevelBoostField() { return *GetNativePointerField<int[12] *>(this, "AShooterGameMode.MutagenLevelBoost"); }
	//int[12] & MutagenLevelBoost_BredField() { return *GetNativePointerField<int[12] *>(this, "AShooterGameMode.MutagenLevelBoost_Bred"); }
	//int[8] & ItemStatClampsField() { return *GetNativePointerField<int[8] *>(this, "AShooterGameMode.ItemStatClamps"); }
	int& MaxGateFrameOnSaddlesField() { return *GetNativePointerField<int*>(this, "AShooterGameMode.MaxGateFrameOnSaddles"); }
	int& MaxHexagonsPerCharacterField() { return *GetNativePointerField<int*>(this, "AShooterGameMode.MaxHexagonsPerCharacter"); }
	FOutputDeviceFile& GameplayLogFileField() { return *GetNativePointerField<FOutputDeviceFile*>(this, "AShooterGameMode.GameplayLogFile"); }
	FOutputDeviceFile& ServerGameLogFileField() { return *GetNativePointerField<FOutputDeviceFile*>(this, "AShooterGameMode.ServerGameLogFile"); }
	bool& bServerGameLogEnabledField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bServerGameLogEnabled"); }
// TSubclassOf<UPrimalItem>& BonusSupplyCrateItemClassField() { return *GetNativePointerField<TSubclassOf<UPrimalItem>*>(this, "AShooterGameMode.BonusSupplyCrateItemClass"); }
	float& BonusSupplyCrateItemGiveIntervalField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.BonusSupplyCrateItemGiveInterval"); }
	float& StructureDamageRepairCooldownField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.StructureDamageRepairCooldown"); }
	float& CustomRecipeEffectivenessMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.CustomRecipeEffectivenessMultiplier"); }
	float& CustomRecipeSkillMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.CustomRecipeSkillMultiplier"); }
	FString& BonusSupplyCrateItemStringField() { return *GetNativePointerField<FString*>(this, "AShooterGameMode.BonusSupplyCrateItemString"); }
	bool& bPvEAllowTribeWarField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bPvEAllowTribeWar"); }
	bool& bAllowCustomRecipesField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bAllowCustomRecipes"); }
	long double& LastBonusSupplyCrateItemGiveTimeField() { return *GetNativePointerField<long double*>(this, "AShooterGameMode.LastBonusSupplyCrateItemGiveTime"); }
	bool& bTribeStoreCharacterConfigurationField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bTribeStoreCharacterConfiguration"); }
	TMap<int, TSet<int, DefaultKeyFuncs<int, 0>, FDefaultSetAllocator>, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<int, TSet<int, DefaultKeyFuncs<int, 0>, FDefaultSetAllocator>, 0> >& PvEActiveTribeWarsField() { return *GetNativePointerField<TMap<int, TSet<int, DefaultKeyFuncs<int, 0>, FDefaultSetAllocator>, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<int, TSet<int, DefaultKeyFuncs<int, 0>, FDefaultSetAllocator>, 0> >*>(this, "AShooterGameMode.PvEActiveTribeWars"); }
	TMap<int, TSet<int, DefaultKeyFuncs<int, 0>, FDefaultSetAllocator>, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<int, TSet<int, DefaultKeyFuncs<int, 0>, FDefaultSetAllocator>, 0> >& TribeAlliesField() { return *GetNativePointerField<TMap<int, TSet<int, DefaultKeyFuncs<int, 0>, FDefaultSetAllocator>, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<int, TSet<int, DefaultKeyFuncs<int, 0>, FDefaultSetAllocator>, 0> >*>(this, "AShooterGameMode.TribeAllies"); }
	TMap<unsigned __int64, UPrimalPlayerData*, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<unsigned __int64, UPrimalPlayerData*, 0> >& IDtoPlayerDatasField() { return *GetNativePointerField<TMap<unsigned __int64, UPrimalPlayerData*, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<unsigned __int64, UPrimalPlayerData*, 0> >*>(this, "AShooterGameMode.IDtoPlayerDatas"); }
	int& MaxTribeLogsField() { return *GetNativePointerField<int*>(this, "AShooterGameMode.MaxTribeLogs"); }
	int& MaxPersonalTamedDinosField() { return *GetNativePointerField<int*>(this, "AShooterGameMode.MaxPersonalTamedDinos"); }
	int& PersonalTamedDinosSaddleStructureCostField() { return *GetNativePointerField<int*>(this, "AShooterGameMode.PersonalTamedDinosSaddleStructureCost"); }
	TArray<FString, TSizedDefaultAllocator<32> >& CachedGameLogField() { return *GetNativePointerField<TArray<FString, TSizedDefaultAllocator<32> >*>(this, "AShooterGameMode.CachedGameLog"); }
	bool& bAllowInactiveTribesField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bAllowInactiveTribes"); }
	float& DinoHarvestingDamageMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.DinoHarvestingDamageMultiplier"); }
	float& PlayerHarvestingDamageMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.PlayerHarvestingDamageMultiplier"); }
	float& DinoTurretDamageMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.DinoTurretDamageMultiplier"); }
	float& ExtinctionEventTimeIntervalField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.ExtinctionEventTimeInterval"); }
	unsigned int& NextExtinctionEventUTCField() { return *GetNativePointerField<unsigned int*>(this, "AShooterGameMode.NextExtinctionEventUTC"); }
	bool& bDoExtinctionEventField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bDoExtinctionEvent"); }
	bool& bPvPDinoDecayField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bPvPDinoDecay"); }
	bool& bAllowAnyoneBabyImprintCuddleField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bAllowAnyoneBabyImprintCuddle"); }
	bool& bOnlyDecayUnsnappedCoreStructuresField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bOnlyDecayUnsnappedCoreStructures"); }
	bool& bDestroyUnconnectedWaterPipesField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bDestroyUnconnectedWaterPipes"); }
	bool& bNotifyAdminCommandsInChatField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bNotifyAdminCommandsInChat"); }
	bool& bOfficialDisableGenesisMissionsField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bOfficialDisableGenesisMissions"); }
	bool& bPreventOutOfTribePinCodeUseField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bPreventOutOfTribePinCodeUse"); }
	float& PreventOfflinePvPIntervalField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.PreventOfflinePvPInterval"); }
	float& ImplantSuicideCDField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.ImplantSuicideCD"); }
	bool& bShowFloatingDamageTextField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bShowFloatingDamageText"); }
	int& SavedGameModeVersionField() { return *GetNativePointerField<int*>(this, "AShooterGameMode.SavedGameModeVersion"); }
	int& CurrentGameModeVersionField() { return *GetNativePointerField<int*>(this, "AShooterGameMode.CurrentGameModeVersion"); }
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
	bool& bNonPermanentDiseasesField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bNonPermanentDiseases"); }
	UAllClustersInventory*& AllClustersInventoryField() { return *GetNativePointerField<UAllClustersInventory**>(this, "AShooterGameMode.AllClustersInventory"); }
	int& SaveForceRespawnDinosVersionField() { return *GetNativePointerField<int*>(this, "AShooterGameMode.SaveForceRespawnDinosVersion"); }
	unsigned __int64& ServerIDField() { return *GetNativePointerField<unsigned __int64*>(this, "AShooterGameMode.ServerID"); }
	int& LoadForceRespawnDinosVersionField() { return *GetNativePointerField<int*>(this, "AShooterGameMode.LoadForceRespawnDinosVersion"); }
	TMap<FString, FTributePlayerTribeInfo, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<FString, FTributePlayerTribeInfo, 0> >& TributePlayerTribeInfosField() { return *GetNativePointerField<TMap<FString, FTributePlayerTribeInfo, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<FString, FTributePlayerTribeInfo, 0> >*>(this, "AShooterGameMode.TributePlayerTribeInfos"); }
	TArray<int, TSizedDefaultAllocator<32> >& SupportedSpawnRegionsField() { return *GetNativePointerField<TArray<int, TSizedDefaultAllocator<32> >*>(this, "AShooterGameMode.SupportedSpawnRegions"); }
	float& MaxAllowedRespawnIntervalField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.MaxAllowedRespawnInterval"); }
	bool& bDisableDinoTamingField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bDisableDinoTaming"); }
	float& MinimumDinoReuploadIntervalField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.MinimumDinoReuploadInterval"); }
	int& SaveGameCustomVersionField() { return *GetNativePointerField<int*>(this, "AShooterGameMode.SaveGameCustomVersion"); }
	float& OverrideOfficialDifficultyField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.OverrideOfficialDifficulty"); }
	FOutputDeviceFile& DinoDupeIDLogFileField() { return *GetNativePointerField<FOutputDeviceFile*>(this, "AShooterGameMode.DinoDupeIDLogFile"); }
	FOutputDeviceFile& FailedWaterDinoSpawnLogFileField() { return *GetNativePointerField<FOutputDeviceFile*>(this, "AShooterGameMode.FailedWaterDinoSpawnLogFile"); }
	//float[12] & PlayerBaseStatMultipliersField() { return *GetNativePointerField<float[12] *>(this, "AShooterGameMode.PlayerBaseStatMultipliers"); }
	int& NPCActiveCountTamedField() { return *GetNativePointerField<int*>(this, "AShooterGameMode.NPCActiveCountTamed"); }
	int& NPCActiveCountField() { return *GetNativePointerField<int*>(this, "AShooterGameMode.NPCActiveCount"); }
	int& NPCCountField() { return *GetNativePointerField<int*>(this, "AShooterGameMode.NPCCount"); }
	float& RTSModeNumSelectableDinosScaleField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.RTSModeNumSelectableDinosScale"); }
	float& RTSMaxRangeFromPlayerCharacterScaleField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.RTSMaxRangeFromPlayerCharacterScale"); }
	float& RTSProximityToEnemyStructureScaleField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.RTSProximityToEnemyStructureScale"); }
	float& MatingSpeedMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.MatingSpeedMultiplier"); }
	float& FastDecayIntervalField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.FastDecayInterval"); }
	bool& bDisableGenesisMissionsField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bDisableGenesisMissions"); }
	bool& bForceUseInventoryAppendsField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bForceUseInventoryAppends"); }
	bool& bDisableWirelessCraftingForDinosField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bDisableWirelessCraftingForDinos"); }
	bool& bDisableWirelessCraftingForStructuresField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bDisableWirelessCraftingForStructures"); }
	float& WirelessCraftingRangeOverrideField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.WirelessCraftingRangeOverride"); }
	float& SupplyCrateLootQualityMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.SupplyCrateLootQualityMultiplier"); }
	float& FishingLootQualityMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.FishingLootQualityMultiplier"); }
	float& ItemStackSizeMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.ItemStackSizeMultiplier"); }
	float& CraftingSkillBonusMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.CraftingSkillBonusMultiplier"); }
	bool& bAllowUnlimitedRespecsField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bAllowUnlimitedRespecs"); }
	float& FuelConsumptionIntervalMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.FuelConsumptionIntervalMultiplier"); }
	int& DestroyTamesOverLevelClampField() { return *GetNativePointerField<int*>(this, "AShooterGameMode.DestroyTamesOverLevelClamp"); }
	int& MaxAlliancesPerTribeField() { return *GetNativePointerField<int*>(this, "AShooterGameMode.MaxAlliancesPerTribe"); }
	int& MaxTribesPerAllianceField() { return *GetNativePointerField<int*>(this, "AShooterGameMode.MaxTribesPerAlliance"); }
	bool& bDisableNonTribePinAccessField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bDisableNonTribePinAccess"); }
	bool& bLimitTurretsInRangeField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bLimitTurretsInRange"); }
	float& LimitTurretsRangeField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.LimitTurretsRange"); }
	int& LimitTurretsNumField() { return *GetNativePointerField<int*>(this, "AShooterGameMode.LimitTurretsNum"); }
	int& LimitGeneratorsNumField() { return *GetNativePointerField<int*>(this, "AShooterGameMode.LimitGeneratorsNum"); }
	float& LimitGeneratorsRangeField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.LimitGeneratorsRange"); }
	int& CropPlotStackLimitField() { return *GetNativePointerField<int*>(this, "AShooterGameMode.CropPlotStackLimit"); }
	float& PhotoModeRangeLimitField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.PhotoModeRangeLimit"); }
	long double& ServerLastForceRespawnWildDinosTimeField() { return *GetNativePointerField<long double*>(this, "AShooterGameMode.ServerLastForceRespawnWildDinosTime"); }
	FString& UseStructurePreventionVolumeTagStringField() { return *GetNativePointerField<FString*>(this, "AShooterGameMode.UseStructurePreventionVolumeTagString"); }
	float& BaseTemperatureMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.BaseTemperatureMultiplier"); }
	bool& bForceAllowAscensionItemDownloadsField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bForceAllowAscensionItemDownloads"); }
	float& LimitNonPlayerDroppedItemsRangeField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.LimitNonPlayerDroppedItemsRange"); }
	int& LimitNonPlayerDroppedItemsCountField() { return *GetNativePointerField<int*>(this, "AShooterGameMode.LimitNonPlayerDroppedItemsCount"); }
	float& GlobalPoweredBatteryDurabilityDecreasePerSecondField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.GlobalPoweredBatteryDurabilityDecreasePerSecond"); }
	float& SingleplayerSettingsCorpseLifespanMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.SingleplayerSettingsCorpseLifespanMultiplier"); }
	float& UseCorpseLifeSpanMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.UseCorpseLifeSpanMultiplier"); }
	float& TimePeriodToHideDisconnectedPlayersField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.TimePeriodToHideDisconnectedPlayers"); }
	float& PreventOfflinePvPConnectionInvincibleIntervalField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.PreventOfflinePvPConnectionInvincibleInterval"); }
	float& TamedDinoCharacterFoodDrainMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.TamedDinoCharacterFoodDrainMultiplier"); }
	float& WildDinoCharacterFoodDrainMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.WildDinoCharacterFoodDrainMultiplier"); }
	float& WildDinoTorporDrainMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.WildDinoTorporDrainMultiplier"); }
	float& PassiveTameIntervalMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.PassiveTameIntervalMultiplier"); }
	float& TamedDinoTorporDrainMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.TamedDinoTorporDrainMultiplier"); }
	float& MeshCheckingRayDistanceField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.MeshCheckingRayDistance"); }
	float& MeshCheckingSubdivisonsField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.MeshCheckingSubdivisons"); }
	float& MeshCheckingPercentageToFailField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.MeshCheckingPercentageToFail"); }
	bool& bGenesisUseStructuresPreventionVolumesField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bGenesisUseStructuresPreventionVolumes"); }
	FString& LiveTuningFileNameField() { return *GetNativePointerField<FString*>(this, "AShooterGameMode.LiveTuningFileName"); }
	FString& ArkServerMetricsKeyField() { return *GetNativePointerField<FString*>(this, "AShooterGameMode.ArkServerMetricsKey"); }
	FString& ArkServerMetricsURLField() { return *GetNativePointerField<FString*>(this, "AShooterGameMode.ArkServerMetricsURL"); }
	TArray<FString, TSizedDefaultAllocator<32> >& CachedArkMetricsPayloadsField() { return *GetNativePointerField<TArray<FString, TSizedDefaultAllocator<32> >*>(this, "AShooterGameMode.CachedArkMetricsPayloads"); }
	bool& bLogChatMessagesField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bLogChatMessages"); }
	int& ChatLogFlushIntervalSecondsField() { return *GetNativePointerField<int*>(this, "AShooterGameMode.ChatLogFlushIntervalSeconds"); }
	int& ChatLogFileSplitIntervalSecondsField() { return *GetNativePointerField<int*>(this, "AShooterGameMode.ChatLogFileSplitIntervalSeconds"); }
	int& ChatLogMaxAgeInDaysField() { return *GetNativePointerField<int*>(this, "AShooterGameMode.ChatLogMaxAgeInDays"); }
	//TArray<TSharedPtr<FJsonObject, 1>, TSizedDefaultAllocator<32> >& ChatMessageBufferField() { return *GetNativePointerField<TArray<TSharedPtr<FJsonObject, 1>, TSizedDefaultAllocator<32> >*>(this, "AShooterGameMode.ChatMessageBuffer"); }
	FString& CurrentChatLogFilenameField() { return *GetNativePointerField<FString*>(this, "AShooterGameMode.CurrentChatLogFilename"); }
	FDateTime& LastChatLogFlushTimeField() { return *GetNativePointerField<FDateTime*>(this, "AShooterGameMode.LastChatLogFlushTime"); }
	FDateTime& LastChatLogFileCreateTimeField() { return *GetNativePointerField<FDateTime*>(this, "AShooterGameMode.LastChatLogFileCreateTime"); }
	bool& bIsGenesisMapField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bIsGenesisMap"); }
	//TArray<TSharedPtr<FJsonObject, 1>, TSizedDefaultAllocator<32> >& DamageEventBufferField() { return *GetNativePointerField<TArray<TSharedPtr<FJsonObject, 1>, TSizedDefaultAllocator<32> >*>(this, "AShooterGameMode.DamageEventBuffer"); }
	FString& CurrentDamageEventLogFilenameField() { return *GetNativePointerField<FString*>(this, "AShooterGameMode.CurrentDamageEventLogFilename"); }
	FTimerHandle& DamageEventLogFlushHandleField() { return *GetNativePointerField<FTimerHandle*>(this, "AShooterGameMode.DamageEventLogFlushHandle"); }
	FLeaderboardsContainer& LeaderboardContainerField() { return *GetNativePointerField<FLeaderboardsContainer*>(this, "AShooterGameMode.LeaderboardContainer"); }
	TMap<FName, int, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<FName, int, 0> >& MissionTagToLeaderboardEntryField() { return *GetNativePointerField<TMap<FName, int, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<FName, int, 0> >*>(this, "AShooterGameMode.MissionTagToLeaderboardEntry"); }
	FName& UseStructurePreventionVolumeTagField() { return *GetNativePointerField<FName*>(this, "AShooterGameMode.UseStructurePreventionVolumeTag"); }
	bool& bAllowStoredDatasField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bAllowStoredDatas"); }
	FDataStore<unsigned int>& TribeDataStoreField() { return *GetNativePointerField<FDataStore<unsigned int>*>(this, "AShooterGameMode.TribeDataStore"); }
	FDataStore<unsigned __int64>& PlayerDataStoreField() { return *GetNativePointerField<FDataStore<unsigned __int64>*>(this, "AShooterGameMode.PlayerDataStore"); }
	bool& bEnableStasisGridField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bEnableStasisGrid"); }
	TMap<FName, TWeakObjectPtr<UClass>, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<FName, TWeakObjectPtr<UClass>, 0> >& PrioritizedObjectMapField() { return *GetNativePointerField<TMap<FName, TWeakObjectPtr<UClass>, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<FName, TWeakObjectPtr<UClass>, 0> >*>(this, "AShooterGameMode.PrioritizedObjectMap"); }
	AOceanDinoManager*& TheOceanDinoManagerField() { return *GetNativePointerField<AOceanDinoManager**>(this, "AShooterGameMode.TheOceanDinoManager"); }
	TArray<FBuffAddition, TSizedDefaultAllocator<32> >& AdditionalDefaultBuffsField() { return *GetNativePointerField<TArray<FBuffAddition, TSizedDefaultAllocator<32> >*>(this, "AShooterGameMode.AdditionalDefaultBuffs"); }
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
	bool& bHexStoreAllowOnlyEngramTradeOptionField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bHexStoreAllowOnlyEngramTradeOption"); }
	TArray<FClassNameReplacement, TSizedDefaultAllocator<32> >& DynamicNPCReplacementsField() { return *GetNativePointerField<TArray<FClassNameReplacement, TSizedDefaultAllocator<32> >*>(this, "AShooterGameMode.DynamicNPCReplacements"); }
	TArray<FClassNameReplacement, TSizedDefaultAllocator<32> >& CollectiveNPCReplacementsField() { return *GetNativePointerField<TArray<FClassNameReplacement, TSizedDefaultAllocator<32> >*>(this, "AShooterGameMode.CollectiveNPCReplacements"); }
	TArray<FString, TSizedDefaultAllocator<32> >& PreventTransferForClassNamesField() { return *GetNativePointerField<TArray<FString, TSizedDefaultAllocator<32> >*>(this, "AShooterGameMode.PreventTransferForClassNames"); }
	bool& bAllowFlyerSpeedLevelingField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bAllowFlyerSpeedLeveling"); }
	bool& bDisableWorldBuffsField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bDisableWorldBuffs"); }
	bool& bEnablePlayerMoveThroughAllyField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bEnablePlayerMoveThroughAlly"); }
	bool& bRiderDinoCollisionField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bRiderDinoCollision"); }
	float& WorldBuffScalingEfficacyField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.WorldBuffScalingEfficacy"); }
	//float[12] & OverrideTimeToRecoverAfterDepletionStatusValueField() { return *GetNativePointerField<float[12] *>(this, "AShooterGameMode.OverrideTimeToRecoverAfterDepletionStatusValue"); }
	//float[12] & OverrideTimeToRecoverAfterDecreaseStatusValueField() { return *GetNativePointerField<float[12] *>(this, "AShooterGameMode.OverrideTimeToRecoverAfterDecreaseStatusValue"); }
	//float[12] & OverrideDinoTimeToRecoverAfterDepletionStatusValueField() { return *GetNativePointerField<float[12] *>(this, "AShooterGameMode.OverrideDinoTimeToRecoverAfterDepletionStatusValue"); }
	//float[12] & OverrideDinoTimeToRecoverAfterDecreaseStatusValueField() { return *GetNativePointerField<float[12] *>(this, "AShooterGameMode.OverrideDinoTimeToRecoverAfterDecreaseStatusValue"); }
	//unsigned __int8[14] & DisabledStatusStatesField() { return *GetNativePointerField<unsigned __int8[14] *>(this, "AShooterGameMode.DisabledStatusStates"); }
	TArray<FCrateTemporaryQualityModifierSet, TSizedDefaultAllocator<32> >& TemporaryCrateModifiersField() { return *GetNativePointerField<TArray<FCrateTemporaryQualityModifierSet, TSizedDefaultAllocator<32> >*>(this, "AShooterGameMode.TemporaryCrateModifiers"); }
	TArray<FResourceTemporaryAmountModifierSet, TSizedDefaultAllocator<32> >& TemporaryResourceModifiersField() { return *GetNativePointerField<TArray<FResourceTemporaryAmountModifierSet, TSizedDefaultAllocator<32> >*>(this, "AShooterGameMode.TemporaryResourceModifiers"); }
	float& AdjustableMutagenSpawnDelayMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.AdjustableMutagenSpawnDelayMultiplier"); }
	bool& DisableRailgunPVPField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.DisableRailgunPVP"); }
	int& EggsHatchedThisFrameField() { return *GetNativePointerField<int*>(this, "AShooterGameMode.EggsHatchedThisFrame"); }
	TArray<FName, TSizedDefaultAllocator<32> >& DynamicDisabledWorldBuffsField() { return *GetNativePointerField<TArray<FName, TSizedDefaultAllocator<32> >*>(this, "AShooterGameMode.DynamicDisabledWorldBuffs"); }
	FString& DynamicUndermeshRegionsRawField() { return *GetNativePointerField<FString*>(this, "AShooterGameMode.DynamicUndermeshRegionsRaw"); }
	float& RedisTimeoutInMinutesField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.RedisTimeoutInMinutes"); }
	float& ImprintLimitField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.ImprintLimit"); }
	int& MaxStructuresToAllowForPickupOverrideField() { return *GetNativePointerField<int*>(this, "AShooterGameMode.MaxStructuresToAllowForPickupOverride"); }
	bool& bDisableRailgunPVPField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bDisableRailgunPVP"); }
	float& MinimumTimebetweeninventoryRetrievalField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.MinimumTimebetweeninventoryRetrieval"); }
	float& WildFollowerSpawnChanceMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.WildFollowerSpawnChanceMultiplier"); }
	float& WildFollowerSpawnCountMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.WildFollowerSpawnCountMultiplier"); }
	bool& bPreventHibernationManagerField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bPreventHibernationManager"); }
	float& DinoArmorDurabilityScaleField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.DinoArmorDurabilityScale"); }
	//TArray<//TSoftClassPtr<APrimalStructure>, TSizedDefaultAllocator<32> >& XmasEventStructuresToRemoveField() { return *GetNativePointerField<//TArray<//TSoftClassPtr<APrimalStructure>, TSizedDefaultAllocator<32> >*>(this, "AShooterGameMode.XmasEventStructuresToRemove"); }
	//TArray<//TSoftClassPtr<UPrimalItem>, TSizedDefaultAllocator<32> >& XmasEventItemsToRemoveField() { return *GetNativePointerField<//TArray<//TSoftClassPtr<UPrimalItem>, TSizedDefaultAllocator<32> >*>(this, "AShooterGameMode.XmasEventItemsToRemove"); }
	//TArray<//TSoftClassPtr<APrimalStructure>, TSizedDefaultAllocator<32> >& EventInventoryContainersToRefreshField() { return *GetNativePointerField<//TArray<//TSoftClassPtr<APrimalStructure>, TSizedDefaultAllocator<32> >*>(this, "AShooterGameMode.EventInventoryContainersToRefresh"); }
	//TArray<//TSoftClassPtr<APrimalDinoCharacter>, TSizedDefaultAllocator<32> >& VDayDinosToRemoveField() { return *GetNativePointerField<//TArray<//TSoftClassPtr<APrimalDinoCharacter>, TSizedDefaultAllocator<32> >*>(this, "AShooterGameMode.VDayDinosToRemove"); }
	//TArray<//TSoftClassPtr<UPrimalItem>, TSizedDefaultAllocator<32> >& VDayItemsToRemoveField() { return *GetNativePointerField<//TArray<//TSoftClassPtr<UPrimalItem>, TSizedDefaultAllocator<32> >*>(this, "AShooterGameMode.VDayItemsToRemove"); }
	//TArray<//TSoftClassPtr<APrimalStructure>, TSizedDefaultAllocator<32> >& EasterEventStructuresToRemoveField() { return *GetNativePointerField<//TArray<//TSoftClassPtr<APrimalStructure>, TSizedDefaultAllocator<32> >*>(this, "AShooterGameMode.EasterEventStructuresToRemove"); }
	//TArray<//TSoftClassPtr<UPrimalItem>, TSizedDefaultAllocator<32> >& EasterItemsToRemoveField() { return *GetNativePointerField<//TArray<//TSoftClassPtr<UPrimalItem>, TSizedDefaultAllocator<32> >*>(this, "AShooterGameMode.EasterItemsToRemove"); }
	TMap<int, unsigned int, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<int, unsigned int, 0> >& CustomLevelEventsSingletonIDsField() { return *GetNativePointerField<TMap<int, unsigned int, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<int, unsigned int, 0> >*>(this, "AShooterGameMode.CustomLevelEventsSingletonIDs"); }
	//TArray<TSharedPtr<FCompressTaskInfo, 1>, TSizedDefaultAllocator<32> >& CompressTasksField() { return *GetNativePointerField<TArray<TSharedPtr<FCompressTaskInfo, 1>, TSizedDefaultAllocator<32> >*>(this, "AShooterGameMode.CompressTasks"); }
	TMap<FString, TArray<TArray<TArray<unsigned int, TSizedDefaultAllocator<32> >, TSizedDefaultAllocator<32> >, TSizedDefaultAllocator<32> >, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<FString, TArray<TArray<TArray<unsigned int, TSizedDefaultAllocator<32> >, TSizedDefaultAllocator<32> >, TSizedDefaultAllocator<32> >, 0> >& LocalInstancedStaticMeshComponentInstancesVisibilityStateField() { return *GetNativePointerField<TMap<FString, TArray<TArray<TArray<unsigned int, TSizedDefaultAllocator<32> >, TSizedDefaultAllocator<32> >, TSizedDefaultAllocator<32> >, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<FString, TArray<TArray<TArray<unsigned int, TSizedDefaultAllocator<32> >, TSizedDefaultAllocator<32> >, TSizedDefaultAllocator<32> >, 0> >*>(this, "AShooterGameMode.LocalInstancedStaticMeshComponentInstancesVisibilityState"); }
	UAntiDupeTransactionLog*& AntiDupeTransactionLogField() { return *GetNativePointerField<UAntiDupeTransactionLog**>(this, "AShooterGameMode.AntiDupeTransactionLog"); }
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
	FString& CachedSaveDirectoryOverrideField() { return *GetNativePointerField<FString*>(this, "AShooterGameMode.CachedSaveDirectoryOverride"); }
	int& TicksUntilRegisterField() { return *GetNativePointerField<int*>(this, "AShooterGameMode.TicksUntilRegister"); }
	bool& bDisableStructurePlacementCollisionField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bDisableStructurePlacementCollision"); }

	// Bitfields


	// Functions

	static UClass* GetPrivateStaticClass() { return NativeCall<UClass*>(nullptr, "AShooterGameMode.GetPrivateStaticClass()"); }
	void BPPreSpawnedDino(APrimalDinoCharacter* theDino) { NativeCall<void, APrimalDinoCharacter*>(this, "AShooterGameMode.BPPreSpawnedDino(APrimalDinoCharacter*)", theDino); }
	bool HandleNewPlayer(AShooterPlayerController* NewPlayer, UPrimalPlayerData* PlayerData, AShooterCharacter* PlayerCharacter, bool bIsFromLogin) { return NativeCall<bool, AShooterPlayerController*, UPrimalPlayerData*, AShooterCharacter*, bool>(this, "AShooterGameMode.HandleNewPlayer(AShooterPlayerController*,UPrimalPlayerData*,AShooterCharacter*,bool)", NewPlayer, PlayerData, PlayerCharacter, bIsFromLogin); }
	static void StaticRegisterNativesAShooterGameMode() { NativeCall<void>(nullptr, "AShooterGameMode.StaticRegisterNativesAShooterGameMode()"); }
	//void ~AShooterGameMode() { NativeCall<void>(this, "AShooterGameMode.~AShooterGameMode()"); }
	void Serialize(FStructuredArchiveRecord Record) { NativeCall<void, FStructuredArchiveRecord>(this, "AShooterGameMode.Serialize(FStructuredArchiveRecord)", Record); }
	bool AllowAddXP(UPrimalCharacterStatusComponent* forComp) { return NativeCall<bool, UPrimalCharacterStatusComponent*>(this, "AShooterGameMode.AllowAddXP(UPrimalCharacterStatusComponent*)", forComp); }
	//TSharedPtr<FWriteFileTaskInfo, 1>* SaveWorldToFile(TSharedPtr<FWriteFileTaskInfo, 1>* result, const FString* Filename, const FString* TempFilename, const FString* SnapshotFilename, TFunction<void __cdecl(bool)>* SaveCompleteCallback, const //TArray<TSubclassOf<AActor>, TSizedDefaultAllocator<32> >* typesToSave, bool bDoPartialSave) { return NativeCall<TSharedPtr<FWriteFileTaskInfo, 1> *, TSharedPtr<FWriteFileTaskInfo, 1>*, const FString*, const FString*, const FString*, TFunction<void __cdecl(bool)>*, const //TArray<TSubclassOf<AActor>, TSizedDefaultAllocator<32> >*, bool>(this, "AShooterGameMode.SaveWorldToFile(TSharedPtr<FWriteFileTaskInfo,1>*,FString&,FString&,FString&,TFunction<void__cdecl(bool)>*,//TArray<TSubclassOf<AActor>,TSizedDefaultAllocator<32>>*,bool)", result, Filename, TempFilename, SnapshotFilename, SaveCompleteCallback, typesToSave, bDoPartialSave); }
	void FindOrCreateSerializedObject(FAtlasSaveObjectData* SavedObject, const TArray<UObject*, TSizedDefaultAllocator<32> >* Levels, FName Name, TArray<AActor*, TSizedDefaultAllocator<32> >* ActorsToBeginPlay, UWorld* World) { NativeCall<void, FAtlasSaveObjectData*, const TArray<UObject*, TSizedDefaultAllocator<32> >*, FName, TArray<AActor*, TSizedDefaultAllocator<32> >*, UWorld*>(this, "AShooterGameMode.FindOrCreateSerializedObject(FAtlasSaveObjectData*,TArray<UObject*,TSizedDefaultAllocator<32>>*,FName,TArray<AActor*,TSizedDefaultAllocator<32>>*,UWorld*)", SavedObject, Levels, Name, ActorsToBeginPlay, World); }
	bool LoadWorldFromFile(const FString* filename) { return NativeCall<bool, const FString*>(this, "AShooterGameMode.LoadWorldFromFile(FString&)", filename); }
	//void AShooterGameMode(const FObjectInitializer* ObjectInitializer) { NativeCall<void, const FObjectInitializer*>(this, "AShooterGameMode.AShooterGameMode(FObjectInitializer*)", ObjectInitializer); }
	void CheckArkTributeAvailability() { NativeCall<void>(this, "AShooterGameMode.CheckArkTributeAvailability()"); }
	static void ArkTributeAvailabilityRequestComplete() { NativeCall<void>(nullptr, "AShooterGameMode.ArkTributeAvailabilityRequestComplete()"); }
	void LoadWorldFromFileWrapper() { NativeCall<void>(this, "AShooterGameMode.LoadWorldFromFileWrapper()"); }
	bool SetTranfers(bool enabled) { return NativeCall<bool, bool>(this, "AShooterGameMode.SetTranfers(bool)", enabled); }
	void LoadedWorld_Implementation() { NativeCall<void>(this, "AShooterGameMode.LoadedWorld_Implementation()"); }
	void IncrementPreLoginMetric() { NativeCall<void>(this, "AShooterGameMode.IncrementPreLoginMetric()"); }
	void InitGame(const FString* MapName, const FString* Options, FString* ErrorMessage) { NativeCall<void, const FString*, const FString*, FString*>(this, "AShooterGameMode.InitGame(FString&,FString&,FString&)", MapName, Options, ErrorMessage); }
	void GenericPlayerInitialization(AController* C) { NativeCall<void, AController*>(this, "AShooterGameMode.GenericPlayerInitialization(AController*)", C); }
	void ParseServerToJson() { NativeCall<void>(this, "AShooterGameMode.ParseServerToJson()"); }
	static void InitOptionBool() { NativeCall<void>(nullptr, "AShooterGameMode.InitOptionBool()"); }
	static void InitOptionFloat() { NativeCall<void>(nullptr, "AShooterGameMode.InitOptionFloat()"); }
	void InitOptionBool(const wchar_t* Commandline, const wchar_t* Section, const wchar_t* Option, bool bDefaultValue) { NativeCall<void, const wchar_t*, const wchar_t*, const wchar_t*, bool>(this, "AShooterGameMode.InitOptionBool(wchar_t*,wchar_t*,wchar_t*,bool)", Commandline, Section, Option, bDefaultValue); }
	void InitOptionString(const wchar_t* Commandline, const wchar_t* Section, const wchar_t* Option) { NativeCall<void, const wchar_t*, const wchar_t*, const wchar_t*>(this, "AShooterGameMode.InitOptionString(wchar_t*,wchar_t*,wchar_t*)", Commandline, Section, Option); }
	void InitOptionFloat(const wchar_t* Commandline, const wchar_t* Section, const wchar_t* Option, float CurrentValue) { NativeCall<void, const wchar_t*, const wchar_t*, const wchar_t*, float>(this, "AShooterGameMode.InitOptionFloat(wchar_t*,wchar_t*,wchar_t*,float)", Commandline, Section, Option, CurrentValue); }
	void InitOptionInteger(const wchar_t* Commandline, const wchar_t* Section, const wchar_t* Option, int CurrentValue) { NativeCall<void, const wchar_t*, const wchar_t*, const wchar_t*, int>(this, "AShooterGameMode.InitOptionInteger(wchar_t*,wchar_t*,wchar_t*,int)", Commandline, Section, Option, CurrentValue); }
	void SingleplayerSetupValues() { NativeCall<void>(this, "AShooterGameMode.SingleplayerSetupValues()"); }
	bool GetBoolOption(const FString* Options, const FString* ParseString, bool CurrentValue) { return NativeCall<bool, const FString*, const FString*, bool>(this, "AShooterGameMode.GetBoolOption(FString&,FString&,bool)", Options, ParseString, CurrentValue); }
	float GetFloatOption(const FString* Options, const FString* ParseString, float CurrentValue) { return NativeCall<float, const FString*, const FString*, float>(this, "AShooterGameMode.GetFloatOption(FString&,FString&,float)", Options, ParseString, CurrentValue); }
	int GetIntOption(const FString* Options, const FString* ParseString, int CurrentValue) { return NativeCall<int, const FString*, const FString*, int>(this, "AShooterGameMode.GetIntOption(FString&,FString&,int)", Options, ParseString, CurrentValue); }
	static void InitOptions() { NativeCall<void>(nullptr, "AShooterGameMode.InitOptions()"); }
	static __int64 TryGetIntOptionIni() { return NativeCall<__int64>(nullptr, "AShooterGameMode.TryGetIntOptionIni()"); }
	static __int64 TryGetBoolOptionIni() { return NativeCall<__int64>(nullptr, "AShooterGameMode.TryGetBoolOptionIni()"); }
	bool TryGetIntOption(const FString* Section, const FString* Options, const FString* OptionName, int* value) { return NativeCall<bool, const FString*, const FString*, const FString*, int*>(this, "AShooterGameMode.TryGetIntOption(FString&,FString&,FString&,int*)", Section, Options, OptionName, value); }
	bool TryGetBoolOption(const FString* Section, const FString* Options, const FString* OptionName, bool* value) { return NativeCall<bool, const FString*, const FString*, const FString*, bool*>(this, "AShooterGameMode.TryGetBoolOption(FString&,FString&,FString&,bool*)", Section, Options, OptionName, value); }
	bool GetBoolOptionIni(const wchar_t* Section, const wchar_t* OptionName, bool bDefaultValue) { return NativeCall<bool, const wchar_t*, const wchar_t*, bool>(this, "AShooterGameMode.GetBoolOptionIni(wchar_t*,wchar_t*,bool)", Section, OptionName, bDefaultValue); }
	float GetFloatOptionIni(const wchar_t* Section, const wchar_t* OptionName) { return NativeCall<float, const wchar_t*, const wchar_t*>(this, "AShooterGameMode.GetFloatOptionIni(wchar_t*,wchar_t*)", Section, OptionName); }
	int GetIntOptionIni(const wchar_t* Section, const wchar_t* OptionName) { return NativeCall<int, const wchar_t*, const wchar_t*>(this, "AShooterGameMode.GetIntOptionIni(wchar_t*,wchar_t*)", Section, OptionName); }
	bool TryGetIntOptionIni(const wchar_t* Section, const wchar_t* OptionName, int* value) { return NativeCall<bool, const wchar_t*, const wchar_t*, int*>(this, "AShooterGameMode.TryGetIntOptionIni(wchar_t*,wchar_t*,int*)", Section, OptionName, value); }
	bool TryGetBoolOptionIni(const wchar_t* Section, const wchar_t* OptionName, bool* value) { return NativeCall<bool, const wchar_t*, const wchar_t*, bool*>(this, "AShooterGameMode.TryGetBoolOptionIni(wchar_t*,wchar_t*,bool*)", Section, OptionName, value); }
	void SaveWorld(bool bForceSynchronous, bool bForceEvenIfSaveLoadIsDisabled) { NativeCall<void, bool, bool>(this, "AShooterGameMode.SaveWorld(bool,bool)", bForceSynchronous, bForceEvenIfSaveLoadIsDisabled); }
	void ClearSavesAndRestart() { NativeCall<void>(this, "AShooterGameMode.ClearSavesAndRestart()"); }
	bool LoadWorld() { return NativeCall<bool>(this, "AShooterGameMode.LoadWorld()"); }
// TSubclassOf<AGameSession>* GetGameSessionClass(TSubclassOf<AGameSession>* result) { return NativeCall<TSubclassOf<AGameSession> *, TSubclassOf<AGameSession>*>(this, "AShooterGameMode.GetGameSessionClass(TSubclassOf<AGameSession>*)", result); }
	void HandleMatchHasStarted() { NativeCall<void>(this, "AShooterGameMode.HandleMatchHasStarted()"); }
	void RestartPlayer(AController* NewPlayer) { NativeCall<void, AController*>(this, "AShooterGameMode.RestartPlayer(AController*)", NewPlayer); }
	//void EndPlay(const EEndPlayReason::Type EndPlayReason) { NativeCall<void, const EEndPlayReason::Type>(this, "AShooterGameMode.EndPlay(EEndPlayReason::Type)", EndPlayReason); }
	void HandleLeavingMap() { NativeCall<void>(this, "AShooterGameMode.HandleLeavingMap()"); }
	void RequestFinishAndExitToMainMenu() { NativeCall<void>(this, "AShooterGameMode.RequestFinishAndExitToMainMenu()"); }
	void PreLogin(const FString* Options, const FString* Address, const FUniqueNetIdRepl* UniqueId, FString* ErrorMessage) { NativeCall<void, const FString*, const FString*, const FUniqueNetIdRepl*, FString*>(this, "AShooterGameMode.PreLogin(FString&,FString&,FUniqueNetIdRepl*,FString&)", Options, Address, UniqueId, ErrorMessage); }
	static UObjectBase* GetPlayerControllerByUniqueID() { return NativeCall<UObjectBase*>(nullptr, "AShooterGameMode.GetPlayerControllerByUniqueID()"); }
	bool ExtraPreLoginChecksBeforeWelcomePlayer(UNetConnection* Connection) { return NativeCall<bool, UNetConnection*>(this, "AShooterGameMode.ExtraPreLoginChecksBeforeWelcomePlayer(UNetConnection*)", Connection); }
	void PostLogin(APlayerController* NewPlayer) { NativeCall<void, APlayerController*>(this, "AShooterGameMode.PostLogin(APlayerController*)", NewPlayer); }
	FString* GetBanDurationString(FString* result, FTimespan* TimeLeft) { return NativeCall<FString*, FString*, FTimespan*>(this, "AShooterGameMode.GetBanDurationString(FString&,FTimespan*)", result, TimeLeft); }
	//void RemoveLoginLock(const TSharedPtr<FUniqueNetId const, 1>* UniqueNetId) { NativeCall<void, const TSharedPtr<FUniqueNetId const>*>(this, "AShooterGameMode.RemoveLoginLock(TSharedPtr<FUniqueNetId,1>*)", UniqueNetId); }
	//void RemoveConnectedPlayer(const TSharedPtr<FUniqueNetId const, 1>* UniqueNetId) { NativeCall<void, const TSharedPtr<FUniqueNetId const>*>(this, "AShooterGameMode.RemoveConnectedPlayer(TSharedPtr<FUniqueNetId,1>*)", UniqueNetId); }
	void Killed(AController* Killer, AController* KilledPlayer, APawn* KilledPawn, const UDamageType* DamageType) { NativeCall<void, AController*, AController*, APawn*, const UDamageType*>(this, "AShooterGameMode.Killed(AController*,AController*,APawn*,UDamageType*)", Killer, KilledPlayer, KilledPawn, DamageType); }
	UClass* GetDefaultPawnClassForController_Implementation(AController* InController) { return NativeCall<UClass*, AController*>(this, "AShooterGameMode.GetDefaultPawnClassForController_Implementation(AController*)", InController); }
	AActor* ChoosePlayerStart_Implementation(AController* Player) { return NativeCall<AActor*, AController*>(this, "AShooterGameMode.ChoosePlayerStart_Implementation(AController*)", Player); }
	bool IsSpawnpointPreferred(APlayerStart* SpawnPoint, AController* Player) { return NativeCall<bool, APlayerStart*, AController*>(this, "AShooterGameMode.IsSpawnpointPreferred(APlayerStart*,AController*)", SpawnPoint, Player); }
	bool IsFirstPlayerSpawn(APlayerController* NewPlayer) { return NativeCall<bool, APlayerController*>(this, "AShooterGameMode.IsFirstPlayerSpawn(APlayerController*)", NewPlayer); }
	UPrimalPlayerData* GetPlayerData(const FString* PlayerDataID) { return NativeCall<UPrimalPlayerData*, const FString*>(this, "AShooterGameMode.GetPlayerData(FString&)", PlayerDataID); }
	void StartNewPlayer(APlayerController* NewPlayer) { NativeCall<void, APlayerController*>(this, "AShooterGameMode.StartNewPlayer(APlayerController*)", NewPlayer); }
	void StartNewShooterPlayer(APlayerController* NewPlayer, bool bForceCreateNewPlayerData, bool bIsFromLogin, const FPrimalPlayerCharacterConfigStruct* charConfig, UPrimalPlayerData* ArkPlayerData, bool bForceCreateNewTribe) { NativeCall<void, APlayerController*, bool, bool, const FPrimalPlayerCharacterConfigStruct*, UPrimalPlayerData*, bool>(this, "AShooterGameMode.StartNewShooterPlayer(APlayerController*,bool,bool,FPrimalPlayerCharacterConfigStruct*,UPrimalPlayerData*,bool)", NewPlayer, bForceCreateNewPlayerData, bIsFromLogin, charConfig, ArkPlayerData, bForceCreateNewTribe); }
	void HandleTransferCharacterDialogResult(bool bAccept, AShooterPlayerController* NewPlayer) { NativeCall<void, bool, AShooterPlayerController*>(this, "AShooterGameMode.HandleTransferCharacterDialogResult(bool,AShooterPlayerController*)", bAccept, NewPlayer); }
	void OnLogout_Implementation(AController* Exiting) { NativeCall<void, AController*>(this, "AShooterGameMode.OnLogout_Implementation(AController*)", Exiting); }
	void Logout(AController* Exiting) { NativeCall<void, AController*>(this, "AShooterGameMode.Logout(AController*)", Exiting); }
	void SetMessageOfTheDay(const FString* Message, const FString* SetterID) { NativeCall<void, const FString*, const FString*>(this, "AShooterGameMode.SetMessageOfTheDay(FString&,FString&)", Message, SetterID); }
	void ShowMessageOfTheDay() { NativeCall<void>(this, "AShooterGameMode.ShowMessageOfTheDay()"); }
	APawn* SpawnDefaultPawnFor_Implementation(AController* NewPlayer, AActor* StartSpot) { return NativeCall<APawn*, AController*, AActor*>(this, "AShooterGameMode.SpawnDefaultPawnFor_Implementation(AController*,AActor*)", NewPlayer, StartSpot); }
	FPrimalPlayerCharacterConfigStruct* ValidateCharacterConfig(FPrimalPlayerCharacterConfigStruct* result, const FPrimalPlayerCharacterConfigStruct* charConfig) { return NativeCall<FPrimalPlayerCharacterConfigStruct*, FPrimalPlayerCharacterConfigStruct*, const FPrimalPlayerCharacterConfigStruct*>(this, "AShooterGameMode.ValidateCharacterConfig(FPrimalPlayerCharacterConfigStruct*,FPrimalPlayerCharacterConfigStruct*)", result, charConfig); }
	FString* GenerateProfileFileName(FString* result, const FUniqueNetIdRepl* UniqueId, const FString* NetworkAddress, const FString* PlayerName) { return NativeCall<FString*, FString*, const FUniqueNetIdRepl*, const FString*, const FString*>(this, "AShooterGameMode.GenerateProfileFileName(FString&,FUniqueNetIdRepl*,FString&,FString&)", result, UniqueId, NetworkAddress, PlayerName); }
	UPrimalPlayerData* LoadPlayerData(AShooterPlayerState* PlayerState, bool bIsLoadingBackup) { return NativeCall<UPrimalPlayerData*, AShooterPlayerState*, bool>(this, "AShooterGameMode.LoadPlayerData(AShooterPlayerState*,bool)", PlayerState, bIsLoadingBackup); }
	void DeletePlayerData(AShooterPlayerState* PlayerState) { NativeCall<void, AShooterPlayerState*>(this, "AShooterGameMode.DeletePlayerData(AShooterPlayerState*)", PlayerState); }
	TSharedPtr<FWriteFileTaskInfo>* SavePlayerData(TSharedPtr<FWriteFileTaskInfo>* result, UPrimalPlayerData* PlayerData, bool bSaveBackup) { return NativeCall<TSharedPtr<FWriteFileTaskInfo> *, TSharedPtr<FWriteFileTaskInfo>*, UPrimalPlayerData*, bool>(this, "AShooterGameMode.SavePlayerData(TSharedPtr<FWriteFileTaskInfo,1>*,UPrimalPlayerData*,bool)", result, PlayerData, bSaveBackup); }
	TSharedPtr<FWriteFileTaskInfo>* SaveTribeData(TSharedPtr<FWriteFileTaskInfo>* result, const FTribeData* TribeData, bool bCanDeferToTick) { return NativeCall<TSharedPtr<FWriteFileTaskInfo> *, TSharedPtr<FWriteFileTaskInfo>*, const FTribeData*, bool>(this, "AShooterGameMode.SaveTribeData(TSharedPtr<FWriteFileTaskInfo,1>*,FTribeData*,bool)", result, TribeData, bCanDeferToTick); }
	bool GetOrLoadTribeData(int TribeID, FTribeData* LoadedTribeData, ETribeDataExclude ExcludeFilter) { return NativeCall<bool, int, FTribeData*, ETribeDataExclude>(this, "AShooterGameMode.GetOrLoadTribeData(int,FTribeData&,ETribeDataExclude)", TribeID, LoadedTribeData, ExcludeFilter); }
	bool LoadTribeData(int TribeID, FTribeData* LoadedTribeData, bool bIsLoadingBackup, bool bDontCheckDirtyTribeWar, ETribeDataExclude ExcludeFilter) { return NativeCall<bool, int, FTribeData*, bool, bool, ETribeDataExclude>(this, "AShooterGameMode.LoadTribeData(int,FTribeData&,bool,bool,ETribeDataExclude)", TribeID, LoadedTribeData, bIsLoadingBackup, bDontCheckDirtyTribeWar, ExcludeFilter); }
	UPrimalPlayerData* GetPlayerDataFor(AShooterPlayerController* PC, bool* bCreatedNewPlayerData, bool bForceCreateNewPlayerData, const FPrimalPlayerCharacterConfigStruct* charConfig, bool bAutoCreateNewData, bool bDontSaveNewData) { return NativeCall<UPrimalPlayerData*, AShooterPlayerController*, bool*, bool, const FPrimalPlayerCharacterConfigStruct*, bool, bool>(this, "AShooterGameMode.GetPlayerDataFor(AShooterPlayerController*,bool*,bool,FPrimalPlayerCharacterConfigStruct*,bool,bool)", PC, bCreatedNewPlayerData, bForceCreateNewPlayerData, charConfig, bAutoCreateNewData, bDontSaveNewData); }
	void OnHarvestingComponentHidden(FAttachedInstancedHarvestingElement* component) { NativeCall<void, FAttachedInstancedHarvestingElement*>(this, "AShooterGameMode.OnHarvestingComponentHidden(FAttachedInstancedHarvestingElement*)", component); }
	void ServerConstructedFoliageHiddenAttachedComponent(FAttachedInstanced* aComponent) { NativeCall<void, FAttachedInstanced*>(this, "AShooterGameMode.ServerConstructedFoliageHiddenAttachedComponent(FAttachedInstanced*)", aComponent); }
	static void ForceRepopulateFoliageAtPoint() { NativeCall<void>(nullptr, "AShooterGameMode.ForceRepopulateFoliageAtPoint()"); }
	static void ForceRepopulateAllHarvestElements() { NativeCall<void>(nullptr, "AShooterGameMode.ForceRepopulateAllHarvestElements()"); }
	void TickLoginLocks() { NativeCall<void>(this, "AShooterGameMode.TickLoginLocks()"); }
	bool IsLoginLockDisabled() { return NativeCall<bool>(this, "AShooterGameMode.IsLoginLockDisabled()"); }
	void CheckGlobalEnables() { NativeCall<void>(this, "AShooterGameMode.CheckGlobalEnables()"); }
	static void HttpCheckGlobalEnablesComplete() { NativeCall<void>(nullptr, "AShooterGameMode.HttpCheckGlobalEnablesComplete()"); }
	void ExecuteCommand(const FString* command) { NativeCall<void, const FString*>(this, "AShooterGameMode.ExecuteCommand(FString&)", command); }
	void OutputThreadProc() { NativeCall<void>(this, "AShooterGameMode.OutputThreadProc()"); }
	bool CreatePipes() { return NativeCall<bool>(this, "AShooterGameMode.CreatePipes()"); }
	void Tick(float DeltaSeconds) { NativeCall<void, float>(this, "AShooterGameMode.Tick(float)", DeltaSeconds); }
	static void HttpGetCheaterListComplete() { NativeCall<void>(nullptr, "AShooterGameMode.HttpGetCheaterListComplete()"); }
	static void HttpGetBanListComplete() { NativeCall<void>(nullptr, "AShooterGameMode.HttpGetBanListComplete()"); }
	void UpdateBanCheaterList(float DeltaSeconds) { NativeCall<void, float>(this, "AShooterGameMode.UpdateBanCheaterList(float)", DeltaSeconds); }
	void UpdateUnofficialBanCheaterList(float DeltaSeconds) { NativeCall<void, float>(this, "AShooterGameMode.UpdateUnofficialBanCheaterList(float)", DeltaSeconds); }
	//bool IsTimeSinceMissionDeactivated(TSubclassOf<AMissionType> MissionType, float CheckTimeSince, bool bForceTrueAtZeroTime) { return NativeCall<bool, TSubclassOf<AMissionType>, float, bool>(this, "AShooterGameMode.IsTimeSinceMissionDeactivated(TSubclassOf<AMissionType>,float,bool)", MissionType, CheckTimeSince, bForceTrueAtZeroTime); }
	//void SetLastMissionDeactivatedUtcTime(TSubclassOf<AMissionType> MissionType, long double UtcTime) { NativeCall<void, TSubclassOf<AMissionType>, long double>(this, "AShooterGameMode.SetLastMissionDeactivatedUtcTime(TSubclassOf<AMissionType>,longdouble)", MissionType, UtcTime); }
	static unsigned __int64 AddNewTribe() { return NativeCall<unsigned __int64>(nullptr, "AShooterGameMode.AddNewTribe()"); }
	void RemoveTribe(unsigned __int64 TribeID) { NativeCall<void, unsigned __int64>(this, "AShooterGameMode.RemoveTribe(unsigned__int64)", TribeID); }
	static void UpdateTribeData() { NativeCall<void>(nullptr, "AShooterGameMode.UpdateTribeData()"); }
	void RemovePlayerFromTribe(unsigned __int64 TribeID, unsigned __int64 PlayerDataID, bool bDontUpdatePlayerState) { NativeCall<void, unsigned __int64, unsigned __int64, bool>(this, "AShooterGameMode.RemovePlayerFromTribe(unsigned__int64,unsigned__int64,bool)", TribeID, PlayerDataID, bDontUpdatePlayerState); }
	const FTribeData* GetTribeData(const FTribeData* result, unsigned __int64 TribeID) { return NativeCall<const FTribeData*, const FTribeData*, unsigned __int64>(this, "AShooterGameMode.GetTribeData(unsigned__int64)", result, TribeID); }
	void InitializeDatabaseRefs() { NativeCall<void>(this, "AShooterGameMode.InitializeDatabaseRefs()"); }
	void BeginPlay() { NativeCall<void>(this, "AShooterGameMode.BeginPlay()"); }
	void DoMaintenanceRestartWarning() { NativeCall<void>(this, "AShooterGameMode.DoMaintenanceRestartWarning()"); }
	void DoMaintenanceRestart() { NativeCall<void>(this, "AShooterGameMode.DoMaintenanceRestart()"); }
	static void AdminExit() { NativeCall<void>(nullptr, "AShooterGameMode.AdminExit()"); }
	void OnLandscapeLevelLoaded() { NativeCall<void>(this, "AShooterGameMode.OnLandscapeLevelLoaded()"); }
	void DoNPCZoneManagerLandscapeChangeFixups() { NativeCall<void>(this, "AShooterGameMode.DoNPCZoneManagerLandscapeChangeFixups()"); }
	void Serialize(FArchive* Ar) { NativeCall<void, FArchive*>(this, "AShooterGameMode.Serialize(FArchive*)", Ar); }
	FLeaderboardEntry* GetOrCreateLeaderboardEntry(FName MissionTag) { return NativeCall<FLeaderboardEntry*, FName>(this, "AShooterGameMode.GetOrCreateLeaderboardEntry(FName)", MissionTag); }
	//void GetActorSaveGameTypes(//TArray<TSubclassOf<AActor>, TSizedDefaultAllocator<32> >* saveGameTypes) { NativeCall<void, //TArray<TSubclassOf<AActor>, TSizedDefaultAllocator<32> >*>(this, "AShooterGameMode.GetActorSaveGameTypes(//TArray<TSubclassOf<AActor>,TSizedDefaultAllocator<32>>*)", saveGameTypes); }
	FString* InitNewPlayer(FString* result, APlayerController* NewPlayerController, const FUniqueNetIdRepl* UniqueId, const FString* Options, const FString* Portal) { return NativeCall<FString*, FString*, APlayerController*, const FUniqueNetIdRepl*, const FString*, const FString*>(this, "AShooterGameMode.InitNewPlayer(FString&,APlayerController*,FUniqueNetIdRepl*,FString&,FString&)", result, NewPlayerController, UniqueId, Options, Portal); }
	void SendServerDirectMessage(FString* PlayerSteamID, FString* MessageText, FLinearColor MessageColor, bool bIsBold, int ReceiverTeamId, int ReceiverPlayerID, FString* PlayerName, FString* SenderId) { NativeCall<void, FString*, FString*, FLinearColor, bool, int, int, FString*, FString*>(this, "AShooterGameMode.SendServerDirectMessage(FString&,FString&,FLinearColor,bool,int,int,FString&,FString&)", PlayerSteamID, MessageText, MessageColor, bIsBold, ReceiverTeamId, ReceiverPlayerID, PlayerName, SenderId); }
	void SendServerChatMessage(FString* MessageText, FLinearColor MessageColor, bool bIsBold, int ReceiverTeamId, int ReceiverPlayerID, FString SenderID) { NativeCall<void, FString*, FLinearColor, bool, int, int, FString>(this, "AShooterGameMode.SendServerChatMessage(FString&,FLinearColor,bool,int,int,FString)", MessageText, MessageColor, bIsBold, ReceiverTeamId, ReceiverPlayerID, SenderID); }
	void SendServerNotification(FString* MessageText, FLinearColor MessageColor, float DisplayScale, float DisplayTime, UTexture2D* MessageIcon, USoundBase* SoundToPlay, int ReceiverTeamId, int ReceiverPlayerID, bool bDoBillboard) { NativeCall<void, FString*, FLinearColor, float, float, UTexture2D*, USoundBase*, int, int, bool>(this, "AShooterGameMode.SendServerNotification(FString&,FLinearColor,float,float,UTexture2D*,USoundBase*,int,int,bool)", MessageText, MessageColor, DisplayScale, DisplayTime, MessageIcon, SoundToPlay, ReceiverTeamId, ReceiverPlayerID, bDoBillboard); }
	void InitGameState() { NativeCall<void>(this, "AShooterGameMode.InitGameState()"); }
	void PreInitializeComponents() { NativeCall<void>(this, "AShooterGameMode.PreInitializeComponents()"); }
	void CheckIsOfficialServer() { NativeCall<void>(this, "AShooterGameMode.CheckIsOfficialServer()"); }
	void BeginUnloadingWorld() { NativeCall<void>(this, "AShooterGameMode.BeginUnloadingWorld()"); }
	bool DumpAssetProperties(const FString* Asset, FString* OutFilename) { return NativeCall<bool, const FString*, FString*>(this, "AShooterGameMode.DumpAssetProperties(FString&,FString&)", Asset, OutFilename); }
	void GetDynamicConfig() { NativeCall<void>(this, "AShooterGameMode.GetDynamicConfig()"); }
	static void HttpGetDynamicConfigComplete() { NativeCall<void>(nullptr, "AShooterGameMode.HttpGetDynamicConfigComplete()"); }
	static void HttpGetLiveTuningOverloadsComplete() { NativeCall<void>(nullptr, "AShooterGameMode.HttpGetLiveTuningOverloadsComplete()"); }
	static void PostAlarmNotification() { NativeCall<void>(nullptr, "AShooterGameMode.PostAlarmNotification()"); }
	void PostServerMetrics() { NativeCall<void>(this, "AShooterGameMode.PostServerMetrics()"); }
	void AddTrackedAdminCommand(APlayerController* Controller, const FString* CommandType, const FString* Command) { NativeCall<void, APlayerController*, const FString*, const FString*>(this, "AShooterGameMode.AddTrackedAdminCommand(APlayerController*,FString&,FString&)", Controller, CommandType, Command); }
	void PostAdminTrackedCommands() { NativeCall<void>(this, "AShooterGameMode.PostAdminTrackedCommands()"); }
	void LoadPlayersJoinNoCheckList() { NativeCall<void>(this, "AShooterGameMode.LoadPlayersJoinNoCheckList()"); }
	bool IsPlayerControllerAllowedToJoinNoCheck(AShooterPlayerController* ForPlayer) { return NativeCall<bool, AShooterPlayerController*>(this, "AShooterGameMode.IsPlayerControllerAllowedToJoinNoCheck(AShooterPlayerController*)", ForPlayer); }
	bool IsPlayerControllerAllowedToExclusiveJoin(AShooterPlayerController* ForPlayer) { return NativeCall<bool, AShooterPlayerController*>(this, "AShooterGameMode.IsPlayerControllerAllowedToExclusiveJoin(AShooterPlayerController*)", ForPlayer); }
	static bool KickPlayer() { return NativeCall<bool>(nullptr, "AShooterGameMode.KickPlayer()"); }
	void KickPlayerController(APlayerController* thePC, const FString* KickMessage) { NativeCall<void, APlayerController*, const FString*>(this, "AShooterGameMode.KickPlayerController(APlayerController*,FString&)", thePC, KickMessage); }
	static __int64 BanPlayer() { return NativeCall<__int64>(nullptr, "AShooterGameMode.BanPlayer()"); }
	static char UnbanPlayer() { return NativeCall<char>(nullptr, "AShooterGameMode.UnbanPlayer()"); }
	void SaveBannedList() { NativeCall<void>(this, "AShooterGameMode.SaveBannedList()"); }
	void LoadBannedList() { NativeCall<void>(this, "AShooterGameMode.LoadBannedList()"); }
	void LoadBanListFromString(FString* FileString, bool GlobalList) { NativeCall<void, FString*, bool>(this, "AShooterGameMode.LoadBanListFromString(FString&,bool)", FileString, GlobalList); }
	//FString* GetSaveDirectoryName(FString* result, ESaveType::Type SaveType, bool RemoveSavedArksDir) { return NativeCall<FString*, FString*, ESaveType::Type, bool>(this, "AShooterGameMode.GetSaveDirectoryName(FString&,ESaveType::Type,bool)", result, SaveType, RemoveSavedArksDir); }
	static FString* GeneratePGMapFolderName() { return NativeCall<FString*>(nullptr, "AShooterGameMode.GeneratePGMapFolderName()"); }
	FString* GetMapName(FString* result) { return NativeCall<FString*, FString*>(this, "AShooterGameMode.GetMapName()", result); }
	void UpdateSaveBackupFiles() { NativeCall<void>(this, "AShooterGameMode.UpdateSaveBackupFiles()"); }
	void LoadTribeIds_Process(unsigned int theTribeID) { NativeCall<void, unsigned int>(this, "AShooterGameMode.LoadTribeIds_Process(unsignedint)", theTribeID); }
	void LoadTribeIds() { NativeCall<void>(this, "AShooterGameMode.LoadTribeIds()"); }
	void LoadPlayerIds_Process(unsigned __int64 InPlayerID, TArray<unsigned char, TSizedDefaultAllocator<32> >* ReadBytes) { NativeCall<void, unsigned __int64, TArray<unsigned char, TSizedDefaultAllocator<32> >*>(this, "AShooterGameMode.LoadPlayerIds_Process(unsigned__int64,TArray<unsignedchar,TSizedDefaultAllocator<32>>*)", InPlayerID, ReadBytes); }
	void LoadPlayerDataIds() { NativeCall<void>(this, "AShooterGameMode.LoadPlayerDataIds()"); }
	void AddPlayerID(int playerDataID, FString* netUniqueString, bool bForce) { NativeCall<void, int, FString*, bool>(this, "AShooterGameMode.AddPlayerID(int,FString,bool)", playerDataID, netUniqueString, bForce); }
	unsigned __int64 GetSteamIDForPlayerID(int playerDataID) { return NativeCall<unsigned __int64, int>(this, "AShooterGameMode.GetSteamIDForPlayerID(int)", playerDataID); }
	FString* GetSteamIDStringForPlayerID(FString* result, int playerDataID) { return NativeCall<FString*, FString*, int>(this, "AShooterGameMode.GetSteamIDStringForPlayerID(int)", result, playerDataID); }
	int GetPlayerIDForSteamID(unsigned __int64 steamID) { return NativeCall<int, unsigned __int64>(this, "AShooterGameMode.GetPlayerIDForSteamID(unsigned__int64)", steamID); }
	unsigned int GenerateTribeId() { return NativeCall<unsigned int>(this, "AShooterGameMode.GenerateTribeId()"); }
	static __int64 GeneratePlayerDataId() { return NativeCall<__int64>(nullptr, "AShooterGameMode.GeneratePlayerDataId()"); }
	//float GetHarvestResourceItemAmountMultiplier(TSubclassOf<UPrimalItem> HarvestItemClass) { return NativeCall<float, TSubclassOf<UPrimalItem>>(this, "AShooterGameMode.GetHarvestResourceItemAmountMultiplier(TSubclassOf<UPrimalItem>)", HarvestItemClass); }
	float GetDinoDamageMultiplier(APrimalDinoCharacter* ForDino) { return NativeCall<float, APrimalDinoCharacter*>(this, "AShooterGameMode.GetDinoDamageMultiplier(APrimalDinoCharacter*)", ForDino); }
	float GetDinoResistanceMultiplier(APrimalDinoCharacter* ForDino) { return NativeCall<float, APrimalDinoCharacter*>(this, "AShooterGameMode.GetDinoResistanceMultiplier(APrimalDinoCharacter*)", ForDino); }
	//bool IsEngramClassHidden(TSubclassOf<UPrimalItem> ForItemClass) { return NativeCall<bool, TSubclassOf<UPrimalItem>>(this, "AShooterGameMode.IsEngramClassHidden(TSubclassOf<UPrimalItem>)", ForItemClass); }
	static FString* ValidateTribeName() { return NativeCall<FString*>(nullptr, "AShooterGameMode.ValidateTribeName()"); }
	void AdjustDamage(AActor* Victim, float* Damage, const FDamageEvent* DamageEvent, AController* EventInstigator, AActor* DamageCauser) { NativeCall<void, AActor*, float*, const FDamageEvent*, AController*, AActor*>(this, "AShooterGameMode.AdjustDamage(AActor*,float*,FDamageEvent*,AController*,AActor*)", Victim, Damage, DamageEvent, EventInstigator, DamageCauser); }
	void NotifyDamage(AActor* Victim, float DamageAmount, const FDamageEvent* Event, AController* EventInstigator, AActor* DamageCauser) { NativeCall<void, AActor*, float, const FDamageEvent*, AController*, AActor*>(this, "AShooterGameMode.NotifyDamage(AActor*,float,FDamageEvent*,AController*,AActor*)", Victim, DamageAmount, Event, EventInstigator, DamageCauser); }
	void DamageEventLogFlush() { NativeCall<void>(this, "AShooterGameMode.DamageEventLogFlush()"); }
	void SetDamageEventLoggingEnabled(bool bEnabled) { NativeCall<void, bool>(this, "AShooterGameMode.SetDamageEventLoggingEnabled(bool)", bEnabled); }
	bool AllowRenameTribe(AShooterPlayerState* ForPlayerState, const FString* TribeName) { return NativeCall<bool, AShooterPlayerState*, const FString*>(this, "AShooterGameMode.AllowRenameTribe(AShooterPlayerState*,FString&)", ForPlayerState, TribeName); }
	void SetTimeOfDay(const FString* timeString) { NativeCall<void, const FString*>(this, "AShooterGameMode.SetTimeOfDay(FString&)", timeString); }
	void SerializeForSaveFile(int SaveVersion, FArchive* InArchive, bool bDataStoresAreSerialized) { NativeCall<void, int, FArchive*, bool>(this, "AShooterGameMode.SerializeForSaveFile(int,FArchive*,bool)", SaveVersion, InArchive, bDataStoresAreSerialized); }
	bool PlayerCanRestart_Implementation(APlayerController* Player) { return NativeCall<bool, APlayerController*>(this, "AShooterGameMode.PlayerCanRestart_Implementation(APlayerController*)", Player); }
	bool HandleNewPlayer_Implementation(AShooterPlayerController* NewPlayer, UPrimalPlayerData* PlayerData, AShooterCharacter* PlayerCharacter, bool bIsFromLogin) { return NativeCall<bool, AShooterPlayerController*, UPrimalPlayerData*, AShooterCharacter*, bool>(this, "AShooterGameMode.HandleNewPlayer_Implementation(AShooterPlayerController*,UPrimalPlayerData*,AShooterCharacter*,bool)", NewPlayer, PlayerData, PlayerCharacter, bIsFromLogin); }
	bool IsPlayerAllowedToCheat(AShooterPlayerController* ForPlayer) { return NativeCall<bool, AShooterPlayerController*>(this, "AShooterGameMode.IsPlayerAllowedToCheat(AShooterPlayerController*)", ForPlayer); }
	void PrintToGameplayLog(const FString* InString) { NativeCall<void, const FString*>(this, "AShooterGameMode.PrintToGameplayLog(FString&)", InString); }
	void PrintToServerGameLog(const FString* InString, bool bSendChatToAllAdmins) { NativeCall<void, const FString*, bool>(this, "AShooterGameMode.PrintToServerGameLog(FString&,bool)", InString, bSendChatToAllAdmins); }
	//void OnDeserializedByGame(EOnDeserializationType::Type DeserializationType) { NativeCall<void, EOnDeserializationType::Type>(this, "AShooterGameMode.OnDeserializedByGame(EOnDeserializationType::Type)", DeserializationType); }
	void RemoveInactivePlayersAndTribes() { NativeCall<void>(this, "AShooterGameMode.RemoveInactivePlayersAndTribes()"); }
	FString* GetSessionTimeString_Implementation(FString* result) { return NativeCall<FString*, FString*>(this, "AShooterGameMode.GetSessionTimeString_Implementation(FString&)", result); }
	bool IsTribeWar(int TribeID1, int TribeID2) { return NativeCall<bool, int, int>(this, "AShooterGameMode.IsTribeWar(int,int)", TribeID1, TribeID2); }
	void UpdateTribeWars() { NativeCall<void>(this, "AShooterGameMode.UpdateTribeWars()"); }
	void AddToTribeLog(int TribeId, const FString* NewLog) { NativeCall<void, int, const FString*>(this, "AShooterGameMode.AddToTribeLog(int,FString&)", TribeId, NewLog); }
	//TArray<APrimalDinoCharacter*, TSizedDefaultAllocator<32> >* GetOverlappingDinoCharactersOfTeamAndClass(TArray<APrimalDinoCharacter*, TSizedDefaultAllocator<32> >* result, const UE::Math::TVector<double>* AtLocation, float OverlapRange, TSubclassOf<APrimalDinoCharacter> DinoClass, int DinoTeam, bool bExactClassMatch, bool bIgnoreClass) { return NativeCall<TArray<APrimalDinoCharacter*, TSizedDefaultAllocator<32> >*, TArray<APrimalDinoCharacter*, TSizedDefaultAllocator<32> >*, const UE::Math::TVector<double>*, float, TSubclassOf<APrimalDinoCharacter>, int, bool, bool>(this, "AShooterGameMode.GetOverlappingDinoCharactersOfTeamAndClass(TArray<APrimalDinoCharacter*,TSizedDefaultAllocator<32>>*,UE::Math::TVector<double>*,float,TSubclassOf<APrimalDinoCharacter>,int,bool,bool)", result, AtLocation, OverlapRange, DinoClass, DinoTeam, bExactClassMatch, bIgnoreClass); }
	//int CountOverlappingDinoCharactersOfTeamAndClass(const UE::Math::TVector<double>* AtLocation, float OverlapRange, TSubclassOf<APrimalDinoCharacter> DinoClass, int DinoTeam, bool bExactClassMatch, bool bIgnoreClass) { return NativeCall<int, const UE::Math::TVector<double>*, float, TSubclassOf<APrimalDinoCharacter>, int, bool, bool>(this, "AShooterGameMode.CountOverlappingDinoCharactersOfTeamAndClass(UE::Math::TVector<double>*,float,TSubclassOf<APrimalDinoCharacter>,int,bool,bool)", AtLocation, OverlapRange, DinoClass, DinoTeam, bExactClassMatch, bIgnoreClass); }
	void IncrementNumDinos(int ForTeam, int ByAmount) { NativeCall<void, int, int>(this, "AShooterGameMode.IncrementNumDinos(int,int)", ForTeam, ByAmount); }
	int GetNumDinosOnTeam(int OnTeam) { return NativeCall<int, int>(this, "AShooterGameMode.GetNumDinosOnTeam(int)", OnTeam); }
	bool AllowTaming(int ForTeam) { return NativeCall<bool, int>(this, "AShooterGameMode.AllowTaming(int)", ForTeam); }
	int GetNumberOfLivePlayersOnTribe(const FString* TribeName) { return NativeCall<int, const FString*>(this, "AShooterGameMode.GetNumberOfLivePlayersOnTribe(FString&)", TribeName); }
	void UpdateTribeAllianceData(FTribeAlliance* TribeAllianceData, TArray<unsigned int, TSizedDefaultAllocator<32> >* OldMembersArray, bool bIsAdd) { NativeCall<void, FTribeAlliance*, TArray<unsigned int, TSizedDefaultAllocator<32> >*, bool>(this, "AShooterGameMode.UpdateTribeAllianceData(FTribeAlliance*,TArray<unsignedint,TSizedDefaultAllocator<32>>*,bool)", TribeAllianceData, OldMembersArray, bIsAdd); }
	bool AreTribesAllied(int TribeID1, int TribeID2) { return NativeCall<bool, int, int>(this, "AShooterGameMode.AreTribesAllied(int,int)", TribeID1, TribeID2); }
	void AddTribeWar(int MyTribeID, int EnemyTeamID, int StartDayNum, int EndDayNumber, float WarStartTime, float WarEndTime, bool bForceApprove) { NativeCall<void, int, int, int, int, float, float, bool>(this, "AShooterGameMode.AddTribeWar(int,int,int,int,float,float,bool)", MyTribeID, EnemyTeamID, StartDayNum, EndDayNumber, WarStartTime, WarEndTime, bForceApprove); }
	static void PostAlarmNotificationTribe() { NativeCall<void>(nullptr, "AShooterGameMode.PostAlarmNotificationTribe()"); }
	void SpawnedPawnFor(AController* PC, APawn* SpawnedPawn) { NativeCall<void, AController*, APawn*>(this, "AShooterGameMode.SpawnedPawnFor(AController*,APawn*)", PC, SpawnedPawn); }
	void SaveTributePlayerDatas(const FUniqueNetId* UniqueID) { NativeCall<void, const FUniqueNetId*>(this, "AShooterGameMode.SaveTributePlayerDatas(FUniqueNetId*)", UniqueID); }
	void LoadTributePlayerDatas(const FUniqueNetId* UniqueID) { NativeCall<void, const FUniqueNetId*>(this, "AShooterGameMode.LoadTributePlayerDatas(FUniqueNetId*)", UniqueID); }
	void DownloadTransferredPlayer(AShooterPlayerController* NewPlayer) { NativeCall<void, AShooterPlayerController*>(this, "AShooterGameMode.DownloadTransferredPlayer(AShooterPlayerController*)", NewPlayer); }
	void CheckForDupedDinos() { NativeCall<void>(this, "AShooterGameMode.CheckForDupedDinos()"); }
	void LogFailedWaterDinoSpawn(AActor* FailedSpawned) { NativeCall<void, AActor*>(this, "AShooterGameMode.LogFailedWaterDinoSpawn(AActor*)", FailedSpawned); }
	static void ArkMetricsAppend() { NativeCall<void>(nullptr, "AShooterGameMode.ArkMetricsAppend()"); }
	void FlushPrimalStats(AShooterPlayerController* ForPC) { NativeCall<void, AShooterPlayerController*>(this, "AShooterGameMode.FlushPrimalStats(AShooterPlayerController*)", ForPC); }
	void ReassertColorization() { NativeCall<void>(this, "AShooterGameMode.ReassertColorization()"); }
	void SendAllCachedArkMetrics() { NativeCall<void>(this, "AShooterGameMode.SendAllCachedArkMetrics()"); }
	static void HttpSendAllCachedArkMetricsRequestComplete() { NativeCall<void>(nullptr, "AShooterGameMode.HttpSendAllCachedArkMetricsRequestComplete()"); }
	FString* GetServerName(FString* result, bool bNumbersAndLettersOnly) { return NativeCall<FString*, FString*, bool>(this, "AShooterGameMode.GetServerName(FString&,bool)", result, bNumbersAndLettersOnly); }
	void ChatLogAppend(AShooterPlayerController* SenderController, const FPrimalChatMessage* Msg) { NativeCall<void, AShooterPlayerController*, const FPrimalChatMessage*>(this, "AShooterGameMode.ChatLogAppend(AShooterPlayerController*,FPrimalChatMessage*)", SenderController, Msg); }
	void ChatLogFlush(bool bFinalize) { NativeCall<void, bool>(this, "AShooterGameMode.ChatLogFlush(bool)", bFinalize); }
	bool BPIsSpawnpointAllowed_Implementation(APlayerStart* SpawnPoint, AController* Player) { return NativeCall<bool, APlayerStart*, AController*>(this, "AShooterGameMode.BPIsSpawnpointAllowed_Implementation(APlayerStart*,AController*)", SpawnPoint, Player); }
	bool BPIsSpawnpointPreferred_Implementation(APlayerStart* SpawnPoint, AController* Player) { return NativeCall<bool, APlayerStart*, AController*>(this, "AShooterGameMode.BPIsSpawnpointPreferred_Implementation(APlayerStart*,AController*)", SpawnPoint, Player); }
	void ListAllPlayers(FString* Message) { NativeCall<void, FString*>(this, "AShooterGameMode.ListAllPlayers(FString&)", Message); }
	AOceanDinoManager* GetOceanDinoManager() { return NativeCall<AOceanDinoManager*>(this, "AShooterGameMode.GetOceanDinoManager()"); }
	void ReloadAdminIPs() { NativeCall<void>(this, "AShooterGameMode.ReloadAdminIPs()"); }
	void ActorStasised(AActor* theActor) { NativeCall<void, AActor*>(this, "AShooterGameMode.ActorStasised(AActor*)", theActor); }
	void ActorDestroyed(AActor* theActor) { NativeCall<void, AActor*>(this, "AShooterGameMode.ActorDestroyed(AActor*)", theActor); }
	void ActorUnstasised(AActor* theActor) { NativeCall<void, AActor*>(this, "AShooterGameMode.ActorUnstasised(AActor*)", theActor); }
	bool HasOption(const FString* Options, const FString* InKey) { return NativeCall<bool, const FString*, const FString*>(this, "AShooterGameMode.HasOption(FString&,FString&)", Options, InKey); }
	static void PrintHibernatingDino() { NativeCall<void>(nullptr, "AShooterGameMode.PrintHibernatingDino()"); }
	void ResyncZoneVolumesWithHibernationManager(UWorld* World) { NativeCall<void, UWorld*>(this, "AShooterGameMode.ResyncZoneVolumesWithHibernationManager(UWorld*)", World); }
	void TickAutoWaterRefreshCrop() { NativeCall<void>(this, "AShooterGameMode.TickAutoWaterRefreshCrop()"); }
	void CleanupActiveEventItems(FName OldEventToCleanup) { NativeCall<void, FName>(this, "AShooterGameMode.CleanupActiveEventItems(FName)", OldEventToCleanup); }
	void RemoveEventItemsFromInventory(UPrimalInventoryComponent* TheInventory, FName OldEventToCleanup) { NativeCall<void, UPrimalInventoryComponent*, FName>(this, "AShooterGameMode.RemoveEventItemsFromInventory(UPrimalInventoryComponent*,FName)", TheInventory, OldEventToCleanup); }
	static TArray<UPrimalItem*, TSizedDefaultAllocator<32> >* GetItemsOfTypesInInventory() { return NativeCall<TArray<UPrimalItem*, TSizedDefaultAllocator<32> >*>(nullptr, "AShooterGameMode.GetItemsOfTypesInInventory()"); }
	void RemoveEventDinosFromWorld(FName OldEventToCleanup) { NativeCall<void, FName>(this, "AShooterGameMode.RemoveEventDinosFromWorld(FName)", OldEventToCleanup); }
	static TArray<APrimalDinoCharacter*, TSizedDefaultAllocator<32> >* GetDinosOfClasses() { return NativeCall<TArray<APrimalDinoCharacter*, TSizedDefaultAllocator<32> >*>(nullptr, "AShooterGameMode.GetDinosOfClasses()"); }
	void RemoveEventStructuresFromWorld(FName OldEventToCleanup) { NativeCall<void, FName>(this, "AShooterGameMode.RemoveEventStructuresFromWorld(FName)", OldEventToCleanup); }
	static TArray<APrimalStructure*, TSizedDefaultAllocator<32> >* GetStructuresOfClasses() { return NativeCall<TArray<APrimalStructure*, TSizedDefaultAllocator<32> >*>(nullptr, "AShooterGameMode.GetStructuresOfClasses()"); }
	void FixupEventInventories() { NativeCall<void>(this, "AShooterGameMode.FixupEventInventories()"); }
	void GameWelcomePlayer(UNetConnection* Connection, FString* RedirectURL) { NativeCall<void, UNetConnection*, FString*>(this, "AShooterGameMode.GameWelcomePlayer(UNetConnection*,FString&)", Connection, RedirectURL); }
	void SendChatMessage(const FPrimalChatMessage* Message) { NativeCall<void, const FPrimalChatMessage*>(this, "AShooterGameMode.SendChatMessage(FPrimalChatMessage*)", Message); }
	void RequestUpdateCachedTeamTameList(AShooterPlayerController* RequestingPlayer) { NativeCall<void, AShooterPlayerController*>(this, "AShooterGameMode.RequestUpdateCachedTeamTameList(AShooterPlayerController*)", RequestingPlayer); }
	void RequestPlayerRecieveKnownCachedTeamTameList(AShooterPlayerController* RequestingPlayer) { NativeCall<void, AShooterPlayerController*>(this, "AShooterGameMode.RequestPlayerRecieveKnownCachedTeamTameList(AShooterPlayerController*)", RequestingPlayer); }
	bool IsCachedTeamTameListOutOfDate(AShooterPlayerController* RequestingPlayer) { return NativeCall<bool, AShooterPlayerController*>(this, "AShooterGameMode.IsCachedTeamTameListOutOfDate(AShooterPlayerController*)", RequestingPlayer); }
	void AddPlayerToBeNotifiedWhenCachedTeamTameListIsUpdated(AShooterPlayerController* RequestingPlayer) { NativeCall<void, AShooterPlayerController*>(this, "AShooterGameMode.AddPlayerToBeNotifiedWhenCachedTeamTameListIsUpdated(AShooterPlayerController*)", RequestingPlayer); }
	void QueueUpTeamForItsCachedTeamTameListToBeUpdated(AShooterPlayerController* RequestingPlayer) { NativeCall<void, AShooterPlayerController*>(this, "AShooterGameMode.QueueUpTeamForItsCachedTeamTameListToBeUpdated(AShooterPlayerController*)", RequestingPlayer); }
	void StartIntervalUpdatingCachedTeamTameLists(AShooterPlayerController* RequestingPlayer) { NativeCall<void, AShooterPlayerController*>(this, "AShooterGameMode.StartIntervalUpdatingCachedTeamTameLists(AShooterPlayerController*)", RequestingPlayer); }
	void UpdateCachedTeamTameLists_OnInterval() { NativeCall<void>(this, "AShooterGameMode.UpdateCachedTeamTameLists_OnInterval()"); }
	void SortCurrentlyEvaluatedTameIntoAppropriateCachedTeamTameListForThisCurrentBatch() { NativeCall<void>(this, "AShooterGameMode.SortCurrentlyEvaluatedTameIntoAppropriateCachedTeamTameListForThisCurrentBatch()"); }
	void OnFinishedUpdatingCurrentBatchOfCachedTeamTameLists() { NativeCall<void>(this, "AShooterGameMode.OnFinishedUpdatingCurrentBatchOfCachedTeamTameLists()"); }
	void SetCreatedCachedTeamTameListsOnTribeDataOrPlayerData() { NativeCall<void>(this, "AShooterGameMode.SetCreatedCachedTeamTameListsOnTribeDataOrPlayerData()"); }
	void MovePlayersAwaitingUpdatedCachedTeamTameListToArrayOfPlayersToGetNotifiedAndRecieveUpdatedList() { NativeCall<void>(this, "AShooterGameMode.MovePlayersAwaitingUpdatedCachedTeamTameListToArrayOfPlayersToGetNotifiedAndRecieveUpdatedList()"); }
	void ShiftAwaitingNEXTBatchOfTeamsToUpdateCachedTeamTameListsToCurrentBatch() { NativeCall<void>(this, "AShooterGameMode.ShiftAwaitingNEXTBatchOfTeamsToUpdateCachedTeamTameListsToCurrentBatch()"); }
	void ReturnCachedTeamTameListsToAwaitingPlayers_OnInterval() { NativeCall<void>(this, "AShooterGameMode.ReturnCachedTeamTameListsToAwaitingPlayers_OnInterval()"); }
	bool AddPlayerToNextTeamBatchPlayersAwaitingUpdatedCachedTeamTameList(AShooterPlayerController* RequestingPlayer) { return NativeCall<bool, AShooterPlayerController*>(this, "AShooterGameMode.AddPlayerToNextTeamBatchPlayersAwaitingUpdatedCachedTeamTameList(AShooterPlayerController*)", RequestingPlayer); }
	bool IsPlayerAwaitingToRecieveCachedTeamTameListASAP(AShooterPlayerController* RequestingPlayer, int* FoundIndex) { return NativeCall<bool, AShooterPlayerController*, int*>(this, "AShooterGameMode.IsPlayerAwaitingToRecieveCachedTeamTameListASAP(AShooterPlayerController*,int*)", RequestingPlayer, FoundIndex); }
	void HitchDetected(const FSoftObjectPath* ForAsset, float HitchTime) { NativeCall<void, const FSoftObjectPath*, float>(this, "AShooterGameMode.HitchDetected(FSoftObjectPath*,float)", ForAsset, HitchTime); }
	void SlowFrameDetected(float FrameTime, float SlowFrameThresholdSeconds) { NativeCall<void, float, float>(this, "AShooterGameMode.SlowFrameDetected(float,float)", FrameTime, SlowFrameThresholdSeconds); }
	void SetDayCycleSpeed(const float speed) { NativeCall<void, const float>(this, "AShooterGameMode.SetDayCycleSpeed(float)", speed); }
	void DedicatedForceLoadSoftAssets() { NativeCall<void>(this, "AShooterGameMode.DedicatedForceLoadSoftAssets()"); }
	void ChatLogFlushOnTick() { NativeCall<void>(this, "AShooterGameMode.ChatLogFlushOnTick()"); }
	static void UpdateMemoryState() { NativeCall<void>(nullptr, "AShooterGameMode.UpdateMemoryState()"); }
	UClass* AttemptLoadClass(FName ClassName) { return NativeCall<UClass*, FName>(this, "AShooterGameMode.AttemptLoadClass(FName)", ClassName); }
};

struct ISaveGameInterface {

};

struct ACustomGameMode : AShooterGameMode
{
	// Fields

	FString& BadWordListURLField() { return *GetNativePointerField<FString*>(this, "ACustomGameMode.BadWordListURL"); }
	FString& BadWordWhiteListURLField() { return *GetNativePointerField<FString*>(this, "ACustomGameMode.BadWordWhiteListURL"); }
	//FAhoCorasickMatcher& BadWordMatcherField() { return *GetNativePointerField<FAhoCorasickMatcher*>(this, "ACustomGameMode.BadWordMatcher"); }
	//FAhoCorasickMatcher& BadWordWhitelistMatcherField() { return *GetNativePointerField<FAhoCorasickMatcher*>(this, "ACustomGameMode.BadWordWhitelistMatcher"); }
	TMap<wchar_t, wchar_t, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<wchar_t, wchar_t, 0> >& CharacterReplacementMapField() { return *GetNativePointerField<TMap<wchar_t, wchar_t, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<wchar_t, wchar_t, 0> >*>(this, "ACustomGameMode.CharacterReplacementMap"); }

	// Bitfields


	// Functions

	static UClass* StaticClass() { return NativeCall<UClass*>(nullptr, "ACustomGameMode.StaticClass()"); }
	bool OnInitGame(const FString* MapName, const FString* Options, FString* ErrorMessage) { return NativeCall<bool, const FString*, const FString*, FString*>(this, "ACustomGameMode.OnInitGame(FString&,FString&,FString&)", MapName, Options, ErrorMessage); }
	static void StaticRegisterNativesACustomGameMode() { NativeCall<void>(nullptr, "ACustomGameMode.StaticRegisterNativesACustomGameMode()"); }
	void AdjustDamage(AActor* Victim, float* Damage, const FDamageEvent* DamageEvent, AController* EventInstigator, AActor* DamageCauser) { NativeCall<void, AActor*, float*, const FDamageEvent*, AController*, AActor*>(this, "ACustomGameMode.AdjustDamage(AActor*,float&,FDamageEvent&,AController*,AActor*)", Victim, Damage, DamageEvent, EventInstigator, DamageCauser); }
	void HandleLeavingMap() { NativeCall<void>(this, "ACustomGameMode.HandleLeavingMap()"); }
	void KickPlayer(APlayerController* NewPlayer) { NativeCall<void, APlayerController*>(this, "ACustomGameMode.KickPlayer(APlayerController*)", NewPlayer); }
	void InitOptions(FString* Options) { NativeCall<void, FString*>(this, "ACustomGameMode.InitOptions(FString)", Options); }
	FString* DoGameCommand(FString* result, const FString* TheCommand) { return NativeCall<FString*, FString*, const FString*>(this, "ACustomGameMode.DoGameCommand(FString&)", result, TheCommand); }
	bool AllowAddXP(UPrimalCharacterStatusComponent* forComp) { return NativeCall<bool, UPrimalCharacterStatusComponent*>(this, "ACustomGameMode.AllowAddXP(UPrimalCharacterStatusComponent*)", forComp); }
	static void BreakTribeData(const FTribeData* Data, FString* TribeName, int* OwnerPlayerDataID, int* TribeID, TArray<FString, TSizedDefaultAllocator<32> >* MembersPlayerName, TArray<int, TSizedDefaultAllocator<32> >* MembersPlayerDataID, TArray<int, TSizedDefaultAllocator<32> >* TribeAdmins, bool* bSetGovernment, FTribeGovernment* TribeGovernment, TArray<FPrimalPlayerCharacterConfigStructReplicated, TSizedDefaultAllocator<32> >* MembersConfigs) { NativeCall<void, const FTribeData*, FString*, int*, int*, TArray<FString, TSizedDefaultAllocator<32> >*, TArray<int, TSizedDefaultAllocator<32> >*, TArray<int, TSizedDefaultAllocator<32> >*, bool*, FTribeGovernment*, TArray<FPrimalPlayerCharacterConfigStructReplicated, TSizedDefaultAllocator<32> >*>(nullptr, "ACustomGameMode.BreakTribeData(FTribeData,FString&,int&,int&,TArray<FString,TSizedDefaultAllocator<32>>&,TArray<int,TSizedDefaultAllocator<32>>&,TArray<int,TSizedDefaultAllocator<32>>&,bool&,FTribeGovernment&,TArray<FPrimalPlayerCharacterConfigStructReplicated,TSizedDefaultAllocator<32>>&)", Data, TribeName, OwnerPlayerDataID, TribeID, MembersPlayerName, MembersPlayerDataID, TribeAdmins, bSetGovernment, TribeGovernment, MembersConfigs); }
	static FTribeData* MakeTribeData(FTribeData* result, FString* TribeName, int* OwnerPlayerDataID, int* TribeID, TArray<FString, TSizedDefaultAllocator<32> >* MembersPlayerName, TArray<int, TSizedDefaultAllocator<32> >* MembersPlayerDataID, TArray<int, TSizedDefaultAllocator<32> >* TribeAdmins, bool* bSetGovernment, FTribeGovernment* TribeGovernment, TArray<FPrimalPlayerCharacterConfigStructReplicated, TSizedDefaultAllocator<32> >* MembersConfigs) { return NativeCall<FTribeData*, FTribeData*, FString*, int*, int*, TArray<FString, TSizedDefaultAllocator<32> >*, TArray<int, TSizedDefaultAllocator<32> >*, TArray<int, TSizedDefaultAllocator<32> >*, bool*, FTribeGovernment*, TArray<FPrimalPlayerCharacterConfigStructReplicated, TSizedDefaultAllocator<32> >*>(nullptr, "ACustomGameMode.MakeTribeData(FString&,int&,int&,TArray<FString,TSizedDefaultAllocator<32>>&,TArray<int,TSizedDefaultAllocator<32>>&,TArray<int,TSizedDefaultAllocator<32>>&,bool&,FTribeGovernment&,TArray<FPrimalPlayerCharacterConfigStructReplicated,TSizedDefaultAllocator<32>>&)", result, TribeName, OwnerPlayerDataID, TribeID, MembersPlayerName, MembersPlayerDataID, TribeAdmins, bSetGovernment, TribeGovernment, MembersConfigs); }
	bool AllowAddToTribe(AShooterPlayerState* ForPlayerState, const FTribeData* MyNewTribe) { return NativeCall<bool, AShooterPlayerState*, const FTribeData*>(this, "ACustomGameMode.AllowAddToTribe(AShooterPlayerState*,FTribeData&)", ForPlayerState, MyNewTribe); }
	bool AllowClearTribe(AShooterPlayerState* ForPlayerState) { return NativeCall<bool, AShooterPlayerState*>(this, "ACustomGameMode.AllowClearTribe(AShooterPlayerState*)", ForPlayerState); }
	bool AllowRenameTribe(AShooterPlayerState* ForPlayerState, const FString* TribeName) { return NativeCall<bool, AShooterPlayerState*, const FString*>(this, "ACustomGameMode.AllowRenameTribe(AShooterPlayerState*,FString&)", ForPlayerState, TribeName); }
	bool AllowModifyStatusValue(UPrimalCharacterStatusComponent* forComp, EPrimalCharacterStatusValue::Type valueType, float Amount) { return NativeCall<bool, UPrimalCharacterStatusComponent*, EPrimalCharacterStatusValue::Type, float>(this, "ACustomGameMode.AllowModifyStatusValue(UPrimalCharacterStatusComponent*,EPrimalCharacterStatusValue::Type,float)", forComp, valueType, Amount); }
	void InitGame(const FString* MapName, const FString* Options, FString* ErrorMessage) { NativeCall<void, const FString*, const FString*, FString*>(this, "ACustomGameMode.InitGame(FString&,FString&,FString&)", MapName, Options, ErrorMessage); }
	bool AllowNotifyRemotePlayerDeath(AShooterCharacter* forChar) { return NativeCall<bool, AShooterCharacter*>(this, "ACustomGameMode.AllowNotifyRemotePlayerDeath(AShooterCharacter*)", forChar); }
	void RemoveTribe(unsigned __int64 TribeID) { NativeCall<void, unsigned __int64>(this, "ACustomGameMode.RemoveTribe(unsigned__int64)", TribeID); }
	void UpdateTribeData(FTribeData* NewTribeData) { NativeCall<void, FTribeData*>(this, "ACustomGameMode.UpdateTribeData(FTribeData)", NewTribeData); }
	bool IsSpawnpointAllowed(APlayerStart* SpawnPoint, AController* Player) { return NativeCall<bool, APlayerStart*, AController*>(this, "ACustomGameMode.IsSpawnpointAllowed(APlayerStart*,AController*)", SpawnPoint, Player); }
	bool IsUsedSpawnPointStillSupported(APlayerStart* SpawnPoint, AController* Player) { return NativeCall<bool, APlayerStart*, AController*>(this, "ACustomGameMode.IsUsedSpawnPointStillSupported(APlayerStart*,AController*)", SpawnPoint, Player); }
	void InitGameState() { NativeCall<void>(this, "ACustomGameMode.InitGameState()"); }
	bool OnAllowRenameTribe_Implementation(AShooterPlayerState* ForPlayerState, const FString* TribeName) { return NativeCall<bool, AShooterPlayerState*, const FString*>(this, "ACustomGameMode.OnAllowRenameTribe_Implementation(AShooterPlayerState*,FString&)", ForPlayerState, TribeName); }
	void KickPlayersWithoutCharacter(const FString* Reason) { NativeCall<void, const FString*>(this, "ACustomGameMode.KickPlayersWithoutCharacter(FString&)", Reason); }
	//unsigned __int64 AddNewTribe(AShooterPlayerState* PlayerOwner, const FString* TribeName, const FTribeGovernment* TribeGovernment, const FUserCosmeticInfo* UserCosmeticInfo) { return NativeCall<unsigned __int64, AShooterPlayerState*, const FString*, const FTribeGovernment*, const FUserCosmeticInfo*>(this, "ACustomGameMode.AddNewTribe(AShooterPlayerState*,FString&,FTribeGovernment&,FUserCosmeticInfo)", PlayerOwner, TribeName, TribeGovernment, UserCosmeticInfo); }
	void RequestBadWordList() { NativeCall<void>(this, "ACustomGameMode.RequestBadWordList()"); }
	//void HttpGetBadWordListComplete(TSharedPtr<IHttpRequest, 1>* HttpRequest, TSharedPtr<IHttpResponse, 1>* HttpResponse, bool bSucceeded) { NativeCall<void, TSharedPtr<IHttpRequest, 1>*, TSharedPtr<IHttpResponse, 1>*, bool>(this, "ACustomGameMode.HttpGetBadWordListComplete(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool)", HttpRequest, HttpResponse, bSucceeded); }
	//void HttpGetBadWordWhiteListComplete(TSharedPtr<IHttpRequest, 1>* HttpRequest, TSharedPtr<IHttpResponse, 1>* HttpResponse, bool bSucceeded) { NativeCall<void, TSharedPtr<IHttpRequest, 1>*, TSharedPtr<IHttpResponse, 1>*, bool>(this, "ACustomGameMode.HttpGetBadWordWhiteListComplete(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool)", HttpRequest, HttpResponse, bSucceeded); }
	bool FilterBadWords(FString* String, bool bCheckWithoutSpecialChars) { return NativeCall<bool, FString*, bool>(this, "ACustomGameMode.FilterBadWords(FString&,bool)", String, bCheckWithoutSpecialChars); }
};

struct ACustomGameState : AShooterGameState
{
	// Fields

	TSubclassOf<APrimalStructure>& TribeFlagClassField() { return *GetNativePointerField<TSubclassOf<APrimalStructure>*>(this, "ACustomGameState.TribeFlagClass"); }
	//TArray<APrimalStructureTribeFlag*, TSizedDefaultAllocator<32> >& TribesFlagsField() { return *GetNativePointerField<TArray<APrimalStructureTribeFlag*, TSizedDefaultAllocator<32> >*>(this, "ACustomGameState.TribesFlags"); }
	//TArray<FSOTFScorePlayerData, TSizedDefaultAllocator<32> >& PlayerScoreDataField() { return *GetNativePointerField<TArray<FSOTFScorePlayerData, TSizedDefaultAllocator<32> >*>(this, "ACustomGameState.PlayerScoreData"); }
	//TMap<int, FSOTFScorePlayerData*, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<int, FSOTFScorePlayerData*, 0> >& PlayerScoreDataMapField() { return *GetNativePointerField<TMap<int, FSOTFScorePlayerData*, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<int, FSOTFScorePlayerData*, 0> >*>(this, "ACustomGameState.PlayerScoreDataMap"); }
	//TArray<FSOTFScoreTribeData, TSizedDefaultAllocator<32> >& TribeScoreDataField() { return *GetNativePointerField<TArray<FSOTFScoreTribeData, TSizedDefaultAllocator<32> >*>(this, "ACustomGameState.TribeScoreData"); }
	//TMap<int, FSOTFScoreTribeData*, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<int, FSOTFScoreTribeData*, 0> >& TribeScoreDataMapField() { return *GetNativePointerField<TMap<int, FSOTFScoreTribeData*, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<int, FSOTFScoreTribeData*, 0> >*>(this, "ACustomGameState.TribeScoreDataMap"); }
	//float& AllyRadarUpdateFrequencyField() { return *GetNativePointerField<float*>(this, "ACustomGameState.AllyRadarUpdateFrequency"); }
	//TMap<unsigned __int64, FAllyRadarDatas, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<unsigned __int64, FAllyRadarDatas, 0> >& ServerAllyRadarDatasField() { return *GetNativePointerField<TMap<unsigned __int64, FAllyRadarDatas, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<unsigned __int64, FAllyRadarDatas, 0> >*>(this, "ACustomGameState.ServerAllyRadarDatas"); }
	//TArray<FAllyRadarDatas, TSizedDefaultAllocator<32> >& ClientRelevantRadarDatasField() { return *GetNativePointerField<TArray<FAllyRadarDatas, TSizedDefaultAllocator<32> >*>(this, "ACustomGameState.ClientRelevantRadarDatas"); }
	long double& LastAllyRadarUpdateField() { return *GetNativePointerField<long double*>(this, "ACustomGameState.LastAllyRadarUpdate"); }

	// Bitfields


	// Functions

	static UClass* StaticClass() { return NativeCall<UClass*>(nullptr, "ACustomGameState.StaticClass()"); }
	static void StaticRegisterNativesACustomGameState() { NativeCall<void>(nullptr, "ACustomGameState.StaticRegisterNativesACustomGameState()"); }
	void ValidateGeneratedRepEnums(const TArray<FRepRecord, TSizedDefaultAllocator<32> >* ClassReps) { NativeCall<void, const TArray<FRepRecord, TSizedDefaultAllocator<32> >*>(this, "ACustomGameState.ValidateGeneratedRepEnums(TArray<FRepRecord,TSizedDefaultAllocator<32>>&)", ClassReps); }
	static void BreakTribeData(const FTribeData* InData, FString* TribeName, int* OwnerPlayerDataID, int* TribeID, TArray<FString, TSizedDefaultAllocator<32> >* MembersPlayerName, TArray<int, TSizedDefaultAllocator<32> >* MembersPlayerDataID, TArray<int, TSizedDefaultAllocator<32> >* TribeAdmins, bool* bSetGovernment, TArray<FPrimalPlayerCharacterConfigStructReplicated, TSizedDefaultAllocator<32> >* MembersConfigs) { NativeCall<void, const FTribeData*, FString*, int*, int*, TArray<FString, TSizedDefaultAllocator<32> >*, TArray<int, TSizedDefaultAllocator<32> >*, TArray<int, TSizedDefaultAllocator<32> >*, bool*, TArray<FPrimalPlayerCharacterConfigStructReplicated, TSizedDefaultAllocator<32> >*>(nullptr, "ACustomGameState.BreakTribeData(FTribeData,FString&,int&,int&,TArray<FString,TSizedDefaultAllocator<32>>&,TArray<int,TSizedDefaultAllocator<32>>&,TArray<int,TSizedDefaultAllocator<32>>&,bool&,TArray<FPrimalPlayerCharacterConfigStructReplicated,TSizedDefaultAllocator<32>>&)", InData, TribeName, OwnerPlayerDataID, TribeID, MembersPlayerName, MembersPlayerDataID, TribeAdmins, bSetGovernment, MembersConfigs); }
	//static FPlayerDeathNotification* MakePlayerDeathNotification(FPlayerDeathNotification* result, FString* PlayerDeathStringEnemy, FString* PlayerDeathStringAlly, FString* PlayerDeathStringYou, FString* DeathReason, TArray<FString, TSizedDefaultAllocator<32> >* DeadPlayerNames, bool bIsTribeDeath, FString* DeathTribeName, int TargetingTeam, FString* LinkedPlayerID, TArray<FPrimalPlayerCharacterConfigStructReplicated, TSizedDefaultAllocator<32> >* PlayersData) { return NativeCall<FPlayerDeathNotification*, FPlayerDeathNotification*, FString*, FString*, FString*, FString*, TArray<FString, TSizedDefaultAllocator<32> >*, bool, FString*, int, FString*, TArray<FPrimalPlayerCharacterConfigStructReplicated, TSizedDefaultAllocator<32> >*>(nullptr, "ACustomGameState.MakePlayerDeathNotification(FString,FString,FString,FString,TArray<FString,TSizedDefaultAllocator<32>>,bool,FString,int,FString,TArray<FPrimalPlayerCharacterConfigStructReplicated,TSizedDefaultAllocator<32>>)", result, PlayerDeathStringEnemy, PlayerDeathStringAlly, PlayerDeathStringYou, DeathReason, DeadPlayerNames, bIsTribeDeath, DeathTribeName, TargetingTeam, LinkedPlayerID, PlayersData); }
	void NotifyPlayerDied(AShooterCharacter* theShooterChar, AShooterPlayerController* prevController, APawn* InstigatingPawn, AActor* DamageCauser) { NativeCall<void, AShooterCharacter*, AShooterPlayerController*, APawn*, AActor*>(this, "ACustomGameState.NotifyPlayerDied(AShooterCharacter*,AShooterPlayerController*,APawn*,AActor*)", theShooterChar, prevController, InstigatingPawn, DamageCauser); }
	void DrawHUD(AShooterHUD* HUD) { NativeCall<void, AShooterHUD*>(this, "ACustomGameState.DrawHUD(AShooterHUD*)", HUD); }
	void DrawHUDNotifications(AShooterHUD* HUD) { NativeCall<void, AShooterHUD*>(this, "ACustomGameState.DrawHUDNotifications(AShooterHUD*)", HUD); }
	bool AllowTribeManager(AShooterPlayerController* forPC) { return NativeCall<bool, AShooterPlayerController*>(this, "ACustomGameState.AllowTribeManager(AShooterPlayerController*)", forPC); }
	bool CheckGameStateIfCanRespawn(APlayerController* forPC) { return NativeCall<bool, APlayerController*>(this, "ACustomGameState.CheckGameStateIfCanRespawn(APlayerController*)", forPC); }
	void DrawExtraPlayerFloatingHUD(AShooterHUD* HUD, AShooterCharacter* theShooterChar, const UE::Math::TVector<double>* AtLoc) { NativeCall<void, AShooterHUD*, AShooterCharacter*, const UE::Math::TVector<double>*>(this, "ACustomGameState.DrawExtraPlayerFloatingHUD(AShooterHUD*,AShooterCharacter*,UE::Math::TVector<double>&)", HUD, theShooterChar, AtLoc); }
	void Tick(float DeltaSeconds) { NativeCall<void, float>(this, "ACustomGameState.Tick(float)", DeltaSeconds); }
	bool AllowOrbitCamera(APrimalCharacter* ForCharacter) { return NativeCall<bool, APrimalCharacter*>(this, "ACustomGameState.AllowOrbitCamera(APrimalCharacter*)", ForCharacter); }
	bool AllowPopUps() { return NativeCall<bool>(this, "ACustomGameState.AllowPopUps()"); }
	USoundBase* OverrideDynamicMusic(APrimalCharacter* ForCharacter) { return NativeCall<USoundBase*, APrimalCharacter*>(this, "ACustomGameState.OverrideDynamicMusic(APrimalCharacter*)", ForCharacter); }
	//bool AllowFastTravel(APrimalStructureBed* ForBed, AShooterPlayerController* forPC) { return NativeCall<bool, APrimalStructureBed*, AShooterPlayerController*>(this, "ACustomGameState.AllowFastTravel(APrimalStructureBed*,AShooterPlayerController*)", ForBed, forPC); }
	bool AllowDaytimeTransitionSounds() { return NativeCall<bool>(this, "ACustomGameState.AllowDaytimeTransitionSounds()"); }
	bool AllowStartSupplyCrateSpawns() { return NativeCall<bool>(this, "ACustomGameState.AllowStartSupplyCrateSpawns()"); }
	void HandleActorEvent(AActor* ForActor, FName NameParam, UE::Math::TVector<double>* VecParam) { NativeCall<void, AActor*, FName, UE::Math::TVector<double>*>(this, "ACustomGameState.HandleActorEvent(AActor*,FName,UE::Math::TVector<double>)", ForActor, NameParam, VecParam); }
	void ExtraShooterCharacterTick(AShooterCharacter* ForChar, float DeltaTime) { NativeCall<void, AShooterCharacter*, float>(this, "ACustomGameState.ExtraShooterCharacterTick(AShooterCharacter*,float)", ForChar, DeltaTime); }
	bool AllowTribeManagement() { return NativeCall<bool>(this, "ACustomGameState.AllowTribeManagement()"); }
	bool ForceOccludedFloatingHUD(AActor* anActor, AShooterPlayerController* ForPC) { return NativeCall<bool, AActor*, AShooterPlayerController*>(this, "ACustomGameState.ForceOccludedFloatingHUD(AActor*,AShooterPlayerController*)", anActor, ForPC); }
	bool AllowRemoveItems(UPrimalInventoryComponent* ForInv, AShooterPlayerController* PC, UPrimalItem* anItemToTransfer) { return NativeCall<bool, UPrimalInventoryComponent*, AShooterPlayerController*, UPrimalItem*>(this, "ACustomGameState.AllowRemoveItems(UPrimalInventoryComponent*,AShooterPlayerController*,UPrimalItem*)", ForInv, PC, anItemToTransfer); }
	bool AllowShowPlayerHudUI(APrimalCharacter* forPawn) { return NativeCall<bool, APrimalCharacter*>(this, "ACustomGameState.AllowShowPlayerHudUI(APrimalCharacter*)", forPawn); }
	FString* GetPawnName(FString* result, APawn* Pawn) { return NativeCall<FString*, FString*, APawn*>(this, "ACustomGameState.GetPawnName(APawn*)", result, Pawn); }
	void GetDeathNotificationText(AShooterCharacter* theShooterChar, APawn* InstigatingPawn, FString* Killer, FString* KillerAndTribe, FString* theNotificationStringYou, FString* theNotificationStringAlly, FString* theNotificationStringEnemy) { NativeCall<void, AShooterCharacter*, APawn*, FString*, FString*, FString*, FString*, FString*>(this, "ACustomGameState.GetDeathNotificationText(AShooterCharacter*,APawn*,FString&,FString&,FString&,FString&,FString&)", theShooterChar, InstigatingPawn, Killer, KillerAndTribe, theNotificationStringYou, theNotificationStringAlly, theNotificationStringEnemy); }
	//FPlayerDeathNotification* CreateDeathNotification(FPlayerDeathNotification* result, AShooterCharacter* theShooterChar, AShooterPlayerController* prevController, APawn* InstigatingPawn) { return NativeCall<FPlayerDeathNotification*, FPlayerDeathNotification*, AShooterCharacter*, AShooterPlayerController*, APawn*>(this, "ACustomGameState.CreateDeathNotification(AShooterCharacter*,AShooterPlayerController*,APawn*,int)", result, theShooterChar, prevController, InstigatingPawn); }
	void DisplayWelcomeUI() { NativeCall<void>(this, "ACustomGameState.DisplayWelcomeUI()"); }
	bool AllowCreateSurvivor() { return NativeCall<bool>(this, "ACustomGameState.AllowCreateSurvivor()"); }
	bool HasGameModeMatchStarted() { return NativeCall<bool>(this, "ACustomGameState.HasGameModeMatchStarted()"); }
	bool OnAllowTribeManager_Implementation(AShooterPlayerController* forPC) { return NativeCall<bool, AShooterPlayerController*>(this, "ACustomGameState.OnAllowTribeManager_Implementation(AShooterPlayerController*)", forPC); }
	void GetColorForTargetingTeam_Implementation(int ForTargetingTeam, FColor* nameColor, FColor* platformProfileNameColor) { NativeCall<void, int, FColor*, FColor*>(this, "ACustomGameState.GetColorForTargetingTeam_Implementation(int,FColor&,FColor&)", ForTargetingTeam, nameColor, platformProfileNameColor); }
	static APrimalBuff* SpawnBuffAndAttachToCharacter(UClass* Buff, APrimalCharacter* PrimalCharacter, float ExperiencePoints) { return NativeCall<APrimalBuff*, UClass*, APrimalCharacter*, float>(nullptr, "ACustomGameState.SpawnBuffAndAttachToCharacter(UClass*,APrimalCharacter*,float)", Buff, PrimalCharacter, ExperiencePoints); }
	UTexture2D* GetTribeTexture(int TribeID) { return NativeCall<UTexture2D*, int>(this, "ACustomGameState.GetTribeTexture(int)", TribeID); }
	void RemoveTribeFlag(int TribeID) { NativeCall<void, int>(this, "ACustomGameState.RemoveTribeFlag(int)", TribeID); }
	//APrimalStructureTribeFlag* GetTribeFlag(unsigned int TribeID, bool CreateFlag) { return NativeCall<APrimalStructureTribeFlag*, unsigned int, bool>(this, "ACustomGameState.GetTribeFlag(unsignedint,bool)", TribeID, CreateFlag); }
	void UpdatePlayerScoreDataMap() { NativeCall<void>(this, "ACustomGameState.UpdatePlayerScoreDataMap()"); }
	void OnRep_PlayerScoreData_Implementation() { NativeCall<void>(this, "ACustomGameState.OnRep_PlayerScoreData_Implementation()"); }
	//FSOTFScorePlayerData* GetScoreDataForPlayer(int LinkedID) { return NativeCall<FSOTFScorePlayerData*, int>(this, "ACustomGameState.GetScoreDataForPlayer(int)", LinkedID); }
	//FSOTFScorePlayerData* CreateScoreDataForPlayer(int LinkedID, bool bReplicateToClients) { return NativeCall<FSOTFScorePlayerData*, int, bool>(this, "ACustomGameState.CreateScoreDataForPlayer(int,bool)", LinkedID, bReplicateToClients); }
	void CreateScoreDataForPlayers(TArray<int, TSizedDefaultAllocator<32> >* TargetingTeams) { NativeCall<void, TArray<int, TSizedDefaultAllocator<32> >*>(this, "ACustomGameState.CreateScoreDataForPlayers(TArray<int,TSizedDefaultAllocator<32>>)", TargetingTeams); }
	void UpdateTribeScoreDataMap() { NativeCall<void>(this, "ACustomGameState.UpdateTribeScoreDataMap()"); }
	void OnRep_TribeScoreData_Implementation() { NativeCall<void>(this, "ACustomGameState.OnRep_TribeScoreData_Implementation()"); }
	//FSOTFScoreTribeData* GetScoreDataForTribe(int ForTargetingTeam) { return NativeCall<FSOTFScoreTribeData*, int>(this, "ACustomGameState.GetScoreDataForTribe(int)", ForTargetingTeam); }
	//FSOTFScoreTribeData* CreateScoreDataForTribe(int ForTargetingTeam, bool bReplicateToClients) { return NativeCall<FSOTFScoreTribeData*, int, bool>(this, "ACustomGameState.CreateScoreDataForTribe(int,bool)", ForTargetingTeam, bReplicateToClients); }
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty, TSizedDefaultAllocator<32> >* OutLifetimeProps) { NativeCall<void, TArray<FLifetimeProperty, TSizedDefaultAllocator<32> >*>(this, "ACustomGameState.GetLifetimeReplicatedProps(TArray<FLifetimeProperty,TSizedDefaultAllocator<32>>&)", OutLifetimeProps); }
};

struct AGameNetworkManager : AInfo
{
	// Fields

	float& BadPacketLossThresholdField() { return *GetNativePointerField<float*>(this, "AGameNetworkManager.BadPacketLossThreshold"); }
	float& SeverePacketLossThresholdField() { return *GetNativePointerField<float*>(this, "AGameNetworkManager.SeverePacketLossThreshold"); }
	int& BadPingThresholdField() { return *GetNativePointerField<int*>(this, "AGameNetworkManager.BadPingThreshold"); }
	int& SeverePingThresholdField() { return *GetNativePointerField<int*>(this, "AGameNetworkManager.SeverePingThreshold"); }
	int& AdjustedNetSpeedField() { return *GetNativePointerField<int*>(this, "AGameNetworkManager.AdjustedNetSpeed"); }
	long double& LastNetSpeedUpdateTimeField() { return *GetNativePointerField<long double*>(this, "AGameNetworkManager.LastNetSpeedUpdateTime"); }
	int& TotalNetBandwidthField() { return *GetNativePointerField<int*>(this, "AGameNetworkManager.TotalNetBandwidth"); }
	int& MinDynamicBandwidthField() { return *GetNativePointerField<int*>(this, "AGameNetworkManager.MinDynamicBandwidth"); }
	int& MaxDynamicBandwidthField() { return *GetNativePointerField<int*>(this, "AGameNetworkManager.MaxDynamicBandwidth"); }
	float& StandbyRxCheatTimeField() { return *GetNativePointerField<float*>(this, "AGameNetworkManager.StandbyRxCheatTime"); }
	float& StandbyTxCheatTimeField() { return *GetNativePointerField<float*>(this, "AGameNetworkManager.StandbyTxCheatTime"); }
	float& PercentMissingForRxStandbyField() { return *GetNativePointerField<float*>(this, "AGameNetworkManager.PercentMissingForRxStandby"); }
	float& PercentMissingForTxStandbyField() { return *GetNativePointerField<float*>(this, "AGameNetworkManager.PercentMissingForTxStandby"); }
	float& PercentForBadPingField() { return *GetNativePointerField<float*>(this, "AGameNetworkManager.PercentForBadPing"); }
	float& JoinInProgressStandbyWaitTimeField() { return *GetNativePointerField<float*>(this, "AGameNetworkManager.JoinInProgressStandbyWaitTime"); }
	float& MoveRepSizeField() { return *GetNativePointerField<float*>(this, "AGameNetworkManager.MoveRepSize"); }
	float& MAXPOSITIONERRORSQUAREDField() { return *GetNativePointerField<float*>(this, "AGameNetworkManager.MAXPOSITIONERRORSQUARED"); }
	float& MAXNEARZEROVELOCITYSQUAREDField() { return *GetNativePointerField<float*>(this, "AGameNetworkManager.MAXNEARZEROVELOCITYSQUARED"); }
	float& CLIENTADJUSTUPDATECOSTField() { return *GetNativePointerField<float*>(this, "AGameNetworkManager.CLIENTADJUSTUPDATECOST"); }
	float& MAXCLIENTUPDATEINTERVALField() { return *GetNativePointerField<float*>(this, "AGameNetworkManager.MAXCLIENTUPDATEINTERVAL"); }
	float& MaxClientForcedUpdateDurationField() { return *GetNativePointerField<float*>(this, "AGameNetworkManager.MaxClientForcedUpdateDuration"); }
	float& ServerForcedUpdateHitchThresholdField() { return *GetNativePointerField<float*>(this, "AGameNetworkManager.ServerForcedUpdateHitchThreshold"); }
	float& ServerForcedUpdateHitchCooldownField() { return *GetNativePointerField<float*>(this, "AGameNetworkManager.ServerForcedUpdateHitchCooldown"); }
	float& MaxMoveDeltaTimeField() { return *GetNativePointerField<float*>(this, "AGameNetworkManager.MaxMoveDeltaTime"); }
	float& MaxClientSmoothingDeltaTimeField() { return *GetNativePointerField<float*>(this, "AGameNetworkManager.MaxClientSmoothingDeltaTime"); }
	float& ClientNetSendMoveDeltaTimeField() { return *GetNativePointerField<float*>(this, "AGameNetworkManager.ClientNetSendMoveDeltaTime"); }
	float& ClientNetSendMoveDeltaTimeThrottledField() { return *GetNativePointerField<float*>(this, "AGameNetworkManager.ClientNetSendMoveDeltaTimeThrottled"); }
	float& ClientNetSendMoveDeltaTimeStationaryField() { return *GetNativePointerField<float*>(this, "AGameNetworkManager.ClientNetSendMoveDeltaTimeStationary"); }
	int& ClientNetSendMoveThrottleAtNetSpeedField() { return *GetNativePointerField<int*>(this, "AGameNetworkManager.ClientNetSendMoveThrottleAtNetSpeed"); }
	int& ClientNetSendMoveThrottleOverPlayerCountField() { return *GetNativePointerField<int*>(this, "AGameNetworkManager.ClientNetSendMoveThrottleOverPlayerCount"); }
	float& ClientErrorUpdateRateLimitField() { return *GetNativePointerField<float*>(this, "AGameNetworkManager.ClientErrorUpdateRateLimit"); }
	float& ClientNetCamUpdateDeltaTimeField() { return *GetNativePointerField<float*>(this, "AGameNetworkManager.ClientNetCamUpdateDeltaTime"); }
	float& ClientNetCamUpdatePositionLimitField() { return *GetNativePointerField<float*>(this, "AGameNetworkManager.ClientNetCamUpdatePositionLimit"); }
	bool& bMovementTimeDiscrepancyDetectionField() { return *GetNativePointerField<bool*>(this, "AGameNetworkManager.bMovementTimeDiscrepancyDetection"); }
	float& MovementTimeDiscrepancyMaxTimeMarginField() { return *GetNativePointerField<float*>(this, "AGameNetworkManager.MovementTimeDiscrepancyMaxTimeMargin"); }
	float& MovementTimeDiscrepancyMinTimeMarginField() { return *GetNativePointerField<float*>(this, "AGameNetworkManager.MovementTimeDiscrepancyMinTimeMargin"); }
	float& MovementTimeDiscrepancyResolutionRateField() { return *GetNativePointerField<float*>(this, "AGameNetworkManager.MovementTimeDiscrepancyResolutionRate"); }
	float& MovementTimeDiscrepancyDriftAllowanceField() { return *GetNativePointerField<float*>(this, "AGameNetworkManager.MovementTimeDiscrepancyDriftAllowance"); }
	bool& bUseDistanceBasedRelevancyField() { return *GetNativePointerField<bool*>(this, "AGameNetworkManager.bUseDistanceBasedRelevancy"); }
	FTimerHandle& TimerHandle_UpdateNetSpeedsTimerField() { return *GetNativePointerField<FTimerHandle*>(this, "AGameNetworkManager.TimerHandle_UpdateNetSpeedsTimer"); }

	// Bitfields

	BitFieldValue<bool, unsigned __int32> bIsStandbyCheckingEnabled() { return { this, "AGameNetworkManager.bIsStandbyCheckingEnabled" }; }
	BitFieldValue<bool, unsigned __int32> bHasStandbyCheatTriggered() { return { this, "AGameNetworkManager.bHasStandbyCheatTriggered" }; }

	// Functions

	static UClass* StaticClass() { return NativeCall<UClass*>(nullptr, "AGameNetworkManager.StaticClass()"); }
	void EnableStandbyCheatDetection(bool bIsEnabled) { NativeCall<void, bool>(this, "AGameNetworkManager.EnableStandbyCheatDetection(bool)", bIsEnabled); }
	void PostInitializeComponents() { NativeCall<void>(this, "AGameNetworkManager.PostInitializeComponents()"); }
	void UpdateNetSpeedsTimer() { NativeCall<void>(this, "AGameNetworkManager.UpdateNetSpeedsTimer()"); }
	void UpdateNetSpeeds(bool bIsLanMatch) { NativeCall<void, bool>(this, "AGameNetworkManager.UpdateNetSpeeds(bool)", bIsLanMatch); }
	int CalculatedNetSpeed() { return NativeCall<int>(this, "AGameNetworkManager.CalculatedNetSpeed()"); }
	bool WithinUpdateDelayBounds(APlayerController* PC, long double LastUpdateTime) { return NativeCall<bool, APlayerController*, long double>(this, "AGameNetworkManager.WithinUpdateDelayBounds(APlayerController*,double)", PC, LastUpdateTime); }
	bool ExceedsAllowablePositionError(UE::Math::TVector<double>* LocDiff) { return NativeCall<bool, UE::Math::TVector<double>*>(this, "AGameNetworkManager.ExceedsAllowablePositionError(UE::Math::TVector<double>)", LocDiff); }
	bool NetworkVelocityNearZero(UE::Math::TVector<double>* InVelocity) { return NativeCall<bool, UE::Math::TVector<double>*>(this, "AGameNetworkManager.NetworkVelocityNearZero(UE::Math::TVector<double>)", InVelocity); }
};

struct AGameSession : AInfo
{
	// Fields

	int& MaxSpectatorsField() { return *GetNativePointerField<int*>(this, "AGameSession.MaxSpectators"); }
	int& MaxPlayersField() { return *GetNativePointerField<int*>(this, "AGameSession.MaxPlayers"); }
	int& MaxPartySizeField() { return *GetNativePointerField<int*>(this, "AGameSession.MaxPartySize"); }
	bool& bRequiresPushToTalkField() { return *GetNativePointerField<bool*>(this, "AGameSession.bRequiresPushToTalk"); }
	FName& SessionNameField() { return *GetNativePointerField<FName*>(this, "AGameSession.SessionName"); }

	// Bitfields


	// Functions

	void GetActorBounds(bool bOnlyCollidingComponents, UE::Math::TVector<double>* Origin, UE::Math::TVector<double>* BoxExtent, bool bIncludeFromChildActors) { NativeCall<void, bool, UE::Math::TVector<double>*, UE::Math::TVector<double>*, bool>(this, "AGameSession.GetActorBounds(bool,UE::Math::TVector<double>&,UE::Math::TVector<double>&,bool)", bOnlyCollidingComponents, Origin, BoxExtent, bIncludeFromChildActors); }
	static UClass* StaticClass() { return NativeCall<UClass*>(nullptr, "AGameSession.StaticClass()"); }
	bool RequiresPushToTalk() { return NativeCall<bool>(this, "AGameSession.RequiresPushToTalk()"); }
	void HandleMatchHasStarted() { NativeCall<void>(this, "AGameSession.HandleMatchHasStarted()"); }
	void HandleMatchHasEnded() { NativeCall<void>(this, "AGameSession.HandleMatchHasEnded()"); }
	void InitOptions(const FString* Options) { NativeCall<void, const FString*>(this, "AGameSession.InitOptions(FString&)", Options); }
	bool ProcessAutoLogin() { return NativeCall<bool>(this, "AGameSession.ProcessAutoLogin()"); }
	void OnAutoLoginComplete(int LocalUserNum, bool bWasSuccessful, const FString* Error) { NativeCall<void, int, bool, const FString*>(this, "AGameSession.OnAutoLoginComplete(int,bool,FString&)", LocalUserNum, bWasSuccessful, Error); }
	FString* ApproveLogin(FString* result, const FString* Options) { return NativeCall<FString*, FString*, const FString*>(this, "AGameSession.ApproveLogin(FString&)", result, Options); }
	// TODO: Might need manual analysis
	void RegisterPlayer(APlayerController* NewPlayer, const TSharedPtr<FUniqueNetId const>* UniqueId, bool bWasFromInvite) { NativeCall<void, APlayerController*, const TSharedPtr<FUniqueNetId const>*, bool>(this, "AGameSession.RegisterPlayer(APlayerController*,TSharedPtr<FUniqueNetId,1>&,_BOOL8)", NewPlayer, UniqueId, bWasFromInvite); }
	void RegisterPlayer(APlayerController* NewPlayer, const FUniqueNetIdRepl* UniqueId, bool bWasFromInvite) { NativeCall<void, APlayerController*, const FUniqueNetIdRepl*, bool>(this, "AGameSession.RegisterPlayer(APlayerController*,FUniqueNetIdRepl&,bool)", NewPlayer, UniqueId, bWasFromInvite); }
	void UnregisterPlayer(FName InSessionName, const FUniqueNetIdRepl* UniqueId) { NativeCall<void, FName, const FUniqueNetIdRepl*>(this, "AGameSession.UnregisterPlayer(FName,FUniqueNetIdRepl&)", InSessionName, UniqueId); }
	void UnregisterPlayers(FName InSessionName, const TArray<TSharedRef<FUniqueNetId const>, TSizedDefaultAllocator<32> >* Players) { NativeCall<void, FName, const TArray<TSharedRef<FUniqueNetId const>, TSizedDefaultAllocator<32> >*>(this, "AGameSession.UnregisterPlayers(FName,TArray<TSharedRef<FUniqueNetId,1>,TSizedDefaultAllocator<32>>&)", InSessionName, Players); }
	void UnregisterPlayers(FName InSessionName, const TArray<FUniqueNetIdRepl, TSizedDefaultAllocator<32> >* Players) { NativeCall<void, FName, const TArray<FUniqueNetIdRepl, TSizedDefaultAllocator<32> >*>(this, "AGameSession.UnregisterPlayers(FName,TArray<FUniqueNetIdRepl,TSizedDefaultAllocator<32>>&)", InSessionName, Players); }
	void UnregisterPlayer(const APlayerController* ExitingPlayer) { NativeCall<void, const APlayerController*>(this, "AGameSession.UnregisterPlayer(APlayerController*)", ExitingPlayer); }
	bool AtCapacity(bool bSpectator, const FString* AuthToken, bool UseReservedSlots, int* NumFreeSlots) { return NativeCall<bool, bool, const FString*, bool, int*>(this, "AGameSession.AtCapacity(bool,FString&,bool,int*)", bSpectator, AuthToken, UseReservedSlots, NumFreeSlots); }
	void NotifyLogout(FName InSessionName, const FUniqueNetIdRepl* UniqueId) { NativeCall<void, FName, const FUniqueNetIdRepl*>(this, "AGameSession.NotifyLogout(FName,FUniqueNetIdRepl&)", InSessionName, UniqueId); }
	void NotifyLogout(const APlayerController* PC) { NativeCall<void, const APlayerController*>(this, "AGameSession.NotifyLogout(APlayerController*)", PC); }
	bool KickPlayer(APlayerController* KickedPlayer, const FText* KickReason) { return NativeCall<bool, APlayerController*, const FText*>(this, "AGameSession.KickPlayer(APlayerController*,FText&)", KickedPlayer, KickReason); }
	bool BanPlayer(APlayerController* BannedPlayer, const FText* BanReason) { return NativeCall<bool, APlayerController*, const FText*>(this, "AGameSession.BanPlayer(APlayerController*,FText&)", BannedPlayer, BanReason); }
	void ReturnToMainMenuHost() { NativeCall<void>(this, "AGameSession.ReturnToMainMenuHost()"); }
	void DumpSessionState() { NativeCall<void>(this, "AGameSession.DumpSessionState()"); }
	bool GetSessionJoinability(FName InSessionName, FJoinabilitySettings* OutSettings) { return NativeCall<bool, FName, FJoinabilitySettings*>(this, "AGameSession.GetSessionJoinability(FName,FJoinabilitySettings&)", InSessionName, OutSettings); }
	void UpdateSessionJoinability(FName InSessionName, bool bPublicSearchable, bool bAllowInvites, bool bJoinViaPresence, bool bJoinViaPresenceFriendsOnly) { NativeCall<void, FName, bool, bool, bool, bool>(this, "AGameSession.UpdateSessionJoinability(FName,bool,bool,bool,bool)", InSessionName, bPublicSearchable, bAllowInvites, bJoinViaPresence, bJoinViaPresenceFriendsOnly); }
	int GetConnectedPlayers(const FString* Auth) { return NativeCall<int, const FString*>(this, "AGameSession.GetConnectedPlayers(FString&)", Auth); }
};


struct AShooterGameSession : AGameSession
{
	// Fields

	FWindowsCriticalSection& SearchResultsCSField() { return *GetNativePointerField<FWindowsCriticalSection*>(this, "AShooterGameSession.SearchResultsCS"); }
	TArray<FInstalledItemInfo, TSizedDefaultAllocator<32> >& CachedModsField() { return *GetNativePointerField<TArray<FInstalledItemInfo, TSizedDefaultAllocator<32> >*>(this, "AShooterGameSession.CachedMods"); }
	TArray<FShooterSessionData, TSizedDefaultAllocator<32> >& ThreadSafeSearchResultsField() { return *GetNativePointerField<TArray<FShooterSessionData, TSizedDefaultAllocator<32> >*>(this, "AShooterGameSession.ThreadSafeSearchResults"); }
	FTimerHandle& DelayedRegisterSessionHandleField() { return *GetNativePointerField<FTimerHandle*>(this, "AShooterGameSession.DelayedRegisterSessionHandle"); }
	TDelegate<void __cdecl(FName, bool), FDefaultDelegateUserPolicy>& OnCreateSessionCompleteDelegateField() { return *GetNativePointerField<TDelegate<void __cdecl(FName, bool), FDefaultDelegateUserPolicy>*>(this, "AShooterGameSession.OnCreateSessionCompleteDelegate"); }
	TDelegate<void __cdecl(FName, bool), FDefaultDelegateUserPolicy>& OnStartSessionCompleteDelegateField() { return *GetNativePointerField<TDelegate<void __cdecl(FName, bool), FDefaultDelegateUserPolicy>*>(this, "AShooterGameSession.OnStartSessionCompleteDelegate"); }
	TDelegate<void __cdecl(FName, bool), FDefaultDelegateUserPolicy>& OnDestroySessionCompleteDelegateField() { return *GetNativePointerField<TDelegate<void __cdecl(FName, bool), FDefaultDelegateUserPolicy>*>(this, "AShooterGameSession.OnDestroySessionCompleteDelegate"); }
	TDelegate<void __cdecl(bool), FDefaultDelegateUserPolicy>& OnFindSessionsCompleteDelegateField() { return *GetNativePointerField<TDelegate<void __cdecl(bool), FDefaultDelegateUserPolicy>*>(this, "AShooterGameSession.OnFindSessionsCompleteDelegate"); }
	TDelegate<void __cdecl(FName, enum EOnJoinSessionCompleteResult::Type), FDefaultDelegateUserPolicy>& OnJoinSessionCompleteDelegateField() { return *GetNativePointerField<TDelegate<void __cdecl(FName, enum EOnJoinSessionCompleteResult::Type), FDefaultDelegateUserPolicy>*>(this, "AShooterGameSession.OnJoinSessionCompleteDelegate"); }
	TDelegate<void __cdecl(int), FDefaultDelegateUserPolicy>& OnNumConnectedPlayersChangedDelegateField() { return *GetNativePointerField<TDelegate<void __cdecl(int), FDefaultDelegateUserPolicy>*>(this, "AShooterGameSession.OnNumConnectedPlayersChangedDelegate"); }
	FDelegateHandle& OnCreateSessionCompleteDelegateHandleField() { return *GetNativePointerField<FDelegateHandle*>(this, "AShooterGameSession.OnCreateSessionCompleteDelegateHandle"); }
	FDelegateHandle& OnStartSessionCompleteDelegateHandleField() { return *GetNativePointerField<FDelegateHandle*>(this, "AShooterGameSession.OnStartSessionCompleteDelegateHandle"); }
	FDelegateHandle& OnDestroySessionCompleteDelegateHandleField() { return *GetNativePointerField<FDelegateHandle*>(this, "AShooterGameSession.OnDestroySessionCompleteDelegateHandle"); }
	FDelegateHandle& OnFindSessionsCompleteDelegateHandleField() { return *GetNativePointerField<FDelegateHandle*>(this, "AShooterGameSession.OnFindSessionsCompleteDelegateHandle"); }
	FDelegateHandle& OnJoinSessionCompleteDelegateHandleField() { return *GetNativePointerField<FDelegateHandle*>(this, "AShooterGameSession.OnJoinSessionCompleteDelegateHandle"); }
	FDelegateHandle& OnFoundSessionDelegateHandleField() { return *GetNativePointerField<FDelegateHandle*>(this, "AShooterGameSession.OnFoundSessionDelegateHandle"); }
	TDelegate<void __cdecl(void), FDefaultDelegateUserPolicy>& OnFoundSessionDelegateField() { return *GetNativePointerField<TDelegate<void __cdecl(void), FDefaultDelegateUserPolicy>*>(this, "AShooterGameSession.OnFoundSessionDelegate"); }
	FShooterGameSessionParams& CurrentSessionParamsField() { return *GetNativePointerField<FShooterGameSessionParams*>(this, "AShooterGameSession.CurrentSessionParams"); }
	TSharedPtr<FShooterOnlineSessionSettings>& HostSettingsField() { return *GetNativePointerField<TSharedPtr<FShooterOnlineSessionSettings>*>(this, "AShooterGameSession.HostSettings"); }
	TSharedPtr<FShooterOnlineSearchSettings>& SearchSettingsField() { return *GetNativePointerField<TSharedPtr<FShooterOnlineSearchSettings>*>(this, "AShooterGameSession.SearchSettings"); }
	//AShooterGameSession::FOnCreatePresenceSessionComplete& CreatePresenceSessionCompleteEventField() { return *GetNativePointerField<AShooterGameSession::FOnCreatePresenceSessionComplete*>(this, "AShooterGameSession.CreatePresenceSessionCompleteEvent"); }
	//AShooterGameSession::FOnJoinSessionComplete& JoinSessionCompleteEventField() { return *GetNativePointerField<AShooterGameSession::FOnJoinSessionComplete*>(this, "AShooterGameSession.JoinSessionCompleteEvent"); }
	//AShooterGameSession::FOnFindSessionsComplete& FindSessionsCompleteEventField() { return *GetNativePointerField<AShooterGameSession::FOnFindSessionsComplete*>(this, "AShooterGameSession.FindSessionsCompleteEvent"); }
	//AShooterGameSession::FOnFoundSession& FoundSessionEventField() { return *GetNativePointerField<AShooterGameSession::FOnFoundSession*>(this, "AShooterGameSession.FoundSessionEvent"); }
	FDelegateHandle& OnInitializedSteelShieldHandleField() { return *GetNativePointerField<FDelegateHandle*>(this, "AShooterGameSession.OnInitializedSteelShieldHandle"); }
	TSharedPtr<FUniqueNetId const>& SteelShieldUserIdField() { return *GetNativePointerField<TSharedPtr<FUniqueNetId const>*>(this, "AShooterGameSession.SteelShieldUserId"); }
	FName& SteelShieldWithSessionNameField() { return *GetNativePointerField<FName*>(this, "AShooterGameSession.SteelShieldWithSessionName"); }
	FOnlineSessionSearchResult& SteelShieldSearchResultField() { return *GetNativePointerField<FOnlineSessionSearchResult*>(this, "AShooterGameSession.SteelShieldSearchResult"); }
	//AShooterGameSession::TrackedAdvertisingData& LastAdvertisedField() { return *GetNativePointerField<AShooterGameSession::TrackedAdvertisingData*>(this, "AShooterGameSession.LastAdvertised"); }
	FString& HostedServerPlatformField() { return *GetNativePointerField<FString*>(this, "AShooterGameSession.HostedServerPlatform"); }

	// Bitfields


	// Functions

	static UClass* StaticClass() { return NativeCall<UClass*>(nullptr, "AShooterGameSession.StaticClass()"); }
	static UGameServerQuerySubsystem* GetNitradoSubsystem() { return NativeCall<UGameServerQuerySubsystem*>(nullptr, "AShooterGameSession.GetNitradoSubsystem()"); }
	void OnStartOnlineGameComplete(FName WithSessionName, bool bWasSuccessful) { NativeCall<void, FName, bool>(this, "AShooterGameSession.OnStartOnlineGameComplete(FName,bool)", WithSessionName, bWasSuccessful); }
	void HandleMatchHasStarted() { NativeCall<void>(this, "AShooterGameSession.HandleMatchHasStarted()"); }
	void HandleMatchHasEnded() { NativeCall<void>(this, "AShooterGameSession.HandleMatchHasEnded()"); }
	void OnCreateSessionComplete(FName WithSessionName, bool bWasSuccessful) { NativeCall<void, FName, bool>(this, "AShooterGameSession.OnCreateSessionComplete(FName,bool)", WithSessionName, bWasSuccessful); }
	void OnDestroySessionComplete(FName WithSessionName, bool bWasSuccessful) { NativeCall<void, FName, bool>(this, "AShooterGameSession.OnDestroySessionComplete(FName,bool)", WithSessionName, bWasSuccessful); }
	void DelayedSessionDelete() { NativeCall<void>(this, "AShooterGameSession.DelayedSessionDelete()"); }
	void InitOptions(const FString* Options) { NativeCall<void, const FString*>(this, "AShooterGameSession.InitOptions(FString&)", Options); }
	//void InitHostSettings(FOnlineSessionSettings* InHostSettings) { NativeCall<void, FOnlineSessionSettings*>(this, "AShooterGameSession.InitHostSettings(FOnlineSessionSettings*)", InHostSettings); }
	void RegisterServer() { NativeCall<void>(this, "AShooterGameSession.RegisterServer()"); }
	int GetAveragePing() { return NativeCall<int>(this, "AShooterGameSession.GetAveragePing()"); }
	void UpdatePublishedSession() { NativeCall<void>(this, "AShooterGameSession.UpdatePublishedSession()"); }
	FString* ApproveLogin(FString* result, const FString* Options) { return NativeCall<FString*, FString*, const FString*>(this, "AShooterGameSession.ApproveLogin(FString&)", result, Options); }
	void OnNumConnectedPlayersChanged(int NewPlayersCount) { NativeCall<void, int>(this, "AShooterGameSession.OnNumConnectedPlayersChanged(int)", NewPlayersCount); }
	void Tick(float __formal) { NativeCall<void, float>(this, "AShooterGameSession.Tick(float)", __formal); }
	void OnFindSessionsComplete(bool bWasSuccessful) { NativeCall<void, bool>(this, "AShooterGameSession.OnFindSessionsComplete(bool)", bWasSuccessful); }
	void OnFoundSession() { NativeCall<void>(this, "AShooterGameSession.OnFoundSession()"); }
	void UpdateSearchResults() { NativeCall<void>(this, "AShooterGameSession.UpdateSearchResults()"); }
	void FindSessions(TSharedPtr<FUniqueNetId const>* UserId, FString* WithSessionFilter, bool bIsLAN, bool bIsPresence, bool bRecreateSearchSettings, unsigned int FindType, bool bQueryNotFullSessions, bool bPasswordServers, bool bPlatformSpecificServers, FString* ClusterId) { NativeCall<void, TSharedPtr<FUniqueNetId const>*, FString*, bool, bool, bool, unsigned int, bool, bool, bool, FString*>(this, "AShooterGameSession.FindSessions(TSharedPtr<FUniqueNetId,1>,FString,bool,bool,bool,EListSessionStatus::Type,bool,bool,bool,FString)", UserId, WithSessionFilter, bIsLAN, bIsPresence, bRecreateSearchSettings, FindType, bQueryNotFullSessions, bPasswordServers, bPlatformSpecificServers, ClusterId); }
	__int64 JoinSession(TSharedPtr<FUniqueNetId const>* UserId, FName WithSessionName, const FOnlineSessionSearchResult* SearchResult) { return NativeCall<__int64, TSharedPtr<FUniqueNetId const>*, FName, const FOnlineSessionSearchResult*>(this, "AShooterGameSession.JoinSession(TSharedPtr<FUniqueNetId,1>,FName,FOnlineSessionSearchResult&)", UserId, WithSessionName, SearchResult); }
	void OnSteelshieldInitialized(bool bSuccess) { NativeCall<void, bool>(this, "AShooterGameSession.OnSteelshieldInitialized(bool)", bSuccess); }
	void OnJoinSessionComplete(FName WithSessionName, EOnJoinSessionCompleteResult::Type Result) { NativeCall<void, FName, EOnJoinSessionCompleteResult::Type>(this, "AShooterGameSession.OnJoinSessionComplete(FName,EOnJoinSessionCompleteResult::Type)", WithSessionName, Result); }
	bool TravelToSession(int ControllerId, FName WithSessionName) { return NativeCall<bool, int, FName>(this, "AShooterGameSession.TravelToSession(int,FName)", ControllerId, WithSessionName); }
	bool KickPlayer(APlayerController* KickedPlayer, const FText* KickReason) { return NativeCall<bool, APlayerController*, const FText*>(this, "AShooterGameSession.KickPlayer(APlayerController*,FText&)", KickedPlayer, KickReason); }
	void Restart() { NativeCall<void>(this, "AShooterGameSession.Restart()"); }
	int GetConnectedPlayers(const FString* Auth) { return NativeCall<int, const FString*>(this, "AShooterGameSession.GetConnectedPlayers(FString&)", Auth); }
};