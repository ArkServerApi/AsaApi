#pragma once
#include "BulkForward.h"
#include "SparseForward.h"


struct APrimalCharacter : ACharacter
{
	// Fields

	long double& LastMeshGameplayRelevantTimeField() { return *GetNativePointerField<long double*>(this, "APrimalCharacter.LastMeshGameplayRelevantTime"); }
	float& ProneEyeHeightField() { return *GetNativePointerField<float*>(this, "APrimalCharacter.ProneEyeHeight"); }
	float& ExtraMaxAccelerationModifierField() { return *GetNativePointerField<float*>(this, "APrimalCharacter.ExtraMaxAccelerationModifier"); }
	float& ExtraFrictionModifierField() { return *GetNativePointerField<float*>(this, "APrimalCharacter.ExtraFrictionModifier"); }
	long double& LastTimePlayAnimationEndedField() { return *GetNativePointerField<long double*>(this, "APrimalCharacter.LastTimePlayAnimationEnded"); }
	long double& LastTimeForceTickPoseOnServerPlayAnimationEndedField() { return *GetNativePointerField<long double*>(this, "APrimalCharacter.LastTimeForceTickPoseOnServerPlayAnimationEnded"); }
	UE::Math::TVector<double>& OldLocationField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "APrimalCharacter.OldLocation"); }
	float& EffectorInterpSpeedField() { return *GetNativePointerField<float*>(this, "APrimalCharacter.EffectorInterpSpeed"); }
	float& HalfLegLengthField() { return *GetNativePointerField<float*>(this, "APrimalCharacter.HalfLegLength"); }
	float& TwoLeggedVirtualPointDistFactorField() { return *GetNativePointerField<float*>(this, "APrimalCharacter.TwoLeggedVirtualPointDistFactor"); }
	float& FullIKDistanceField() { return *GetNativePointerField<float*>(this, "APrimalCharacter.FullIKDistance"); }
	float& IKAfterFallingTimeField() { return *GetNativePointerField<float*>(this, "APrimalCharacter.IKAfterFallingTime"); }
	float& SimpleIkRateField() { return *GetNativePointerField<float*>(this, "APrimalCharacter.SimpleIkRate"); }
	UE::Math::TVector<double>& GroundCheckExtentField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "APrimalCharacter.GroundCheckExtent"); }
	long double& LastForceAimedCharactersTimeField() { return *GetNativePointerField<long double*>(this, "APrimalCharacter.LastForceAimedCharactersTime"); }
	float& FluidInteractionScalarField() { return *GetNativePointerField<float*>(this, "APrimalCharacter.FluidInteractionScalar"); }
	UAnimMontage*& JumpAnimField() { return *GetNativePointerField<UAnimMontage**>(this, "APrimalCharacter.JumpAnim"); }
	UAnimMontage*& LandedAnimField() { return *GetNativePointerField<UAnimMontage**>(this, "APrimalCharacter.LandedAnim"); }
	UAnimMontage*& HurtAnimField() { return *GetNativePointerField<UAnimMontage**>(this, "APrimalCharacter.HurtAnim"); }
	UAnimMontage*& HurtAnim_FlyingField() { return *GetNativePointerField<UAnimMontage**>(this, "APrimalCharacter.HurtAnim_Flying"); }
	UAnimMontage*& HurtAnim_SleepingField() { return *GetNativePointerField<UAnimMontage**>(this, "APrimalCharacter.HurtAnim_Sleeping"); }
	UAnimMontage*& PinnedAnimField() { return *GetNativePointerField<UAnimMontage**>(this, "APrimalCharacter.PinnedAnim"); }
	UParticleSystem*& HurtFXField() { return *GetNativePointerField<UParticleSystem**>(this, "APrimalCharacter.HurtFX"); }
	USoundBase*& HurtSoundField() { return *GetNativePointerField<USoundBase**>(this, "APrimalCharacter.HurtSound"); }
	
	FDecalData& HurtDecalDataField() { return *GetNativePointerField<FDecalData*>(this, "APrimalCharacter.HurtDecalData"); }
	UE::Math::TVector<double>& SavedBaseWorldLocationField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "APrimalCharacter.SavedBaseWorldLocation"); }
	TArray<APrimalBuff*, TSizedDefaultAllocator<32> >& BuffsField() { return *GetNativePointerField<TArray<APrimalBuff*, TSizedDefaultAllocator<32> >*>(this, "APrimalCharacter.Buffs"); }
	long double& LastStartedTalkingTimeField() { return *GetNativePointerField<long double*>(this, "APrimalCharacter.LastStartedTalkingTime"); }
	// Unavailable in UE 5.8.3: supported current accessor already present
	// bool& bIsMutedField();
	FString& TribeNameField() { return *GetNativePointerField<FString*>(this, "APrimalCharacter.TribeName"); }
	float& WaterSubmergedDepthThresholdField() { return *GetNativePointerField<float*>(this, "APrimalCharacter.WaterSubmergedDepthThreshold"); }
	float& ProneWaterSubmergedDepthThresholdField() { return *GetNativePointerField<float*>(this, "APrimalCharacter.ProneWaterSubmergedDepthThreshold"); }
	TEnumAsByte<enum EMovementMode>& SubmergedWaterMovementModeField() { return *GetNativePointerField<TEnumAsByte<enum EMovementMode>*>(this, "APrimalCharacter.SubmergedWaterMovementMode"); }
	TEnumAsByte<enum EMovementMode>& UnSubmergedWaterMovementModeField() { return *GetNativePointerField<TEnumAsByte<enum EMovementMode>*>(this, "APrimalCharacter.UnSubmergedWaterMovementMode"); }
	UToolTipWidget*& CustomTooltipWidgetField() { return *GetNativePointerField<UToolTipWidget**>(this, "APrimalCharacter.CustomTooltipWidget"); }
	TArray<FDamageTypeAdjuster, TSizedDefaultAllocator<32> >& DamageTypeAdjustersField() { return *GetNativePointerField<TArray<FDamageTypeAdjuster, TSizedDefaultAllocator<32> >*>(this, "APrimalCharacter.DamageTypeAdjusters"); }
	float& SnapshotScaleField() { return *GetNativePointerField<float*>(this, "APrimalCharacter.SnapshotScale"); }
	TArray<FPrimalSnapshotPose, TSizedDefaultAllocator<32> >& SnapshotPosesField() { return *GetNativePointerField<TArray<FPrimalSnapshotPose, TSizedDefaultAllocator<32> >*>(this, "APrimalCharacter.SnapshotPoses"); }
	TSubclassOf<UPrimalItem>& PoopItemClassField() { return *GetNativePointerField<TSubclassOf<UPrimalItem>*>(this, "APrimalCharacter.PoopItemClass"); }
	TSubclassOf<UPrimalItem>& TaxidermySkinClassField() { return *GetNativePointerField<TSubclassOf<UPrimalItem>*>(this, "APrimalCharacter.TaxidermySkinClass"); }
	FName& DragBoneNameField() { return *GetNativePointerField<FName*>(this, "APrimalCharacter.DragBoneName"); }
	FName& DragSocketNameField() { return *GetNativePointerField<FName*>(this, "APrimalCharacter.DragSocketName"); }
	float& MaxDragDistanceField() { return *GetNativePointerField<float*>(this, "APrimalCharacter.MaxDragDistance"); }
	float& MaxDragDistanceTimeoutField() { return *GetNativePointerField<float*>(this, "APrimalCharacter.MaxDragDistanceTimeout"); }
	TArray<FName, TSizedDefaultAllocator<32> >& BonesToIngoreWhileDraggedField() { return *GetNativePointerField<TArray<FName, TSizedDefaultAllocator<32> >*>(this, "APrimalCharacter.BonesToIngoreWhileDragged"); }
	
	
	
	
	
	
	
	
	APrimalCharacter*& DraggedCharacterField() { return *GetNativePointerField<APrimalCharacter**>(this, "APrimalCharacter.DraggedCharacter"); }
	APrimalCharacter*& DraggingCharacterField() { return *GetNativePointerField<APrimalCharacter**>(this, "APrimalCharacter.DraggingCharacter"); }
	UE::Math::TTransform<double>& LocalDraggedCharacterTransformField() { return *GetNativePointerField<UE::Math::TTransform<double>*>(this, "APrimalCharacter.LocalDraggedCharacterTransform"); }
	long double& StartDraggingTimeField() { return *GetNativePointerField<long double*>(this, "APrimalCharacter.StartDraggingTime"); }
	long double& LastDragUpdateTimeField() { return *GetNativePointerField<long double*>(this, "APrimalCharacter.LastDragUpdateTime"); }
	long double& ForceUnfreezeSkeletalDynamicsUntilTimeField() { return *GetNativePointerField<long double*>(this, "APrimalCharacter.ForceUnfreezeSkeletalDynamicsUntilTime"); }
	float& StasisConsumerRangeMultiplierField() { return *GetNativePointerField<float*>(this, "APrimalCharacter.StasisConsumerRangeMultiplier"); }
	AActor*& ImmobilizationActorField() { return *GetNativePointerField<AActor**>(this, "APrimalCharacter.ImmobilizationActor"); }
	int& CurrentFrameAnimPreventInputField() { return *GetNativePointerField<int*>(this, "APrimalCharacter.CurrentFrameAnimPreventInput"); }
	float& BPTimerServerMinField() { return *GetNativePointerField<float*>(this, "APrimalCharacter.BPTimerServerMin"); }
	float& BPTimerServerMaxField() { return *GetNativePointerField<float*>(this, "APrimalCharacter.BPTimerServerMax"); }
	float& BPTimerNonDedicatedMinField() { return *GetNativePointerField<float*>(this, "APrimalCharacter.BPTimerNonDedicatedMin"); }
	float& BPTimerNonDedicatedMaxField() { return *GetNativePointerField<float*>(this, "APrimalCharacter.BPTimerNonDedicatedMax"); }
	long double& NextBPTimerServerField() { return *GetNativePointerField<long double*>(this, "APrimalCharacter.NextBPTimerServer"); }
	long double& NextBPTimerNonDedicatedField() { return *GetNativePointerField<long double*>(this, "APrimalCharacter.NextBPTimerNonDedicated"); }
	long double& LastCausedDamageTimeField() { return *GetNativePointerField<long double*>(this, "APrimalCharacter.LastCausedDamageTime"); }
	AActor*& LastDamageCauserField() { return *GetNativePointerField<AActor**>(this, "APrimalCharacter.LastDamageCauser"); }
	TArray<TSubclassOf<APrimalStructure>, TSizedDefaultAllocator<32> >& ImmobilizationTrapsToIgnoreField() { return *GetNativePointerField<TArray<TSubclassOf<APrimalStructure>, TSizedDefaultAllocator<32> >*>(this, "APrimalCharacter.ImmobilizationTrapsToIgnore"); }
	TWeakObjectPtr<APrimalStructureElevatorPlatform>& BasedElevatorField() { return *GetNativePointerField<TWeakObjectPtr<APrimalStructureElevatorPlatform>*>(this, "APrimalCharacter.BasedElevator"); }
	TWeakObjectPtr<APrimalDinoCharacter>& CarryingDinoField() { return *GetNativePointerField<TWeakObjectPtr<APrimalDinoCharacter>*>(this, "APrimalCharacter.CarryingDino"); }
	
	
	
	TSubclassOf<APrimalStructureItemContainer>& DeathDestructionDepositInventoryClassField() { return *GetNativePointerField<TSubclassOf<APrimalStructureItemContainer>*>(this, "APrimalCharacter.DeathDestructionDepositInventoryClass"); }
	
	float& DamageNotifyTeamAggroRangeField() { return *GetNativePointerField<float*>(this, "APrimalCharacter.DamageNotifyTeamAggroRange"); }
	
	float& ReplicatedCurrentHealthField() { return *GetNativePointerField<float*>(this, "APrimalCharacter.ReplicatedCurrentHealth"); }
	float& ReplicatedMaxHealthField() { return *GetNativePointerField<float*>(this, "APrimalCharacter.ReplicatedMaxHealth"); }
	float& ReplicatedCurrentTorporField() { return *GetNativePointerField<float*>(this, "APrimalCharacter.ReplicatedCurrentTorpor"); }
	float& ReplicatedMaxTorporField() { return *GetNativePointerField<float*>(this, "APrimalCharacter.ReplicatedMaxTorpor"); }
	APrimalProjectileGrapplingHook*& LastGrapHookPullingMeField() { return *GetNativePointerField<APrimalProjectileGrapplingHook**>(this, "APrimalCharacter.LastGrapHookPullingMe"); }
	AShooterCharacter*& LastGrapHookPullingOwnerField() { return *GetNativePointerField<AShooterCharacter**>(this, "APrimalCharacter.LastGrapHookPullingOwner"); }
	UE::Math::TVector<double>& DragOffsetField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "APrimalCharacter.DragOffset"); }
	
	
	
	
	TWeakObjectPtr<AStaticMeshActor>& KinematicActorField() { return *GetNativePointerField<TWeakObjectPtr<AStaticMeshActor>*>(this, "APrimalCharacter.KinematicActor"); }
	long double& LastUpdatedAimOffsetsTimeField() { return *GetNativePointerField<long double*>(this, "APrimalCharacter.LastUpdatedAimOffsetsTime"); }
	UE::Math::TVector<double>& MeshPreRagdollRelativeLocationField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "APrimalCharacter.MeshPreRagdollRelativeLocation"); }
	UE::Math::TRotator<double>& MeshPreRagdollRelativeRotationField() { return *GetNativePointerField<UE::Math::TRotator<double>*>(this, "APrimalCharacter.MeshPreRagdollRelativeRotation"); }
	int& DraggingBodyIndexField() { return *GetNativePointerField<int*>(this, "APrimalCharacter.DraggingBodyIndex"); }
	int& DraggedBoneIndexField() { return *GetNativePointerField<int*>(this, "APrimalCharacter.DraggedBoneIndex"); }
	int& customBitFlagsField() { return *GetNativePointerField<int*>(this, "APrimalCharacter.customBitFlags"); }
	float& RunningSpeedModifierField() { return *GetNativePointerField<float*>(this, "APrimalCharacter.RunningSpeedModifier"); }
	float& LowHealthPercentageField() { return *GetNativePointerField<float*>(this, "APrimalCharacter.LowHealthPercentage"); }
	float& BaseTurnRateField() { return *GetNativePointerField<float*>(this, "APrimalCharacter.BaseTurnRate"); }
	float& BaseLookUpRateField() { return *GetNativePointerField<float*>(this, "APrimalCharacter.BaseLookUpRate"); }
	UAnimMontage*& DeathAnimField() { return *GetNativePointerField<UAnimMontage**>(this, "APrimalCharacter.DeathAnim"); }
	UAnimationAsset*& ReplicatedDeathAnimField() { return *GetNativePointerField<UAnimationAsset**>(this, "APrimalCharacter.ReplicatedDeathAnim"); }
	TSoftObjectPtr<UAnimationAsset>& SavedDeathAnimField() { return *GetNativePointerField<TSoftObjectPtr<UAnimationAsset>*>(this, "APrimalCharacter.SavedDeathAnim"); }
	USoundBase*& DeathSoundField() { return *GetNativePointerField<USoundBase**>(this, "APrimalCharacter.DeathSound"); }
	USoundBase*& RunLoopSoundField() { return *GetNativePointerField<USoundBase**>(this, "APrimalCharacter.RunLoopSound"); }
	USoundBase*& RunStopSoundField() { return *GetNativePointerField<USoundBase**>(this, "APrimalCharacter.RunStopSound"); }
	TArray<USoundBase*, TSizedDefaultAllocator<32> >& FootStepSoundsPhysMatField() { return *GetNativePointerField<TArray<USoundBase*, TSizedDefaultAllocator<32> >*>(this, "APrimalCharacter.FootStepSoundsPhysMat"); }
	
	//FVelocityBasedCharacterSoundInfo& VelocityBasedLandedSoundsField() { return *GetNativePointerField<FVelocityBasedCharacterSoundInfo*>(this, "APrimalCharacter.VelocityBasedLandedSounds"); }
	float& LastSimulatedFallingVelocityZField() { return *GetNativePointerField<float*>(this, "APrimalCharacter.LastSimulatedFallingVelocityZ"); }
	
	TWeakObjectPtr<UAudioComponent>& LastVoiceAudioComponentField() { return *GetNativePointerField<TWeakObjectPtr<UAudioComponent>*>(this, "APrimalCharacter.LastVoiceAudioComponent"); }
	float& MaxFallSpeedField() { return *GetNativePointerField<float*>(this, "APrimalCharacter.MaxFallSpeed"); }
	float& FallDamageMultiplierField() { return *GetNativePointerField<float*>(this, "APrimalCharacter.FallDamageMultiplier"); }
	UAudioComponent*& RunLoopACField() { return *GetNativePointerField<UAudioComponent**>(this, "APrimalCharacter.RunLoopAC"); }
	//FConstraintInstance& DraggingConstraintField() { return *GetNativePointerField<FConstraintInstance*>(this, "APrimalCharacter.DraggingConstraint"); }
	float& CurrentCarriedYawField() { return *GetNativePointerField<float*>(this, "APrimalCharacter.CurrentCarriedYaw"); }
	float& TargetCarriedYawField() { return *GetNativePointerField<float*>(this, "APrimalCharacter.TargetCarriedYaw"); }
	float& ServerTargetCarriedYawField() { return *GetNativePointerField<float*>(this, "APrimalCharacter.ServerTargetCarriedYaw"); }
	USoundBase*& NetDynamicMusicSoundField() { return *GetNativePointerField<USoundBase**>(this, "APrimalCharacter.NetDynamicMusicSound"); }
	TWeakObjectPtr<APrimalDinoCharacter>& MountedDinoField() { return *GetNativePointerField<TWeakObjectPtr<APrimalDinoCharacter>*>(this, "APrimalCharacter.MountedDino"); }
	TWeakObjectPtr<APrimalDinoCharacter>& SecondaryMountedDinoField() { return *GetNativePointerField<TWeakObjectPtr<APrimalDinoCharacter>*>(this, "APrimalCharacter.SecondaryMountedDino"); }
	long double& MountedDinoTimeField() { return *GetNativePointerField<long double*>(this, "APrimalCharacter.MountedDinoTime"); }
	TWeakObjectPtr<APrimalDinoCharacter>& PreviousMountedDinoField() { return *GetNativePointerField<TWeakObjectPtr<APrimalDinoCharacter>*>(this, "APrimalCharacter.PreviousMountedDino"); }
	UE::Math::TVector<double>& LastForceFallCheckBaseLocationField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "APrimalCharacter.LastForceFallCheckBaseLocation"); }
	UE::Math::TVector<double>& LastHitWallSweepCheckLocationField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "APrimalCharacter.LastHitWallSweepCheckLocation"); }
	long double& LastTimeBasedMovementHadCurrentActorField() { return *GetNativePointerField<long double*>(this, "APrimalCharacter.LastTimeBasedMovementHadCurrentActor"); }
	TWeakObjectPtr<AActor>& LastBasedMovementActorRefField() { return *GetNativePointerField<TWeakObjectPtr<AActor>*>(this, "APrimalCharacter.LastBasedMovementActorRef"); }
	float& GrabWeightThresholdField() { return *GetNativePointerField<float*>(this, "APrimalCharacter.GrabWeightThreshold"); }
	float& DragWeightField() { return *GetNativePointerField<float*>(this, "APrimalCharacter.DragWeight"); }
	FTimerHandle& UpdateDraggingHandleField() { return *GetNativePointerField<FTimerHandle*>(this, "APrimalCharacter.UpdateDraggingHandle"); }
	FString& DescriptiveNameField() { return *GetNativePointerField<FString*>(this, "APrimalCharacter.DescriptiveName"); }
	//TArray<FVector_NetQuantize, TSizedDefaultAllocator<32> >& ReplicatedRagdollPositionsField() { return *GetNativePointerField<TArray<FVector_NetQuantize, TSizedDefaultAllocator<32> >*>(this, "APrimalCharacter.ReplicatedRagdollPositions"); }
	//TArray<FRotator_NetQuantize, TSizedDefaultAllocator<32> >& ReplicatedRagdollRotationsField() { return *GetNativePointerField<TArray<FRotator_NetQuantize, TSizedDefaultAllocator<32> >*>(this, "APrimalCharacter.ReplicatedRagdollRotations"); }
	//TArray<FVector_NetQuantize, TSizedDefaultAllocator<32> >& LastReplicatedRagdollPositionsField() { return *GetNativePointerField<TArray<FVector_NetQuantize, TSizedDefaultAllocator<32> >*>(this, "APrimalCharacter.LastReplicatedRagdollPositions"); }
	//TArray<FRotator_NetQuantize, TSizedDefaultAllocator<32> >& LastReplicatedRagdollRotationsField() { return *GetNativePointerField<TArray<FRotator_NetQuantize, TSizedDefaultAllocator<32> >*>(this, "APrimalCharacter.LastReplicatedRagdollRotations"); }
	UE::Math::TRotator<double>& ReplicatedRootRotationField() { return *GetNativePointerField<UE::Math::TRotator<double>*>(this, "APrimalCharacter.ReplicatedRootRotation"); }
	//TArray<FConstraintInstance, TSizedDefaultAllocator<32> >& ReplicatedBonesConstraintsField() { return *GetNativePointerField<TArray<FConstraintInstance, TSizedDefaultAllocator<32> >*>(this, "APrimalCharacter.ReplicatedBonesConstraints"); }
	TArray<int, TSizedDefaultAllocator<32> >& ReplicatedBonesIndiciesField() { return *GetNativePointerField<TArray<int, TSizedDefaultAllocator<32> >*>(this, "APrimalCharacter.ReplicatedBonesIndicies"); }
	FTimerHandle& UpdateRagdollReplicationOnClientHandleField() { return *GetNativePointerField<FTimerHandle*>(this, "APrimalCharacter.UpdateRagdollReplicationOnClientHandle"); }
	float& WalkRunTransitionCooldownField() { return *GetNativePointerField<float*>(this, "APrimalCharacter.WalkRunTransitionCooldown"); }
	float& KillXPBaseField() { return *GetNativePointerField<float*>(this, "APrimalCharacter.KillXPBase"); }
	TArray<FName, TSizedDefaultAllocator<32> >& ReplicatedBonesField() { return *GetNativePointerField<TArray<FName, TSizedDefaultAllocator<32> >*>(this, "APrimalCharacter.ReplicatedBones"); }
	float& RagdollReplicationIntervalField() { return *GetNativePointerField<float*>(this, "APrimalCharacter.RagdollReplicationInterval"); }
	FTimerHandle& ReplicateRagdollHandleField() { return *GetNativePointerField<FTimerHandle*>(this, "APrimalCharacter.ReplicateRagdollHandle"); }
	TArray<FBoneDamageAdjuster, TSizedDefaultAllocator<32> >& BoneDamageAdjustersField() { return *GetNativePointerField<TArray<FBoneDamageAdjuster, TSizedDefaultAllocator<32> >*>(this, "APrimalCharacter.BoneDamageAdjusters"); }
	float& ClientRotationInterpSpeedField() { return *GetNativePointerField<float*>(this, "APrimalCharacter.ClientRotationInterpSpeed"); }
	float& ClientLocationInterpSpeedField() { return *GetNativePointerField<float*>(this, "APrimalCharacter.ClientLocationInterpSpeed"); }
	float& MaxDragMovementSpeedField() { return *GetNativePointerField<float*>(this, "APrimalCharacter.MaxDragMovementSpeed"); }
	UE::Math::TRotator<double>& CurrentAimRotField() { return *GetNativePointerField<UE::Math::TRotator<double>*>(this, "APrimalCharacter.CurrentAimRot"); }
	UE::Math::TVector<double>& CurrentRootLocField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "APrimalCharacter.CurrentRootLoc"); }
	int& LastYawSpeedWorldFrameCounterField() { return *GetNativePointerField<int*>(this, "APrimalCharacter.LastYawSpeedWorldFrameCounter"); }
	FName& MeshPreRagdollCollisionProfileNameField() { return *GetNativePointerField<FName*>(this, "APrimalCharacter.MeshPreRagdollCollisionProfileName"); }
	FName& CapsulePreRagdollCollisionProfileNameField() { return *GetNativePointerField<FName*>(this, "APrimalCharacter.CapsulePreRagdollCollisionProfileName"); }
	UPrimalCharacterStatusComponent*& MyCharacterStatusComponentField() { return *GetNativePointerField<UPrimalCharacterStatusComponent**>(this, "APrimalCharacter.MyCharacterStatusComponent"); }
	float& LastTickStaminaValueField() { return *GetNativePointerField<float*>(this, "APrimalCharacter.LastTickStaminaValue"); }
	UPrimalInventoryComponent*& MyInventoryComponentField() { return *GetNativePointerField<UPrimalInventoryComponent**>(this, "APrimalCharacter.MyInventoryComponent"); }
	UAnimMontage*& SyncedMontageField() { return *GetNativePointerField<UAnimMontage**>(this, "APrimalCharacter.SyncedMontage"); }
	long double& LastMontageSyncTimeField() { return *GetNativePointerField<long double*>(this, "APrimalCharacter.LastMontageSyncTime"); }
	float& SyncedMontageDurationField() { return *GetNativePointerField<float*>(this, "APrimalCharacter.SyncedMontageDuration"); }
	
	long double& LastRunningTimeField() { return *GetNativePointerField<long double*>(this, "APrimalCharacter.LastRunningTime"); }
	UE::Math::TVector<double>& TPVCameraOffsetField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "APrimalCharacter.TPVCameraOffset"); }
	UE::Math::TVector<double>& TPVCameraOffsetMultiplierField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "APrimalCharacter.TPVCameraOffsetMultiplier"); }
	float& TPVCameraHorizontalOffsetFactorMaxField() { return *GetNativePointerField<float*>(this, "APrimalCharacter.TPVCameraHorizontalOffsetFactorMax"); }
	float& TPVCameraHorizontalOffsetFactorMaxClampField() { return *GetNativePointerField<float*>(this, "APrimalCharacter.TPVCameraHorizontalOffsetFactorMaxClamp"); }
	UE::Math::TVector<double>& TPVCameraOrgOffsetField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "APrimalCharacter.TPVCameraOrgOffset"); }
	float& LandedSoundMaxRangeField() { return *GetNativePointerField<float*>(this, "APrimalCharacter.LandedSoundMaxRange"); }
	
	float& FootstepsMaxRangeField() { return *GetNativePointerField<float*>(this, "APrimalCharacter.FootstepsMaxRange"); }
	
	long double& LastPlayedFootstepTimeField() { return *GetNativePointerField<long double*>(this, "APrimalCharacter.LastPlayedFootstepTime"); }
	
	TArray<TSoftObjectPtr<UAnimMontage>, TSizedDefaultAllocator<32> >& AnimationsPreventInputField() { return *GetNativePointerField<TArray<TSoftObjectPtr<UAnimMontage>, TSizedDefaultAllocator<32> >*>(this, "APrimalCharacter.AnimationsPreventInput"); }
	TSubclassOf<UPrimalHarvestingComponent>& DeathHarvestingComponentField() { return *GetNativePointerField<TSubclassOf<UPrimalHarvestingComponent>*>(this, "APrimalCharacter.DeathHarvestingComponent"); }
	UPrimalHarvestingComponent*& MyDeathHarvestingComponentField() { return *GetNativePointerField<UPrimalHarvestingComponent**>(this, "APrimalCharacter.MyDeathHarvestingComponent"); }
	TSharedPtr<FAttachedInstancedHarvestingElement>& MyDeathHarvestingElementField() { return *GetNativePointerField<TSharedPtr<FAttachedInstancedHarvestingElement>*>(this, "APrimalCharacter.MyDeathHarvestingElement"); }
	long double& LastNetDidLandField() { return *GetNativePointerField<long double*>(this, "APrimalCharacter.LastNetDidLand"); }
	FTimerHandle& ForceSleepRagdollHandleField() { return *GetNativePointerField<FTimerHandle*>(this, "APrimalCharacter.ForceSleepRagdollHandle"); }
	FTimerHandle& ForceSleepRagdollExHandleField() { return *GetNativePointerField<FTimerHandle*>(this, "APrimalCharacter.ForceSleepRagdollExHandle"); }
	FTimerHandle& LifespanExpiredHandleField() { return *GetNativePointerField<FTimerHandle*>(this, "APrimalCharacter.LifespanExpiredHandle"); }
	TWeakObjectPtr<AController>& LastDamageEventInstigatorField() { return *GetNativePointerField<TWeakObjectPtr<AController>*>(this, "APrimalCharacter.LastDamageEventInstigator"); }
	int& CachedNumberOfClientRagdollCorrectionAttemptsField() { return *GetNativePointerField<int*>(this, "APrimalCharacter.CachedNumberOfClientRagdollCorrectionAttempts"); }
	int& NumberOfClientRagdollCorrectionAttemptsField() { return *GetNativePointerField<int*>(this, "APrimalCharacter.NumberOfClientRagdollCorrectionAttempts"); }
	float& ServerForceSleepRagdollIntervalField() { return *GetNativePointerField<float*>(this, "APrimalCharacter.ServerForceSleepRagdollInterval"); }
	float& ClientForceSleepRagdollIntervalField() { return *GetNativePointerField<float*>(this, "APrimalCharacter.ClientForceSleepRagdollInterval"); }
	float& NonRelevantServerForceSleepRagdollIntervalField() { return *GetNativePointerField<float*>(this, "APrimalCharacter.NonRelevantServerForceSleepRagdollInterval"); }
	ABiomeZoneVolume*& MyBiomeZoneVolumeField() { return *GetNativePointerField<ABiomeZoneVolume**>(this, "APrimalCharacter.MyBiomeZoneVolume"); }
	TEnumAsByte<enum EShooterPhysMaterialType::Type>& TargetableDamageFXDefaultPhysMaterialField() { return *GetNativePointerField<TEnumAsByte<enum EShooterPhysMaterialType::Type>*>(this, "APrimalCharacter.TargetableDamageFXDefaultPhysMaterial"); }
	UAnimMontage*& PoopAnimationField() { return *GetNativePointerField<UAnimMontage**>(this, "APrimalCharacter.PoopAnimation"); }
	// Unavailable in UE 5.8.3: supported current accessor already present
	// bool& AccessSpawn2PressedField();
	FieldArray<bool, 2> ToggleCameraProbeModeChordField() { return { this, "APrimalCharacter.ToggleCameraProbeModeChord" }; }
	long double& CorpseDestructionTimeField() { return *GetNativePointerField<long double*>(this, "APrimalCharacter.CorpseDestructionTime"); }
	float& CorpseLifespanField() { return *GetNativePointerField<float*>(this, "APrimalCharacter.CorpseLifespan"); }
	
	float& CorpseFadeAwayTimeField() { return *GetNativePointerField<float*>(this, "APrimalCharacter.CorpseFadeAwayTime"); }
	
	USoundBase*& PoopSoundField() { return *GetNativePointerField<USoundBase**>(this, "APrimalCharacter.PoopSound"); }
	float& BaseTargetingDesirabilityField() { return *GetNativePointerField<float*>(this, "APrimalCharacter.BaseTargetingDesirability"); }
	float& DeadBaseTargetingDesirabilityField() { return *GetNativePointerField<float*>(this, "APrimalCharacter.DeadBaseTargetingDesirability"); }
	UE::Math::TRotator<double>& OrbitCamRotField() { return *GetNativePointerField<UE::Math::TRotator<double>*>(this, "APrimalCharacter.OrbitCamRot"); }
	float& OrbitCamZoomField() { return *GetNativePointerField<float*>(this, "APrimalCharacter.OrbitCamZoom"); }
	
	
	
	TArray<ABiomeZoneVolume*, TSizedDefaultAllocator<32> >& BiomeZoneVolumesField() { return *GetNativePointerField<TArray<ABiomeZoneVolume*, TSizedDefaultAllocator<32> >*>(this, "APrimalCharacter.BiomeZoneVolumes"); }
	UE::Math::TVector<double>& LastSubmergedCheckLocField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "APrimalCharacter.LastSubmergedCheckLoc"); }
	long double& LastTimeNotInFallingField() { return *GetNativePointerField<long double*>(this, "APrimalCharacter.LastTimeNotInFalling"); }
	
	float& AddForwardVelocityOnJumpField() { return *GetNativePointerField<float*>(this, "APrimalCharacter.AddForwardVelocityOnJump"); }
	
	
	FDamageEvent*& CurrentDamageEventField() { return *GetNativePointerField<FDamageEvent**>(this, "APrimalCharacter.CurrentDamageEvent"); }
	TWeakObjectPtr<APhysicsVolume>& LastApproximatePhysicsVolumeField() { return *GetNativePointerField<TWeakObjectPtr<APhysicsVolume>*>(this, "APrimalCharacter.LastApproximatePhysicsVolume"); }
	UE::Math::TVector<double>& LastApproximatePhysVolumeLocationField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "APrimalCharacter.LastApproximatePhysVolumeLocation"); }
	FTimerHandle& UseFastInventoryHandleField() { return *GetNativePointerField<FTimerHandle*>(this, "APrimalCharacter.UseFastInventoryHandle"); }
	long double& LastTimeSubmergedField() { return *GetNativePointerField<long double*>(this, "APrimalCharacter.LastTimeSubmerged"); }
	EPhysicalSurface& LastFootPhysicalSurfaceTypeField() { return *GetNativePointerField<EPhysicalSurface*>(this, "APrimalCharacter.LastFootPhysicalSurfaceType"); }
	long double& LastFootPhysicalSurfaceCheckTimeField() { return *GetNativePointerField<long double*>(this, "APrimalCharacter.LastFootPhysicalSurfaceCheckTime"); }
	
	TWeakObjectPtr<APrimalCharacter>& LastHurtByNearbyPlayerField() { return *GetNativePointerField<TWeakObjectPtr<APrimalCharacter>*>(this, "APrimalCharacter.LastHurtByNearbyPlayer"); }
	long double& LastHurtByNearbyPlayerTimeField() { return *GetNativePointerField<long double*>(this, "APrimalCharacter.LastHurtByNearbyPlayerTime"); }
	TWeakObjectPtr<APrimalCharacter>& LastAttackedNearbyPlayerField() { return *GetNativePointerField<TWeakObjectPtr<APrimalCharacter>*>(this, "APrimalCharacter.LastAttackedNearbyPlayer"); }
	long double& LastAttackedNearbyPlayerTimeField() { return *GetNativePointerField<long double*>(this, "APrimalCharacter.LastAttackedNearbyPlayerTime"); }
	long double& LastStartFallingRagdollTimeField() { return *GetNativePointerField<long double*>(this, "APrimalCharacter.LastStartFallingRagdollTime"); }
	UE::Math::TVector<double>& RagdollLastFrameLinearVelocityField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "APrimalCharacter.RagdollLastFrameLinearVelocity"); }
	
	
	
	long double& LastUnstasisTimeField() { return *GetNativePointerField<long double*>(this, "APrimalCharacter.LastUnstasisTime"); }
	UE::Math::TVector<double>& PreviousRagdollLocationField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "APrimalCharacter.PreviousRagdollLocation"); }
	int& RagdollPenetrationFailuresField() { return *GetNativePointerField<int*>(this, "APrimalCharacter.RagdollPenetrationFailures"); }
	long double& LastTimeUpdatedCharacterStatusComponentField() { return *GetNativePointerField<long double*>(this, "APrimalCharacter.LastTimeUpdatedCharacterStatusComponent"); }
	long double& LastTimeUpdatedCorpseDestructionTimeField() { return *GetNativePointerField<long double*>(this, "APrimalCharacter.LastTimeUpdatedCorpseDestructionTime"); }
	long double& NextBlinkTimeField() { return *GetNativePointerField<long double*>(this, "APrimalCharacter.NextBlinkTime"); }
	long double& BlinkTimerField() { return *GetNativePointerField<long double*>(this, "APrimalCharacter.BlinkTimer"); }
	long double& LastInSwimmingSoundTimeField() { return *GetNativePointerField<long double*>(this, "APrimalCharacter.LastInSwimmingSoundTime"); }
	
	//FVelocityBasedCharacterSoundInfo& VelocityBasedEnteredSwimmingSoundsField() { return *GetNativePointerField<FVelocityBasedCharacterSoundInfo*>(this, "APrimalCharacter.VelocityBasedEnteredSwimmingSounds"); }
	
	
	long double& LastRelevantToPlayerTimeField() { return *GetNativePointerField<long double*>(this, "APrimalCharacter.LastRelevantToPlayerTime"); }
	long double& MeshStopForceUpdatingAtTimeField() { return *GetNativePointerField<long double*>(this, "APrimalCharacter.MeshStopForceUpdatingAtTime"); }
	long double& LastWalkingTimeField() { return *GetNativePointerField<long double*>(this, "APrimalCharacter.LastWalkingTime"); }
	UE::Math::TVector<double>& LastWalkingLocField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "APrimalCharacter.LastWalkingLoc"); }
	long double& LastSpecialDamageTimeField() { return *GetNativePointerField<long double*>(this, "APrimalCharacter.LastSpecialDamageTime"); }
	
	
	TSubclassOf<UPrimalItem>& PoopAltItemClassField() { return *GetNativePointerField<TSubclassOf<UPrimalItem>*>(this, "APrimalCharacter.PoopAltItemClass"); }
	TArray<TSoftClassPtr<APrimalBuff>, TSizedDefaultAllocator<32> >& DefaultBuffsField() { return *GetNativePointerField<TArray<TSoftClassPtr<APrimalBuff>, TSizedDefaultAllocator<32> >*>(this, "APrimalCharacter.DefaultBuffs"); }
	
	
	float& CorpseDestructionTimerField() { return *GetNativePointerField<float*>(this, "APrimalCharacter.CorpseDestructionTimer"); }
	long double& LastSkinnedTimeField() { return *GetNativePointerField<long double*>(this, "APrimalCharacter.LastSkinnedTime"); }
	float& OriginalCorpseLifespanField() { return *GetNativePointerField<float*>(this, "APrimalCharacter.OriginalCorpseLifespan"); }
	float& CorpseHarvestFadeTimeField() { return *GetNativePointerField<float*>(this, "APrimalCharacter.CorpseHarvestFadeTime"); }
	//FPrimalCharacterDied& OnDiedField() { return *GetNativePointerField<FPrimalCharacterDied*>(this, "APrimalCharacter.OnDied"); }
	//FPrimalCharacterNotifyDamage& OnNotifyDamageField() { return *GetNativePointerField<FPrimalCharacterNotifyDamage*>(this, "APrimalCharacter.OnNotifyDamage"); }
	//FPrimalCharacterSleepStateChanged& OnSleepStateChangedField() { return *GetNativePointerField<FPrimalCharacterSleepStateChanged*>(this, "APrimalCharacter.OnSleepStateChanged"); }
	//FPrimalCharacterNotifyLevelUp& NotifyLevelUpField() { return *GetNativePointerField<FPrimalCharacterNotifyLevelUp*>(this, "APrimalCharacter.NotifyLevelUp"); }
	//FPrimalCharacterNotifyUnstasis& NotifyUnstasisField() { return *GetNativePointerField<FPrimalCharacterNotifyUnstasis*>(this, "APrimalCharacter.NotifyUnstasis"); }
	//FPrimalCharacterNotifyStasis& NotifyStasisField() { return *GetNativePointerField<FPrimalCharacterNotifyStasis*>(this, "APrimalCharacter.NotifyStasis"); }
	UE::Math::TVector<double>& CurrentLocalRootLocField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "APrimalCharacter.CurrentLocalRootLoc"); }
	float& RootYawField() { return *GetNativePointerField<float*>(this, "APrimalCharacter.RootYaw"); }
	long double& LastTimeInSwimmingField() { return *GetNativePointerField<long double*>(this, "APrimalCharacter.LastTimeInSwimming"); }
	long double& LastListenRangePushTimeField() { return *GetNativePointerField<long double*>(this, "APrimalCharacter.LastListenRangePushTime"); }
	//TArray<FDefaultTextureParamOverride, TSizedDefaultAllocator<32> >& DefaultNoItemTextureParamOverridesField() { return *GetNativePointerField<TArray<FDefaultTextureParamOverride, TSizedDefaultAllocator<32> >*>(this, "APrimalCharacter.DefaultNoItemTextureParamOverrides"); }
	float& LastDamageAmountMaterialValueField() { return *GetNativePointerField<float*>(this, "APrimalCharacter.LastDamageAmountMaterialValue"); }
	long double& LastDamageAmountChangeField() { return *GetNativePointerField<long double*>(this, "APrimalCharacter.LastDamageAmountChange"); }
	float& BuffedDamageMultField() { return *GetNativePointerField<float*>(this, "APrimalCharacter.BuffedDamageMult"); }
	float& BuffedResistanceMultField() { return *GetNativePointerField<float*>(this, "APrimalCharacter.BuffedResistanceMult"); }
	UStructurePaintingComponent*& PaintingComponentField() { return *GetNativePointerField<UStructurePaintingComponent**>(this, "APrimalCharacter.PaintingComponent"); }
	float& ExtraMaxSpeedModifierField() { return *GetNativePointerField<float*>(this, "APrimalCharacter.ExtraMaxSpeedModifier"); }
	float& ExtraRotationRateModifierField() { return *GetNativePointerField<float*>(this, "APrimalCharacter.ExtraRotationRateModifier"); }
	
	long double& LastBumpedDamageTimeField() { return *GetNativePointerField<long double*>(this, "APrimalCharacter.LastBumpedDamageTime"); }
	
	long double& LastTookDamageTimeField() { return *GetNativePointerField<long double*>(this, "APrimalCharacter.LastTookDamageTime"); }
	float& ExtraReceiveDamageMultiplierField() { return *GetNativePointerField<float*>(this, "APrimalCharacter.ExtraReceiveDamageMultiplier"); }
	float& ExtraMeleeDamageMultiplierField() { return *GetNativePointerField<float*>(this, "APrimalCharacter.ExtraMeleeDamageMultiplier"); }
	float& LastFallingZField() { return *GetNativePointerField<float*>(this, "APrimalCharacter.LastFallingZ"); }
	int& NumFallZFailsField() { return *GetNativePointerField<int*>(this, "APrimalCharacter.NumFallZFails"); }
	TArray<TWeakObjectPtr<APrimalCharacter>, TSizedDefaultAllocator<32> >& CharactersGrappledToMeField() { return *GetNativePointerField<TArray<TWeakObjectPtr<APrimalCharacter>, TSizedDefaultAllocator<32> >*>(this, "APrimalCharacter.CharactersGrappledToMe"); }
	
	
	
	
	long double& ForceCheckPushThroughWallsTimeField() { return *GetNativePointerField<long double*>(this, "APrimalCharacter.ForceCheckPushThroughWallsTime"); }
	long double& LastStoppedEatAnimationTimeField() { return *GetNativePointerField<long double*>(this, "APrimalCharacter.LastStoppedEatAnimationTime"); }
	long double& LastTimeFailedToDrawHUDField() { return *GetNativePointerField<long double*>(this, "APrimalCharacter.LastTimeFailedToDrawHUD"); }
	long double& NextTimeFlushFloorField() { return *GetNativePointerField<long double*>(this, "APrimalCharacter.NextTimeFlushFloor"); }
	
	
	long double& LastIkUpdateTimeField() { return *GetNativePointerField<long double*>(this, "APrimalCharacter.LastIkUpdateTime"); }
	float& GlideGravityScaleMultiplierField() { return *GetNativePointerField<float*>(this, "APrimalCharacter.GlideGravityScaleMultiplier"); }
	float& GlideMaxCarriedWeightField() { return *GetNativePointerField<float*>(this, "APrimalCharacter.GlideMaxCarriedWeight"); }
	UAnimMontage*& lastPlayedMountAnimField() { return *GetNativePointerField<UAnimMontage**>(this, "APrimalCharacter.lastPlayedMountAnim"); }
	
	
	//FPrimalCharacterInputNotify& NotifyInputEventField() { return *GetNativePointerField<FPrimalCharacterInputNotify*>(this, "APrimalCharacter.NotifyInputEvent"); }
	long double& LastForceMeshRefreshBonesTimeField() { return *GetNativePointerField<long double*>(this, "APrimalCharacter.LastForceMeshRefreshBonesTime"); }
	long double& LastStartedBeingCarriedTimeField() { return *GetNativePointerField<long double*>(this, "APrimalCharacter.LastStartedBeingCarriedTime"); }
	float& RunMinVelocityRotDotField() { return *GetNativePointerField<float*>(this, "APrimalCharacter.RunMinVelocityRotDot"); }
	long double& LastHitDamageTimeField() { return *GetNativePointerField<long double*>(this, "APrimalCharacter.LastHitDamageTime"); }
	int& MeshedCounterField() { return *GetNativePointerField<int*>(this, "APrimalCharacter.MeshedCounter"); }
	TArray<TWeakObjectPtr<APrimalCharacter>, TSizedDefaultAllocator<32> >& SavedBasedCharactersField() { return *GetNativePointerField<TArray<TWeakObjectPtr<APrimalCharacter>, TSizedDefaultAllocator<32> >*>(this, "APrimalCharacter.SavedBasedCharacters"); }
	TSet<TWeakObjectPtr<APrimalCharacter>, DefaultKeyFuncs<TWeakObjectPtr<APrimalCharacter>, 0>, FDefaultSetAllocator>& BasedCharacterSetField() { return *GetNativePointerField<TSet<TWeakObjectPtr<APrimalCharacter>, DefaultKeyFuncs<TWeakObjectPtr<APrimalCharacter>, 0>, FDefaultSetAllocator>*>(this, "APrimalCharacter.BasedCharacterSet"); }
	int& MeshingTickCounterMultiplierField() { return *GetNativePointerField<int*>(this, "APrimalCharacter.MeshingTickCounterMultiplier"); }
	
	TArray<FName, TSizedDefaultAllocator<32> >& PreventBuffClassesWithTagField() { return *GetNativePointerField<TArray<FName, TSizedDefaultAllocator<32> >*>(this, "APrimalCharacter.PreventBuffClassesWithTag"); }
	UE::Math::TVector<double>& AutonomousCorrectionOffsetField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "APrimalCharacter.AutonomousCorrectionOffset"); }
	
	//FOnOrbitCameraViewChange& OnOrbitCameraViewChangeField() { return *GetNativePointerField<FOnOrbitCameraViewChange*>(this, "APrimalCharacter.OnOrbitCameraViewChange"); }
	
	TWeakObjectPtr<AActor>& TetherActorField() { return *GetNativePointerField<TWeakObjectPtr<AActor>*>(this, "APrimalCharacter.TetherActor"); }
	float& TetherRadiusField() { return *GetNativePointerField<float*>(this, "APrimalCharacter.TetherRadius"); }
	float& TetherHeightField() { return *GetNativePointerField<float*>(this, "APrimalCharacter.TetherHeight"); }
	long double& lastStartRunningTimeField() { return *GetNativePointerField<long double*>(this, "APrimalCharacter.lastStartRunningTime"); }
	long double& PressCrouchProneToggleTimeField() { return *GetNativePointerField<long double*>(this, "APrimalCharacter.PressCrouchProneToggleTime"); }
	long double& lastGatherHapticsTimeField() { return *GetNativePointerField<long double*>(this, "APrimalCharacter.lastGatherHapticsTime"); }
	UE::Math::TVector<double>& LastTrueGetAimOffsetsLocationCSField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "APrimalCharacter.LastTrueGetAimOffsetsLocationCS"); }
	UE::Math::TRotator<double>& LastTrueGetAimOffsetsRotationCSField() { return *GetNativePointerField<UE::Math::TRotator<double>*>(this, "APrimalCharacter.LastTrueGetAimOffsetsRotationCS"); }
	//TSubclassOf<UPrimalCameraConfig>& ASACameraConfigClassField() { return *GetNativePointerField<TSubclassOf<UPrimalCameraConfig>*>(this, "APrimalCharacter.ASACameraConfigClass"); }
	//UPrimalCameraConfig*& CurrentPrimalCameraConfigField() { return *GetNativePointerField<UPrimalCameraConfig**>(this, "APrimalCharacter.CurrentPrimalCameraConfig"); }
	FName& CameraProfileIdOverrideField() { return *GetNativePointerField<FName*>(this, "APrimalCharacter.CameraProfileIdOverride"); }
	long double& LastStartedSleepingTimeField() { return *GetNativePointerField<long double*>(this, "APrimalCharacter.LastStartedSleepingTime"); }
	long double& ForcePreventCharZInterpUntilTimeField() { return *GetNativePointerField<long double*>(this, "APrimalCharacter.ForcePreventCharZInterpUntilTime"); }
	TMap<FName, UAnimationAsset*, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<FName, UAnimationAsset*, 0> >& DeathAnimationsField() { return *GetNativePointerField<TMap<FName, UAnimationAsset*, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<FName, UAnimationAsset*, 0> >*>(this, "APrimalCharacter.DeathAnimations"); }
	TSet<UParticleSystemComponent*, DefaultKeyFuncs<UParticleSystemComponent*, 0>, FDefaultSetAllocator>& ParticleSystemsToActivateAfterDraggedField() { return *GetNativePointerField<TSet<UParticleSystemComponent*, DefaultKeyFuncs<UParticleSystemComponent*, 0>, FDefaultSetAllocator>*>(this, "APrimalCharacter.ParticleSystemsToActivateAfterDragged"); }
	TSet<UNiagaraComponent*, DefaultKeyFuncs<UNiagaraComponent*, 0>, FDefaultSetAllocator>& NiagaraSystemsToActivateAfterDraggedField() { return *GetNativePointerField<TSet<UNiagaraComponent*, DefaultKeyFuncs<UNiagaraComponent*, 0>, FDefaultSetAllocator>*>(this, "APrimalCharacter.NiagaraSystemsToActivateAfterDragged"); }
	
	
	AActor*& CharacterSavedDynamicBaseField() { return *GetNativePointerField<AActor**>(this, "APrimalCharacter.CharacterSavedDynamicBase"); }
	FName& CharacterSavedDynamicBaseBoneNameField() { return *GetNativePointerField<FName*>(this, "APrimalCharacter.CharacterSavedDynamicBaseBoneName"); }
	UE::Math::TVector<double>& CharacterSavedDynamicBaseRelativeLocationField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "APrimalCharacter.CharacterSavedDynamicBaseRelativeLocation"); }
	UE::Math::TQuat<double>& CharacterSavedDynamicBaseRelativeRotationField() { return *GetNativePointerField<UE::Math::TQuat<double>*>(this, "APrimalCharacter.CharacterSavedDynamicBaseRelativeRotation"); }
	UE::Math::TRotator<double>& LastCachedPlayerControlRotationField() { return *GetNativePointerField<UE::Math::TRotator<double>*>(this, "APrimalCharacter.LastCachedPlayerControlRotation"); }
	float& DragSocketVerticalOffsetAsCapsulePercentField() { return *GetNativePointerField<float*>(this, "APrimalCharacter.DragSocketVerticalOffsetAsCapsulePercent"); }
	
	FCollisionResponseSet& PreDragCollisionSetField() { return *GetNativePointerField<FCollisionResponseSet*>(this, "APrimalCharacter.PreDragCollisionSet"); }
	TEnumAsByte<enum ETickingGroup>& PreDraggingMovementTickGroupField() { return *GetNativePointerField<TEnumAsByte<enum ETickingGroup>*>(this, "APrimalCharacter.PreDraggingMovementTickGroup"); }
	float& CharacterLocalControlZInterpSpeedField() { return *GetNativePointerField<float*>(this, "APrimalCharacter.CharacterLocalControlZInterpSpeed"); }
	float& DeathCapsuleRadiusMultiplierField() { return *GetNativePointerField<float*>(this, "APrimalCharacter.DeathCapsuleRadiusMultiplier"); }
	float& DeathCapsuleHalfHeightMultiplierField() { return *GetNativePointerField<float*>(this, "APrimalCharacter.DeathCapsuleHalfHeightMultiplier"); }
	float& DeathMeshRelativeZOffsetAsCapsulePercentField() { return *GetNativePointerField<float*>(this, "APrimalCharacter.DeathMeshRelativeZOffsetAsCapsulePercent"); }
	float& EnvironmentInteractionPlasticityMultField() { return *GetNativePointerField<float*>(this, "APrimalCharacter.EnvironmentInteractionPlasticityMult"); }
	float& EnvironmentInteractionPlasticityExponentField() { return *GetNativePointerField<float*>(this, "APrimalCharacter.EnvironmentInteractionPlasticityExponent"); }
	long double& LastSpawnedAttackerDamageImpactFXTimeField() { return *GetNativePointerField<long double*>(this, "APrimalCharacter.LastSpawnedAttackerDamageImpactFXTime"); }
	
	
	
	
	long double& PossessedAtTimeField() { return *GetNativePointerField<long double*>(this, "APrimalCharacter.PossessedAtTime"); }
	
	
	
	
	
	
	
	float& EquippedArmorDurabilityPercent1Field() { return *GetNativePointerField<float*>(this, "APrimalCharacter.EquippedArmorDurabilityPercent1"); }
	float& EquippedArmorDurabilityPercent2Field() { return *GetNativePointerField<float*>(this, "APrimalCharacter.EquippedArmorDurabilityPercent2"); }
	

	// Bitfields

	BitFieldValue<bool, unsigned __int32> bIsVoiceTalking() { return { this, "APrimalCharacter.bIsVoiceTalking" }; }
	BitFieldValue<bool, unsigned __int32> bIsProne() { return { this, "APrimalCharacter.bIsProne" }; }
	BitFieldValue<bool, unsigned __int32> bCanEverProne() { return { this, "APrimalCharacter.bCanEverProne" }; }
	BitFieldValue<bool, unsigned __int32> bUseBlueprintJumpInputEvents() { return { this, "APrimalCharacter.bUseBlueprintJumpInputEvents" }; }
	BitFieldValue<bool, unsigned __int32> bUseDeferredMovement() { return { this, "APrimalCharacter.bUseDeferredMovement" }; }
	BitFieldValue<bool, unsigned __int32> bUseBPOverrideAccessInventoryInput() { return { this, "APrimalCharacter.bUseBPOverrideAccessInventoryInput" }; }
	BitFieldValue<bool, unsigned __int32> bDisableCameraShakeOnNotifyHit() { return { this, "APrimalCharacter.bDisableCameraShakeOnNotifyHit" }; }
	BitFieldValue<bool, unsigned __int32> bHasBuffPreSerializeForInstigator() { return { this, "APrimalCharacter.bHasBuffPreSerializeForInstigator" }; }
	BitFieldValue<bool, unsigned __int32> bIsSleeping() { return { this, "APrimalCharacter.bIsSleeping" }; }
	BitFieldValue<bool, unsigned __int32> bWantsToRun() { return { this, "APrimalCharacter.bWantsToRun" }; }
	BitFieldValue<bool, unsigned __int32> bActiveRunToggle() { return { this, "APrimalCharacter.bActiveRunToggle" }; }
	BitFieldValue<bool, unsigned __int32> bLocalIsDragging() { return { this, "APrimalCharacter.bLocalIsDragging" }; }
	BitFieldValue<bool, unsigned __int32> bIsBeingDragged() { return { this, "APrimalCharacter.bIsBeingDragged" }; }
	BitFieldValue<bool, unsigned __int32> bDisableSpawnDefaultController() { return { this, "APrimalCharacter.bDisableSpawnDefaultController" }; }
	BitFieldValue<bool, unsigned __int32> bIsDragging() { return { this, "APrimalCharacter.bIsDragging" }; }
	BitFieldValue<bool, unsigned __int32> bIsDraggingWithGrapHook() { return { this, "APrimalCharacter.bIsDraggingWithGrapHook" }; }
	BitFieldValue<bool, unsigned __int32> bRemoteRunning() { return { this, "APrimalCharacter.bRemoteRunning" }; }
	BitFieldValue<bool, unsigned __int32> bCanRun() { return { this, "APrimalCharacter.bCanRun" }; }
	BitFieldValue<bool, unsigned __int32> bIsBlinking() { return { this, "APrimalCharacter.bIsBlinking" }; }
	BitFieldValue<bool, unsigned __int32> bSleepedWaterRagdoll() { return { this, "APrimalCharacter.bSleepedWaterRagdoll" }; }
	BitFieldValue<bool, unsigned __int32> bCanBeTorpid() { return { this, "APrimalCharacter.bCanBeTorpid" }; }
	BitFieldValue<bool, unsigned __int32> bDebugIK() { return { this, "APrimalCharacter.bDebugIK" }; }
	BitFieldValue<bool, unsigned __int32> bDebugIK_ShowTraceNames() { return { this, "APrimalCharacter.bDebugIK_ShowTraceNames" }; }
	BitFieldValue<bool, unsigned __int32> bForceAlwaysUpdateMesh() { return { this, "APrimalCharacter.bForceAlwaysUpdateMesh" }; }
	BitFieldValue<bool, unsigned __int32> bRagdollIgnoresPawnCapsules() { return { this, "APrimalCharacter.bRagdollIgnoresPawnCapsules" }; }
	BitFieldValue<bool, unsigned __int32> bUsePoopAnimationNotify() { return { this, "APrimalCharacter.bUsePoopAnimationNotify" }; }
	BitFieldValue<bool, unsigned __int32> bDeathUseRagdoll() { return { this, "APrimalCharacter.bDeathUseRagdoll" }; }
	BitFieldValue<bool, unsigned __int32> bCanBeCarried() { return { this, "APrimalCharacter.bCanBeCarried" }; }
	BitFieldValue<bool, unsigned __int32> bDamageNotifyTeamAggroAI() { return { this, "APrimalCharacter.bDamageNotifyTeamAggroAI" }; }
	BitFieldValue<bool, unsigned __int32> bUseBPGetOverrideCameraInterpSpeed() { return { this, "APrimalCharacter.bUseBPGetOverrideCameraInterpSpeed" }; }
	BitFieldValue<bool, unsigned __int32> bRecentlyUpdateIk() { return { this, "APrimalCharacter.bRecentlyUpdateIk" }; }
	BitFieldValue<bool, unsigned __int32> bIKEnabled() { return { this, "APrimalCharacter.bIKEnabled" }; }
	BitFieldValue<bool, unsigned __int32> bIsCarried() { return { this, "APrimalCharacter.bIsCarried" }; }
	BitFieldValue<bool, unsigned __int32> bIsCarriedAsPassenger() { return { this, "APrimalCharacter.bIsCarriedAsPassenger" }; }
	BitFieldValue<bool, unsigned __int32> bForceIKOnDedicatedServer() { return { this, "APrimalCharacter.bForceIKOnDedicatedServer" }; }
	BitFieldValue<bool, unsigned __int32> bIsImmobilized() { return { this, "APrimalCharacter.bIsImmobilized" }; }
	BitFieldValue<bool, unsigned __int32> bCanIgnoreWater() { return { this, "APrimalCharacter.bCanIgnoreWater" }; }
	BitFieldValue<bool, unsigned __int32> bIsDead() { return { this, "APrimalCharacter.bIsDead" }; }
	BitFieldValue<bool, unsigned __int32> ReplicateAllBones() { return { this, "APrimalCharacter.ReplicateAllBones" }; }
	BitFieldValue<bool, unsigned __int32> AutoStopReplicationWhenSleeping() { return { this, "APrimalCharacter.AutoStopReplicationWhenSleeping" }; }
	BitFieldValue<bool, unsigned __int32> bCanDrag() { return { this, "APrimalCharacter.bCanDrag" }; }
	BitFieldValue<bool, unsigned __int32> bCanBeDragged() { return { this, "APrimalCharacter.bCanBeDragged" }; }
	BitFieldValue<bool, unsigned __int32> bUsesRunningAnimation() { return { this, "APrimalCharacter.bUsesRunningAnimation" }; }
	BitFieldValue<bool, unsigned __int32> bOrbitCamera() { return { this, "APrimalCharacter.bOrbitCamera" }; }
	BitFieldValue<bool, unsigned __int32> bDraggedFromExtremitiesOnly() { return { this, "APrimalCharacter.bDraggedFromExtremitiesOnly" }; }
	BitFieldValue<bool, unsigned __int32> bEnableIK() { return { this, "APrimalCharacter.bEnableIK" }; }
	BitFieldValue<bool, unsigned __int32> bNoDamageImpulse() { return { this, "APrimalCharacter.bNoDamageImpulse" }; }
	BitFieldValue<bool, unsigned __int32> bReadyToPoop() { return { this, "APrimalCharacter.bReadyToPoop" }; }
	BitFieldValue<bool, unsigned __int32> bHasDynamicBase() { return { this, "APrimalCharacter.bHasDynamicBase" }; }
	BitFieldValue<bool, unsigned __int32> bDieIfLeftWater() { return { this, "APrimalCharacter.bDieIfLeftWater" }; }
	BitFieldValue<bool, unsigned __int32> bIsAmphibious() { return { this, "APrimalCharacter.bIsAmphibious" }; }
	BitFieldValue<bool, unsigned __int32> bUseAmphibiousTargeting() { return { this, "APrimalCharacter.bUseAmphibiousTargeting" }; }
	BitFieldValue<bool, unsigned __int32> bIsPlayingLowHealthAnim() { return { this, "APrimalCharacter.bIsPlayingLowHealthAnim" }; }
	BitFieldValue<bool, unsigned __int32> bDontActuallyEmitPoop() { return { this, "APrimalCharacter.bDontActuallyEmitPoop" }; }
	BitFieldValue<bool, unsigned __int32> bAllowRunningWhileSwimming() { return { this, "APrimalCharacter.bAllowRunningWhileSwimming" }; }
	BitFieldValue<bool, unsigned __int32> bUseBPAdjustDamage() { return { this, "APrimalCharacter.bUseBPAdjustDamage" }; }
	BitFieldValue<bool, unsigned __int32> bUseBPTimerServer() { return { this, "APrimalCharacter.bUseBPTimerServer" }; }
	BitFieldValue<bool, unsigned __int32> bUseBPTimerNonDedicated() { return { this, "APrimalCharacter.bUseBPTimerNonDedicated" }; }
	BitFieldValue<bool, unsigned __int32> bTriggerBPStasis() { return { this, "APrimalCharacter.bTriggerBPStasis" }; }
	BitFieldValue<bool, unsigned __int32> bUseBPSetCharacterMeshseMaterialScalarParamValue() { return { this, "APrimalCharacter.bUseBPSetCharacterMeshseMaterialScalarParamValue" }; }
	BitFieldValue<bool, unsigned __int32> bIsMounted() { return { this, "APrimalCharacter.bIsMounted" }; }
	BitFieldValue<bool, unsigned __int32> bCanPlayLandingAnim() { return { this, "APrimalCharacter.bCanPlayLandingAnim" }; }
	BitFieldValue<bool, unsigned __int32> bPreventTargetingAndMovement() { return { this, "APrimalCharacter.bPreventTargetingAndMovement" }; }
	BitFieldValue<bool, unsigned __int32> bPreventMovement() { return { this, "APrimalCharacter.bPreventMovement" }; }
	BitFieldValue<bool, unsigned __int32> bPreventWaterHopCorrectionVelChange() { return { this, "APrimalCharacter.bPreventWaterHopCorrectionVelChange" }; }
	BitFieldValue<bool, unsigned __int32> bForcePreventAllInput() { return { this, "APrimalCharacter.bForcePreventAllInput" }; }
	BitFieldValue<bool, unsigned __int32> bPreventAllBuffs() { return { this, "APrimalCharacter.bPreventAllBuffs" }; }
	BitFieldValue<bool, unsigned __int32> LastIsInsideVaccumSealedCube() { return { this, "APrimalCharacter.LastIsInsideVaccumSealedCube" }; }
	BitFieldValue<bool, unsigned __int32> LastIsInsideVaccumSealedCubeOnDino() { return { this, "APrimalCharacter.LastIsInsideVaccumSealedCubeOnDino" }; }
	BitFieldValue<bool, unsigned __int32> bPreventJump() { return { this, "APrimalCharacter.bPreventJump" }; }
	BitFieldValue<bool, unsigned __int32> bDestroyOnStasis() { return { this, "APrimalCharacter.bDestroyOnStasis" }; }
	BitFieldValue<bool, unsigned __int32> bBPModifyAllowedViewHitDir() { return { this, "APrimalCharacter.bBPModifyAllowedViewHitDir" }; }
	BitFieldValue<bool, unsigned __int32> bBPLimitPlayerRotation() { return { this, "APrimalCharacter.bBPLimitPlayerRotation" }; }
	BitFieldValue<bool, unsigned __int32> bBPManagedFPVViewLocation() { return { this, "APrimalCharacter.bBPManagedFPVViewLocation" }; }
	BitFieldValue<bool, unsigned __int32> bBPCameraRotationFinal() { return { this, "APrimalCharacter.bBPCameraRotationFinal" }; }
	BitFieldValue<bool, unsigned __int32> bIsAtMaxInventoryItems() { return { this, "APrimalCharacter.bIsAtMaxInventoryItems" }; }
	BitFieldValue<bool, unsigned __int32> bIsAttachedOtherCharacter() { return { this, "APrimalCharacter.bIsAttachedOtherCharacter" }; }
	BitFieldValue<bool, unsigned __int32> bUseBPOnLethalDamage() { return { this, "APrimalCharacter.bUseBPOnLethalDamage" }; }
	BitFieldValue<bool, unsigned __int32> bUseBPForceCameraStyle() { return { this, "APrimalCharacter.bUseBPForceCameraStyle" }; }
	BitFieldValue<bool, unsigned __int32> bDisableFPV() { return { this, "APrimalCharacter.bDisableFPV" }; }
	BitFieldValue<bool, unsigned __int32> bConsumeZoomInput() { return { this, "APrimalCharacter.bConsumeZoomInput" }; }
	BitFieldValue<bool, unsigned __int32> bInRagdoll() { return { this, "APrimalCharacter.bInRagdoll" }; }
	BitFieldValue<bool, unsigned __int32> bIsBuffed() { return { this, "APrimalCharacter.bIsBuffed" }; }
	BitFieldValue<bool, unsigned __int32> bUseBPGetGravity() { return { this, "APrimalCharacter.bUseBPGetGravity" }; }
	BitFieldValue<bool, unsigned __int32> bUseBPOverrideCharacterNewFallVelocity() { return { this, "APrimalCharacter.bUseBPOverrideCharacterNewFallVelocity" }; }
	BitFieldValue<bool, unsigned __int32> bUseBPOverrideCharacterNewSwimVelocity() { return { this, "APrimalCharacter.bUseBPOverrideCharacterNewSwimVelocity" }; }
	BitFieldValue<bool, unsigned __int32> bSleepingDisableRagdoll() { return { this, "APrimalCharacter.bSleepingDisableRagdoll" }; }
	BitFieldValue<bool, unsigned __int32> bDediServerAutoUnregisterSkeletalMeshWhenNotRelevant() { return { this, "APrimalCharacter.bDediServerAutoUnregisterSkeletalMeshWhenNotRelevant" }; }
	BitFieldValue<bool, unsigned __int32> bPreventLiveBlinking() { return { this, "APrimalCharacter.bPreventLiveBlinking" }; }
	BitFieldValue<bool, unsigned __int32> bUseBPOverrideCharacterSound() { return { this, "APrimalCharacter.bUseBPOverrideCharacterSound" }; }
	BitFieldValue<bool, unsigned __int32> bUseBPOverrideCharacterParticle() { return { this, "APrimalCharacter.bUseBPOverrideCharacterParticle" }; }
	BitFieldValue<bool, unsigned __int32> bPreventHurtAnim() { return { this, "APrimalCharacter.bPreventHurtAnim" }; }
	BitFieldValue<bool, unsigned __int32> bUseBP_ForceAllowBuffClasses() { return { this, "APrimalCharacter.bUseBP_ForceAllowBuffClasses" }; }
	BitFieldValue<bool, unsigned __int32> bUseBPOverrideDamageCauserHitMarker() { return { this, "APrimalCharacter.bUseBPOverrideDamageCauserHitMarker" }; }
	BitFieldValue<bool, unsigned __int32> bIsSkinned() { return { this, "APrimalCharacter.bIsSkinned" }; }
	BitFieldValue<bool, unsigned __int32> bUseBP_OverrideTerminalVelocity() { return { this, "APrimalCharacter.bUseBP_OverrideTerminalVelocity" }; }
	BitFieldValue<bool, unsigned __int32> bPreventPerPixelPainting() { return { this, "APrimalCharacter.bPreventPerPixelPainting" }; }
	BitFieldValue<bool, unsigned __int32> bUseBPItemSlotOverrides() { return { this, "APrimalCharacter.bUseBPItemSlotOverrides" }; }
	BitFieldValue<bool, unsigned __int32> bPreventMoveUp() { return { this, "APrimalCharacter.bPreventMoveUp" }; }
	BitFieldValue<bool, unsigned __int32> bForceAllowDediServerGroundConformInterpolate() { return { this, "APrimalCharacter.bForceAllowDediServerGroundConformInterpolate" }; }
	BitFieldValue<bool, unsigned __int32> bIsHost() { return { this, "APrimalCharacter.bIsHost" }; }
	BitFieldValue<bool, unsigned __int32> bCanBePushed() { return { this, "APrimalCharacter.bCanBePushed" }; }
	BitFieldValue<bool, unsigned __int32> bCanPushOthers() { return { this, "APrimalCharacter.bCanPushOthers" }; }
	BitFieldValue<bool, unsigned __int32> bCanEverCrouch() { return { this, "APrimalCharacter.bCanEverCrouch" }; }
	BitFieldValue<bool, unsigned __int32> bShouldBeInGodMode() { return { this, "APrimalCharacter.bShouldBeInGodMode" }; }
	BitFieldValue<bool, unsigned __int32> bIgnoreLowGravityDisorientation() { return { this, "APrimalCharacter.bIgnoreLowGravityDisorientation" }; }
	BitFieldValue<bool, unsigned __int32> bPreventIKWhenNotWalking() { return { this, "APrimalCharacter.bPreventIKWhenNotWalking" }; }
	BitFieldValue<bool, unsigned __int32> bIgnoreCorpseDecompositionMultipliers() { return { this, "APrimalCharacter.bIgnoreCorpseDecompositionMultipliers" }; }
	BitFieldValue<bool, unsigned __int32> bInterpHealthDamageMaterialOverlayAlpha() { return { this, "APrimalCharacter.bInterpHealthDamageMaterialOverlayAlpha" }; }
	BitFieldValue<bool, unsigned __int32> bSuppressPlayerKillNotification() { return { this, "APrimalCharacter.bSuppressPlayerKillNotification" }; }
	BitFieldValue<bool, unsigned __int32> bAllowCorpseDestructionWithPreventSaving() { return { this, "APrimalCharacter.bAllowCorpseDestructionWithPreventSaving" }; }
	BitFieldValue<bool, unsigned __int32> bPreventInventoryAccess() { return { this, "APrimalCharacter.bPreventInventoryAccess" }; }
	BitFieldValue<bool, unsigned __int32> bUseGetOverrideSocket() { return { this, "APrimalCharacter.bUseGetOverrideSocket" }; }
	BitFieldValue<bool, unsigned __int32> bAllowBPNewDoorInteractionDrawHUD() { return { this, "APrimalCharacter.bAllowBPNewDoorInteractionDrawHUD" }; }
	BitFieldValue<bool, unsigned __int32> bJumpOnRelease() { return { this, "APrimalCharacter.bJumpOnRelease" }; }
	BitFieldValue<bool, unsigned __int32> bAllowMultiUseByRemoteDino() { return { this, "APrimalCharacter.bAllowMultiUseByRemoteDino" }; }
	BitFieldValue<bool, unsigned __int32> bUseBPOverrideJumpZModifier() { return { this, "APrimalCharacter.bUseBPOverrideJumpZModifier" }; }
	BitFieldValue<bool, unsigned __int32> bUseZeroGravityWander() { return { this, "APrimalCharacter.bUseZeroGravityWander" }; }
	BitFieldValue<bool, unsigned __int32> bUseBP_ModifyInputAcceleration() { return { this, "APrimalCharacter.bUseBP_ModifyInputAcceleration" }; }
	BitFieldValue<bool, unsigned __int32> bForceSimpleTeleportFade() { return { this, "APrimalCharacter.bForceSimpleTeleportFade" }; }
	BitFieldValue<bool, unsigned __int32> bUseBPGetArmorDurabilityDecreaseMultiplier() { return { this, "APrimalCharacter.bUseBPGetArmorDurabilityDecreaseMultiplier" }; }
	BitFieldValue<bool, unsigned __int32> bUseBPShieldBlock() { return { this, "APrimalCharacter.bUseBPShieldBlock" }; }
	BitFieldValue<bool, unsigned __int32> bHideFromScans() { return { this, "APrimalCharacter.bHideFromScans" }; }
	BitFieldValue<bool, unsigned __int32> bOverrideWalkingVelocity() { return { this, "APrimalCharacter.bOverrideWalkingVelocity" }; }
	BitFieldValue<bool, unsigned __int32> bOverrideSwimmingVelocity() { return { this, "APrimalCharacter.bOverrideSwimmingVelocity" }; }
	BitFieldValue<bool, unsigned __int32> bOverrideSwimmingAcceleration() { return { this, "APrimalCharacter.bOverrideSwimmingAcceleration" }; }
	BitFieldValue<bool, unsigned __int32> bOverrideNewFallVelocity() { return { this, "APrimalCharacter.bOverrideNewFallVelocity" }; }
	BitFieldValue<bool, unsigned __int32> bOverrideFlyingVelocity() { return { this, "APrimalCharacter.bOverrideFlyingVelocity" }; }
	BitFieldValue<bool, unsigned __int32> bEnableAnimationGroundConforming() { return { this, "APrimalCharacter.bEnableAnimationGroundConforming" }; }
	BitFieldValue<bool, unsigned __int32> bWasBeingDragged() { return { this, "APrimalCharacter.bWasBeingDragged" }; }
	BitFieldValue<bool, unsigned __int32> bUseBPOverridePhysicsImpulses() { return { this, "APrimalCharacter.bUseBPOverridePhysicsImpulses" }; }
	BitFieldValue<bool, unsigned __int32> bAllowASACamera() { return { this, "APrimalCharacter.bAllowASACamera" }; }
	BitFieldValue<bool, unsigned __int32> bUseBPShouldUseLongFallCameraPivotZValues() { return { this, "APrimalCharacter.bUseBPShouldUseLongFallCameraPivotZValues" }; }
	BitFieldValue<bool, unsigned __int32> bUseOnCharacterSteppedNotify() { return { this, "APrimalCharacter.bUseOnCharacterSteppedNotify" }; }
	BitFieldValue<bool, unsigned __int32> bIsDoingDraggedInterp() { return { this, "APrimalCharacter.bIsDoingDraggedInterp" }; }
	BitFieldValue<bool, unsigned __int32> bOverrideBlendSpaceSmoothType() { return { this, "APrimalCharacter.bOverrideBlendSpaceSmoothType" }; }
	BitFieldValue<bool, unsigned __int32> bIgnoreWeightWhenUsingExtraMaxSpeedModifier() { return { this, "APrimalCharacter.bIgnoreWeightWhenUsingExtraMaxSpeedModifier" }; }
	BitFieldValue<bool, unsigned __int32> bUseBPOnSimulatedTick() { return { this, "APrimalCharacter.bUseBPOnSimulatedTick" }; }
	BitFieldValue<bool, unsigned __int32> bVehicleUpdatePPBlends() { return { this, "APrimalCharacter.bVehicleUpdatePPBlends" }; }
	BitFieldValue<bool, unsigned __int32> bIsOverridingClientPositionErrorTolerance() { return { this, "APrimalCharacter.bIsOverridingClientPositionErrorTolerance" }; }
	BitFieldValue<bool, unsigned __int32> bUseBPNotifyOnBuffAdded() { return { this, "APrimalCharacter.bUseBPNotifyOnBuffAdded" }; }
	BitFieldValue<bool, unsigned __int32> bUseOnStartedAllyTargetLooking() { return { this, "APrimalCharacter.bUseOnStartedAllyTargetLooking" }; }
	BitFieldValue<bool, unsigned __int32> bUseBPPlayHitEffect() { return { this, "APrimalCharacter.bUseBPPlayHitEffect" }; }
	BitFieldValue<bool, unsigned __int32> bUseBPAllowRunningWhileFalling() { return { this, "APrimalCharacter.bUseBPAllowRunningWhileFalling" }; }
	BitFieldValue<bool, unsigned __int32> bUseBPModifyXPMultiplier() { return { this, "APrimalCharacter.bUseBPModifyXPMultiplier" }; }
	BitFieldValue<bool, unsigned __int32> bUseBPGetFinalMaxSpeed() { return { this, "APrimalCharacter.bUseBPGetFinalMaxSpeed" }; }
	BitFieldValue<bool, unsigned __int32> bUseBPAllowPlayMontage() { return { this, "APrimalCharacter.bUseBPAllowPlayMontage" }; }
	BitFieldValue<bool, unsigned __int32> Hotfix_AreGeneTraitsEnabled() { return { this, "APrimalCharacter.Hotfix_AreGeneTraitsEnabled" }; }
	BitFieldValue<bool, unsigned __int32> bIgnoreOnDeathNotifyNearbyCharacters() { return { this, "APrimalCharacter.bIgnoreOnDeathNotifyNearbyCharacters" }; }
	BitFieldValue<bool, unsigned __int32> bIgnoreAllImmobilizationTraps() { return { this, "APrimalCharacter.bIgnoreAllImmobilizationTraps" }; }
	BitFieldValue<bool, unsigned __int32> bUseBPOnImmobilize() { return { this, "APrimalCharacter.bUseBPOnImmobilize" }; }
	BitFieldValue<bool, unsigned __int32> bUseBPOverridePlayAnimExMontage() { return { this, "APrimalCharacter.bUseBPOverridePlayAnimExMontage" }; }
	BitFieldValue<bool, unsigned __int32> bForceWildEncumberBasedOnTamedDino() { return { this, "APrimalCharacter.bForceWildEncumberBasedOnTamedDino" }; }
	BitFieldValue<bool, unsigned __int32> bIsMuted() { return { this, "APrimalCharacter.bIsMuted" }; }
	BitFieldValue<bool, unsigned __int32> bClientSetCurrentAimRot() { return { this, "APrimalCharacter.bClientSetCurrentAimRot" }; }
	BitFieldValue<bool, unsigned __int32> bDisablePawnTick() { return { this, "APrimalCharacter.bDisablePawnTick" }; }
	BitFieldValue<bool, unsigned __int32> bSetDeath() { return { this, "APrimalCharacter.bSetDeath" }; }
	BitFieldValue<bool, unsigned __int32> bTicksOnClient() { return { this, "APrimalCharacter.bTicksOnClient" }; }
	BitFieldValue<bool, unsigned __int32> bPlayingRunSound() { return { this, "APrimalCharacter.bPlayingRunSound" }; }
	BitFieldValue<bool, unsigned __int32> bIsRespawn() { return { this, "APrimalCharacter.bIsRespawn" }; }
	BitFieldValue<bool, unsigned __int32> bCreatedDynamicMaterials() { return { this, "APrimalCharacter.bCreatedDynamicMaterials" }; }
	BitFieldValue<bool, unsigned __int32> bCurrentFrameAnimPreventInput() { return { this, "APrimalCharacter.bCurrentFrameAnimPreventInput" }; }
	BitFieldValue<bool, unsigned __int32> bAllowAirJump() { return { this, "APrimalCharacter.bAllowAirJump" }; }
	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// BitFieldValue<bool, unsigned __int32> bIsBeingDraggedByDino();
	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// BitFieldValue<bool, unsigned __int32> bIsDraggingDinoStopped();
	BitFieldValue<bool, unsigned __int32> bMissingDynamicBase() { return { this, "APrimalCharacter.bMissingDynamicBase" }; }
	BitFieldValue<bool, unsigned __int32> bClientRagdollUpdateTimerEnabled() { return { this, "APrimalCharacter.bClientRagdollUpdateTimerEnabled" }; }
	BitFieldValue<bool, unsigned __int32> bAimGettingCharacterMeshRotation() { return { this, "APrimalCharacter.bAimGettingCharacterMeshRotation" }; }
	BitFieldValue<bool, unsigned __int32> bIsRunningCheckIgnoreVelocity() { return { this, "APrimalCharacter.bIsRunningCheckIgnoreVelocity" }; }
	BitFieldValue<bool, unsigned __int32> bReplicateDamageMomentum() { return { this, "APrimalCharacter.bReplicateDamageMomentum" }; }
	BitFieldValue<bool, unsigned __int32> bIsReflectingDamage() { return { this, "APrimalCharacter.bIsReflectingDamage" }; }
	BitFieldValue<bool, unsigned __int32> bIsWhistleTargetingDown() { return { this, "APrimalCharacter.bIsWhistleTargetingDown" }; }
	BitFieldValue<bool, unsigned __int32> bMarkForDestruction() { return { this, "APrimalCharacter.bMarkForDestruction" }; }
	BitFieldValue<bool, unsigned __int32> bAllowRun() { return { this, "APrimalCharacter.bAllowRun" }; }
	BitFieldValue<bool, unsigned __int32> bStaminaIsGreaterThanZero() { return { this, "APrimalCharacter.bStaminaIsGreaterThanZero" }; }
	BitFieldValue<bool, unsigned __int32> bDisabledIKFromDeath() { return { this, "APrimalCharacter.bDisabledIKFromDeath" }; }
	BitFieldValue<bool, unsigned __int32> bPreventUnregisterMeshUntilForceUpdateEnd() { return { this, "APrimalCharacter.bPreventUnregisterMeshUntilForceUpdateEnd" }; }
	BitFieldValue<bool, unsigned __int32> bIsReplicatedRagdoll() { return { this, "APrimalCharacter.bIsReplicatedRagdoll" }; }
	BitFieldValue<bool, unsigned __int32> bWasAllBodiesSleeping() { return { this, "APrimalCharacter.bWasAllBodiesSleeping" }; }
	BitFieldValue<bool, unsigned __int32> LastCheckedSubmergedFull() { return { this, "APrimalCharacter.LastCheckedSubmergedFull" }; }
	BitFieldValue<bool, unsigned __int32> bAllowFullSubmergedCheck() { return { this, "APrimalCharacter.bAllowFullSubmergedCheck" }; }
	BitFieldValue<bool, unsigned __int32> bRagdollWasInWaterVolume() { return { this, "APrimalCharacter.bRagdollWasInWaterVolume" }; }
	BitFieldValue<bool, unsigned __int32> bIsDraggedWithOffset() { return { this, "APrimalCharacter.bIsDraggedWithOffset" }; }
	BitFieldValue<bool, unsigned __int32> bIgnoreSeatingDetachment() { return { this, "APrimalCharacter.bIgnoreSeatingDetachment" }; }
	BitFieldValue<bool, unsigned __int32> AccessSpawn1Pressed() { return { this, "APrimalCharacter.AccessSpawn1Pressed" }; }
	BitFieldValue<bool, unsigned __int32> AccessSpawn2Pressed() { return { this, "APrimalCharacter.AccessSpawn2Pressed" }; }
	BitFieldValue<bool, unsigned __int32> bIsForceUpdatingChildMeshes() { return { this, "APrimalCharacter.bIsForceUpdatingChildMeshes" }; }
	BitFieldValue<bool, unsigned __int32> bUseOptimizedPhysWalkingChecks() { return { this, "APrimalCharacter.bUseOptimizedPhysWalkingChecks" }; }
	BitFieldValue<bool, unsigned __int32> bForceRefreshBonesRecursionGuard() { return { this, "APrimalCharacter.bForceRefreshBonesRecursionGuard" }; }
	BitFieldValue<bool, unsigned __int32> bWasUsingOldCameraOnDinoBase() { return { this, "APrimalCharacter.bWasUsingOldCameraOnDinoBase" }; }
	BitFieldValue<bool, unsigned __int32> bHasAppliedDraggedSettings() { return { this, "APrimalCharacter.bHasAppliedDraggedSettings" }; }
	BitFieldValue<bool, unsigned __int32> bWantsToRestoreSavedBase() { return { this, "APrimalCharacter.bWantsToRestoreSavedBase" }; }
	BitFieldValue<bool, unsigned __int32> bUnregisteredMeshDueToVisibilityTickOption() { return { this, "APrimalCharacter.bUnregisteredMeshDueToVisibilityTickOption" }; }
	BitFieldValue<bool, unsigned __int32> bHasAutoUnregisteredExtraSkeletalComponents() { return { this, "APrimalCharacter.bHasAutoUnregisteredExtraSkeletalComponents" }; }
	BitFieldValue<bool, unsigned __int32> bDraggedFlip180() { return { this, "APrimalCharacter.bDraggedFlip180" }; }
	BitFieldValue<bool, unsigned __int32> bSetAnimationTickPrerequisite() { return { this, "APrimalCharacter.bSetAnimationTickPrerequisite" }; }
	BitFieldValue<bool, unsigned __int32> bIsProcessingBuffsForAdjustedDamage() { return { this, "APrimalCharacter.bIsProcessingBuffsForAdjustedDamage" }; }

	// Functions

	bool IsBeingDestroyed() { return NativeCall<bool>(this, "APrimalCharacter.IsBeingDestroyed()"); }
	UMeshComponent* GetSkeletalMeshComponent() { return reinterpret_cast<UMeshComponent*>(NativeCall<USkeletalMeshComponent*>(this, "APrimalCharacter.GetSkeletalMeshComponent()")); }
	ENetRole GetRole() { return NativeCall<ENetRole>(this, "APrimalCharacter.GetRole()"); }
	bool IsReadyForDynamicBasing() { return NativeCall<bool>(this, "APrimalCharacter.IsReadyForDynamicBasing()"); }
	bool AllowOverrideSwimmingAcceleration() { return NativeCall<bool>(this, "APrimalCharacter.AllowOverrideSwimmingAcceleration()"); }
	bool IsInMission() { return NativeCall<bool>(this, "APrimalCharacter.IsInMission()"); }
	bool IsGamePlayRelevant() { return NativeCall<bool>(this, "APrimalCharacter.IsGamePlayRelevant()"); }
	long double GetLastGameplayRelevantTime() { return NativeCall<long double>(this, "APrimalCharacter.GetLastGameplayRelevantTime()"); }
	float GetStasisConsumerRangeMultiplier() { return NativeCall<float>(this, "APrimalCharacter.GetStasisConsumerRangeMultiplier()"); }
	void BP_OnZoomIn() { NativeCall<void>(this, "APrimalCharacter.BP_OnZoomIn()"); }
	float BPAdjustDamage(float IncomingDamage, FDamageEvent* TheDamageEvent, AController* EventInstigator, AActor* DamageCauser, bool bIsPointDamage, FHitResult* PointHitInfo) { return NativeCall<float, float, FDamageEvent*, AController*, AActor*, bool, FHitResult*>(this, "APrimalCharacter.BPAdjustDamage(float,FDamageEvent,AController*,AActor*,bool,FHitResult)", IncomingDamage, TheDamageEvent, EventInstigator, DamageCauser, bIsPointDamage, PointHitInfo); }
	float BPModifyViewHitDir(APrimalCharacter* viewingCharacter, float InViewHitDir) { return NativeCall<float, APrimalCharacter*, float>(this, "APrimalCharacter.BPModifyViewHitDir(APrimalCharacter*,float)", viewingCharacter, InViewHitDir); }
	void BPOnStaminaDrained() { NativeCall<void>(this, "APrimalCharacter.BPOnStaminaDrained()"); }
	bool BPOverrideCameraArmLengthInterpParams(const FPrimalCameraParams* CameraParams, FPrimalCameraInterpParams* OutInterpParams) { return NativeCall<bool, const FPrimalCameraParams*, FPrimalCameraInterpParams*>(this, "APrimalCharacter.BPOverrideCameraArmLengthInterpParams(FPrimalCameraParams&,FPrimalCameraInterpParams&)", CameraParams, OutInterpParams); }
	void BPOverrideReleaseItemSlot(int ItemSlot) { NativeCall<void, int>(this, "APrimalCharacter.BPOverrideReleaseItemSlot(int)", ItemSlot); }
	void BPOverrideUseItemSlot(int ItemSlot) { NativeCall<void, int>(this, "APrimalCharacter.BPOverrideUseItemSlot(int)", ItemSlot); }
	void ClientOrderedAttackTarget(AActor* attackTarget) { NativeCall<void, AActor*>(this, "APrimalCharacter.ClientOrderedAttackTarget(AActor*)", attackTarget); }
	void ClientSyncAnimation(UAnimMontage* AnimMontage, float PlayRate, float ServerCurrentMontageTime, bool bForceTickPoseAndServerUpdateMesh, float BlendInTime, float BlendOutTime) { NativeCall<void, UAnimMontage*, float, float, bool, float, float>(this, "APrimalCharacter.ClientSyncAnimation(UAnimMontage*,float,float,bool,float,float,bool)", AnimMontage, PlayRate, ServerCurrentMontageTime, bForceTickPoseAndServerUpdateMesh, BlendInTime, BlendOutTime); }
	TSubclassOf<UToolTipWidget>* GetCustomTooltip(TSubclassOf<UToolTipWidget>* result, UE::Math::TVector2<double>* tooltipPadding, UE::Math::TVector2<double>* tooltipScale, UE::Math::TVector<double>* tooltipLocationOffset) { return NativeCall<TSubclassOf<UToolTipWidget> *, TSubclassOf<UToolTipWidget>*, UE::Math::TVector2<double>*, UE::Math::TVector2<double>*, UE::Math::TVector<double>*>(this, "APrimalCharacter.GetCustomTooltip(UE::Math::TVector2<double>&,UE::Math::TVector2<double>&,UE::Math::TVector<double>&)", result, tooltipPadding, tooltipScale, tooltipLocationOffset); }
	FName* GetOverrideSocket(FName* result, FName from) { return NativeCall<FName*, FName*, FName>(this, "APrimalCharacter.GetOverrideSocket(FName)", result, from); }
	UMeshComponent* GetPaintingMesh() { return NativeCall<UMeshComponent*>(this, "APrimalCharacter.GetPaintingMesh(int)"); }
	void LocalUnpossessed() { NativeCall<void>(this, "APrimalCharacter.LocalUnpossessed()"); }
	void NetPlaySoundOnCharacter(USoundBase* SoundToPlay, bool bPlayOnOwner) { NativeCall<void, USoundBase*, bool>(this, "APrimalCharacter.NetPlaySoundOnCharacter(USoundBase*,bool)", SoundToPlay, bPlayOnOwner); }
	void OnBeginDrag(APrimalCharacter* Dragged, int BoneIndex, bool bWithGrapHook) { NativeCall<void, APrimalCharacter*, int, bool>(this, "APrimalCharacter.OnBeginDrag(APrimalCharacter*,int,bool)", Dragged, BoneIndex, bWithGrapHook); }
	void OnEndDrag() { NativeCall<void>(this, "APrimalCharacter.OnEndDrag()"); }
	void PlayHitEffectGeneric(float DamageTaken, FDamageEvent* DamageEvent, APawn* PawnInstigator, AActor* DamageCauser) { NativeCall<void, float, FDamageEvent*, APawn*, AActor*>(this, "APrimalCharacter.PlayHitEffectGeneric(float,FDamageEvent,APawn*,AActor*)", DamageTaken, DamageEvent, PawnInstigator, DamageCauser); }
	void PlayHitEffectPoint(float DamageTaken, FPointDamageEvent* DamageEvent, APawn* PawnInstigator, AActor* DamageCauser) { NativeCall<void, float, FPointDamageEvent*, APawn*, AActor*>(this, "APrimalCharacter.PlayHitEffectPoint(float,FPointDamageEvent,APawn*,AActor*)", DamageTaken, DamageEvent, PawnInstigator, DamageCauser); }
	void PlayHitEffectRadial(float DamageTaken, FRadialDamageEvent* DamageEvent, APawn* PawnInstigator, AActor* DamageCauser) { NativeCall<void, float, FRadialDamageEvent*, APawn*, AActor*>(this, "APrimalCharacter.PlayHitEffectRadial(float,FRadialDamageEvent,APawn*,AActor*)", DamageTaken, DamageEvent, PawnInstigator, DamageCauser); }
	bool PreventsTargeting(AActor* ByActor) { return NativeCall<bool, AActor*>(this, "APrimalCharacter.PreventsTargeting(AActor*)", ByActor); }
	void ServerCallAggressive() { NativeCall<void>(this, "APrimalCharacter.ServerCallAggressive()"); }
	void ServerCallAttackTarget(AActor* TheTarget) { NativeCall<void, AActor*>(this, "APrimalCharacter.ServerCallAttackTarget(AActor*)", TheTarget); }
	void ServerCallFollow() { NativeCall<void>(this, "APrimalCharacter.ServerCallFollow()"); }
	void ServerCallMoveTo(UE::Math::TVector<double>* MoveToLoc) { NativeCall<void, UE::Math::TVector<double>*>(this, "APrimalCharacter.ServerCallMoveTo(UE::Math::TVector<double>)", MoveToLoc); }
	void ServerCallNeutral() { NativeCall<void>(this, "APrimalCharacter.ServerCallNeutral()"); }
	void ServerCallPassive() { NativeCall<void>(this, "APrimalCharacter.ServerCallPassive()"); }
	void ServerCallSetAggressive() { NativeCall<void>(this, "APrimalCharacter.ServerCallSetAggressive()"); }
	void ServerCallStay() { NativeCall<void>(this, "APrimalCharacter.ServerCallStay()"); }
	void ServerCaptureDermis(APrimalCharacter* Target) { NativeCall<void, APrimalCharacter*>(this, "APrimalCharacter.ServerCaptureDermis(APrimalCharacter*)", Target); }
	void ServerDinoOrder(APrimalDinoCharacter* aDino, EDinoTamedOrder::Type OrderType, AActor* target) { NativeCall<void, APrimalDinoCharacter*, EDinoTamedOrder::Type, AActor*>(this, "APrimalCharacter.ServerDinoOrder(APrimalDinoCharacter*,EDinoTamedOrder::Type,AActor*)", aDino, OrderType, target); }
	void ToggleWeapon() { NativeCall<void>(this, "APrimalCharacter.ToggleWeapon()"); }
	void ServerRequestDrag() { NativeCall<void>(this, "APrimalCharacter.ServerRequestDrag()"); }
	void ServerTryPoop() { NativeCall<void>(this, "APrimalCharacter.ServerTryPoop()"); }
	void SetCameraProfile(FName NewProfileId) { NativeCall<void, FName>(this, "APrimalCharacter.SetCameraProfile(FName)", NewProfileId); }
	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// static void StaticRegisterNativesAPrimalCharacter();
	static UClass* StaticClass() { return AsaApi::ResolveClass("APrimalCharacter"); }
	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// void ValidateGeneratedRepEnums(const TArray<FRepRecord, TSizedDefaultAllocator<32> >* ClassReps);
	void Serialize(FStructuredArchiveRecord Record) { NativeCall<void, FStructuredArchiveRecord>(this, "APrimalCharacter.Serialize(FStructuredArchiveRecord)", Record); }
	UAnimMontage* GetPoopAnimation(bool bForcePoop) { return NativeCall<UAnimMontage*, bool>(this, "APrimalCharacter.GetPoopAnimation(bool)", bForcePoop); }
	long double GetLastStartedTalkingTime() { return NativeCall<long double>(this, "APrimalCharacter.GetLastStartedTalkingTime()"); }
	bool IsVoiceTalking() { return NativeCall<bool>(this, "APrimalCharacter.IsVoiceTalking()"); }
	bool CanJumpInternal_Implementation() { return NativeCall<bool>(this, "APrimalCharacter.CanJumpInternal_Implementation()"); }
	void RegisterAllComponents() { NativeCall<void>(this, "APrimalCharacter.RegisterAllComponents()"); }
	void PreInitializeComponents() { NativeCall<void>(this, "APrimalCharacter.PreInitializeComponents()"); }
	void ValidatePaintingComponentOctree() { NativeCall<void>(this, "APrimalCharacter.ValidatePaintingComponentOctree()"); }
	void PostInitializeComponents() { NativeCall<void>(this, "APrimalCharacter.PostInitializeComponents()"); }
	void Destroyed() { NativeCall<void>(this, "APrimalCharacter.Destroyed()"); }
	void BeginPlay() { NativeCall<void>(this, "APrimalCharacter.BeginPlay()"); }
	void FellOutOfWorld(const UDamageType* dmgType) { NativeCall<void, const UDamageType*>(this, "APrimalCharacter.FellOutOfWorld(UDamageType&)", dmgType); }
	void Suicide() { NativeCall<void>(this, "APrimalCharacter.Suicide()"); }
	bool IsDead() { return IsDeadOrDying(); }
	void InventoryItemUsed(UObject* InventoryItemObject) { NativeCall<void, UObject*>(this, "APrimalCharacter.InventoryItemUsed(UObject*)", InventoryItemObject); }
	void AdjustDamage(float* Damage, const FDamageEvent* DamageEvent, AController* EventInstigator, AActor* DamageCauser) { NativeCall<void, float*, const FDamageEvent*, AController*, AActor*>(this, "APrimalCharacter.AdjustDamage(float&,FDamageEvent&,AController*,AActor*)", Damage, DamageEvent, EventInstigator, DamageCauser); }
	bool CanBeTargetedBy(const ITargetableInterface* Attacker) { return NativeCall<bool, const ITargetableInterface*>(this, "APrimalCharacter.CanBeTargetedBy(ITargetableInterface*)", Attacker); }
	bool IsValidForCombatMusic() { return NativeCall<bool>(this, "APrimalCharacter.IsValidForCombatMusic()"); }
	float TakeDamage(float Damage, const FDamageEvent* DamageEvent, AController* EventInstigator, AActor* DamageCauser) { return NativeCall<float, float, const FDamageEvent*, AController*, AActor*>(this, "APrimalCharacter.TakeDamage(float,FDamageEvent&,AController*,AActor*)", Damage, DamageEvent, EventInstigator, DamageCauser); }
	void HurtMe(int HowMuch) { NativeCall<void, int>(this, "APrimalCharacter.HurtMe(int)", HowMuch); }
	bool CanDie(float KillingDamage, const FDamageEvent* DamageEvent, AController* Killer, AActor* DamageCauser) { return NativeCall<bool, float, const FDamageEvent*, AController*, AActor*>(this, "APrimalCharacter.CanDie(float,FDamageEvent&,AController*,AActor*)", KillingDamage, DamageEvent, Killer, DamageCauser); }
	bool CanMoveThroughActor_Implementation(AActor* actor) { return NativeCall<bool, AActor*>(this, "APrimalCharacter.CanMoveThroughActor_Implementation(AActor*)", actor); }
	bool Die(float KillingDamage, const FDamageEvent* DamageEvent, AController* Killer, AActor* DamageCauser) { return NativeCall<bool, float, const FDamageEvent*, AController*, AActor*>(this, "APrimalCharacter.Die(float,FDamageEvent&,AController*,AActor*)", KillingDamage, DamageEvent, Killer, DamageCauser); }
	void DeathHarvestingDepleted() { NativeCall<void>(this, "APrimalCharacter.DeathHarvestingDepleted(UPrimalHarvestingComponent*)"); }
	void PlayDyingPoint_Implementation(float KillingDamage, FPointDamageEvent* DamageEvent, APawn* InstigatingPawn, AActor* DamageCauser) { NativeCall<void, float, FPointDamageEvent*, APawn*, AActor*>(this, "APrimalCharacter.PlayDyingPoint_Implementation(float,FPointDamageEvent,APawn*,AActor*)", KillingDamage, DamageEvent, InstigatingPawn, DamageCauser); }
	void PlayDyingRadial_Implementation(float KillingDamage, FRadialDamageEvent* DamageEvent, APawn* InstigatingPawn, AActor* DamageCauser) { NativeCall<void, float, FRadialDamageEvent*, APawn*, AActor*>(this, "APrimalCharacter.PlayDyingRadial_Implementation(float,FRadialDamageEvent,APawn*,AActor*)", KillingDamage, DamageEvent, InstigatingPawn, DamageCauser); }
	void SetDeath(bool bJoinInProgress, bool AllowMovementModeChange) { NativeCall<void, bool, bool>(this, "APrimalCharacter.SetDeath(bool,bool)", bJoinInProgress, AllowMovementModeChange); }
	bool CanIgnoreImmobilizationTrap(TSubclassOf<APrimalStructure> TrapClass, bool* bForceTrigger) { return NativeCall<bool, TSubclassOf<APrimalStructure>, bool*>(this, "APrimalCharacter.CanIgnoreImmobilizationTrap(TSubclassOf<APrimalStructure>,bool&)", TrapClass, bForceTrigger); }
	void Immobilize(bool bImmobilize, AActor* UsingActor, bool bImmobilizeFalling, bool bPreventDismount) { NativeCall<void, bool, AActor*, bool, bool>(this, "APrimalCharacter.Immobilize(bool,AActor*,bool,bool)", bImmobilize, UsingActor, bImmobilizeFalling, bPreventDismount); }
	float GetCorpseLifespan() { return NativeCall<float>(this, "APrimalCharacter.GetCorpseLifespan()"); }
	void PlayDying(float KillingDamage, const FDamageEvent* DamageEvent, APawn* InstigatingPawn, AActor* DamageCauser) { NativeCall<void, float, const FDamageEvent*, APawn*, AActor*>(this, "APrimalCharacter.PlayDying(float,FDamageEvent&,APawn*,AActor*)", KillingDamage, DamageEvent, InstigatingPawn, DamageCauser); }
	void PlayHitEffectGeneric_Implementation(float DamageTaken, FPointDamageEvent* DamageEvent, APawn* PawnInstigator, AActor* DamageCauser) { NativeCall<void, float, FPointDamageEvent*, APawn*, AActor*>(this, "APrimalCharacter.PlayHitEffectGeneric_Implementation(float,FDamageEvent,APawn*,AActor*)", DamageTaken, DamageEvent, PawnInstigator, DamageCauser); }
	void PlayHitEffectRadial_Implementation(float DamageTaken, FRadialDamageEvent* DamageEvent, APawn* PawnInstigator, AActor* DamageCauser) { NativeCall<void, float, FRadialDamageEvent*, APawn*, AActor*>(this, "APrimalCharacter.PlayHitEffectRadial_Implementation(float,FRadialDamageEvent,APawn*,AActor*)", DamageTaken, DamageEvent, PawnInstigator, DamageCauser); }
	bool AllowHurtAnimation() { return NativeCall<bool>(this, "APrimalCharacter.AllowHurtAnimation()"); }
	UPrimitiveComponent* GetPrimaryHitComponent() { return NativeCall<UPrimitiveComponent*>(this, "APrimalCharacter.GetPrimaryHitComponent()"); }
	void PlayHitEffect(float DamageTaken, const FDamageEvent* DamageEvent, APawn* PawnInstigator, AActor* DamageCauser, bool bIsLocalPath, bool bSuppressImpactSound) { NativeCall<void, float, const FDamageEvent*, APawn*, AActor*, bool, bool>(this, "APrimalCharacter.PlayHitEffect(float,FDamageEvent&,APawn*,AActor*,bool,bool)", DamageTaken, DamageEvent, PawnInstigator, DamageCauser, bIsLocalPath, bSuppressImpactSound); }
	void PlayHurtAnim(float DamageTaken, const FDamageEvent* DamageEvent, APawn* PawnInstigator, AActor* DamageCauser, bool bIsLocalPath) { NativeCall<void, float, const FDamageEvent*, APawn*, AActor*, bool>(this, "APrimalCharacter.PlayHurtAnim(float,FDamageEvent&,APawn*,AActor*,bool)", DamageTaken, DamageEvent, PawnInstigator, DamageCauser, bIsLocalPath); }
	void DoSetRagdollPhysics() { NativeCall<void>(this, "APrimalCharacter.DoSetRagdollPhysics()"); }
	void SetRagdollPhysics(bool bUseRagdollLocationOffset, bool bForceRecreateBones, bool bForLoading) { NativeCall<void, bool, bool, bool>(this, "APrimalCharacter.SetRagdollPhysics(bool,bool,bool)", bUseRagdollLocationOffset, bForceRecreateBones, bForLoading); }
	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// void CheckOnDinoPlatformSaddle();
	void ForceSleepRagdollEx() { NativeCall<void>(this, "APrimalCharacter.ForceSleepRagdollEx()"); }
	void ForceSleepRagdoll() { NativeCall<void>(this, "APrimalCharacter.ForceSleepRagdoll()"); }
	void RemoveBasedPawns(USceneComponent* BasedOnComponent) { NativeCall<void, USceneComponent*>(this, "APrimalCharacter.RemoveBasedPawns(USceneComponent*)", BasedOnComponent); }
	void ClearRagdollPhysics() { NativeCall<void>(this, "APrimalCharacter.ClearRagdollPhysics()"); }
	void DoFindGoodSpot(UE::Math::TVector<double>* RagdollLoc, bool bClearCollisionSweep) { NativeCall<void, UE::Math::TVector<double>*, bool>(this, "APrimalCharacter.DoFindGoodSpot(UE::Math::TVector<double>,bool)", RagdollLoc, bClearCollisionSweep); }
	void SetSleeping(bool bSleeping, bool bUseRagdollLocationOffset, bool bPreserveSavedAnim) { NativeCall<void, bool, bool, bool>(this, "APrimalCharacter.SetSleeping(bool,bool,bool)", bSleeping, bUseRagdollLocationOffset, bPreserveSavedAnim); }
	void NetPlayDeathAnimIfNeeded_Implementation(bool bOnlyPlayOnClient) { NativeCall<void, bool>(this, "APrimalCharacter.NetPlayDeathAnimIfNeeded_Implementation(bool)", bOnlyPlayOnClient); }
	void PlayDeathAnimIfNeeded(bool bWasPlayingDeathAnim) { NativeCall<void, bool>(this, "APrimalCharacter.PlayDeathAnimIfNeeded(bool)", bWasPlayingDeathAnim); }
	void TryPlaySleepingAnim(bool bWasPlayingDeathAnim) { NativeCall<void, bool>(this, "APrimalCharacter.TryPlaySleepingAnim(bool)", bWasPlayingDeathAnim); }
	void TryPlayDeathAnim() { NativeCall<void>(this, "APrimalCharacter.TryPlayDeathAnim()"); }
	void ExecSetSleeping(bool bEnable) { NativeCall<void, bool>(this, "APrimalCharacter.ExecSetSleeping(bool)", bEnable); }
	void ChangeActorTeam(int NewTeam) { NativeCall<void, int>(this, "APrimalCharacter.ChangeActorTeam(int)", NewTeam); }
	void UpdateTribeName(FString* NewTribeName) { NativeCall<void, FString*>(this, "APrimalCharacter.UpdateTribeName(FString)", NewTribeName); }
	//void NetUpdateTribeName_Implementation(const FString* NewTribeName) { NativeCall<void, const FString*>(this, "APrimalCharacter.NetUpdateTribeName_Implementation(FString&)", NewTribeName); }
	void NetUpdateTribeName(const FString* NewTribeName) { NativeCall<void, const FString*>(this, "APrimalCharacter.NetUpdateTribeName(FString&)", NewTribeName); }
	//     float GetMaxCursorHUDDistance(AShooterPlayerController* PC) { return NativeCall<float, AShooterPlayerController*>(this, "APrimalCharacter.GetMaxCursorHUDDistance(AShooterPlayerController*)", PC); }
	// FUNCTION MISSING: APrimalCharacter.GetMaxCursorHUDDistance(AShooterPlayerController*)
	bool IsSubmerged(bool bDontCheckSwimming, bool bUseFullThreshold, bool bForceCheck, bool bFromVolumeChange) { return NativeCall<bool, bool, bool, bool, bool>(this, "APrimalCharacter.IsSubmerged(bool,bool,bool,bool)", bDontCheckSwimming, bUseFullThreshold, bForceCheck, bFromVolumeChange); }
	float GetWaterSubmergedDepthThreshold() { return NativeCall<float>(this, "APrimalCharacter.GetWaterSubmergedDepthThreshold()"); }
	float PlayAnimMontage(UAnimMontage* AnimMontage, float InPlayRate, FName StartSectionName, bool bForceTickPoseAndServerUpdateMesh, bool bForceTickPoseOnServer, float BlendInTime, float BlendOutTime) { return NativeCall<float, UAnimMontage*, float, FName, bool, bool, float, float>(this, "APrimalCharacter.PlayAnimMontage(UAnimMontage*,float,FName,bool,bool,float,float)", AnimMontage, InPlayRate, StartSectionName, bForceTickPoseAndServerUpdateMesh, bForceTickPoseOnServer, BlendInTime, BlendOutTime); }
	void StopAnimMontage(UAnimMontage* AnimMontage) { NativeCall<void, UAnimMontage*>(this, "APrimalCharacter.StopAnimMontage(UAnimMontage*)", AnimMontage); }
	bool IsMontagePlaying(UAnimMontage* AnimMontage, float TimeFromEndToConsiderFinished) { return NativeCall<bool, UAnimMontage*, float>(this, "APrimalCharacter.IsMontagePlaying(UAnimMontage*,float)", AnimMontage, TimeFromEndToConsiderFinished); }
	void SetupPlayerInputComponent(UInputComponent* WithInputComponent) { NativeCall<void, UInputComponent*>(this, "APrimalCharacter.SetupPlayerInputComponent(UInputComponent*)", WithInputComponent); }
	void TryGiveDefaultWeapon() { NativeCall<void>(this, "APrimalCharacter.TryGiveDefaultWeapon()"); }
	void TryGiveDefaultWeaponReleased() { NativeCall<void>(this, "APrimalCharacter.TryGiveDefaultWeaponReleased()"); }
	void TryPoop() { NativeCall<void>(this, "APrimalCharacter.TryPoop()"); }
	void OrbitCamToggle() { NativeCall<void>(this, "APrimalCharacter.OrbitCamToggle()"); }
	void OrbitCamOn() { NativeCall<void>(this, "APrimalCharacter.OrbitCamOn()"); }
	void OrbitCamOff() { NativeCall<void>(this, "APrimalCharacter.OrbitCamOff()"); }
	void ServerRequestDrag_Implementation() { NativeCall<void>(this, "APrimalCharacter.ServerRequestDrag_Implementation()"); }
	void ServerDinoOrder_Implementation(APrimalDinoCharacter* aDino, EDinoTamedOrder::Type OrderType, AActor* enemyTarget) { NativeCall<void, APrimalDinoCharacter*, EDinoTamedOrder::Type, AActor*>(this, "APrimalCharacter.ServerDinoOrder_Implementation(APrimalDinoCharacter*,EDinoTamedOrder::Type,AActor*)", aDino, OrderType, enemyTarget); }
	void GetInputSpeedModifier(float* Val) { NativeCall<void, float*>(this, "APrimalCharacter.GetInputSpeedModifier(float&)", Val); }
	void MoveForward(float Val) { NativeCall<void, float>(this, "APrimalCharacter.MoveForward(float)", Val); }
	void MoveRight(float Val) { NativeCall<void, float>(this, "APrimalCharacter.MoveRight(float)", Val); }
	void MoveUp(float Val) { NativeCall<void, float>(this, "APrimalCharacter.MoveUp(float)", Val); }
	void TurnInput(float Val) { NativeCall<void, float>(this, "APrimalCharacter.TurnInput(float)", Val); }
	void LookInput(float Val) { NativeCall<void, float>(this, "APrimalCharacter.LookInput(float)", Val); }
	void TurnAtRate(float Val) { NativeCall<void, float>(this, "APrimalCharacter.TurnAtRate(float)", Val); }
	void LookUpAtRate(float Val) { NativeCall<void, float>(this, "APrimalCharacter.LookUpAtRate(float)", Val); }
	bool IsGamepadActive() { return NativeCall<bool>(this, "APrimalCharacter.IsGamepadActive()"); }
	bool IsInputAllowed() { return NativeCall<bool>(this, "APrimalCharacter.IsInputAllowed()"); }
	void OnStartFire() { NativeCall<void>(this, "APrimalCharacter.OnStartFire()"); }
	void OnStopFire() { NativeCall<void>(this, "APrimalCharacter.OnStopFire()"); }
	void OnStartTargeting() { NativeCall<void>(this, "APrimalCharacter.OnStartTargeting()"); }
	void OnStopTargeting() { NativeCall<void>(this, "APrimalCharacter.OnStopTargeting()"); }
	void OnAltFirePressed() { NativeCall<void>(this, "APrimalCharacter.OnAltFirePressed()"); }
	void OnAltFireReleased() { NativeCall<void>(this, "APrimalCharacter.OnAltFireReleased()"); }
	void OnStartAltFire() { NativeCall<void>(this, "APrimalCharacter.OnStartAltFire()"); }
	void OnStopAltFire() { NativeCall<void>(this, "APrimalCharacter.OnStopAltFire()"); }
	void OnStartRunning() { NativeCall<void>(this, "APrimalCharacter.OnStartRunning()"); }
	void OnStopRunning() { NativeCall<void>(this, "APrimalCharacter.OnStopRunning()"); }
	void OnRunTogglePressed() { NativeCall<void>(this, "APrimalCharacter.OnRunTogglePressed()"); }
	void OnRunToggleReleased() { NativeCall<void>(this, "APrimalCharacter.OnRunToggleReleased()"); }
	//TArray<FTooltipTextInfo, TSizedDefaultAllocator<32> >* GetTooltipCharacterInfo(TArray<FTooltipTextInfo, TSizedDefaultAllocator<32> >* result, AShooterPlayerController* PlayerOwner) { return NativeCall<TArray<FTooltipTextInfo, TSizedDefaultAllocator<32> >*, TArray<FTooltipTextInfo, TSizedDefaultAllocator<32> >*, AShooterPlayerController*>(this, "APrimalCharacter.GetTooltipCharacterInfo(AShooterPlayerController*)", result, PlayerOwner); }
	bool IsTurningTooFastToRun(const UE::Math::TVector<double>* Velocity, const UE::Math::TRotator<double>* Rotation) { return NativeCall<bool, const UE::Math::TVector<double>*, const UE::Math::TRotator<double>*>(this, "APrimalCharacter.IsTurningTooFastToRun(UE::Math::TVector<double>&,UE::Math::TRotator<double>&)", Velocity, Rotation); }
	bool IsRunning() { return NativeCall<bool>(this, "APrimalCharacter.IsRunning()"); }
	bool IsMoving() { return NativeCall<bool>(this, "APrimalCharacter.IsMoving()"); }
	void UpdateStatusComponent(float DeltaSeconds) { NativeCall<void, float>(this, "APrimalCharacter.UpdateStatusComponent(float)", DeltaSeconds); }
	void ServerCaptureDermis_Implementation(APrimalCharacter* Target) { NativeCall<void, APrimalCharacter*>(this, "APrimalCharacter.ServerCaptureDermis_Implementation(APrimalCharacter*)", Target); }
	void CaptureCharacterSnapshot(UPrimalItem* Item) { NativeCall<void, UPrimalItem*>(this, "APrimalCharacter.CaptureCharacterSnapshot(UPrimalItem*)", Item); }
	static void StaticApplyCharacterSnapshot(UPrimalItem* Item, AActor* To, UE::Math::TVector<double>* Offset, float MaxExtent, int Pose, bool bCollisionOn) { NativeCall<void, UPrimalItem*, AActor*, UE::Math::TVector<double>*, float, int, bool>(nullptr, "APrimalCharacter.StaticApplyCharacterSnapshot(UPrimalItem*,AActor*,UE::Math::TVector<double>,float,int,bool)", Item, To, Offset, MaxExtent, Pose, bCollisionOn); }
	static void StaticApplyCharacterSnapshotEquipment(UPrimalInventoryComponent* Inventory, AActor* To) { NativeCall<void, UPrimalInventoryComponent*, AActor*>(nullptr, "APrimalCharacter.StaticApplyCharacterSnapshotEquipment(UPrimalInventoryComponent*,AActor*)", Inventory, To); }
	static void StaticRemoveCharacterSnapshot(UPrimalItem* Item, AActor* From) { NativeCall<void, UPrimalItem*, AActor*>(nullptr, "APrimalCharacter.StaticRemoveCharacterSnapshot(UPrimalItem*,AActor*)", Item, From); }
	static int StaticGetSnapshotPoseCount(UPrimalItem* Item) { return NativeCall<int, UPrimalItem*>(nullptr, "APrimalCharacter.StaticGetSnapshotPoseCount(UPrimalItem*)", Item); }
	static FPrimalSnapshotPose* StaticGetSnapshotPose(FPrimalSnapshotPose* result, UPrimalItem* Item, int PoseIndex) { return NativeCall<FPrimalSnapshotPose*, FPrimalSnapshotPose*, UPrimalItem*, int>(nullptr, "APrimalCharacter.StaticGetSnapshotPose(UPrimalItem*,int)", result, Item, PoseIndex); }
	void ApplyCharacterSnapshot(UPrimalItem* Item, AActor* To, UE::Math::TVector<double>* Offset, float MaxExtent, int Pose, bool bCollisionOn, FPrimalSnapshotPose* SnapshotOverride) { if (!Offset) throw std::invalid_argument("Null native value parameter"); return NativeCall<void, UPrimalItem *, AActor *, UE :: Math :: TVector < double >, float, int, bool, FPrimalSnapshotPose *>(this, "APrimalCharacter.ApplyCharacterSnapshot(UPrimalItem*,AActor*,UE::Math::TVector<double>,float,int,bool,FPrimalSnapshotPose*)", Item, To, *Offset, MaxExtent, Pose, bCollisionOn, SnapshotOverride); }
	void RemoveCharacterSnapshot(UPrimalItem* Item, AActor* From) { NativeCall<void, UPrimalItem*, AActor*>(this, "APrimalCharacter.RemoveCharacterSnapshot(UPrimalItem*,AActor*)", Item, From); }
	static UActorComponent* GetSnapshotComponent(AActor* From, FName Tag) { return NativeCall<UActorComponent*, AActor*, FName>(nullptr, "APrimalCharacter.GetSnapshotComponent(AActor*,FName)", From, Tag); }
	static UActorComponent* CreateSnapshotComponent(AActor* For, UObject* Template, FName Tag, FName Name) { return NativeCall<UActorComponent*, AActor*, UObject*, FName, FName>(nullptr, "APrimalCharacter.CreateSnapshotComponent(AActor*,UObject*,FName,FName)", For, Template, Tag, Name); }
	void UpdateStencilValues() { NativeCall<void>(this, "APrimalCharacter.UpdateStencilValues()"); }
	void CheckRegisterCharacterMesh() { NativeCall<void>(this, "APrimalCharacter.CheckRegisterCharacterMesh()"); }
	void Tick(float DeltaSeconds) { NativeCall<void, float>(this, "APrimalCharacter.Tick(float)", DeltaSeconds); }
	void EndPlay(const EEndPlayReason::Type EndPlayReason) { NativeCall<void, const EEndPlayReason::Type>(this, "APrimalCharacter.EndPlay(EEndPlayReason::Type)", EndPlayReason); }
	void SetCharacterMeshesMaterialScalarParamValue(FName ParamName, float Value) { NativeCall<void, FName, float>(this, "APrimalCharacter.SetCharacterMeshesMaterialScalarParamValue(FName,float)", ParamName, Value); }
	APhysicsVolume* GetApproximateLocationPhysicsVolume(bool bForceUpdate, const UE::Math::TVector<double>* LocOffset, bool bFavorWaterVolume) { return NativeCall<APhysicsVolume*, bool, const UE::Math::TVector<double>*, bool>(this, "APrimalCharacter.GetApproximateLocationPhysicsVolume(bool,UE::Math::TVector<double>&,bool)", bForceUpdate, LocOffset, bFavorWaterVolume); }
	void UpdateSwimmingState() { NativeCall<void>(this, "APrimalCharacter.UpdateSwimmingState()"); }
	bool IsOwningClient() { return NativeCall<bool>(this, "APrimalCharacter.IsOwningClient()"); }
	void GetCharacterViewLocationAndDirection(UE::Math::TVector<double>* OutViewLocation, UE::Math::TVector<double>* OutViewDirection, bool* OutFromCrosshairOrCamera, float FallbackAngleOffsetDegrees) { NativeCall<void, UE::Math::TVector<double>*, UE::Math::TVector<double>*, bool*, float>(this, "APrimalCharacter.GetCharacterViewLocationAndDirection(UE::Math::TVector<double>&,UE::Math::TVector<double>&,bool&,float)", OutViewLocation, OutViewDirection, OutFromCrosshairOrCamera, FallbackAngleOffsetDegrees); }
	void ZoomIn() { NativeCall<void>(this, "APrimalCharacter.ZoomIn()"); }
	void ZoomOut() { NativeCall<void>(this, "APrimalCharacter.ZoomOut()"); }
	void OnStartJump() { NativeCall<void>(this, "APrimalCharacter.OnStartJump()"); }
	void PlayJumpAnim() { NativeCall<void>(this, "APrimalCharacter.PlayJumpAnim()"); }
	void PlayLandedAnim() { NativeCall<void>(this, "APrimalCharacter.PlayLandedAnim()"); }
	void OnJumped_Implementation() { NativeCall<void>(this, "APrimalCharacter.OnJumped_Implementation()"); }
	void NetOnJumped_Implementation() { NativeCall<void>(this, "APrimalCharacter.NetOnJumped_Implementation()"); }
	void OnStopJump() { NativeCall<void>(this, "APrimalCharacter.OnStopJump()"); }
	void PreReplication(IRepChangedPropertyTracker* ChangedPropertyTracker) { NativeCall<void, IRepChangedPropertyTracker*>(this, "APrimalCharacter.PreReplication(IRepChangedPropertyTracker&)", ChangedPropertyTracker); }
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty, TSizedDefaultAllocator<32> >* OutLifetimeProps) { NativeCall<void, TArray<FLifetimeProperty, TSizedDefaultAllocator<32> >*>(this, "APrimalCharacter.GetLifetimeReplicatedProps(TArray<FLifetimeProperty,TSizedDefaultAllocator<32>>&)", OutLifetimeProps); }
	float GetRunningSpeedModifier(bool bIsForDefaultSpeed) { return NativeCall<float, bool>(this, "APrimalCharacter.GetRunningSpeedModifier(bool)", bIsForDefaultSpeed); }
	float GetMaxHealth() { return NativeCall<float>(this, "APrimalCharacter.GetMaxHealth()"); }
	bool AllowFirstPerson() { return NativeCall<bool>(this, "APrimalCharacter.AllowFirstPerson()"); }
	AActor* GetAimedActor(ECollisionChannel CollisionChannel, UActorComponent** HitComponent, float MaxDistanceOverride, float CheckRadius, int* hitBodyIndex, FHitResult* outHitResult, bool bForceUseCameraLocation, bool bForceUpdateAimedActors, bool bForceUseActorLocation, bool* bIsDirectHit) { return NativeCall<AActor*, ECollisionChannel, UActorComponent**, float, float, int*, FHitResult*, bool, bool, bool, bool*>(this, "APrimalCharacter.GetAimedActor(ECollisionChannel,UActorComponent**,float,float,int*,FHitResult*,bool,bool,bool,bool*)", CollisionChannel, HitComponent, MaxDistanceOverride, CheckRadius, hitBodyIndex, outHitResult, bForceUseCameraLocation, bForceUpdateAimedActors, bForceUseActorLocation, bIsDirectHit); }
	void OnPrimalCharacterSleeped() { NativeCall<void>(this, "APrimalCharacter.OnPrimalCharacterSleeped()"); }
	TSubclassOf<UToolTipWidget>* GetCustomTooltip_Implementation(TSubclassOf<UToolTipWidget>* result, UE::Math::TVector2<double>* tooltipPadding, UE::Math::TVector2<double>* tooltipScale, UE::Math::TVector<double>* tooltipLocationOffset) { return NativeCall<TSubclassOf<UToolTipWidget> *, TSubclassOf<UToolTipWidget>*, UE::Math::TVector2<double>*, UE::Math::TVector2<double>*, UE::Math::TVector<double>*>(this, "APrimalCharacter.GetCustomTooltip_Implementation(UE::Math::TVector2<double>&,UE::Math::TVector2<double>&,UE::Math::TVector<double>&)", result, tooltipPadding, tooltipScale, tooltipLocationOffset); }
	void OnPrimalCharacterUnsleeped() { NativeCall<void>(this, "APrimalCharacter.OnPrimalCharacterUnsleeped()"); }
	void ControlRigNotify(FName NotifyName, FName NotifyCustomTag, const FHitResult* WorldSpaceHitResult, const UE::Math::TVector<double>* Velocity) { NativeCall<void, FName, FName, const FHitResult*, const UE::Math::TVector<double>*>(this, "APrimalCharacter.ControlRigNotify(FName,FName,FHitResult&,UE::Math::TVector<double>&)", NotifyName, NotifyCustomTag, WorldSpaceHitResult, Velocity); }
	float PlayAnimEx(UAnimMontage* AnimMontage, float InPlayRate, FName StartSectionName, bool bReplicate, bool bReplicateToOwner, bool bForceTickPoseAndServerUpdateMesh, bool bForceTickPoseOnServer, bool bForceKeepSynced, float BlendInTime, float BlendOutTime) { return NativeCall<float, UAnimMontage*, float, FName, bool, bool, bool, bool, bool, float, float>(this, "APrimalCharacter.PlayAnimEx(UAnimMontage*,float,FName,bool,bool,bool,bool,bool,float,float,bool)", AnimMontage, InPlayRate, StartSectionName, bReplicate, bReplicateToOwner, bForceTickPoseAndServerUpdateMesh, bForceTickPoseOnServer, bForceKeepSynced, BlendInTime, BlendOutTime); }
	void StopAnimEx(UAnimMontage* AnimMontage, bool bReplicate, bool bReplicateToOwner, float BlendOutTime) { NativeCall<void, UAnimMontage*, bool, bool, float>(this, "APrimalCharacter.StopAnimEx(UAnimMontage*,bool,bool,float)", AnimMontage, bReplicate, bReplicateToOwner, BlendOutTime); }
	void ClientPlayAnimation_Implementation(UAnimMontage* AnimMontage, float PlayRate, FName StartSectionName, bool bPlayOnOwner, bool bForceTickPoseAndServerUpdateMesh) { NativeCall<void, UAnimMontage*, float, FName, bool, bool>(this, "APrimalCharacter.ClientPlayAnimation_Implementation(UAnimMontage*,float,FName,bool,bool,bool)", AnimMontage, PlayRate, StartSectionName, bPlayOnOwner, bForceTickPoseAndServerUpdateMesh); }
	void ClientSyncAnimation_Implementation(UAnimMontage* AnimMontage, float PlayRate, float ServerCurrentMontageTime, bool bForceTickPoseAndServerUpdateMesh, float BlendInTime, float BlendOutTime) { NativeCall<void, UAnimMontage*, float, float, bool, float, float>(this, "APrimalCharacter.ClientSyncAnimation_Implementation(UAnimMontage*,float,float,bool,float,float,bool)", AnimMontage, PlayRate, ServerCurrentMontageTime, bForceTickPoseAndServerUpdateMesh, BlendInTime, BlendOutTime); }
	void ClientStopAnimation_Implementation(UAnimMontage* AnimMontage, bool bStopOnOwner, float BlendOutTime) { NativeCall<void, UAnimMontage*, bool, float>(this, "APrimalCharacter.ClientStopAnimation_Implementation(UAnimMontage*,bool,float)", AnimMontage, bStopOnOwner, BlendOutTime); }
	void SetRunning(bool bNewRunning) { NativeCall<void, bool>(this, "APrimalCharacter.SetRunning(bool)", bNewRunning); }
	void ServerSetRunning_Implementation(bool bNewRunning) { NativeCall<void, bool>(this, "APrimalCharacter.ServerSetRunning_Implementation(bool)", bNewRunning); }
	void ControllerLeavingGame(AShooterPlayerController* theController) { NativeCall<void, AShooterPlayerController*>(this, "APrimalCharacter.ControllerLeavingGame(AShooterPlayerController*)", theController); }
	float GetLowHealthPercentage() { return NativeCall<float>(this, "APrimalCharacter.GetLowHealthPercentage()"); }
	bool IsAlive() { return NativeCall<bool>(this, "APrimalCharacter.IsAlive()"); }
	FString* GetDescriptiveName(FString* result) { return NativeCall<FString*, FString*>(this, "APrimalCharacter.GetDescriptiveName()", result); }
	void PrepareForSaving() { NativeCall<void>(this, "APrimalCharacter.PrepareForSaving()"); }
	void CacheDynamicBaseValues() { NativeCall<void>(this, "APrimalCharacter.CacheDynamicBaseValues()"); }
	FString* GetShortName(FString* result) { return NativeCall<FString*, FString*>(this, "APrimalCharacter.GetShortName()", result); }
	TArray<FString, TSizedDefaultAllocator<32> >* GetDetailedDescription(TArray<FString, TSizedDefaultAllocator<32> >* result, const FString* IndentPrefix) { return NativeCall<TArray<FString, TSizedDefaultAllocator<32> >*, TArray<FString, TSizedDefaultAllocator<32> >*, const FString*>(this, "APrimalCharacter.GetDetailedDescription(FString&)", result, IndentPrefix); }
	float GetHealthPercentage() { return NativeCall<float>(this, "APrimalCharacter.GetHealthPercentage()"); }
	float GetHealth() { return NativeCall<float>(this, "APrimalCharacter.GetHealth()"); }
	void AnimNotifyCustomEvent(FName CustomEventName, USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, const UAnimNotify* AnimNotifyObject) { NativeCall<void, FName, USkeletalMeshComponent*, UAnimSequenceBase*, const UAnimNotify*>(this, "APrimalCharacter.AnimNotifyCustomEvent(FName,USkeletalMeshComponent*,UAnimSequenceBase*,UAnimNotify*)", CustomEventName, MeshComp, Animation, AnimNotifyObject); }
	void AnimNotifyCustomState_Begin(FName CustomEventName, USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, float TotalDuration, const UAnimNotifyState* AnimNotifyObject) { NativeCall<void, FName, USkeletalMeshComponent*, UAnimSequenceBase*, float, const UAnimNotifyState*>(this, "APrimalCharacter.AnimNotifyCustomState_Begin(FName,USkeletalMeshComponent*,UAnimSequenceBase*,float,UAnimNotifyState*)", CustomEventName, MeshComp, Animation, TotalDuration, AnimNotifyObject); }
	void AnimNotifyCustomState_End(FName CustomEventName, USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, const UAnimNotifyState* AnimNotifyObject) { NativeCall<void, FName, USkeletalMeshComponent*, UAnimSequenceBase*, const UAnimNotifyState*>(this, "APrimalCharacter.AnimNotifyCustomState_End(FName,USkeletalMeshComponent*,UAnimSequenceBase*,UAnimNotifyState*)", CustomEventName, MeshComp, Animation, AnimNotifyObject); }
	void DrawFloatingChatMessage(AShooterHUD* HUD, FString* Message, double receivedChatTime, APrimalCharacter* character, UE::Math::TVector<double>* BubbleOffset) { NativeCall<void, AShooterHUD*, FString*, double, APrimalCharacter*, UE::Math::TVector<double>*>(this, "APrimalCharacter.DrawFloatingChatMessage(AShooterHUD*,FString,double,APrimalCharacter*,UE::Math::TVector<double>)", HUD, Message, receivedChatTime, character, BubbleOffset); }
	float GetClientRotationInterpSpeed(const UE::Math::TVector<double>* RootLoc) { return NativeCall<float, const UE::Math::TVector<double>*>(this, "APrimalCharacter.GetClientRotationInterpSpeed(UE::Math::TVector<double>&)", RootLoc); }
	void ForceRefreshBones(UObject* a2) { NativeCall<void, UObject*>(this, "APrimalCharacter.ForceRefreshBones()", a2); }
	void StartForceSkelUpdate(float ForTime, bool bForceUpdateMesh, bool bServerOnly) { NativeCall<void, float, bool, bool>(this, "APrimalCharacter.StartForceSkelUpdate(float,bool,bool,bool)", ForTime, bForceUpdateMesh, bServerOnly); }
	void EndForceSkelUpdate() { NativeCall<void>(this, "APrimalCharacter.EndForceSkelUpdate()"); }
	void ForceMeshRelevant(float Duration) { NativeCall<void, float>(this, "APrimalCharacter.ForceMeshRelevant(float)", Duration); }
	bool IsConscious() { return NativeCall<bool>(this, "APrimalCharacter.IsConscious()"); }
	bool IsEncumbered() { return NativeCall<bool>(this, "APrimalCharacter.IsEncumbered()"); }
	void Stasis() { NativeCall<void>(this, "APrimalCharacter.Stasis()"); }
	void CheckBasedOnDino() { NativeCall<void>(this, "APrimalCharacter.CheckBasedOnDino()"); }
	void Unstasis() { NativeCall<void>(this, "APrimalCharacter.Unstasis()"); }
	void OnVoiceTalkingStateChanged(bool isTalking, bool InbIsMuted) { NativeCall<void, bool, bool>(this, "APrimalCharacter.OnVoiceTalkingStateChanged(bool,bool)", isTalking, InbIsMuted); }
	bool AllowFallDamage(const FHitResult* HitResult, float FallDamageAmount, bool CustomFallDamage) { return NativeCall<bool, const FHitResult*, float, bool>(this, "APrimalCharacter.AllowFallDamage(FHitResult&,float,bool)", HitResult, FallDamageAmount, CustomFallDamage); }
	UPrimalCharacterStatusComponent* GetCharacterStatusComponent() { return NativeCall<UPrimalCharacterStatusComponent*>(this, "APrimalCharacter.GetCharacterStatusComponent()"); }
	void DrawLocalPlayerHUD(AShooterHUD* HUD) { NativeCall<void, AShooterHUD*>(this, "APrimalCharacter.DrawLocalPlayerHUD(AShooterHUD*)", HUD); }
	bool IsInStatusState(EPrimalCharacterStatusState::Type StatusStateType) { return NativeCall<bool, EPrimalCharacterStatusState::Type>(this, "APrimalCharacter.IsInStatusState(EPrimalCharacterStatusState::Type)", StatusStateType); }
	float GetMaxSpeedModifier(bool bIgnoreRunning) { return NativeCall<float, bool>(this, "APrimalCharacter.GetMaxSpeedModifier(bool)", bIgnoreRunning); }
	float GetRotationRateModifier() { return NativeCall<float>(this, "APrimalCharacter.GetRotationRateModifier()"); }
	float GetJumpZModifier() { return NativeCall<float>(this, "APrimalCharacter.GetJumpZModifier()"); }
	bool CanBeBaseForCharacter(APawn* Pawn) { return NativeCall<bool, APawn*>(this, "APrimalCharacter.CanBeBaseForCharacter(APawn*)", Pawn); }
	float GetDefaultMovementSpeed() { return NativeCall<float>(this, "APrimalCharacter.GetDefaultMovementSpeed()"); }
	void TakeFallingDamage(const FHitResult* Hit) { NativeCall<void, const FHitResult*>(this, "APrimalCharacter.TakeFallingDamage(FHitResult&)", Hit); }
	void ApplyCustomFallDamage(const UE::Math::TVector<double>* Location, const UE::Math::TVector<double>* Velocity, float FallDamageThreshold) { NativeCall<void, const UE::Math::TVector<double>*, const UE::Math::TVector<double>*, float>(this, "APrimalCharacter.ApplyCustomFallDamage(UE::Math::TVector<double>&,UE::Math::TVector<double>&,float)", Location, Velocity, FallDamageThreshold); }
	void NativeOnLanded(const FHitResult* Hit) { NativeCall<void, const FHitResult*>(this, "APrimalCharacter.NativeOnLanded(FHitResult&)", Hit); }
	void NetDidLand_Implementation() { NativeCall<void>(this, "APrimalCharacter.NetDidLand_Implementation()"); }
	void DidLand() { NativeCall<void>(this, "APrimalCharacter.DidLand()"); }
	void FadeOutLoadingMusic() { NativeCall<void>(this, "APrimalCharacter.FadeOutLoadingMusic()"); }
	void LocalPossessedBy(APlayerController* ByController) { NativeCall<void, APlayerController*>(this, "APrimalCharacter.LocalPossessedBy(APlayerController*)", ByController); }
	void LocalUnpossessed_Implementation() { NativeCall<void>(this, "APrimalCharacter.LocalUnpossessed_Implementation()"); }
	UAudioComponent* PlayFootstep() { return NativeCall<UAudioComponent*>(this, "APrimalCharacter.PlayFootstep()"); }
	EPhysicalSurface GetFootPhysicalSurfaceType(bool bForce, bool bIsForFootstepParticles) { return NativeCall<EPhysicalSurface, bool, bool>(this, "APrimalCharacter.GetFootPhysicalSurfaceType(bool,bool)", bForce, bIsForFootstepParticles); }
	EPhysicalSurface GetPhysMatTypeFromHits(const TArray<FHitResult, TSizedDefaultAllocator<32> >* FromHits) { return NativeCall<EPhysicalSurface, const TArray<FHitResult, TSizedDefaultAllocator<32> >*>(this, "APrimalCharacter.GetPhysMatTypeFromHits(TArray<FHitResult,TSizedDefaultAllocator<32>>&)", FromHits); }
	bool ModifyInputAcceleration(UE::Math::TVector<double>* InputAcceleration) { return NativeCall<bool, UE::Math::TVector<double>*>(this, "APrimalCharacter.ModifyInputAcceleration(UE::Math::TVector<double>&)", InputAcceleration); }
	bool AnimationPreventsInput() { return NativeCall<bool>(this, "APrimalCharacter.AnimationPreventsInput()"); }
	float SetHealth(float newHealth) { return NativeCall<float, float>(this, "APrimalCharacter.SetHealth(float)", newHealth); }
	bool IsOfTribe(int ID) { return NativeCall<bool, int>(this, "APrimalCharacter.IsOfTribe(int)", ID); }
	void SetRagdollReplication(bool Enabled) { NativeCall<void, bool>(this, "APrimalCharacter.SetRagdollReplication(bool)", Enabled); }
	void Serialize(FArchive* Ar) { NativeCall<void, FArchive*>(this, "APrimalCharacter.Serialize(FArchive&)", Ar); }
	void ReplicateRagdoll() { NativeCall<void>(this, "APrimalCharacter.ReplicateRagdoll()"); }
	void InitRagdollRepConstraints() { NativeCall<void>(this, "APrimalCharacter.InitRagdollRepConstraints()"); }
	void TermRagdollRepConstraints() { NativeCall<void>(this, "APrimalCharacter.TermRagdollRepConstraints()"); }
	//void ClientRagdollUpdate_Implementation(const TArray<FVector_NetQuantize, TSizedDefaultAllocator<32> >* BoneLocations, FRotator_NetQuantize* TargetRootRotation) { NativeCall<void, const TArray<FVector_NetQuantize, TSizedDefaultAllocator<32> >*, FRotator_NetQuantize*>(this, "APrimalCharacter.ClientRagdollUpdate_Implementation(TArray<FVector_NetQuantize,TSizedDefaultAllocator<32>>&,FRotator_NetQuantize)", BoneLocations, TargetRootRotation); }
	void SleepBodies() { NativeCall<void>(this, "APrimalCharacter.SleepBodies()"); }
	void UpdateRagdollReplicationOnClient() { NativeCall<void>(this, "APrimalCharacter.UpdateRagdollReplicationOnClient()"); }
	void ClientEndRagdollUpdate_Implementation(int a2) { NativeCall<void, int>(this, "APrimalCharacter.ClientEndRagdollUpdate_Implementation()", a2); }
	void OnRep_RagdollPositions() { NativeCall<void>(this, "APrimalCharacter.OnRep_RagdollPositions()"); }
	void InitRagdollReplication(__int16 a2) { NativeCall<void, __int16>(this, "APrimalCharacter.InitRagdollReplication()", a2); }
	bool CanDragCharacter(APrimalCharacter* Character, bool bIgnoreWeight) { return NativeCall<bool, APrimalCharacter*, bool>(this, "APrimalCharacter.CanDragCharacter(APrimalCharacter*,bool)", Character, bIgnoreWeight); }
	bool HasEnoughWeightToDragCharacter(APrimalCharacter* Character) { return NativeCall<bool, APrimalCharacter*>(this, "APrimalCharacter.HasEnoughWeightToDragCharacter(APrimalCharacter*)", Character); }
	void NotifyEquippedItems() { NativeCall<void>(this, "APrimalCharacter.NotifyEquippedItems()"); }
	void NotifyUnequippedItems() { NativeCall<void>(this, "APrimalCharacter.NotifyUnequippedItems()"); }
	bool CanBeDragged() { return NativeCall<bool>(this, "APrimalCharacter.CanBeDragged()"); }
	bool IsInvincible() { return NativeCall<bool>(this, "APrimalCharacter.IsInvincible()"); }
	__int64 GetNearestBoneIndexForDrag(APrimalCharacter* Character, UE::Math::TVector<double>* HitLocation) { return NativeCall<__int64, APrimalCharacter*, UE::Math::TVector<double>*>(this, "APrimalCharacter.GetNearestBoneIndexForDrag(APrimalCharacter*,UE::Math::TVector<double>)", Character, HitLocation); }
	bool TryDragCharacterTarget(APrimalCharacter* Character) { return NativeCall<bool, APrimalCharacter*>(this, "APrimalCharacter.TryDragCharacterTarget(APrimalCharacter*)", Character); }
	void TryDragCharacter() { NativeCall<void>(this, "APrimalCharacter.TryDragCharacter()"); }
	void UpdateDragging() { NativeCall<void>(this, "APrimalCharacter.UpdateDragging()"); }
	void OnBeginDrag_Implementation(APrimalCharacter* Dragged, int BoneIndex, bool bWithGrapHook) { NativeCall<void, APrimalCharacter*, int, bool>(this, "APrimalCharacter.OnBeginDrag_Implementation(APrimalCharacter*,int,bool)", Dragged, BoneIndex, bWithGrapHook); }
	void OnEndDrag_Implementation() { NativeCall<void>(this, "APrimalCharacter.OnEndDrag_Implementation()"); }
	void OnBeginDragged(APrimalCharacter* Dragger) { NativeCall<void, APrimalCharacter*>(this, "APrimalCharacter.OnBeginDragged(APrimalCharacter*)", Dragger); }
	void OnDraggedStarted() { NativeCall<void>(this, "APrimalCharacter.OnDraggedStarted()"); }
	void TickBeingDragged(float DeltaSeconds) { NativeCall<void, float>(this, "APrimalCharacter.TickBeingDragged(float)", DeltaSeconds); }
	void OnDraggedInterpEnded() { NativeCall<void>(this, "APrimalCharacter.OnDraggedInterpEnded()"); }
	void OnEndDragged(APrimalCharacter* Dragger) { NativeCall<void, APrimalCharacter*>(this, "APrimalCharacter.OnEndDragged(APrimalCharacter*)", Dragger); }
	bool CanBeCarried(APrimalCharacter* ByCarrier) { return NativeCall<bool, APrimalCharacter*>(this, "APrimalCharacter.CanBeCarried(APrimalCharacter*)", ByCarrier); }
	float GetKillXP() { return NativeCall<float>(this, "APrimalCharacter.GetKillXP()"); }
	void UpdateIK() { NativeCall<void>(this, "APrimalCharacter.UpdateIK()"); }
	//bool IKFootTrace(int LegIndex, FIKLegInfo* LegInfo, UE::Math::TVector<double>* ActorLocation, UE::Math::TVector<double>* ActorForward, UE::Math::TVector<double>* TraceDirection, float TraceDistance) { return NativeCall<bool, int, FIKLegInfo*, UE::Math::TVector<double>*, UE::Math::TVector<double>*, UE::Math::TVector<double>*, float>(this, "APrimalCharacter.IKFootTrace(int,FIKLegInfo&,UE::Math::TVector<double>,UE::Math::TVector<double>,UE::Math::TVector<double>,float)", LegIndex, LegInfo, ActorLocation, ActorForward, TraceDirection, TraceDistance); }
	void EnableIK(bool bEnable, bool bForceOnDedicated) { NativeCall<void, bool, bool>(this, "APrimalCharacter.EnableIK(bool,bool)", bEnable, bForceOnDedicated); }
	void GetMultiUseEntries(APlayerController* ForPC, TArray<FMultiUseEntry, TSizedDefaultAllocator<32> >* MultiUseEntries, int hitBodyIndex) { NativeCall<void, APlayerController*, TArray<FMultiUseEntry, TSizedDefaultAllocator<32> >*, int>(this, "APrimalCharacter.GetMultiUseEntries(APlayerController*,TArray<FMultiUseEntry,TSizedDefaultAllocator<32>>&,int)", ForPC, MultiUseEntries, hitBodyIndex); }
	void FilterMultiUseEntries(APlayerController* ForPC, TArray<FMultiUseEntry, TSizedDefaultAllocator<32> >* MultiUseEntries) { NativeCall<void, APlayerController*, TArray<FMultiUseEntry, TSizedDefaultAllocator<32> >*>(this, "APrimalCharacter.FilterMultiUseEntries(APlayerController*,TArray<FMultiUseEntry,TSizedDefaultAllocator<32>>&)", ForPC, MultiUseEntries); }
	bool TryMultiUse(APlayerController* ForPC, int UseIndex, int hitBodyIndex) { return NativeCall<bool, APlayerController*, int, int>(this, "APrimalCharacter.TryMultiUse(APlayerController*,int,int)", ForPC, UseIndex, hitBodyIndex); }
	void ClientMultiUse(APlayerController* ForPC, int UseIndex, int hitBodyIndex) { NativeCall<void, APlayerController*, int, int>(this, "APrimalCharacter.ClientMultiUse(APlayerController*,int,int)", ForPC, UseIndex, hitBodyIndex); }
	void GetHUDElements(APlayerController* ForPC, TArray<FHUDElement, TSizedDefaultAllocator<32> >* OutElements) { NativeCall<void, APlayerController*, TArray<FHUDElement, TSizedDefaultAllocator<32> >*>(this, "APrimalCharacter.GetHUDElements(APlayerController*,TArray<FHUDElement,TSizedDefaultAllocator<32>>&)", ForPC, OutElements); }
	void SetBiomeZoneVolume(ABiomeZoneVolume* theVolume) { NativeCall<void, ABiomeZoneVolume*>(this, "APrimalCharacter.SetBiomeZoneVolume(ABiomeZoneVolume*)", theVolume); }
	void ClearBiomeZoneVolume(ABiomeZoneVolume* theVolume) { NativeCall<void, ABiomeZoneVolume*>(this, "APrimalCharacter.ClearBiomeZoneVolume(ABiomeZoneVolume*)", theVolume); }
	void RefreshBiomeZoneVolumes() { NativeCall<void>(this, "APrimalCharacter.RefreshBiomeZoneVolumes()"); }
	void ForceTickPoseDelta(UObject* a2) { NativeCall<void, UObject*>(this, "APrimalCharacter.ForceTickPoseDelta()", a2); }
	bool CheckJumpOutOfWater() { return NativeCall<bool>(this, "APrimalCharacter.CheckJumpOutOfWater()"); }
	bool IsTargetableDead() { return NativeCall<bool>(this, "APrimalCharacter.IsTargetableDead()"); }
	void RequestPoop() { NativeCall<void>(this, "APrimalCharacter.RequestPoop()"); }
	bool Poop(bool bForcePoop) { return NativeCall<bool, bool>(this, "APrimalCharacter.Poop(bool)", bForcePoop); }
	void EmitPoop() { NativeCall<void>(this, "APrimalCharacter.EmitPoop()"); }
	bool IsValidForStatusRecovery() { return NativeCall<bool>(this, "APrimalCharacter.IsValidForStatusRecovery()"); }
	bool GetGroundLocation(UE::Math::TVector<double>* theGroundLoc, const UE::Math::TVector<double>* OffsetUp, const UE::Math::TVector<double>* OffsetDown) { return NativeCall<bool, UE::Math::TVector<double>*, const UE::Math::TVector<double>*, const UE::Math::TVector<double>*>(this, "APrimalCharacter.GetGroundLocation(UE::Math::TVector<double>&,UE::Math::TVector<double>&,UE::Math::TVector<double>&)", theGroundLoc, OffsetUp, OffsetDown); }
	void DeathHarvestingFadeOut_Implementation() { NativeCall<void>(this, "APrimalCharacter.DeathHarvestingFadeOut_Implementation()"); }
	void ServerUploadCharacter(AShooterPlayerController* UploadedBy) { NativeCall<void, AShooterPlayerController*>(this, "APrimalCharacter.ServerUploadCharacter(AShooterPlayerController*)", UploadedBy); }
	void ApplyDamageMomentum(float DamageTaken, const FDamageEvent* DamageEvent, APawn* PawnInstigator, AActor* DamageCauser) { NativeCall<void, float, const FDamageEvent*, APawn*, AActor*>(this, "APrimalCharacter.ApplyDamageMomentum(float,FDamageEvent&,APawn*,AActor*)", DamageTaken, DamageEvent, PawnInstigator, DamageCauser); }
	void NetAddCharacterMovementImpulse_Implementation(UE::Math::TVector<double>* Impulse, __int64 bVelChange, float ImpulseExponent, bool bSetNewMovementMode, EMovementMode NewMovementMode) { NativeCall<void, UE::Math::TVector<double>*, __int64, float, bool, EMovementMode>(this, "APrimalCharacter.NetAddCharacterMovementImpulse_Implementation(UE::Math::TVector<double>,bool,float,bool,EMovementMode,bool)", Impulse, bVelChange, ImpulseExponent, bSetNewMovementMode, NewMovementMode); }
	void NetSetCharacterMovementVelocity_Implementation(bool bSetNewVelocity, UE::Math::TVector<double>* NewVelocity, bool bSetNewMovementMode, EMovementMode NewMovementMode) { NativeCall<void, bool, UE::Math::TVector<double>*, bool, EMovementMode>(this, "APrimalCharacter.NetSetCharacterMovementVelocity_Implementation(bool,UE::Math::TVector<double>,bool,EMovementMode)", bSetNewVelocity, NewVelocity, bSetNewMovementMode, NewMovementMode); }
	bool AllowSaving() { return NativeCall<bool>(this, "APrimalCharacter.AllowSaving()"); }
	bool IsWatered() { return NativeCall<bool>(this, "APrimalCharacter.IsWatered()"); }
	void OnDeserializedByGame(EOnDeserializationType::Type DeserializationType) { NativeCall<void, EOnDeserializationType::Type>(this, "APrimalCharacter.OnDeserializedByGame(EOnDeserializationType::Type)", DeserializationType); }
	int LevelUpPlayerAddedStat(TEnumAsByte<EPrimalCharacterStatusValue::Type> StatToLevel, int NumLevels, AShooterPlayerController* ForPlayer, bool bDontRequirePCForDino) { return NativeCall<int, TEnumAsByte<EPrimalCharacterStatusValue::Type>, int, AShooterPlayerController*, bool>(this, "APrimalCharacter.LevelUpPlayerAddedStat(TEnumAsByte<EPrimalCharacterStatusValue::Type>,int,AShooterPlayerController*,bool)", StatToLevel, NumLevels, ForPlayer, bDontRequirePCForDino); }
	float GetCurrentStatusValue(EPrimalCharacterStatusValue::Type valueType) { return NativeCall<float, EPrimalCharacterStatusValue::Type>(this, "APrimalCharacter.GetCurrentStatusValue(EPrimalCharacterStatusValue::Type)", valueType); }
	void CheckJumpInput(float DeltaTime) { NativeCall<void, float>(this, "APrimalCharacter.CheckJumpInput(float)", DeltaTime); }
	void ServerTryPoop_Implementation() { NativeCall<void>(this, "APrimalCharacter.ServerTryPoop_Implementation()"); }
	void ClientFailedPoop_Implementation() { NativeCall<void>(this, "APrimalCharacter.ClientFailedPoop_Implementation()"); }
	void ClientDidPoop_Implementation() { NativeCall<void>(this, "APrimalCharacter.ClientDidPoop_Implementation()"); }
	void TryAccessInventoryWrapper() { NativeCall<void>(this, "APrimalCharacter.TryAccessInventoryWrapper()"); }
	void TryAccessInventoryReleased() { NativeCall<void>(this, "APrimalCharacter.TryAccessInventoryReleased()"); }
	bool TryAccessInventory() { return NativeCall<bool>(this, "APrimalCharacter.TryAccessInventory()"); }
	void ToggleCameraProbeModePressed1(FKey* Key) { NativeCall<void, FKey*>(this, "APrimalCharacter.ToggleCameraProbeModePressed1(FKey)", Key); }
	void ToggleCameraProbeModePressed2(FKey* Key) { NativeCall<void, FKey*>(this, "APrimalCharacter.ToggleCameraProbeModePressed2(FKey)", Key); }
	void ToggleCameraProbeModeReleased1(FKey* Key) { NativeCall<void, FKey*>(this, "APrimalCharacter.ToggleCameraProbeModeReleased1(FKey)", Key); }
	void ToggleCameraProbeModeReleased2(FKey* Key) { NativeCall<void, FKey*>(this, "APrimalCharacter.ToggleCameraProbeModeReleased2(FKey)", Key); }
	void CameraProbeModeNext() { NativeCall<void>(this, "APrimalCharacter.CameraProbeModeNext()"); }
	void CameraProbeModePrevious() { NativeCall<void>(this, "APrimalCharacter.CameraProbeModePrevious()"); }
	bool IsRagdolled() { return NativeCall<bool>(this, "APrimalCharacter.IsRagdolled()"); }
	static void ForceUpdateAimedCharacters(UWorld* World, const UE::Math::TVector<double>* StartLoc, const UE::Math::TVector<double>* EndLoc, AActor* IgnoreActor, bool bForceUpdateIgnoreActor, float TraceRadius, bool bOnlyRefreshRelevancyValues) { NativeCall<void, UWorld*, const UE::Math::TVector<double>*, const UE::Math::TVector<double>*, AActor*, bool, float, bool>(nullptr, "APrimalCharacter.ForceUpdateAimedCharacters(UWorld*,UE::Math::TVector<double>&,UE::Math::TVector<double>&,AActor*,bool,float,bool)", World, StartLoc, EndLoc, IgnoreActor, bForceUpdateIgnoreActor, TraceRadius, bOnlyRefreshRelevancyValues); }
	void NetForceUpdateAimedCharacters_Implementation(UE::Math::TVector<double>* StartLoc, UE::Math::TVector<double>* EndLoc, AActor* IgnoreActor, bool bForceUpdateIgnoreActor, float TraceRadius) { NativeCall<void, UE::Math::TVector<double>*, UE::Math::TVector<double>*, AActor*, bool, float>(this, "APrimalCharacter.NetForceUpdateAimedCharacters_Implementation(UE::Math::TVector<double>,UE::Math::TVector<double>,AActor*,bool,float)", StartLoc, EndLoc, IgnoreActor, bForceUpdateIgnoreActor, TraceRadius); }
	bool HasBuff(TSubclassOf<APrimalBuff> BuffClass, bool useExactMatch) { return NativeCall<bool, TSubclassOf<APrimalBuff>&, bool>(this, "APrimalCharacter.HasBuff(TSubclassOf<APrimalBuff>,bool)", BuffClass, useExactMatch); }
	bool HasBuffWithCustomTag(FName buffCustomTag, bool bSearchNormalTagArray) { return NativeCall<bool, FName, bool>(this, "APrimalCharacter.HasBuffWithCustomTag(FName,bool)", buffCustomTag, bSearchNormalTagArray); }
	bool HasBuffWithCustomTags(TArray<FName, TSizedDefaultAllocator<32> >* customTags) { return NativeCall<bool, TArray<FName, TSizedDefaultAllocator<32> >*>(this, "APrimalCharacter.HasBuffWithCustomTags(TArray<FName,TSizedDefaultAllocator<32>>)", customTags); }
	int GetBuffStackCount(TSubclassOf<APrimalBuff>& BuffClass, bool useExactMatch) { return NativeCall<int, TSubclassOf<APrimalBuff>, bool>(this, "APrimalCharacter.GetBuffStackCount(TSubclassOf<APrimalBuff>,bool)", BuffClass, useExactMatch); }
	APrimalBuff* GetBuff(TSubclassOf<APrimalBuff> BuffClass) { return NativeCall<APrimalBuff*, TSubclassOf<APrimalBuff>&>(this, "APrimalCharacter.GetBuff(TSubclassOf<APrimalBuff>)", BuffClass); }
	void GetBuffs(TArray<APrimalBuff*, TSizedDefaultAllocator<32> >* TheBuffs) { NativeCall<void, TArray<APrimalBuff*, TSizedDefaultAllocator<32> >*>(this, "APrimalCharacter.GetBuffs(TArray<APrimalBuff*,TSizedDefaultAllocator<32>>&)", TheBuffs); }
	APrimalBuff* GetBuffForPostEffect(UMaterialInterface* anEffect) { return NativeCall<APrimalBuff*, UMaterialInterface*>(this, "APrimalCharacter.GetBuffForPostEffect(UMaterialInterface*)", anEffect); }
	void AddAdditionalDefaultBuffs(UWorld* world, TArray<TSoftClassPtr<APrimalBuff>, TSizedDefaultAllocator<32> >* ToBuffs) { NativeCall<void, UWorld*, TArray<TSoftClassPtr<APrimalBuff>, TSizedDefaultAllocator<32> >*>(this, "APrimalCharacter.AddAdditionalDefaultBuffs(UWorld*,TArray<TSoftClassPtr<APrimalBuff>,TSizedDefaultAllocator<32>>&)", world, ToBuffs); }
	void RemoveAllJumpDeactivatedBuffs(APrimalBuff* IgnoredBuff) { NativeCall<void, APrimalBuff*>(this, "APrimalCharacter.RemoveAllJumpDeactivatedBuffs(APrimalBuff*)", IgnoredBuff); }
	//float GetCameraShakeScalar(TSubclassOf<UCameraShakeBase> currentShake, const float currentScale) { return NativeCall<float, TSubclassOf<UCameraShakeBase>&, const float>(this, "APrimalCharacter.GetCameraShakeScalar(TSubclassOf<UCameraShakeBase>,float)", currentShake, currentScale); }
	bool IsInSingletonMission() { return NativeCall<bool>(this, "APrimalCharacter.IsInSingletonMission()"); }
	void UpdateNetDynamicMusic() { NativeCall<void>(this, "APrimalCharacter.UpdateNetDynamicMusic()"); }
	void NetPlaySoundOnCharacter_Implementation(USoundBase* SoundToPlay, bool bPlayOnOwner) { NativeCall<void, USoundBase*, bool>(this, "APrimalCharacter.NetPlaySoundOnCharacter_Implementation(USoundBase*,bool)", SoundToPlay, bPlayOnOwner); }
	bool IsMeshGameplayRelevant() { return NativeCall<bool>(this, "APrimalCharacter.IsMeshGameplayRelevant()"); }
	float GetCorpseDecayRate() { return NativeCall<float>(this, "APrimalCharacter.GetCorpseDecayRate()"); }
	void TagFriendlyStructures() { NativeCall<void>(this, "APrimalCharacter.TagFriendlyStructures()"); }
	void DestroyByMeshing() { NativeCall<void>(this, "APrimalCharacter.DestroyByMeshing()"); }
	void SetCarryingDino(APrimalDinoCharacter* aDino) { NativeCall<void, APrimalDinoCharacter*>(this, "APrimalCharacter.SetCarryingDino(APrimalDinoCharacter*)", aDino); }
	void ClearCarryingDino(bool bFromDino, bool bCancelAnyCarryBuffs) { NativeCall<void, bool, bool>(this, "APrimalCharacter.ClearCarryingDino(bool,bool)", bFromDino, bCancelAnyCarryBuffs); }
	void OnAttachedToCharacter() { NativeCall<void>(this, "APrimalCharacter.OnAttachedToCharacter()"); }
	void OnDetachedFromCharacter(APrimalCharacter* aCharacter, int OverrideDirection) { NativeCall<void, APrimalCharacter*, int>(this, "APrimalCharacter.OnDetachedFromCharacter(APrimalCharacter*,int)", aCharacter, OverrideDirection); }
	void ClearMountedDino(bool fromMountedDino, bool bIsSecondary) { NativeCall<void, bool, bool>(this, "APrimalCharacter.ClearMountedDino(bool,bool)", fromMountedDino, bIsSecondary); }
	bool DinoMountOnMe(APrimalDinoCharacter* dinoCharacter, bool bIsSecondary) { return NativeCall<bool, APrimalDinoCharacter*, bool>(this, "APrimalCharacter.DinoMountOnMe(APrimalDinoCharacter*,bool)", dinoCharacter, bIsSecondary); }
	bool CanMountOnMe(APrimalDinoCharacter* dinoCharacter, bool bIsSecondary) { return NativeCall<bool, APrimalDinoCharacter*, bool>(this, "APrimalCharacter.CanMountOnMe(APrimalDinoCharacter*,bool)", dinoCharacter, bIsSecondary); }
	bool HasCryoSickness() { return NativeCall<bool>(this, "APrimalCharacter.HasCryoSickness()"); }
	float GetDragWeight(APrimalCharacter* ForDragger) { return NativeCall<float, APrimalCharacter*>(this, "APrimalCharacter.GetDragWeight(APrimalCharacter*)", ForDragger); }
	void SetBase(FMovementBaseInterfaceData* MovementBaseInterfaceData, FName BoneName, bool bNotifyPawn) { NativeCall<void, FMovementBaseInterfaceData*, FName, bool>(this, "APrimalCharacter.SetBase(FMovementBaseInterfaceData*,FName,bool)", MovementBaseInterfaceData, BoneName, bNotifyPawn); }
	void UnPossessed() { NativeCall<void>(this, "APrimalCharacter.UnPossessed()"); }
	void TryCallAttackTarget() { NativeCall<void>(this, "APrimalCharacter.TryCallAttackTarget()"); }
	void TryCallMoveTo() { NativeCall<void>(this, "APrimalCharacter.TryCallMoveTo()"); }
	void TryCallMoveToEx(bool bOnlyAttackTarget) { NativeCall<void, bool>(this, "APrimalCharacter.TryCallMoveToEx(bool)", bOnlyAttackTarget); }
	UTexture2D* GetOverrideDefaultCharacterParamTexture(FName theParamName, UTexture2D* CurrentTexture) { return NativeCall<UTexture2D*, FName, UTexture2D*>(this, "APrimalCharacter.GetOverrideDefaultCharacterParamTexture(FName,UTexture2D*)", theParamName, CurrentTexture); }
	bool CanBePainted() { return NativeCall<bool>(this, "APrimalCharacter.CanBePainted()"); }
	UPaintingTexture* GetPaintingTexture() { return NativeCall<UPaintingTexture*>(this, "APrimalCharacter.GetPaintingTexture(int)"); }
	bool AllowColoringBy(APlayerController* ForPC, UObject* anItem) { return NativeCall<bool, APlayerController*, UObject*>(this, "APrimalCharacter.AllowColoringBy(APlayerController*,UObject*)", ForPC, anItem); }
	void NetStopAllAnimMontage_Implementation() { NativeCall<void>(this, "APrimalCharacter.NetStopAllAnimMontage_Implementation()"); }
	void DeactivateBuffs(TSubclassOf<APrimalBuff> ForBuffClass, UPrimalItem* ForInstigatorItem, bool perfectClassMatch) { NativeCall<void, TSubclassOf<APrimalBuff>&, UPrimalItem*, bool>(this, "APrimalCharacter.DeactivateBuffs(TSubclassOf<APrimalBuff>,UPrimalItem*,bool)", ForBuffClass, ForInstigatorItem, perfectClassMatch); }
	bool ExcludePostProcessBlendableMaterial(const UMaterialInterface* BlendableMaterialInterface) { return NativeCall<bool, const UMaterialInterface*>(this, "APrimalCharacter.ExcludePostProcessBlendableMaterial(UMaterialInterface*)", BlendableMaterialInterface); }
	void PostProcessModifyBlendableMaterial(const UMaterialInterface* BlendableMaterialInterface, UMaterialInstanceDynamic* MID) { NativeCall<void, const UMaterialInterface*, UMaterialInstanceDynamic*>(this, "APrimalCharacter.PostProcessModifyBlendableMaterial(UMaterialInterface*,UMaterialInstanceDynamic*)", BlendableMaterialInterface, MID); }
	void TryCallStayOne() { NativeCall<void>(this, "APrimalCharacter.TryCallStayOne()"); }
	void TryCallFollowOne() { NativeCall<void>(this, "APrimalCharacter.TryCallFollowOne()"); }
	void TryCallFollowDistanceCycleOne() { NativeCall<void>(this, "APrimalCharacter.TryCallFollowDistanceCycleOne()"); }
	void TryCallFlyerLandOne() { NativeCall<void>(this, "APrimalCharacter.TryCallFlyerLandOne()"); }
	void OnRep_AttachmentReplication() { NativeCall<void>(this, "APrimalCharacter.OnRep_AttachmentReplication()"); }
	FString* GetDebugInfoString(FString* result) { return NativeCall<FString*, FString*>(this, "APrimalCharacter.GetDebugInfoString()", result); }
	bool AllowMovementMode(EMovementMode NewMovementMode, unsigned __int8 NewCustomMode) { return NativeCall<bool, EMovementMode, unsigned __int8>(this, "APrimalCharacter.AllowMovementMode(EMovementMode,unsignedchar)", NewMovementMode, NewCustomMode); }
	APrimalDinoCharacter* GetBasedOrSeatingOnDino(__int16 a2) { return NativeCall<APrimalDinoCharacter*, __int16>(this, "APrimalCharacter.GetBasedOrSeatingOnDino()", a2); }
	APrimalDinoCharacter* GetBasedOnDino(bool bUseReplicatedData, bool bOnlyConsciousDino) { return NativeCall<APrimalDinoCharacter*, bool, bool>(this, "APrimalCharacter.GetBasedOnDino(bool,bool)", bUseReplicatedData, bOnlyConsciousDino); }
	float GetBaseDragWeight() { return NativeCall<float>(this, "APrimalCharacter.GetBaseDragWeight(bool)"); }
	void ClientHandleNetDestroy() { NativeCall<void>(this, "APrimalCharacter.ClientHandleNetDestroy()"); }
	bool AllowParallelAnimations(USkeletalMeshComponent* forComp) { return NativeCall<bool, USkeletalMeshComponent*>(this, "APrimalCharacter.AllowParallelAnimations(USkeletalMeshComponent*)", forComp); }
	bool UseClearOnConsumeInput() { return NativeCall<bool>(this, "APrimalCharacter.UseClearOnConsumeInput()"); }
	float GetDamageTorpidityIncreaseMultiplierScale() { return NativeCall<float>(this, "APrimalCharacter.GetDamageTorpidityIncreaseMultiplierScale()"); }
	float GetIndirectTorpidityIncreaseMultiplierScale() { return NativeCall<float>(this, "APrimalCharacter.GetIndirectTorpidityIncreaseMultiplierScale()"); }
	void NotifyBumpedByPawn(APrimalCharacter* ByPawn) { NativeCall<void, APrimalCharacter*>(this, "APrimalCharacter.NotifyBumpedByPawn(APrimalCharacter*)", ByPawn); }
	void NotifyBumpedPawn(APawn* BumpedPawn) { NativeCall<void, APawn*>(this, "APrimalCharacter.NotifyBumpedPawn(APawn*)", BumpedPawn); }
	float GetTPVHorizontalCameraOffset() { return NativeCall<float>(this, "APrimalCharacter.GetTPVHorizontalCameraOffset()"); }
	float GetTPVHorizontalCameraOffsetFromSlider() { return NativeCall<float>(this, "APrimalCharacter.GetTPVHorizontalCameraOffsetFromSlider()"); }
	float GetTransitionToCameraStateInterpTime(TEnumAsByte<EPrimalCameraState> ToFinalCameraState) { return NativeCall<float, TEnumAsByte<EPrimalCameraState>>(this, "APrimalCharacter.GetTransitionToCameraStateInterpTime(EPrimalCameraState)", ToFinalCameraState); }
	float GetPrimalCameraDesiredArmLength(const FPrimalCameraParams* ForCameraParams, float CurrentCameraArmLength, float DefaultCameraArmLength) { return NativeCall<float, const FPrimalCameraParams*, float, float>(this, "APrimalCharacter.GetPrimalCameraDesiredArmLength(FPrimalCameraParams*,float,float)", ForCameraParams, CurrentCameraArmLength, DefaultCameraArmLength); }
	float GetPrimalCameraDesiredArmLength(float CurrentCameraArmLength, float DefaultCameraArmLength) { return NativeCall<float, float, float>(this, "APrimalCharacter.GetPrimalCameraDesiredArmLength(float,float)", CurrentCameraArmLength, DefaultCameraArmLength); }
	bool UseCenteredTPVCamera() { return NativeCall<bool>(this, "APrimalCharacter.UseCenteredTPVCamera()"); }
	void PossessedBy(AController* NewController) { NativeCall<void, AController*>(this, "APrimalCharacter.PossessedBy(AController*)", NewController); }
	bool IsBlockedByShield(const FHitResult* HitInfo, const UE::Math::TVector<double>* ShotDirection, bool bBlockAllPointDamage) { return NativeCall<bool, const FHitResult*, const UE::Math::TVector<double>*, bool>(this, "APrimalCharacter.IsBlockedByShield(FHitResult&,UE::Math::TVector<double>&,bool)", HitInfo, ShotDirection, bBlockAllPointDamage); }
	void BPNetAddCharacterMovementImpulse(UE::Math::TVector<double>* Impulse, bool bVelChange, float ImpulseExponent, bool bSetNewMovementMode, EMovementMode NewMovementMode, bool bOverrideMaxImpulseZ, bool bApplyToBigPawns) { NativeCall<void, UE::Math::TVector<double>*, bool, float, bool, EMovementMode, bool, bool>(this, "APrimalCharacter.BPNetAddCharacterMovementImpulse(UE::Math::TVector<double>,bool,float,bool,EMovementMode,bool,bool)", Impulse, bVelChange, ImpulseExponent, bSetNewMovementMode, NewMovementMode, bOverrideMaxImpulseZ, bApplyToBigPawns); }
	void BPNetSetCharacterMovementVelocity(bool bSetNewVelocity, UE::Math::TVector<double>* NewVelocity, bool bSetNewMovementMode, EMovementMode NewMovementMode) { NativeCall<void, bool, UE::Math::TVector<double>*, bool, EMovementMode>(this, "APrimalCharacter.BPNetSetCharacterMovementVelocity(bool,UE::Math::TVector<double>,bool,EMovementMode)", bSetNewVelocity, NewVelocity, bSetNewMovementMode, NewMovementMode); }
	void NetSetMovementModeSimulatedInternal_Implementation(EMovementMode NewMovementMode) { NativeCall<void, EMovementMode>(this, "APrimalCharacter.NetSetMovementModeSimulatedInternal_Implementation(EMovementMode)", NewMovementMode); }
	float GetGravityZScale() { return NativeCall<float>(this, "APrimalCharacter.GetGravityZScale()"); }
	void OnMovementModeChanged(EMovementMode PrevMovementMode, unsigned __int8 PreviousCustomMode) { NativeCall<void, EMovementMode, unsigned __int8>(this, "APrimalCharacter.OnMovementModeChanged(EMovementMode,unsignedchar)", PrevMovementMode, PreviousCustomMode); }
	void SetCharacterAndRagdollLocation(UE::Math::TVector<double>* NewLocation) { NativeCall<void, UE::Math::TVector<double>*>(this, "APrimalCharacter.SetCharacterAndRagdollLocation(UE::Math::TVector<double>)", NewLocation); }
	void CheckRagdollPenetration() { NativeCall<void>(this, "APrimalCharacter.CheckRagdollPenetration()"); }
	APrimalStructureExplosive* GetAttachedExplosive() { return NativeCall<APrimalStructureExplosive*>(this, "APrimalCharacter.GetAttachedExplosive()"); }
	bool IsInVacuumSealedSpace() { return NativeCall<bool>(this, "APrimalCharacter.IsInVacuumSealedSpace()"); }
	void ClientOrderedMoveTo_Implementation(UE::Math::TVector<double>* MoveToLoc) { NativeCall<void, UE::Math::TVector<double>*>(this, "APrimalCharacter.ClientOrderedMoveTo_Implementation(UE::Math::TVector<double>)", MoveToLoc); }
	void ClientOrderedAttackTarget_Implementation(AActor* attackTarget) { NativeCall<void, AActor*>(this, "APrimalCharacter.ClientOrderedAttackTarget_Implementation(AActor*)", attackTarget); }
	void DownCallOne() { NativeCall<void>(this, "APrimalCharacter.DownCallOne()"); }
	float BPModifyFOV_Implementation(float FOVIn) { return NativeCall<float, float>(this, "APrimalCharacter.BPModifyFOV_Implementation(float)", FOVIn); }
	bool AllowOverrideWalkingVelocity() { return NativeCall<bool>(this, "APrimalCharacter.AllowOverrideWalkingVelocity()"); }
	bool AllowOverrideSwimmingVelocity() { return NativeCall<bool>(this, "APrimalCharacter.AllowOverrideSwimmingVelocity()"); }
	bool AllowOverrideNewFallVelocity() { return NativeCall<bool>(this, "APrimalCharacter.AllowOverrideNewFallVelocity()"); }
	void OverrideWalkingVelocity(UE::Math::TVector<double>* InitialVelocity, const float* Friction, float DeltaTime) { NativeCall<void, UE::Math::TVector<double>*, const float*, float>(this, "APrimalCharacter.OverrideWalkingVelocity(UE::Math::TVector<double>&,float&,float)", InitialVelocity, Friction, DeltaTime); }
	void OverrideSwimmingVelocity(UE::Math::TVector<double>* InitialVelocity, const UE::Math::TVector<double>* Gravity, const float* FluidFriction, const float* NetBuoyancy, float DeltaTime) { NativeCall<void, UE::Math::TVector<double>*, const UE::Math::TVector<double>*, const float*, const float*, float>(this, "APrimalCharacter.OverrideSwimmingVelocity(UE::Math::TVector<double>&,UE::Math::TVector<double>&,float&,float&,float)", InitialVelocity, Gravity, FluidFriction, NetBuoyancy, DeltaTime); }
	void OverrideNewFallVelocity(UE::Math::TVector<double>* InitialVelocity, const UE::Math::TVector<double>* Gravity, float DeltaTime) { NativeCall<void, UE::Math::TVector<double>*, const UE::Math::TVector<double>*, float>(this, "APrimalCharacter.OverrideNewFallVelocity(UE::Math::TVector<double>&,UE::Math::TVector<double>&,float)", InitialVelocity, Gravity, DeltaTime); }
	char PreventLanding(const UE::Math::TVector<double>* ImpactPoint, const UE::Math::TVector<double>* ImpactAccel, UE::Math::TVector<double>* Velocity) { return NativeCall<char, const UE::Math::TVector<double>*, const UE::Math::TVector<double>*, UE::Math::TVector<double>*>(this, "APrimalCharacter.PreventLanding(UE::Math::TVector<double>,UE::Math::TVector<double>,UE::Math::TVector<double>&)", ImpactPoint, ImpactAccel, Velocity); }
	bool AllowOverrideFlyingVelocity() { return NativeCall<bool>(this, "APrimalCharacter.AllowOverrideFlyingVelocity()"); }
	void OverrideFlyingVelocity(UE::Math::TVector<double>* InitialVelocity, const UE::Math::TVector<double>* Gravity, float DeltaTime) { NativeCall<void, UE::Math::TVector<double>*, const UE::Math::TVector<double>*, float>(this, "APrimalCharacter.OverrideFlyingVelocity(UE::Math::TVector<double>&,UE::Math::TVector<double>&,float)", InitialVelocity, Gravity, DeltaTime); }
	void SetDynamicMusic(USoundBase* newMusic) { NativeCall<void, USoundBase*>(this, "APrimalCharacter.SetDynamicMusic(USoundBase*)", newMusic); }
	bool PreventsTargeting_Implementation(AActor* ByActor) { return NativeCall<bool, AActor*>(this, "APrimalCharacter.PreventsTargeting_Implementation(AActor*)", ByActor); }
	bool PreventInputType(EPrimalCharacterInputType::Type inputType) { return NativeCall<bool, EPrimalCharacterInputType::Type>(this, "APrimalCharacter.PreventInputType(EPrimalCharacterInputType::Type)", inputType); }
	bool PreventInputDoesOffset() { return NativeCall<bool>(this, "APrimalCharacter.PreventInputDoesOffset()"); }
	bool IsAlliedWithOtherTeam(int OtherTeamID) { return NativeCall<bool, int>(this, "APrimalCharacter.IsAlliedWithOtherTeam(int)", OtherTeamID); }
	void ResetCollisionSweepLocation(const UE::Math::TVector<double>* newLocation, bool bForceReset) { NativeCall<void, const UE::Math::TVector<double>*, bool>(this, "APrimalCharacter.ResetCollisionSweepLocation(UE::Math::TVector<double>&,bool)", newLocation, bForceReset); }
	void DidTeleport_Implementation(UE::Math::TVector<double>* newLoc, UE::Math::TRotator<double>* newRot, bool bDoCameraFade, FLinearColor* CameraFadeColor) { NativeCall<void, UE::Math::TVector<double>*, UE::Math::TRotator<double>*, bool, FLinearColor*>(this, "APrimalCharacter.DidTeleport_Implementation(UE::Math::TVector<double>,UE::Math::TRotator<double>,bool,FLinearColor)", newLoc, newRot, bDoCameraFade, CameraFadeColor); }
	void FinalLoadedFromSaveGame() { NativeCall<void>(this, "APrimalCharacter.FinalLoadedFromSaveGame()"); }
	void OnConstruction(const UE::Math::TTransform<double>* Transform) { NativeCall<void, const UE::Math::TTransform<double>*>(this, "APrimalCharacter.OnConstruction(UE::Math::TTransform<double>&)", Transform); }
	void OnUpdateSimulatedPosition(const UE::Math::TVector<double>* NewLocation, const UE::Math::TQuat<double>* NewRotation) { NativeCall<void, const UE::Math::TVector<double>*, const UE::Math::TQuat<double>*>(this, "APrimalCharacter.OnUpdateSimulatedPosition(UE::Math::TVector<double>&,UE::Math::TQuat<double>&)", NewLocation, NewRotation); }
	void NotifyItemQuantityUpdated(UPrimalItem* anItem, int amount) { NativeCall<void, UPrimalItem*, int>(this, "APrimalCharacter.NotifyItemQuantityUpdated(UPrimalItem*,int)", anItem, amount); }
	void PerBuffLambda(std::function<void __cdecl(APrimalBuff*)>* lambda) { NativeCall<void, std::function<void __cdecl(APrimalBuff*)>*>(this, "APrimalCharacter.PerBuffLambda(std::function<void__cdecl(APrimalBuff*)>)", lambda); }
	void NotifyItemAdded(UPrimalItem* anItem, bool bEquipItem) { NativeCall<void, UPrimalItem*, bool>(this, "APrimalCharacter.NotifyItemAdded(UPrimalItem*,bool)", anItem, bEquipItem); }
	void NotifyItemRemoved(UPrimalItem* anItem) { NativeCall<void, UPrimalItem*>(this, "APrimalCharacter.NotifyItemRemoved(UPrimalItem*)", anItem); }
	void TeleportSucceeded(bool bIsATest, bool bSimpleTeleport) { NativeCall<void, bool, bool>(this, "APrimalCharacter.TeleportSucceeded(bool,bool)", bIsATest, bSimpleTeleport); }
	bool IsAttachedToSomething() { return NativeCall<bool>(this, "APrimalCharacter.IsAttachedToSomething()"); }
	void AttachToOtherCharacter(APrimalCharacter* characterToAttachTo, const FName InSocketName, const bool enableMovementAndCollision, EAttachLocation::Type AttachLocation) { NativeCall<void, APrimalCharacter*, const FName, const bool, EAttachLocation::Type>(this, "APrimalCharacter.AttachToOtherCharacter(APrimalCharacter*,FName,bool,EAttachLocation::Type)", characterToAttachTo, InSocketName, enableMovementAndCollision, AttachLocation); }
	void AttachedToOtherCharacterUpdateWorldLocation(const UE::Math::TVector<double>* worldLocation) { NativeCall<void, const UE::Math::TVector<double>*>(this, "APrimalCharacter.AttachedToOtherCharacterUpdateWorldLocation(UE::Math::TVector<double>&)", worldLocation); }
	void DetachFromOtherCharacter(const bool enableMovementAndCollision) { NativeCall<void, const bool>(this, "APrimalCharacter.DetachFromOtherCharacter(bool)", enableMovementAndCollision); }
	bool ConsumeProjectileImpact(AShooterProjectile* theProjectile, const FHitResult* HitResult) { return NativeCall<bool, AShooterProjectile*, const FHitResult*>(this, "APrimalCharacter.ConsumeProjectileImpact(AShooterProjectile*,FHitResult&)", theProjectile, HitResult); }
	bool CanProne() { return NativeCall<bool>(this, "APrimalCharacter.CanProne()"); }
	void Prone(bool bClientSimulation) { NativeCall<void, bool>(this, "APrimalCharacter.Prone(bool)", bClientSimulation); }
	void UnProne(bool bClientSimulation) { NativeCall<void, bool>(this, "APrimalCharacter.UnProne(bool)", bClientSimulation); }
	void OnRep_IsProne(__int64 a2) { NativeCall<void, __int64>(this, "APrimalCharacter.OnRep_IsProne()", a2); }
	void RecalculateBaseEyeHeight() { NativeCall<void>(this, "APrimalCharacter.RecalculateBaseEyeHeight()"); }
	void Crouch(bool bClientSimulation) { NativeCall<void, bool>(this, "APrimalCharacter.Crouch(bool)", bClientSimulation); }
	void Landed(const FHitResult* Hit) { NativeCall<void, const FHitResult*>(this, "APrimalCharacter.Landed(FHitResult&)", Hit); }
	bool IsProneOrSitting(bool bIgnoreLockedToSeat) { return NativeCall<bool, bool>(this, "APrimalCharacter.IsProneOrSitting(bool)", bIgnoreLockedToSeat); }
	void DoCharacterDetachment(bool bIncludeRiding, bool bIncludeCarrying, APrimalBuff* BuffToIgnore) { NativeCall<void, bool, bool, APrimalBuff*>(this, "APrimalCharacter.DoCharacterDetachment(bool,bool,APrimalBuff*)", bIncludeRiding, bIncludeCarrying, BuffToIgnore); }
	bool IsCharacterHardAttached(bool bIgnoreRiding, bool bIgnoreCarried) { return NativeCall<bool, bool, bool>(this, "APrimalCharacter.IsCharacterHardAttached(bool,bool)", bIgnoreRiding, bIgnoreCarried); }
	void InitializedAnimScriptInstance() { NativeCall<void>(this, "APrimalCharacter.InitializedAnimScriptInstance()"); }
	bool ForceAddUnderwaterCharacterStatusValues() { return NativeCall<bool>(this, "APrimalCharacter.ForceAddUnderwaterCharacterStatusValues()"); }
	bool IsPrimalCharFriendly(APrimalCharacter* primalChar) { return NativeCall<bool, APrimalCharacter*>(this, "APrimalCharacter.IsPrimalCharFriendly(APrimalCharacter*)", primalChar); }
	bool TeleportTo(const UE::Math::TVector<double>* DestLocation, const UE::Math::TRotator<double>* DestRotation, bool bIsATest, bool bNoCheck) { return NativeCall<bool, const UE::Math::TVector<double>*, const UE::Math::TRotator<double>*, bool, bool>(this, "APrimalCharacter.TeleportTo(UE::Math::TVector<double>&,UE::Math::TRotator<double>&,bool,bool)", DestLocation, DestRotation, bIsATest, bNoCheck); }
	void OnMassTeleportEvent(const EMassTeleportState::Type EventState, const APrimalCharacter* TeleportInitiatedByChar) { NativeCall<void, const EMassTeleportState::Type, const APrimalCharacter*>(this, "APrimalCharacter.OnMassTeleportEvent(EMassTeleportState::Type,APrimalCharacter*)", EventState, TeleportInitiatedByChar); }
	bool GetAllAttachedChars(TArray<APrimalCharacter*, TSizedDefaultAllocator<32> >* AttachedCharsArray, const bool bIncludeSelf, const bool bIncludeBased, const bool bIncludePassengers, const bool bIncludeCarried) { return NativeCall<bool, TArray<APrimalCharacter*, TSizedDefaultAllocator<32> >*, const bool, const bool, const bool, const bool>(this, "APrimalCharacter.GetAllAttachedChars(TArray<APrimalCharacter*,TSizedDefaultAllocator<32>>&,bool,bool,bool,bool)", AttachedCharsArray, bIncludeSelf, bIncludeBased, bIncludePassengers, bIncludeCarried); }
	bool GetAllAttachedCharsInternal(TSet<APrimalCharacter*, DefaultKeyFuncs<APrimalCharacter*, 0>, FDefaultSetAllocator>* AttachedChars, const APrimalCharacter* OriginalChar, bool* bIncludeBased, const bool bIncludePassengers, const bool bIncludeCarried) { return NativeCall<bool, TSet<APrimalCharacter*, DefaultKeyFuncs<APrimalCharacter*, 0>, FDefaultSetAllocator>*, const APrimalCharacter*, bool*, const bool, const bool>(this, "APrimalCharacter.GetAllAttachedCharsInternal(TSet<APrimalCharacter*,DefaultKeyFuncs<APrimalCharacter*,0>,FDefaultSetAllocator>&,APrimalCharacter*,bool,bool,bool)", AttachedChars, OriginalChar, bIncludeBased, bIncludePassengers, bIncludeCarried); }
	void ClearCachedIkTraceResults() { NativeCall<void>(this, "APrimalCharacter.ClearCachedIkTraceResults()"); }
	float OverrideTerminalVelocity() { return NativeCall<float>(this, "APrimalCharacter.OverrideTerminalVelocity()"); }
	void ClientCheatFly_Implementation() { NativeCall<void>(this, "APrimalCharacter.ClientCheatFly_Implementation()"); }
	void ClientCheatWalk_Implementation() { NativeCall<void>(this, "APrimalCharacter.ClientCheatWalk_Implementation()"); }
	bool UseOverrideWaterJumpVelocity() { return NativeCall<bool>(this, "APrimalCharacter.UseOverrideWaterJumpVelocity()"); }
	float GetOverrideWaterJumpVelocity(float OutOfWaterZ) { return NativeCall<float, float>(this, "APrimalCharacter.GetOverrideWaterJumpVelocity(float)", OutOfWaterZ); }
	void OverrideCameraTargetOriginLocation(UE::Math::TVector<double>* OutOverrideOrigin, const FName WithCameraStyle) { NativeCall<void, UE::Math::TVector<double>*, const FName>(this, "APrimalCharacter.OverrideCameraTargetOriginLocation(UE::Math::TVector<double>&,FName)", OutOverrideOrigin, WithCameraStyle); }
	void OverrideCameraInterpSpeed(const float DefaultTPVCameraSpeedInterpMultiplier, const float DefaultTPVOffsetInterpSpeed, float* TPVCameraSpeedInterpMultiplier, float* TPVOffsetInterpSpeed) { NativeCall<void, const float, const float, float*, float*>(this, "APrimalCharacter.OverrideCameraInterpSpeed(float,float,float&,float&)", DefaultTPVCameraSpeedInterpMultiplier, DefaultTPVOffsetInterpSpeed, TPVCameraSpeedInterpMultiplier, TPVOffsetInterpSpeed); }
	void NativeSimulateHair(TArray<UE::Math::TVector<double>, TSizedDefaultAllocator<32> >* CurrentPos, TArray<UE::Math::TVector<double>, TSizedDefaultAllocator<32> >* LastPos, TArray<UE::Math::TVector<double>, TSizedDefaultAllocator<32> >* RestPos, TArray<UE::Math::TVector<double>, TSizedDefaultAllocator<32> >* PivotPos, TArray<float, TSizedDefaultAllocator<32> >* RestDistance, UE::Math::TVector<double>* HairSocketLoc, UE::Math::TRotator<double>* HairSocketRot, UE::Math::TVector<double>* ChestSocketLoc, UE::Math::TRotator<double>* ChestSocketRot, float DeltaTime, float Damping, float DampingFrontModifier, float DampingBack, float InWater, float HairWetness, float DragForce, float HairScale, float SpringForce, float SpringForceFrontModifier, float SpringForceBack, float GravityForce, UE::Math::TVector<double>* ShoulderLCollisionOffset, float ShoulderLCollisionRadius, UE::Math::TVector<double>* ShoulderRCollisionOffset, float ShoulderRCollisionRadius, UE::Math::TVector<double>* HeadHairCollisionOffset, float HeadHairCollisionRadius, UE::Math::TVector<double>* NeckHairCollisionOffset, float NeckHairCollisionRadius, float MaxDistanceToRestPos, UE::Math::TTransform<double>* LastHeadTransform, bool bPosAsPivot, bool bCollideMiddle, bool bCollideWithNeck) { NativeCall<void, TArray<UE::Math::TVector<double>, TSizedDefaultAllocator<32> >*, TArray<UE::Math::TVector<double>, TSizedDefaultAllocator<32> >*, TArray<UE::Math::TVector<double>, TSizedDefaultAllocator<32> >*, TArray<UE::Math::TVector<double>, TSizedDefaultAllocator<32> >*, TArray<float, TSizedDefaultAllocator<32> >*, UE::Math::TVector<double>*, UE::Math::TRotator<double>*, UE::Math::TVector<double>*, UE::Math::TRotator<double>*, float, float, float, float, float, float, float, float, float, float, float, float, UE::Math::TVector<double>*, float, UE::Math::TVector<double>*, float, UE::Math::TVector<double>*, float, UE::Math::TVector<double>*, float, float, UE::Math::TTransform<double>*, bool, bool, bool>(this, "APrimalCharacter.NativeSimulateHair(TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>>&,TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>>&,TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>>&,TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>>&,TArray<float,TSizedDefaultAllocator<32>>&,UE::Math::TVector<double>,UE::Math::TRotator<double>,UE::Math::TVector<double>,UE::Math::TRotator<double>,float,float,float,float,float,float,float,float,float,float,float,float,UE::Math::TVector<double>,float,UE::Math::TVector<double>,float,UE::Math::TVector<double>,float,UE::Math::TVector<double>,float,float,UE::Math::TTransform<double>,bool,bool,bool)", CurrentPos, LastPos, RestPos, PivotPos, RestDistance, HairSocketLoc, HairSocketRot, ChestSocketLoc, ChestSocketRot, DeltaTime, Damping, DampingFrontModifier, DampingBack, InWater, HairWetness, DragForce, HairScale, SpringForce, SpringForceFrontModifier, SpringForceBack, GravityForce, ShoulderLCollisionOffset, ShoulderLCollisionRadius, ShoulderRCollisionOffset, ShoulderRCollisionRadius, HeadHairCollisionOffset, HeadHairCollisionRadius, NeckHairCollisionOffset, NeckHairCollisionRadius, MaxDistanceToRestPos, LastHeadTransform, bPosAsPivot, bCollideMiddle, bCollideWithNeck); }
	bool ShouldDisableCameraInterpolation() { return NativeCall<bool>(this, "APrimalCharacter.ShouldDisableCameraInterpolation()"); }
	EMovementMode GetPrimalCharMovementMode() { return NativeCall<EMovementMode>(this, "APrimalCharacter.GetPrimalCharMovementMode()"); }
	bool BuffsPreventInventoryAccess() { return NativeCall<bool>(this, "APrimalCharacter.BuffsPreventInventoryAccess()"); }
	bool PreventNotifySound(USoundBase* SoundIn) { return NativeCall<bool, USoundBase*>(this, "APrimalCharacter.PreventNotifySound(USoundBase*)", SoundIn); }
	void OnCameraStyleChangedNotify(const FName* NewCameraStyle, const FName* OldCameraStyle) { NativeCall<void, const FName*, const FName*>(this, "APrimalCharacter.OnCameraStyleChangedNotify(FName&,FName&)", NewCameraStyle, OldCameraStyle); }
	void OnPaintingComponentInitialized(const UStructurePaintingComponent* PaintingComp) { NativeCall<void, const UStructurePaintingComponent*>(this, "APrimalCharacter.OnPaintingComponentInitialized(UStructurePaintingComponent*)", PaintingComp); }
	void ClearMovementTether() { NativeCall<void>(this, "APrimalCharacter.ClearMovementTether()"); }
	bool IsMovementTethered() { return NativeCall<bool>(this, "APrimalCharacter.IsMovementTethered()"); }
	bool IsWithinTether() { return NativeCall<bool>(this, "APrimalCharacter.IsWithinTether()"); }
	bool IsTargetWithinTether(const UE::Math::TVector<double>* Destination, float AdditionalRadius) { return NativeCall<bool, const UE::Math::TVector<double>*, float>(this, "APrimalCharacter.IsTargetWithinTether(UE::Math::TVector<double>&,float)", Destination, AdditionalRadius); }
	TArray<APawn*, TSizedDefaultAllocator<32> >* GetTrueBasedPawns(TArray<APawn*, TSizedDefaultAllocator<32> >* result) { return NativeCall<TArray<APawn*, TSizedDefaultAllocator<32> >*, TArray<APawn*, TSizedDefaultAllocator<32> >*>(this, "APrimalCharacter.GetTrueBasedPawns()", result); }
	USoundBase* OverrideCharacterSound(USoundBase* SoundIn) { return NativeCall<USoundBase*, USoundBase*>(this, "APrimalCharacter.OverrideCharacterSound(USoundBase*)", SoundIn); }
	USoundBase* BPOverrideCharacterSound_Implementation(USoundBase* SoundIn) { return NativeCall<USoundBase*, USoundBase*>(this, "APrimalCharacter.BPOverrideCharacterSound_Implementation(USoundBase*)", SoundIn); }
	UParticleSystem* BPOverrideCharacterParticle_Implementation(UParticleSystem* ParticleIn) { return NativeCall<UParticleSystem*, UParticleSystem*>(this, "APrimalCharacter.BPOverrideCharacterParticle_Implementation(UParticleSystem*)", ParticleIn); }
	void LaunchCharacter(UE::Math::TVector<double>* LaunchVelocity, bool bXYOverride, bool bZOverride) { NativeCall<void, UE::Math::TVector<double>*, bool, bool>(this, "APrimalCharacter.LaunchCharacter(UE::Math::TVector<double>,bool,bool)", LaunchVelocity, bXYOverride, bZOverride); }
	bool IsDeadOrDying() { return NativeCall<bool>(this, "APrimalCharacter.IsDeadOrDying()"); }
	void BPSuicide_Implementation() { NativeCall<void>(this, "APrimalCharacter.BPSuicide_Implementation()"); }
	void OnUROPostInterpolation(float Delta, USkeletalMeshComponent* InMesh, TArray<UE::Math::TTransform<double>, TSizedDefaultAllocator<32> >* InterpTransforms) { NativeCall<void, float, USkeletalMeshComponent*, TArray<UE::Math::TTransform<double>, TSizedDefaultAllocator<32> >*>(this, "APrimalCharacter.OnUROPostInterpolation(float,USkeletalMeshComponent*,TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>>&)", Delta, InMesh, InterpTransforms); }
	//void LoadPrimalCameraConfig(TSubclassOf<UPrimalCameraConfig> PrimalCameraConfigClass) { NativeCall<void, TSubclassOf<UPrimalCameraConfig>&>(this, "APrimalCharacter.LoadPrimalCameraConfig(TSubclassOf<UPrimalCameraConfig>)", PrimalCameraConfigClass); }
	//bool GetPrimalCameraSettings(const FPrimalCameraProfile* ForCameraProfile, FPrimalCameraSettings* OutCameraSettings, const APrimalCharacter* CharForConditionChecks) { return NativeCall<bool, const FPrimalCameraProfile*, FPrimalCameraSettings*, const APrimalCharacter*>(this, "APrimalCharacter.GetPrimalCameraSettings(FPrimalCameraProfile&,FPrimalCameraSettings&,APrimalCharacter*)", ForCameraProfile, OutCameraSettings, CharForConditionChecks); }
	//bool GetCurrentPrimalCameraSettings(FPrimalCameraSettings* OutCameraSettings, const APrimalCharacter* CharForConditionChecks) { return NativeCall<bool, FPrimalCameraSettings*, const APrimalCharacter*>(this, "APrimalCharacter.GetCurrentPrimalCameraSettings(FPrimalCameraSettings&,APrimalCharacter*)", OutCameraSettings, CharForConditionChecks); }
	void GetPrimalCameraParams(FPrimalCameraParams* OutCameraParams, const APrimalCharacter* CharForConditionChecks, bool bIncludeWeaponOverride, FName ForProfileId) { NativeCall<void, FPrimalCameraParams*, const APrimalCharacter*, bool, FName>(this, "APrimalCharacter.GetPrimalCameraParams(FPrimalCameraParams&,APrimalCharacter*,bool,FName)", OutCameraParams, CharForConditionChecks, bIncludeWeaponOverride, ForProfileId); }
	//void GetPrimalCameraParams(FPrimalCameraParams* OutCameraParams, const FPrimalCameraProfile* ForCameraProfile, const APrimalCharacter* CharForConditionChecks, bool bIncludeWeaponOverride, FName ForProfileId) { NativeCall<void, FPrimalCameraParams*, const FPrimalCameraProfile*, const APrimalCharacter*, bool, FName>(this, "APrimalCharacter.GetPrimalCameraParams(FPrimalCameraParams&,FPrimalCameraProfile&,APrimalCharacter*,bool,FName)", OutCameraParams, ForCameraProfile, CharForConditionChecks, bIncludeWeaponOverride, ForProfileId); }
	//bool CanUseCameraSettings(const FPrimalCameraSettingsConditions* TheCameraSettingsConditions, const APrimalCharacter* CharForConditionChecks) { return NativeCall<bool, const FPrimalCameraSettingsConditions*, const APrimalCharacter*>(this, "APrimalCharacter.CanUseCameraSettings(FPrimalCameraSettingsConditions&,APrimalCharacter*)", TheCameraSettingsConditions, CharForConditionChecks); }
	void FindAndApplyWeaponCameraParamsOverride(FPrimalCameraParams* OutCameraParams, const APrimalCharacter* CharForConditionChecks, FName ForProfileId) { NativeCall<void, FPrimalCameraParams*, const APrimalCharacter*, FName>(this, "APrimalCharacter.FindAndApplyWeaponCameraParamsOverride(FPrimalCameraParams&,APrimalCharacter*,FName)", OutCameraParams, CharForConditionChecks, ForProfileId); }
	//bool GetCurrentCameraProfile(FPrimalCameraProfile* OutCameraProfile) { return NativeCall<bool, FPrimalCameraProfile*>(this, "APrimalCharacter.GetCurrentCameraProfile(FPrimalCameraProfile&)", OutCameraProfile); }
	FName* GetCurrentCameraProfileId(FName* result) { return NativeCall<FName*, FName*>(this, "APrimalCharacter.GetCurrentCameraProfileId()", result); }
	//bool GetCameraProfileForId(FName CameraProfileId, FPrimalCameraProfile* OutCameraProfile) { return NativeCall<bool, FName, FPrimalCameraProfile*>(this, "APrimalCharacter.GetCameraProfileForId(FName,FPrimalCameraProfile&)", CameraProfileId, OutCameraProfile); }
	void SetCameraProfile_Implementation(FName NewProfileId) { NativeCall<void, FName>(this, "APrimalCharacter.SetCameraProfile_Implementation(FName)", NewProfileId); }
	bool ShouldUseASACamera(bool bCheckShouldSwitchToOld) { return NativeCall<bool, bool>(this, "APrimalCharacter.ShouldUseASACamera(bool)", bCheckShouldSwitchToOld); }
	bool ShouldASACameraSwitchToOld(bool bDontCheckForTargeting) { return NativeCall<bool, bool>(this, "APrimalCharacter.ShouldASACameraSwitchToOld(bool)", bDontCheckForTargeting); }
	bool IsASACameraEnabled() { return NativeCall<bool>(this, "APrimalCharacter.IsASACameraEnabled()"); }
	bool HasValidASACameraConfig() { return NativeCall<bool>(this, "APrimalCharacter.HasValidASACameraConfig()"); }
	bool ShouldUseLongFallCameraPivotZValues() { return NativeCall<bool>(this, "APrimalCharacter.ShouldUseLongFallCameraPivotZValues()"); }
	//float GetPrimalCameraInterpMultiplier(const FCameraInterpMovementBasedMultipliers* CameraInterpMultipliers, TEnumAsByte<EAxis::Type> ForAxis) { return NativeCall<float, const FCameraInterpMovementBasedMultipliers*, TEnumAsByte<EAxis::Type>>(this, "APrimalCharacter.GetPrimalCameraInterpMultiplier(FCameraInterpMovementBasedMultipliers&,TEnumAsByte<EAxis::Type>)", CameraInterpMultipliers, ForAxis); }
	//bool GetPrimalCameraPivotInterpParams(const FPrimalCameraProfile* ForCameraProfile, const FPrimalCameraParams* ForCameraParams, const FPrimalCameraInterpParams* LastInterpParamsX, const FPrimalCameraInterpParams* LastInterpParamsY, const FPrimalCameraInterpParams* LastInterpParamsZ, FPrimalCameraInterpParams* OutParamsX, FPrimalCameraInterpParams* OutParamsY, FPrimalCameraInterpParams* OutParamsZ) { return NativeCall<bool, const FPrimalCameraProfile*, const FPrimalCameraParams*, const FPrimalCameraInterpParams*, const FPrimalCameraInterpParams*, const FPrimalCameraInterpParams*, FPrimalCameraInterpParams*, FPrimalCameraInterpParams*, FPrimalCameraInterpParams*>(this, "APrimalCharacter.GetPrimalCameraPivotInterpParams(FPrimalCameraProfile*,FPrimalCameraParams*,FPrimalCameraInterpParams&,FPrimalCameraInterpParams&,FPrimalCameraInterpParams&,FPrimalCameraInterpParams&,FPrimalCameraInterpParams&,FPrimalCameraInterpParams&)", ForCameraProfile, ForCameraParams, LastInterpParamsX, LastInterpParamsY, LastInterpParamsZ, OutParamsX, OutParamsY, OutParamsZ); }
	bool IsNetRelevantFor(const AActor* RealViewer, const AActor* ViewTarget, const UE::Math::TVector<double>* SrcLocation) { return NativeCall<bool, const AActor*, const AActor*, const UE::Math::TVector<double>*>(this, "APrimalCharacter.IsNetRelevantFor(AActor*,AActor*,UE::Math::TVector<double>&)", RealViewer, ViewTarget, SrcLocation); }
	bool WantsToUseRagdollForSleeping() { return NativeCall<bool>(this, "APrimalCharacter.WantsToUseRagdollForSleeping()"); }
	bool WantsToUseRagdollForDeath() { return NativeCall<bool>(this, "APrimalCharacter.WantsToUseRagdollForDeath()"); }
	UAnimationAsset* GetDeathAnim_Implementation(float KillingDamage, const UE::Math::TVector<double>* ImpactVelocity, APawn* InstigatingPawn, AActor* DamageCauser) { return NativeCall<UAnimationAsset*, float, const UE::Math::TVector<double>*, APawn*, AActor*>(this, "APrimalCharacter.GetDeathAnim_Implementation(float,UE::Math::TVector<double>&,APawn*,AActor*)", KillingDamage, ImpactVelocity, InstigatingPawn, DamageCauser); }
	void GenerateDeathAnim(float KillingDamage, const UE::Math::TVector<double>* ImpactVelocity, APawn* InstigatingPawn, AActor* DamageCauser) { NativeCall<void, float, const UE::Math::TVector<double>*, APawn*, AActor*>(this, "APrimalCharacter.GenerateDeathAnim(float,UE::Math::TVector<double>&,APawn*,AActor*)", KillingDamage, ImpactVelocity, InstigatingPawn, DamageCauser); }
	bool IsFollowingFinalPathSegment() { return NativeCall<bool>(this, "APrimalCharacter.IsFollowingFinalPathSegment()"); }
	void GetWindSourceComponents(TArray<UActorComponent*, TSizedDefaultAllocator<32> >* Components, int includePriorityGreaterThan, bool bIsFirstPerson) { NativeCall<void, TArray<UActorComponent*, TSizedDefaultAllocator<32> >*, int, bool>(this, "APrimalCharacter.GetWindSourceComponents(TArray<UActorComponent*,TSizedDefaultAllocator<32>>&,int,bool)", Components, includePriorityGreaterThan, bIsFirstPerson); }
	void OnCharacterStepped_Implementation(UE::Math::TVector<double>* PrevLocation, UE::Math::TVector<double>* NewLocation) { NativeCall<void, UE::Math::TVector<double>*, UE::Math::TVector<double>*>(this, "APrimalCharacter.OnCharacterStepped_Implementation(UE::Math::TVector<double>,UE::Math::TVector<double>)", PrevLocation, NewLocation); }
	void NetSetReplicatedDeathAnim_Implementation(UAnimationAsset* Anim) { NativeCall<void, UAnimationAsset*>(this, "APrimalCharacter.NetSetReplicatedDeathAnim_Implementation(UAnimationAsset*)", Anim); }
	FLinearColor* GetFXBloodColor_Implementation(FLinearColor* result) { return NativeCall<FLinearColor*, FLinearColor*>(this, "APrimalCharacter.GetFXBloodColor_Implementation()", result); }
	void OnRep_ReplicatedBasedMovement() { NativeCall<void>(this, "APrimalCharacter.OnRep_ReplicatedBasedMovement()"); }
	void UpdateReplicatedBasedMovement() { NativeCall<void>(this, "APrimalCharacter.UpdateReplicatedBasedMovement()"); }
	//__int64 GetVelocityBasedSoundIndex(FVelocityBasedCharacterSoundInfo* InStruct, UE::Math::TVector<double>* InVelocity) { return NativeCall<__int64, FVelocityBasedCharacterSoundInfo*, UE::Math::TVector<double>*>(this, "APrimalCharacter.GetVelocityBasedSoundIndex(FVelocityBasedCharacterSoundInfo,UE::Math::TVector<double>)", InStruct, InVelocity); }
	AActor* GetBasedOnDinoAsActor(bool bUseReplicatedData, bool bOnlyConsciousDino) { return NativeCall<AActor*, bool, bool>(this, "APrimalCharacter.GetBasedOnDinoAsActor(bool,bool)", bUseReplicatedData, bOnlyConsciousDino); }
	void SetReplicateMovement(bool bInReplicateMovement) { NativeCall<void, bool>(this, "APrimalCharacter.SetReplicateMovement(bool)", bInReplicateMovement); }
	void UpdateEquippedItemDurabilityVariable(FItemNetID itemID, float ItemDurabilityPercentage) { NativeCall<void, FItemNetID, float>(this, "APrimalCharacter.UpdateEquippedItemDurabilityVariable(FItemNetID,float)", itemID, ItemDurabilityPercentage); }
	void UpdateEquippedItemDurabilityMaterials(FItemNetID itemID, float ItemDurabilityPercentage) { NativeCall<void, FItemNetID, float>(this, "APrimalCharacter.UpdateEquippedItemDurabilityMaterials(FItemNetID,float)", itemID, ItemDurabilityPercentage); }
	void UpdateAllEquippedItemsDurabilityMaterials() { NativeCall<void>(this, "APrimalCharacter.UpdateAllEquippedItemsDurabilityMaterials()"); }
	void UpdateAllEquippedItemsDurabilityVariables() { NativeCall<void>(this, "APrimalCharacter.UpdateAllEquippedItemsDurabilityVariables()"); }
	void OnRep_ReplicateMovement() { NativeCall<void>(this, "APrimalCharacter.OnRep_ReplicateMovement()"); }
	bool ShouldUseArmorDurabilityVFX() { return NativeCall<bool>(this, "APrimalCharacter.ShouldUseArmorDurabilityVFX()"); }
	//void GetExtraSaveMovedData(FSavedMove_Character* ForMove) { NativeCall<void, FSavedMove_Character*>(this, "APrimalCharacter.GetExtraSaveMovedData(FSavedMove_Character*)", ForMove); }
	FPrimalCharacterSparseClassData* GetPrimalCharacterSparseClassData(EGetSparseClassDataMethod GetMethod) const
	{
		return (FPrimalCharacterSparseClassData*)const_cast<APrimalCharacter*>(this)->ClassPrivateField()->GetSparseClassData(GetMethod);
	}
	FString* PlayerCommand(FString* result, FString* TheCommand) { return NativeCall<FString*, FString*, FString*>(this, "APrimalCharacter.PlayerCommand(FString&)", result, TheCommand); }
	FString* PlayerCommand_Implementation(FString* result, FString* TheCommand) { return NativeCall<FString*, FString*, FString*>(this, "APrimalCharacter.PlayerCommand_Implementation(FString&)", result, TheCommand); }

	bool& bWasRecentlySwimmingField() { return *GetNativePointerField<bool*>(this, "APrimalCharacter.bWasRecentlySwimming"); }
	float& MeshTeleportInterpTimeRemainingField() { return *GetNativePointerField<float*>(this, "APrimalCharacter.MeshTeleportInterpTimeRemaining"); }
	float& MeshTeleportInterpTotalTimeField() { return *GetNativePointerField<float*>(this, "APrimalCharacter.MeshTeleportInterpTotalTime"); }
	double& SecondaryMountedDinoTimeField() { return *GetNativePointerField<double*>(this, "APrimalCharacter.SecondaryMountedDinoTime"); }
	double& LastTookDamageTimeDifferentTeamField() { return *GetNativePointerField<double*>(this, "APrimalCharacter.LastTookDamageTimeDifferentTeam"); }
	double& LastBasedOnDinoTimeField() { return *GetNativePointerField<double*>(this, "APrimalCharacter.LastBasedOnDinoTime"); }
	double& NextPlayerUndergroundCheckField() { return *GetNativePointerField<double*>(this, "APrimalCharacter.NextPlayerUndergroundCheck"); }
	double& LastTimeSwimmingField() { return *GetNativePointerField<double*>(this, "APrimalCharacter.LastTimeSwimming"); }
	float& AccurateOceanVolumeOverlapsCapsuleHeightMultiplierField() { return *GetNativePointerField<float*>(this, "APrimalCharacter.AccurateOceanVolumeOverlapsCapsuleHeightMultiplier"); }
	float& BlinkDurationField() { return *GetNativePointerField<float*>(this, "APrimalCharacter.BlinkDuration"); }
	float& AddForwardVelocityOnJumpMaxSpeedMultiplierClampField() { return *GetNativePointerField<float*>(this, "APrimalCharacter.AddForwardVelocityOnJumpMaxSpeedMultiplierClamp"); }
	float& RunMinVelocityRotDotAutonomousClientSlackField() { return *GetNativePointerField<float*>(this, "APrimalCharacter.RunMinVelocityRotDotAutonomousClientSlack"); }
	float& EquippedArmorDurabilityPercent3Field() { return *GetNativePointerField<float*>(this, "APrimalCharacter.EquippedArmorDurabilityPercent3"); }
	float& ClientPositionErrorToleranceSquaredField() { return *GetNativePointerField<float*>(this, "APrimalCharacter.ClientPositionErrorToleranceSquared"); }
	float& OnDeathNotifyNearbyCharactersRadiusOverrideField() { return *GetNativePointerField<float*>(this, "APrimalCharacter.OnDeathNotifyNearbyCharactersRadiusOverride"); }
	float& LastIncomingDamagePreArmorField() { return *GetNativePointerField<float*>(this, "APrimalCharacter.LastIncomingDamagePreArmor"); }
	float& DeathHarvestFadeOutDurationField() { return *GetNativePointerField<float*>(this, "APrimalCharacter.DeathHarvestFadeOutDuration"); }
	float& AnimSharingOverrideTimerField() { return *GetNativePointerField<float*>(this, "APrimalCharacter.AnimSharingOverrideTimer"); }
	int& PreventSavingCharOnlyDamageTargetingTeamField() { return *GetNativePointerField<int*>(this, "APrimalCharacter.PreventSavingCharOnlyDamageTargetingTeam"); }
	int& PlayerNumUnderGroundFailField() { return *GetNativePointerField<int*>(this, "APrimalCharacter.PlayerNumUnderGroundFail"); }
	double& LastMeshingCheckTimeField() { return *GetNativePointerField<double*>(this, "APrimalCharacter.LastMeshingCheckTime"); }
	bool& bIsAnimSharingField() { return *GetNativePointerField<bool*>(this, "APrimalCharacter.bIsAnimSharing"); }
	bool& bIsMassMovingField() { return *GetNativePointerField<bool*>(this, "APrimalCharacter.bIsMassMoving"); }
	bool& bExpensiveClientPredictionField() { return *GetNativePointerField<bool*>(this, "APrimalCharacter.bExpensiveClientPrediction"); }
	unsigned char& TribeGroupInventoryRankField() { return *GetNativePointerField<unsigned char*>(this, "APrimalCharacter.TribeGroupInventoryRank"); }
	float& PrimalAnimRootMotionTranslationScaleField() { return *GetNativePointerField<float*>(this, "APrimalCharacter.PrimalAnimRootMotionTranslationScale"); }
	float& StartWaveLockingThresholdField() { return *GetNativePointerField<float*>(this, "APrimalCharacter.StartWaveLockingThreshold"); }
	bool& bWasUsingStencilValuesField() { return *GetNativePointerField<bool*>(this, "APrimalCharacter.bWasUsingStencilValues"); }
	bool& bIsJumpingToAquariumLedgeField() { return *GetNativePointerField<bool*>(this, "APrimalCharacter.bIsJumpingToAquariumLedge"); }
	double& LastTimeUnconsciousField() { return *GetNativePointerField<double*>(this, "APrimalCharacter.LastTimeUnconscious"); }
	double& LastNotRenderedTimeField() { return *GetNativePointerField<double*>(this, "APrimalCharacter.LastNotRenderedTime"); }
	int& InitializedUseFixedSkelBoundsField() { return *GetNativePointerField<int*>(this, "APrimalCharacter.InitializedUseFixedSkelBounds"); }
	float& AnimUROChangedTransformTimerField() { return *GetNativePointerField<float*>(this, "APrimalCharacter.AnimUROChangedTransformTimer"); }
	double& RemainingThrallAttackDecisionDurationField() { return *GetNativePointerField<double*>(this, "APrimalCharacter.RemainingThrallAttackDecisionDuration"); }
	double& LastTimeTaggedFriendlyStructuresField() { return *GetNativePointerField<double*>(this, "APrimalCharacter.LastTimeTaggedFriendlyStructures"); }
	bool& bMassMeshSmoothInitializedField() { return *GetNativePointerField<bool*>(this, "APrimalCharacter.bMassMeshSmoothInitialized"); }
	bool& bEndingClientCorpseMotionField() { return *GetNativePointerField<bool*>(this, "APrimalCharacter.bEndingClientCorpseMotion"); }
	bool& bClientCorpseConsumedField() { return *GetNativePointerField<bool*>(this, "APrimalCharacter.bClientCorpseConsumed"); }

	FPrimalCharacterSparseClassData* GetMutablePrimalCharacterSparseClassData() { return const_cast<FPrimalCharacterSparseClassData*>(GetPrimalCharacterSparseClassData(EGetSparseClassDataMethod::CreateIfNull)); }

	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("APrimalCharacter"); }

	FVelocityBasedCharacterSoundInfo& VelocityBasedEnteredSwimmingSoundsField() { return *GetNativePointerField<FVelocityBasedCharacterSoundInfo*>(this, "APrimalCharacter.VelocityBasedEnteredSwimmingSounds"); }
	FPrimalPropertyBag& PropertyBagField() { return *GetNativePointerField<FPrimalPropertyBag*>(this, "APrimalCharacter.PropertyBag"); }
	TArray<int, TSizedDefaultAllocator<32> >& BoneIndexArrayForDataChannelVFXField() { return *GetNativePointerField<TArray<int, TSizedDefaultAllocator<32> >*>(this, "APrimalCharacter.BoneIndexArrayForDataChannelVFX"); }
	TArray<float, TSizedDefaultAllocator<32> >& BoneScaleArrayForDataChannelVFXField() { return *GetNativePointerField<TArray<float, TSizedDefaultAllocator<32> >*>(this, "APrimalCharacter.BoneScaleArrayForDataChannelVFX"); }
	const UNiagaraDataChannelAsset*& DataChannelForSkeletonVFXField() { return *GetNativePointerField<const UNiagaraDataChannelAsset**>(this, "APrimalCharacter.DataChannelForSkeletonVFX"); }
	FVelocityBasedCharacterSoundInfo& VelocityBasedLandedSoundsField() { return *GetNativePointerField<FVelocityBasedCharacterSoundInfo*>(this, "APrimalCharacter.VelocityBasedLandedSounds"); }
	UE::Math::TVector<double>& PreviousUnderCheckLocationField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "APrimalCharacter.PreviousUnderCheckLocation"); }
	FPrimalCharacterDied& OnDiedField() { return *GetNativePointerField<FPrimalCharacterDied*>(this, "APrimalCharacter.OnDied"); }
	FPrimalCharacterNotifyDamage& OnNotifyDamageField() { return *GetNativePointerField<FPrimalCharacterNotifyDamage*>(this, "APrimalCharacter.OnNotifyDamage"); }
	FPrimalCharacterSleepStateChanged& OnSleepStateChangedField() { return *GetNativePointerField<FPrimalCharacterSleepStateChanged*>(this, "APrimalCharacter.OnSleepStateChanged"); }
	FPrimalCharacterNotifyLevelUp& NotifyLevelUpField() { return *GetNativePointerField<FPrimalCharacterNotifyLevelUp*>(this, "APrimalCharacter.NotifyLevelUp"); }
	FPrimalCharacterNotifyUnstasis& NotifyUnstasisField() { return *GetNativePointerField<FPrimalCharacterNotifyUnstasis*>(this, "APrimalCharacter.NotifyUnstasis"); }
	FPrimalCharacterNotifyStasis& NotifyStasisField() { return *GetNativePointerField<FPrimalCharacterNotifyStasis*>(this, "APrimalCharacter.NotifyStasis"); }
	FPrimalCharacterInputNotify& NotifyInputEventField() { return *GetNativePointerField<FPrimalCharacterInputNotify*>(this, "APrimalCharacter.NotifyInputEvent"); }
	FOnOrbitCameraViewChange& OnOrbitCameraViewChangeField() { return *GetNativePointerField<FOnOrbitCameraViewChange*>(this, "APrimalCharacter.OnOrbitCameraViewChange"); }
	FPrimalCharacterEQSQueryComplete& OnEQSQueryCompleteDelField() { return *GetNativePointerField<FPrimalCharacterEQSQueryComplete*>(this, "APrimalCharacter.OnEQSQueryCompleteDel"); }
	UE::Math::TVector<double>& MeshTeleportInterpOffsetField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "APrimalCharacter.MeshTeleportInterpOffset"); }
	UE::Math::TVector<double>& MeshTeleportInterpBaseRelativeLocationField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "APrimalCharacter.MeshTeleportInterpBaseRelativeLocation"); }
	FTimerHandle& ApplyBiomeZoneBuffHandleField() { return *GetNativePointerField<FTimerHandle*>(this, "APrimalCharacter.ApplyBiomeZoneBuffHandle"); }
	FTimerHandle& UnpauseAnimSharingHandleField() { return *GetNativePointerField<FTimerHandle*>(this, "APrimalCharacter.UnpauseAnimSharingHandle"); }
	TWeakObjectPtr<APrimalCharacter, FWeakObjectPtr>& BoardedUnderWaterCharacterField() { return *GetNativePointerField<TWeakObjectPtr<APrimalCharacter, FWeakObjectPtr>*>(this, "APrimalCharacter.BoardedUnderWaterCharacter"); }
	TWeakObjectPtr<APrimalDinoCharacter, FWeakObjectPtr>& LastBasedOnDinoField() { return *GetNativePointerField<TWeakObjectPtr<APrimalDinoCharacter, FWeakObjectPtr>*>(this, "APrimalCharacter.LastBasedOnDino"); }
	TWeakObjectPtr<UPrimitiveComponent, FWeakObjectPtr>& LastBasedOnDinoComponentField() { return *GetNativePointerField<TWeakObjectPtr<UPrimitiveComponent, FWeakObjectPtr>*>(this, "APrimalCharacter.LastBasedOnDinoComponent"); }
	TWeakObjectPtr<APrimalDinoCharacter, FWeakObjectPtr>& PreviousSecondaryMountedDinoField() { return *GetNativePointerField<TWeakObjectPtr<APrimalDinoCharacter, FWeakObjectPtr>*>(this, "APrimalCharacter.PreviousSecondaryMountedDino"); }
	FMassEntityHandle& EntityHandleField() { return *GetNativePointerField<FMassEntityHandle*>(this, "APrimalCharacter.EntityHandle"); }
	UAnimMontage*& MouthFlapAnimField() { return *GetNativePointerField<UAnimMontage**>(this, "APrimalCharacter.MouthFlapAnim"); }
	UAnimMontage*& CombatIdleField() { return *GetNativePointerField<UAnimMontage**>(this, "APrimalCharacter.CombatIdle"); }
	USoundClass*& MouthFlapSoundClassField() { return *GetNativePointerField<USoundClass**>(this, "APrimalCharacter.MouthFlapSoundClass"); }
	UNiagaraSystem*& HurtFX_NiagaraField() { return *GetNativePointerField<UNiagaraSystem**>(this, "APrimalCharacter.HurtFX_Niagara"); }
	TArray<int, TSizedDefaultAllocator<32> >& MirroredUPaintingIndicesField() { return *GetNativePointerField<TArray<int, TSizedDefaultAllocator<32> >*>(this, "APrimalCharacter.MirroredUPaintingIndices"); }
	UPrimalCameraConfig*& CurrentPrimalCameraConfigField() { return *GetNativePointerField<UPrimalCameraConfig**>(this, "APrimalCharacter.CurrentPrimalCameraConfig"); }
	UE::Math::TVector<double>& LastMeshingCheckLocationField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "APrimalCharacter.LastMeshingCheckLocation"); }
	EVisibilityBasedAnimTickOption& PreDragComponentUpdateFlagField() { return *GetNativePointerField<EVisibilityBasedAnimTickOption*>(this, "APrimalCharacter.PreDragComponentUpdateFlag"); }
	TEnumAsByte<EPrimalEquipmentType::Type>& CostumeEquipmentSlotTypeField() { return *GetNativePointerField<TEnumAsByte<EPrimalEquipmentType::Type>*>(this, "APrimalCharacter.CostumeEquipmentSlotType"); }
	APrimalReverseVacuumCompartment*& LastReverseVacuumCompartmentField() { return *GetNativePointerField<APrimalReverseVacuumCompartment**>(this, "APrimalCharacter.LastReverseVacuumCompartment"); }
	UE::Math::TVector<double>& LastUnconsciousPositionField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "APrimalCharacter.LastUnconsciousPosition"); }
	UE::Math::TVector<double>& MassMeshSmoothOffsetField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "APrimalCharacter.MassMeshSmoothOffset"); }
	UE::Math::TVector<double>& LastMassReplicatedActorLocationField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "APrimalCharacter.LastMassReplicatedActorLocation"); }
	UE::Math::TVector<double>& MassMeshSmoothBaseRelativeLocationField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "APrimalCharacter.MassMeshSmoothBaseRelativeLocation"); }
	TWeakObjectPtr<UPrimalCorpseMotionComponent, FWeakObjectPtr>& ClientCorpseMotionOwnerField() { return *GetNativePointerField<TWeakObjectPtr<UPrimalCorpseMotionComponent, FWeakObjectPtr>*>(this, "APrimalCharacter.ClientCorpseMotionOwner"); }
	TWeakObjectPtr<APrimalCharacter, FWeakObjectPtr>& PendingClientCorpseDraggerField() { return *GetNativePointerField<TWeakObjectPtr<APrimalCharacter, FWeakObjectPtr>*>(this, "APrimalCharacter.PendingClientCorpseDragger"); }
	BitFieldValue<bool, unsigned char> bIfAmphibiousCountAsLandDinoForNPCVolumes() { return { this, "APrimalCharacter.bIfAmphibiousCountAsLandDinoForNPCVolumes"}; }
	BitFieldValue<bool, unsigned char> bIsSecondaryMounted() { return { this, "APrimalCharacter.bIsSecondaryMounted"}; }
	BitFieldValue<bool, unsigned char> LastIsInsideReverseVaccumSealedCube() { return { this, "APrimalCharacter.LastIsInsideReverseVaccumSealedCube"}; }
	BitFieldValue<bool, unsigned char> LastIsInsideReverseVaccumSealedCubeOnDino() { return { this, "APrimalCharacter.LastIsInsideReverseVaccumSealedCubeOnDino"}; }
	BitFieldValue<bool, unsigned char> LastIsInsideInActiveReverseVaccumSealedCube() { return { this, "APrimalCharacter.LastIsInsideInActiveReverseVaccumSealedCube"}; }
	BitFieldValue<bool, unsigned char> LastIsInsideInActiveReverseVaccumSealedCubeOnDino() { return { this, "APrimalCharacter.LastIsInsideInActiveReverseVaccumSealedCubeOnDino"}; }
	BitFieldValue<bool, unsigned char> bPreventAnimationUpdateRateOptimizations() { return { this, "APrimalCharacter.bPreventAnimationUpdateRateOptimizations"}; }
	BitFieldValue<bool, unsigned char> bEnableMouthFlapAnimations() { return { this, "APrimalCharacter.bEnableMouthFlapAnimations"}; }
	BitFieldValue<bool, unsigned char> bReplicatedIsSubmerged() { return { this, "APrimalCharacter.bReplicatedIsSubmerged"}; }
	BitFieldValue<bool, unsigned char> bUseBPForceKeepBasedOnDino() { return { this, "APrimalCharacter.bUseBPForceKeepBasedOnDino"}; }
	BitFieldValue<bool, unsigned char> bAccurateOceanVolumeOverlaps() { return { this, "APrimalCharacter.bAccurateOceanVolumeOverlaps"}; }
	BitFieldValue<bool, unsigned char> bPreventDynamicMusic() { return { this, "APrimalCharacter.bPreventDynamicMusic"}; }
	BitFieldValue<bool, unsigned char> bAllowTeleportMeshInterp() { return { this, "APrimalCharacter.bAllowTeleportMeshInterp"}; }
	BitFieldValue<bool, unsigned char> bFellOutOfWorld() { return { this, "APrimalCharacter.bFellOutOfWorld"}; }
	BitFieldValue<bool, unsigned char> bPreventUpdatingPhysAnim() { return { this, "APrimalCharacter.bPreventUpdatingPhysAnim"}; }
	UE::Math::TRotator<double>* GetDraggedRotation(UE::Math::TRotator<double>* result, APrimalCharacter* Dragger) { return NativeCall<UE::Math::TRotator<double>*, UE::Math::TRotator<double>*, APrimalCharacter*>(this, "APrimalCharacter.GetDraggedRotation(APrimalCharacter*)", result, Dragger); }
	bool BPHandlePoop() { return NativeCall<bool>(this, "APrimalCharacter.BPHandlePoop()"); }
	static void SetbIsHost_WrapperImpl(void* Object, const void* InValue) { NativeCall<void, void*, const void*>(nullptr, "APrimalCharacter.SetbIsHost_WrapperImpl(void*,void*)", Object, InValue); }
	void ModifyFirstPersonCameraLocation(UE::Math::TVector<double>& Loc, float DeltaTime) { NativeCall<void, UE::Math::TVector<double>&, float>(this, "APrimalCharacter.ModifyFirstPersonCameraLocation(UE::Math::TVector<double>&,float)", Loc, DeltaTime); }
	bool BP_ModifySavedMoveAcceleration_PostRep(UE::Math::TVector<double>& ModifyServerAccel) { return NativeCall<bool, UE::Math::TVector<double>&>(this, "APrimalCharacter.BP_ModifySavedMoveAcceleration_PostRep(UE::Math::TVector<double>&)", ModifyServerAccel); }
	static void SetbHasDynamicBase_WrapperImpl(void* Object, const void* InValue) { NativeCall<void, void*, const void*>(nullptr, "APrimalCharacter.SetbHasDynamicBase_WrapperImpl(void*,void*)", Object, InValue); }
	bool CameraCheckIsMoving(const APrimalCharacter* CharForConditionChecks) { return NativeCall<bool, const APrimalCharacter*>(this, "APrimalCharacter.CameraCheckIsMoving(APrimalCharacter*)", CharForConditionChecks); }
	void ClientDidPoop() { NativeCall<void>(this, "APrimalCharacter.ClientDidPoop()"); }
	void ApplyCharacterSnapshotEquipment(UPrimalInventoryComponent* Inventory, AActor* To) { NativeCall<void, UPrimalInventoryComponent*, AActor*>(this, "APrimalCharacter.ApplyCharacterSnapshotEquipment(UPrimalInventoryComponent*,AActor*)", Inventory, To); }
	void BPCharacterSleeped() { NativeCall<void>(this, "APrimalCharacter.BPCharacterSleeped()"); }
	bool DontForceUpdateRateOptimizations() { return NativeCall<bool>(this, "APrimalCharacter.DontForceUpdateRateOptimizations()"); }
	bool BPPreventStasis() { return NativeCall<bool>(this, "APrimalCharacter.BPPreventStasis()"); }
	static void SetbIsBeingDragged_WrapperImpl(void* Object, const void* InValue) { NativeCall<void, void*, const void*>(nullptr, "APrimalCharacter.SetbIsBeingDragged_WrapperImpl(void*,void*)", Object, InValue); }
	void BPOnMassTeleportEvent(EMassTeleportState::Type EventState, const APrimalCharacter* TeleportInitiatedByChar) { NativeCall<void, EMassTeleportState::Type, const APrimalCharacter*>(this, "APrimalCharacter.BPOnMassTeleportEvent(EMassTeleportState::Type,APrimalCharacter*)", EventState, TeleportInitiatedByChar); }
	void NetOnJumped() { NativeCall<void>(this, "APrimalCharacter.NetOnJumped()"); }
	static void SetCorpseDestructionTime_WrapperImpl(void* Object, const void* InValue) { NativeCall<void, void*, const void*>(nullptr, "APrimalCharacter.SetCorpseDestructionTime_WrapperImpl(void*,void*)", Object, InValue); }
	static void GetbHasDynamicBase_WrapperImpl(const void* Object, void* OutValue) { NativeCall<void, const void*, void*>(nullptr, "APrimalCharacter.GetbHasDynamicBase_WrapperImpl(void*,void*)", Object, OutValue); }
	UE::Math::TVector<double>* GetTargetPathfindingLocation(UE::Math::TVector<double>* result, const AActor* Attacker) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*, const AActor*>(this, "APrimalCharacter.GetTargetPathfindingLocation(AActor*)", result, Attacker); }
	void EnableBodiesGravity() { NativeCall<void>(this, "APrimalCharacter.EnableBodiesGravity()"); }
	static void SetAnimSharingState_WrapperImpl(void* Object, const void* InValue) { NativeCall<void, void*, const void*>(nullptr, "APrimalCharacter.SetAnimSharingState_WrapperImpl(void*,void*)", Object, InValue); }
	void BPNotifyBumpedPawn(APrimalCharacter* BumpedPawn) { NativeCall<void, APrimalCharacter*>(this, "APrimalCharacter.BPNotifyBumpedPawn(APrimalCharacter*)", BumpedPawn); }
	APrimalShip* GetShip() { return NativeCall<APrimalShip*>(this, "APrimalCharacter.GetShip()"); }
	static void SetbReplicatedIsSubmerged_WrapperImpl(void* Object, const void* InValue) { NativeCall<void, void*, const void*>(nullptr, "APrimalCharacter.SetbReplicatedIsSubmerged_WrapperImpl(void*,void*)", Object, InValue); }
	bool IsBossDino() { return NativeCall<bool>(this, "APrimalCharacter.IsBossDino()"); }
	bool GetCurrentCameraProfile(FPrimalCameraProfile& OutCameraProfile) { return NativeCall<bool, FPrimalCameraProfile&>(this, "APrimalCharacter.GetCurrentCameraProfile(FPrimalCameraProfile&)", OutCameraProfile); }
	void BPSuicide() { NativeCall<void>(this, "APrimalCharacter.BPSuicide()"); }
	float BPGetGravityZScale() { return NativeCall<float>(this, "APrimalCharacter.BPGetGravityZScale()"); }
	void UpdateWeaponHandIK() { NativeCall<void>(this, "APrimalCharacter.UpdateWeaponHandIK()"); }
	static void GetPaintingComponent_WrapperImpl(const void* Object, void* OutValue) { NativeCall<void, const void*, void*>(nullptr, "APrimalCharacter.GetPaintingComponent_WrapperImpl(void*,void*)", Object, OutValue); }
	bool AllowDinoTargetingRange(const UE::Math::TVector<double>& AtLoc, float TargetingRange, APrimalDinoCharacter* ByDino) { return NativeCall<bool, const UE::Math::TVector<double>&, float, APrimalDinoCharacter*>(this, "APrimalCharacter.AllowDinoTargetingRange(UE::Math::TVector<double>&,float,APrimalDinoCharacter*)", AtLoc, TargetingRange, ByDino); }
	static void SetReplicatedMaxHealth_WrapperImpl(void* Object, const void* InValue) { NativeCall<void, void*, const void*>(nullptr, "APrimalCharacter.SetReplicatedMaxHealth_WrapperImpl(void*,void*)", Object, InValue); }
	bool IsRemoteDino() { return NativeCall<bool>(this, "APrimalCharacter.IsRemoteDino()"); }
	bool ShouldUseDurabilityVar(int VarIndex) { return NativeCall<bool, int>(this, "APrimalCharacter.ShouldUseDurabilityVar(int)", VarIndex); }
	void BPTriggerStasisEvent() { NativeCall<void>(this, "APrimalCharacter.BPTriggerStasisEvent()"); }
	TArray<USoundBase*, TSizedDefaultAllocator<32> >* GetLandedSoundsPhysMat(TArray<USoundBase*, TSizedDefaultAllocator<32> >* result) { return NativeCall<TArray<USoundBase*, TSizedDefaultAllocator<32> >*, TArray<USoundBase*, TSizedDefaultAllocator<32> >*>(this, "APrimalCharacter.GetLandedSoundsPhysMat()", result); }
	void AnimNotifyCustomState_Tick(FName CustomEventName, USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, float FrameDeltaTime, const UAnimNotifyState* AnimNotifyObject) { NativeCall<void, FName, USkeletalMeshComponent*, UAnimSequenceBase*, float, const UAnimNotifyState*>(this, "APrimalCharacter.AnimNotifyCustomState_Tick(FName,USkeletalMeshComponent*,UAnimSequenceBase*,float,UAnimNotifyState*)", CustomEventName, MeshComp, Animation, FrameDeltaTime, AnimNotifyObject); }
	float BPModifyFOV(float FOVIn) { return NativeCall<float, float>(this, "APrimalCharacter.BPModifyFOV(float)", FOVIn); }
	void SetBoundsScale(float NewScale) { NativeCall<void, float>(this, "APrimalCharacter.SetBoundsScale(float)", NewScale); }
	void BPOnSimulatedTick(float DeltaSeconds) { NativeCall<void, float>(this, "APrimalCharacter.BPOnSimulatedTick(float)", DeltaSeconds); }
	FString* BPGetDebugInfoString(FString* result) { return NativeCall<FString*, FString*>(this, "APrimalCharacter.BPGetDebugInfoString()", result); }
	void BPNotifyInventoryItemChange(bool bIsItemAdd, UPrimalItem* theItem, bool bEquipItem) { NativeCall<void, bool, UPrimalItem*, bool>(this, "APrimalCharacter.BPNotifyInventoryItemChange(bool,UPrimalItem*,bool)", bIsItemAdd, theItem, bEquipItem); }
	bool BPIsBlockedByShield(const FHitResult& HitInfo, const UE::Math::TVector<double>& ShotDirection, bool bBlockAllPointDamage) { return NativeCall<bool, const FHitResult&, const UE::Math::TVector<double>&, bool>(this, "APrimalCharacter.BPIsBlockedByShield(FHitResult&,UE::Math::TVector<double>&,bool)", HitInfo, ShotDirection, bBlockAllPointDamage); }
	bool AllowDynamicMusic(AShooterPlayerController* spc) { return NativeCall<bool, AShooterPlayerController*>(this, "APrimalCharacter.AllowDynamicMusic(AShooterPlayerController*)", spc); }
	void BuffsInterceptItemSlotUse(int Index, bool bIsRelease) { NativeCall<void, int, bool>(this, "APrimalCharacter.BuffsInterceptItemSlotUse(int,bool)", Index, bIsRelease); }
	UE::Math::TVector<double>* GetTetheredVelocity(UE::Math::TVector<double>* result, const UE::Math::TVector<double>& RequestedVelocity, float DeltaSeconds) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*, const UE::Math::TVector<double>&, float>(this, "APrimalCharacter.GetTetheredVelocity(UE::Math::TVector<double>&,float)", result, RequestedVelocity, DeltaSeconds); }
	static void ForceUpdateAimedCharacters_Single(UWorld* World, const UE::Math::TVector<double>& StartLoc, const UE::Math::TVector<double>& EndLoc, AActor* IgnoreActor, bool bForceUpdateIgnoreActor, float TraceRadius, bool bOnlyRefreshRelevancyValues) { NativeCall<void, UWorld*, const UE::Math::TVector<double>&, const UE::Math::TVector<double>&, AActor*, bool, float, bool>(nullptr, "APrimalCharacter.ForceUpdateAimedCharacters_Single(UWorld*,UE::Math::TVector<double>&,UE::Math::TVector<double>&,AActor*,bool,float,bool)", World, StartLoc, EndLoc, IgnoreActor, bForceUpdateIgnoreActor, TraceRadius, bOnlyRefreshRelevancyValues); }
	bool AllowUpdatingPhysAnim() { return NativeCall<bool>(this, "APrimalCharacter.AllowUpdatingPhysAnim()"); }
	bool BPCanBaseOnCharacter(APrimalCharacter* BaseCharacter) { return NativeCall<bool, APrimalCharacter*>(this, "APrimalCharacter.BPCanBaseOnCharacter(APrimalCharacter*)", BaseCharacter); }
	void NetSetReplicatedDeathAnim(UAnimationAsset* Anim) { NativeCall<void, UAnimationAsset*>(this, "APrimalCharacter.NetSetReplicatedDeathAnim(UAnimationAsset*)", Anim); }
	float GetCarryingSocketYaw(bool RefreshBones) { return NativeCall<float, bool>(this, "APrimalCharacter.GetCarryingSocketYaw(bool)", RefreshBones); }
	float BPModifyXPMultiplier(float OriginalXPMultiplier) { return NativeCall<float, float>(this, "APrimalCharacter.BPModifyXPMultiplier(float)", OriginalXPMultiplier); }
	void RegisterWithManagers() { NativeCall<void>(this, "APrimalCharacter.RegisterWithManagers()"); }
	void TargetedBy(APrimalDinoCharacter* AttackerDino) { NativeCall<void, APrimalDinoCharacter*>(this, "APrimalCharacter.TargetedBy(APrimalDinoCharacter*)", AttackerDino); }
	void SetUseOptimizedPhysWalkingChecks(bool bEnable) { NativeCall<void, bool>(this, "APrimalCharacter.SetUseOptimizedPhysWalkingChecks(bool)", bEnable); }
	static void GetbIsDragging_WrapperImpl(const void* Object, void* OutValue) { NativeCall<void, const void*, void*>(nullptr, "APrimalCharacter.GetbIsDragging_WrapperImpl(void*,void*)", Object, OutValue); }
	static void SetbWasBeingDragged_WrapperImpl(void* Object, const void* InValue) { NativeCall<void, void*, const void*>(nullptr, "APrimalCharacter.SetbWasBeingDragged_WrapperImpl(void*,void*)", Object, InValue); }
	bool IsSitting(bool bIgnoreLockedToSeat) { return NativeCall<bool, bool>(this, "APrimalCharacter.IsSitting(bool)", bIgnoreLockedToSeat); }
	void OverrideSwimmingAcceleration(UE::Math::TVector<double>& ModifyAcceleration, float DeltaTime) { NativeCall<void, UE::Math::TVector<double>&, float>(this, "APrimalCharacter.OverrideSwimmingAcceleration(UE::Math::TVector<double>&,float)", ModifyAcceleration, DeltaTime); }
	void ServerCallPassive_Implementation() { NativeCall<void>(this, "APrimalCharacter.ServerCallPassive_Implementation()"); }
	UE::Math::TVector<double>* BPOverrideCharacterNewFallVelocity(UE::Math::TVector<double>* result, const UE::Math::TVector<double>& InitialVelocity, const UE::Math::TVector<double>& Gravity, float DeltaTime) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*, const UE::Math::TVector<double>&, const UE::Math::TVector<double>&, float>(this, "APrimalCharacter.BPOverrideCharacterNewFallVelocity(UE::Math::TVector<double>&,UE::Math::TVector<double>&,float)", result, InitialVelocity, Gravity, DeltaTime); }
	void OnStopFire_Code(bool InterceptInput) { NativeCall<void, bool>(this, "APrimalCharacter.OnStopFire_Code(bool)", InterceptInput); }
	void ApplyMaterailDamageEffect(float DeltaSeconds) { NativeCall<void, float>(this, "APrimalCharacter.ApplyMaterailDamageEffect(float)", DeltaSeconds); }
	bool ShouldDealDamageTo(APrimalCharacter* OtherCharacter, bool bAllowDamageToSelf, bool bAllowDamageToTribe, bool bAllowDamageToAlliedTribes) { return NativeCall<bool, APrimalCharacter*, bool, bool, bool>(this, "APrimalCharacter.ShouldDealDamageTo(APrimalCharacter*,bool,bool,bool)", OtherCharacter, bAllowDamageToSelf, bAllowDamageToTribe, bAllowDamageToAlliedTribes); }
	static void GetReplicatedMaxHealth_WrapperImpl(const void* Object, void* OutValue) { NativeCall<void, const void*, void*>(nullptr, "APrimalCharacter.GetReplicatedMaxHealth_WrapperImpl(void*,void*)", Object, OutValue); }
	void SetMyInventoryComponent(UPrimalInventoryComponent* theInventoryComponent) { NativeCall<void, UPrimalInventoryComponent*>(this, "APrimalCharacter.SetMyInventoryComponent(UPrimalInventoryComponent*)", theInventoryComponent); }
	void OnRep_ReplicatedIsSubmerged() { NativeCall<void>(this, "APrimalCharacter.OnRep_ReplicatedIsSubmerged()"); }
	void GetAllBuffs(TArray<APrimalBuff*, TSizedDefaultAllocator<32> >& AllBuffs) { NativeCall<void, TArray<APrimalBuff*, TSizedDefaultAllocator<32> >&>(this, "APrimalCharacter.GetAllBuffs(TArray<APrimalBuff*,TSizedDefaultAllocator<32>>&)", AllBuffs); }
	bool GetPrimalCameraParamsFromSettings(FPrimalCameraParams& OutCameraParams, const FPrimalCameraSettings& FromCameraSettings, const APrimalCharacter* CharForConditionChecks) { return NativeCall<bool, FPrimalCameraParams&, const FPrimalCameraSettings&, const APrimalCharacter*>(this, "APrimalCharacter.GetPrimalCameraParamsFromSettings(FPrimalCameraParams&,FPrimalCameraSettings&,APrimalCharacter*)", OutCameraParams, FromCameraSettings, CharForConditionChecks); }
	UE::Math::TVector<double>* BPModifyForwardDirectionInput(UE::Math::TVector<double>* result, const UE::Math::TVector<double>& directionInput) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*, const UE::Math::TVector<double>&>(this, "APrimalCharacter.BPModifyForwardDirectionInput(UE::Math::TVector<double>&)", result, directionInput); }
	bool BP_ShouldDisableCameraInterpolation() { return NativeCall<bool>(this, "APrimalCharacter.BP_ShouldDisableCameraInterpolation()"); }
	static void SetBoardedUnderWaterCharacter_WrapperImpl(void* Object, const void* InValue) { NativeCall<void, void*, const void*>(nullptr, "APrimalCharacter.SetBoardedUnderWaterCharacter_WrapperImpl(void*,void*)", Object, InValue); }
	float GetCharacterAdditionalHyperthermiaInsulationValue() { return NativeCall<float>(this, "APrimalCharacter.GetCharacterAdditionalHyperthermiaInsulationValue()"); }
	bool IsHostileOrAggressiveTo(APrimalCharacter* OtherCharacter) { return NativeCall<bool, APrimalCharacter*>(this, "APrimalCharacter.IsHostileOrAggressiveTo(APrimalCharacter*)", OtherCharacter); }
	bool BPAllowEncroachment(AShooterCharacter* MyChar) { return NativeCall<bool, AShooterCharacter*>(this, "APrimalCharacter.BPAllowEncroachment(AShooterCharacter*)", MyChar); }
	UE::Math::TVector<double>* CalculateLookAtHeadLocation(UE::Math::TVector<double>* result) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*>(this, "APrimalCharacter.CalculateLookAtHeadLocation()", result); }
	UE::Math::TVector<double>* BPModifyRightDirectionInput(UE::Math::TVector<double>* result, const UE::Math::TVector<double>& directionInput) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*, const UE::Math::TVector<double>&>(this, "APrimalCharacter.BPModifyRightDirectionInput(UE::Math::TVector<double>&)", result, directionInput); }
	bool AllowPlayMontage_Implementation(UAnimMontage* AnimMontage) { return NativeCall<bool, UAnimMontage*>(this, "APrimalCharacter.AllowPlayMontage_Implementation(UAnimMontage*)", AnimMontage); }
	bool BPAllowMovementModeNoneFixes() { return NativeCall<bool>(this, "APrimalCharacter.BPAllowMovementModeNoneFixes()"); }
	void UnregisterWithManagers() { NativeCall<void>(this, "APrimalCharacter.UnregisterWithManagers()"); }
	void BPNetSetCharacterMovementVelocity_WithLocationOfImpulse(bool bSetNewVelocity, UE::Math::TVector<double>* NewVelocity, bool bSetNewMovementMode, EMovementMode NewMovementMode, UE::Math::TVector<double>* LocationOfImpulse) { if (!NewVelocity) throw std::invalid_argument("Null native value parameter"); if (!LocationOfImpulse) throw std::invalid_argument("Null native value parameter"); return NativeCall<void, bool, UE :: Math :: TVector < double >, bool, EMovementMode, UE :: Math :: TVector < double >>(this, "APrimalCharacter.BPNetSetCharacterMovementVelocity_WithLocationOfImpulse(bool,UE::Math::TVector<double>,bool,EMovementMode,UE::Math::TVector<double>)", bSetNewVelocity, *NewVelocity, bSetNewMovementMode, NewMovementMode, *LocationOfImpulse); }
	void BPCheckJumpInput(bool& bUseCustomErrorMessage, FString& ErrorMessageToDisplay) { NativeCall<void, bool&, FString&>(this, "APrimalCharacter.BPCheckJumpInput(bool&,FString&)", bUseCustomErrorMessage, ErrorMessageToDisplay); }
	void OnStartFire_Code(bool InterceptInput) { NativeCall<void, bool>(this, "APrimalCharacter.OnStartFire_Code(bool)", InterceptInput); }
	bool ShouldUseAnimationUpdateRateOptimizations() { return NativeCall<bool>(this, "APrimalCharacter.ShouldUseAnimationUpdateRateOptimizations()"); }
	float GetCharacterAdditionalHypothermiaInsulationValue() { return NativeCall<float>(this, "APrimalCharacter.GetCharacterAdditionalHypothermiaInsulationValue()"); }
	bool IsRaft() { return NativeCall<bool>(this, "APrimalCharacter.IsRaft()"); }
	bool GetPrimalCameraPivotInterpParams(const FPrimalCameraProfile* ForCameraProfile, const FPrimalCameraParams* ForCameraParams, const FPrimalCameraInterpParams& LastInterpParamsX, const FPrimalCameraInterpParams& LastInterpParamsY, const FPrimalCameraInterpParams& LastInterpParamsZ, FPrimalCameraInterpParams& OutParamsX, FPrimalCameraInterpParams& OutParamsY, FPrimalCameraInterpParams& OutParamsZ) { return NativeCall<bool, const FPrimalCameraProfile*, const FPrimalCameraParams*, const FPrimalCameraInterpParams&, const FPrimalCameraInterpParams&, const FPrimalCameraInterpParams&, FPrimalCameraInterpParams&, FPrimalCameraInterpParams&, FPrimalCameraInterpParams&>(this, "APrimalCharacter.GetPrimalCameraPivotInterpParams(FPrimalCameraProfile*,FPrimalCameraParams*,FPrimalCameraInterpParams&,FPrimalCameraInterpParams&,FPrimalCameraInterpParams&,FPrimalCameraInterpParams&,FPrimalCameraInterpParams&,FPrimalCameraInterpParams&)", ForCameraProfile, ForCameraParams, LastInterpParamsX, LastInterpParamsY, LastInterpParamsZ, OutParamsX, OutParamsY, OutParamsZ); }
	UAnimMontage* BPOverridePlayAnimExMontage(UAnimMontage* InMontage, bool bReplicated) { return NativeCall<UAnimMontage*, UAnimMontage*, bool>(this, "APrimalCharacter.BPOverridePlayAnimExMontage(UAnimMontage*,bool)", InMontage, bReplicated); }
	bool IsVehicle() { return NativeCall<bool>(this, "APrimalCharacter.IsVehicle()"); }
	void BPDidTeleport_Implementation() { NativeCall<void>(this, "APrimalCharacter.BPDidTeleport_Implementation()"); }
	UE::Math::TVector<double>* GetTPVWeaponCameraOffset(UE::Math::TVector<double>* result) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*>(this, "APrimalCharacter.GetTPVWeaponCameraOffset()", result); }
	static void GetReplicatedCurrentTorpor_WrapperImpl(const void* Object, void* OutValue) { NativeCall<void, const void*, void*>(nullptr, "APrimalCharacter.GetReplicatedCurrentTorpor_WrapperImpl(void*,void*)", Object, OutValue); }
	void WasPushed(ACharacter* ByOtherCharacter, UE::Math::TVector<double>* PushDirection) { if (!PushDirection) throw std::invalid_argument("Null native value parameter"); return NativeCall<void, ACharacter *, UE :: Math :: TVector < double >>(this, "APrimalCharacter.WasPushed(ACharacter*,UE::Math::TVector<double>)", ByOtherCharacter, *PushDirection); }
	void UpdateRunSounds(bool bNewRunning) { NativeCall<void, bool>(this, "APrimalCharacter.UpdateRunSounds(bool)", bNewRunning); }
	void ServerCallStayOne_Implementation(APrimalDinoCharacter* ForDinoChar) { NativeCall<void, APrimalDinoCharacter*>(this, "APrimalCharacter.ServerCallStayOne_Implementation(APrimalDinoCharacter*)", ForDinoChar); }
	void UnregisterWithAnimSharing() { NativeCall<void>(this, "APrimalCharacter.UnregisterWithAnimSharing()"); }
	void SetMovementTether(AActor* InTetherActor, float Radius, float Height) { NativeCall<void, AActor*, float, float>(this, "APrimalCharacter.SetMovementTether(AActor*,float,float)", InTetherActor, Radius, Height); }
	bool IsInCombat(APrimalCharacter*& OutTarget) { return NativeCall<bool, APrimalCharacter*&>(this, "APrimalCharacter.IsInCombat(APrimalCharacter*&)", OutTarget); }
	float BPGetHUDOverrideBuffProgressBarPercent() { return NativeCall<float>(this, "APrimalCharacter.BPGetHUDOverrideBuffProgressBarPercent()"); }
	int GetExtraPaintingMeshCount_Implementation() { return NativeCall<int>(this, "APrimalCharacter.GetExtraPaintingMeshCount_Implementation()"); }
	float BPGetAddForwardVelocityOnJump() { return NativeCall<float>(this, "APrimalCharacter.BPGetAddForwardVelocityOnJump()"); }
	UE::Math::TVector<double>* GetDraggedRelativeLocation(UE::Math::TVector<double>* result) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*>(this, "APrimalCharacter.GetDraggedRelativeLocation()", result); }
	void BP_OnStartCarried(APrimalDinoCharacter* aDino) { NativeCall<void, APrimalDinoCharacter*>(this, "APrimalCharacter.BP_OnStartCarried(APrimalDinoCharacter*)", aDino); }
	UE::Math::TVector<double>* GetTPVCameraOffset(UE::Math::TVector<double>* result, bool bForASACamera) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*, bool>(this, "APrimalCharacter.GetTPVCameraOffset(bool)", result, bForASACamera); }
	UE::Math::TVector<double>* GetTPVCameraOffsetMultiplier(UE::Math::TVector<double>* result) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*>(this, "APrimalCharacter.GetTPVCameraOffsetMultiplier()", result); }
	float GetCapsuleHalfHeight(bool bScaled, bool bWithHemispheres) { return NativeCall<float, bool, bool>(this, "APrimalCharacter.GetCapsuleHalfHeight(bool,bool)", bScaled, bWithHemispheres); }
	void OnRep_DraggedCharacter() { NativeCall<void>(this, "APrimalCharacter.OnRep_DraggedCharacter()"); }
	void OnRep_BoardedUnderWaterCharacter() { NativeCall<void>(this, "APrimalCharacter.OnRep_BoardedUnderWaterCharacter()"); }
	void ReleaseSeatingStructureHandIK() { NativeCall<void>(this, "APrimalCharacter.ReleaseSeatingStructureHandIK()"); }
	void UnpauseAnimSharing() { NativeCall<void>(this, "APrimalCharacter.UnpauseAnimSharing()"); }
	static void GetPropertyBag_WrapperImpl(const void* Object, void* OutValue) { NativeCall<void, const void*, void*>(nullptr, "APrimalCharacter.GetPropertyBag_WrapperImpl(void*,void*)", Object, OutValue); }
	bool IsValidForStatusUpdate() { return NativeCall<bool>(this, "APrimalCharacter.IsValidForStatusUpdate()"); }
	bool ShouldUseAutonomousCorrectionOffset() { return NativeCall<bool>(this, "APrimalCharacter.ShouldUseAutonomousCorrectionOffset()"); }
	bool EnableTurnToFaceRotation() { return NativeCall<bool>(this, "APrimalCharacter.EnableTurnToFaceRotation()"); }
	bool GetCurrentPrimalCameraSettings(FPrimalCameraSettings& OutCameraSettings, const APrimalCharacter* CharForConditionChecks) { return NativeCall<bool, FPrimalCameraSettings&, const APrimalCharacter*>(this, "APrimalCharacter.GetCurrentPrimalCameraSettings(FPrimalCameraSettings&,APrimalCharacter*)", OutCameraSettings, CharForConditionChecks); }
	bool GiveKillExperience_Implementation() { return NativeCall<bool>(this, "APrimalCharacter.GiveKillExperience_Implementation()"); }
	void UpdateCarriedLocationAndRotation(float DeltaSeconds) { NativeCall<void, float>(this, "APrimalCharacter.UpdateCarriedLocationAndRotation(float)", DeltaSeconds); }
	static void SetTribeGroupInventoryRank_WrapperImpl(void* Object, const void* InValue) { NativeCall<void, void*, const void*>(nullptr, "APrimalCharacter.SetTribeGroupInventoryRank_WrapperImpl(void*,void*)", Object, InValue); }
	static void GetbIsHost_WrapperImpl(const void* Object, void* OutValue) { NativeCall<void, const void*, void*>(nullptr, "APrimalCharacter.GetbIsHost_WrapperImpl(void*,void*)", Object, OutValue); }
	void NetForceSleepRagdoll_Implementation() { NativeCall<void>(this, "APrimalCharacter.NetForceSleepRagdoll_Implementation()"); }
	UAnimationAsset* GetDeathAnim(float KillingDamage, const UE::Math::TVector<double>& ImpactVelocity, APawn* InstigatingPawn, AActor* DamageCauser) { return NativeCall<UAnimationAsset*, float, const UE::Math::TVector<double>&, APawn*, AActor*>(this, "APrimalCharacter.GetDeathAnim(float,UE::Math::TVector<double>&,APawn*,AActor*)", KillingDamage, ImpactVelocity, InstigatingPawn, DamageCauser); }
	bool CanProneInternal() { return NativeCall<bool>(this, "APrimalCharacter.CanProneInternal()"); }
	void PlaySpawnIntro() { NativeCall<void>(this, "APrimalCharacter.PlaySpawnIntro()"); }
	static void SetReplicatedCurrentTorpor_WrapperImpl(void* Object, const void* InValue) { NativeCall<void, void*, const void*>(nullptr, "APrimalCharacter.SetReplicatedCurrentTorpor_WrapperImpl(void*,void*)", Object, InValue); }
	bool IsRider() { return NativeCall<bool>(this, "APrimalCharacter.IsRider()"); }
	static void GetCorpseDestructionTime_WrapperImpl(const void* Object, void* OutValue) { NativeCall<void, const void*, void*>(nullptr, "APrimalCharacter.GetCorpseDestructionTime_WrapperImpl(void*,void*)", Object, OutValue); }
	bool GetHasBPOverrideFallVelocityBuff(APrimalBuff* BuffToIgnore, bool bCheckForce) { return NativeCall<bool, APrimalBuff*, bool>(this, "APrimalCharacter.GetHasBPOverrideFallVelocityBuff(APrimalBuff*,bool)", BuffToIgnore, bCheckForce); }
	void BPOnAnimPlayedNotify(UAnimMontage* AnimMontage, float InPlayRate, FName StartSectionName, bool bReplicate, bool bReplicateToOwner, bool bForceTickPoseAndServerUpdateMesh, bool bForceTickPoseOnServer) { NativeCall<void, UAnimMontage*, float, FName, bool, bool, bool, bool>(this, "APrimalCharacter.BPOnAnimPlayedNotify(UAnimMontage*,float,FName,bool,bool,bool,bool)", AnimMontage, InPlayRate, StartSectionName, bReplicate, bReplicateToOwner, bForceTickPoseAndServerUpdateMesh, bForceTickPoseOnServer); }
	void StopJumpAnim() { NativeCall<void>(this, "APrimalCharacter.StopJumpAnim()"); }
	void ServerCallFollowDistanceCycleOne(APrimalDinoCharacter* ForDinoChar) { NativeCall<void, APrimalDinoCharacter*>(this, "APrimalCharacter.ServerCallFollowDistanceCycleOne(APrimalDinoCharacter*)", ForDinoChar); }
	void BPCharacterDetach() { NativeCall<void>(this, "APrimalCharacter.BPCharacterDetach()"); }
	static void SetbIsAtMaxInventoryItems_WrapperImpl(void* Object, const void* InValue) { NativeCall<void, void*, const void*>(nullptr, "APrimalCharacter.SetbIsAtMaxInventoryItems_WrapperImpl(void*,void*)", Object, InValue); }
	void BPOverridePhysicsImpulses(float DeltaSeconds, UPrimalCharacterMovement* PrimalCharacterMovement) { NativeCall<void, float, UPrimalCharacterMovement*>(this, "APrimalCharacter.BPOverridePhysicsImpulses(float,UPrimalCharacterMovement*)", DeltaSeconds, PrimalCharacterMovement); }
	bool ShouldEncumberBasedOnDino(APrimalDinoCharacter* OnDino) { return NativeCall<bool, APrimalDinoCharacter*>(this, "APrimalCharacter.ShouldEncumberBasedOnDino(APrimalDinoCharacter*)", OnDino); }
	static void GetTetherHeight_WrapperImpl(const void* Object, void* OutValue) { NativeCall<void, const void*, void*>(nullptr, "APrimalCharacter.GetTetherHeight_WrapperImpl(void*,void*)", Object, OutValue); }
	float GetClientPositionErrorToleranceSquared() { return NativeCall<float>(this, "APrimalCharacter.GetClientPositionErrorToleranceSquared()"); }
	bool IsPointOverOrInsideShip(UE::Math::TVector<double>* Point, bool bVerifyInside) { if (!Point) throw std::invalid_argument("Null native value parameter"); return NativeCall<bool, UE :: Math :: TVector < double >, bool>(this, "APrimalCharacter.IsPointOverOrInsideShip(UE::Math::TVector<double>,bool)", *Point, bVerifyInside); }
	void SetDraggedState(APrimalCharacter* Dragger) { NativeCall<void, APrimalCharacter*>(this, "APrimalCharacter.SetDraggedState(APrimalCharacter*)", Dragger); }
	bool IsPrimalCharFlying() { return NativeCall<bool>(this, "APrimalCharacter.IsPrimalCharFlying()"); }
	float BPGetApproachRadius() { return NativeCall<float>(this, "APrimalCharacter.BPGetApproachRadius()"); }
	bool IKFootTrace(int LegIndex, FIKLegInfo& LegInfo, UE::Math::TVector<double>* ActorLocation, UE::Math::TVector<double>* ActorForward, UE::Math::TVector<double>* TraceDirection, float TraceDistance) { if (!ActorLocation) throw std::invalid_argument("Null native value parameter"); if (!ActorForward) throw std::invalid_argument("Null native value parameter"); if (!TraceDirection) throw std::invalid_argument("Null native value parameter"); return NativeCall<bool, int, FIKLegInfo &, UE :: Math :: TVector < double >, UE :: Math :: TVector < double >, UE :: Math :: TVector < double >, float>(this, "APrimalCharacter.IKFootTrace(int,FIKLegInfo&,UE::Math::TVector<double>,UE::Math::TVector<double>,UE::Math::TVector<double>,float)", LegIndex, LegInfo, *ActorLocation, *ActorForward, *TraceDirection, TraceDistance); }
	float BP_OverrideTerminalVelocity() { return NativeCall<float>(this, "APrimalCharacter.BP_OverrideTerminalVelocity()"); }
	UE::Math::TVector<double>* BPOverrideFlyingVelocity(UE::Math::TVector<double>* result, const UE::Math::TVector<double>& InitialVelocity, const UE::Math::TVector<double>& Gravity, float DeltaTime) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*, const UE::Math::TVector<double>&, const UE::Math::TVector<double>&, float>(this, "APrimalCharacter.BPOverrideFlyingVelocity(UE::Math::TVector<double>&,UE::Math::TVector<double>&,float)", result, InitialVelocity, Gravity, DeltaTime); }
	bool IsBaseUnresolved(bool bUseReplicatedData) { return NativeCall<bool, bool>(this, "APrimalCharacter.IsBaseUnresolved(bool)", bUseReplicatedData); }
	void OnRep_IsSleeping() { NativeCall<void>(this, "APrimalCharacter.OnRep_IsSleeping()"); }
	bool GetDoBuffsIntersectItemSlotUse() { return NativeCall<bool>(this, "APrimalCharacter.GetDoBuffsIntersectItemSlotUse()"); }
	bool BPForceUseOldASECamera() { return NativeCall<bool>(this, "APrimalCharacter.BPForceUseOldASECamera()"); }
	ABiomeZoneVolume* GetMyBiomeZoneVolume() { return NativeCall<ABiomeZoneVolume*>(this, "APrimalCharacter.GetMyBiomeZoneVolume()"); }
	UE::Math::TVector<double>* GetPreviousLocation(UE::Math::TVector<double>* result) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*>(this, "APrimalCharacter.GetPreviousLocation()", result); }
	UE::Math::TVector<double>* GetRootBodyBoneLocation(UE::Math::TVector<double>* result) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*>(this, "APrimalCharacter.GetRootBodyBoneLocation()", result); }
	int GetTribeThreat() { return NativeCall<int>(this, "APrimalCharacter.GetTribeThreat()"); }
	void BPRegisterAnimSharing() { NativeCall<void>(this, "APrimalCharacter.BPRegisterAnimSharing()"); }
	bool CanEverProne() { return NativeCall<bool>(this, "APrimalCharacter.CanEverProne()"); }
	int GetCurrentCameraModeIndex() { return NativeCall<int>(this, "APrimalCharacter.GetCurrentCameraModeIndex()"); }
	void NetOnAsPassengerMovedToSeat_Implementation(int FromIndex, int ToIndex) { NativeCall<void, int, int>(this, "APrimalCharacter.NetOnAsPassengerMovedToSeat_Implementation(int,int)", FromIndex, ToIndex); }
	void GetExtraSaveMovedData(FSavedMove_Character* ForMove) { NativeCall<void, FSavedMove_Character*>(this, "APrimalCharacter.GetExtraSaveMovedData(FSavedMove_Character*)", ForMove); }
	bool HasAnyBuffWithDisabledWeaponTag(const FName& Tag, APrimalBuff*& FoundBuff) { return NativeCall<bool, const FName&, APrimalBuff*&>(this, "APrimalCharacter.HasAnyBuffWithDisabledWeaponTag(FName&,APrimalBuff*&)", Tag, FoundBuff); }
	float GetCurrentReverseVacuumCompartmentWaterLevel() { return NativeCall<float>(this, "APrimalCharacter.GetCurrentReverseVacuumCompartmentWaterLevel()"); }
	bool IsPassengerTreatedAsCarriedCharacterForDamage() { return NativeCall<bool>(this, "APrimalCharacter.IsPassengerTreatedAsCarriedCharacterForDamage()"); }
	bool IsCorruptedDino() { return NativeCall<bool>(this, "APrimalCharacter.IsCorruptedDino()"); }
	static void SetbIsDead_WrapperImpl(void* Object, const void* InValue) { NativeCall<void, void*, const void*>(nullptr, "APrimalCharacter.SetbIsDead_WrapperImpl(void*,void*)", Object, InValue); }
	void BPNotifyLevelUp(int ExtraCharacterLevel) { NativeCall<void, int>(this, "APrimalCharacter.BPNotifyLevelUp(int)", ExtraCharacterLevel); }
	bool CanCrouchInternal() { return NativeCall<bool>(this, "APrimalCharacter.CanCrouchInternal()"); }
	void ServerCallLandFlyerOne_Implementation(APrimalDinoCharacter* ForDinoChar) { NativeCall<void, APrimalDinoCharacter*>(this, "APrimalCharacter.ServerCallLandFlyerOne_Implementation(APrimalDinoCharacter*)", ForDinoChar); }
	USoundAttenuation* GetDesiredOverrideAttenuationForAllAssociatedSounds_Implementation(USoundBase* SoundToUse) { return NativeCall<USoundAttenuation*, USoundBase*>(this, "APrimalCharacter.GetDesiredOverrideAttenuationForAllAssociatedSounds_Implementation(USoundBase*)", SoundToUse); }
	UPrimalItemTrait* GetItemTrait(FName TraitName) { return NativeCall<UPrimalItemTrait*, FName>(this, "APrimalCharacter.GetItemTrait(FName)", TraitName); }
	void OnAsPassengerMovedToSeat(int FromIndex, int ToIndex) { NativeCall<void, int, int>(this, "APrimalCharacter.OnAsPassengerMovedToSeat(int,int)", FromIndex, ToIndex); }
	void BPNotifyBumpedByPawn(APrimalCharacter* ByPawn) { NativeCall<void, APrimalCharacter*>(this, "APrimalCharacter.BPNotifyBumpedByPawn(APrimalCharacter*)", ByPawn); }
	bool IsOverridingClientPositionErrorTolerance() { return NativeCall<bool>(this, "APrimalCharacter.IsOverridingClientPositionErrorTolerance()"); }
	void ForceRefreshBonesThreadSafe() { NativeCall<void>(this, "APrimalCharacter.ForceRefreshBonesThreadSafe()"); }
	void RemoveCharacterSnapshotEquipmentForItem(UPrimalInventoryComponent* Inventory, UPrimalItem* ForItem, AActor* To) { NativeCall<void, UPrimalInventoryComponent*, UPrimalItem*, AActor*>(this, "APrimalCharacter.RemoveCharacterSnapshotEquipmentForItem(UPrimalInventoryComponent*,UPrimalItem*,AActor*)", Inventory, ForItem, To); }
	bool BPHandleRightShoulderButton() { return NativeCall<bool>(this, "APrimalCharacter.BPHandleRightShoulderButton()"); }
	bool CanDoPhysicsRotationAccelerationFollowsRotationDirectMove() { return NativeCall<bool>(this, "APrimalCharacter.CanDoPhysicsRotationAccelerationFollowsRotationDirectMove()"); }
	bool HasDynamicBase() { return NativeCall<bool>(this, "APrimalCharacter.HasDynamicBase()"); }
	void UpdateFollowerAttachedItemsLeaderPose() { NativeCall<void>(this, "APrimalCharacter.UpdateFollowerAttachedItemsLeaderPose()"); }
	double GetLastCausedDamageTime() { return NativeCall<double>(this, "APrimalCharacter.GetLastCausedDamageTime()"); }
	static void GetBoardedUnderWaterCharacter_WrapperImpl(const void* Object, void* OutValue) { NativeCall<void, const void*, void*>(nullptr, "APrimalCharacter.GetBoardedUnderWaterCharacter_WrapperImpl(void*,void*)", Object, OutValue); }
	UE::Math::TVector<double>* GetFPVShadowMeshOffset(UE::Math::TVector<double>* result, bool bReturnMeshLocation) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*, bool>(this, "APrimalCharacter.GetFPVShadowMeshOffset(bool)", result, bReturnMeshLocation); }
	bool AllowExtendedCraftingFunctionality() { return NativeCall<bool>(this, "APrimalCharacter.AllowExtendedCraftingFunctionality()"); }
	bool BP_Die(float KillingDamage, const FDamageEvent& DamageEvent, AController* Killer, AActor* DamageCauser) { return NativeCall<bool, float, const FDamageEvent&, AController*, AActor*>(this, "APrimalCharacter.BP_Die(float,FDamageEvent&,AController*,AActor*)", KillingDamage, DamageEvent, Killer, DamageCauser); }
	void BPOnGrapHookStartPullingMe() { NativeCall<void>(this, "APrimalCharacter.BPOnGrapHookStartPullingMe()"); }
	bool CanUseCameraSettings(const FPrimalCameraSettingsConditions& TheCameraSettingsConditions, const APrimalCharacter* CharForConditionChecks) { return NativeCall<bool, const FPrimalCameraSettingsConditions&, const APrimalCharacter*>(this, "APrimalCharacter.CanUseCameraSettings(FPrimalCameraSettingsConditions&,APrimalCharacter*)", TheCameraSettingsConditions, CharForConditionChecks); }
	UE::Math::TVector<double>* GetFloatingHUDLocation(UE::Math::TVector<double>* result) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*>(this, "APrimalCharacter.GetFloatingHUDLocation()", result); }
	void UpdateBasedOnDino() { NativeCall<void>(this, "APrimalCharacter.UpdateBasedOnDino()"); }
	EShooterPhysMaterialType::Type GetTargetableDamageFXDefaultPhysMaterial() { return NativeCall<EShooterPhysMaterialType::Type>(this, "APrimalCharacter.GetTargetableDamageFXDefaultPhysMaterial()"); }
	void OnRunToggle() { NativeCall<void>(this, "APrimalCharacter.OnRunToggle()"); }
	APrimalCharacter* GetDefaultPrimalChar() { return NativeCall<APrimalCharacter*>(this, "APrimalCharacter.GetDefaultPrimalChar()"); }
	float GetBuffHarvestQuantityMultiplier() { return NativeCall<float>(this, "APrimalCharacter.GetBuffHarvestQuantityMultiplier()"); }
	bool BPIsBasedOnDynamicActor() { return NativeCall<bool>(this, "APrimalCharacter.BPIsBasedOnDynamicActor()"); }
	void ServerCallFollowDistanceCycleOne_Implementation(APrimalDinoCharacter* ForDinoChar) { NativeCall<void, APrimalDinoCharacter*>(this, "APrimalCharacter.ServerCallFollowDistanceCycleOne_Implementation(APrimalDinoCharacter*)", ForDinoChar); }
	static void SetbIsProne_WrapperImpl(void* Object, const void* InValue) { NativeCall<void, void*, const void*>(nullptr, "APrimalCharacter.SetbIsProne_WrapperImpl(void*,void*)", Object, InValue); }
	bool GetCameraProfileForId(FName CameraProfileId, FPrimalCameraProfile& OutCameraProfile) { return NativeCall<bool, FName, FPrimalCameraProfile&>(this, "APrimalCharacter.GetCameraProfileForId(FName,FPrimalCameraProfile&)", CameraProfileId, OutCameraProfile); }
	static void SetbIsDragging_WrapperImpl(void* Object, const void* InValue) { NativeCall<void, void*, const void*>(nullptr, "APrimalCharacter.SetbIsDragging_WrapperImpl(void*,void*)", Object, InValue); }
	bool IsInReverseVacuumSealedSpace() { return NativeCall<bool>(this, "APrimalCharacter.IsInReverseVacuumSealedSpace()"); }
	void NetStopAllAnimMontage() { NativeCall<void>(this, "APrimalCharacter.NetStopAllAnimMontage()"); }
	void OnCameraUpdate(const UE::Math::TVector<double>& CameraLocation, const UE::Math::TRotator<double>& CameraRotation) { NativeCall<void, const UE::Math::TVector<double>&, const UE::Math::TRotator<double>&>(this, "APrimalCharacter.OnCameraUpdate(UE::Math::TVector<double>&,UE::Math::TRotator<double>&)", CameraLocation, CameraRotation); }
	bool ShouldPreventCharacterBasing(APawn* BasedCharacter) { return NativeCall<bool, APawn*>(this, "APrimalCharacter.ShouldPreventCharacterBasing(APawn*)", BasedCharacter); }
	void OnFailedJumped() { NativeCall<void>(this, "APrimalCharacter.OnFailedJumped()"); }
	APrimalBuff* GetBuffWithCustomTag(FName BuffCustomTag) { return NativeCall<APrimalBuff*, FName>(this, "APrimalCharacter.GetBuffWithCustomTag(FName)", BuffCustomTag); }
	bool BPShouldUseLongFallCameraPivotZValues(bool bNativeShouldUseValues) { return NativeCall<bool, bool>(this, "APrimalCharacter.BPShouldUseLongFallCameraPivotZValues(bool)", bNativeShouldUseValues); }
	void BP_OnPaintingComponentInitialized(const UStructurePaintingComponent* PaintingComp) { NativeCall<void, const UStructurePaintingComponent*>(this, "APrimalCharacter.BP_OnPaintingComponentInitialized(UStructurePaintingComponent*)", PaintingComp); }
	UPrimitiveComponent* GetBasedMovementComponent() { return NativeCall<UPrimitiveComponent*>(this, "APrimalCharacter.GetBasedMovementComponent()"); }
	UE::Math::TVector<double>* GetDraggedLocation(UE::Math::TVector<double>* result, APrimalCharacter* Dragger) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*, APrimalCharacter*>(this, "APrimalCharacter.GetDraggedLocation(APrimalCharacter*)", result, Dragger); }
	void BP_OnSetDeath() { NativeCall<void>(this, "APrimalCharacter.BP_OnSetDeath()"); }
	bool BPOnAttachmentReplication() { return NativeCall<bool>(this, "APrimalCharacter.BPOnAttachmentReplication()"); }
	void DestroyOutsideWorld() { NativeCall<void>(this, "APrimalCharacter.DestroyOutsideWorld()"); }
	ECameraStyle::Type BPForceCameraStyle(APrimalCharacter* ForViewTarget) { return NativeCall<ECameraStyle::Type, APrimalCharacter*>(this, "APrimalCharacter.BPForceCameraStyle(APrimalCharacter*)", ForViewTarget); }
	void BP_OverrideCameraTargetOriginLocation(UE::Math::TVector<double>& OutOverrideOrigin, FName WithCameraStyle) { NativeCall<void, UE::Math::TVector<double>&, FName>(this, "APrimalCharacter.BP_OverrideCameraTargetOriginLocation(UE::Math::TVector<double>&,FName)", OutOverrideOrigin, WithCameraStyle); }
	float GetCharacterSizeScalar() { return NativeCall<float>(this, "APrimalCharacter.GetCharacterSizeScalar()"); }
	bool IsBasedOrInsideShip() { return NativeCall<bool>(this, "APrimalCharacter.IsBasedOrInsideShip()"); }
	bool IsGameInputAllowed() { return NativeCall<bool>(this, "APrimalCharacter.IsGameInputAllowed()"); }
	bool IsPrimalCharFalling() { return NativeCall<bool>(this, "APrimalCharacter.IsPrimalCharFalling()"); }
	float BPModifyFOVInterpSpeed(float FOVInterpSpeedIn) { return NativeCall<float, float>(this, "APrimalCharacter.BPModifyFOVInterpSpeed(float)", FOVInterpSpeedIn); }
	static void SetPaintingComponent_WrapperImpl(void* Object, const void* InValue) { NativeCall<void, void*, const void*>(nullptr, "APrimalCharacter.SetPaintingComponent_WrapperImpl(void*,void*)", Object, InValue); }
	void RegisterWithMassMoving() { NativeCall<void>(this, "APrimalCharacter.RegisterWithMassMoving()"); }
	void StasisingCharacter() { NativeCall<void>(this, "APrimalCharacter.StasisingCharacter()"); }
	void UpdateSeatingStructureHandIK() { NativeCall<void>(this, "APrimalCharacter.UpdateSeatingStructureHandIK()"); }
	void BPCharacterUnsleeped() { NativeCall<void>(this, "APrimalCharacter.BPCharacterUnsleeped()"); }
	bool IsBaby() { return NativeCall<bool>(this, "APrimalCharacter.IsBaby()"); }
	static void GetTribeGroupInventoryRank_WrapperImpl(const void* Object, void* OutValue) { NativeCall<void, const void*, void*>(nullptr, "APrimalCharacter.GetTribeGroupInventoryRank_WrapperImpl(void*,void*)", Object, OutValue); }
	bool BPPreventCombatMusic() { return NativeCall<bool>(this, "APrimalCharacter.BPPreventCombatMusic()"); }
	static void GetAnimSharingState_WrapperImpl(const void* Object, void* OutValue) { NativeCall<void, const void*, void*>(nullptr, "APrimalCharacter.GetAnimSharingState_WrapperImpl(void*,void*)", Object, OutValue); }
	bool ShouldUseWaveLocking(bool bForceCheck) { return NativeCall<bool, bool>(this, "APrimalCharacter.ShouldUseWaveLocking(bool)", bForceCheck); }
	float GetMoveAnimRate() { return NativeCall<float>(this, "APrimalCharacter.GetMoveAnimRate()"); }
	bool CameraCheckIsRunning(const APrimalCharacter* CharForConditionChecks) { return NativeCall<bool, const APrimalCharacter*>(this, "APrimalCharacter.CameraCheckIsRunning(APrimalCharacter*)", CharForConditionChecks); }
	float ModifyRootMotionScale_Implementation(float inScale, UAnimMontage* RootMontage) { return NativeCall<float, float, UAnimMontage*>(this, "APrimalCharacter.ModifyRootMotionScale_Implementation(float,UAnimMontage*)", inScale, RootMontage); }
	void OnRep_MountedDino() { NativeCall<void>(this, "APrimalCharacter.OnRep_MountedDino()"); }
	UAnimMontage* GetActiveRootMotionMontage() { return NativeCall<UAnimMontage*>(this, "APrimalCharacter.GetActiveRootMotionMontage()"); }
	UMeshComponent* GetPaintingMesh_Implementation(int PaintingIndex) { return NativeCall<UMeshComponent*, int>(this, "APrimalCharacter.GetPaintingMesh_Implementation(int)", PaintingIndex); }
	APrimalBuff* GetActiveSkillBuff(FName SkillName) { return NativeCall<APrimalBuff*, FName>(this, "APrimalCharacter.GetActiveSkillBuff(FName)", SkillName); }
	void BP_OnZoomInOrbitCam() { NativeCall<void>(this, "APrimalCharacter.BP_OnZoomInOrbitCam()"); }
	float BPGetExtraMeleeDamageModifier_Implementation() { return NativeCall<float>(this, "APrimalCharacter.BPGetExtraMeleeDamageModifier_Implementation()"); }
	static void GetbWasBeingDragged_WrapperImpl(const void* Object, void* OutValue) { NativeCall<void, const void*, void*>(nullptr, "APrimalCharacter.GetbWasBeingDragged_WrapperImpl(void*,void*)", Object, OutValue); }
	void BPSetCharacterMeshesMaterialScalarParamValue(FName ParamName, float Value) { NativeCall<void, FName, float>(this, "APrimalCharacter.BPSetCharacterMeshesMaterialScalarParamValue(FName,float)", ParamName, Value); }
	void CallDrawHUD(AShooterHUD* HUD) { NativeCall<void, AShooterHUD*>(this, "APrimalCharacter.CallDrawHUD(AShooterHUD*)", HUD); }
	UPrimalInventoryComponent* GetHarvestingDestinationInventory_Implementation() { return NativeCall<UPrimalInventoryComponent*>(this, "APrimalCharacter.GetHarvestingDestinationInventory_Implementation()"); }
	void ClientEndRagdollUpdate() { NativeCall<void>(this, "APrimalCharacter.ClientEndRagdollUpdate()"); }
	bool EnableTurnToFaceRotation_Implementation() { return NativeCall<bool>(this, "APrimalCharacter.EnableTurnToFaceRotation_Implementation()"); }
	void BPApplyCharacterSnapshotEquipment(UPrimalInventoryComponent* Inventory, AActor* To) { NativeCall<void, UPrimalInventoryComponent*, AActor*>(this, "APrimalCharacter.BPApplyCharacterSnapshotEquipment(UPrimalInventoryComponent*,AActor*)", Inventory, To); }
	void BP_OnJumpReleased() { NativeCall<void>(this, "APrimalCharacter.BP_OnJumpReleased()"); }
	bool ShouldForceDedicatedMovementTickEveryFrame() { return NativeCall<bool>(this, "APrimalCharacter.ShouldForceDedicatedMovementTickEveryFrame()"); }
	int GetLocalPlayerIndex() { return NativeCall<int>(this, "APrimalCharacter.GetLocalPlayerIndex()"); }
	float GetFallAcceleration() { return NativeCall<float>(this, "APrimalCharacter.GetFallAcceleration()"); }
	USoundBase* GetActorAttachedSoundOverride(USoundBase* SoundIn) { return NativeCall<USoundBase*, USoundBase*>(this, "APrimalCharacter.GetActorAttachedSoundOverride(USoundBase*)", SoundIn); }
	static void SetTetherHeight_WrapperImpl(void* Object, const void* InValue) { NativeCall<void, void*, const void*>(nullptr, "APrimalCharacter.SetTetherHeight_WrapperImpl(void*,void*)", Object, InValue); }
	bool UpdateHasBuffPreSerialize() { return NativeCall<bool>(this, "APrimalCharacter.UpdateHasBuffPreSerialize()"); }
	void UpdateCachedComponentRefs() { NativeCall<void>(this, "APrimalCharacter.UpdateCachedComponentRefs()"); }
	UParticleSystem* GetHurtFX(bool bIsAttacker) { return NativeCall<UParticleSystem*, bool>(this, "APrimalCharacter.GetHurtFX(bool)", bIsAttacker); }
	bool AllowEquippingItemType(EPrimalEquipmentType::Type equipmentType) { return NativeCall<bool, EPrimalEquipmentType::Type>(this, "APrimalCharacter.AllowEquippingItemType(EPrimalEquipmentType::Type)", equipmentType); }
	bool IsSimulated() { return NativeCall<bool>(this, "APrimalCharacter.IsSimulated()"); }
	void OnEQSQueryComplete(const FPrimalEQSQueryResult& QueryResult) { NativeCall<void, const FPrimalEQSQueryResult&>(this, "APrimalCharacter.OnEQSQueryComplete(FPrimalEQSQueryResult&)", QueryResult); }
	void BPTimerServer() { NativeCall<void>(this, "APrimalCharacter.BPTimerServer()"); }
	bool ForceDisableClientGravitySimulation() { return NativeCall<bool>(this, "APrimalCharacter.ForceDisableClientGravitySimulation()"); }
	bool IsOnSeatingStructure() { return NativeCall<bool>(this, "APrimalCharacter.IsOnSeatingStructure()"); }
	UE::Math::TVector<double>* GetVelocity(UE::Math::TVector<double>* result, bool bIsForRagdoll) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*, bool>(this, "APrimalCharacter.GetVelocity(bool)", result, bIsForRagdoll); }
	void BPLocalUnpossessed() { NativeCall<void>(this, "APrimalCharacter.BPLocalUnpossessed()"); }
	bool GeneTraits_CharacterCanHaveGeneTraits() { return NativeCall<bool>(this, "APrimalCharacter.GeneTraits_CharacterCanHaveGeneTraits()"); }
	static void GetbIsDead_WrapperImpl(const void* Object, void* OutValue) { NativeCall<void, const void*, void*>(nullptr, "APrimalCharacter.GetbIsDead_WrapperImpl(void*,void*)", Object, OutValue); }
	bool BPShouldLimitForwardDirection_Implementation() { return NativeCall<bool>(this, "APrimalCharacter.BPShouldLimitForwardDirection_Implementation()"); }
	UE::Math::TVector<double>* GetInterpolatedLocation(UE::Math::TVector<double>* result) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*>(this, "APrimalCharacter.GetInterpolatedLocation()", result); }
	UE::Math::TRotator<double>* GetAimOffsets(UE::Math::TRotator<double>* result, float DeltaTime, UE::Math::TRotator<double>& RootRotOffset, float& RootYawSpeed, float MaxYawAimClamp, UE::Math::TVector<double>& RootLocOffset, bool bInterpolationStep) { return NativeCall<UE::Math::TRotator<double>*, UE::Math::TRotator<double>*, float, UE::Math::TRotator<double>&, float&, float, UE::Math::TVector<double>&, bool>(this, "APrimalCharacter.GetAimOffsets(float,UE::Math::TRotator<double>&,float&,float,UE::Math::TVector<double>&,bool)", result, DeltaTime, RootRotOffset, RootYawSpeed, MaxYawAimClamp, RootLocOffset, bInterpolationStep); }
	UAnimMontage* BPOverrideHurtAnim(float DamageTaken, const FDamageEvent& DamageEvent, APawn* PawnInstigator, AActor* DamageCauser, bool bIsLocalPath, bool bIsPointDamage, UE::Math::TVector<double>* PointDamageLocation, UE::Math::TVector<double>* PointDamageHitNormal, UPrimitiveComponent* HitComp, FName HitBone) { if (!PointDamageLocation) throw std::invalid_argument("Null native value parameter"); if (!PointDamageHitNormal) throw std::invalid_argument("Null native value parameter"); return NativeCall<UAnimMontage *, float, const FDamageEvent &, APawn *, AActor *, bool, bool, UE :: Math :: TVector < double >, UE :: Math :: TVector < double >, UPrimitiveComponent *, FName>(this, "APrimalCharacter.BPOverrideHurtAnim(float,FDamageEvent&,APawn*,AActor*,bool,bool,UE::Math::TVector<double>,UE::Math::TVector<double>,UPrimitiveComponent*,FName)", DamageTaken, DamageEvent, PawnInstigator, DamageCauser, bIsLocalPath, bIsPointDamage, *PointDamageLocation, *PointDamageHitNormal, HitComp, HitBone); }
	unsigned char GetNetRelevancyBiomeId() { return NativeCall<unsigned char>(this, "APrimalCharacter.GetNetRelevancyBiomeId()"); }
	bool IsWalkRunTransitioning() { return NativeCall<bool>(this, "APrimalCharacter.IsWalkRunTransitioning()"); }
	UE::Math::TVector<double>* BPOverrideWalkingVelocity(UE::Math::TVector<double>* result, const UE::Math::TVector<double>& InitialVelocity, const float& Friction, float DeltaTime) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*, const UE::Math::TVector<double>&, const float&, float>(this, "APrimalCharacter.BPOverrideWalkingVelocity(UE::Math::TVector<double>&,float&,float)", result, InitialVelocity, Friction, DeltaTime); }
	void OnVersionChange(bool& doDestroy) { NativeCall<void, bool&>(this, "APrimalCharacter.OnVersionChange(bool&)", doDestroy); }
	bool IsBasedOnShip(APrimalShip* SpecificShip) { return NativeCall<bool, APrimalShip*>(this, "APrimalCharacter.IsBasedOnShip(APrimalShip*)", SpecificShip); }
	void BPRemovedAttachmentsForItem(UPrimalItem* anItem) { NativeCall<void, UPrimalItem*>(this, "APrimalCharacter.BPRemovedAttachmentsForItem(UPrimalItem*)", anItem); }
	UE::Math::TRotator<double>* BPCameraBaseOrientation(UE::Math::TRotator<double>* result, APrimalCharacter* viewingCharacter) { return NativeCall<UE::Math::TRotator<double>*, UE::Math::TRotator<double>*, APrimalCharacter*>(this, "APrimalCharacter.BPCameraBaseOrientation(APrimalCharacter*)", result, viewingCharacter); }
	void BPPostLoadedFromSaveGame() { NativeCall<void>(this, "APrimalCharacter.BPPostLoadedFromSaveGame()"); }
	UE::Math::TVector<double>* BPOverrideCharacterNewSwimVelocity(UE::Math::TVector<double>* result, const UE::Math::TVector<double>& InitialVelocity, const UE::Math::TVector<double>& Gravity, const float& FluidFriction, const float& NetBuoyancy, float DeltaTime) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*, const UE::Math::TVector<double>&, const UE::Math::TVector<double>&, const float&, const float&, float>(this, "APrimalCharacter.BPOverrideCharacterNewSwimVelocity(UE::Math::TVector<double>&,UE::Math::TVector<double>&,float&,float&,float)", result, InitialVelocity, Gravity, FluidFriction, NetBuoyancy, DeltaTime); }
	UAnimMontage* GetOverridenMontage(UAnimMontage* AnimMontage) { return NativeCall<UAnimMontage*, UAnimMontage*>(this, "APrimalCharacter.GetOverridenMontage(UAnimMontage*)", AnimMontage); }
	void TickMovementComponent(float DeltaTime) { NativeCall<void, float>(this, "APrimalCharacter.TickMovementComponent(float)", DeltaTime); }
	bool ShouldUseSlowInterpToOldCamera() { return NativeCall<bool>(this, "APrimalCharacter.ShouldUseSlowInterpToOldCamera()"); }
	bool BPPreventInputType(EPrimalCharacterInputType::Type inputType) { return NativeCall<bool, EPrimalCharacterInputType::Type>(this, "APrimalCharacter.BPPreventInputType(EPrimalCharacterInputType::Type)", inputType); }
	bool IsUsingHandIK() { return NativeCall<bool>(this, "APrimalCharacter.IsUsingHandIK()"); }
	bool IsCrafting() { return NativeCall<bool>(this, "APrimalCharacter.IsCrafting()"); }
	void DrawHUD(AShooterHUD* HUD) { NativeCall<void, AShooterHUD*>(this, "APrimalCharacter.DrawHUD(AShooterHUD*)", HUD); }
	static void GetEquippedArmorDurabilityPercent1_WrapperImpl(const void* Object, void* OutValue) { NativeCall<void, const void*, void*>(nullptr, "APrimalCharacter.GetEquippedArmorDurabilityPercent1_WrapperImpl(void*,void*)", Object, OutValue); }
	void SetEnableHandIK(bool bLeft, bool bRight, bool bBindForwad) { NativeCall<void, bool, bool, bool>(this, "APrimalCharacter.SetEnableHandIK(bool,bool,bool)", bLeft, bRight, bBindForwad); }
	static void SetbSleepingDisableRagdoll_WrapperImpl(void* Object, const void* InValue) { NativeCall<void, void*, const void*>(nullptr, "APrimalCharacter.SetbSleepingDisableRagdoll_WrapperImpl(void*,void*)", Object, InValue); }
	UAnimationAsset* GetItemDeathAnimOverride(FName DeathAnimType) { return NativeCall<UAnimationAsset*, FName>(this, "APrimalCharacter.GetItemDeathAnimOverride(FName)", DeathAnimType); }
	static void GetbRemoteRunning_WrapperImpl(const void* Object, void* OutValue) { NativeCall<void, const void*, void*>(nullptr, "APrimalCharacter.GetbRemoteRunning_WrapperImpl(void*,void*)", Object, OutValue); }
	static void SetPropertyBag_WrapperImpl(void* Object, const void* InValue) { NativeCall<void, void*, const void*>(nullptr, "APrimalCharacter.SetPropertyBag_WrapperImpl(void*,void*)", Object, InValue); }
	bool AllowPlayMontage(UAnimMontage* AnimMontage) { return NativeCall<bool, UAnimMontage*>(this, "APrimalCharacter.AllowPlayMontage(UAnimMontage*)", AnimMontage); }
	void BP_OnZoomOut() { NativeCall<void>(this, "APrimalCharacter.BP_OnZoomOut()"); }
	void OnItemTraitEffectActivated(FName TraitName, float Value, const FBPNetExecParams& AdditionalParams) { NativeCall<void, FName, float, const FBPNetExecParams&>(this, "APrimalCharacter.OnItemTraitEffectActivated(FName,float,FBPNetExecParams&)", TraitName, Value, AdditionalParams); }
	UClass* GetBasedUIClass() { return NativeCall<UClass*>(this, "APrimalCharacter.GetBasedUIClass()"); }
	bool BPOverrideCameraDesiredPivotLocation(UE::Math::TVector<double>* CurrentCameraPivotLocation, UE::Math::TVector<double>& DesiredCameraPivotLocation) { if (!CurrentCameraPivotLocation) throw std::invalid_argument("Null native value parameter"); return NativeCall<bool, UE :: Math :: TVector < double >, UE :: Math :: TVector < double > &>(this, "APrimalCharacter.BPOverrideCameraDesiredPivotLocation(UE::Math::TVector<double>,UE::Math::TVector<double>&)", *CurrentCameraPivotLocation, DesiredCameraPivotLocation); }
	float GetFrictionAdditionalValue() { return NativeCall<float>(this, "APrimalCharacter.GetFrictionAdditionalValue()"); }
	USoundBase* BPOverrideCharacterSound(USoundBase* SoundIn) { return NativeCall<USoundBase*, USoundBase*>(this, "APrimalCharacter.BPOverrideCharacterSound(USoundBase*)", SoundIn); }
	bool GetPrimalCameraArmLengthInterpParams(const FPrimalCameraProfile* ForCameraProfile, const FPrimalCameraParams* ForCameraParams, const FPrimalCameraInterpParams& LastInterpParams, FPrimalCameraInterpParams& OutInterpParams) { return NativeCall<bool, const FPrimalCameraProfile*, const FPrimalCameraParams*, const FPrimalCameraInterpParams&, FPrimalCameraInterpParams&>(this, "APrimalCharacter.GetPrimalCameraArmLengthInterpParams(FPrimalCameraProfile*,FPrimalCameraParams*,FPrimalCameraInterpParams&,FPrimalCameraInterpParams&)", ForCameraProfile, ForCameraParams, LastInterpParams, OutInterpParams); }
	UE::Math::TVector<double>* GetCapsuleTopLocation(UE::Math::TVector<double>* result) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*>(this, "APrimalCharacter.GetCapsuleTopLocation()", result); }
	float BPOverrideJumpZModifier(float InJumpZModifier) { return NativeCall<float, float>(this, "APrimalCharacter.BPOverrideJumpZModifier(float)", InJumpZModifier); }
	void PausedAnimSharingLeaderComponent() { NativeCall<void>(this, "APrimalCharacter.PausedAnimSharingLeaderComponent()"); }
	UE::Math::TRotator<double>* CalculateForwarBendingAngle(UE::Math::TRotator<double>* result) { return NativeCall<UE::Math::TRotator<double>*, UE::Math::TRotator<double>*>(this, "APrimalCharacter.CalculateForwarBendingAngle()", result); }
	bool AddToCharactersGrappledToMe(APrimalCharacter* Character) { return NativeCall<bool, APrimalCharacter*>(this, "APrimalCharacter.AddToCharactersGrappledToMe(APrimalCharacter*)", Character); }
	float GetImmersionDepth() { return NativeCall<float>(this, "APrimalCharacter.GetImmersionDepth()"); }
	bool ShouldAttackStopMoveCollapsing() { return NativeCall<bool>(this, "APrimalCharacter.ShouldAttackStopMoveCollapsing()"); }
	bool ShouldForceCameraStyle(APrimalCharacter* ForViewTarget, ECameraStyle::Type& OutForcedCameraStyle) { return NativeCall<bool, APrimalCharacter*, ECameraStyle::Type&>(this, "APrimalCharacter.ShouldForceCameraStyle(APrimalCharacter*,ECameraStyle::Type&)", ForViewTarget, OutForcedCameraStyle); }
	bool FillVolumetricDispatchesForFoliageInteraction(bool bDebug, UActorComponent* interactionComponent) { return NativeCall<bool, bool, UActorComponent*>(this, "APrimalCharacter.FillVolumetricDispatchesForFoliageInteraction(bool,UActorComponent*)", bDebug, interactionComponent); }
	void ServerRequestDragTarget(APrimalCharacter* Target) { NativeCall<void, APrimalCharacter*>(this, "APrimalCharacter.ServerRequestDragTarget(APrimalCharacter*)", Target); }
	void BPOnNearbyCharacterDied(APrimalCharacter* DeadCharacter, float KillingDamage, const FDamageEvent& DamageEvent, APawn* InstigatingPawn, AActor* DamageCauser) { NativeCall<void, APrimalCharacter*, float, const FDamageEvent&, APawn*, AActor*>(this, "APrimalCharacter.BPOnNearbyCharacterDied(APrimalCharacter*,float,FDamageEvent&,APawn*,AActor*)", DeadCharacter, KillingDamage, DamageEvent, InstigatingPawn, DamageCauser); }
	void CheckAndHandleBasedPlayersBeingPushedThroughWalls() { NativeCall<void>(this, "APrimalCharacter.CheckAndHandleBasedPlayersBeingPushedThroughWalls()"); }
	void ReinitAnims() { NativeCall<void>(this, "APrimalCharacter.ReinitAnims()"); }
	void ResetMeshTransformToDefaults() { NativeCall<void>(this, "APrimalCharacter.ResetMeshTransformToDefaults()"); }
	void BPNotifyToggleHUD(bool bHUDHidden) { NativeCall<void, bool>(this, "APrimalCharacter.BPNotifyToggleHUD(bool)", bHUDHidden); }
	void OnDraggingStarted() { NativeCall<void>(this, "APrimalCharacter.OnDraggingStarted()"); }
	bool BuffsPreventImmobilization() { return NativeCall<bool>(this, "APrimalCharacter.BuffsPreventImmobilization()"); }
	void OnRep_PaintingComponent() { NativeCall<void>(this, "APrimalCharacter.OnRep_PaintingComponent()"); }
	float BPGetExtraMeleeDamageModifier() { return NativeCall<float>(this, "APrimalCharacter.BPGetExtraMeleeDamageModifier()"); }
	static void GetbSleepingDisableRagdoll_WrapperImpl(const void* Object, void* OutValue) { NativeCall<void, const void*, void*>(nullptr, "APrimalCharacter.GetbSleepingDisableRagdoll_WrapperImpl(void*,void*)", Object, OutValue); }
	void BPOnGrapHookStopPullingMe() { NativeCall<void>(this, "APrimalCharacter.BPOnGrapHookStopPullingMe()"); }
	void ServerCallAttackTargetNew() { NativeCall<void>(this, "APrimalCharacter.ServerCallAttackTargetNew()"); }
	void SetRidingDinoAsPassenger(APrimalDinoCharacter* aDino, const FSaddlePassengerSeatDefinition& SeatDefinition) { NativeCall<void, APrimalDinoCharacter*, const FSaddlePassengerSeatDefinition&>(this, "APrimalCharacter.SetRidingDinoAsPassenger(APrimalDinoCharacter*,FSaddlePassengerSeatDefinition&)", aDino, SeatDefinition); }
	static void StaticRemoveCharacterSnapshotEquipmentForItem(UPrimalInventoryComponent* Inventory, UPrimalItem* ForItem, AActor* To) { NativeCall<void, UPrimalInventoryComponent*, UPrimalItem*, AActor*>(nullptr, "APrimalCharacter.StaticRemoveCharacterSnapshotEquipmentForItem(UPrimalInventoryComponent*,UPrimalItem*,AActor*)", Inventory, ForItem, To); }
	void EditorBeginPlay_Implementation() { NativeCall<void>(this, "APrimalCharacter.EditorBeginPlay_Implementation()"); }
	void OnNearbyCharacterDied(APrimalCharacter* DeadCharacter, float KillingDamage, const FDamageEvent& DamageEvent, APawn* InstigatingPawn, AActor* DamageCauser) { NativeCall<void, APrimalCharacter*, float, const FDamageEvent&, APawn*, AActor*>(this, "APrimalCharacter.OnNearbyCharacterDied(APrimalCharacter*,float,FDamageEvent&,APawn*,AActor*)", DeadCharacter, KillingDamage, DamageEvent, InstigatingPawn, DamageCauser); }
	void OnRep_EquippedItemDurability() { NativeCall<void>(this, "APrimalCharacter.OnRep_EquippedItemDurability()"); }
	void ApplyBiomeZoneBuff() { NativeCall<void>(this, "APrimalCharacter.ApplyBiomeZoneBuff()"); }
	void StopSkinOverrideMontage(UAnimMontage* AnimMontage) { NativeCall<void, UAnimMontage*>(this, "APrimalCharacter.StopSkinOverrideMontage(UAnimMontage*)", AnimMontage); }
	bool IsTeleportLocationSafe(UE::Math::TVector<double>* InLocation, UE::Math::TVector<double>& ModifiedLocation) { if (!InLocation) throw std::invalid_argument("Null native value parameter"); return NativeCall<bool, UE :: Math :: TVector < double >, UE :: Math :: TVector < double > &>(this, "APrimalCharacter.IsTeleportLocationSafe(UE::Math::TVector<double>,UE::Math::TVector<double>&)", *InLocation, ModifiedLocation); }
	bool BPOverridePrimalCameraParams(FPrimalCameraParams& OutParams) { return NativeCall<bool, FPrimalCameraParams&>(this, "APrimalCharacter.BPOverridePrimalCameraParams(FPrimalCameraParams&)", OutParams); }
	bool IsMissionDino() { return NativeCall<bool>(this, "APrimalCharacter.IsMissionDino()"); }
	void EnableBPTimerServer(bool bEnable) { NativeCall<void, bool>(this, "APrimalCharacter.EnableBPTimerServer(bool)", bEnable); }
	void UnregisterWithMassMoving() { NativeCall<void>(this, "APrimalCharacter.UnregisterWithMassMoving()"); }
	void OnRep_SecondaryMountedDino() { NativeCall<void>(this, "APrimalCharacter.OnRep_SecondaryMountedDino()"); }
	int SetTribeThreat(int NewThreat) { return NativeCall<int, int>(this, "APrimalCharacter.SetTribeThreat(int)", NewThreat); }
	bool BPPreventNotifySound(USoundBase* SoundIn) { return NativeCall<bool, USoundBase*>(this, "APrimalCharacter.BPPreventNotifySound(USoundBase*)", SoundIn); }
	bool UsesFlyerSpeedLeveling() { return NativeCall<bool>(this, "APrimalCharacter.UsesFlyerSpeedLeveling()"); }
	static void StaticApplyCharacterSnapshotEquipmentForItem(UPrimalInventoryComponent* Inventory, UPrimalItem* ForItem, AActor* To) { NativeCall<void, UPrimalInventoryComponent*, UPrimalItem*, AActor*>(nullptr, "APrimalCharacter.StaticApplyCharacterSnapshotEquipmentForItem(UPrimalInventoryComponent*,UPrimalItem*,AActor*)", Inventory, ForItem, To); }
	float GetNumTamedDinosRangeMultiplier() { return NativeCall<float>(this, "APrimalCharacter.GetNumTamedDinosRangeMultiplier()"); }
	bool BPPreventPinging(bool bInitialPing, APlayerController* ForPC) { return NativeCall<bool, bool, APlayerController*>(this, "APrimalCharacter.BPPreventPinging(bool,APlayerController*)", bInitialPing, ForPC); }
	void ServerCallPassiveFlee_Implementation() { NativeCall<void>(this, "APrimalCharacter.ServerCallPassiveFlee_Implementation()"); }
	void GetTrueBasedPrimalCharacters(TArray<APrimalCharacter*, TSizedDefaultAllocator<32> >& retPrimalChars) { NativeCall<void, TArray<APrimalCharacter*, TSizedDefaultAllocator<32> >&>(this, "APrimalCharacter.GetTrueBasedPrimalCharacters(TArray<APrimalCharacter*,TSizedDefaultAllocator<32>>&)", retPrimalChars); }
	bool BPPreventStructurePlacement(APlayerController* PC, APrimalStructure* StructureToPlace, FName ForBone) { return NativeCall<bool, APlayerController*, APrimalStructure*, FName>(this, "APrimalCharacter.BPPreventStructurePlacement(APlayerController*,APrimalStructure*,FName)", PC, StructureToPlace, ForBone); }
	bool CanBeImmobilized() { return NativeCall<bool>(this, "APrimalCharacter.CanBeImmobilized()"); }
	static void GetbIsAtMaxInventoryItems_WrapperImpl(const void* Object, void* OutValue) { NativeCall<void, const void*, void*>(nullptr, "APrimalCharacter.GetbIsAtMaxInventoryItems_WrapperImpl(void*,void*)", Object, OutValue); }
	TWeakObjectPtr<APrimalStructureSeating, FWeakObjectPtr> GetSeatingStructure() { using AsaReturnType = TWeakObjectPtr < APrimalStructureSeating , FWeakObjectPtr >; alignas(AsaReturnType) unsigned char AsaReturnBytes[sizeof(AsaReturnType)]; auto* AsaReturnPointer = reinterpret_cast<AsaReturnType*>(AsaReturnBytes); auto* AsaReturnedPointer = NativeCall<AsaReturnType*, AsaReturnType*>(this, "APrimalCharacter.GetSeatingStructure()", AsaReturnPointer); if (AsaReturnedPointer != AsaReturnPointer) throw std::runtime_error("Unexpected native result buffer"); std::unique_ptr<AsaReturnType, void(*)(AsaReturnType*)> AsaReturnOwner(std::launder(AsaReturnPointer), [](AsaReturnType* value) { value->~AsaReturnType(); }); return MoveTemp(*AsaReturnOwner); }
	void ClientSetNextAnimMontageSection_Implementation(UAnimMontage* AnimMontage, FName CurrentSectionName, FName NextSectionName, bool bStopAnimOnFailedSetNextSection, bool bSetOnOwner) { NativeCall<void, UAnimMontage*, FName, FName, bool, bool>(this, "APrimalCharacter.ClientSetNextAnimMontageSection_Implementation(UAnimMontage*,FName,FName,bool,bool)", AnimMontage, CurrentSectionName, NextSectionName, bStopAnimOnFailedSetNextSection, bSetOnOwner); }
	USoundAttenuation* OverrideSoundAttenuation(USoundBase* ForSound) { return NativeCall<USoundAttenuation*, USoundBase*>(this, "APrimalCharacter.OverrideSoundAttenuation(USoundBase*)", ForSound); }
	void UpdateCharacterSnapshotMaterialData(UPrimalInventoryComponent* Inventory, AActor* To) { NativeCall<void, UPrimalInventoryComponent*, AActor*>(this, "APrimalCharacter.UpdateCharacterSnapshotMaterialData(UPrimalInventoryComponent*,AActor*)", Inventory, To); }
	void ServerCallNeutral_Implementation() { NativeCall<void>(this, "APrimalCharacter.ServerCallNeutral_Implementation()"); }
	UE::Math::TRotator<double>* GetBaseAimRotation(UE::Math::TRotator<double>* result) { return NativeCall<UE::Math::TRotator<double>*, UE::Math::TRotator<double>*>(this, "APrimalCharacter.GetBaseAimRotation()", result); }
	int GetMaxTribeThreat() { return NativeCall<int>(this, "APrimalCharacter.GetMaxTribeThreat()"); }
	bool HasBuffWithCustomTagConst(FName buffCustomTag, bool bSearchNormalTagArray) { return NativeCall<bool, FName, bool>(this, "APrimalCharacter.HasBuffWithCustomTagConst(FName,bool)", buffCustomTag, bSearchNormalTagArray); }
	static void SetbReadyToPoop_WrapperImpl(void* Object, const void* InValue) { NativeCall<void, void*, const void*>(nullptr, "APrimalCharacter.SetbReadyToPoop_WrapperImpl(void*,void*)", Object, InValue); }
	UE::Math::TVector<double>* GetInputDirectionVector(UE::Math::TVector<double>* result, bool bRelativeToViewDirection) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*, bool>(this, "APrimalCharacter.GetInputDirectionVector(bool)", result, bRelativeToViewDirection); }
	float BPGetSignificanceBasedAnimationBlend() { return NativeCall<float>(this, "APrimalCharacter.BPGetSignificanceBasedAnimationBlend()"); }
	UE::Math::TVector<double>* GetPrimalCameraDesiredPivotOffset(UE::Math::TVector<double>* result, const FPrimalCameraParams* ForCameraParams) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*, const FPrimalCameraParams*>(this, "APrimalCharacter.GetPrimalCameraDesiredPivotOffset(FPrimalCameraParams*)", result, ForCameraParams); }
	bool BPOverrideCurrentCameraProfileId(FName& OutProfileId) { return NativeCall<bool, FName&>(this, "APrimalCharacter.BPOverrideCurrentCameraProfileId(FName&)", OutProfileId); }
	bool BPShouldLimitForwardDirection() { return NativeCall<bool>(this, "APrimalCharacter.BPShouldLimitForwardDirection()"); }
	UPrimalInventoryComponent* GetHarvestingDestinationInventory() { return NativeCall<UPrimalInventoryComponent*>(this, "APrimalCharacter.GetHarvestingDestinationInventory()"); }
	UE::Math::TVector<double>* GetPrimalCameraDesiredPivotOffset(UE::Math::TVector<double>* result, bool bIncludeWeaponOverride, FName ForProfileId) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*, bool, FName>(this, "APrimalCharacter.GetPrimalCameraDesiredPivotOffset(bool,FName)", result, bIncludeWeaponOverride, ForProfileId); }
	bool BP_AnimationPreventsInput() { return NativeCall<bool>(this, "APrimalCharacter.BP_AnimationPreventsInput()"); }
	UE::Math::TVector<double>* GetSocketLocation(UE::Math::TVector<double>* result, FName SocketName) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*, FName>(this, "APrimalCharacter.GetSocketLocation(FName)", result, SocketName); }
	void ConditionallySetRunningIfAuthority(bool bNewRunning) { NativeCall<void, bool>(this, "APrimalCharacter.ConditionallySetRunningIfAuthority(bool)", bNewRunning); }
	void ClearRidingDinoAsPassenger(bool bFromDino) { NativeCall<void, bool>(this, "APrimalCharacter.ClearRidingDinoAsPassenger(bool)", bFromDino); }
	bool BPShouldLimitRightDirection() { return NativeCall<bool>(this, "APrimalCharacter.BPShouldLimitRightDirection()"); }
	void BPAddedAttachmentsForItem(UPrimalItem* anItem) { NativeCall<void, UPrimalItem*>(this, "APrimalCharacter.BPAddedAttachmentsForItem(UPrimalItem*)", anItem); }
	void NetAddCharacterMovementImpulse(UE::Math::TVector<double>* Impulse, bool bVelChange, float ImpulseExponent, bool bSetNewMovementMode, EMovementMode NewMovementMode, bool bOverrideMaxImpulseZ) { if (!Impulse) throw std::invalid_argument("Null native value parameter"); return NativeCall<void, UE :: Math :: TVector < double >, bool, float, bool, EMovementMode, bool>(this, "APrimalCharacter.NetAddCharacterMovementImpulse(UE::Math::TVector<double>,bool,float,bool,EMovementMode,bool)", *Impulse, bVelChange, ImpulseExponent, bSetNewMovementMode, NewMovementMode, bOverrideMaxImpulseZ); }
	APrimalDinoCharacter* GetRidingOn() { return NativeCall<APrimalDinoCharacter*>(this, "APrimalCharacter.GetRidingOn()"); }
	static void GetbIsBeingDragged_WrapperImpl(const void* Object, void* OutValue) { NativeCall<void, const void*, void*>(nullptr, "APrimalCharacter.GetbIsBeingDragged_WrapperImpl(void*,void*)", Object, OutValue); }
	bool CanDestroyByMeshing() { return NativeCall<bool>(this, "APrimalCharacter.CanDestroyByMeshing()"); }
	void OnStartedAllyTargetLooking(APrimalCharacter* LookAtTarget) { NativeCall<void, APrimalCharacter*>(this, "APrimalCharacter.OnStartedAllyTargetLooking(APrimalCharacter*)", LookAtTarget); }
	void ServerCallSetAggressive_Implementation() { NativeCall<void>(this, "APrimalCharacter.ServerCallSetAggressive_Implementation()"); }
	static void GetbIsMassMoving_WrapperImpl(const void* Object, void* OutValue) { NativeCall<void, const void*, void*>(nullptr, "APrimalCharacter.GetbIsMassMoving_WrapperImpl(void*,void*)", Object, OutValue); }
	void ReleasePoopButton() { NativeCall<void>(this, "APrimalCharacter.ReleasePoopButton()"); }
	static void GetReplicatedDeathAnim_WrapperImpl(const void* Object, void* OutValue) { NativeCall<void, const void*, void*>(nullptr, "APrimalCharacter.GetReplicatedDeathAnim_WrapperImpl(void*,void*)", Object, OutValue); }
	UE::Math::TRotator<double>* GetControlRotation(UE::Math::TRotator<double>* result) { return NativeCall<UE::Math::TRotator<double>*, UE::Math::TRotator<double>*>(this, "APrimalCharacter.GetControlRotation()", result); }
	void ServerCallMoveTo_Implementation(UE::Math::TVector<double>* MoveToLoc) { if (!MoveToLoc) throw std::invalid_argument("Null native value parameter"); return NativeCall<void, UE :: Math :: TVector < double >>(this, "APrimalCharacter.ServerCallMoveTo_Implementation(UE::Math::TVector<double>)", *MoveToLoc); }
	void OnCharacterStepped(UE::Math::TVector<double>* PrevLocation, UE::Math::TVector<double>* NewLocation) { if (!PrevLocation) throw std::invalid_argument("Null native value parameter"); if (!NewLocation) throw std::invalid_argument("Null native value parameter"); return NativeCall<void, UE :: Math :: TVector < double >, UE :: Math :: TVector < double >>(this, "APrimalCharacter.OnCharacterStepped(UE::Math::TVector<double>,UE::Math::TVector<double>)", *PrevLocation, *NewLocation); }
	void BPPreSerializeSaveGame() { NativeCall<void>(this, "APrimalCharacter.BPPreSerializeSaveGame()"); }
	AActor* GetTetherObject() { return NativeCall<AActor*>(this, "APrimalCharacter.GetTetherObject()"); }
	void BP_OnSetRunning(bool bNewIsRunning) { NativeCall<void, bool>(this, "APrimalCharacter.BP_OnSetRunning(bool)", bNewIsRunning); }
	bool CharacterBuffsPreventFirstPerson() { return NativeCall<bool>(this, "APrimalCharacter.CharacterBuffsPreventFirstPerson()"); }
	void ServerCallFollowOne_Implementation(APrimalDinoCharacter* ForDinoChar) { NativeCall<void, APrimalDinoCharacter*>(this, "APrimalCharacter.ServerCallFollowOne_Implementation(APrimalDinoCharacter*)", ForDinoChar); }
	bool BPCanNotifyTeamAggroAI(APrimalDinoCharacter* Dino) { return NativeCall<bool, APrimalDinoCharacter*>(this, "APrimalCharacter.BPCanNotifyTeamAggroAI(APrimalDinoCharacter*)", Dino); }
	bool BPOverrideInventoryAccessInput_Implementation() { return NativeCall<bool>(this, "APrimalCharacter.BPOverrideInventoryAccessInput_Implementation()"); }
	bool BPAllowRunningWhileFalling() { return NativeCall<bool>(this, "APrimalCharacter.BPAllowRunningWhileFalling()"); }
	void SetNextAnimMontageSectionEx(UAnimMontage* AnimMontage, FName CurrentSectionName, FName NextSectionName, bool bStopAnimOnFailedSetNextSection, bool bReplicate, bool bReplicateToOwner) { NativeCall<void, UAnimMontage*, FName, FName, bool, bool, bool>(this, "APrimalCharacter.SetNextAnimMontageSectionEx(UAnimMontage*,FName,FName,bool,bool,bool)", AnimMontage, CurrentSectionName, NextSectionName, bStopAnimOnFailedSetNextSection, bReplicate, bReplicateToOwner); }
	static void GetbReadyToPoop_WrapperImpl(const void* Object, void* OutValue) { NativeCall<void, const void*, void*>(nullptr, "APrimalCharacter.GetbReadyToPoop_WrapperImpl(void*,void*)", Object, OutValue); }
	bool IsInReverseVacuumSealedSpace(const UE::Math::TVector<double>& Location, bool* pOutReverseVacuumSealed, bool* pOutReverseVacuumSealedOnDino, bool* pOutReverseVacuumSealedInActive, bool* pOutReverseVacuumSealedOnDinoInActive) { return NativeCall<bool, const UE::Math::TVector<double>&, bool*, bool*, bool*, bool*>(this, "APrimalCharacter.IsInReverseVacuumSealedSpace(UE::Math::TVector<double>&,bool*,bool*,bool*,bool*)", Location, pOutReverseVacuumSealed, pOutReverseVacuumSealedOnDino, pOutReverseVacuumSealedInActive, pOutReverseVacuumSealedOnDinoInActive); }
	bool HasRider() { return NativeCall<bool>(this, "APrimalCharacter.HasRider()"); }
	void ResetStencilValues() { NativeCall<void>(this, "APrimalCharacter.ResetStencilValues()"); }
	static void ForceUpdateCharacter(UWorld* World, APrimalCharacter* primalChar) { NativeCall<void, UWorld*, APrimalCharacter*>(nullptr, "APrimalCharacter.ForceUpdateCharacter(UWorld*,APrimalCharacter*)", World, primalChar); }
	UE::Math::TVector<double>* BPModifyRightDirectionInput_Implementation(UE::Math::TVector<double>* result, const UE::Math::TVector<double>& directionInput) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*, const UE::Math::TVector<double>&>(this, "APrimalCharacter.BPModifyRightDirectionInput_Implementation(UE::Math::TVector<double>&)", result, directionInput); }
	UE::Math::TVector<double>* GetVisualVelocity(UE::Math::TVector<double>* result) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*>(this, "APrimalCharacter.GetVisualVelocity()", result); }
	void BPAnimNotifyCustomState_End(FName CustomEventName, USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, const UAnimNotifyState* AnimNotifyObject) { NativeCall<void, FName, USkeletalMeshComponent*, UAnimSequenceBase*, const UAnimNotifyState*>(this, "APrimalCharacter.BPAnimNotifyCustomState_End(FName,USkeletalMeshComponent*,UAnimSequenceBase*,UAnimNotifyState*)", CustomEventName, MeshComp, Animation, AnimNotifyObject); }
	void BPOnPoopItemEmitted(ADroppedItem* EmittedPoopItem) { NativeCall<void, ADroppedItem*>(this, "APrimalCharacter.BPOnPoopItemEmitted(ADroppedItem*)", EmittedPoopItem); }
	unsigned __int64 GetLinkedPlayerDataID() { return NativeCall<unsigned __int64>(this, "APrimalCharacter.GetLinkedPlayerDataID()"); }
	USoundBase* GetNextCombatMusic_Implementation(APrimalCharacter* forCharacter, bool bIsDaytime) { return NativeCall<USoundBase*, APrimalCharacter*, bool>(this, "APrimalCharacter.GetNextCombatMusic_Implementation(APrimalCharacter*,bool)", forCharacter, bIsDaytime); }
	void BPAnimNotifyCustomState_Begin(FName CustomEventName, USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, float TotalDuration, const UAnimNotifyState* AnimNotifyObject) { NativeCall<void, FName, USkeletalMeshComponent*, UAnimSequenceBase*, float, const UAnimNotifyState*>(this, "APrimalCharacter.BPAnimNotifyCustomState_Begin(FName,USkeletalMeshComponent*,UAnimSequenceBase*,float,UAnimNotifyState*)", CustomEventName, MeshComp, Animation, TotalDuration, AnimNotifyObject); }
	EPhysicalSurface GetPhysMatTypeFromHit(const FHitResult& FromHit) { return NativeCall<EPhysicalSurface, const FHitResult&>(this, "APrimalCharacter.GetPhysMatTypeFromHit(FHitResult&)", FromHit); }
	float GetMaxStatusValue(EPrimalCharacterStatusValue::Type StatusValueType) { return NativeCall<float, EPrimalCharacterStatusValue::Type>(this, "APrimalCharacter.GetMaxStatusValue(EPrimalCharacterStatusValue::Type)", StatusValueType); }
	UNiagaraSystem* GetHurtFXNew_Niagara(APrimalCharacter* InstigatingChar) { return NativeCall<UNiagaraSystem*, APrimalCharacter*>(this, "APrimalCharacter.GetHurtFXNew_Niagara(APrimalCharacter*)", InstigatingChar); }
	void CallDrawFloatingHUD(AShooterHUD* HUD) { NativeCall<void, AShooterHUD*>(this, "APrimalCharacter.CallDrawFloatingHUD(AShooterHUD*)", HUD); }
	float GetSignificanceBasedAnimationBlend() { return NativeCall<float>(this, "APrimalCharacter.GetSignificanceBasedAnimationBlend()"); }
	AActor* GetOtherActorToIgnore() { return NativeCall<AActor*>(this, "APrimalCharacter.GetOtherActorToIgnore()"); }
	bool IsPrimalCharWalking() { return NativeCall<bool>(this, "APrimalCharacter.IsPrimalCharWalking()"); }
	static void SetbRemoteRunning_WrapperImpl(void* Object, const void* InValue) { NativeCall<void, void*, const void*>(nullptr, "APrimalCharacter.SetbRemoteRunning_WrapperImpl(void*,void*)", Object, InValue); }
	bool IsPrimalCharSwimming() { return NativeCall<bool>(this, "APrimalCharacter.IsPrimalCharSwimming()"); }
	void DoOutsideWorldCheck() { NativeCall<void>(this, "APrimalCharacter.DoOutsideWorldCheck()"); }
	void BPNotifyBPNotifyIsDamageCauserOfAddedBuff(APrimalBuff* buff) { NativeCall<void, APrimalBuff*>(this, "APrimalCharacter.BPNotifyBPNotifyIsDamageCauserOfAddedBuff(APrimalBuff*)", buff); }
	int AddTribeThreat(int AddedThreat) { return NativeCall<int, int>(this, "APrimalCharacter.AddTribeThreat(int)", AddedThreat); }
	UE::Math::TVector<double>* BPGetFPVViewLocation(UE::Math::TVector<double>* result, APrimalCharacter* viewingCharacter) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*, APrimalCharacter*>(this, "APrimalCharacter.BPGetFPVViewLocation(APrimalCharacter*)", result, viewingCharacter); }
	void BPRemovedAsPassenger(APrimalCharacter* character) { NativeCall<void, APrimalCharacter*>(this, "APrimalCharacter.BPRemovedAsPassenger(APrimalCharacter*)", character); }
	USoundAttenuation* GetDesiredOverrideAttenuationForAllAssociatedSounds(USoundBase* SoundToUse) { return NativeCall<USoundAttenuation*, USoundBase*>(this, "APrimalCharacter.GetDesiredOverrideAttenuationForAllAssociatedSounds(USoundBase*)", SoundToUse); }
	bool ShouldUseAutonomousCorrectionOffset_Implementation() { return NativeCall<bool>(this, "APrimalCharacter.ShouldUseAutonomousCorrectionOffset_Implementation()"); }
	void ClientNotifyLevelUp_Implementation() { NativeCall<void>(this, "APrimalCharacter.ClientNotifyLevelUp_Implementation()"); }
	FString* GetBaseDescriptiveName(FString* result) { return NativeCall<FString*, FString*>(this, "APrimalCharacter.GetBaseDescriptiveName()", result); }
	void ApplyCharacterSnapshotEquipmentForItem(UPrimalInventoryComponent* Inventory, UPrimalItem* ForItem, AActor* To) { NativeCall<void, UPrimalInventoryComponent*, UPrimalItem*, AActor*>(this, "APrimalCharacter.ApplyCharacterSnapshotEquipmentForItem(UPrimalInventoryComponent*,UPrimalItem*,AActor*)", Inventory, ForItem, To); }
	void ServerGiveDefaultWeapon_Implementation() { NativeCall<void>(this, "APrimalCharacter.ServerGiveDefaultWeapon_Implementation()"); }
	bool BPOverrideCameraDesiredPivotRotation(UE::Math::TRotator<double>* CurrentCameraPivotRotation, UE::Math::TRotator<double>& DesiredCameraPivotRotation) { if (!CurrentCameraPivotRotation) throw std::invalid_argument("Null native value parameter"); return NativeCall<bool, UE :: Math :: TRotator < double >, UE :: Math :: TRotator < double > &>(this, "APrimalCharacter.BPOverrideCameraDesiredPivotRotation(UE::Math::TRotator<double>,UE::Math::TRotator<double>&)", *CurrentCameraPivotRotation, DesiredCameraPivotRotation); }
	float GetCompassRotation() { return NativeCall<float>(this, "APrimalCharacter.GetCompassRotation()"); }
	void NetJumpToMontageSection_Implementation(FName SectionName, UAnimMontage* AnimMontage, bool bSkipOwner) { NativeCall<void, FName, UAnimMontage*, bool>(this, "APrimalCharacter.NetJumpToMontageSection_Implementation(FName,UAnimMontage*,bool)", SectionName, AnimMontage, bSkipOwner); }
	void BPRemoveCharacterSnapshot(UPrimalItem* Item, AActor* From) { NativeCall<void, UPrimalItem*, AActor*>(this, "APrimalCharacter.BPRemoveCharacterSnapshot(UPrimalItem*,AActor*)", Item, From); }
	bool CanPlayFootstepInMovementMode_Implementation(EMovementMode MovementMode) { return NativeCall<bool, EMovementMode>(this, "APrimalCharacter.CanPlayFootstepInMovementMode_Implementation(EMovementMode)", MovementMode); }
	bool HasItemTrait(FName TraitName) { return NativeCall<bool, FName>(this, "APrimalCharacter.HasItemTrait(FName)", TraitName); }
	bool BPPreventFallDamage(const FHitResult& HitResult, float FallDamageAmount) { return NativeCall<bool, const FHitResult&, float>(this, "APrimalCharacter.BPPreventFallDamage(FHitResult&,float)", HitResult, FallDamageAmount); }
	float GetPercentStatusValue(EPrimalCharacterStatusValue::Type StatusValueType) { return NativeCall<float, EPrimalCharacterStatusValue::Type>(this, "APrimalCharacter.GetPercentStatusValue(EPrimalCharacterStatusValue::Type)", StatusValueType); }
	bool HasAnyBuffWithTag(FName Tag, bool bIncludeCustomTag, bool bIncludeDeactivated) { return NativeCall<bool, FName, bool, bool>(this, "APrimalCharacter.HasAnyBuffWithTag(FName,bool,bool)", Tag, bIncludeCustomTag, bIncludeDeactivated); }
	void OnRep_PropertyBag() { NativeCall<void>(this, "APrimalCharacter.OnRep_PropertyBag()"); }
	void ServerCallLandFlyerOne(APrimalDinoCharacter* ForDinoChar) { NativeCall<void, APrimalDinoCharacter*>(this, "APrimalCharacter.ServerCallLandFlyerOne(APrimalDinoCharacter*)", ForDinoChar); }
	void SetMaxHealth(float newMaxHealth) { NativeCall<void, float>(this, "APrimalCharacter.SetMaxHealth(float)", newMaxHealth); }
	bool BPAllowEncroachment_Implementation(AShooterCharacter* MyChar) { return NativeCall<bool, AShooterCharacter*>(this, "APrimalCharacter.BPAllowEncroachment_Implementation(AShooterCharacter*)", MyChar); }
	bool BPHasPlayerController() { return NativeCall<bool>(this, "APrimalCharacter.BPHasPlayerController()"); }
	void BPOnLethalDamage(float KillingDamage, const FDamageEvent& DamageEvent, AController* Killer, AActor* DamageCauser, bool& bPreventDeath) { NativeCall<void, float, const FDamageEvent&, AController*, AActor*, bool&>(this, "APrimalCharacter.BPOnLethalDamage(float,FDamageEvent&,AController*,AActor*,bool&)", KillingDamage, DamageEvent, Killer, DamageCauser, bPreventDeath); }
	bool BPOverrideInventoryAccessInput() { return NativeCall<bool>(this, "APrimalCharacter.BPOverrideInventoryAccessInput()"); }
	APrimalShip* GetBasedOnRaft(bool bOnlyCountDirectBase, bool bOnlyCountIndirectBase) { return NativeCall<APrimalShip*, bool, bool>(this, "APrimalCharacter.GetBasedOnRaft(bool,bool)", bOnlyCountDirectBase, bOnlyCountIndirectBase); }
	static void SetNetDynamicMusicSound_WrapperImpl(void* Object, const void* InValue) { NativeCall<void, void*, const void*>(nullptr, "APrimalCharacter.SetNetDynamicMusicSound_WrapperImpl(void*,void*)", Object, InValue); }
	bool HasBuffPreventTargetting() { return NativeCall<bool>(this, "APrimalCharacter.HasBuffPreventTargetting()"); }
	bool BPOverrideIsValidForStatusRecovery(bool bIsValid) { return NativeCall<bool, bool>(this, "APrimalCharacter.BPOverrideIsValidForStatusRecovery(bool)", bIsValid); }
	static void SetbIsSleeping_WrapperImpl(void* Object, const void* InValue) { NativeCall<void, void*, const void*>(nullptr, "APrimalCharacter.SetbIsSleeping_WrapperImpl(void*,void*)", Object, InValue); }
	static void SetTetherRadius_WrapperImpl(void* Object, const void* InValue) { NativeCall<void, void*, const void*>(nullptr, "APrimalCharacter.SetTetherRadius_WrapperImpl(void*,void*)", Object, InValue); }
	int GetExtraPaintingMeshCount() { return NativeCall<int>(this, "APrimalCharacter.GetExtraPaintingMeshCount()"); }
	bool GetPrimalCameraSettings(const FPrimalCameraProfile& ForCameraProfile, FPrimalCameraSettings& OutCameraSettings, const APrimalCharacter* CharForConditionChecks) { return NativeCall<bool, const FPrimalCameraProfile&, FPrimalCameraSettings&, const APrimalCharacter*>(this, "APrimalCharacter.GetPrimalCameraSettings(FPrimalCameraProfile&,FPrimalCameraSettings&,APrimalCharacter*)", ForCameraProfile, OutCameraSettings, CharForConditionChecks); }
	bool BPGetIsBuried_Implementation() { return NativeCall<bool>(this, "APrimalCharacter.BPGetIsBuried_Implementation()"); }
	void BPOnImmobilize(bool bImmobilize, AActor* UsingActor) { NativeCall<void, bool, AActor*>(this, "APrimalCharacter.BPOnImmobilize(bool,AActor*)", bImmobilize, UsingActor); }
	static void GetDraggingCharacter_WrapperImpl(const void* Object, void* OutValue) { NativeCall<void, const void*, void*>(nullptr, "APrimalCharacter.GetDraggingCharacter_WrapperImpl(void*,void*)", Object, OutValue); }
	float ModifyRootMotionScale(float inScale, UAnimMontage* RootMontage) { return NativeCall<float, float, UAnimMontage*>(this, "APrimalCharacter.ModifyRootMotionScale(float,UAnimMontage*)", inScale, RootMontage); }
	void GetCharactersGrappledToMe(TArray<APrimalCharacter*, TSizedDefaultAllocator<32> >& GrappledCharsArray) { NativeCall<void, TArray<APrimalCharacter*, TSizedDefaultAllocator<32> >&>(this, "APrimalCharacter.GetCharactersGrappledToMe(TArray<APrimalCharacter*,TSizedDefaultAllocator<32>>&)", GrappledCharsArray); }
	void BPDidTeleport() { NativeCall<void>(this, "APrimalCharacter.BPDidTeleport()"); }
	UNiagaraSystem* GetHurtFX_Niagara(bool bIsAttacker) { return NativeCall<UNiagaraSystem*, bool>(this, "APrimalCharacter.GetHurtFX_Niagara(bool)", bIsAttacker); }
	float BPGetFinalMaxSpeed(float BaseMaxSpeed, float MaxSpeedAfterMultiplier) { return NativeCall<float, float, float>(this, "APrimalCharacter.BPGetFinalMaxSpeed(float,float)", BaseMaxSpeed, MaxSpeedAfterMultiplier); }
	bool BPIsConscious() { return NativeCall<bool>(this, "APrimalCharacter.BPIsConscious()"); }
	bool CharacterIsCarriedAsPassenger() { return NativeCall<bool>(this, "APrimalCharacter.CharacterIsCarriedAsPassenger()"); }
	bool GetItemSoundOverrides(USoundBase* InSound, USoundBase*& OutSound) { return NativeCall<bool, USoundBase*, USoundBase*&>(this, "APrimalCharacter.GetItemSoundOverrides(USoundBase*,USoundBase*&)", InSound, OutSound); }
	static void GetbReplicatedIsSubmerged_WrapperImpl(const void* Object, void* OutValue) { NativeCall<void, const void*, void*>(nullptr, "APrimalCharacter.GetbReplicatedIsSubmerged_WrapperImpl(void*,void*)", Object, OutValue); }
	void BPPlayDying(float KillingDamage, const FDamageEvent& DamageEvent, APawn* InstigatingPawn, AActor* DamageCauser) { NativeCall<void, float, const FDamageEvent&, APawn*, AActor*>(this, "APrimalCharacter.BPPlayDying(float,FDamageEvent&,APawn*,AActor*)", KillingDamage, DamageEvent, InstigatingPawn, DamageCauser); }
	void ServerCallAggressive_Implementation() { NativeCall<void>(this, "APrimalCharacter.ServerCallAggressive_Implementation()"); }
	void ExecSetPawnSleeping(bool bEnable) { NativeCall<void, bool>(this, "APrimalCharacter.ExecSetPawnSleeping(bool)", bEnable); }
	float GetTribeThreatPercentage() { return NativeCall<float>(this, "APrimalCharacter.GetTribeThreatPercentage()"); }
	USoundBase* GetNextCombatMusic(APrimalCharacter* forCharacter, bool bIsDaytime) { return NativeCall<USoundBase*, APrimalCharacter*, bool>(this, "APrimalCharacter.GetNextCombatMusic(APrimalCharacter*,bool)", forCharacter, bIsDaytime); }
	bool BPPreventRunning() { return NativeCall<bool>(this, "APrimalCharacter.BPPreventRunning()"); }
	void BPGetOverrideCameraInterpSpeed(float DefaultTPVCameraSpeedInterpolationMultiplier, float DefaultTPVOffsetInterpSpeed, float& TPVCameraSpeedInterpolationMultiplier, float& TPVOffsetInterpSpeed) { NativeCall<void, float, float, float&, float&>(this, "APrimalCharacter.BPGetOverrideCameraInterpSpeed(float,float,float&,float&)", DefaultTPVCameraSpeedInterpolationMultiplier, DefaultTPVOffsetInterpSpeed, TPVCameraSpeedInterpolationMultiplier, TPVOffsetInterpSpeed); }
	bool GetItemTraitModifierTotal(FName TraitName, float& OutValue, int ModifierIndex, bool bInitOutValue) { return NativeCall<bool, FName, float&, int, bool>(this, "APrimalCharacter.GetItemTraitModifierTotal(FName,float&,int,bool)", TraitName, OutValue, ModifierIndex, bInitOutValue); }
	void UpdateTickSetting() { NativeCall<void>(this, "APrimalCharacter.UpdateTickSetting()"); }
	void BPOnMovementModeChangedNotify(EMovementMode PrevMovementMode, unsigned char PreviousCustomMode) { NativeCall<void, EMovementMode, unsigned char>(this, "APrimalCharacter.BPOnMovementModeChangedNotify(EMovementMode,unsignedchar)", PrevMovementMode, PreviousCustomMode); }
	void BP_OnJumpPressed() { NativeCall<void>(this, "APrimalCharacter.BP_OnJumpPressed()"); }
	bool IsHostileTo(APrimalCharacter* OtherCharacter, bool ignoreDead) { return NativeCall<bool, APrimalCharacter*, bool>(this, "APrimalCharacter.IsHostileTo(APrimalCharacter*,bool)", OtherCharacter, ignoreDead); }
	bool BPOverrideCameraPivotLocationInterpParams(const FPrimalCameraParams& CameraParams, const FPrimalCameraPivotZInterpOverrides& PivotZInterpOverrides, const FPrimalCameraInterpParams& LastInterpParamsX, const FPrimalCameraInterpParams& LastInterpParamsY, const FPrimalCameraInterpParams& LastInterpParamsZ, FPrimalCameraInterpParams& OutInterpParamsX, FPrimalCameraInterpParams& OutInterpParamsY, FPrimalCameraInterpParams& OutInterpParamsZ) { return NativeCall<bool, const FPrimalCameraParams&, const FPrimalCameraPivotZInterpOverrides&, const FPrimalCameraInterpParams&, const FPrimalCameraInterpParams&, const FPrimalCameraInterpParams&, FPrimalCameraInterpParams&, FPrimalCameraInterpParams&, FPrimalCameraInterpParams&>(this, "APrimalCharacter.BPOverrideCameraPivotLocationInterpParams(FPrimalCameraParams&,FPrimalCameraPivotZInterpOverrides&,FPrimalCameraInterpParams&,FPrimalCameraInterpParams&,FPrimalCameraInterpParams&,FPrimalCameraInterpParams&,FPrimalCameraInterpParams&,FPrimalCameraInterpParams&)", CameraParams, PivotZInterpOverrides, LastInterpParamsX, LastInterpParamsY, LastInterpParamsZ, OutInterpParamsX, OutInterpParamsY, OutInterpParamsZ); }
	void OnRep_IsDead() { NativeCall<void>(this, "APrimalCharacter.OnRep_IsDead()"); }
	UMeshComponent* GetCollisionMesh() { return NativeCall<UMeshComponent*>(this, "APrimalCharacter.GetCollisionMesh()"); }
	void BPNotifyOnBuffAdded(APrimalBuff* Buff) { NativeCall<void, APrimalBuff*>(this, "APrimalCharacter.BPNotifyOnBuffAdded(APrimalBuff*)", Buff); }
	bool ShouldIgnoreHitResult(const UWorld* InWorld, const FHitResult& TestHit, const UE::Math::TVector<double>& MovementDirDenormalized) { return NativeCall<bool, const UWorld*, const FHitResult&, const UE::Math::TVector<double>&>(this, "APrimalCharacter.ShouldIgnoreHitResult(UWorld*,FHitResult&,UE::Math::TVector<double>&)", InWorld, TestHit, MovementDirDenormalized); }
	static void SetTetherActor_WrapperImpl(void* Object, const void* InValue) { NativeCall<void, void*, const void*>(nullptr, "APrimalCharacter.SetTetherActor_WrapperImpl(void*,void*)", Object, InValue); }
	bool UseFastTurretTargeting() { return NativeCall<bool>(this, "APrimalCharacter.UseFastTurretTargeting()"); }
	void RegisterWithAnimSharing() { NativeCall<void>(this, "APrimalCharacter.RegisterWithAnimSharing()"); }
	void BPSetLastDamageEventInstigator(AController* InstController) { NativeCall<void, AController*>(this, "APrimalCharacter.BPSetLastDamageEventInstigator(AController*)", InstController); }
	void BPNetSetMovementMode(EMovementMode NewMovementMode) { NativeCall<void, EMovementMode>(this, "APrimalCharacter.BPNetSetMovementMode(EMovementMode)", NewMovementMode); }
	static void SetbIsImmobilized_WrapperImpl(void* Object, const void* InValue) { NativeCall<void, void*, const void*>(nullptr, "APrimalCharacter.SetbIsImmobilized_WrapperImpl(void*,void*)", Object, InValue); }
	bool BP_ModifySavedMoveAcceleration_PreRep(UE::Math::TVector<double>& ModifyClientAccel) { return NativeCall<bool, UE::Math::TVector<double>&>(this, "APrimalCharacter.BP_ModifySavedMoveAcceleration_PreRep(UE::Math::TVector<double>&)", ModifyClientAccel); }
	static void GetNetDynamicMusicSound_WrapperImpl(const void* Object, void* OutValue) { NativeCall<void, const void*, void*>(nullptr, "APrimalCharacter.GetNetDynamicMusicSound_WrapperImpl(void*,void*)", Object, OutValue); }
	void BPApplyCharacterSnapshot(UPrimalItem* Item, AActor* To, UE::Math::TVector<double>* Offset, float MaxExtent, int Pose, bool bCollisionOn) { if (!Offset) throw std::invalid_argument("Null native value parameter"); return NativeCall<void, UPrimalItem *, AActor *, UE :: Math :: TVector < double >, float, int, bool>(this, "APrimalCharacter.BPApplyCharacterSnapshot(UPrimalItem*,AActor*,UE::Math::TVector<double>,float,int,bool)", Item, To, *Offset, MaxExtent, Pose, bCollisionOn); }
	static void SetReplicatedDeathAnim_WrapperImpl(void* Object, const void* InValue) { NativeCall<void, void*, const void*>(nullptr, "APrimalCharacter.SetReplicatedDeathAnim_WrapperImpl(void*,void*)", Object, InValue); }
	UAnimationAsset* GetFinalDeathAnim(FName DeathAnimType) { return NativeCall<UAnimationAsset*, FName>(this, "APrimalCharacter.GetFinalDeathAnim(FName)", DeathAnimType); }
	void LaunchCharacter_WithLocationOfImpulse(UE::Math::TVector<double>* LaunchVelocity, bool bXYOverride, bool bZOverride, UE::Math::TVector<double>* LocationOfImpulse) { if (!LaunchVelocity) throw std::invalid_argument("Null native value parameter"); if (!LocationOfImpulse) throw std::invalid_argument("Null native value parameter"); return NativeCall<void, UE :: Math :: TVector < double >, bool, bool, UE :: Math :: TVector < double >>(this, "APrimalCharacter.LaunchCharacter_WithLocationOfImpulse(UE::Math::TVector<double>,bool,bool,UE::Math::TVector<double>)", *LaunchVelocity, bXYOverride, bZOverride, *LocationOfImpulse); }
	void NetSetCharacterMovementVelocity(bool bSetNewVelocity, UE::Math::TVector<double>* NewVelocity, bool bSetNewMovementMode, EMovementMode NewMovementMode) { if (!NewVelocity) throw std::invalid_argument("Null native value parameter"); return NativeCall<void, bool, UE :: Math :: TVector < double >, bool, EMovementMode>(this, "APrimalCharacter.NetSetCharacterMovementVelocity(bool,UE::Math::TVector<double>,bool,EMovementMode)", bSetNewVelocity, *NewVelocity, bSetNewMovementMode, NewMovementMode); }
	bool BPOverrideCameraArmLength(const FPrimalCameraParams& CameraParams, float CurrentCameraArmLength, float& DesiredCameraArmLength) { return NativeCall<bool, const FPrimalCameraParams&, float, float&>(this, "APrimalCharacter.BPOverrideCameraArmLength(FPrimalCameraParams&,float,float&)", CameraParams, CurrentCameraArmLength, DesiredCameraArmLength); }
	void BP_OnEndCarried(bool bFromDino, bool bCancelAnyCarryBuffs) { NativeCall<void, bool, bool>(this, "APrimalCharacter.BP_OnEndCarried(bool,bool)", bFromDino, bCancelAnyCarryBuffs); }
	float GetTransitionToTargetingCameraInterpSpeed() { return NativeCall<float>(this, "APrimalCharacter.GetTransitionToTargetingCameraInterpSpeed()"); }
	static void GetbIsProne_WrapperImpl(const void* Object, void* OutValue) { NativeCall<void, const void*, void*>(nullptr, "APrimalCharacter.GetbIsProne_WrapperImpl(void*,void*)", Object, OutValue); }
	UE::Math::TRotator<double>* GetDraggedRelativeRotation(UE::Math::TRotator<double>* result, bool bFlip180) { return NativeCall<UE::Math::TRotator<double>*, UE::Math::TRotator<double>*, bool>(this, "APrimalCharacter.GetDraggedRelativeRotation(bool)", result, bFlip180); }
	void ModifyRootMotion(FRootMotionMovementParams& InOutRootMotion, float DeltaTime) { NativeCall<void, FRootMotionMovementParams&, float>(this, "APrimalCharacter.ModifyRootMotion(FRootMotionMovementParams&,float)", InOutRootMotion, DeltaTime); }
	static void GetTetherRadius_WrapperImpl(const void* Object, void* OutValue) { NativeCall<void, const void*, void*>(nullptr, "APrimalCharacter.GetTetherRadius_WrapperImpl(void*,void*)", Object, OutValue); }
	void TrySwitchFastInventory() { NativeCall<void>(this, "APrimalCharacter.TrySwitchFastInventory()"); }
	void ClientNotifyLevelUp() { NativeCall<void>(this, "APrimalCharacter.ClientNotifyLevelUp()"); }
	bool BPPreventFirstPerson() { return NativeCall<bool>(this, "APrimalCharacter.BPPreventFirstPerson()"); }
	void ClientSetNextAnimMontageSection(UAnimMontage* AnimMontage, FName CurrentSectionName, FName NextSectionName, bool bStopAnimOnFailedSetNextSection, bool bSetOnOwner) { NativeCall<void, UAnimMontage*, FName, FName, bool, bool>(this, "APrimalCharacter.ClientSetNextAnimMontageSection(UAnimMontage*,FName,FName,bool,bool)", AnimMontage, CurrentSectionName, NextSectionName, bStopAnimOnFailedSetNextSection, bSetOnOwner); }
	void NetPlayDeathAnimIfNeeded(bool bOnlyPlayOnClient) { NativeCall<void, bool>(this, "APrimalCharacter.NetPlayDeathAnimIfNeeded(bool)", bOnlyPlayOnClient); }
	UE::Math::TVector<double>* GetTargetingLocation(UE::Math::TVector<double>* result, const AActor* Attacker) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*, const AActor*>(this, "APrimalCharacter.GetTargetingLocation(AActor*)", result, Attacker); }
	UE::Math::TVector<double>* GetNavAgentLocation(UE::Math::TVector<double>* result) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*>(this, "APrimalCharacter.GetNavAgentLocation()", result); }
	UE::Math::TVector<double>* GetTetheredDestination(UE::Math::TVector<double>* result, const UE::Math::TVector<double>& Destination, float AdditionalRadius) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*, const UE::Math::TVector<double>&, float>(this, "APrimalCharacter.GetTetheredDestination(UE::Math::TVector<double>&,float)", result, Destination, AdditionalRadius); }
	bool BP_IsCharacterHardAttached(bool bIgnoreRiding, bool bIgnoreCarried) { return NativeCall<bool, bool, bool>(this, "APrimalCharacter.BP_IsCharacterHardAttached(bool,bool)", bIgnoreRiding, bIgnoreCarried); }
	static void GetDraggedCharacter_WrapperImpl(const void* Object, void* OutValue) { NativeCall<void, const void*, void*>(nullptr, "APrimalCharacter.GetDraggedCharacter_WrapperImpl(void*,void*)", Object, OutValue); }
	void NetUpdateTribeName_Implementation(const FString& NewTribeName) { NativeCall<void, const FString&>(this, "APrimalCharacter.NetUpdateTribeName_Implementation(FString&)", NewTribeName); }
	void BPOverrideHeldItemSlot(int ItemSlot) { NativeCall<void, int>(this, "APrimalCharacter.BPOverrideHeldItemSlot(int)", ItemSlot); }
	bool BPCanBeBaseForCharacter(APawn* Pawn) { return NativeCall<bool, APawn*>(this, "APrimalCharacter.BPCanBeBaseForCharacter(APawn*)", Pawn); }
	APrimalDinoCharacter* GetShipOrRaftPointIsOverOrInside(UE::Math::TVector<double>* Point, bool bVerifyInside) { if (!Point) throw std::invalid_argument("Null native value parameter"); return NativeCall<APrimalDinoCharacter *, UE :: Math :: TVector < double >, bool>(this, "APrimalCharacter.GetShipOrRaftPointIsOverOrInside(UE::Math::TVector<double>,bool)", *Point, bVerifyInside); }
	void BlueprintAnimNotifyCustomEvent(FName CustomEventName, USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, const UAnimNotify* AnimNotifyObject) { NativeCall<void, FName, USkeletalMeshComponent*, UAnimSequenceBase*, const UAnimNotify*>(this, "APrimalCharacter.BlueprintAnimNotifyCustomEvent(FName,USkeletalMeshComponent*,UAnimSequenceBase*,UAnimNotify*)", CustomEventName, MeshComp, Animation, AnimNotifyObject); }
	bool UsesPlayerSleeping() { return NativeCall<bool>(this, "APrimalCharacter.UsesPlayerSleeping()"); }
	static void SetbIsMassMoving_WrapperImpl(void* Object, const void* InValue) { NativeCall<void, void*, const void*>(nullptr, "APrimalCharacter.SetbIsMassMoving_WrapperImpl(void*,void*)", Object, InValue); }
	bool FlyingUseHighQualityCollision() { return NativeCall<bool>(this, "APrimalCharacter.FlyingUseHighQualityCollision()"); }
	void ClientOrderedMoveTo(UE::Math::TVector<double>* MoveToLoc) { if (!MoveToLoc) throw std::invalid_argument("Null native value parameter"); return NativeCall<void, UE :: Math :: TVector < double >>(this, "APrimalCharacter.ClientOrderedMoveTo(UE::Math::TVector<double>)", *MoveToLoc); }
	static void SetEquippedArmorDurabilityPercent2_WrapperImpl(void* Object, const void* InValue) { NativeCall<void, void*, const void*>(nullptr, "APrimalCharacter.SetEquippedArmorDurabilityPercent2_WrapperImpl(void*,void*)", Object, InValue); }
	void NetDidLand() { NativeCall<void>(this, "APrimalCharacter.NetDidLand()"); }
	float GetBabyAge() { return NativeCall<float>(this, "APrimalCharacter.GetBabyAge()"); }
	bool UsePlayerControlCollisionIK() { return NativeCall<bool>(this, "APrimalCharacter.UsePlayerControlCollisionIK()"); }
	void ClientStopAnimation(UAnimMontage* AnimMontage, bool bStopOnOwner, float BlendOutTime) { NativeCall<void, UAnimMontage*, bool, float>(this, "APrimalCharacter.ClientStopAnimation(UAnimMontage*,bool,float)", AnimMontage, bStopOnOwner, BlendOutTime); }
	static void GetbIsImmobilized_WrapperImpl(const void* Object, void* OutValue) { NativeCall<void, const void*, void*>(nullptr, "APrimalCharacter.GetbIsImmobilized_WrapperImpl(void*,void*)", Object, OutValue); }
	UParticleSystem* GetHurtFXNew(APrimalCharacter* InstigatingChar) { return NativeCall<UParticleSystem*, APrimalCharacter*>(this, "APrimalCharacter.GetHurtFXNew(APrimalCharacter*)", InstigatingChar); }
	static void GetTetherActor_WrapperImpl(const void* Object, void* OutValue) { NativeCall<void, const void*, void*>(nullptr, "APrimalCharacter.GetTetherActor_WrapperImpl(void*,void*)", Object, OutValue); }
	bool IsSwimmingOnWaterSurface() { return NativeCall<bool>(this, "APrimalCharacter.IsSwimmingOnWaterSurface()"); }
	void UpdatedBaseAnimSharingComponent() { NativeCall<void>(this, "APrimalCharacter.UpdatedBaseAnimSharingComponent()"); }
	static void SetDraggingCharacter_WrapperImpl(void* Object, const void* InValue) { NativeCall<void, void*, const void*>(nullptr, "APrimalCharacter.SetDraggingCharacter_WrapperImpl(void*,void*)", Object, InValue); }
	void ClientFailedPoop() { NativeCall<void>(this, "APrimalCharacter.ClientFailedPoop()"); }
	float GetDeathHarvestMaxHealth() { return NativeCall<float>(this, "APrimalCharacter.GetDeathHarvestMaxHealth()"); }
	void BPTimerNonDedicated() { NativeCall<void>(this, "APrimalCharacter.BPTimerNonDedicated()"); }
	void OnEQSQueryComplete_Implementation(const FPrimalEQSQueryResult& QueryResult) { NativeCall<void, const FPrimalEQSQueryResult&>(this, "APrimalCharacter.OnEQSQueryComplete_Implementation(FPrimalEQSQueryResult&)", QueryResult); }
	void ClientPlayAnimation(UAnimMontage* AnimMontage, float PlayRate, FName StartSectionName, bool bPlayOnOwner, bool bForceTickPoseAndServerUpdateMesh, bool bIsEmote) { NativeCall<void, UAnimMontage*, float, FName, bool, bool, bool>(this, "APrimalCharacter.ClientPlayAnimation(UAnimMontage*,float,FName,bool,bool,bool)", AnimMontage, PlayRate, StartSectionName, bPlayOnOwner, bForceTickPoseAndServerUpdateMesh, bIsEmote); }
	void BP_OnCameraStyleChangedNotify(const FName& NewCameraStyle, const FName& OldCameraStyle) { NativeCall<void, const FName&, const FName&>(this, "APrimalCharacter.BP_OnCameraStyleChangedNotify(FName&,FName&)", NewCameraStyle, OldCameraStyle); }
	bool IsFirstPerson() { return NativeCall<bool>(this, "APrimalCharacter.IsFirstPerson()"); }
	UE::Math::TVector<double>* GetCapsuleBottomLocation(UE::Math::TVector<double>* result) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*>(this, "APrimalCharacter.GetCapsuleBottomLocation()", result); }
	void JumpImmediately() { NativeCall<void>(this, "APrimalCharacter.JumpImmediately()"); }
	void ProcessUndergoundCheck() { NativeCall<void>(this, "APrimalCharacter.ProcessUndergoundCheck()"); }
	bool CanPlayFootstepInMovementMode(EMovementMode MovementMode) { return NativeCall<bool, EMovementMode>(this, "APrimalCharacter.CanPlayFootstepInMovementMode(EMovementMode)", MovementMode); }
	float BP_GetMaxSpeedModifier() { return NativeCall<float>(this, "APrimalCharacter.BP_GetMaxSpeedModifier()"); }
	static void GetbIsSleeping_WrapperImpl(const void* Object, void* OutValue) { NativeCall<void, const void*, void*>(nullptr, "APrimalCharacter.GetbIsSleeping_WrapperImpl(void*,void*)", Object, OutValue); }
	bool UnstasisCheckRagdollGround() { return NativeCall<bool>(this, "APrimalCharacter.UnstasisCheckRagdollGround()"); }
	void StartMeshTeleportInterp(float InterpTimeSeconds, const UE::Math::TVector<double>& PreTeleportLocation) { NativeCall<void, float, const UE::Math::TVector<double>&>(this, "APrimalCharacter.StartMeshTeleportInterp(float,UE::Math::TVector<double>&)", InterpTimeSeconds, PreTeleportLocation); }
	void TakeSeatingStructureHandIK() { NativeCall<void>(this, "APrimalCharacter.TakeSeatingStructureHandIK()"); }
	bool IsDraggingCharacter() { return NativeCall<bool>(this, "APrimalCharacter.IsDraggingCharacter()"); }
	bool BPShouldLimitRightDirection_Implementation() { return NativeCall<bool>(this, "APrimalCharacter.BPShouldLimitRightDirection_Implementation()"); }
	void ServerCallFollow_Implementation() { NativeCall<void>(this, "APrimalCharacter.ServerCallFollow_Implementation()"); }
	bool ApplyDraggedSettings(UPrimalCorpseMotionComponent* MotionOwner) { return NativeCall<bool, UPrimalCorpseMotionComponent*>(this, "APrimalCharacter.ApplyDraggedSettings(UPrimalCorpseMotionComponent*)", MotionOwner); }
	void PreApplyAccumulatedForces(float DeltaSeconds, UE::Math::TVector<double>& PendingImpulseToApply, UE::Math::TVector<double>& PendingForceToApply) { NativeCall<void, float, UE::Math::TVector<double>&, UE::Math::TVector<double>&>(this, "APrimalCharacter.PreApplyAccumulatedForces(float,UE::Math::TVector<double>&,UE::Math::TVector<double>&)", DeltaSeconds, PendingImpulseToApply, PendingForceToApply); }
	void SetEnableIK(bool bEnable) { NativeCall<void, bool>(this, "APrimalCharacter.SetEnableIK(bool)", bEnable); }
	void BPOverridePrimalCameraInterpMultiplier(float CurrentMultiplier, int ForAxis, float& OutMultiplier) { NativeCall<void, float, int, float&>(this, "APrimalCharacter.BPOverridePrimalCameraInterpMultiplier(float,int,float&)", CurrentMultiplier, ForAxis, OutMultiplier); }
	void ClearControlInputVector() { NativeCall<void>(this, "APrimalCharacter.ClearControlInputVector()"); }
	UAnimSequence* GetOverridenAnimSequence(UAnimSequence* AnimSeq) { return NativeCall<UAnimSequence*, UAnimSequence*>(this, "APrimalCharacter.GetOverridenAnimSequence(UAnimSequence*)", AnimSeq); }
	static void SetReplicatedMaxTorpor_WrapperImpl(void* Object, const void* InValue) { NativeCall<void, void*, const void*>(nullptr, "APrimalCharacter.SetReplicatedMaxTorpor_WrapperImpl(void*,void*)", Object, InValue); }
	void ClearBasedCharacters() { NativeCall<void>(this, "APrimalCharacter.ClearBasedCharacters()"); }
	void ServerCallAttackTargetNew_Implementation() { NativeCall<void>(this, "APrimalCharacter.ServerCallAttackTargetNew_Implementation()"); }
	bool BPOverrideFPVViewLocation(APrimalCharacter* viewingCharacter) { return NativeCall<bool, APrimalCharacter*>(this, "APrimalCharacter.BPOverrideFPVViewLocation(APrimalCharacter*)", viewingCharacter); }
	static void SetEquippedArmorDurabilityPercent3_WrapperImpl(void* Object, const void* InValue) { NativeCall<void, void*, const void*>(nullptr, "APrimalCharacter.SetEquippedArmorDurabilityPercent3_WrapperImpl(void*,void*)", Object, InValue); }
	UE::Math::TVector<double>* BPModifyForwardDirectionInput_Implementation(UE::Math::TVector<double>* result, const UE::Math::TVector<double>& directionInput) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*, const UE::Math::TVector<double>&>(this, "APrimalCharacter.BPModifyForwardDirectionInput_Implementation(UE::Math::TVector<double>&)", result, directionInput); }
	bool BPHandleLeftShoulderButton() { return NativeCall<bool>(this, "APrimalCharacter.BPHandleLeftShoulderButton()"); }
	bool IsDamageOccludedByStructures(AActor* DamageCauser) { return NativeCall<bool, AActor*>(this, "APrimalCharacter.IsDamageOccludedByStructures(AActor*)", DamageCauser); }
	void TempDampenInputAcceleration() { NativeCall<void>(this, "APrimalCharacter.TempDampenInputAcceleration()"); }
	float BPGetArmorDurabilityDecreaseMultiplier() { return NativeCall<float>(this, "APrimalCharacter.BPGetArmorDurabilityDecreaseMultiplier()"); }
	static void GetTribeName_WrapperImpl(const void* Object, void* OutValue) { NativeCall<void, const void*, void*>(nullptr, "APrimalCharacter.GetTribeName_WrapperImpl(void*,void*)", Object, OutValue); }
	bool FillVolumetricDispatchesForFluidInteraction(bool bDebug, bool bTriggerEvents, UActorComponent* interactionComponent, AActor* dispatcher) { return NativeCall<bool, bool, bool, UActorComponent*, AActor*>(this, "APrimalCharacter.FillVolumetricDispatchesForFluidInteraction(bool,bool,UActorComponent*,AActor*)", bDebug, bTriggerEvents, interactionComponent, dispatcher); }
	bool BPInterceptAttemptedCarriedBy(APrimalCharacter* Carrier) { return NativeCall<bool, APrimalCharacter*>(this, "APrimalCharacter.BPInterceptAttemptedCarriedBy(APrimalCharacter*)", Carrier); }
	void SetDefaultCameraStyleForController(APlayerController* APC) { NativeCall<void, APlayerController*>(this, "APrimalCharacter.SetDefaultCameraStyleForController(APlayerController*)", APC); }
	static void GetReplicatedCurrentHealth_WrapperImpl(const void* Object, void* OutValue) { NativeCall<void, const void*, void*>(nullptr, "APrimalCharacter.GetReplicatedCurrentHealth_WrapperImpl(void*,void*)", Object, OutValue); }
	bool IsProne() { return NativeCall<bool>(this, "APrimalCharacter.IsProne()"); }
	bool BPCustomRequest(FName RequestName, int& OutIndex, int InIndex, AActor* FromActor) { return NativeCall<bool, FName, int&, int, AActor*>(this, "APrimalCharacter.BPCustomRequest(FName,int&,int,AActor*)", RequestName, OutIndex, InIndex, FromActor); }
	bool LivesInWater() { return NativeCall<bool>(this, "APrimalCharacter.LivesInWater()"); }
	void ServerCallStayOne(APrimalDinoCharacter* ForDinoChar) { NativeCall<void, APrimalDinoCharacter*>(this, "APrimalCharacter.ServerCallStayOne(APrimalDinoCharacter*)", ForDinoChar); }
	bool BPOverrideCameraDesiredPivotOffset(const FPrimalCameraParams& CameraParams, UE::Math::TVector<double>& DesiredCameraOffset) { return NativeCall<bool, const FPrimalCameraParams&, UE::Math::TVector<double>&>(this, "APrimalCharacter.BPOverrideCameraDesiredPivotOffset(FPrimalCameraParams&,UE::Math::TVector<double>&)", CameraParams, DesiredCameraOffset); }
	bool BPSkipMovementOptimization() { return NativeCall<bool>(this, "APrimalCharacter.BPSkipMovementOptimization()"); }
	bool IsWildSlow() { return NativeCall<bool>(this, "APrimalCharacter.IsWildSlow()"); }
	void ServerCallStay_Implementation() { NativeCall<void>(this, "APrimalCharacter.ServerCallStay_Implementation()"); }
	void ModifyStasisComponentRadius(float Delta) { NativeCall<void, float>(this, "APrimalCharacter.ModifyStasisComponentRadius(float)", Delta); }
	void NetOnAsPassengerMovedToSeat(int FromIndex, int ToIndex) { NativeCall<void, int, int>(this, "APrimalCharacter.NetOnAsPassengerMovedToSeat(int,int)", FromIndex, ToIndex); }
	void BPNotifyDroppedItemPickedUp(ADroppedItem* itemPickedUp, APrimalCharacter* PickedUpBy) { NativeCall<void, ADroppedItem*, APrimalCharacter*>(this, "APrimalCharacter.BPNotifyDroppedItemPickedUp(ADroppedItem*,APrimalCharacter*)", itemPickedUp, PickedUpBy); }
	static void GetReplicatedMaxTorpor_WrapperImpl(const void* Object, void* OutValue) { NativeCall<void, const void*, void*>(nullptr, "APrimalCharacter.GetReplicatedMaxTorpor_WrapperImpl(void*,void*)", Object, OutValue); }
	void GetOrbitCamZoomParams(float& OutCurrentZoom, float& OutMinZoom, float& OutMaxZoom, float& OutStepSize) { NativeCall<void, float&, float&, float&, float&>(this, "APrimalCharacter.GetOrbitCamZoomParams(float&,float&,float&,float&)", OutCurrentZoom, OutMinZoom, OutMaxZoom, OutStepSize); }
	void EnableBPTimerNonDedicated(bool bEnable) { NativeCall<void, bool>(this, "APrimalCharacter.EnableBPTimerNonDedicated(bool)", bEnable); }
	void ServerGiveDefaultWeapon() { NativeCall<void>(this, "APrimalCharacter.ServerGiveDefaultWeapon()"); }
	float BPGetAddForwardVelocityOnJump_Implementation() { return NativeCall<float>(this, "APrimalCharacter.BPGetAddForwardVelocityOnJump_Implementation()"); }
	void BP_ModifyInputAcceleration(UE::Math::TVector<double>& ModifyInputAccel) { NativeCall<void, UE::Math::TVector<double>&>(this, "APrimalCharacter.BP_ModifyInputAcceleration(UE::Math::TVector<double>&)", ModifyInputAccel); }
	static void GetEquippedArmorDurabilityPercent2_WrapperImpl(const void* Object, void* OutValue) { NativeCall<void, const void*, void*>(nullptr, "APrimalCharacter.GetEquippedArmorDurabilityPercent2_WrapperImpl(void*,void*)", Object, OutValue); }
	bool RemoveFromCharactersGrappledToMe(APrimalCharacter* Character) { return NativeCall<bool, APrimalCharacter*>(this, "APrimalCharacter.RemoveFromCharactersGrappledToMe(APrimalCharacter*)", Character); }
	UE::Math::TRotator<double>* GetInterpolatedRotation_NonFlattened(UE::Math::TRotator<double>* result) { return NativeCall<UE::Math::TRotator<double>*, UE::Math::TRotator<double>*>(this, "APrimalCharacter.GetInterpolatedRotation_NonFlattened()", result); }
	UObject* _getUObject() { return NativeCall<UObject*>(this, "APrimalCharacter._getUObject()"); }
	bool Destroy(bool bNetForce, bool bShouldModifyLevel) { return NativeCall<bool, bool, bool>(this, "APrimalCharacter.Destroy(bool,bool)", bNetForce, bShouldModifyLevel); }
	void ApplyHealthDamageOverlayToEquipment(EPrimalEquipmentType::Type equipmentType, float DeltaSeconds, int MeshIndex) { NativeCall<void, EPrimalEquipmentType::Type, float, int>(this, "APrimalCharacter.ApplyHealthDamageOverlayToEquipment(EPrimalEquipmentType::Type,float,int)", equipmentType, DeltaSeconds, MeshIndex); }
	void NetSetMovementModeSimulatedInternal(EMovementMode NewMovementMode) { NativeCall<void, EMovementMode>(this, "APrimalCharacter.NetSetMovementModeSimulatedInternal(EMovementMode)", NewMovementMode); }
	static void SetTribeName_WrapperImpl(void* Object, const void* InValue) { NativeCall<void, void*, const void*>(nullptr, "APrimalCharacter.SetTribeName_WrapperImpl(void*,void*)", Object, InValue); }
	APrimalDinoCharacter* GetBasedOnDinoConst() { return NativeCall<APrimalDinoCharacter*>(this, "APrimalCharacter.GetBasedOnDinoConst()"); }
	void ServerCallFollowOne(APrimalDinoCharacter* ForDinoChar) { NativeCall<void, APrimalDinoCharacter*>(this, "APrimalCharacter.ServerCallFollowOne(APrimalDinoCharacter*)", ForDinoChar); }
	static void SetEquippedArmorDurabilityPercent1_WrapperImpl(void* Object, const void* InValue) { NativeCall<void, void*, const void*>(nullptr, "APrimalCharacter.SetEquippedArmorDurabilityPercent1_WrapperImpl(void*,void*)", Object, InValue); }
	void UnPausedAnimSharingLeaderComponent() { NativeCall<void>(this, "APrimalCharacter.UnPausedAnimSharingLeaderComponent()"); }
	float GetUsedMaxCursorHUDDistance(AShooterPlayerController* PC) { return NativeCall<float, AShooterPlayerController*>(this, "APrimalCharacter.GetUsedMaxCursorHUDDistance(AShooterPlayerController*)", PC); }
	void BPSpawnAttackerDamageImpactFX(FName SocketName, APrimalCharacter* VictimChar) { NativeCall<void, FName, APrimalCharacter*>(this, "APrimalCharacter.BPSpawnAttackerDamageImpactFX(FName,APrimalCharacter*)", SocketName, VictimChar); }
	UE::Math::TRotator<double>* GetInterpolatedRotation(UE::Math::TRotator<double>* result) { return NativeCall<UE::Math::TRotator<double>*, UE::Math::TRotator<double>*>(this, "APrimalCharacter.GetInterpolatedRotation()", result); }
	void BPApplyPreviewData(USkeletalMeshComponent* toMesh) { NativeCall<void, USkeletalMeshComponent*>(this, "APrimalCharacter.BPApplyPreviewData(USkeletalMeshComponent*)", toMesh); }
	static void SetDraggedCharacter_WrapperImpl(void* Object, const void* InValue) { NativeCall<void, void*, const void*>(nullptr, "APrimalCharacter.SetDraggedCharacter_WrapperImpl(void*,void*)", Object, InValue); }
	bool GiveKillExperience() { return NativeCall<bool>(this, "APrimalCharacter.GiveKillExperience()"); }
	bool IsTargetable() { return NativeCall<bool>(this, "APrimalCharacter.IsTargetable()"); }
	float GetXPMultiplier() { return NativeCall<float>(this, "APrimalCharacter.GetXPMultiplier()"); }
	static void SetReplicatedCurrentHealth_WrapperImpl(void* Object, const void* InValue) { NativeCall<void, void*, const void*>(nullptr, "APrimalCharacter.SetReplicatedCurrentHealth_WrapperImpl(void*,void*)", Object, InValue); }
	AMissionType* GetActiveMission() { return NativeCall<AMissionType*>(this, "APrimalCharacter.GetActiveMission()"); }
	void DeathHarvestingFadeOut() { NativeCall<void>(this, "APrimalCharacter.DeathHarvestingFadeOut()"); }
	static void GetEquippedArmorDurabilityPercent3_WrapperImpl(const void* Object, void* OutValue) { NativeCall<void, const void*, void*>(nullptr, "APrimalCharacter.GetEquippedArmorDurabilityPercent3_WrapperImpl(void*,void*)", Object, OutValue); }
	void BlendSpacePlayerBase_UpdateBlendFilter(FBlendFilter& BlendFilter) { NativeCall<void, FBlendFilter&>(this, "APrimalCharacter.BlendSpacePlayerBase_UpdateBlendFilter(FBlendFilter&)", BlendFilter); }
	float GetCorpseHarvestHealth() { return NativeCall<float>(this, "APrimalCharacter.GetCorpseHarvestHealth()"); }
	UE::Math::TRotator<double>* BPCameraRotationFinal(UE::Math::TRotator<double>* result, APrimalCharacter* viewingCharacter, const UE::Math::TRotator<double>& InCurrentFinalRot, float DeltaTime, FName CameraStyle) { return NativeCall<UE::Math::TRotator<double>*, UE::Math::TRotator<double>*, APrimalCharacter*, const UE::Math::TRotator<double>&, float, FName>(this, "APrimalCharacter.BPCameraRotationFinal(APrimalCharacter*,UE::Math::TRotator<double>&,float,FName)", result, viewingCharacter, InCurrentFinalRot, DeltaTime, CameraStyle); }
	AShooterWeapon* GetCurrentWeapon() { return NativeCall<AShooterWeapon*>(this, "APrimalCharacter.GetCurrentWeapon()"); }
	void BPLocalPossessedBy(APlayerController* ByController) { NativeCall<void, APlayerController*>(this, "APrimalCharacter.BPLocalPossessedBy(APlayerController*)", ByController); }
	void StopAllAnimMontages(float BlendOutTime) { NativeCall<void, float>(this, "APrimalCharacter.StopAllAnimMontages(float)", BlendOutTime); }
	bool UseASACamaraPivotLocationForOldCamera() { return NativeCall<bool>(this, "APrimalCharacter.UseASACamaraPivotLocationForOldCamera()"); }
	void ServerCallAttackTarget_Implementation(AActor* TheTarget) { NativeCall<void, AActor*>(this, "APrimalCharacter.ServerCallAttackTarget_Implementation(AActor*)", TheTarget); }
	bool BPOverrideCurrentCameraProfile(FPrimalCameraProfile& OutCameraProfile) { return NativeCall<bool, FPrimalCameraProfile&>(this, "APrimalCharacter.BPOverrideCurrentCameraProfile(FPrimalCameraProfile&)", OutCameraProfile); }
	void EndDragCharacter() { NativeCall<void>(this, "APrimalCharacter.EndDragCharacter()"); }
	void SetLastCausedDamageTime(double lastCausedDamageTime) { NativeCall<void, double>(this, "APrimalCharacter.SetLastCausedDamageTime(double)", lastCausedDamageTime); }
	int IsActorTickAllowed() { return NativeCall<int>(this, "APrimalCharacter.IsActorTickAllowed()"); }
	float GetImmersionDepthPure() { return NativeCall<float>(this, "APrimalCharacter.GetImmersionDepthPure()"); }
	bool IsBasedOrInsideTargetShip(APrimalShip* CurrentShip) { return NativeCall<bool, APrimalShip*>(this, "APrimalCharacter.IsBasedOrInsideTargetShip(APrimalShip*)", CurrentShip); }
	void StartForceSkelUpdateForMesh(USkeletalMeshComponent* ForMesh, float ForTime, bool bForceUpdateMesh) { NativeCall<void, USkeletalMeshComponent*, float, bool>(this, "APrimalCharacter.StartForceSkelUpdateForMesh(USkeletalMeshComponent*,float,bool)", ForMesh, ForTime, bForceUpdateMesh); }
};