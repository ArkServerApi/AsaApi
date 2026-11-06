#pragma once
#include "RestoredNativeForward.h"
#include "FTimeout.h"
#include "BulkForward.h"


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
	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// TObjectPtr<ULevel>& CurrentLevelPendingVisibilityField();
	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// TObjectPtr<ULevel>& CurrentLevelPendingInvisibilityField();
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
	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// unsigned int& LWILastAssignedUIDField();
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
	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// BitFieldValue<bool, unsigned __int32> bDropDetail();
	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// BitFieldValue<bool, unsigned __int32> bAggressiveLOD();
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

	AActor* SpawnActor(UClass* Class, const UE::Math::TVector<double>* Location, const UE::Math::TRotator<double>* Rotation, const FActorSpawnParameters& SpawnParameters) { return NativeCall<AActor*, UClass*, const UE::Math::TVector<double>*, const UE::Math::TRotator<double>*, const FActorSpawnParameters&>(this, "UWorld.SpawnActor(UClass*,UE::Math::TVector<double>*,UE::Math::TRotator<double>*,FActorSpawnParameters&)", Class, Location, Rotation, SpawnParameters); }
	AActor* SpawnActor(UClass* Class, const UE::Math::TTransform<double>* UserTransformPtr, const FActorSpawnParameters& SpawnParameters) { return NativeCall<AActor*, UClass*, const UE::Math::TTransform<double>*, const FActorSpawnParameters&>(this, "UWorld.SpawnActor(UClass*,UE::Math::TTransform<double>*,FActorSpawnParameters&)", Class, UserTransformPtr, SpawnParameters); }
	bool NotifyAcceptingChannel(UChannel* Channel) { return NativeCall<bool, UChannel*>(this, "UWorld.NotifyAcceptingChannel(UChannel*)", Channel); }
	AGameStateBase* GetGameState() { return NativeCall<AGameStateBase*>(this, "UWorld.GetGameState<AShooterGameState>()"); }
	bool IsPartitionedWorld() { return NativeCall<bool>(this, "UWorld.IsPartitionedWorld()"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UWorld"); }
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
	AGameMode* GetAuthGameMode() { return NativeCall<AGameMode*>(this, "UWorld.GetAuthGameMode<AShooterGameMode>()"); }
	//AShooterGame_Menu* GetAuthGameMode<class AShooterGame_Menu>() { return NativeCall<AShooterGame_Menu*>(this, "UWorld.GetAuthGameMode<class AShooterGame_Menu>()"); }
	//UDataLayerSubsystem* GetSubsystem<class UDataLayerSubsystem>() { return NativeCall<UDataLayerSubsystem*>(this, "UWorld.GetSubsystem<class UDataLayerSubsystem>()"); }
	//ACustomGameMode* GetAuthGameMode<class ACustomGameMode>() { return NativeCall<ACustomGameMode*>(this, "UWorld.GetAuthGameMode<class ACustomGameMode>()"); }
	//APrimalGameMode* GetAuthGameMode<class APrimalGameMode>() { return NativeCall<APrimalGameMode*>(this, "UWorld.GetAuthGameMode<class APrimalGameMode>()"); }
	//ACameraActor* SpawnActor<class ACameraActor>(const FActorSpawnParameters* SpawnParameters) { return NativeCall<ACameraActor*, const FActorSpawnParameters*>(this, "UWorld.SpawnActor<class ACameraActor>(FActorSpawnParameters*)", SpawnParameters); }
	//UWorldPartitionSubsystem* GetSubsystem<class UWorldPartitionSubsystem>() { return NativeCall<UWorldPartitionSubsystem*>(this, "UWorld.GetSubsystem<class UWorldPartitionSubsystem>()"); }
	//UAutoDestroySubsystem* GetSubsystem<class UAutoDestroySubsystem>() { return NativeCall<UAutoDestroySubsystem*>(this, "UWorld.GetSubsystem<class UAutoDestroySubsystem>()"); }
	bool LineTraceTestByChannel(const UE::Math::TVector<double>* Start, const UE::Math::TVector<double>* End, ECollisionChannel TraceChannel, const FCollisionQueryParams* Params, const struct FCollisionResponseParams* ResponseParam) { return NativeCall<bool, const UE::Math::TVector<double>*, const UE::Math::TVector<double>*, ECollisionChannel, const FCollisionQueryParams*, const FCollisionResponseParams*>(this, "UWorld.LineTraceTestByChannel(UE::Math::TVector<double>&,UE::Math::TVector<double>&,ECollisionChannel,FCollisionQueryParams&,FCollisionResponseParams&)", Start, End, TraceChannel, Params, ResponseParam); }
	bool LineTraceSingleByChannel(FHitResult* OutHit, const UE::Math::TVector<double>* Start, const UE::Math::TVector<double>* End, ECollisionChannel TraceChannel, const FCollisionQueryParams* Params, const FCollisionResponseParams* ResponseParam) { return NativeCall<bool, FHitResult*, const UE::Math::TVector<double>*, const UE::Math::TVector<double>*, ECollisionChannel, const FCollisionQueryParams*, const FCollisionResponseParams*>(this, "UWorld.LineTraceSingleByChannel(FHitResult&,UE::Math::TVector<double>&,UE::Math::TVector<double>&,ECollisionChannel,FCollisionQueryParams&,FCollisionResponseParams&)", OutHit, Start, End, TraceChannel, Params, ResponseParam); }
	bool SweepTestByChannel(const UE::Math::TVector<double>* Start, const UE::Math::TVector<double>* End, const UE::Math::TQuat<double>* Rot, ECollisionChannel TraceChannel, const struct FCollisionShape* CollisionShape, const FCollisionQueryParams* Params, const FCollisionResponseParams* ResponseParam) { return NativeCall<bool, const UE::Math::TVector<double>*, const UE::Math::TVector<double>*, const UE::Math::TQuat<double>*, ECollisionChannel, const FCollisionShape*, const FCollisionQueryParams*, const FCollisionResponseParams*>(this, "UWorld.SweepTestByChannel(UE::Math::TVector<double>&,UE::Math::TVector<double>&,UE::Math::TQuat<double>&,ECollisionChannel,FCollisionShape&,FCollisionQueryParams&,FCollisionResponseParams&)", Start, End, Rot, TraceChannel, CollisionShape, Params, ResponseParam); }
	//bool SweepSingleByChannel(FHitResult* OutHit, const UE::Math::TVector<double>* Start, const UE::Math::TVector<double>* End, const UE::Math::TQuat<double>* Rot, ECollisionChannel TraceChannel, const FCollisionShape* CollisionShape, const FCollisionQueryParams* Params, const FCollisionResponseParams* ResponseParam) { return NativeCall<bool, FHitResult*, const UE::Math::TVector<double>*, const UE::Math::TVector<double>*, const UE::Math::TQuat<double>*, ECollisionChannel, const FCollisionShape*, const FCollisionQueryParams*, const FCollisionResponseParams*>(this, "UWorld.SweepSingleByChannel(FHitResult*,UE::Math::TVector<double>*,UE::Math::TVector<double>*,UE::Math::TQuat<double>*,ECollisionChannel,FCollisionShape*,FCollisionQueryParams*,FCollisionResponseParams*)", OutHit, Start, End, Rot, TraceChannel, CollisionShape, Params, ResponseParam); }
	//bool SweepMultiByChannel(TArray<FHitResult, TSizedDefaultAllocator<32> >* OutHits, const UE::Math::TVector<double>* Start, const UE::Math::TVector<double>* End, const UE::Math::TQuat<double>* Rot, ECollisionChannel TraceChannel, const FCollisionShape* CollisionShape, const FCollisionQueryParams* Params, const FCollisionResponseParams* ResponseParam) { return NativeCall<bool, TArray<FHitResult, TSizedDefaultAllocator<32> >*, const UE::Math::TVector<double>*, const UE::Math::TVector<double>*, const UE::Math::TQuat<double>*, ECollisionChannel, const FCollisionShape*, const FCollisionQueryParams*, const FCollisionResponseParams*>(this, "UWorld.SweepMultiByChannel(TArray<FHitResult,TSizedDefaultAllocator<32>>*,UE::Math::TVector<double>*,UE::Math::TVector<double>*,UE::Math::TQuat<double>*,ECollisionChannel,FCollisionShape*,FCollisionQueryParams*,FCollisionResponseParams*)", OutHits, Start, End, Rot, TraceChannel, CollisionShape, Params, ResponseParam); }
	//bool OverlapBlockingTestByChannel(const UE::Math::TVector<double>* Pos, const UE::Math::TQuat<double>* Rot, ECollisionChannel TraceChannel, const FCollisionShape* CollisionShape, const FCollisionQueryParams* Params, const FCollisionResponseParams* ResponseParam) { return NativeCall<bool, const UE::Math::TVector<double>*, const UE::Math::TQuat<double>*, ECollisionChannel, const FCollisionShape*, const FCollisionQueryParams*, const FCollisionResponseParams*>(this, "UWorld.OverlapBlockingTestByChannel(UE::Math::TVector<double>*,UE::Math::TQuat<double>*,ECollisionChannel,FCollisionShape*,FCollisionQueryParams*,FCollisionResponseParams*)", Pos, Rot, TraceChannel, CollisionShape, Params, ResponseParam); }
	//bool OverlapMultiByChannel(TArray<FOverlapResult, TSizedDefaultAllocator<32> >* OutOverlaps, const UE::Math::TVector<double>* Pos, const UE::Math::TQuat<double>* Rot, ECollisionChannel TraceChannel, const FCollisionShape* CollisionShape, const FCollisionQueryParams* Params, const FCollisionResponseParams* ResponseParam) { return NativeCall<bool, TArray<FOverlapResult, TSizedDefaultAllocator<32> >*, const UE::Math::TVector<double>*, const UE::Math::TQuat<double>*, ECollisionChannel, const FCollisionShape*, const FCollisionQueryParams*, const FCollisionResponseParams*>(this, "UWorld.OverlapMultiByChannel(TArray<FOverlapResult,TSizedDefaultAllocator<32>>*,UE::Math::TVector<double>*,UE::Math::TQuat<double>*,ECollisionChannel,FCollisionShape*,FCollisionQueryParams*,FCollisionResponseParams*)", OutOverlaps, Pos, Rot, TraceChannel, CollisionShape, Params, ResponseParam); }
	bool LineTraceSingleByObjectType(FHitResult* OutHit, const UE::Math::TVector<double>* Start, const UE::Math::TVector<double>* End, const struct FCollisionObjectQueryParams* ObjectQueryParams, const FCollisionQueryParams* Params) { return NativeCall<bool, FHitResult*, const UE::Math::TVector<double>*, const UE::Math::TVector<double>*, const FCollisionObjectQueryParams*, const FCollisionQueryParams*>(this, "UWorld.LineTraceSingleByObjectType(FHitResult&,UE::Math::TVector<double>&,UE::Math::TVector<double>&,FCollisionObjectQueryParams&,FCollisionQueryParams&)", OutHit, Start, End, ObjectQueryParams, Params); }
	bool SweepSingleByObjectType(FHitResult* OutHit, const UE::Math::TVector<double>* Start, const UE::Math::TVector<double>* End, const UE::Math::TQuat<double>* Rot, const FCollisionObjectQueryParams* ObjectQueryParams, const FCollisionShape* CollisionShape, const FCollisionQueryParams* Params) { return NativeCall<bool, FHitResult*, const UE::Math::TVector<double>*, const UE::Math::TVector<double>*, const UE::Math::TQuat<double>*, const FCollisionObjectQueryParams*, const FCollisionShape*, const FCollisionQueryParams*>(this, "UWorld.SweepSingleByObjectType(FHitResult&,UE::Math::TVector<double>&,UE::Math::TVector<double>&,UE::Math::TQuat<double>&,FCollisionObjectQueryParams&,FCollisionShape&,FCollisionQueryParams&)", OutHit, Start, End, Rot, ObjectQueryParams, CollisionShape, Params); }
	bool SweepMultiByObjectType(TArray<FHitResult, TSizedDefaultAllocator<32> >* OutHits, const UE::Math::TVector<double>* Start, const UE::Math::TVector<double>* End, const UE::Math::TQuat<double>* Rot, const FCollisionObjectQueryParams* ObjectQueryParams, const FCollisionShape* CollisionShape, const FCollisionQueryParams* Params) { return NativeCall<bool, TArray<FHitResult, TSizedDefaultAllocator<32> >*, const UE::Math::TVector<double>*, const UE::Math::TVector<double>*, const UE::Math::TQuat<double>*, const FCollisionObjectQueryParams*, const FCollisionShape*, const FCollisionQueryParams*>(this, "UWorld.SweepMultiByObjectType(TArray<FHitResult,TSizedDefaultAllocator<32>>&,UE::Math::TVector<double>&,UE::Math::TVector<double>&,UE::Math::TQuat<double>&,FCollisionObjectQueryParams&,FCollisionShape&,FCollisionQueryParams&)", OutHits, Start, End, Rot, ObjectQueryParams, CollisionShape, Params); }
	bool SweepSingleByProfile(FHitResult* OutHit, const UE::Math::TVector<double>* Start, const UE::Math::TVector<double>* End, const UE::Math::TQuat<double>* Rot, FName ProfileName, const FCollisionShape* CollisionShape, const FCollisionQueryParams* Params) { return NativeCall<bool, FHitResult*, const UE::Math::TVector<double>*, const UE::Math::TVector<double>*, const UE::Math::TQuat<double>*, FName, const FCollisionShape*, const FCollisionQueryParams*>(this, "UWorld.SweepSingleByProfile(FHitResult&,UE::Math::TVector<double>&,UE::Math::TVector<double>&,UE::Math::TQuat<double>&,FName,FCollisionShape&,FCollisionQueryParams&)", OutHit, Start, End, Rot, ProfileName, CollisionShape, Params); }
	bool SweepMultiByProfile(TArray<FHitResult, TSizedDefaultAllocator<32> >* OutHits, const UE::Math::TVector<double>* Start, const UE::Math::TVector<double>* End, const UE::Math::TQuat<double>* Rot, FName ProfileName, const FCollisionShape* CollisionShape, const FCollisionQueryParams* Params) { return NativeCall<bool, TArray<FHitResult, TSizedDefaultAllocator<32> >*, const UE::Math::TVector<double>*, const UE::Math::TVector<double>*, const UE::Math::TQuat<double>*, FName, const FCollisionShape*, const FCollisionQueryParams*>(this, "UWorld.SweepMultiByProfile(TArray<FHitResult,TSizedDefaultAllocator<32>>&,UE::Math::TVector<double>&,UE::Math::TVector<double>&,UE::Math::TQuat<double>&,FName,FCollisionShape&,FCollisionQueryParams&)", OutHits, Start, End, Rot, ProfileName, CollisionShape, Params); }
	//bool ComponentOverlapMultiByChannel(TArray<FOverlapResult, TSizedDefaultAllocator<32> >* OutOverlaps, const UPrimitiveComponent* PrimComp, const UE::Math::TVector<double>* Pos, const UE::Math::TQuat<double>* Quat, ECollisionChannel TraceChannel, const FComponentQueryParams* Params, const FCollisionObjectQueryParams* ObjectQueryParams) { return NativeCall<bool, TArray<FOverlapResult, TSizedDefaultAllocator<32> >*, const UPrimitiveComponent*, const UE::Math::TVector<double>*, const UE::Math::TQuat<double>*, ECollisionChannel, const FComponentQueryParams*, const FCollisionObjectQueryParams*>(this, "UWorld.ComponentOverlapMultiByChannel(TArray<FOverlapResult,TSizedDefaultAllocator<32>>*,UPrimitiveComponent*,UE::Math::TVector<double>*,UE::Math::TQuat<double>*,ECollisionChannel,FComponentQueryParams*,FCollisionObjectQueryParams*)", OutOverlaps, PrimComp, Pos, Quat, TraceChannel, Params, ObjectQueryParams); }
	bool ComponentSweepMultiByChannel(TArray<FHitResult, TSizedDefaultAllocator<32> >* OutHits, UPrimitiveComponent* PrimComp, const UE::Math::TVector<double>* Start, const UE::Math::TVector<double>* End, const UE::Math::TQuat<double>* Rot, ECollisionChannel TraceChannel, const struct FComponentQueryParams* Params) { return NativeCall<bool, TArray<FHitResult, TSizedDefaultAllocator<32> >*, UPrimitiveComponent*, const UE::Math::TVector<double>*, const UE::Math::TVector<double>*, const UE::Math::TQuat<double>*, ECollisionChannel, const FComponentQueryParams*>(this, "UWorld.ComponentSweepMultiByChannel(TArray<FHitResult,TSizedDefaultAllocator<32>>&,UPrimitiveComponent*,UE::Math::TVector<double>&,UE::Math::TVector<double>&,UE::Math::TQuat<double>&,ECollisionChannel,FComponentQueryParams&)", OutHits, PrimComp, Start, End, Rot, TraceChannel, Params); }
	FTraceHandle* AsyncLineTraceByChannel(FTraceHandle* result, EAsyncTraceType InTraceType, const UE::Math::TVector<double>* Start, const UE::Math::TVector<double>* End, ECollisionChannel TraceChannel, const FCollisionQueryParams* Params, const FCollisionResponseParams* ResponseParam, const TDelegate<void __cdecl(FTraceHandle const&, FTraceDatum&), FDefaultDelegateUserPolicy>* InDelegate, unsigned int UserData) { return NativeCall<FTraceHandle*, FTraceHandle*, EAsyncTraceType, const UE::Math::TVector<double>*, const UE::Math::TVector<double>*, ECollisionChannel, const FCollisionQueryParams*, const FCollisionResponseParams*, const TDelegate<void __cdecl(FTraceHandle const&, FTraceDatum&), FDefaultDelegateUserPolicy>*, unsigned int>(this, "UWorld.AsyncLineTraceByChannel(EAsyncTraceType,UE::Math::TVector<double>&,UE::Math::TVector<double>&,ECollisionChannel,FCollisionQueryParams&,FCollisionResponseParams&,TDelegate<void__cdecl(FTraceHandle&,FTraceDatum&)>*,unsignedint)", result, InTraceType, Start, End, TraceChannel, Params, ResponseParam, InDelegate, UserData); }
	void WaitForAllAsyncTraceTasks() { NativeCall<void>(this, "UWorld.WaitForAllAsyncTraceTasks()"); }
	void ResetAsyncTrace() { NativeCall<void>(this, "UWorld.ResetAsyncTrace()"); }
	// 	AActor* SpawnActorDeferred(UClass* Class, const UE::Math::TTransform<double>* Transform, AActor* Owner, APawn* Instigator, ESpawnActorCollisionHandlingMethod CollisionHandlingOverride, ESpawnActorScaleMethod TransformScaleMethod) { return NativeCall<AActor*, UClass*, const UE::Math::TTransform<double>*, AActor*, APawn*, ESpawnActorCollisionHandlingMethod, ESpawnActorScaleMethod>(this, "UWorld.SpawnActorDeferred<class AActor>(UClass*,UE::Math::TTransform<double>*,AActor*,APawn*,ESpawnActorCollisionHandlingMethod,ESpawnActorScaleMethod)", Class, Transform, Owner, Instigator, CollisionHandlingOverride, TransformScaleMethod); }
	// FUNCTION MISSING: UWorld.SpawnActorDeferred<class AActor>(UClass*,UE::Math::TTransform<double>*,AActor*,APawn*,ESpawnActorCollisionHandlingMethod,ESpawnActorScaleMethod)
	AActor* SpawnActorAbsolute(UClass* Class, const UE::Math::TTransform<double>* AbsoluteTransform, const FActorSpawnParameters* SpawnParameters) { return NativeCall<AActor*, UClass*, const UE::Math::TTransform<double>*, const FActorSpawnParameters*>(this, "UWorld.SpawnActorAbsolute(UClass*,UE::Math::TTransform<double>&,FActorSpawnParameters&)", Class, AbsoluteTransform, SpawnParameters); }
	AActor* SpawnActor(UClass* Class, const UE::Math::TVector<double>* Location, const UE::Math::TRotator<double>* Rotation, const FActorSpawnParameters* SpawnParameters) { return NativeCall<AActor*, UClass*, const UE::Math::TVector<double>*, const UE::Math::TRotator<double>*, const FActorSpawnParameters*>(this, "UWorld.SpawnActor(UClass*,UE::Math::TVector<double>*,UE::Math::TRotator<double>*,FActorSpawnParameters&)", Class, Location, Rotation, SpawnParameters); }
	AActor* SpawnActor(UClass* Class, const UE::Math::TTransform<double>* UserTransformPtr, const FActorSpawnParameters* SpawnParameters) { return NativeCall<AActor*, UClass*, const UE::Math::TTransform<double>*, const FActorSpawnParameters*>(this, "UWorld.SpawnActor(UClass*,UE::Math::TTransform<double>*,FActorSpawnParameters&)", Class, UserTransformPtr, SpawnParameters); }
	bool DestroyActor(AActor* ThisActor, bool bNetForce, bool bShouldModifyLevel) { return NativeCall<bool, AActor*, bool, bool>(this, "UWorld.DestroyActor(AActor*,bool,bool)", ThisActor, bNetForce, bShouldModifyLevel); }
	APlayerController* SpawnPlayActor(UPlayer* NewPlayer, ENetRole RemoteRole, const FURL& InURL, const FUniqueNetIdRepl& UniqueId, FString& Error, unsigned char InNetPlayerIndex, int InLocalPlayerIdentifier) { return NativeCall<APlayerController*, UPlayer*, ENetRole, const FURL&, const FUniqueNetIdRepl&, FString&, unsigned char, int>(this, "UWorld.SpawnPlayActor(UPlayer*,ENetRole,FURL&,FUniqueNetIdRepl&,FString&,unsignedchar,int)", NewPlayer, RemoteRole, InURL, UniqueId, Error, InNetPlayerIndex, InLocalPlayerIdentifier); }
	static bool FindTeleportSpot() { return NativeCall<bool>(nullptr, "UWorld.FindTeleportSpot(AActor*,UE::Math::TVector<double>&,UE::Math::TRotator<double>)"); }
	static char EncroachingBlockingGeometry() { return NativeCall<char>(nullptr, "UWorld.EncroachingBlockingGeometry(AActor*,UE::Math::TVector<double>,UE::Math::TRotator<double>,UE::Math::TVector<double>*)"); }
	// 	void TickNetClient(float DeltaSeconds) { NativeCall<void, float>(this, "UWorld.TickNetClient(float)", DeltaSeconds); }
	// FUNCTION MISSING: UWorld.TickNetClient(float)
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
	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// static void StaticRegisterNativesUWorld();
	void Serialize(FStructuredArchiveRecord Record) { NativeCall<void, FStructuredArchiveRecord>(this, "UWorld.Serialize(FStructuredArchiveRecord)", Record); }
	void Serialize(FArchive* Ar) { NativeCall<void, FArchive*>(this, "UWorld.Serialize(FStructuredArchiveRecord)", Ar); }
	static void AddReferencedObjects(UObject* InThis, FReferenceCollector* Collector) { NativeCall<void, UObject*, FReferenceCollector*>(nullptr, "UWorld.AddReferencedObjects(UObject*,FReferenceCollector&)", InThis, Collector); }
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
// 	void UpdateParameterCollectionInstances(bool bUpdateInstanceUniformBuffers, bool bRecreateUniformBuffer) { NativeCall<void, bool, bool>(this, "UWorld.UpdateParameterCollectionInstances(bool,bool)", bUpdateInstanceUniformBuffers, bRecreateUniformBuffer); }
// FUNCTION MISSING: UWorld.UpdateParameterCollectionInstances(bool,bool)
	//UAISystemBase* CreateAISystem() { return NativeCall<UAISystemBase*>(this, "UWorld.CreateAISystem()"); }
	static void InitWorld() { NativeCall<void>(nullptr, "UWorld.InitWorld(FWorldInitializationValues)"); }
	void ConditionallyCreateDefaultLevelCollections() { NativeCall<void>(this, "UWorld.ConditionallyCreateDefaultLevelCollections()"); }
	static void InitializeNewWorld() { NativeCall<void>(nullptr, "UWorld.InitializeNewWorld(FWorldInitializationValues,bool)"); }
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
	static FString* ConvertToPIEPackageName(FString* result, const FString* PackageName, int PIEInstanceID) { return NativeCall<FString*, FString*, const FString*, int>(nullptr, "UWorld.ConvertToPIEPackageName(FString&,int)", result, PackageName, PIEInstanceID); }
	static FString* StripPIEPrefixFromPackageName(FString* result, const FString* PrefixedName, const FString* Prefix) { return NativeCall<FString*, FString*, const FString*, const FString*>(nullptr, "UWorld.StripPIEPrefixFromPackageName(FString&,FString&)", result, PrefixedName, Prefix); }
	bool RemapCompiledScriptActor(FString* Str) { return NativeCall<bool, FString*>(this, "UWorld.RemapCompiledScriptActor(FString&)", Str); }
	void BlockTillLevelStreamingCompleted() { NativeCall<void>(this, "UWorld.BlockTillLevelStreamingCompleted()"); }
	void InternalUpdateStreamingState() { NativeCall<void>(this, "UWorld.InternalUpdateStreamingState()"); }
	void UpdateLevelStreaming(const TOptional<UE::FTimeout const >& ExternalTimeout) { NativeCall<void, const TOptional<UE::FTimeout const >&>(this, "UWorld.UpdateLevelStreaming(TOptional<UE::FTimeout>&)", ExternalTimeout); }
	//void AddStreamingLevel(ULevelStreaming* StreamingLevelToAdd) { NativeCall<void, ULevelStreaming*>(this, "UWorld.AddStreamingLevel(ULevelStreaming*)", StreamingLevelToAdd); }
	static void SetStreamingLevels() { NativeCall<void>(nullptr, "UWorld.SetStreamingLevels(TArrayView<ULevelStreaming*const,int>)"); }
	bool RemoveStreamingLevelAt(int IndexToRemove) { return NativeCall<bool, int>(this, "UWorld.RemoveStreamingLevelAt(int)", IndexToRemove); }
	//bool RemoveStreamingLevel(ULevelStreaming* StreamingLevelToRemove) { return NativeCall<bool, ULevelStreaming*>(this, "UWorld.RemoveStreamingLevel(ULevelStreaming*)", StreamingLevelToRemove); }
	void PopulateStreamingLevelsToConsider() { NativeCall<void>(this, "UWorld.PopulateStreamingLevelsToConsider()"); }
	void FlushLevelStreaming(EFlushLevelStreamingType FlushType) { NativeCall<void, EFlushLevelStreamingType>(this, "UWorld.FlushLevelStreaming(EFlushLevelStreamingType)", FlushType); }
	bool IsVisibilityRequestPending() { return NativeCall<bool>(this, "UWorld.IsVisibilityRequestPending()"); }
	bool AreAlwaysLoadedLevelsLoaded() { return NativeCall<bool>(this, "UWorld.AreAlwaysLoadedLevelsLoaded()"); }
	void HandleTimelineScrubbed() { NativeCall<void>(this, "UWorld.HandleTimelineScrubbed()"); }
	bool HandleDemoScrubCommand(const wchar_t* Cmd, FOutputDevice* Ar, UWorld* InWorld) { return NativeCall<bool, const wchar_t*, FOutputDevice*, UWorld*>(this, "UWorld.HandleDemoScrubCommand(wchar_t*,FOutputDevice&,UWorld*)", Cmd, Ar, InWorld); }
	// 	bool HandleDemoSpeedCommand(const wchar_t* Cmd, FOutputDevice* Ar, UWorld* InWorld) { return NativeCall<bool, const wchar_t*, FOutputDevice*, UWorld*>(this, "UWorld.HandleDemoSpeedCommand(wchar_t*,FOutputDevice*,UWorld*)", Cmd, Ar, InWorld); }
	// FUNCTION MISSING: UWorld.HandleDemoSpeedCommand(wchar_t*,FOutputDevice*,UWorld*)
	bool Exec(UWorld* InWorld, const wchar_t* Cmd, FOutputDevice* Ar) { return NativeCall<bool, UWorld*, const wchar_t*, FOutputDevice*>(this, "UWorld.Exec(UWorld*,wchar_t*,FOutputDevice&)", InWorld, Cmd, Ar); }
	bool HandleDemoRecordCommand(const wchar_t* Cmd, FOutputDevice* Ar, UWorld* InWorld) { return NativeCall<bool, const wchar_t*, FOutputDevice*, UWorld*>(this, "UWorld.HandleDemoRecordCommand(wchar_t*,FOutputDevice&,UWorld*)", Cmd, Ar, InWorld); }
	bool HandleDemoPlayCommand(const wchar_t* Cmd, FOutputDevice* Ar, UWorld* InWorld) { return NativeCall<bool, const wchar_t*, FOutputDevice*, UWorld*>(this, "UWorld.HandleDemoPlayCommand(wchar_t*,FOutputDevice&,UWorld*)", Cmd, Ar, InWorld); }
	void DestroyDemoNetDriver() { NativeCall<void>(this, "UWorld.DestroyDemoNetDriver()"); }
	bool SetGameMode(const FURL* InURL) { return NativeCall<bool, const FURL*>(this, "UWorld.SetGameMode(FURL&)", InURL); }
	void InitializeActorsForPlay(const FURL* InURL, bool bResetTime, FRegisterComponentContext* Context) { NativeCall<void, const FURL*, bool, FRegisterComponentContext*>(this, "UWorld.InitializeActorsForPlay(FURL&,bool,FRegisterComponentContext*)", InURL, bResetTime, Context); }
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
	void NotifyControlMessage(UNetConnection* Connection, unsigned __int8 MessageType, struct FInBunch* Bunch) { NativeCall<void, UNetConnection*, unsigned __int8, FInBunch*>(this, "UWorld.NotifyControlMessage(UNetConnection*,unsignedchar,FInBunch&)", Connection, MessageType, Bunch); }
	bool Listen(FURL* InURL) { return NativeCall<bool, FURL*>(this, "UWorld.Listen(FURL&)", InURL); }
	FTimerManager* GetTimerManager() { return NativeCall<FTimerManager*>(this, "UWorld.GetTimerManager()"); }
	static char SetNewWorldOrigin() { return NativeCall<char>(nullptr, "UWorld.SetNewWorldOrigin(UE::Math::TIntVector3<int>)"); }
	void SeamlessTravel(const FString* SeamlessTravelURL, bool bAbsolute) { NativeCall<void, const FString*, bool>(this, "UWorld.SeamlessTravel(FString&,bool)", SeamlessTravelURL, bAbsolute); }
	bool IsInSeamlessTravel() { return NativeCall<bool>(this, "UWorld.IsInSeamlessTravel()"); }
	int GetActorCount() { return NativeCall<int>(this, "UWorld.GetActorCount()"); }
	bool IsGameWorld() { return NativeCall<bool>(this, "UWorld.IsGameWorld()"); }
	static FString* RemovePIEPrefix(FString* result, const FString* Source, int* OutPIEInstanceID) { return NativeCall<FString*, FString*, const FString*, int*>(nullptr, "UWorld.RemovePIEPrefix(FString&,int*)", result, Source, OutPIEInstanceID); }
	static UWorld* FindWorldInPackage(UPackage* Package) { return NativeCall<UWorld*, UPackage*>(nullptr, "UWorld.FindWorldInPackage(UPackage*)", Package); }
	static UWorld* FollowWorldRedirectorInPackage(UPackage* Package, UObjectRedirector** OptionalOutRedirector) { return NativeCall<UWorld*, UPackage*, UObjectRedirector**>(nullptr, "UWorld.FollowWorldRedirectorInPackage(UPackage*,UObjectRedirector**)", Package, OptionalOutRedirector); }
	bool ServerTravel(const FString* FURL, bool bAbsolute, bool bShouldSkipGameNotify) { return NativeCall<bool, const FString*, bool, bool>(this, "UWorld.ServerTravel(FString&,bool,bool)", FURL, bAbsolute, bShouldSkipGameNotify); }
	//void SetNavigationSystem(UNavigationSystemBase* InNavigationSystem) { NativeCall<void, UNavigationSystemBase*>(this, "UWorld.SetNavigationSystem(UNavigationSystemBase*)", InNavigationSystem); }
	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// ENetMode InternalGetNetMode();
	bool IsRecordingClientReplay() { return NativeCall<bool>(this, "UWorld.IsRecordingClientReplay()"); }
	// 	ENetMode AttemptDeriveFromURL() { return NativeCall<ENetMode>(this, "UWorld.AttemptDeriveFromURL()"); }
	// FUNCTION MISSING: UWorld.AttemptDeriveFromURL()
	void SetGameState(AGameStateBase* NewGameState) { NativeCall<void, AGameStateBase*>(this, "UWorld.SetGameState(AGameStateBase*)", NewGameState); }
	//FLevelCollection* FindOrAddCollectionByType(const ELevelCollectionType InType) { return NativeCall<FLevelCollection*, const ELevelCollectionType>(this, "UWorld.FindOrAddCollectionByType(ELevelCollectionType)", InType); }
	void SetActiveLevelCollection(int LevelCollectionIndex) { NativeCall<void, int>(this, "UWorld.SetActiveLevelCollection(int)", LevelCollectionIndex); }
	bool ResolveSubobject(const wchar_t* SubObjectPath, UObject** OutObject, bool bLoadIfExists) { return NativeCall<bool, const wchar_t*, UObject**, bool>(this, "UWorld.ResolveSubobject(wchar_t*,UObject*&,bool)", SubObjectPath, OutObject, bLoadIfExists); }
	FPrimaryAssetId* GetPrimaryAssetId(FPrimaryAssetId* result) { return NativeCall<FPrimaryAssetId*, FPrimaryAssetId*>(this, "UWorld.GetPrimaryAssetId()", result); }
	//void InsertPostProcessVolume(IInterface_PostProcessVolume* InVolume) { NativeCall<void, IInterface_PostProcessVolume*>(this, "UWorld.InsertPostProcessVolume(IInterface_PostProcessVolume*)", InVolume); }
	//void RemovePostProcessVolume(IInterface_PostProcessVolume* InVolume) { NativeCall<void, IInterface_PostProcessVolume*>(this, "UWorld.RemovePostProcessVolume(IInterface_PostProcessVolume*)", InVolume); }
	static void AddPostProcessingSettings() { NativeCall<void>(nullptr, "UWorld.AddPostProcessingSettings(UE::Math::TVector<double>,FSceneView*)"); }
	//void SetAudioDevice(const FAudioDeviceHandle* InHandle) { NativeCall<void, const FAudioDeviceHandle*>(this, "UWorld.SetAudioDevice(FAudioDeviceHandle*)", InHandle); }
	//FAudioDeviceHandle* GetAudioDevice(FAudioDeviceHandle* result) { return NativeCall<FAudioDeviceHandle*, FAudioDeviceHandle*>(this, "UWorld.GetAudioDevice(FAudioDeviceHandle*)", result); }
	FAudioDevice* GetAudioDeviceRaw() { return NativeCall<FAudioDevice*>(this, "UWorld.GetAudioDeviceRaw()"); }
	//UHLODSubsystem* GetSubsystem<class UHLODSubsystem>() { return NativeCall<UHLODSubsystem*>(this, "UWorld.GetSubsystem<class UHLODSubsystem>()"); }

	static UClass* StaticClass() { return AsaApi::ResolveClass("UWorld"); }

	FStreamingLevelsToConsider& StreamingLevelsToConsiderField() { return *GetNativePointerField<FStreamingLevelsToConsider*>(this, "UWorld.StreamingLevelsToConsider"); }
	bool& bAllowDeferredPhysicsStateCreationField() { return *GetNativePointerField<bool*>(this, "UWorld.bAllowDeferredPhysicsStateCreation"); }
	TEnumAsByte<ERHIFeatureLevel::Type>& FeatureLevelField() { return *GetNativePointerField<TEnumAsByte<ERHIFeatureLevel::Type>*>(this, "UWorld.FeatureLevel"); }
	TEnumAsByte<EWorldType::Type>& WorldTypeField() { return *GetNativePointerField<TEnumAsByte<EWorldType::Type>*>(this, "UWorld.WorldType"); }
	bool& bIsBeingCleanedUpField() { return *GetNativePointerField<bool*>(this, "UWorld.bIsBeingCleanedUp"); }
	FAudioDeviceHandle& AudioDeviceHandleField() { return *GetNativePointerField<FAudioDeviceHandle*>(this, "UWorld.AudioDeviceHandle"); }
	FSceneInterface*& SceneField() { return *GetNativePointerField<FSceneInterface**>(this, "UWorld.Scene"); }
	FPhysScene_Chaos*& PhysicsSceneField() { return *GetNativePointerField<FPhysScene_Chaos**>(this, "UWorld.PhysicsScene"); }
	FWorldAsyncTraceState& AsyncTraceStateField() { return *GetNativePointerField<FWorldAsyncTraceState*>(this, "UWorld.AsyncTraceState"); }
	FLatentActionManager& LatentActionManagerField() { return *GetNativePointerField<FLatentActionManager*>(this, "UWorld.LatentActionManager"); }
	FURL& URLField() { return *GetNativePointerField<FURL*>(this, "UWorld.URL"); }
	FStartPhysicsTickFunction& StartPhysicsTickFunctionField() { return *GetNativePointerField<FStartPhysicsTickFunction*>(this, "UWorld.StartPhysicsTickFunction"); }
	FEndPhysicsTickFunction& EndPhysicsTickFunctionField() { return *GetNativePointerField<FEndPhysicsTickFunction*>(this, "UWorld.EndPhysicsTickFunction"); }
	TArray<IInterface_PostProcessVolume*, TSizedDefaultAllocator<32> >& PostProcessVolumesField() { return *GetNativePointerField<TArray<IInterface_PostProcessVolume*, TSizedDefaultAllocator<32> >*>(this, "UWorld.PostProcessVolumes"); }
	TArray<double, TSizedDefaultAllocator<32> >& PostProcessVolumeCachedSizesField() { return *GetNativePointerField<TArray<double, TSizedDefaultAllocator<32> >*>(this, "UWorld.PostProcessVolumeCachedSizes"); }
	TArray<AAudioVolume*, TSizedDefaultAllocator<32> >& AudioVolumesField() { return *GetNativePointerField<TArray<AAudioVolume*, TSizedDefaultAllocator<32> >*>(this, "UWorld.AudioVolumes"); }
	float& DeltaTimeAlterationField() { return *GetNativePointerField<float*>(this, "UWorld.DeltaTimeAlteration"); }
	EFlushLevelStreamingType& FlushLevelStreamingTypeField() { return *GetNativePointerField<EFlushLevelStreamingType*>(this, "UWorld.FlushLevelStreamingType"); }
	FWorldInGamePerformanceTrackers*& PerfTrackersField() { return *GetNativePointerField<FWorldInGamePerformanceTrackers**>(this, "UWorld.PerfTrackers"); }
	FParticlePerfStats*& ParticlePerfStatsField() { return *GetNativePointerField<FParticlePerfStats**>(this, "UWorld.ParticlePerfStats"); }
	bool& bBroadcastLevelsChangedEventIsEnabledField() { return *GetNativePointerField<bool*>(this, "UWorld.bBroadcastLevelsChangedEventIsEnabled"); }
	FWorldPSCPool& PSCPoolField() { return *GetNativePointerField<FWorldPSCPool*>(this, "UWorld.PSCPool"); }
	FWorldSubsystemCollection& SubsystemCollectionField() { return *GetNativePointerField<FWorldSubsystemCollection*>(this, "UWorld.SubsystemCollection"); }
	BitFieldValue<bool, unsigned char> bAllowLumenPrimitiveTrackingInPreviewWorld() { return { this, "UWorld.bAllowLumenPrimitiveTrackingInPreviewWorld"}; }
	BitFieldValue<bool, unsigned char> bIsThePostGCDelegateRegistered() { return { this, "UWorld.bIsThePostGCDelegateRegistered"}; }
	const AServerStreamingLevelsVisibility* GetServerStreamingLevelsVisibility() { return NativeCall<const AServerStreamingLevelsVisibility*>(this, "UWorld.GetServerStreamingLevelsVisibility()"); }
	UAISystemBase* CreateAISystem() { return NativeCall<UAISystemBase*>(this, "UWorld.CreateAISystem()"); }
	EAcceptConnection::Type NotifyAcceptingConnection() { return NativeCall<EAcceptConnection::Type>(this, "UWorld.NotifyAcceptingConnection()"); }
	void CancelPendingMapChange() { NativeCall<void>(this, "UWorld.CancelPendingMapChange()"); }
	bool GetAllowDeferredPhysicsStateCreation() { return NativeCall<bool>(this, "UWorld.GetAllowDeferredPhysicsStateCreation()"); }
	void ToggleHLODHack0() { NativeCall<void>(this, "UWorld.ToggleHLODHack0()"); }
	void SetBegunPlay(bool bHasBegunPlay) { NativeCall<void, bool>(this, "UWorld.SetBegunPlay(bool)", bHasBegunPlay); }
	void SetNavigationSystem(UNavigationSystemBase* InNavigationSystem) { NativeCall<void, UNavigationSystemBase*>(this, "UWorld.SetNavigationSystem(UNavigationSystemBase*)", InNavigationSystem); }
	void SetShouldForceUnloadStreamingLevels(bool bInShouldForceUnloadStreamingLevels) { NativeCall<void, bool>(this, "UWorld.SetShouldForceUnloadStreamingLevels(bool)", bInShouldForceUnloadStreamingLevels); }
	void SpawnAndSetNoPawnPlayerController(UNetConnection* Connection, unsigned char NetPlayerIndex, int LocalPlayerIdentifier) { NativeCall<void, UNetConnection*, unsigned char, int>(this, "UWorld.SpawnAndSetNoPawnPlayerController(UNetConnection*,unsignedchar,int)", Connection, NetPlayerIndex, LocalPlayerIdentifier); }
	bool AllowLevelLoadRequests() { return NativeCall<bool>(this, "UWorld.AllowLevelLoadRequests()"); }
	static FString* BuildPIEPackagePrefix(FString* result, int PIEInstanceID) { return NativeCall<FString*, FString*, int>(nullptr, "UWorld.BuildPIEPackagePrefix(int)", result, PIEInstanceID); }
	bool AllowAudioPlayback() { return NativeCall<bool>(this, "UWorld.AllowAudioPlayback()"); }
	const FLevelCollection* GetActiveLevelCollection() { return NativeCall<const FLevelCollection*>(this, "UWorld.GetActiveLevelCollection()"); }
	FSceneInterface* GetScene() { return NativeCall<FSceneInterface*>(this, "UWorld.GetScene()"); }
	bool HasBegunPlay() { return NativeCall<bool>(this, "UWorld.HasBegunPlay()"); }
	void OnPostGC() { NativeCall<void>(this, "UWorld.OnPostGC()"); }
	FLatentActionManager& GetLatentActionManager() { return NativeCall<FLatentActionManager&>(this, "UWorld.GetLatentActionManager()"); }
	void CreateFXSystem() { NativeCall<void>(this, "UWorld.CreateFXSystem()"); }
	void FinishAsyncTrace() { NativeCall<void>(this, "UWorld.FinishAsyncTrace()"); }
	void BroadcastPostTickFlush(float DeltaTime) { NativeCall<void, float>(this, "UWorld.BroadcastPostTickFlush(float)", DeltaTime); }
	AWorldDataLayers* GetWorldDataLayers() { return NativeCall<AWorldDataLayers*>(this, "UWorld.GetWorldDataLayers()"); }
	void EnsureCollisionTreeIsBuilt() { NativeCall<void>(this, "UWorld.EnsureCollisionTreeIsBuilt()"); }
	int FindCollectionIndexByType(ELevelCollectionType InType) { return NativeCall<int, ELevelCollectionType>(this, "UWorld.FindCollectionIndexByType(ELevelCollectionType)", InType); }
	FLevelCollection* FindCollectionByType(ELevelCollectionType InType) { return NativeCall<FLevelCollection*, ELevelCollectionType>(this, "UWorld.FindCollectionByType(ELevelCollectionType)", InType); }
	void RenameToPIEWorld(int PIEInstanceID) { NativeCall<void, int>(this, "UWorld.RenameToPIEWorld(int)", PIEInstanceID); }
	bool AreActorsInitialized() { return NativeCall<bool>(this, "UWorld.AreActorsInitialized()"); }
	void UpdateStreamingLevelPriority(ULevelStreaming* StreamingLevel) { NativeCall<void, ULevelStreaming*>(this, "UWorld.UpdateStreamingLevelPriority(ULevelStreaming*)", StreamingLevel); }
	bool ContainsActor(AActor* Actor) { return NativeCall<bool, AActor*>(this, "UWorld.ContainsActor(AActor*)", Actor); }
	void ToggleHLODHack1() { NativeCall<void>(this, "UWorld.ToggleHLODHack1()"); }
	bool EndPlay(EEndPlayReason::Type EndPlayReason) { return NativeCall<bool, EEndPlayReason::Type>(this, "UWorld.EndPlay(EEndPlayReason::Type)", EndPlayReason); }
	void OnActorFinishedSpawning(AActor* Actor) { NativeCall<void, AActor*>(this, "UWorld.OnActorFinishedSpawning(AActor*)", Actor); }
	void UpdateStreamingLevelShouldBeConsidered(ULevelStreaming* StreamingLevelToConsider) { NativeCall<void, ULevelStreaming*>(this, "UWorld.UpdateStreamingLevelShouldBeConsidered(ULevelStreaming*)", StreamingLevelToConsider); }
	void NotifyPreUnregisterAllActorComponents(AActor* Actor) { NativeCall<void, AActor*>(this, "UWorld.NotifyPreUnregisterAllActorComponents(AActor*)", Actor); }
	UWorldPartition* GetWorldPartition() { return NativeCall<UWorldPartition*>(this, "UWorld.GetWorldPartition()"); }
	bool RemoveStreamingLevel(ULevelStreaming* StreamingLevelToRemove) { return NativeCall<bool, ULevelStreaming*>(this, "UWorld.RemoveStreamingLevel(ULevelStreaming*)", StreamingLevelToRemove); }
	UWorld* GetWorld() { return NativeCall<UWorld*>(this, "UWorld.GetWorld()"); }
	bool IsRecordingReplay() { return NativeCall<bool>(this, "UWorld.IsRecordingReplay()"); }
	UGameViewportClient* GetGameViewport() { return NativeCall<UGameViewportClient*>(this, "UWorld.GetGameViewport()"); }
	bool HasEndOfFrameUpdates() { return NativeCall<bool>(this, "UWorld.HasEndOfFrameUpdates()"); }
	void SetWorldDataLayers(AWorldDataLayers* NewWorldDataLayers) { NativeCall<void, AWorldDataLayers*>(this, "UWorld.SetWorldDataLayers(AWorldDataLayers*)", NewWorldDataLayers); }
	void SetPhysicsScene(FPhysScene_Chaos* InScene) { NativeCall<void, FPhysScene_Chaos*>(this, "UWorld.SetPhysicsScene(FPhysScene_Chaos*)", InScene); }
	bool AddLevel(ULevel* InLevel) { return NativeCall<bool, ULevel*>(this, "UWorld.AddLevel(ULevel*)", InLevel); }
	const TArray<ULevel*, TSizedDefaultAllocator<32> >& GetLevels() { return NativeCall<const TArray<ULevel*, TSizedDefaultAllocator<32> >&>(this, "UWorld.GetLevels()"); }
	ALevelScriptActor* GetLevelScriptActor(ULevel* OwnerLevel) { return NativeCall<ALevelScriptActor*, ULevel*>(this, "UWorld.GetLevelScriptActor(ULevel*)", OwnerLevel); }
	bool EditorDestroyActor(AActor* ThisActor, bool bShouldModifyLevel) { return NativeCall<bool, AActor*, bool>(this, "UWorld.EditorDestroyActor(AActor*,bool)", ThisActor, bShouldModifyLevel); }
	void BroadcastPostTickDispatch() { NativeCall<void>(this, "UWorld.BroadcastPostTickDispatch()"); }
	ULevel* GetLevel(int InLevelIndex) { return NativeCall<ULevel*, int>(this, "UWorld.GetLevel(int)", InLevelIndex); }
	bool HasAnyLevelMakingVisible() { return NativeCall<bool>(this, "UWorld.HasAnyLevelMakingVisible()"); }
	bool IsLevelMakingVisible(const ULevel* InLevel) { return NativeCall<bool, const ULevel*>(this, "UWorld.IsLevelMakingVisible(ULevel*)", InLevel); }
	static UWorld* DuplicateWorldForPIE(const FString& PackageName, UWorld* OwningWorld) { return NativeCall<UWorld*, const FString&, UWorld*>(nullptr, "UWorld.DuplicateWorldForPIE(FString&,UWorld*)", PackageName, OwningWorld); }
	void PreDuplicate(FObjectDuplicationParameters& DupParams) { NativeCall<void, FObjectDuplicationParameters&>(this, "UWorld.PreDuplicate(FObjectDuplicationParameters&)", DupParams); }
	void RemovePhysicsVolume(APhysicsVolume* Volume) { NativeCall<void, APhysicsVolume*>(this, "UWorld.RemovePhysicsVolume(APhysicsVolume*)", Volume); }
	bool IsPlayingReplay() { return NativeCall<bool>(this, "UWorld.IsPlayingReplay()"); }
	bool IsPreviewWorld() { return NativeCall<bool>(this, "UWorld.IsPreviewWorld()"); }
	bool GetSoftObjectPathMapping(FString& OutSourceWorldPath, FString& OutRemappedWorldPath) { return NativeCall<bool, FString&, FString&>(this, "UWorld.GetSoftObjectPathMapping(FString&,FString&)", OutSourceWorldPath, OutRemappedWorldPath); }
	bool K2_GetLastAverageSceneLuminance(float& AverageSceneLuminance, int ViewIndex) { return NativeCall<bool, float&, int>(this, "UWorld.K2_GetLastAverageSceneLuminance(float&,int)", AverageSceneLuminance, ViewIndex); }
	bool IsPlayInEditor() { return NativeCall<bool>(this, "UWorld.IsPlayInEditor()"); }
	void BroadcastPreTickFlush(float DeltaTime) { NativeCall<void, float>(this, "UWorld.BroadcastPreTickFlush(float)", DeltaTime); }
	float GetGravityZ() { return NativeCall<float>(this, "UWorld.GetGravityZ()"); }
	void ClearActorComponentEndOfFrameUpdate(UActorComponent* Component) { NativeCall<void, UActorComponent*>(this, "UWorld.ClearActorComponentEndOfFrameUpdate(UActorComponent*)", Component); }
	int FindOrAddCollectionByType_Index(ELevelCollectionType InType) { return NativeCall<int, ELevelCollectionType>(this, "UWorld.FindOrAddCollectionByType_Index(ELevelCollectionType)", InType); }
	int GetNumPlayerControllers() { return NativeCall<int>(this, "UWorld.GetNumPlayerControllers()"); }
	bool GetBegunPlay() { return NativeCall<bool>(this, "UWorld.GetBegunPlay()"); }
	static void GetCollisionProfileChannelAndResponseParams(FName ProfileName, ECollisionChannel& CollisionChannel, FCollisionResponseParams& ResponseParams) { NativeCall<void, FName, ECollisionChannel&, FCollisionResponseParams&>(nullptr, "UWorld.GetCollisionProfileChannelAndResponseParams(FName,ECollisionChannel&,FCollisionResponseParams&)", ProfileName, CollisionChannel, ResponseParams); }
	void NotifyPostRegisterAllActorComponents(AActor* Actor) { NativeCall<void, AActor*>(this, "UWorld.NotifyPostRegisterAllActorComponents(AActor*)", Actor); }
	AAudioVolume* GetAudioSettings(const UE::Math::TVector<double>& ViewLocation, FReverbSettings* OutReverbSettings, FInteriorSettings* OutInteriorSettings) { return NativeCall<AAudioVolume*, const UE::Math::TVector<double>&, FReverbSettings*, FInteriorSettings*>(this, "UWorld.GetAudioSettings(UE::Math::TVector<double>&,FReverbSettings*,FInteriorSettings*)", ViewLocation, OutReverbSettings, OutInteriorSettings); }
	void RemoveActor(AActor* Actor, bool bShouldModifyLevel) { NativeCall<void, AActor*, bool>(this, "UWorld.RemoveActor(AActor*,bool)", Actor, bShouldModifyLevel); }
	void FinishAsyncSendAllEndOfFrameUpdates() { NativeCall<void>(this, "UWorld.FinishAsyncSendAllEndOfFrameUpdates()"); }
	UMaterialParameterCollectionInstance* GetParameterCollectionInstance(const UMaterialParameterCollection* Collection) { return NativeCall<UMaterialParameterCollectionInstance*, const UMaterialParameterCollection*>(this, "UWorld.GetParameterCollectionInstance(UMaterialParameterCollection*)", Collection); }
	void CleanupWorld(bool bSessionEnded, bool bCleanupResources, UWorld* NewWorld) { NativeCall<void, bool, bool, UWorld*>(this, "UWorld.CleanupWorld(bool,bool,UWorld*)", bSessionEnded, bCleanupResources, NewWorld); }
	void GetParameterCollectionInstances(TArray<UMaterialParameterCollectionInstance*, TSizedDefaultAllocator<32> >& OutParameterCollectionInstances) { NativeCall<void, TArray<UMaterialParameterCollectionInstance*, TSizedDefaultAllocator<32> >&>(this, "UWorld.GetParameterCollectionInstances(TArray<UMaterialParameterCollectionInstance*,TSizedDefaultAllocator<32>>&)", OutParameterCollectionInstances); }
	void ModifyLevel(ULevel* Level) { NativeCall<void, ULevel*>(this, "UWorld.ModifyLevel(ULevel*)", Level); }
	void NotifyAcceptedConnection(UNetConnection* Connection) { NativeCall<void, UNetConnection*>(this, "UWorld.NotifyAcceptedConnection(UNetConnection*)", Connection); }
	bool IsEditorWorld() { return NativeCall<bool>(this, "UWorld.IsEditorWorld()"); }
	bool UsesGameHiddenFlags() { return NativeCall<bool>(this, "UWorld.UsesGameHiddenFlags()"); }
	bool QueryTraceData(const FTraceHandle& Handle, FTraceDatum& OutData) { return NativeCall<bool, const FTraceHandle&, FTraceDatum&>(this, "UWorld.QueryTraceData(FTraceHandle&,FTraceDatum&)", Handle, OutData); }
	ULevel* GetCurrentLevel() { return NativeCall<ULevel*>(this, "UWorld.GetCurrentLevel()"); }
	void ProcessPendingGroupMoves(bool bProcessAllMoves) { NativeCall<void, bool>(this, "UWorld.ProcessPendingGroupMoves(bool)", bProcessAllMoves); }
	void ReleasePhysicsScene() { NativeCall<void>(this, "UWorld.ReleasePhysicsScene()"); }
	void StartAsyncSendAllEndOfFrameUpdates() { NativeCall<void>(this, "UWorld.StartAsyncSendAllEndOfFrameUpdates()"); }
	void UpdateParameterCollectionInstances(bool bUpdateInstanceUniformBuffers, bool bRecreateUniformBuffer) { NativeCall<void, bool, bool>(this, "UWorld.UpdateParameterCollectionInstances(bool,bool)", bUpdateInstanceUniformBuffers, bRecreateUniformBuffer); }
	int GetNumLevels() { return NativeCall<int>(this, "UWorld.GetNumLevels()"); }
	void InvalidateVisiblityTransactionRequestCachedVariables() { NativeCall<void>(this, "UWorld.InvalidateVisiblityTransactionRequestCachedVariables()"); }
	void SetAudioDevice(const FAudioDeviceHandle& InHandle) { NativeCall<void, const FAudioDeviceHandle&>(this, "UWorld.SetAudioDevice(FAudioDeviceHandle&)", InHandle); }
	FLevelCollection& FindOrAddCollectionByType(ELevelCollectionType InType) { return NativeCall<FLevelCollection&, ELevelCollectionType>(this, "UWorld.FindOrAddCollectionByType(ELevelCollectionType)", InType); }
	bool LineTraceSingleByProfile(FHitResult& OutHit, const UE::Math::TVector<double>& Start, const UE::Math::TVector<double>& End, FName ProfileName, const FCollisionQueryParams& Params) { return NativeCall<bool, FHitResult&, const UE::Math::TVector<double>&, const UE::Math::TVector<double>&, FName, const FCollisionQueryParams&>(this, "UWorld.LineTraceSingleByProfile(FHitResult&,UE::Math::TVector<double>&,UE::Math::TVector<double>&,FName,FCollisionQueryParams&)", OutHit, Start, End, ProfileName, Params); }
	void BroadcastLevelsChanged() { NativeCall<void>(this, "UWorld.BroadcastLevelsChanged()"); }
	void PrepareMapChange(const TArray<FName, TSizedDefaultAllocator<32> >& LevelNames) { NativeCall<void, const TArray<FName, TSizedDefaultAllocator<32> >&>(this, "UWorld.PrepareMapChange(TArray<FName,TSizedDefaultAllocator<32>>&)", LevelNames); }
	void BroadcastTickFlush(float DeltaTime) { NativeCall<void, float>(this, "UWorld.BroadcastTickFlush(float)", DeltaTime); }
	void SetMapNeedsLightingFullyRebuilt(int InNumLightingUnbuiltObjects, int InNumUnbuiltReflectionCaptures) { NativeCall<void, int, int>(this, "UWorld.SetMapNeedsLightingFullyRebuilt(int,int)", InNumLightingUnbuiltObjects, InNumUnbuiltReflectionCaptures); }
	void RemovePostProcessVolume(int Index) { NativeCall<void, int>(this, "UWorld.RemovePostProcessVolume(int)", Index); }
	bool RemovePostProcessVolume(IInterface_PostProcessVolume* InVolume) { return NativeCall<bool, IInterface_PostProcessVolume*>(this, "UWorld.RemovePostProcessVolume(IInterface_PostProcessVolume*)", InVolume); }
	void ClearDemoNetDriver() { NativeCall<void>(this, "UWorld.ClearDemoNetDriver()"); }
	void AddPhysicsVolume(APhysicsVolume* Volume) { NativeCall<void, APhysicsVolume*>(this, "UWorld.AddPhysicsVolume(APhysicsVolume*)", Volume); }
	bool IsLevelMakingInvisible(const ULevel* InLevel) { return NativeCall<bool, const ULevel*>(this, "UWorld.IsLevelMakingInvisible(ULevel*)", InLevel); }
	void AddStreamingLevel(ULevelStreaming* StreamingLevelToAdd) { NativeCall<void, ULevelStreaming*>(this, "UWorld.AddStreamingLevel(ULevelStreaming*)", StreamingLevelToAdd); }
	bool IsPreparingMapChange() { return NativeCall<bool>(this, "UWorld.IsPreparingMapChange()"); }
	FLevelCollection& FindOrAddCollectionForLevelStreaming(const ULevelStreaming* Level) { return NativeCall<FLevelCollection&, const ULevelStreaming*>(this, "UWorld.FindOrAddCollectionForLevelStreaming(ULevelStreaming*)", Level); }
	void ClearNetDriver(UNetDriver* Driver) { NativeCall<void, UNetDriver*>(this, "UWorld.ClearNetDriver(UNetDriver*)", Driver); }
	UChaosEventRelay* GetChaosEventRelay() { return NativeCall<UChaosEventRelay*>(this, "UWorld.GetChaosEventRelay()"); }
	void RegisterAutoActivateCamera(ACameraActor* CameraActor, int PlayerIndex) { NativeCall<void, ACameraActor*, int>(this, "UWorld.RegisterAutoActivateCamera(ACameraActor*,int)", CameraActor, PlayerIndex); }
	void SetAllowDeferredPhysicsStateCreation(bool bAllow) { NativeCall<void, bool>(this, "UWorld.SetAllowDeferredPhysicsStateCreation(bool)", bAllow); }
	bool HandleLogLastRenderedPostProcessSettings(const wchar_t* Cmd, FOutputDevice& Ar, UWorld* InWorld) { return NativeCall<bool, const wchar_t*, FOutputDevice&, UWorld*>(this, "UWorld.HandleLogLastRenderedPostProcessSettings(wchar_t*,FOutputDevice&,UWorld*)", Cmd, Ar, InWorld); }
	void CommitMapChange() { NativeCall<void>(this, "UWorld.CommitMapChange()"); }
	void AddUniqueStreamingLevel(ULevelStreaming* StreamingLevelToAdd) { NativeCall<void, ULevelStreaming*>(this, "UWorld.AddUniqueStreamingLevel(ULevelStreaming*)", StreamingLevelToAdd); }
	bool PreLoginCheckError(UNetConnection* Connection, const FString& ErrorMsg) { return NativeCall<bool, UNetConnection*, const FString&>(this, "UWorld.PreLoginCheckError(UNetConnection*,FString&)", Connection, ErrorMsg); }
	void BroadcastTickDispatch(float DeltaTime) { NativeCall<void, float>(this, "UWorld.BroadcastTickDispatch(float)", DeltaTime); }
};