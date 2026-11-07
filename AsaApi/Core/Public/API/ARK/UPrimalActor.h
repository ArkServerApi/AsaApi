#pragma once
#include "BulkForward.h"


struct UPrimalActor : UObject
{
	// Fields

	FTargetingTeamChanged& OnTargetingTeamChangedField() { return *GetNativePointerField<FTargetingTeamChanged*>(this, "UPrimalActor.OnTargetingTeamChanged"); }
	TMulticastDelegate<void __cdecl(UPrimalActor*, int, int), FDefaultDelegateUserPolicy>& OnTeamChangedForActorField() { return *GetNativePointerField<TMulticastDelegate<void __cdecl(UPrimalActor*, int, int), FDefaultDelegateUserPolicy>*>(this, "UPrimalActor.OnTeamChangedForActor"); }
	int& TargetingTeamField() { return *GetNativePointerField<int*>(this, "UPrimalActor.TargetingTeam"); }
	int& CustomActorFlagsField() { return *GetNativePointerField<int*>(this, "UPrimalActor.CustomActorFlags"); }
	TObjectPtr<AActor>& ActorUsingQuickActionField() { return *GetNativePointerField<TObjectPtr<AActor>*>(this, "UPrimalActor.ActorUsingQuickAction"); }
	FName& CustomTagField() { return *GetNativePointerField<FName*>(this, "UPrimalActor.CustomTag"); }
	int& CustomDataField() { return *GetNativePointerField<int*>(this, "UPrimalActor.CustomData"); }
	FActorCustomEventSignature& OnActorCustomEventField() { return *GetNativePointerField<FActorCustomEventSignature*>(this, "UPrimalActor.OnActorCustomEvent"); }
	long double& LastThrottledTickTimeField() { return *GetNativePointerField<long double*>(this, "UPrimalActor.LastThrottledTickTime"); }
	FActorMatineeUpdated& OnMatineeUpdatedField() { return *GetNativePointerField<FActorMatineeUpdated*>(this, "UPrimalActor.OnMatineeUpdated"); }
	TMulticastDelegate<void __cdecl(void), FDefaultDelegateUserPolicy>& OnMatineeUpdatedRawField() { return *GetNativePointerField<TMulticastDelegate<void __cdecl(void), FDefaultDelegateUserPolicy>*>(this, "UPrimalActor.OnMatineeUpdatedRaw"); }
	TEnumAsByte<enum EReplicationGraphBehavior>& DesiredRepGraphBehaviorField() { return *GetNativePointerField<TEnumAsByte<enum EReplicationGraphBehavior>*>(this, "UPrimalActor.DesiredRepGraphBehavior"); }
	long double& ForceMaximumReplicationRateUntilTimeField() { return *GetNativePointerField<long double*>(this, "UPrimalActor.ForceMaximumReplicationRateUntilTime"); }
	long double& LastActorForceReplicationTimeField() { return *GetNativePointerField<long double*>(this, "UPrimalActor.LastActorForceReplicationTime"); }
	int& LastActorForceReplicationFrameField() { return *GetNativePointerField<int*>(this, "UPrimalActor.LastActorForceReplicationFrame"); }
	float& NetworkAndStasisRangeMultiplierField() { return *GetNativePointerField<float*>(this, "UPrimalActor.NetworkAndStasisRangeMultiplier"); }
	float& NetworkRangeMultiplierField() { return *GetNativePointerField<float*>(this, "UPrimalActor.NetworkRangeMultiplier"); }
	float& NetCullDistanceSquaredDormantField() { return *GetNativePointerField<float*>(this, "UPrimalActor.NetCullDistanceSquaredDormant"); }
	int& NetworkDormantChildrenOpIdxField() { return *GetNativePointerField<int*>(this, "UPrimalActor.NetworkDormantChildrenOpIdx"); }
	int& LastFrameCalculatedNetworkRangeMultiplierField() { return *GetNativePointerField<int*>(this, "UPrimalActor.LastFrameCalculatedNetworkRangeMultiplier"); }
	TArray<TObjectPtr<AActor>, TSizedDefaultAllocator<32> >& NetworkSpatializationChildrenField() { return *GetNativePointerField<TArray<TObjectPtr<AActor>, TSizedDefaultAllocator<32> >*>(this, "UPrimalActor.NetworkSpatializationChildren"); }
	TArray<TObjectPtr<AActor>, TSizedDefaultAllocator<32> >& NetworkSpatializationChildrenDormantField() { return *GetNativePointerField<TArray<TObjectPtr<AActor>, TSizedDefaultAllocator<32> >*>(this, "UPrimalActor.NetworkSpatializationChildrenDormant"); }
	TObjectPtr<AActor>& NetworkSpatializationParentField() { return *GetNativePointerField<TObjectPtr<AActor>*>(this, "UPrimalActor.NetworkSpatializationParent"); }
	int& DefaultStasisComponentOctreeFlagsField() { return *GetNativePointerField<int*>(this, "UPrimalActor.DefaultStasisComponentOctreeFlags"); }
	int& DefaultStasisedOctreeFlagsField() { return *GetNativePointerField<int*>(this, "UPrimalActor.DefaultStasisedOctreeFlags"); }
	int& DefaultUnstasisedOctreeFlagsField() { return *GetNativePointerField<int*>(this, "UPrimalActor.DefaultUnstasisedOctreeFlags"); }
	float& OverrideStasisComponentRadiusField() { return *GetNativePointerField<float*>(this, "UPrimalActor.OverrideStasisComponentRadius"); }
	TObjectPtr<UPrimitiveComponent>& StasisCheckComponentField() { return *GetNativePointerField<TObjectPtr<UPrimitiveComponent>*>(this, "UPrimalActor.StasisCheckComponent"); }
	long double& UnstasisLastInRangeTimeField() { return *GetNativePointerField<long double*>(this, "UPrimalActor.UnstasisLastInRangeTime"); }
	long double& LastPreReplicationTimeField() { return *GetNativePointerField<long double*>(this, "UPrimalActor.LastPreReplicationTime"); }
	long double& LastEnterStasisTimeField() { return *GetNativePointerField<long double*>(this, "UPrimalActor.LastEnterStasisTime"); }
	long double& LastExitStasisTimeField() { return *GetNativePointerField<long double*>(this, "UPrimalActor.LastExitStasisTime"); }
	FString& LastSelectedWindSourceComponentNameField() { return *GetNativePointerField<FString*>(this, "UPrimalActor.LastSelectedWindSourceComponentName"); }
	unsigned __int8& RandomStartByteField() { return *GetNativePointerField<unsigned __int8*>(this, "UPrimalActor.RandomStartByte"); }
	unsigned __int64& LastFrameUnStasisField() { return *GetNativePointerField<unsigned __int64*>(this, "UPrimalActor.LastFrameUnStasis"); }
	volatile int& LastUnstasisFrameCounterField() { return *GetNativePointerField<volatile int*>(this, "UPrimalActor.LastUnstasisFrameCounter"); }
	TArray<TWeakObjectPtr<UActorComponent>, TSizedDefaultAllocator<32> >& StasisUnRegisteredComponentsField() { return *GetNativePointerField<TArray<TWeakObjectPtr<UActorComponent>, TSizedDefaultAllocator<32> >*>(this, "UPrimalActor.StasisUnRegisteredComponents"); }
	float& ReplicationIntervalMultiplierField() { return *GetNativePointerField<float*>(this, "UPrimalActor.ReplicationIntervalMultiplier"); }
	float& ClientReplicationSendNowThresholdField() { return *GetNativePointerField<float*>(this, "UPrimalActor.ClientReplicationSendNowThreshold"); }
	int& ForceImmediateReplicationFrameField() { return *GetNativePointerField<int*>(this, "UPrimalActor.ForceImmediateReplicationFrame"); }
	TWeakObjectPtr<USoundBase>& LastPostProcessVolumeSoundField() { return *GetNativePointerField<TWeakObjectPtr<USoundBase>*>(this, "UPrimalActor.LastPostProcessVolumeSound"); }
	FActorSemaphoreTaken& OnSemaphoreTakenField() { return *GetNativePointerField<FActorSemaphoreTaken*>(this, "UPrimalActor.OnSemaphoreTaken"); }
	long double& OriginalCreationTimeField() { return *GetNativePointerField<long double*>(this, "UPrimalActor.OriginalCreationTime"); }
	__int64& LastActorUnstasisedCycleField() { return *GetNativePointerField<__int64*>(this, "UPrimalActor.LastActorUnstasisedCycle"); }
	unsigned int& LastOnlyInitialReplicationPreReplicationFrameField() { return *GetNativePointerField<unsigned int*>(this, "UPrimalActor.LastOnlyInitialReplicationPreReplicationFrame"); }
	TArray<FTimerHandle, TSizedDefaultAllocator<32> >& TimerStasisStoreField() { return *GetNativePointerField<TArray<FTimerHandle, TSizedDefaultAllocator<32> >*>(this, "UPrimalActor.TimerStasisStore"); }
	TArray<TObjectPtr<AMatineeActor>, TSizedDefaultAllocator<32> >& ControllingMatineeActorsField() { return *GetNativePointerField<TArray<TObjectPtr<AMatineeActor>, TSizedDefaultAllocator<32> >*>(this, "UPrimalActor.ControllingMatineeActors"); }
	int& NetCriticalPriorityAdjustmentField() { return *GetNativePointerField<int*>(this, "UPrimalActor.NetCriticalPriorityAdjustment"); }
	UMovementComponent*& DeferredMovementComponentField() { return *GetNativePointerField<UMovementComponent**>(this, "UPrimalActor.DeferredMovementComponent"); }

	// Bitfields

	BitFieldValue<bool, unsigned __int32> bIsShooterPlayerController() { return { this, "UPrimalActor.bIsShooterPlayerController" }; }
	BitFieldValue<bool, unsigned __int32> bIsPrimalDino() { return { this, "UPrimalActor.bIsPrimalDino" }; }
	BitFieldValue<bool, unsigned __int32> bIsShooterCharacter() { return { this, "UPrimalActor.bIsShooterCharacter" }; }
	BitFieldValue<bool, unsigned __int32> bIsPrimalCharacter() { return { this, "UPrimalActor.bIsPrimalCharacter" }; }
	BitFieldValue<bool, unsigned __int32> bIsPrimalStructure() { return { this, "UPrimalActor.bIsPrimalStructure" }; }
	BitFieldValue<bool, unsigned __int32> bIsPrimalStructureExplosive() { return { this, "UPrimalActor.bIsPrimalStructureExplosive" }; }
	BitFieldValue<bool, unsigned __int32> bIsInstancedFoliage() { return { this, "UPrimalActor.bIsInstancedFoliage" }; }
	BitFieldValue<bool, unsigned __int32> bPreventSaving() { return { this, "UPrimalActor.bPreventSaving" }; }
	BitFieldValue<bool, unsigned __int32> bEnableMultiUse() { return { this, "UPrimalActor.bEnableMultiUse" }; }
	BitFieldValue<bool, unsigned __int32> bBlueprintMultiUseEntries() { return { this, "UPrimalActor.bBlueprintMultiUseEntries" }; }
	BitFieldValue<bool, unsigned __int32> bUseCanMoveThroughActor() { return { this, "UPrimalActor.bUseCanMoveThroughActor" }; }
	BitFieldValue<bool, unsigned __int32> bUseBPFilterMultiUseEntries() { return { this, "UPrimalActor.bUseBPFilterMultiUseEntries" }; }
	BitFieldValue<bool, unsigned __int32> bUseBPGetMultiUseCenterText() { return { this, "UPrimalActor.bUseBPGetMultiUseCenterText" }; }
	BitFieldValue<bool, unsigned __int32> bMultiUseCenterHUD() { return { this, "UPrimalActor.bMultiUseCenterHUD" }; }
	BitFieldValue<bool, unsigned __int32> bUseNetworkSpatialization() { return { this, "UPrimalActor.bUseNetworkSpatialization" }; }
	BitFieldValue<bool, unsigned __int32> bNetworkSpatializationForceRelevancyCheck() { return { this, "UPrimalActor.bNetworkSpatializationForceRelevancyCheck" }; }
	BitFieldValue<bool, unsigned __int32> bNetUseClientRelevancy() { return { this, "UPrimalActor.bNetUseClientRelevancy" }; }
	BitFieldValue<bool, unsigned __int32> bAttachmentReplicationUseNetworkParent() { return { this, "UPrimalActor.bAttachmentReplicationUseNetworkParent" }; }
	BitFieldValue<bool, unsigned __int32> bUseBPChangedActorTeam() { return { this, "UPrimalActor.bUseBPChangedActorTeam" }; }
	BitFieldValue<bool, unsigned __int32> bForceNetworkSpatialization() { return { this, "UPrimalActor.bForceNetworkSpatialization" }; }
	BitFieldValue<bool, unsigned __int32> bForcedHudDrawingRequiresSameTeam() { return { this, "UPrimalActor.bForcedHudDrawingRequiresSameTeam" }; }
	BitFieldValue<bool, unsigned __int32> bIsMapActor() { return { this, "UPrimalActor.bIsMapActor" }; }
	BitFieldValue<bool, unsigned __int32> bUseOnlyPointForLevelBounds() { return { this, "UPrimalActor.bUseOnlyPointForLevelBounds" }; }
	BitFieldValue<bool, unsigned __int32> bUseBPCheckForErrors() { return { this, "UPrimalActor.bUseBPCheckForErrors" }; }
	BitFieldValue<bool, unsigned __int32> bHasHighVolumeRPCs() { return { this, "UPrimalActor.bHasHighVolumeRPCs" }; }
	BitFieldValue<bool, unsigned __int32> bAutoStasis() { return { this, "UPrimalActor.bAutoStasis" }; }
	BitFieldValue<bool, unsigned __int32> bClimbable() { return { this, "UPrimalActor.bClimbable" }; }
	BitFieldValue<bool, unsigned __int32> bUseBPDrawEntry() { return { this, "UPrimalActor.bUseBPDrawEntry" }; }
	BitFieldValue<bool, unsigned __int32> bPreventCliffPlatforms() { return { this, "UPrimalActor.bPreventCliffPlatforms" }; }
	BitFieldValue<bool, unsigned __int32> bUseBPOverrideUILocation() { return { this, "UPrimalActor.bUseBPOverrideUILocation" }; }
	BitFieldValue<bool, unsigned __int32> bStasised() { return { this, "UPrimalActor.bStasised" }; }
	BitFieldValue<bool, unsigned __int32> bPreventActorStasis() { return { this, "UPrimalActor.bPreventActorStasis" }; }
	BitFieldValue<bool, unsigned __int32> bUseBPGetBonesToHideOnAllocation() { return { this, "UPrimalActor.bUseBPGetBonesToHideOnAllocation" }; }
	BitFieldValue<bool, unsigned __int32> bReplicateHidden() { return { this, "UPrimalActor.bReplicateHidden" }; }
	BitFieldValue<bool, unsigned __int32> bPendingUnstasis() { return { this, "UPrimalActor.bPendingUnstasis" }; }
	BitFieldValue<bool, unsigned __int32> bHibernateChange() { return { this, "UPrimalActor.bHibernateChange" }; }
	BitFieldValue<bool, unsigned __int32> bSavedWhenStasised() { return { this, "UPrimalActor.bSavedWhenStasised" }; }
	BitFieldValue<bool, unsigned __int32> bLoadedFromSaveGame() { return { this, "UPrimalActor.bLoadedFromSaveGame" }; }
	BitFieldValue<bool, unsigned __int32> bPreventCharacterBasing() { return { this, "UPrimalActor.bPreventCharacterBasing" }; }
	BitFieldValue<bool, unsigned __int32> bPreventCharacterBasingAllowSteppingUp() { return { this, "UPrimalActor.bPreventCharacterBasingAllowSteppingUp" }; }
	BitFieldValue<bool, unsigned __int32> bIgnoreNetworkRangeScaling() { return { this, "UPrimalActor.bIgnoreNetworkRangeScaling" }; }
	BitFieldValue<bool, unsigned __int32> bForceReplicateDormantChildrenWithoutSpatialRelevancy() { return { this, "UPrimalActor.bForceReplicateDormantChildrenWithoutSpatialRelevancy" }; }
	BitFieldValue<bool, unsigned __int32> bForcePreventSeamlessTravel() { return { this, "UPrimalActor.bForcePreventSeamlessTravel" }; }
	BitFieldValue<bool, unsigned __int32> bPreventLevelBoundsRelevant() { return { this, "UPrimalActor.bPreventLevelBoundsRelevant" }; }
	BitFieldValue<bool, unsigned __int32> bUseBPInventoryItemUsed() { return { this, "UPrimalActor.bUseBPInventoryItemUsed" }; }
	BitFieldValue<bool, unsigned __int32> bUseBPInventoryItemDropped() { return { this, "UPrimalActor.bUseBPInventoryItemDropped" }; }
	BitFieldValue<bool, unsigned __int32> bUseBPOverrideTargetingLocation() { return { this, "UPrimalActor.bUseBPOverrideTargetingLocation" }; }
	BitFieldValue<bool, unsigned __int32> bForceAllowNetMulticast() { return { this, "UPrimalActor.bForceAllowNetMulticast" }; }
	BitFieldValue<bool, unsigned __int32> bBPInventoryItemUsedHandlesDurability() { return { this, "UPrimalActor.bBPInventoryItemUsedHandlesDurability" }; }
	BitFieldValue<bool, unsigned __int32> bUseBPForceAllowsInventoryUse() { return { this, "UPrimalActor.bUseBPForceAllowsInventoryUse" }; }
	BitFieldValue<bool, unsigned __int32> bAlwaysRelevantPrimalStructure() { return { this, "UPrimalActor.bAlwaysRelevantPrimalStructure" }; }
	BitFieldValue<bool, unsigned __int32> bPreventNPCSpawnFloor() { return { this, "UPrimalActor.bPreventNPCSpawnFloor" }; }
	BitFieldValue<bool, unsigned __int32> bForceHiddenReplication() { return { this, "UPrimalActor.bForceHiddenReplication" }; }
	BitFieldValue<bool, unsigned __int32> bNetCritical() { return { this, "UPrimalActor.bNetCritical" }; }
	BitFieldValue<bool, unsigned __int32> bOnlyReplicateOnNetForcedUpdate() { return { this, "UPrimalActor.bOnlyReplicateOnNetForcedUpdate" }; }
	BitFieldValue<bool, unsigned __int32> bPreventRegularForceNetUpdate() { return { this, "UPrimalActor.bPreventRegularForceNetUpdate" }; }
	BitFieldValue<bool, unsigned __int32> bOnlyInitialReplication() { return { this, "UPrimalActor.bOnlyInitialReplication" }; }
	BitFieldValue<bool, unsigned __int32> bPreventOnDedicatedServer() { return { this, "UPrimalActor.bPreventOnDedicatedServer" }; }
	BitFieldValue<bool, unsigned __int32> bUseAttachmentReplication() { return { this, "UPrimalActor.bUseAttachmentReplication" }; }
	BitFieldValue<bool, unsigned __int32> bStasisComponentRadiusForceDistanceCheck() { return { this, "UPrimalActor.bStasisComponentRadiusForceDistanceCheck" }; }
	BitFieldValue<bool, unsigned __int32> bIgnoredByCharacterEncroachment() { return { this, "UPrimalActor.bIgnoredByCharacterEncroachment" }; }
	BitFieldValue<bool, unsigned __int32> bNetMulticasting() { return { this, "UPrimalActor.bNetMulticasting" }; }
	BitFieldValue<bool, unsigned __int32> bDormantNetMulticastForceFullReplication() { return { this, "UPrimalActor.bDormantNetMulticastForceFullReplication" }; }
	BitFieldValue<bool, unsigned __int32> bForceIgnoreSpatialComponent() { return { this, "UPrimalActor.bForceIgnoreSpatialComponent" }; }
	BitFieldValue<bool, unsigned __int32> bWasForceIgnoreSpatialComponent() { return { this, "UPrimalActor.bWasForceIgnoreSpatialComponent" }; }
	BitFieldValue<bool, unsigned __int32> bWillStasisAfterSpawn() { return { this, "UPrimalActor.bWillStasisAfterSpawn" }; }
	BitFieldValue<bool, unsigned __int32> bUseBPGetHUDDrawLocationOffset() { return { this, "UPrimalActor.bUseBPGetHUDDrawLocationOffset" }; }
	BitFieldValue<bool, unsigned __int32> bUseBPPreventAttachments() { return { this, "UPrimalActor.bUseBPPreventAttachments" }; }
	BitFieldValue<bool, unsigned __int32> bUseBPGetShowDebugAnimationComponents() { return { this, "UPrimalActor.bUseBPGetShowDebugAnimationComponents" }; }
	BitFieldValue<bool, unsigned __int32> bUnstreamComponentsUseEndOverlap() { return { this, "UPrimalActor.bUnstreamComponentsUseEndOverlap" }; }
	BitFieldValue<bool, unsigned __int32> bWantsPerformanceThrottledTick() { return { this, "UPrimalActor.bWantsPerformanceThrottledTick" }; }
	BitFieldValue<bool, unsigned __int32> bAddedPerformanceThrottledTick() { return { this, "UPrimalActor.bAddedPerformanceThrottledTick" }; }
	BitFieldValue<bool, unsigned __int32> bAddedTagsList() { return { this, "UPrimalActor.bAddedTagsList" }; }
	BitFieldValue<bool, unsigned __int32> bWantsServerThrottledTick() { return { this, "UPrimalActor.bWantsServerThrottledTick" }; }
	BitFieldValue<bool, unsigned __int32> bAddedServerThrottledTick() { return { this, "UPrimalActor.bAddedServerThrottledTick" }; }
	BitFieldValue<bool, unsigned __int32> bBPPreInitializeComponents() { return { this, "UPrimalActor.bBPPreInitializeComponents" }; }
	BitFieldValue<bool, unsigned __int32> bBPPostInitializeComponents() { return { this, "UPrimalActor.bBPPostInitializeComponents" }; }
	BitFieldValue<bool, unsigned __int32> bUseBPCustomIsRelevantForClient() { return { this, "UPrimalActor.bUseBPCustomIsRelevantForClient" }; }
	BitFieldValue<bool, unsigned __int32> bUseStasisGrid() { return { this, "UPrimalActor.bUseStasisGrid" }; }
	BitFieldValue<bool, unsigned __int32> bAlwaysCreatePhysicsState() { return { this, "UPrimalActor.bAlwaysCreatePhysicsState" }; }
	BitFieldValue<bool, unsigned __int32> bForceInfiniteDrawDistance() { return { this, "UPrimalActor.bForceInfiniteDrawDistance" }; }
	BitFieldValue<bool, unsigned __int32> bIsFromChildActorComponent() { return { this, "UPrimalActor.bIsFromChildActorComponent" }; }
	BitFieldValue<bool, unsigned __int32> bIsDestroyedFromChildActorComponent() { return { this, "UPrimalActor.bIsDestroyedFromChildActorComponent" }; }
	BitFieldValue<bool, unsigned __int32> bIsValidUnstasisCaster() { return { this, "UPrimalActor.bIsValidUnstasisCaster" }; }
	BitFieldValue<bool, unsigned __int32> bUseBPAllowActorSpawn() { return { this, "UPrimalActor.bUseBPAllowActorSpawn" }; }
	BitFieldValue<bool, unsigned __int32> bWantsRealtimeThrottledTick() { return { this, "UPrimalActor.bWantsRealtimeThrottledTick" }; }
	BitFieldValue<bool, unsigned __int32> bAddedRealtimeThrottledTick() { return { this, "UPrimalActor.bAddedRealtimeThrottledTick" }; }
	BitFieldValue<bool, unsigned __int32> bRealtimeThrottledTickUseNativeTick() { return { this, "UPrimalActor.bRealtimeThrottledTickUseNativeTick" }; }

	// Functions

	bool IsValidUnStasisCaster() { return NativeCall<bool>(this, "UPrimalActor.IsValidUnStasisCaster()"); }
	bool AllowSeamlessTravel() { return NativeCall<bool>(this, "UPrimalActor.AllowSeamlessTravel()"); }
	float GetNetworkRangeMultiplier() { return NativeCall<float>(this, "UPrimalActor.GetNetworkRangeMultiplier()"); }
	bool GetIsMapActor() { return NativeCall<bool>(this, "UPrimalActor.GetIsMapActor()"); }
	bool AllowSaving() { return NativeCall<bool>(this, "UPrimalActor.AllowSaving()"); }
	void ControlRigNotify(FName NotifyName, FName NotifyCustomTag, const FHitResult* WorldSpaceHitResult, const UE::Math::TVector<double>* Velocity) { NativeCall<void, FName, FName, const FHitResult*, const UE::Math::TVector<double>*>(this, "UPrimalActor.ControlRigNotify(FName,FName,FHitResult&,UE::Math::TVector<double>&)", NotifyName, NotifyCustomTag, WorldSpaceHitResult, Velocity); }
	void ChangeActorTeam(int NewTeam) { NativeCall<void, int>(this, "UPrimalActor.ChangeActorTeam(int)", NewTeam); }
	bool ForceInfiniteDrawDistanceOnComponent(const UPrimitiveComponent* OnComponent) { return NativeCall<bool, const UPrimitiveComponent*>(this, "UPrimalActor.ForceInfiniteDrawDistanceOnComponent(UPrimitiveComponent*)", OnComponent); }
	void TargetingTeamChanged() { NativeCall<void>(this, "UPrimalActor.TargetingTeamChanged()"); }
	float OffsetHUDFromCenterScreenY_Implementation() { return NativeCall<float>(this, "UPrimalActor.OffsetHUDFromCenterScreenY_Implementation(AHUD*)"); }
	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// bool IsShooterCharacter();
	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// bool IsPrimalDino();
	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// bool IsPrimalCharacter();
	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// bool IsPrimalStructure();
	//     bool IsPrimalCharacterOrStructure() { return NativeCall<bool>(this, "UPrimalActor.IsPrimalCharacterOrStructure()"); }
	// FUNCTION MISSING: UPrimalActor.IsPrimalCharacterOrStructure()
	//     bool IsInstancedFoliage() { return NativeCall<bool>(this, "UPrimalActor.IsInstancedFoliage()"); }
	// FUNCTION MISSING: UPrimalActor.IsInstancedFoliage()
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UPrimalActor"); }
	bool AllowIgnoreCharacterEncroachment(UPrimitiveComponent* HitComponent, AActor* EncroachingCharacter) { return NativeCall<bool, UPrimitiveComponent*, AActor*>(this, "UPrimalActor.AllowIgnoreCharacterEncroachment(UPrimitiveComponent*,AActor*)", HitComponent, EncroachingCharacter); }
	bool AllowManualMultiUseActivation(APlayerController* ForPC) { return NativeCall<bool, APlayerController*>(this, "UPrimalActor.AllowManualMultiUseActivation(APlayerController*,int)", ForPC); }
	void BPAttachedRootComponent() { NativeCall<void>(this, "UPrimalActor.BPAttachedRootComponent()"); }
	void DrawBasicFloatingHUD(AHUD* ForHUD) { NativeCall<void, AHUD*>(this, "UPrimalActor.DrawBasicFloatingHUD(AHUD*)", ForHUD); }
	float GetUsablePriority() { return NativeCall<float>(this, "UPrimalActor.GetUsablePriority()"); }
	FMultiUseWheelOption* GetWheelOptionInfoBP(FMultiUseWheelOption* result, APlayerController* ForPC, int WheelCategory) { return NativeCall<FMultiUseWheelOption*, FMultiUseWheelOption*, APlayerController*, int>(this, "UPrimalActor.GetWheelOptionInfoBP(APlayerController*,int)", result, ForPC, WheelCategory); }
	void ModifyHudMultiUseLoc(UE::Math::TVector2<double>* theVec, APlayerController* PC, int index) { NativeCall<void, UE::Math::TVector2<double>*, APlayerController*, int>(this, "UPrimalActor.ModifyHudMultiUseLoc(UE::Math::TVector2<double>&,APlayerController*,int)", theVec, PC, index); }
	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// static void StaticRegisterNativesUPrimalActor();
	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// void ValidateGeneratedRepEnums(const TArray<FRepRecord, TSizedDefaultAllocator<32> >* ClassReps);
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty, TSizedDefaultAllocator<32> >* OutLifetimeProps) { NativeCall<void, TArray<FLifetimeProperty, TSizedDefaultAllocator<32> >*>(this, "UPrimalActor.GetLifetimeReplicatedProps(TArray<FLifetimeProperty,TSizedDefaultAllocator<32>>&)", OutLifetimeProps); }
	bool CheckBPAllowActorSpawn(UWorld* World, const UE::Math::TVector<double>* AtLocation, const UE::Math::TRotator<double>* AtRotation, AActor* ForOwner, APawn* ForInstigator) { return NativeCall<bool, UWorld*, const UE::Math::TVector<double>*, const UE::Math::TRotator<double>*, AActor*, APawn*>(this, "UPrimalActor.CheckBPAllowActorSpawn(UWorld*,UE::Math::TVector<double>&,UE::Math::TRotator<double>&,AActor*,APawn*)", World, AtLocation, AtRotation, ForOwner, ForInstigator); }
	void MatineeUpdated() { NativeCall<void>(this, "UPrimalActor.MatineeUpdated()"); }
	bool PreventCharacterBasing(AActor* OtherActor, UPrimitiveComponent* BasedOnComponent) { return NativeCall<bool, AActor*, UPrimitiveComponent*>(this, "UPrimalActor.PreventCharacterBasing(AActor*,UPrimitiveComponent*)", OtherActor, BasedOnComponent); }
	float GetApproachRadius() { return NativeCall<float>(this, "UPrimalActor.GetApproachRadius()"); }
	bool UseNetworkRangeScaling() { return NativeCall<bool>(this, "UPrimalActor.UseNetworkRangeScaling()"); }
	float GetNetStasisAndRangeMultiplier(bool bIsForNetworking) { return NativeCall<float, bool>(this, "UPrimalActor.GetNetStasisAndRangeMultiplier(bool)", bIsForNetworking); }
	void InventoryItemUsed(UObject* InventoryItemObject) { NativeCall<void, UObject*>(this, "UPrimalActor.InventoryItemUsed(UObject*)", InventoryItemObject); }
	void InventoryItemDropped(UObject* InventoryItemObject) { NativeCall<void, UObject*>(this, "UPrimalActor.InventoryItemDropped(UObject*)", InventoryItemObject); }
	bool ForceAllowsInventoryUse(const UObject* InventoryItemObject) { return NativeCall<bool, const UObject*>(this, "UPrimalActor.ForceAllowsInventoryUse(UObject*)", InventoryItemObject); }
	void PlaySoundOnActor(USoundCue* InSoundCue, float VolumeMultiplier, float PitchMultiplier) { NativeCall<void, USoundCue*, float, float>(this, "UPrimalActor.PlaySoundOnActor(USoundCue*,float,float)", InSoundCue, VolumeMultiplier, PitchMultiplier); }
	void ClientMultiUse(APlayerController* ForPC, int UseIndex, int hitBodyInstance) { NativeCall<void, APlayerController*, int, int>(this, "UPrimalActor.ClientMultiUse(APlayerController*,int,int)", ForPC, UseIndex, hitBodyInstance); }
	bool TryMultiUse(APlayerController* ForPC, int UseIndex, int hitBodyInstance) { return NativeCall<bool, APlayerController*, int, int>(this, "UPrimalActor.TryMultiUse(APlayerController*,int,int)", ForPC, UseIndex, hitBodyInstance); }
	void InputDismissPOI(APlayerController* ForPC, int Index) { NativeCall<void, APlayerController*, int>(this, "UPrimalActor.InputDismissPOI(APlayerController*,int)", ForPC, Index); }
	void GetMultiUseEntries(APlayerController* ForPC, TArray<FMultiUseEntry, TSizedDefaultAllocator<32> >* MultiUseEntries, int hitBodyInstance) { NativeCall<void, APlayerController*, TArray<FMultiUseEntry, TSizedDefaultAllocator<32> >*, int>(this, "UPrimalActor.GetMultiUseEntries(APlayerController*,TArray<FMultiUseEntry,TSizedDefaultAllocator<32>>&,int)", ForPC, MultiUseEntries, hitBodyInstance); }
	UTexture2D* GetMultiUseIcon(APlayerController* ForPC, FMultiUseEntry* MultiUseEntry) { return NativeCall<UTexture2D*, APlayerController*, FMultiUseEntry*>(this, "UPrimalActor.GetMultiUseIcon(APlayerController*,FMultiUseEntry)", ForPC, MultiUseEntry); }
	void SetDesiredRepGraphBehavior(EReplicationGraphBehavior NewBehavior) { NativeCall<void, EReplicationGraphBehavior>(this, "UPrimalActor.SetDesiredRepGraphBehavior(EReplicationGraphBehavior)", NewBehavior); }
	void FilterMultiUseEntries(APlayerController* ForPC, TArray<FMultiUseEntry, TSizedDefaultAllocator<32> >* MultiUseEntries) { NativeCall<void, APlayerController*, TArray<FMultiUseEntry, TSizedDefaultAllocator<32> >*>(this, "UPrimalActor.FilterMultiUseEntries(APlayerController*,TArray<FMultiUseEntry,TSizedDefaultAllocator<32>>&)", ForPC, MultiUseEntries); }
	bool GetMultiUseCenterText(APlayerController* ForPC, int UseIndex, FString* OutCenterText, FLinearColor* OutCenterTextColor) { return NativeCall<bool, APlayerController*, int, FString*, FLinearColor*>(this, "UPrimalActor.GetMultiUseCenterText(APlayerController*,int,FString&,FLinearColor&)", ForPC, UseIndex, OutCenterText, OutCenterTextColor); }
	FMultiUseWheelOption* GetWheelOptionInfo(FMultiUseWheelOption* result, APlayerController* ForPC, int WheelCategory) { return NativeCall<FMultiUseWheelOption*, FMultiUseWheelOption*, APlayerController*, int>(this, "UPrimalActor.GetWheelOptionInfo(APlayerController*,int)", result, ForPC, WheelCategory); }
	FMultiUseWheelOption* GetWheelOptionByUseIndex(FMultiUseWheelOption* result, APlayerController* ForPC, int Index) { return NativeCall<FMultiUseWheelOption*, FMultiUseWheelOption*, APlayerController*, int>(this, "UPrimalActor.GetWheelOptionByUseIndex(APlayerController*,int)", result, ForPC, Index); }
	float BPOverrideServerMultiUseAcceptRange_Implementation() { return NativeCall<float>(this, "UPrimalActor.BPOverrideServerMultiUseAcceptRange_Implementation()"); }
	void GetAllSceneComponents(TArray<USceneComponent*, TSizedDefaultAllocator<32> >* OutComponents) { NativeCall<void, TArray<USceneComponent*, TSizedDefaultAllocator<32> >*>(this, "UPrimalActor.GetAllSceneComponents(TArray<USceneComponent*,TSizedDefaultAllocator<32>>&)", OutComponents); }
	void AddControllingMatineeActor(AMatineeActor* InMatineeActor) { NativeCall<void, AMatineeActor*>(this, "UPrimalActor.AddControllingMatineeActor(AMatineeActor&)", InMatineeActor); }
	void RemoveControllingMatineeActor(AMatineeActor* InMatineeActor) { NativeCall<void, AMatineeActor*>(this, "UPrimalActor.RemoveControllingMatineeActor(AMatineeActor&)", InMatineeActor); }
	bool IsMatineeControlled() { return NativeCall<bool>(this, "UPrimalActor.IsMatineeControlled()"); }
	void OnUROPostInterpolation_AnyThread(float Delta, USkeletalMeshComponent* Mesh, FAnimationEvaluationContext* InOutContext) { NativeCall<void, float, USkeletalMeshComponent*, FAnimationEvaluationContext*>(this, "UPrimalActor.OnUROPostInterpolation_AnyThread(float,USkeletalMeshComponent*,FAnimationEvaluationContext&)", Delta, Mesh, InOutContext); }
	void MulticastProperty(FName PropertyName, bool bUnreliable) { NativeCall<void, FName, bool>(this, "UPrimalActor.MulticastProperty(FName,bool)", PropertyName, bUnreliable); }
	void ForceReplicateNow(bool bForceCreateChannel, bool bForceCreateChannelIfRelevant, bool bOnlyIfNoChannel) { NativeCall<void, bool, bool, bool>(this, "UPrimalActor.ForceReplicateNow(bool,bool,bool)", bForceCreateChannel, bForceCreateChannelIfRelevant, bOnlyIfNoChannel); }

	unsigned __int64& NetPushId_InternalField() { return *GetNativePointerField<unsigned __int64*>(this, "UPrimalActor.NetPushId_Internal"); }
	float& PlayerScaledNetworkAndStasisRangeMultiplierField() { return *GetNativePointerField<float*>(this, "UPrimalActor.PlayerScaledNetworkAndStasisRangeMultiplier"); }
	float& PreviousStasisRangeMultField() { return *GetNativePointerField<float*>(this, "UPrimalActor.PreviousStasisRangeMult"); }
	unsigned char& UnstasisSetIndexField() { return *GetNativePointerField<unsigned char*>(this, "UPrimalActor.UnstasisSetIndex"); }

	static UClass* StaticClass() { return AsaApi::ResolveClass("UPrimalActor"); }

	EReplicationGraphBehavior& RepGraphBehaviorField() { return *GetNativePointerField<EReplicationGraphBehavior*>(this, "UPrimalActor.RepGraphBehavior"); }
	BitFieldValue<bool, unsigned char> bHasComponentsWithMultiUseEntries() { return { this, "UPrimalActor.bHasComponentsWithMultiUseEntries"}; }
	BitFieldValue<bool, unsigned char> bSkipForceUpdateWhenAimedCharacter() { return { this, "UPrimalActor.bSkipForceUpdateWhenAimedCharacter"}; }
	BitFieldValue<bool, unsigned char> bCanBeNetworkSaturated() { return { this, "UPrimalActor.bCanBeNetworkSaturated"}; }
	BitFieldValue<bool, unsigned char> bUseBPGetMultiUseCenterTextWithName() { return { this, "UPrimalActor.bUseBPGetMultiUseCenterTextWithName"}; }
	BitFieldValue<bool, unsigned char> bUseBPGetCameraCollisionIgnoreActors() { return { this, "UPrimalActor.bUseBPGetCameraCollisionIgnoreActors"}; }
	BitFieldValue<bool, unsigned char> bUseBPGetOrbitCamTargetLocation() { return { this, "UPrimalActor.bUseBPGetOrbitCamTargetLocation"}; }
	BitFieldValue<bool, unsigned char> bUseActorNotifyCustomEventBP() { return { this, "UPrimalActor.bUseActorNotifyCustomEventBP"}; }
	BitFieldValue<bool, unsigned char> bDesiredRepGraphBehaviorHasBeenSet() { return { this, "UPrimalActor.bDesiredRepGraphBehaviorHasBeenSet"}; }
	BitFieldValue<bool, unsigned char> bForceNonBlockingHits() { return { this, "UPrimalActor.bForceNonBlockingHits"}; }
	BitFieldValue<bool, unsigned char> bDestroyDontClearNetworkChildren() { return { this, "UPrimalActor.bDestroyDontClearNetworkChildren"}; }
	BitFieldValue<bool, unsigned char> bAllowNetGuidExpirationOnStasis() { return { this, "UPrimalActor.bAllowNetGuidExpirationOnStasis"}; }
	BitFieldValue<bool, unsigned char> bPrimalDormancyHysteresisEnabled() { return { this, "UPrimalActor.bPrimalDormancyHysteresisEnabled"}; }
	static void SetMultiUseEntryName(FMultiUseEntry& Entry, FName UseName) { NativeCall<void, FMultiUseEntry&, FName>(nullptr, "UPrimalActor.SetMultiUseEntryName(FMultiUseEntry&,FName)", Entry, UseName); }
	UE::Math::TVector<double>* GetOrbitCamTargetLocation(UE::Math::TVector<double>* result) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*>(this, "UPrimalActor.GetOrbitCamTargetLocation()", result); }
	void WasAttached(USceneComponent* NewAttachParent) { NativeCall<void, USceneComponent*>(this, "UPrimalActor.WasAttached(USceneComponent*)", NewAttachParent); }
	void ActorAnimNotifyCustomState_EndBP(FName CustomEventName, USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, const UAnimNotifyState* AnimNotifyObject) { NativeCall<void, FName, USkeletalMeshComponent*, UAnimSequenceBase*, const UAnimNotifyState*>(this, "UPrimalActor.ActorAnimNotifyCustomState_EndBP(FName,USkeletalMeshComponent*,UAnimSequenceBase*,UAnimNotifyState*)", CustomEventName, MeshComp, Animation, AnimNotifyObject); }
	UWorld* K2_GetWorld() { return NativeCall<UWorld*>(this, "UPrimalActor.K2_GetWorld()"); }
	bool IsStandingMountedTurret() { return NativeCall<bool>(this, "UPrimalActor.IsStandingMountedTurret()"); }
	bool IsFirstPersonMeshVisible() { return NativeCall<bool>(this, "UPrimalActor.IsFirstPersonMeshVisible()"); }
	bool IsPrimalStructureItemContainer() { return NativeCall<bool>(this, "UPrimalActor.IsPrimalStructureItemContainer()"); }
	void FinalSeamlessTravelled() { NativeCall<void>(this, "UPrimalActor.FinalSeamlessTravelled()"); }
	TArray<FName, TSizedDefaultAllocator<32> >* BPGetBonesToHideOnAllocation(TArray<FName, TSizedDefaultAllocator<32> >* result) { return NativeCall<TArray<FName, TSizedDefaultAllocator<32> >*, TArray<FName, TSizedDefaultAllocator<32> >*>(this, "UPrimalActor.BPGetBonesToHideOnAllocation()", result); }
	void PostSaving() { NativeCall<void>(this, "UPrimalActor.PostSaving()"); }
	AActor* GetTargetActorForDyeUI_Implementation() { return NativeCall<AActor*>(this, "UPrimalActor.GetTargetActorForDyeUI_Implementation()"); }
	void ActorAnimNotifyCustomEventBP(FName CustomEventName, USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, const UAnimNotify* AnimNotifyObject) { NativeCall<void, FName, USkeletalMeshComponent*, UAnimSequenceBase*, const UAnimNotify*>(this, "UPrimalActor.ActorAnimNotifyCustomEventBP(FName,USkeletalMeshComponent*,UAnimSequenceBase*,UAnimNotify*)", CustomEventName, MeshComp, Animation, AnimNotifyObject); }
	bool UseLowQualityBehaviorTreeTick() { return NativeCall<bool>(this, "UPrimalActor.UseLowQualityBehaviorTreeTick()"); }
	float GetUsablePriority_Implementation() { return NativeCall<float>(this, "UPrimalActor.GetUsablePriority_Implementation()"); }
	bool BPTryMultiUse_Implementation(APlayerController* ForPC, int UseIndex, FName UseName) { return NativeCall<bool, APlayerController*, int, FName>(this, "UPrimalActor.BPTryMultiUse_Implementation(APlayerController*,int,FName)", ForPC, UseIndex, UseName); }
	bool RecentlyHadRider(float threshold) { return NativeCall<bool, float>(this, "UPrimalActor.RecentlyHadRider(float)", threshold); }
	bool ShouldSkipPhysicsUpdateOnAttachmentReplication() { return NativeCall<bool>(this, "UPrimalActor.ShouldSkipPhysicsUpdateOnAttachmentReplication()"); }
	static bool GetPrimalABTest3() { return NativeCall<bool>(nullptr, "UPrimalActor.GetPrimalABTest3()"); }
	void OnInventoryItemGrind_Implementation() { NativeCall<void>(this, "UPrimalActor.OnInventoryItemGrind_Implementation()"); }
	int BPGetExtraSpecialBlueprintInt(int toCheck) { return NativeCall<int, int>(this, "UPrimalActor.BPGetExtraSpecialBlueprintInt(int)", toCheck); }
	bool AllowRadialDamageWithoutVisiblityTrace(const FHitResult& Hit) { return NativeCall<bool, const FHitResult&>(this, "UPrimalActor.AllowRadialDamageWithoutVisiblityTrace(FHitResult&)", Hit); }
	bool BPAllowActorSpawn_Implementation(UWorld* ForWorld, UE::Math::TVector<double>* AtLocation, UE::Math::TRotator<double>* AtRotation, AActor* ForOwner, APawn* ForInstigator) { if (!AtLocation) throw std::invalid_argument("Null native value parameter"); if (!AtRotation) throw std::invalid_argument("Null native value parameter"); return NativeCall<bool, UWorld *, UE :: Math :: TVector < double >, UE :: Math :: TRotator < double >, AActor *, APawn *>(this, "UPrimalActor.BPAllowActorSpawn_Implementation(UWorld*,UE::Math::TVector<double>,UE::Math::TRotator<double>,AActor*,APawn*)", ForWorld, *AtLocation, *AtRotation, ForOwner, ForInstigator); }
	void ReduceMemoryForStasis() { NativeCall<void>(this, "UPrimalActor.ReduceMemoryForStasis()"); }
	static void SetTargetingTeam_WrapperImpl(void* Object, const void* InValue) { NativeCall<void, void*, const void*>(nullptr, "UPrimalActor.SetTargetingTeam_WrapperImpl(void*,void*)", Object, InValue); }
	float GetNetCullDistance() { return NativeCall<float>(this, "UPrimalActor.GetNetCullDistance()"); }
	bool CurrentlyHasRider() { return NativeCall<bool>(this, "UPrimalActor.CurrentlyHasRider()"); }
	bool IsValidLockOnTarget_Implementation(APawn* AttackerPawn) { return NativeCall<bool, APawn*>(this, "UPrimalActor.IsValidLockOnTarget_Implementation(APawn*)", AttackerPawn); }
	void PostProcessModifyBlendableMaterial(const UMaterialInterface* BlendableMaterialInterface, UMaterialInstanceDynamic* MID) { NativeCall<void, const UMaterialInterface*, UMaterialInstanceDynamic*>(this, "UPrimalActor.PostProcessModifyBlendableMaterial(UMaterialInterface*,UMaterialInstanceDynamic*)", BlendableMaterialInterface, MID); }
	void UpdateStasisFlags() { NativeCall<void>(this, "UPrimalActor.UpdateStasisFlags()"); }
	bool IsAttachedToSaddlePlatform() { return NativeCall<bool>(this, "UPrimalActor.IsAttachedToSaddlePlatform()"); }
	FString* GetDescriptiveName(FString* result) { return NativeCall<FString*, FString*>(this, "UPrimalActor.GetDescriptiveName()", result); }
	AActor* GetTertiaryMountedActor() { return NativeCall<AActor*>(this, "UPrimalActor.GetTertiaryMountedActor()"); }
	bool ShouldIgnoreHitResult(const UWorld* InWorld, const FHitResult& TestHit, const UE::Math::TVector<double>& MovementDirDenormalized) { return NativeCall<bool, const UWorld*, const FHitResult&, const UE::Math::TVector<double>&>(this, "UPrimalActor.ShouldIgnoreHitResult(UWorld*,FHitResult&,UE::Math::TVector<double>&)", InWorld, TestHit, MovementDirDenormalized); }
	bool BPGetCustomBlueprintData(FName DataName, const FBPNetExecParams& InData, FBPNetExecParams& OutData) { return NativeCall<bool, FName, const FBPNetExecParams&, FBPNetExecParams&>(this, "UPrimalActor.BPGetCustomBlueprintData(FName,FBPNetExecParams&,FBPNetExecParams&)", DataName, InData, OutData); }
	static bool GetPrimalABTest2() { return NativeCall<bool>(nullptr, "UPrimalActor.GetPrimalABTest2()"); }
	bool AllowIKFreeze() { return NativeCall<bool>(this, "UPrimalActor.AllowIKFreeze()"); }
	void ClearProjectileBasing() { NativeCall<void>(this, "UPrimalActor.ClearProjectileBasing()"); }
	bool IsConscious() { return NativeCall<bool>(this, "UPrimalActor.IsConscious()"); }
	FString* GetShooterHUDDebugString_Implementation(FString* result) { return NativeCall<FString*, FString*>(this, "UPrimalActor.GetShooterHUDDebugString_Implementation()", result); }
	bool BPIgnoreAttachedSoundMultipliers(USoundBase* ForSound) { return NativeCall<bool, USoundBase*>(this, "UPrimalActor.BPIgnoreAttachedSoundMultipliers(USoundBase*)", ForSound); }
	bool AllowPhysFlying() { return NativeCall<bool>(this, "UPrimalActor.AllowPhysFlying()"); }
	void PrepareForSaving() { NativeCall<void>(this, "UPrimalActor.PrepareForSaving()"); }
	void BPPostInitializeComponents() { NativeCall<void>(this, "UPrimalActor.BPPostInitializeComponents()"); }
	void BPGetCameraCollisionIgnoreActors(TArray<AActor*, TSizedDefaultAllocator<32> >& outActors) { NativeCall<void, TArray<AActor*, TSizedDefaultAllocator<32> >&>(this, "UPrimalActor.BPGetCameraCollisionIgnoreActors(TArray<AActor*,TSizedDefaultAllocator<32>>&)", outActors); }
	bool ShouldEvaluatePostProcessAnimBP(int LODLevel, int PostProcessAnimBPLODThreshold) { return NativeCall<bool, int, int>(this, "UPrimalActor.ShouldEvaluatePostProcessAnimBP(int,int)", LODLevel, PostProcessAnimBPLODThreshold); }
	void AnimNotifyCustomState_Begin(FName CustomEventName, USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, float TotalDuration, const UAnimNotifyState* AnimNotifyObject) { NativeCall<void, FName, USkeletalMeshComponent*, UAnimSequenceBase*, float, const UAnimNotifyState*>(this, "UPrimalActor.AnimNotifyCustomState_Begin(FName,USkeletalMeshComponent*,UAnimSequenceBase*,float,UAnimNotifyState*)", CustomEventName, MeshComp, Animation, TotalDuration, AnimNotifyObject); }
	bool AllowWalkableSlopeOverride(UPrimitiveComponent* Forcomponent) { return NativeCall<bool, UPrimitiveComponent*>(this, "UPrimalActor.AllowWalkableSlopeOverride(UPrimitiveComponent*)", Forcomponent); }
	float ApplyRadialDamageToActorMultiplier(AActor* Victim) { return NativeCall<float, AActor*>(this, "UPrimalActor.ApplyRadialDamageToActorMultiplier(AActor*)", Victim); }
	void BPClientDoMultiUse(APlayerController* ForPC, int ClientUseIndex, FName ClientUseName) { NativeCall<void, APlayerController*, int, FName>(this, "UPrimalActor.BPClientDoMultiUse(APlayerController*,int,FName)", ForPC, ClientUseIndex, ClientUseName); }
	bool IsMultiMeshPaintable_Implementation() { return NativeCall<bool>(this, "UPrimalActor.IsMultiMeshPaintable_Implementation()"); }
	UE::Math::TVector<double>* GetInterpolatedVelocity(UE::Math::TVector<double>* result) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*>(this, "UPrimalActor.GetInterpolatedVelocity()", result); }
	void CheckRegisterCharacterMesh() { NativeCall<void>(this, "UPrimalActor.CheckRegisterCharacterMesh()"); }
	bool IsDinoFlyerLanding() { return NativeCall<bool>(this, "UPrimalActor.IsDinoFlyerLanding()"); }
	bool AllowGrappling() { return NativeCall<bool>(this, "UPrimalActor.AllowGrappling()"); }
	void GetWindSourceComponents(TArray<UActorComponent*, TSizedDefaultAllocator<32> >& Components, int includePriorityGreaterThan, bool bIsFirstPerson) { NativeCall<void, TArray<UActorComponent*, TSizedDefaultAllocator<32> >&, int, bool>(this, "UPrimalActor.GetWindSourceComponents(TArray<UActorComponent*,TSizedDefaultAllocator<32>>&,int,bool)", Components, includePriorityGreaterThan, bIsFirstPerson); }
	USkeletalMeshComponent* GetSkeletalMeshComponent() { return NativeCall<USkeletalMeshComponent*>(this, "UPrimalActor.GetSkeletalMeshComponent()"); }
	bool IsLocallyControlledByPlayer() { return NativeCall<bool>(this, "UPrimalActor.IsLocallyControlledByPlayer()"); }
	void BPInventoryItemUsed(UObject* InventoryItemObject) { NativeCall<void, UObject*>(this, "UPrimalActor.BPInventoryItemUsed(UObject*)", InventoryItemObject); }
	void PausedAnimSharingLeaderComponent() { NativeCall<void>(this, "UPrimalActor.PausedAnimSharingLeaderComponent()"); }
	float GetNumTamedDinosRangeMultiplier() { return NativeCall<float>(this, "UPrimalActor.GetNumTamedDinosRangeMultiplier()"); }
	bool BPCustomIsRelevantForClient(APlayerController* ForPC) { return NativeCall<bool, APlayerController*>(this, "UPrimalActor.BPCustomIsRelevantForClient(APlayerController*)", ForPC); }
	AController* GetCharacterController() { return NativeCall<AController*>(this, "UPrimalActor.GetCharacterController()"); }
	static bool GetPrimalABTest1() { return NativeCall<bool>(nullptr, "UPrimalActor.GetPrimalABTest1()"); }
	UE::Math::TVector<double>* GetHUDWorldDrawLocation(UE::Math::TVector<double>* result, const FName& HUDTag) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*, const FName&>(this, "UPrimalActor.GetHUDWorldDrawLocation(FName&)", result, HUDTag); }
	void PerformanceThrottledTick() { NativeCall<void>(this, "UPrimalActor.PerformanceThrottledTick()"); }
	void ThrottledTick() { NativeCall<void>(this, "UPrimalActor.ThrottledTick()"); }
	bool ShouldDisableControllerDesiredRotation() { return NativeCall<bool>(this, "UPrimalActor.ShouldDisableControllerDesiredRotation()"); }
	bool ForceAllowAccelerationRotationWhenFalling() { return NativeCall<bool>(this, "UPrimalActor.ForceAllowAccelerationRotationWhenFalling()"); }
	bool IsReadyForDynamicBasing() { return NativeCall<bool>(this, "UPrimalActor.IsReadyForDynamicBasing()"); }
	UE::Math::TVector<double>* GetTargetingLocation(UE::Math::TVector<double>* result, const AActor* Attacker) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*, const AActor*>(this, "UPrimalActor.GetTargetingLocation(AActor*)", result, Attacker); }
	bool EnableUpdateSkeletalMeshKinematics() { return NativeCall<bool>(this, "UPrimalActor.EnableUpdateSkeletalMeshKinematics()"); }
	void MulticastPropertyToPlayer(FName PropertyName, APlayerController* PC, bool bUnreliable) { NativeCall<void, FName, APlayerController*, bool>(this, "UPrimalActor.MulticastPropertyToPlayer(FName,APlayerController*,bool)", PropertyName, PC, bUnreliable); }
	float GetCompassRotation() { return NativeCall<float>(this, "UPrimalActor.GetCompassRotation()"); }
	void AddHostileStacks(int NumStacksToAdd, bool bShareWithTribeMembers, bool bShareWithOfflineMembers) { NativeCall<void, int, bool, bool>(this, "UPrimalActor.AddHostileStacks(int,bool,bool)", NumStacksToAdd, bShareWithTribeMembers, bShareWithOfflineMembers); }
	bool ShouldSendEndOverlapNotifiesAlways() { return NativeCall<bool>(this, "UPrimalActor.ShouldSendEndOverlapNotifiesAlways()"); }
	bool RemoteInventoryAllowViewing(APlayerController* ForPC) { return NativeCall<bool, APlayerController*>(this, "UPrimalActor.RemoteInventoryAllowViewing(APlayerController*)", ForPC); }
	UE::Math::TVector<double>* BPOverrideUILocation(UE::Math::TVector<double>* result, APlayerController* ForPC) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*, APlayerController*>(this, "UPrimalActor.BPOverrideUILocation(APlayerController*)", result, ForPC); }
	static void GetTargetingTeam_WrapperImpl(const void* Object, void* OutValue) { NativeCall<void, const void*, void*>(nullptr, "UPrimalActor.GetTargetingTeam_WrapperImpl(void*,void*)", Object, OutValue); }
	void DrawActorFloatingHUD_Implementation(AHUD* ForHUD) { NativeCall<void, AHUD*>(this, "UPrimalActor.DrawActorFloatingHUD_Implementation(AHUD*)", ForHUD); }
	bool IsDead() { return NativeCall<bool>(this, "UPrimalActor.IsDead()"); }
	bool IsShooterWeapon() { return NativeCall<bool>(this, "UPrimalActor.IsShooterWeapon()"); }
	void Unstasis() { NativeCall<void>(this, "UPrimalActor.Unstasis()"); }
	bool CanMoveThroughActor(AActor* actor) { return NativeCall<bool, AActor*>(this, "UPrimalActor.CanMoveThroughActor(AActor*)", actor); }
	bool BPGetMultiUseCenterText(APlayerController* ForPC, int UseIndex, FString& OutCenterText, FLinearColor& OutCenterTextColor) { return NativeCall<bool, APlayerController*, int, FString&, FLinearColor&>(this, "UPrimalActor.BPGetMultiUseCenterText(APlayerController*,int,FString&,FLinearColor&)", ForPC, UseIndex, OutCenterText, OutCenterTextColor); }
	float BPGetVehicleSuspensionOffsetForWheel(int WheelIndex) { return NativeCall<float, int>(this, "UPrimalActor.BPGetVehicleSuspensionOffsetForWheel(int)", WheelIndex); }
	bool AllowEmulatedMovement() { return NativeCall<bool>(this, "UPrimalActor.AllowEmulatedMovement()"); }
	float GetAttachedSoundVolumeMultiplier() { return NativeCall<float>(this, "UPrimalActor.GetAttachedSoundVolumeMultiplier()"); }
	void RefreshWeldedTransform() { NativeCall<void>(this, "UPrimalActor.RefreshWeldedTransform()"); }
	UE::Math::TVector<double>* BP_OverrideTargetingLocation(UE::Math::TVector<double>* result, const AActor* Attacker) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*, const AActor*>(this, "UPrimalActor.BP_OverrideTargetingLocation(AActor*)", result, Attacker); }
	void OnInventoryItemGrind() { NativeCall<void>(this, "UPrimalActor.OnInventoryItemGrind()"); }
	bool AllowSkeletalMeshTicking(USkeletalMeshComponent* meshComp) { return NativeCall<bool, USkeletalMeshComponent*>(this, "UPrimalActor.AllowSkeletalMeshTicking(USkeletalMeshComponent*)", meshComp); }
	bool FillVolumetricDispatchesForFoliageInteraction(bool bDebug, UActorComponent* interactionComponent) { return NativeCall<bool, bool, UActorComponent*>(this, "UPrimalActor.FillVolumetricDispatchesForFoliageInteraction(bool,UActorComponent*)", bDebug, interactionComponent); }
	USceneComponent* GetActorSoundAttachmentComponentOverride(USceneComponent* ForComponent) { return NativeCall<USceneComponent*, USceneComponent*>(this, "UPrimalActor.GetActorSoundAttachmentComponentOverride(USceneComponent*)", ForComponent); }
	AActor* GetBasedOnDinoAsActor(bool bUseReplicatedData, bool bOnlyConsciousDino) { return NativeCall<AActor*, bool, bool>(this, "UPrimalActor.GetBasedOnDinoAsActor(bool,bool)", bUseReplicatedData, bOnlyConsciousDino); }
	bool CanThrottleWanderingMovement() { return NativeCall<bool>(this, "UPrimalActor.CanThrottleWanderingMovement()"); }
	bool ShouldTempDisableMultiFabrik() { return NativeCall<bool>(this, "UPrimalActor.ShouldTempDisableMultiFabrik()"); }
	bool FillVolumetricDispatchesForFluidInteraction(bool bDebug, bool bTriggerEvents, UActorComponent* interactionComponent, AActor* dispatcher) { return NativeCall<bool, bool, bool, UActorComponent*, AActor*>(this, "UPrimalActor.FillVolumetricDispatchesForFluidInteraction(bool,bool,UActorComponent*,AActor*)", bDebug, bTriggerEvents, interactionComponent, dispatcher); }
	float OffsetHUDFromCenterScreenY(AHUD* ForHUD) { return NativeCall<float, AHUD*>(this, "UPrimalActor.OffsetHUDFromCenterScreenY(AHUD*)", ForHUD); }
	void InputDismissPOI_BP(APlayerController* ForPC, int Index) { NativeCall<void, APlayerController*, int>(this, "UPrimalActor.InputDismissPOI_BP(APlayerController*,int)", ForPC, Index); }
	void GetOrbitCamZoomParams(float& OutCurrentZoom, float& OutMinZoom, float& OutMaxZoom, float& OutStepSize) { NativeCall<void, float&, float&, float&, float&>(this, "UPrimalActor.GetOrbitCamZoomParams(float&,float&,float&,float&)", OutCurrentZoom, OutMinZoom, OutMaxZoom, OutStepSize); }
	void PrimalOnComponentRemoved(UActorComponent* Component) { NativeCall<void, UActorComponent*>(this, "UPrimalActor.PrimalOnComponentRemoved(UActorComponent*)", Component); }
	void ServerRequestUseItemWithActor(APlayerController* ForPC, UObject* anItem, int AdditionalData, bool bReduceDurability) { NativeCall<void, APlayerController*, UObject*, int, bool>(this, "UPrimalActor.ServerRequestUseItemWithActor(APlayerController*,UObject*,int,bool)", ForPC, anItem, AdditionalData, bReduceDurability); }
	USoundBase* GetActorAttachedSoundOverride(USoundBase* InSound) { return NativeCall<USoundBase*, USoundBase*>(this, "UPrimalActor.GetActorAttachedSoundOverride(USoundBase*)", InSound); }
	void BPPreInitializeComponents() { NativeCall<void>(this, "UPrimalActor.BPPreInitializeComponents()"); }
	UPrimitiveComponent* OverrideBasedProjectileBoundsComponent(UPrimitiveComponent* BasedOnComponent) { return NativeCall<UPrimitiveComponent*, UPrimitiveComponent*>(this, "UPrimalActor.OverrideBasedProjectileBoundsComponent(UPrimitiveComponent*)", BasedOnComponent); }
	float BPGetVehicleRotationAngleForWheel(int WheelIndex) { return NativeCall<float, int>(this, "UPrimalActor.BPGetVehicleRotationAngleForWheel(int)", WheelIndex); }
	void UpdatedBaseAnimSharingComponent() { NativeCall<void>(this, "UPrimalActor.UpdatedBaseAnimSharingComponent()"); }
	bool IsMultiMeshPaintable() { return NativeCall<bool>(this, "UPrimalActor.IsMultiMeshPaintable()"); }
	double GetLastGameplayRelevantTime() { return NativeCall<double>(this, "UPrimalActor.GetLastGameplayRelevantTime()"); }
	bool IsFirstPersonCamera() { return NativeCall<bool>(this, "UPrimalActor.IsFirstPersonCamera()"); }
	void UpdateUnstasisFlags() { NativeCall<void>(this, "UPrimalActor.UpdateUnstasisFlags()"); }
	bool CanMoveThroughActor_Implementation(AActor* actor) { return NativeCall<bool, AActor*>(this, "UPrimalActor.CanMoveThroughActor_Implementation(AActor*)", actor); }
	bool IsAlliedWithOtherTeam(int OtherTeamID) { return NativeCall<bool, int>(this, "UPrimalActor.IsAlliedWithOtherTeam(int)", OtherTeamID); }
	void SetNetPushIdDynamic(unsigned __int64 InNetPushId) { NativeCall<void, unsigned __int64>(this, "UPrimalActor.SetNetPushIdDynamic(unsigned__int64)", InNetPushId); }
	void BPGetCameraCollisionIgnoreActors_Implementation(TArray<AActor*, TSizedDefaultAllocator<32> >& outActors) { NativeCall<void, TArray<AActor*, TSizedDefaultAllocator<32> >&>(this, "UPrimalActor.BPGetCameraCollisionIgnoreActors_Implementation(TArray<AActor*,TSizedDefaultAllocator<32>>&)", outActors); }
	bool IsEncumbered() { return NativeCall<bool>(this, "UPrimalActor.IsEncumbered()"); }
	float BPGetVehicleSteerAngleForWheel(int WheelIndex) { return NativeCall<float, int>(this, "UPrimalActor.BPGetVehicleSteerAngleForWheel(int)", WheelIndex); }
	void RemoveBasedPawn(AActor* anPawn) { NativeCall<void, AActor*>(this, "UPrimalActor.RemoveBasedPawn(AActor*)", anPawn); }
	bool AllowPhysWalking() { return NativeCall<bool>(this, "UPrimalActor.AllowPhysWalking()"); }
	bool IsPhysicsVolume() { return NativeCall<bool>(this, "UPrimalActor.IsPhysicsVolume()"); }
	float GetAttachedSoundPitchMultiplier() { return NativeCall<float>(this, "UPrimalActor.GetAttachedSoundPitchMultiplier()"); }
	void UnPausedAnimSharingLeaderComponent() { NativeCall<void>(this, "UPrimalActor.UnPausedAnimSharingLeaderComponent()"); }
	UE::Math::TRotator<double>* GetInterpolatedRotation(UE::Math::TRotator<double>* result) { return NativeCall<UE::Math::TRotator<double>*, UE::Math::TRotator<double>*>(this, "UPrimalActor.GetInterpolatedRotation()", result); }
	void BPInventoryItemDropped(UObject* InventoryItemObject) { NativeCall<void, UObject*>(this, "UPrimalActor.BPInventoryItemDropped(UObject*)", InventoryItemObject); }
	bool IsTargetable() { return NativeCall<bool>(this, "UPrimalActor.IsTargetable()"); }
	int GetAlternateMultiUseCategory() { return NativeCall<int>(this, "UPrimalActor.GetAlternateMultiUseCategory()"); }
	float OffsetHUDFromBottomScreenY(AHUD* ForHUD) { return NativeCall<float, AHUD*>(this, "UPrimalActor.OffsetHUDFromBottomScreenY(AHUD*)", ForHUD); }
	void RestoreMemoryForUnstasis() { NativeCall<void>(this, "UPrimalActor.RestoreMemoryForUnstasis()"); }
	static bool GetPrimalABTest5() { return NativeCall<bool>(nullptr, "UPrimalActor.GetPrimalABTest5()"); }
	bool PreventNotifySound(USoundBase* SoundIn) { return NativeCall<bool, USoundBase*>(this, "UPrimalActor.PreventNotifySound(USoundBase*)", SoundIn); }
	float OffsetHUDFromBottomScreenY_Implementation(AHUD* ForHUD) { return NativeCall<float, AHUD*>(this, "UPrimalActor.OffsetHUDFromBottomScreenY_Implementation(AHUD*)", ForHUD); }
	float GetRiddenStasisRangeMultiplier() { return NativeCall<float>(this, "UPrimalActor.GetRiddenStasisRangeMultiplier()"); }
	unsigned __int64 GetNetPushIdDynamic() { return NativeCall<unsigned __int64>(this, "UPrimalActor.GetNetPushIdDynamic()"); }
	void RealtimeThrottledTick(double DeltaTime) { NativeCall<void, double>(this, "UPrimalActor.RealtimeThrottledTick(double)", DeltaTime); }
	bool IsARaft() { return NativeCall<bool>(this, "UPrimalActor.IsARaft()"); }
	UE::Math::TTransform<double>* GetSocketTransform(UE::Math::TTransform<double>* result, FName SocketName) { return NativeCall<UE::Math::TTransform<double>*, UE::Math::TTransform<double>*, FName>(this, "UPrimalActor.GetSocketTransform(FName)", result, SocketName); }
	void InitializedAnimScriptInstance() { NativeCall<void>(this, "UPrimalActor.InitializedAnimScriptInstance()"); }
	UE::Math::TVector<double>* BP_GetHUDWorldDrawLocation(UE::Math::TVector<double>* result, FName HUDTag) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*, FName>(this, "UPrimalActor.BP_GetHUDWorldDrawLocation(FName)", result, HUDTag); }
	void StartForceSkelUpdate(float ForTime, bool bForceUpdateMesh, bool bServerOnly, bool bIncludeChildMeshes) { NativeCall<void, float, bool, bool, bool>(this, "UPrimalActor.StartForceSkelUpdate(float,bool,bool,bool)", ForTime, bForceUpdateMesh, bServerOnly, bIncludeChildMeshes); }
	TArray<AActor*, TSizedDefaultAllocator<32> >* GetTracingIgnoreActors() { return NativeCall<TArray<AActor*, TSizedDefaultAllocator<32> >*>(this, "UPrimalActor.GetTracingIgnoreActors()"); }
	USceneComponent* GetParticleBaseComponent() { return NativeCall<USceneComponent*>(this, "UPrimalActor.GetParticleBaseComponent()"); }
	static bool GetPrimalABTest4() { return NativeCall<bool>(nullptr, "UPrimalActor.GetPrimalABTest4()"); }
	bool UseLowQualityAnimationTick() { return NativeCall<bool>(this, "UPrimalActor.UseLowQualityAnimationTick()"); }
	bool Primal_IsActor() { return NativeCall<bool>(this, "UPrimalActor.Primal_IsActor()"); }
	void SetTickFunctionEnabled(bool bEnableTick) { NativeCall<void, bool>(this, "UPrimalActor.SetTickFunctionEnabled(bool)", bEnableTick); }
	UObject* _getUObject() { return NativeCall<UObject*>(this, "UPrimalActor._getUObject()"); }
	bool IgnoreRadialDamageToActor(AActor* Victim) { return NativeCall<bool, AActor*>(this, "UPrimalActor.IgnoreRadialDamageToActor(AActor*)", Victim); }
	bool IsPrimalStructureTurret() { return NativeCall<bool>(this, "UPrimalActor.IsPrimalStructureTurret()"); }
	float OverrideServerMultiUseAcceptRange() { return NativeCall<float>(this, "UPrimalActor.OverrideServerMultiUseAcceptRange()"); }
	FString* GetAimedTutorialHintString_Implementation(FString* result) { return NativeCall<FString*, FString*>(this, "UPrimalActor.GetAimedTutorialHintString_Implementation()", result); }
	bool ShouldSkipForceUpdateWhenAimedCharacter() { return NativeCall<bool>(this, "UPrimalActor.ShouldSkipForceUpdateWhenAimedCharacter()"); }
	bool AllowPenetrationCheck(AActor* OtherActor) { return NativeCall<bool, AActor*>(this, "UPrimalActor.AllowPenetrationCheck(AActor*)", OtherActor); }
	bool ShouldCreateComponentPhysicsState(const UActorComponent* comp) { return NativeCall<bool, const UActorComponent*>(this, "UPrimalActor.ShouldCreateComponentPhysicsState(UActorComponent*)", comp); }
	void OnClientReceivedTransformAfterPairingNetGUID(const UE::Math::TVector<double>& Loc, const UE::Math::TRotator<double>& Rot) { NativeCall<void, const UE::Math::TVector<double>&, const UE::Math::TRotator<double>&>(this, "UPrimalActor.OnClientReceivedTransformAfterPairingNetGUID(UE::Math::TVector<double>&,UE::Math::TRotator<double>&)", Loc, Rot); }
	void AnimNotifyCustomEvent(FName CustomEventName, USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, const UAnimNotify* AnimNotifyObject) { NativeCall<void, FName, USkeletalMeshComponent*, UAnimSequenceBase*, const UAnimNotify*>(this, "UPrimalActor.AnimNotifyCustomEvent(FName,USkeletalMeshComponent*,UAnimSequenceBase*,UAnimNotify*)", CustomEventName, MeshComp, Animation, AnimNotifyObject); }
	bool ShouldMovementUndermeshCheck() { return NativeCall<bool>(this, "UPrimalActor.ShouldMovementUndermeshCheck()"); }
	AActor* GetSecondaryMountedActor() { return NativeCall<AActor*>(this, "UPrimalActor.GetSecondaryMountedActor()"); }
	void PreLoadSaveGame() { NativeCall<void>(this, "UPrimalActor.PreLoadSaveGame()"); }
	void MarkSparseDataClassModified() { NativeCall<void>(this, "UPrimalActor.MarkSparseDataClassModified()"); }
	bool InitializeForReplicatedBasing() { return NativeCall<bool>(this, "UPrimalActor.InitializeForReplicatedBasing()"); }
	bool IsSupplyCrate() { return NativeCall<bool>(this, "UPrimalActor.IsSupplyCrate()"); }
	bool TemplateAllowActorSpawn(UWorld* World, const UE::Math::TVector<double>& AtLocation, const UE::Math::TRotator<double>& AtRotation, const FActorSpawnParameters& SpawnParameters) { return NativeCall<bool, UWorld*, const UE::Math::TVector<double>&, const UE::Math::TRotator<double>&, const FActorSpawnParameters&>(this, "UPrimalActor.TemplateAllowActorSpawn(UWorld*,UE::Math::TVector<double>&,UE::Math::TRotator<double>&,FActorSpawnParameters&)", World, AtLocation, AtRotation, SpawnParameters); }
	bool IsPrimalShip() { return NativeCall<bool>(this, "UPrimalActor.IsPrimalShip()"); }
	bool AllowPhysSwimming() { return NativeCall<bool>(this, "UPrimalActor.AllowPhysSwimming()"); }
	void ForceReplicateNowIfNoChannel() { NativeCall<void>(this, "UPrimalActor.ForceReplicateNowIfNoChannel()"); }
	bool IsNetworkStressTestClientMode() { return NativeCall<bool>(this, "UPrimalActor.IsNetworkStressTestClientMode()"); }
	void UpdateAnimationPreUpdateMatinee() { NativeCall<void>(this, "UPrimalActor.UpdateAnimationPreUpdateMatinee()"); }
	bool IsAlliedWithOtherTeamConst(int OtherTeamID) { return NativeCall<bool, int>(this, "UPrimalActor.IsAlliedWithOtherTeamConst(int)", OtherTeamID); }
	bool IsFemale() { return NativeCall<bool>(this, "UPrimalActor.IsFemale()"); }
	bool IsPrimalStructureFoundation() { return NativeCall<bool>(this, "UPrimalActor.IsPrimalStructureFoundation()"); }
	void BPGetShowDebugAnimationComponents(TArray<USkeletalMeshComponent*, TSizedDefaultAllocator<32> >& SkelMeshComponents) { NativeCall<void, TArray<USkeletalMeshComponent*, TSizedDefaultAllocator<32> >&>(this, "UPrimalActor.BPGetShowDebugAnimationComponents(TArray<USkeletalMeshComponent*,TSizedDefaultAllocator<32>>&)", SkelMeshComponents); }
	bool BPConsumeSetPinCode(APlayerController* ForPC, int appledPinCode, bool bIsSetting, int TheCustomIndex) { return NativeCall<bool, APlayerController*, int, bool, int>(this, "UPrimalActor.BPConsumeSetPinCode(APlayerController*,int,bool,int)", ForPC, appledPinCode, bIsSetting, TheCustomIndex); }
	void PrimalOnComponentAdded(UActorComponent* Component) { NativeCall<void, UActorComponent*>(this, "UPrimalActor.PrimalOnComponentAdded(UActorComponent*)", Component); }
	bool AllowIgnoreCharacterEncroachment_Implementation(UPrimitiveComponent* HitComponent, AActor* EncroachingCharacter) { return NativeCall<bool, UPrimitiveComponent*, AActor*>(this, "UPrimalActor.AllowIgnoreCharacterEncroachment_Implementation(UPrimitiveComponent*,AActor*)", HitComponent, EncroachingCharacter); }
	bool AllowUpdatingPhysAnim() { return NativeCall<bool>(this, "UPrimalActor.AllowUpdatingPhysAnim()"); }
	void BPDrawMultiUseEntry(const FMultiUseEntry& entry, APlayerController* ForPC, UCanvas* Canvas, const UE::Math::TVector2<double>& canvasPosition) { NativeCall<void, const FMultiUseEntry&, APlayerController*, UCanvas*, const UE::Math::TVector2<double>&>(this, "UPrimalActor.BPDrawMultiUseEntry(FMultiUseEntry&,APlayerController*,UCanvas*,UE::Math::TVector2<double>&)", entry, ForPC, Canvas, canvasPosition); }
	bool BPForceAllowsInventoryUse(const UObject* InventoryItemObject) { return NativeCall<bool, const UObject*>(this, "UPrimalActor.BPForceAllowsInventoryUse(UObject*)", InventoryItemObject); }
	bool ShouldUseAnimationUpdateRateOptimizations() { return NativeCall<bool>(this, "UPrimalActor.ShouldUseAnimationUpdateRateOptimizations()"); }
	unsigned char GetNetRelevancyBiomeId() { return NativeCall<unsigned char>(this, "UPrimalActor.GetNetRelevancyBiomeId()"); }
	void ModifyHudMultiUseLoc_Implementation(UE::Math::TVector2<double>& theVec, APlayerController* PC, int index) { NativeCall<void, UE::Math::TVector2<double>&, APlayerController*, int>(this, "UPrimalActor.ModifyHudMultiUseLoc_Implementation(UE::Math::TVector2<double>&,APlayerController*,int)", theVec, PC, index); }
	UE::Math::TVector<double>* GetActorViewDirection(UE::Math::TVector<double>* result) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*>(this, "UPrimalActor.GetActorViewDirection()", result); }
	void CharacterBasedOnUpdate(AActor* characterBasedOnMe, float DeltaSeconds) { NativeCall<void, AActor*, float>(this, "UPrimalActor.CharacterBasedOnUpdate(AActor*,float)", characterBasedOnMe, DeltaSeconds); }
	bool CanInteractWithFluid() { return NativeCall<bool>(this, "UPrimalActor.CanInteractWithFluid()"); }
	FString* GetShooterHUDDebugString(FString* result) { return NativeCall<FString*, FString*>(this, "UPrimalActor.GetShooterHUDDebugString()", result); }
	UE::Math::TVector<double>* BPGetOrbitCamTargetLocation(UE::Math::TVector<double>* result) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*>(this, "UPrimalActor.BPGetOrbitCamTargetLocation()", result); }
	float BPGetVehicleRotationAngularVelocityForWheel(int WheelIndex) { return NativeCall<float, int>(this, "UPrimalActor.BPGetVehicleRotationAngularVelocityForWheel(int)", WheelIndex); }
	bool BPTryMultiUse(APlayerController* ForPC, int UseIndex, FName UseName) { return NativeCall<bool, APlayerController*, int, FName>(this, "UPrimalActor.BPTryMultiUse(APlayerController*,int,FName)", ForPC, UseIndex, UseName); }
	bool IsOverridingClientPositionErrorTolerance() { return NativeCall<bool>(this, "UPrimalActor.IsOverridingClientPositionErrorTolerance()"); }
	bool WantsPerFrameSkeletalAnimationTicking() { return NativeCall<bool>(this, "UPrimalActor.WantsPerFrameSkeletalAnimationTicking()"); }
	bool BPAllowActorSpawn(UWorld* ForWorld, UE::Math::TVector<double>* AtLocation, UE::Math::TRotator<double>* AtRotation, AActor* ForOwner, APawn* ForInstigator) { if (!AtLocation) throw std::invalid_argument("Null native value parameter"); if (!AtRotation) throw std::invalid_argument("Null native value parameter"); return NativeCall<bool, UWorld *, UE :: Math :: TVector < double >, UE :: Math :: TRotator < double >, AActor *, APawn *>(this, "UPrimalActor.BPAllowActorSpawn(UWorld*,UE::Math::TVector<double>,UE::Math::TRotator<double>,AActor*,APawn*)", ForWorld, *AtLocation, *AtRotation, ForOwner, ForInstigator); }
	void BPControlRigNotify(FName NotifyName, FName NotifyCustomTag, const FHitResult& WorldSpaceHitResult, const UE::Math::TVector<double>& Velocity) { NativeCall<void, FName, FName, const FHitResult&, const UE::Math::TVector<double>&>(this, "UPrimalActor.BPControlRigNotify(FName,FName,FHitResult&,UE::Math::TVector<double>&)", NotifyName, NotifyCustomTag, WorldSpaceHitResult, Velocity); }
	void AnimNotifyCustomState_End(FName CustomEventName, USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, const UAnimNotifyState* AnimNotifyObject) { NativeCall<void, FName, USkeletalMeshComponent*, UAnimSequenceBase*, const UAnimNotifyState*>(this, "UPrimalActor.AnimNotifyCustomState_End(FName,USkeletalMeshComponent*,UAnimSequenceBase*,UAnimNotifyState*)", CustomEventName, MeshComp, Animation, AnimNotifyObject); }
	float GetStasisConsumerRangeMultiplier() { return NativeCall<float>(this, "UPrimalActor.GetStasisConsumerRangeMultiplier()"); }
	void BPChangedActorTeam(int OldTeamID, int NewTeamID) { NativeCall<void, int, int>(this, "UPrimalActor.BPChangedActorTeam(int,int)", OldTeamID, NewTeamID); }
	void ActorAnimNotifyCustomState_BeginBP(FName CustomEventName, USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, float TotalDuration, const UAnimNotifyState* AnimNotifyObject) { NativeCall<void, FName, USkeletalMeshComponent*, UAnimSequenceBase*, float, const UAnimNotifyState*>(this, "UPrimalActor.ActorAnimNotifyCustomState_BeginBP(FName,USkeletalMeshComponent*,UAnimSequenceBase*,float,UAnimNotifyState*)", CustomEventName, MeshComp, Animation, TotalDuration, AnimNotifyObject); }
	void Stasis() { NativeCall<void>(this, "UPrimalActor.Stasis()"); }
	void ActorAnimNotifyCustomState_TickBP(FName CustomEventName, USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, float FrameDeltaTime, const UAnimNotifyState* AnimNotifyObject) { NativeCall<void, FName, USkeletalMeshComponent*, UAnimSequenceBase*, float, const UAnimNotifyState*>(this, "UPrimalActor.ActorAnimNotifyCustomState_TickBP(FName,USkeletalMeshComponent*,UAnimSequenceBase*,float,UAnimNotifyState*)", CustomEventName, MeshComp, Animation, FrameDeltaTime, AnimNotifyObject); }
	void UpdateAmbientSound() { NativeCall<void>(this, "UPrimalActor.UpdateAmbientSound()"); }
	USoundAttenuation* OverrideSoundAttenuation(USoundBase* ForSound) { return NativeCall<USoundAttenuation*, USoundBase*>(this, "UPrimalActor.OverrideSoundAttenuation(USoundBase*)", ForSound); }
	bool IsWildWandering() { return NativeCall<bool>(this, "UPrimalActor.IsWildWandering()"); }
	bool IsPrimalBot() { return NativeCall<bool>(this, "UPrimalActor.IsPrimalBot()"); }
	bool IncludeTransformInHeaderData() { return NativeCall<bool>(this, "UPrimalActor.IncludeTransformInHeaderData()"); }
	AActor* GetUnstasisViewerSiblingActor() { return NativeCall<AActor*>(this, "UPrimalActor.GetUnstasisViewerSiblingActor()"); }
	bool AllowPhysMovementSweeps() { return NativeCall<bool>(this, "UPrimalActor.AllowPhysMovementSweeps()"); }
	USoundBase* OverrideCharacterSound(USoundBase* SoundIn) { return NativeCall<USoundBase*, USoundBase*>(this, "UPrimalActor.OverrideCharacterSound(USoundBase*)", SoundIn); }
	void RealtimeThrottledTick_Implementation(double DeltaTime) { NativeCall<void, double>(this, "UPrimalActor.RealtimeThrottledTick_Implementation(double)", DeltaTime); }
	bool AllowGrappling_Implementation() { return NativeCall<bool>(this, "UPrimalActor.AllowGrappling_Implementation()"); }
	bool AllowPushOthers() { return NativeCall<bool>(this, "UPrimalActor.AllowPushOthers()"); }
	bool OverridesVehicleWheelProperties() { return NativeCall<bool>(this, "UPrimalActor.OverridesVehicleWheelProperties()"); }
	void RecieveMatineeUpdated() { NativeCall<void>(this, "UPrimalActor.RecieveMatineeUpdated()"); }
	bool BPPreventAttachments(UObject* ForItem) { return NativeCall<bool, UObject*>(this, "UPrimalActor.BPPreventAttachments(UObject*)", ForItem); }
	bool ExcludePostProcessBlendableMaterial(const UMaterialInterface* BlendableMaterialInterface) { return NativeCall<bool, const UMaterialInterface*>(this, "UPrimalActor.ExcludePostProcessBlendableMaterial(UMaterialInterface*)", BlendableMaterialInterface); }
	void BPSetNetworkAndStasisRangeMultiplier(float Value) { NativeCall<void, float>(this, "UPrimalActor.BPSetNetworkAndStasisRangeMultiplier(float)", Value); }
	AActor* GetTargetActorForDyeUI() { return NativeCall<AActor*>(this, "UPrimalActor.GetTargetActorForDyeUI()"); }
	void BPDrawMultiUseCustomEntry(int index, FName text, APlayerController* ForPC, UCanvas* Canvas, const UE::Math::TVector2<double>& canvasPosition) { NativeCall<void, int, FName, APlayerController*, UCanvas*, const UE::Math::TVector2<double>&>(this, "UPrimalActor.BPDrawMultiUseCustomEntry(int,FName,APlayerController*,UCanvas*,UE::Math::TVector2<double>&)", index, text, ForPC, Canvas, canvasPosition); }
	void BPGetActorEyesViewPoint(UE::Math::TVector<double>& OutLocation, UE::Math::TRotator<double>& OutRotation) { NativeCall<void, UE::Math::TVector<double>&, UE::Math::TRotator<double>&>(this, "UPrimalActor.BPGetActorEyesViewPoint(UE::Math::TVector<double>&,UE::Math::TRotator<double>&)", OutLocation, OutRotation); }
	bool IsPrimalStructureTurretBallista() { return NativeCall<bool>(this, "UPrimalActor.IsPrimalStructureTurretBallista()"); }
	void FinalLoadedFromSaveGame() { NativeCall<void>(this, "UPrimalActor.FinalLoadedFromSaveGame()"); }
	FString* GetDebugInfoString(FString* result) { return NativeCall<FString*, FString*>(this, "UPrimalActor.GetDebugInfoString()", result); }
	bool IsDinoBaby() { return NativeCall<bool>(this, "UPrimalActor.IsDinoBaby()"); }
	bool BPConsumeUsePinCode(AActor* FromKeypadActor, APlayerController* ForPC, int appledPinCode, bool bIsActivating) { return NativeCall<bool, AActor*, APlayerController*, int, bool>(this, "UPrimalActor.BPConsumeUsePinCode(AActor*,APlayerController*,int,bool)", FromKeypadActor, ForPC, appledPinCode, bIsActivating); }
	UE::Math::TVector<double>* GetTargetPathfindingLocation(UE::Math::TVector<double>* result, const AActor* Attacker) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*, const AActor*>(this, "UPrimalActor.GetTargetPathfindingLocation(AActor*)", result, Attacker); }
	void AddBasedPawn(AActor* anPawn) { NativeCall<void, AActor*>(this, "UPrimalActor.AddBasedPawn(AActor*)", anPawn); }
	UE::Math::TVector<double>* GetInterpolatedLocation(UE::Math::TVector<double>* result) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*>(this, "UPrimalActor.GetInterpolatedLocation()", result); }
	bool AllowJumpOutOfWaterOnto(AActor* Jumper) { return NativeCall<bool, AActor*>(this, "UPrimalActor.AllowJumpOutOfWaterOnto(AActor*)", Jumper); }
	float GetClientPositionErrorToleranceSquared() { return NativeCall<float>(this, "UPrimalActor.GetClientPositionErrorToleranceSquared()"); }
	UClass* GetBasedUIClass() { return NativeCall<UClass*>(this, "UPrimalActor.GetBasedUIClass()"); }
	bool UseClearOnConsumeInput() { return NativeCall<bool>(this, "UPrimalActor.UseClearOnConsumeInput()"); }
	void ClientHandleNetDestroy() { NativeCall<void>(this, "UPrimalActor.ClientHandleNetDestroy()"); }
	void AnimNotifyCustomState_Tick(FName CustomEventName, USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, float FrameDeltaTime, const UAnimNotifyState* AnimNotifyObject) { NativeCall<void, FName, USkeletalMeshComponent*, UAnimSequenceBase*, float, const UAnimNotifyState*>(this, "UPrimalActor.AnimNotifyCustomState_Tick(FName,USkeletalMeshComponent*,UAnimSequenceBase*,float,UAnimNotifyState*)", CustomEventName, MeshComp, Animation, FrameDeltaTime, AnimNotifyObject); }
	UE::Math::TVector<double>* GetParticleSystemClampingVelocity(UE::Math::TVector<double>* result) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*>(this, "UPrimalActor.GetParticleSystemClampingVelocity()", result); }
};