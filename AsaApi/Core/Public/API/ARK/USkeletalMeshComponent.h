#pragma once
#include "BulkForward.h"
#include "USkinnedMeshComponent.h"

struct USkeletalMeshComponent : public USkinnedMeshComponent
{
public:
	USkeletalMeshComponent() = delete;
	~USkeletalMeshComponent() = delete;
	USkeletalMeshComponent(const USkeletalMeshComponent&) = delete;
	USkeletalMeshComponent& operator=(const USkeletalMeshComponent&) = delete;
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("USkeletalMeshComponent"); }

	FSingleAnimationPlayData& AnimationDataField() { return *GetNativePointerField<FSingleAnimationPlayData*>(this, "USkeletalMeshComponent.AnimationData"); }
	UE::Math::TVector<double>& RootBoneTranslationField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "USkeletalMeshComponent.RootBoneTranslation"); }
	UE::Math::TVector<double>& LineCheckBoundsScaleField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "USkeletalMeshComponent.LineCheckBoundsScale"); }
	FBlendedHeapCurve& AnimCurvesField() { return *GetNativePointerField<FBlendedHeapCurve*>(this, "USkeletalMeshComponent.AnimCurves"); }
	FBlendedHeapCurve& CachedCurveField() { return *GetNativePointerField<FBlendedHeapCurve*>(this, "USkeletalMeshComponent.CachedCurve"); }
	float& GlobalAnimRateScaleField() { return *GetNativePointerField<float*>(this, "USkeletalMeshComponent.GlobalAnimRateScale"); }
	int& KinematicUpdateStaggerModulusField() { return *GetNativePointerField<int*>(this, "USkeletalMeshComponent.KinematicUpdateStaggerModulus"); }
	int& LastUpdateKinematicBonesToAnimFrameField() { return *GetNativePointerField<int*>(this, "USkeletalMeshComponent.LastUpdateKinematicBonesToAnimFrame"); }
	TEnumAsByte<EKinematicBonesUpdateToPhysics::Type>& KinematicBonesUpdateTypeField() { return *GetNativePointerField<TEnumAsByte<EKinematicBonesUpdateToPhysics::Type>*>(this, "USkeletalMeshComponent.KinematicBonesUpdateType"); }
	TEnumAsByte<EPhysicsTransformUpdateMode::Type>& PhysicsTransformUpdateModeField() { return *GetNativePointerField<TEnumAsByte<EPhysicsTransformUpdateMode::Type>*>(this, "USkeletalMeshComponent.PhysicsTransformUpdateMode"); }
	EClothingTeleportMode& ClothTeleportModeField() { return *GetNativePointerField<EClothingTeleportMode*>(this, "USkeletalMeshComponent.ClothTeleportMode"); }
	TEnumAsByte<ECollisionEnabled::Type>& PreSleepingKinematicsCollisionTypeField() { return *GetNativePointerField<TEnumAsByte<ECollisionEnabled::Type>*>(this, "USkeletalMeshComponent.PreSleepingKinematicsCollisionType"); }
	TEnumAsByte<EAnimationMode::Type>& AnimationModeField() { return *GetNativePointerField<TEnumAsByte<EAnimationMode::Type>*>(this, "USkeletalMeshComponent.AnimationMode"); }
	int& DeferredKinematicUpdateIndexField() { return *GetNativePointerField<int*>(this, "USkeletalMeshComponent.DeferredKinematicUpdateIndex"); }
	float& ClothVelocityScaleField() { return *GetNativePointerField<float*>(this, "USkeletalMeshComponent.ClothVelocityScale"); }
	FPhysicsAggregateReference_Chaos& AggregateField() { return *GetNativePointerField<FPhysicsAggregateReference_Chaos*>(this, "USkeletalMeshComponent.Aggregate"); }
	unsigned short& CachedAnimCurveUidVersionField() { return *GetNativePointerField<unsigned short*>(this, "USkeletalMeshComponent.CachedAnimCurveUidVersion"); }
	float& ClothBlendWeightField() { return *GetNativePointerField<float*>(this, "USkeletalMeshComponent.ClothBlendWeight"); }
	bool& bWaitForParallelClothTaskField() { return *GetNativePointerField<bool*>(this, "USkeletalMeshComponent.bWaitForParallelClothTask"); }
	bool& bFilteredAnimCurvesIsAllowListField() { return *GetNativePointerField<bool*>(this, "USkeletalMeshComponent.bFilteredAnimCurvesIsAllowList"); }
	unsigned short& CachedMeshCurveMetaDataVersionField() { return *GetNativePointerField<unsigned short*>(this, "USkeletalMeshComponent.CachedMeshCurveMetaDataVersion"); }
	TArray<FName, TSizedDefaultAllocator<32> >& FilteredAnimCurvesField() { return *GetNativePointerField<TArray<FName, TSizedDefaultAllocator<32> >*>(this, "USkeletalMeshComponent.FilteredAnimCurves"); }
	int& RagdollAggregateThresholdField() { return *GetNativePointerField<int*>(this, "USkeletalMeshComponent.RagdollAggregateThreshold"); }
	float& ClothMaxDistanceScaleField() { return *GetNativePointerField<float*>(this, "USkeletalMeshComponent.ClothMaxDistanceScale"); }
	float& ClothGeometryScaleField() { return *GetNativePointerField<float*>(this, "USkeletalMeshComponent.ClothGeometryScale"); }
	int& PostProcessAnimBPLODThresholdField() { return *GetNativePointerField<int*>(this, "USkeletalMeshComponent.PostProcessAnimBPLODThreshold"); }
	FConstraintBrokenSignature& OnConstraintBrokenField() { return *GetNativePointerField<FConstraintBrokenSignature*>(this, "USkeletalMeshComponent.OnConstraintBroken"); }
	FPlasticDeformationEventSignature& OnPlasticDeformationField() { return *GetNativePointerField<FPlasticDeformationEventSignature*>(this, "USkeletalMeshComponent.OnPlasticDeformation"); }
	TArray<unsigned short, TSizedDefaultAllocator<32> >& RequiredBonesField() { return *GetNativePointerField<TArray<unsigned short, TSizedDefaultAllocator<32> >*>(this, "USkeletalMeshComponent.RequiredBones"); }
	TArray<unsigned short, TSizedDefaultAllocator<32> >& FillComponentSpaceTransformsRequiredBonesField() { return *GetNativePointerField<TArray<unsigned short, TSizedDefaultAllocator<32> >*>(this, "USkeletalMeshComponent.FillComponentSpaceTransformsRequiredBones"); }
	TArray<FBodyInstance*, TSizedDefaultAllocator<32> >& BodiesField() { return *GetNativePointerField<TArray<FBodyInstance*, TSizedDefaultAllocator<32> >*>(this, "USkeletalMeshComponent.Bodies"); }
	TArray<FConstraintInstance*, TSizedDefaultAllocator<32> >& ConstraintsField() { return *GetNativePointerField<TArray<FConstraintInstance*, TSizedDefaultAllocator<32> >*>(this, "USkeletalMeshComponent.Constraints"); }
	FSkeletalMeshComponentClothTickFunction& ClothTickFunctionField() { return *GetNativePointerField<FSkeletalMeshComponentClothTickFunction*>(this, "USkeletalMeshComponent.ClothTickFunction"); }
	FSkeletalMeshComponentClothEndTickFunction& ClothEndTickFunctionField() { return *GetNativePointerField<FSkeletalMeshComponentClothEndTickFunction*>(this, "USkeletalMeshComponent.ClothEndTickFunction"); }
	float& TeleportDistanceThresholdField() { return *GetNativePointerField<float*>(this, "USkeletalMeshComponent.TeleportDistanceThreshold"); }
	float& TeleportRotationThresholdField() { return *GetNativePointerField<float*>(this, "USkeletalMeshComponent.TeleportRotationThreshold"); }
	float& ClothTeleportCosineThresholdInRadField() { return *GetNativePointerField<float*>(this, "USkeletalMeshComponent.ClothTeleportCosineThresholdInRad"); }
	float& ClothTeleportDistThresholdSquaredField() { return *GetNativePointerField<float*>(this, "USkeletalMeshComponent.ClothTeleportDistThresholdSquared"); }
	UE::Math::TVector<float>& PrevRootRigidBodyScaleField() { return *GetNativePointerField<UE::Math::TVector<float>*>(this, "USkeletalMeshComponent.PrevRootRigidBodyScale"); }
	FOnAnimInitialized& OnAnimInitializedField() { return *GetNativePointerField<FOnAnimInitialized*>(this, "USkeletalMeshComponent.OnAnimInitialized"); }
	FSkeletalMeshComponentEndPhysicsTickFunction& EndPhysicsTickFunctionField() { return *GetNativePointerField<FSkeletalMeshComponentEndPhysicsTickFunction*>(this, "USkeletalMeshComponent.EndPhysicsTickFunction"); }
	FAnimationEvaluationContext& AnimEvaluationContextField() { return *GetNativePointerField<FAnimationEvaluationContext*>(this, "USkeletalMeshComponent.AnimEvaluationContext"); }
	double& PreventSoundCuesTimeField() { return *GetNativePointerField<double*>(this, "USkeletalMeshComponent.PreventSoundCuesTime"); }
	unsigned int& LastPoseTickFrameField() { return *GetNativePointerField<unsigned int*>(this, "USkeletalMeshComponent.LastPoseTickFrame"); }
	TArray<FBodyInstance*, TSizedDefaultAllocator<32> >& AsyncDestroyPhysicsStatePayloadField() { return *GetNativePointerField<TArray<FBodyInstance*, TSizedDefaultAllocator<32> >*>(this, "USkeletalMeshComponent.AsyncDestroyPhysicsStatePayload"); }
	TArray<FConstraintInstance*, TSizedDefaultAllocator<32> >& AsyncDestroyConstraintsPayloadField() { return *GetNativePointerField<TArray<FConstraintInstance*, TSizedDefaultAllocator<32> >*>(this, "USkeletalMeshComponent.AsyncDestroyConstraintsPayload"); }
	FPhysicsAggregateReference_Chaos& AggregatePayloadField() { return *GetNativePointerField<FPhysicsAggregateReference_Chaos*>(this, "USkeletalMeshComponent.AggregatePayload"); }
	UE::Math::TVector<double>& CachedTwoLegVirtualHitLocationWSField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "USkeletalMeshComponent.CachedTwoLegVirtualHitLocationWS"); }
	UE::Math::TVector<double>& CachedTwoLegVirtualHitLocationCSField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "USkeletalMeshComponent.CachedTwoLegVirtualHitLocationCS"); }
	int& LastIKCalculationFrameField() { return *GetNativePointerField<int*>(this, "USkeletalMeshComponent.LastIKCalculationFrame"); }
	UE::Math::TVector<double>& LastIKPositionField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "USkeletalMeshComponent.LastIKPosition"); }
	float& LastRootZField() { return *GetNativePointerField<float*>(this, "USkeletalMeshComponent.LastRootZ"); }
	float& DinoIKAnimationLegZOffsetingMultiplierField() { return *GetNativePointerField<float*>(this, "USkeletalMeshComponent.DinoIKAnimationLegZOffsetingMultiplier"); }
	float& DinoIKDelayedTraceFreezeDurationMultiplierField() { return *GetNativePointerField<float*>(this, "USkeletalMeshComponent.DinoIKDelayedTraceFreezeDurationMultiplier"); }
	float& DinoIKSlopeMatchingRootHeightOffsetField() { return *GetNativePointerField<float*>(this, "USkeletalMeshComponent.DinoIKSlopeMatchingRootHeightOffset"); }
	float& DistanceFromGroundToStartIKField() { return *GetNativePointerField<float*>(this, "USkeletalMeshComponent.DistanceFromGroundToStartIK"); }
	float& DistanceFromGroundToStartIKBiasField() { return *GetNativePointerField<float*>(this, "USkeletalMeshComponent.DistanceFromGroundToStartIKBias"); }
	float& FeetAlignmentLimitField() { return *GetNativePointerField<float*>(this, "USkeletalMeshComponent.FeetAlignmentLimit"); }
	float& ForceUpdateValuesTimeLimitField() { return *GetNativePointerField<float*>(this, "USkeletalMeshComponent.ForceUpdateValuesTimeLimit"); }
	float& IkFabrikInterpSpeedField() { return *GetNativePointerField<float*>(this, "USkeletalMeshComponent.IkFabrikInterpSpeed"); }
	float& IkFeetAlignmentInterpSpeedField() { return *GetNativePointerField<float*>(this, "USkeletalMeshComponent.IkFeetAlignmentInterpSpeed"); }
	float& IkGroundPlaneInterpSpeedField() { return *GetNativePointerField<float*>(this, "USkeletalMeshComponent.IkGroundPlaneInterpSpeed"); }
	float& IkInterpSpeedField() { return *GetNativePointerField<float*>(this, "USkeletalMeshComponent.IkInterpSpeed"); }
	float& IkInterpSpeedUpField() { return *GetNativePointerField<float*>(this, "USkeletalMeshComponent.IkInterpSpeedUp"); }
	UE::Math::TVector<double>& IkRootLocationOffsetField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "USkeletalMeshComponent.IkRootLocationOffset"); }
	UE::Math::TRotator<double>& IkRootRotationOffsetField() { return *GetNativePointerField<UE::Math::TRotator<double>*>(this, "USkeletalMeshComponent.IkRootRotationOffset"); }
	float& IkRootOffsetInterpSpeedField() { return *GetNativePointerField<float*>(this, "USkeletalMeshComponent.IkRootOffsetInterpSpeed"); }
	float& IkRootOffsetInterpSpeedUpField() { return *GetNativePointerField<float*>(this, "USkeletalMeshComponent.IkRootOffsetInterpSpeedUp"); }
	float& IkRootWorldOffsetInterpSpeedField() { return *GetNativePointerField<float*>(this, "USkeletalMeshComponent.IkRootWorldOffsetInterpSpeed"); }
	float& IkRootWorldOffsetInterpSpeedUpField() { return *GetNativePointerField<float*>(this, "USkeletalMeshComponent.IkRootWorldOffsetInterpSpeedUp"); }
	float& LegLimitRatioFromCylinderHeightField() { return *GetNativePointerField<float*>(this, "USkeletalMeshComponent.LegLimitRatioFromCylinderHeight"); }
	float& MatchSlopeRotationSpeedField() { return *GetNativePointerField<float*>(this, "USkeletalMeshComponent.MatchSlopeRotationSpeed"); }
	float& RootPitchRotationLimitField() { return *GetNativePointerField<float*>(this, "USkeletalMeshComponent.RootPitchRotationLimit"); }
	float& RootRollRotationLimitField() { return *GetNativePointerField<float*>(this, "USkeletalMeshComponent.RootRollRotationLimit"); }
	int& MaxIterationsField() { return *GetNativePointerField<int*>(this, "USkeletalMeshComponent.MaxIterations"); }
	UE::Math::TVector<double>& TwoLegVirtualHitLocationWSField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "USkeletalMeshComponent.TwoLegVirtualHitLocationWS"); }
	UE::Math::TVector<double>& TwoLegVirtualHitLocationWSTargetField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "USkeletalMeshComponent.TwoLegVirtualHitLocationWSTarget"); }
	UE::Math::TVector<double>& TwoLegVirtualHitLocationCSField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "USkeletalMeshComponent.TwoLegVirtualHitLocationCS"); }
	float& RootOffsetField() { return *GetNativePointerField<float*>(this, "USkeletalMeshComponent.RootOffset"); }
	UE::Math::TRotator<double>& RootRotationOffsetField() { return *GetNativePointerField<UE::Math::TRotator<double>*>(this, "USkeletalMeshComponent.RootRotationOffset"); }
	UE::Math::TVector<double>& InterpolatedRootLocationField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "USkeletalMeshComponent.InterpolatedRootLocation"); }
	UE::Math::TRotator<double>& InterpolatedRootRotationField() { return *GetNativePointerField<UE::Math::TRotator<double>*>(this, "USkeletalMeshComponent.InterpolatedRootRotation"); }
	TArray<float, TSizedDefaultAllocator<32> >& OriginalBonesOffsetsField() { return *GetNativePointerField<TArray<float, TSizedDefaultAllocator<32> >*>(this, "USkeletalMeshComponent.OriginalBonesOffsets"); }
	float& MinHitNormalZForFeetAlignmentField() { return *GetNativePointerField<float*>(this, "USkeletalMeshComponent.MinHitNormalZForFeetAlignment"); }
	float& ComponentMassScaleField() { return *GetNativePointerField<float*>(this, "USkeletalMeshComponent.ComponentMassScale"); }
	float& GroundBoneInstantSyncTillTimeField() { return *GetNativePointerField<float*>(this, "USkeletalMeshComponent.GroundBoneInstantSyncTillTime"); }
	float& MinLinearDampingField() { return *GetNativePointerField<float*>(this, "USkeletalMeshComponent.MinLinearDamping"); }
	float& MinAngularDampingField() { return *GetNativePointerField<float*>(this, "USkeletalMeshComponent.MinAngularDamping"); }
	float& CachedFootZDiffField() { return *GetNativePointerField<float*>(this, "USkeletalMeshComponent.CachedFootZDiff"); }
	UE::Math::TRotator<double>& RotOffsetField() { return *GetNativePointerField<UE::Math::TRotator<double>*>(this, "USkeletalMeshComponent.RotOffset"); }
	double& TimeToStopUpdatingLegCachesField() { return *GetNativePointerField<double*>(this, "USkeletalMeshComponent.TimeToStopUpdatingLegCaches"); }
	float& BoneModifiersLegLengthPercentageField() { return *GetNativePointerField<float*>(this, "USkeletalMeshComponent.BoneModifiersLegLengthPercentage"); }
	double& LastStartedRenderingTimeField() { return *GetNativePointerField<double*>(this, "USkeletalMeshComponent.LastStartedRenderingTime"); }
	double& LastIkUpdateTimeField() { return *GetNativePointerField<double*>(this, "USkeletalMeshComponent.LastIkUpdateTime"); }
	double& ForceIkUpdateTimeField() { return *GetNativePointerField<double*>(this, "USkeletalMeshComponent.ForceIkUpdateTime"); }
	double& IKFirstFrozenUpdatedTimeField() { return *GetNativePointerField<double*>(this, "USkeletalMeshComponent.IKFirstFrozenUpdatedTime"); }
	double& LastIKFrozenStartTimeField() { return *GetNativePointerField<double*>(this, "USkeletalMeshComponent.LastIKFrozenStartTime"); }
	float& ForcedBlueprintBlendCurrentWeightField() { return *GetNativePointerField<float*>(this, "USkeletalMeshComponent.ForcedBlueprintBlendCurrentWeight"); }
	float& ForcedBlueprintBlendDurationField() { return *GetNativePointerField<float*>(this, "USkeletalMeshComponent.ForcedBlueprintBlendDuration"); }
	bool& bBoneTransformsInitializedField() { return *GetNativePointerField<bool*>(this, "USkeletalMeshComponent.bBoneTransformsInitialized"); }
	BitFieldValue<bool, unsigned char> bAllowKinematicUpdateStaggering() { return { this, "USkeletalMeshComponent.bAllowKinematicUpdateStaggering"}; }
	BitFieldValue<bool, unsigned char> bDoNotStaggerKimematicUpdates() { return { this, "USkeletalMeshComponent.bDoNotStaggerKimematicUpdates"}; }
	BitFieldValue<bool, unsigned char> bDisablePostProcessBlueprint() { return { this, "USkeletalMeshComponent.bDisablePostProcessBlueprint"}; }
	BitFieldValue<bool, unsigned char> bSimulationUpdatesChildTransforms() { return { this, "USkeletalMeshComponent.bSimulationUpdatesChildTransforms"}; }
	BitFieldValue<bool, unsigned char> bUpdateOverlapsOnAnimationFinalize() { return { this, "USkeletalMeshComponent.bUpdateOverlapsOnAnimationFinalize"}; }
	BitFieldValue<bool, unsigned char> bLocalSpaceKinematics() { return { this, "USkeletalMeshComponent.bLocalSpaceKinematics"}; }
	BitFieldValue<bool, unsigned char> bHasValidBodies() { return { this, "USkeletalMeshComponent.bHasValidBodies"}; }
	BitFieldValue<bool, unsigned char> bBlendPhysics() { return { this, "USkeletalMeshComponent.bBlendPhysics"}; }
	BitFieldValue<bool, unsigned char> bEnablePhysicsOnDedicatedServer() { return { this, "USkeletalMeshComponent.bEnablePhysicsOnDedicatedServer"}; }
	BitFieldValue<bool, unsigned char> bUpdateMeshWhenKinematic() { return { this, "USkeletalMeshComponent.bUpdateMeshWhenKinematic"}; }
	BitFieldValue<bool, unsigned char> bUpdateJointsFromAnimation() { return { this, "USkeletalMeshComponent.bUpdateJointsFromAnimation"}; }
	BitFieldValue<bool, unsigned char> bAllowClothActors() { return { this, "USkeletalMeshComponent.bAllowClothActors"}; }
	BitFieldValue<bool, unsigned char> bDisableClothSimulation() { return { this, "USkeletalMeshComponent.bDisableClothSimulation"}; }
	BitFieldValue<bool, unsigned char> bDisableRigidBodyAnimNode() { return { this, "USkeletalMeshComponent.bDisableRigidBodyAnimNode"}; }
	BitFieldValue<bool, unsigned char> bDisableAnimDynamicsAnimNode() { return { this, "USkeletalMeshComponent.bDisableAnimDynamicsAnimNode"}; }
	BitFieldValue<bool, unsigned char> bAllowAnimCurveEvaluation() { return { this, "USkeletalMeshComponent.bAllowAnimCurveEvaluation"}; }
	BitFieldValue<bool, unsigned char> bBindClothToLeaderComponent() { return { this, "USkeletalMeshComponent.bBindClothToLeaderComponent"}; }
	BitFieldValue<bool, unsigned char> bPendingClothTransformUpdate() { return { this, "USkeletalMeshComponent.bPendingClothTransformUpdate"}; }
	BitFieldValue<bool, unsigned char> bPendingClothCollisionUpdate() { return { this, "USkeletalMeshComponent.bPendingClothCollisionUpdate"}; }
	BitFieldValue<bool, unsigned char> bCollideWithEnvironment() { return { this, "USkeletalMeshComponent.bCollideWithEnvironment"}; }
	BitFieldValue<bool, unsigned char> bCollideWithAttachedChildren() { return { this, "USkeletalMeshComponent.bCollideWithAttachedChildren"}; }
	BitFieldValue<bool, unsigned char> bForceCollisionUpdate() { return { this, "USkeletalMeshComponent.bForceCollisionUpdate"}; }
	BitFieldValue<bool, unsigned char> bResetAfterTeleport() { return { this, "USkeletalMeshComponent.bResetAfterTeleport"}; }
	BitFieldValue<bool, unsigned char> bPrevDisableClothSimulation() { return { this, "USkeletalMeshComponent.bPrevDisableClothSimulation"}; }
	BitFieldValue<bool, unsigned char> bDeferKinematicBoneUpdate() { return { this, "USkeletalMeshComponent.bDeferKinematicBoneUpdate"}; }
	BitFieldValue<bool, unsigned char> bNoSkeletonUpdate() { return { this, "USkeletalMeshComponent.bNoSkeletonUpdate"}; }
	BitFieldValue<bool, unsigned char> bPauseAnims() { return { this, "USkeletalMeshComponent.bPauseAnims"}; }
	BitFieldValue<bool, unsigned char> bEnableAnimation() { return { this, "USkeletalMeshComponent.bEnableAnimation"}; }
	BitFieldValue<bool, unsigned char> bUseRefPoseOnInitAnim() { return { this, "USkeletalMeshComponent.bUseRefPoseOnInitAnim"}; }
	BitFieldValue<bool, unsigned char> bEnablePerPolyCollision() { return { this, "USkeletalMeshComponent.bEnablePerPolyCollision"}; }
	BitFieldValue<bool, unsigned char> bForceRefpose() { return { this, "USkeletalMeshComponent.bForceRefpose"}; }
	BitFieldValue<bool, unsigned char> bOnlyAllowAutonomousTickPose() { return { this, "USkeletalMeshComponent.bOnlyAllowAutonomousTickPose"}; }
	BitFieldValue<bool, unsigned char> bIsAutonomousTickPose() { return { this, "USkeletalMeshComponent.bIsAutonomousTickPose"}; }
	BitFieldValue<bool, unsigned char> bOldForceRefPose() { return { this, "USkeletalMeshComponent.bOldForceRefPose"}; }
	BitFieldValue<bool, unsigned char> bShowPrePhysBones() { return { this, "USkeletalMeshComponent.bShowPrePhysBones"}; }
	BitFieldValue<bool, unsigned char> bRequiredBonesUpToDate() { return { this, "USkeletalMeshComponent.bRequiredBonesUpToDate"}; }
	BitFieldValue<bool, unsigned char> bAnimTreeInitialised() { return { this, "USkeletalMeshComponent.bAnimTreeInitialised"}; }
	BitFieldValue<bool, unsigned char> bEnableLineCheckWithBounds() { return { this, "USkeletalMeshComponent.bEnableLineCheckWithBounds"}; }
	BitFieldValue<bool, unsigned char> bPropagateCurvesToFollowers() { return { this, "USkeletalMeshComponent.bPropagateCurvesToFollowers"}; }
	BitFieldValue<bool, unsigned char> bSkipKinematicUpdateWhenInterpolating() { return { this, "USkeletalMeshComponent.bSkipKinematicUpdateWhenInterpolating"}; }
	BitFieldValue<bool, unsigned char> bSkipBoundsUpdateWhenInterpolating() { return { this, "USkeletalMeshComponent.bSkipBoundsUpdateWhenInterpolating"}; }
	BitFieldValue<bool, unsigned char> bSuppressNotifyEventDispatch() { return { this, "USkeletalMeshComponent.bSuppressNotifyEventDispatch"}; }
	BitFieldValue<bool, unsigned char> bPreventDediServerAutoUnregistration() { return { this, "USkeletalMeshComponent.bPreventDediServerAutoUnregistration"}; }
	BitFieldValue<bool, unsigned char> bClothingSimulationSuspended() { return { this, "USkeletalMeshComponent.bClothingSimulationSuspended"}; }
	BitFieldValue<bool, unsigned char> bNotifySyncComponentToRBPhysics() { return { this, "USkeletalMeshComponent.bNotifySyncComponentToRBPhysics"}; }
	BitFieldValue<bool, unsigned char> bNeedsQueuedAnimEventsDispatched() { return { this, "USkeletalMeshComponent.bNeedsQueuedAnimEventsDispatched"}; }
	BitFieldValue<bool, unsigned char> bPostEvaluatingAnimation() { return { this, "USkeletalMeshComponent.bPostEvaluatingAnimation"}; }
	BitFieldValue<bool, unsigned char> bAllowAlwaysEvaluatePostProcessAnimBP() { return { this, "USkeletalMeshComponent.bAllowAlwaysEvaluatePostProcessAnimBP"}; }
	BitFieldValue<bool, unsigned char> bLockBodyScaleXY() { return { this, "USkeletalMeshComponent.bLockBodyScaleXY"}; }
	BitFieldValue<bool, unsigned char> bSwapBodyScaleXZ() { return { this, "USkeletalMeshComponent.bSwapBodyScaleXZ"}; }
	BitFieldValue<bool, unsigned __int32> bUseBPControlRigNotify() { return { this, "USkeletalMeshComponent.bUseBPControlRigNotify"}; }
	BitFieldValue<bool, unsigned __int32> bForceTickDisabled() { return { this, "USkeletalMeshComponent.bForceTickDisabled"}; }
	BitFieldValue<bool, unsigned __int32> bFreezeGroundPlaneIK() { return { this, "USkeletalMeshComponent.bFreezeGroundPlaneIK"}; }
	BitFieldValue<bool, unsigned __int32> bSuppressAnimNotifies() { return { this, "USkeletalMeshComponent.bSuppressAnimNotifies"}; }
	BitFieldValue<bool, unsigned __int32> UseWorldSpaceFeetAlignment() { return { this, "USkeletalMeshComponent.UseWorldSpaceFeetAlignment"}; }
	BitFieldValue<bool, unsigned __int32> bRotateFeetToAlignWithGround() { return { this, "USkeletalMeshComponent.bRotateFeetToAlignWithGround"}; }
	BitFieldValue<bool, unsigned __int32> bEnableMultiFabrik() { return { this, "USkeletalMeshComponent.bEnableMultiFabrik"}; }
	BitFieldValue<bool, unsigned __int32> bDinoIKUseExperimentalInvalidTraceZeroing() { return { this, "USkeletalMeshComponent.bDinoIKUseExperimentalInvalidTraceZeroing"}; }
	BitFieldValue<bool, unsigned __int32> bAlignRootOnlyToGround() { return { this, "USkeletalMeshComponent.bAlignRootOnlyToGround"}; }
	BitFieldValue<bool, unsigned __int32> bDinoIKAnimationLegZOffseting() { return { this, "USkeletalMeshComponent.bDinoIKAnimationLegZOffseting"}; }
	BitFieldValue<bool, unsigned __int32> bIKRotationEnabled() { return { this, "USkeletalMeshComponent.bIKRotationEnabled"}; }
	BitFieldValue<bool, unsigned __int32> bMovedLastFrame() { return { this, "USkeletalMeshComponent.bMovedLastFrame"}; }
	BitFieldValue<bool, unsigned __int32> bDinoIKLerpFeet() { return { this, "USkeletalMeshComponent.bDinoIKLerpFeet"}; }
	BitFieldValue<bool, unsigned __int32> bDinoIKLerpLegs() { return { this, "USkeletalMeshComponent.bDinoIKLerpLegs"}; }
	BitFieldValue<bool, unsigned __int32> bDinoIKRootWorldSpaceLerpZ() { return { this, "USkeletalMeshComponent.bDinoIKRootWorldSpaceLerpZ"}; }
	BitFieldValue<bool, unsigned __int32> bDinoIKSmoothGroundPlaneLerping() { return { this, "USkeletalMeshComponent.bDinoIKSmoothGroundPlaneLerping"}; }
	BitFieldValue<bool, unsigned __int32> bDinoIKSlopeMatchingRootHeightOffsetMultiplier() { return { this, "USkeletalMeshComponent.bDinoIKSlopeMatchingRootHeightOffsetMultiplier"}; }
	BitFieldValue<bool, unsigned __int32> bDinoIKUseLegLimits() { return { this, "USkeletalMeshComponent.bDinoIKUseLegLimits"}; }
	BitFieldValue<bool, unsigned __int32> bEnableIkOnlyWhenIdle() { return { this, "USkeletalMeshComponent.bEnableIkOnlyWhenIdle"}; }
	BitFieldValue<bool, unsigned __int32> bEnableSimpleIK() { return { this, "USkeletalMeshComponent.bEnableSimpleIK"}; }
	BitFieldValue<bool, unsigned __int32> bForceSimpleIK() { return { this, "USkeletalMeshComponent.bForceSimpleIK"}; }
	BitFieldValue<bool, unsigned __int32> bSetAttachmentMasterPoseComponent() { return { this, "USkeletalMeshComponent.bSetAttachmentMasterPoseComponent"}; }
	BitFieldValue<bool, unsigned __int32> bInterpolateRootPhys() { return { this, "USkeletalMeshComponent.bInterpolateRootPhys"}; }
	BitFieldValue<bool, unsigned __int32> bOnlyTickWhenRenderedDontDisableOnDedicatedServer() { return { this, "USkeletalMeshComponent.bOnlyTickWhenRenderedDontDisableOnDedicatedServer"}; }
	BitFieldValue<bool, unsigned __int32> bSkipUpdateTransformIfBlendedPhysics() { return { this, "USkeletalMeshComponent.bSkipUpdateTransformIfBlendedPhysics"}; }
	BitFieldValue<bool, unsigned __int32> AnimationFrozen() { return { this, "USkeletalMeshComponent.AnimationFrozen"}; }
	BitFieldValue<bool, unsigned __int32> bInitOffset() { return { this, "USkeletalMeshComponent.bInitOffset"}; }
	BitFieldValue<bool, unsigned __int32> bUpdatedKinematics() { return { this, "USkeletalMeshComponent.bUpdatedKinematics"}; }
	BitFieldValue<bool, unsigned __int32> bUpdatedKinematicsOnce() { return { this, "USkeletalMeshComponent.bUpdatedKinematicsOnce"}; }
	BitFieldValue<bool, unsigned __int32> bSetKinematicsSleeping() { return { this, "USkeletalMeshComponent.bSetKinematicsSleeping"}; }
	BitFieldValue<bool, unsigned __int32> bNeverTickOnDediServer() { return { this, "USkeletalMeshComponent.bNeverTickOnDediServer"}; }
	BitFieldValue<bool, unsigned __int32> bAlwaysTeleportKinematic() { return { this, "USkeletalMeshComponent.bAlwaysTeleportKinematic"}; }
	BitFieldValue<bool, unsigned __int32> bForceDisablePhysicsOnDediServer() { return { this, "USkeletalMeshComponent.bForceDisablePhysicsOnDediServer"}; }
	BitFieldValue<bool, unsigned __int32> bForceDisablePhysicsOnDediServerAllowRagdoll() { return { this, "USkeletalMeshComponent.bForceDisablePhysicsOnDediServerAllowRagdoll"}; }
	BitFieldValue<bool, unsigned __int32> bSleepKinematicsWhenNotRefreshingBones() { return { this, "USkeletalMeshComponent.bSleepKinematicsWhenNotRefreshingBones"}; }
	BitFieldValue<bool, unsigned __int32> bPhysicsRequiredOnDediServer() { return { this, "USkeletalMeshComponent.bPhysicsRequiredOnDediServer"}; }
	BitFieldValue<bool, unsigned __int32> bAlwaysForceUpdateKinematicsOnDedicatedServer() { return { this, "USkeletalMeshComponent.bAlwaysForceUpdateKinematicsOnDedicatedServer"}; }
	BitFieldValue<bool, unsigned __int32> bRotateToMatchWalkingSlope() { return { this, "USkeletalMeshComponent.bRotateToMatchWalkingSlope"}; }
	BitFieldValue<bool, unsigned __int32> bFootZDiffIsCached() { return { this, "USkeletalMeshComponent.bFootZDiffIsCached"}; }
	BitFieldValue<bool, unsigned __int32> bShouldCacheFootZDiff() { return { this, "USkeletalMeshComponent.bShouldCacheFootZDiff"}; }
	BitFieldValue<bool, unsigned __int32> bEnableIKTraceFreezing() { return { this, "USkeletalMeshComponent.bEnableIKTraceFreezing"}; }
	BitFieldValue<bool, unsigned char> bPreventFootOffset() { return { this, "USkeletalMeshComponent.bPreventFootOffset"}; }
	BitFieldValue<bool, unsigned __int32> bModifyBoneAnimNodeUseCurrentBoneModifiers() { return { this, "USkeletalMeshComponent.bModifyBoneAnimNodeUseCurrentBoneModifiers"}; }
	BitFieldValue<bool, unsigned __int32> bCurrentBoneModifiers_DontDoLegCheckRootModifier() { return { this, "USkeletalMeshComponent.bCurrentBoneModifiers_DontDoLegCheckRootModifier"}; }
	BitFieldValue<bool, unsigned __int32> bHumanIKUseBoneModiferLegScalars() { return { this, "USkeletalMeshComponent.bHumanIKUseBoneModiferLegScalars"}; }
	BitFieldValue<bool, unsigned __int32> bApplyGroundBoneModifiers() { return { this, "USkeletalMeshComponent.bApplyGroundBoneModifiers"}; }
	BitFieldValue<bool, unsigned __int32> bNeedsUpdateToCachedLegInfos() { return { this, "USkeletalMeshComponent.bNeedsUpdateToCachedLegInfos"}; }
	BitFieldValue<bool, unsigned __int32> bUsingFrozenIK() { return { this, "USkeletalMeshComponent.bUsingFrozenIK"}; }
	BitFieldValue<bool, unsigned char> bEnableIKCartGroundConforming() { return { this, "USkeletalMeshComponent.bEnableIKCartGroundConforming"}; }
	BitFieldValue<bool, unsigned __int32> bUseRotOffset() { return { this, "USkeletalMeshComponent.bUseRotOffset"}; }
	BitFieldValue<bool, unsigned __int32> bUseItemSlotAttachmentTranformOffsets() { return { this, "USkeletalMeshComponent.bUseItemSlotAttachmentTranformOffsets"}; }
	BitFieldValue<bool, unsigned __int32> bInitializedArticulated() { return { this, "USkeletalMeshComponent.bInitializedArticulated"}; }
	BitFieldValue<bool, unsigned __int32> bIsPreviewComponent() { return { this, "USkeletalMeshComponent.bIsPreviewComponent"}; }
	void SetPhysicsAsset(UPhysicsAsset* InPhysicsAsset, bool bForceReInit) { NativeCall<void, UPhysicsAsset*, bool>(this, "USkeletalMeshComponent.SetPhysicsAsset(UPhysicsAsset*,bool)", InPhysicsAsset, bForceReInit); }
	void InstantiatePhysicsAssetBodiesRefPose(const UPhysicsAsset& PhysAsset, TArray<FBodyInstance*, TSizedDefaultAllocator<32> >& OutBodies, FPhysScene_Chaos* PhysScene, USkeletalMeshComponent* OwningComponent, int UseRootBodyIndex, const FPhysicsAggregateReference_Chaos& UseAggregate) { NativeCall<void, const UPhysicsAsset&, TArray<FBodyInstance*, TSizedDefaultAllocator<32> >&, FPhysScene_Chaos*, USkeletalMeshComponent*, int, const FPhysicsAggregateReference_Chaos&>(this, "USkeletalMeshComponent.InstantiatePhysicsAssetBodiesRefPose(UPhysicsAsset&,TArray<FBodyInstance*,TSizedDefaultAllocator<32>>&,FPhysScene_Chaos*,USkeletalMeshComponent*,int,FPhysicsAggregateReference_Chaos&)", PhysAsset, OutBodies, PhysScene, OwningComponent, UseRootBodyIndex, UseAggregate); }
	void CreateBodySetup() { NativeCall<void>(this, "USkeletalMeshComponent.CreateBodySetup()"); }
	void AddRadialForce(UE::Math::TVector<double>* Origin, float Radius, float Strength, ERadialImpulseFalloff Falloff, bool bAccelChange) { if (!Origin) throw std::invalid_argument("Null native value parameter"); return NativeCall<void, UE :: Math :: TVector < double >, float, float, ERadialImpulseFalloff, bool>(this, "USkeletalMeshComponent.AddRadialForce(UE::Math::TVector<double>,float,float,ERadialImpulseFalloff,bool)", *Origin, Radius, Strength, Falloff, bAccelChange); }
	static void SetAnimClass_WrapperImpl(void* Object, const void* InValue) { NativeCall<void, void*, const void*>(nullptr, "USkeletalMeshComponent.SetAnimClass_WrapperImpl(void*,void*)", Object, InValue); }
	void InitializeComponent() { NativeCall<void>(this, "USkeletalMeshComponent.InitializeComponent()"); }
	bool AllowsAsyncPhysicsStateCreation() { return NativeCall<bool>(this, "USkeletalMeshComponent.AllowsAsyncPhysicsStateCreation()"); }
	void InitCollisionRelationships() { NativeCall<void>(this, "USkeletalMeshComponent.InitCollisionRelationships()"); }
	void DispatchParallelEvaluationTasks(FActorComponentTickFunction* TickFunction) { NativeCall<void, FActorComponentTickFunction*>(this, "USkeletalMeshComponent.DispatchParallelEvaluationTasks(FActorComponentTickFunction*)", TickFunction); }
	static void ExcludeHiddenBones(const USkeletalMeshComponent* SkeletalMeshComponent, const USkeletalMesh* SkeletalMesh, TArray<unsigned short, TSizedDefaultAllocator<32> >& OutRequiredBones) { NativeCall<void, const USkeletalMeshComponent*, const USkeletalMesh*, TArray<unsigned short, TSizedDefaultAllocator<32> >&>(nullptr, "USkeletalMeshComponent.ExcludeHiddenBones(USkeletalMeshComponent*,USkeletalMesh*,TArray<unsignedshort,TSizedDefaultAllocator<32>>&)", SkeletalMeshComponent, SkeletalMesh, OutRequiredBones); }
	bool AreRequiredCurvesUpToDate() { return NativeCall<bool>(this, "USkeletalMeshComponent.AreRequiredCurvesUpToDate()"); }
	bool CanEditSimulatePhysics() { return NativeCall<bool>(this, "USkeletalMeshComponent.CanEditSimulatePhysics()"); }
	bool ShouldUseClothEndTickWait() { return NativeCall<bool>(this, "USkeletalMeshComponent.ShouldUseClothEndTickWait()"); }
	void InitArticulated(FPhysScene_Chaos* PhysScene, bool bForceOnDedicatedServer) { NativeCall<void, FPhysScene_Chaos*, bool>(this, "USkeletalMeshComponent.InitArticulated(FPhysScene_Chaos*,bool)", PhysScene, bForceOnDedicatedServer); }
	void SetPredictedLODLevel(int InPredictedLODLevel) { NativeCall<void, int>(this, "USkeletalMeshComponent.SetPredictedLODLevel(int)", InPredictedLODLevel); }
	void SetConstraintProfile(FName JointName, FName ProfileName, bool bDefaultIfNotFound) { NativeCall<void, FName, FName, bool>(this, "USkeletalMeshComponent.SetConstraintProfile(FName,FName,bool)", JointName, ProfileName, bDefaultIfNotFound); }
	void UnregisterOnBoneTransformsFinalizedDelegate(const FDelegateHandle& DelegateHandle) { NativeCall<void, const FDelegateHandle&>(this, "USkeletalMeshComponent.UnregisterOnBoneTransformsFinalizedDelegate(FDelegateHandle&)", DelegateHandle); }
	void InitializeOnRegister() { NativeCall<void>(this, "USkeletalMeshComponent.InitializeOnRegister()"); }
	void SetCollisionObjectType(ECollisionChannel NewChannel) { NativeCall<void, ECollisionChannel>(this, "USkeletalMeshComponent.SetCollisionObjectType(ECollisionChannel)", NewChannel); }
	bool HasIKFinishedInterpolation() { return NativeCall<bool>(this, "USkeletalMeshComponent.HasIKFinishedInterpolation()"); }
	void FinalizeBoneTransform() { NativeCall<void>(this, "USkeletalMeshComponent.FinalizeBoneTransform()"); }
	void TickPose(float DeltaTime, bool bNeedsValidRootMotion) { NativeCall<void, float, bool>(this, "USkeletalMeshComponent.TickPose(float,bool)", DeltaTime, bNeedsValidRootMotion); }
	bool ShouldRunClothTick() { return NativeCall<bool>(this, "USkeletalMeshComponent.ShouldRunClothTick()"); }
	void BlendInPhysicsInternal(FTickFunction& ThisTickFunction) { NativeCall<void, FTickFunction&>(this, "USkeletalMeshComponent.BlendInPhysicsInternal(FTickFunction&)", ThisTickFunction); }
	bool HandleExistingParallelEvaluationTask(bool bBlockOnTask, bool bPerformPostAnimEvaluation) { return NativeCall<bool, bool, bool>(this, "USkeletalMeshComponent.HandleExistingParallelEvaluationTask(bool,bool)", bBlockOnTask, bPerformPostAnimEvaluation); }
	void SetRootBodyIndex(int InBodyIndex) { NativeCall<void, int>(this, "USkeletalMeshComponent.SetRootBodyIndex(int)", InBodyIndex); }
	void RecalcRequiredCurves() { NativeCall<void>(this, "USkeletalMeshComponent.RecalcRequiredCurves()"); }
	bool CanHaveStaticMobility() { return NativeCall<bool>(this, "USkeletalMeshComponent.CanHaveStaticMobility()"); }
	void SetPhysMaterialOverride(UPhysicalMaterial* NewPhysMaterial) { NativeCall<void, UPhysicalMaterial*>(this, "USkeletalMeshComponent.SetPhysMaterialOverride(UPhysicalMaterial*)", NewPhysMaterial); }
	void SetupBetweenAnimationBlueprintBlending() { NativeCall<void>(this, "USkeletalMeshComponent.SetupBetweenAnimationBlueprintBlending()"); }
	void OnPreEndOfFrameSync() { NativeCall<void>(this, "USkeletalMeshComponent.OnPreEndOfFrameSync()"); }
	UAnimInstance* GetAnimInstance() { return NativeCall<UAnimInstance*>(this, "USkeletalMeshComponent.GetAnimInstance()"); }
	bool GetClothSimulatedPosition_GameThread(const FGuid& AssetGuid, int VertexIndex, UE::Math::TVector<double>& OutSimulPos) { return NativeCall<bool, const FGuid&, int, UE::Math::TVector<double>&>(this, "USkeletalMeshComponent.GetClothSimulatedPosition_GameThread(FGuid&,int,UE::Math::TVector<double>&)", AssetGuid, VertexIndex, OutSimulPos); }
	void ResumeClothingSimulation() { NativeCall<void>(this, "USkeletalMeshComponent.ResumeClothingSimulation()"); }
	void TermArticulated() { NativeCall<void>(this, "USkeletalMeshComponent.TermArticulated()"); }
	void SetComponentTickEnabled(bool bEnabled) { NativeCall<void, bool>(this, "USkeletalMeshComponent.SetComponentTickEnabled(bool)", bEnabled); }
	void SetPhysicsBlendWeight(float PhysicsBlendWeight) { NativeCall<void, float>(this, "USkeletalMeshComponent.SetPhysicsBlendWeight(float)", PhysicsBlendWeight); }
	void UpdateClothTickRegisteredState() { NativeCall<void>(this, "USkeletalMeshComponent.UpdateClothTickRegisteredState()"); }
	void SetMorphTarget(FName MorphTargetName, float Value, bool bRemoveZeroWeight) { NativeCall<void, FName, float, bool>(this, "USkeletalMeshComponent.SetMorphTarget(FName,float,bool)", MorphTargetName, Value, bRemoveZeroWeight); }
	bool ShouldWaitForClothInTickFunction() { return NativeCall<bool>(this, "USkeletalMeshComponent.ShouldWaitForClothInTickFunction()"); }
	void TickMontagesOnly(float DeltaTime, bool bNeedsValidRootMotion) { NativeCall<void, float, bool>(this, "USkeletalMeshComponent.TickMontagesOnly(float,bool)", DeltaTime, bNeedsValidRootMotion); }
	void PostInitProperties() { NativeCall<void>(this, "USkeletalMeshComponent.PostInitProperties()"); }
	bool ShouldOnlyTickMontages(float DeltaTime) { return NativeCall<bool, float>(this, "USkeletalMeshComponent.ShouldOnlyTickMontages(float)", DeltaTime); }
	void SetAnimationMode(EAnimationMode::Type InAnimationMode, bool bForceInitAnimScriptInstance) { NativeCall<void, EAnimationMode::Type, bool>(this, "USkeletalMeshComponent.SetAnimationMode(EAnimationMode::Type,bool)", InAnimationMode, bForceInitAnimScriptInstance); }
	int FindRootBodyIndex() { return NativeCall<int>(this, "USkeletalMeshComponent.FindRootBodyIndex()"); }
	void SetAllMassScale(float InMassScale) { NativeCall<void, float>(this, "USkeletalMeshComponent.SetAllMassScale(float)", InMassScale); }
	bool GetSquaredDistanceToCollision(const UE::Math::TVector<double>& Point, float& OutSquaredDistance, UE::Math::TVector<double>& OutClosestPointOnCollision) { return NativeCall<bool, const UE::Math::TVector<double>&, float&, UE::Math::TVector<double>&>(this, "USkeletalMeshComponent.GetSquaredDistanceToCollision(UE::Math::TVector<double>&,float&,UE::Math::TVector<double>&)", Point, OutSquaredDistance, OutClosestPointOnCollision); }
	void SuspendClothingSimulation() { NativeCall<void>(this, "USkeletalMeshComponent.SuspendClothingSimulation()"); }
	void UpdateHasValidBodies() { NativeCall<void>(this, "USkeletalMeshComponent.UpdateHasValidBodies()"); }
	void ClearMorphTargets() { NativeCall<void>(this, "USkeletalMeshComponent.ClearMorphTargets()"); }
	bool IsSimulatingPhysics(FName BoneName) { return NativeCall<bool, FName>(this, "USkeletalMeshComponent.IsSimulatingPhysics(FName)", BoneName); }
	void EnableRagdoll(UE::Math::TVector<double>* WithVelocity) { if (!WithVelocity) throw std::invalid_argument("Null native value parameter"); return NativeCall<void, UE :: Math :: TVector < double >>(this, "USkeletalMeshComponent.EnableRagdoll(UE::Math::TVector<double>)", *WithVelocity); }
	void Serialize(FArchive& Ar) { NativeCall<void, FArchive&>(this, "USkeletalMeshComponent.Serialize(FArchive&)", Ar); }
	UObject* _getUObject() { return NativeCall<UObject*>(this, "USkeletalMeshComponent._getUObject()"); }
	void SetNotifyRigidBodyCollisionBelow(bool bNewNotifyRigidBodyCollision, FName BoneName, bool bIncludeSelf) { NativeCall<void, bool, FName, bool>(this, "USkeletalMeshComponent.SetNotifyRigidBodyCollisionBelow(bool,FName,bool)", bNewNotifyRigidBodyCollision, BoneName, bIncludeSelf); }
	void SetAllBodiesPhysicsBlendWeight(float PhysicsBlendWeight, bool bSkipCustomPhysicsType) { NativeCall<void, float, bool>(this, "USkeletalMeshComponent.SetAllBodiesPhysicsBlendWeight(float,bool)", PhysicsBlendWeight, bSkipCustomPhysicsType); }
	void SetConstraintProfileForAll(FName ProfileName, bool bDefaultIfNotFound) { NativeCall<void, FName, bool>(this, "USkeletalMeshComponent.SetConstraintProfileForAll(FName,bool)", ProfileName, bDefaultIfNotFound); }
	bool PoseTickedThisFrame() { return NativeCall<bool>(this, "USkeletalMeshComponent.PoseTickedThisFrame()"); }
	bool HasValidPhysicsState() { return NativeCall<bool>(this, "USkeletalMeshComponent.HasValidPhysicsState()"); }
	void UpdateClothStateAndSimulate(float DeltaTime, FTickFunction& ThisTickFunction) { NativeCall<void, float, FTickFunction&>(this, "USkeletalMeshComponent.UpdateClothStateAndSimulate(float,FTickFunction&)", DeltaTime, ThisTickFunction); }
	void RecalcRequiredBones(int LODIndex) { NativeCall<void, int>(this, "USkeletalMeshComponent.RecalcRequiredBones(int)", LODIndex); }
	bool GetConstraintProfilePropertiesOrDefault(FConstraintProfileProperties& OutProperties, FName JointName, FName ProfileName) { return NativeCall<bool, FConstraintProfileProperties&, FName, FName>(this, "USkeletalMeshComponent.GetConstraintProfilePropertiesOrDefault(FConstraintProfileProperties&,FName,FName)", OutProperties, JointName, ProfileName); }
	bool ShouldTickPose() { return NativeCall<bool>(this, "USkeletalMeshComponent.ShouldTickPose()"); }
	bool GetClosestPointOnPhysicsAsset(const UE::Math::TVector<double>& WorldPosition, FClosestPointOnPhysicsAsset& ClosestPointOnPhysicsAsset, bool bApproximate) { return NativeCall<bool, const UE::Math::TVector<double>&, FClosestPointOnPhysicsAsset&, bool>(this, "USkeletalMeshComponent.GetClosestPointOnPhysicsAsset(UE::Math::TVector<double>&,FClosestPointOnPhysicsAsset&,bool)", WorldPosition, ClosestPointOnPhysicsAsset, bApproximate); }
	bool IsClothingSimulationSuspended() { return NativeCall<bool>(this, "USkeletalMeshComponent.IsClothingSimulationSuspended()"); }
	void InstantiatePhysicsAssetRefPose(const UPhysicsAsset& PhysAsset, const UE::Math::TVector<double>& Scale3D, TArray<FBodyInstance*, TSizedDefaultAllocator<32> >& OutBodies, TArray<FConstraintInstance*, TSizedDefaultAllocator<32> >& OutConstraints, FPhysScene_Chaos* PhysScene, USkeletalMeshComponent* OwningComponent, int UseRootBodyIndex, const FPhysicsAggregateReference_Chaos& UseAggregate, bool bCreateBodiesInRefPose) { NativeCall<void, const UPhysicsAsset&, const UE::Math::TVector<double>&, TArray<FBodyInstance*, TSizedDefaultAllocator<32> >&, TArray<FConstraintInstance*, TSizedDefaultAllocator<32> >&, FPhysScene_Chaos*, USkeletalMeshComponent*, int, const FPhysicsAggregateReference_Chaos&, bool>(this, "USkeletalMeshComponent.InstantiatePhysicsAssetRefPose(UPhysicsAsset&,UE::Math::TVector<double>&,TArray<FBodyInstance*,TSizedDefaultAllocator<32>>&,TArray<FConstraintInstance*,TSizedDefaultAllocator<32>>&,FPhysScene_Chaos*,USkeletalMeshComponent*,int,FPhysicsAggregateReference_Chaos&,bool)", PhysAsset, Scale3D, OutBodies, OutConstraints, PhysScene, OwningComponent, UseRootBodyIndex, UseAggregate, bCreateBodiesInRefPose); }
	void OnDestroyPhysicsState() { NativeCall<void>(this, "USkeletalMeshComponent.OnDestroyPhysicsState()"); }
	void SetAllBodiesSleepThreshold(float SleepThresh) { NativeCall<void, float>(this, "USkeletalMeshComponent.SetAllBodiesSleepThreshold(float)", SleepThresh); }
	void OnPlasticDeformationWrapper(int ConstraintIndex) { NativeCall<void, int>(this, "USkeletalMeshComponent.OnPlasticDeformationWrapper(int)", ConstraintIndex); }
	float GetClothMaxDistanceScale() { return NativeCall<float>(this, "USkeletalMeshComponent.GetClothMaxDistanceScale()"); }
	void PutAllRigidBodiesToSleep() { NativeCall<void>(this, "USkeletalMeshComponent.PutAllRigidBodiesToSleep()"); }
	void SetAllBodiesBelowLinearVelocity(const FName& InBoneName, const UE::Math::TVector<double>& LinearVelocity, bool bIncludeSelf) { NativeCall<void, const FName&, const UE::Math::TVector<double>&, bool>(this, "USkeletalMeshComponent.SetAllBodiesBelowLinearVelocity(FName&,UE::Math::TVector<double>&,bool)", InBoneName, LinearVelocity, bIncludeSelf); }
	void InitAnim(bool bForceReinit) { NativeCall<void, bool>(this, "USkeletalMeshComponent.InitAnim(bool)", bForceReinit); }
	float GetBoneMass(FName BoneName, bool bScaleMass) { return NativeCall<float, FName, bool>(this, "USkeletalMeshComponent.GetBoneMass(FName,bool)", BoneName, bScaleMass); }
	void DoInstanceFinalizeAnimation(bool bWasEvaluated) { NativeCall<void, bool>(this, "USkeletalMeshComponent.DoInstanceFinalizeAnimation(bool)", bWasEvaluated); }
	void UnHideBone(int BoneIndex) { NativeCall<void, int>(this, "USkeletalMeshComponent.UnHideBone(int)", BoneIndex); }
	bool ShouldBlendPhysicsBones() { return NativeCall<bool>(this, "USkeletalMeshComponent.ShouldBlendPhysicsBones()"); }
	void SetEnableGravity(bool bGravityEnabled) { NativeCall<void, bool>(this, "USkeletalMeshComponent.SetEnableGravity(bool)", bGravityEnabled); }
	FName FindConstraintBoneName(int ConstraintIndex) { using AsaReturnType = FName; alignas(AsaReturnType) unsigned char AsaReturnBytes[sizeof(AsaReturnType)]; auto* AsaReturnPointer = reinterpret_cast<AsaReturnType*>(AsaReturnBytes); auto* AsaReturnedPointer = NativeCall<AsaReturnType*, AsaReturnType*, int>(this, "USkeletalMeshComponent.FindConstraintBoneName(int)", AsaReturnPointer, ConstraintIndex); if (AsaReturnedPointer != AsaReturnPointer) throw std::runtime_error("Unexpected native result buffer"); std::unique_ptr<AsaReturnType, void(*)(AsaReturnType*)> AsaReturnOwner(std::launder(AsaReturnPointer), [](AsaReturnType* value) { value->~AsaReturnType(); }); return MoveTemp(*AsaReturnOwner); }
	void PrimalResolveAsset() { NativeCall<void>(this, "USkeletalMeshComponent.PrimalResolveAsset()"); }
	void ClearCachedAnimProperties() { NativeCall<void>(this, "USkeletalMeshComponent.ClearCachedAnimProperties()"); }
	bool IsPlayingMontage(UAnimMontage* Montage, float TimeFromEndToConsiderFinished) { return NativeCall<bool, UAnimMontage*, float>(this, "USkeletalMeshComponent.IsPlayingMontage(UAnimMontage*,float)", Montage, TimeFromEndToConsiderFinished); }
	void UpdatePhysicsToRBChannels() { NativeCall<void>(this, "USkeletalMeshComponent.UpdatePhysicsToRBChannels()"); }
	void RegisterComponentTickFunctions(bool bRegister, bool bSaveAndRestoreComponentTickState) { NativeCall<void, bool, bool>(this, "USkeletalMeshComponent.RegisterComponentTickFunctions(bool,bool)", bRegister, bSaveAndRestoreComponentTickState); }
	const FBlendedHeapCurve& GetAnimCurves() { return NativeCall<const FBlendedHeapCurve&>(this, "USkeletalMeshComponent.GetAnimCurves()"); }
	void OnUnregister() { NativeCall<void>(this, "USkeletalMeshComponent.OnUnregister()"); }
	void UpdateMorphTargetOverrideCurves() { NativeCall<void>(this, "USkeletalMeshComponent.UpdateMorphTargetOverrideCurves()"); }
	void AccumulateAllBodiesBelowPhysicsBlendWeight(const FName& InBoneName, float PhysicsBlendWeight, bool bSkipCustomPhysicsType) { NativeCall<void, const FName&, float, bool>(this, "USkeletalMeshComponent.AccumulateAllBodiesBelowPhysicsBlendWeight(FName&,float,bool)", InBoneName, PhysicsBlendWeight, bSkipCustomPhysicsType); }
	void OnCreatePhysicsState() { NativeCall<void>(this, "USkeletalMeshComponent.OnCreatePhysicsState()"); }
	void OnComponentCollisionSettingsChanged(bool bUpdateOverlaps) { NativeCall<void, bool>(this, "USkeletalMeshComponent.OnComponentCollisionSettingsChanged(bool)", bUpdateOverlaps); }
	void CompleteParallelAnimationEvaluation(bool bDoPostAnimEvaluation) { NativeCall<void, bool>(this, "USkeletalMeshComponent.CompleteParallelAnimationEvaluation(bool)", bDoPostAnimEvaluation); }
	bool GetCurveValue(FName CurveName, float DefaultValue, float& Value) { return NativeCall<bool, FName, float, float&>(this, "USkeletalMeshComponent.GetCurveValue(FName,float,float&)", CurveName, DefaultValue, Value); }
	bool AllowsAsyncPhysicsStateDestruction() { return NativeCall<bool>(this, "USkeletalMeshComponent.AllowsAsyncPhysicsStateDestruction()"); }
	TArray<APawn*, TSizedDefaultAllocator<32> >* GetTrueBasedPawns(TArray<APawn*, TSizedDefaultAllocator<32> >* result) { return NativeCall<TArray<APawn*, TSizedDefaultAllocator<32> >*, TArray<APawn*, TSizedDefaultAllocator<32> >*>(this, "USkeletalMeshComponent.GetTrueBasedPawns()", result); }
	void UpdateRBJointMotors() { NativeCall<void>(this, "USkeletalMeshComponent.UpdateRBJointMotors()"); }
	void BreakConstraint(UE::Math::TVector<double>* Impulse, UE::Math::TVector<double>* HitLocation, FName InBoneName) { if (!Impulse) throw std::invalid_argument("Null native value parameter"); if (!HitLocation) throw std::invalid_argument("Null native value parameter"); return NativeCall<void, UE :: Math :: TVector < double >, UE :: Math :: TVector < double >, FName>(this, "USkeletalMeshComponent.BreakConstraint(UE::Math::TVector<double>,UE::Math::TVector<double>,FName)", *Impulse, *HitLocation, InBoneName); }
	void DispatchParallelTickPose(FActorComponentTickFunction* TickFunction) { NativeCall<void, FActorComponentTickFunction*>(this, "USkeletalMeshComponent.DispatchParallelTickPose(FActorComponentTickFunction*)", TickFunction); }
	void MarkRequiredCurveUpToDate() { NativeCall<void>(this, "USkeletalMeshComponent.MarkRequiredCurveUpToDate()"); }
	void SetAllPhysicsPosition(UE::Math::TVector<double>* NewPos) { if (!NewPos) throw std::invalid_argument("Null native value parameter"); return NativeCall<void, UE :: Math :: TVector < double >>(this, "USkeletalMeshComponent.SetAllPhysicsPosition(UE::Math::TVector<double>)", *NewPos); }
	void HandleExistingParallelClothSimulation() { NativeCall<void>(this, "USkeletalMeshComponent.HandleExistingParallelClothSimulation()"); }
	void AddForceToAllBodiesBelow(UE::Math::TVector<double>* Force, FName BoneName, bool bAccelChange, bool bIncludeSelf) { if (!Force) throw std::invalid_argument("Null native value parameter"); return NativeCall<void, UE :: Math :: TVector < double >, FName, bool, bool>(this, "USkeletalMeshComponent.AddForceToAllBodiesBelow(UE::Math::TVector<double>,FName,bool,bool)", *Force, BoneName, bAccelChange, bIncludeSelf); }
	void SetPosition(float InPos, bool bFireNotifies) { NativeCall<void, float, bool>(this, "USkeletalMeshComponent.SetPosition(float,bool)", InPos, bFireNotifies); }
	void ResetMorphTargetCurves() { NativeCall<void>(this, "USkeletalMeshComponent.ResetMorphTargetCurves()"); }
	bool ShouldEvaluatePostProcessAnimBP() { return NativeCall<bool>(this, "USkeletalMeshComponent.ShouldEvaluatePostProcessAnimBP()"); }
	bool LineTraceComponent(FHitResult& OutHit, UE::Math::TVector<double>* Start, UE::Math::TVector<double>* End, const FCollisionQueryParams& Params) { if (!Start) throw std::invalid_argument("Null native value parameter"); if (!End) throw std::invalid_argument("Null native value parameter"); return NativeCall<bool, FHitResult &, UE :: Math :: TVector < double >, UE :: Math :: TVector < double >, const FCollisionQueryParams &>(this, "USkeletalMeshComponent.LineTraceComponent(FHitResult&,UE::Math::TVector<double>,UE::Math::TVector<double>,FCollisionQueryParams&)", OutHit, *Start, *End, Params); }
	void SetAnimInstanceClass(UClass* NewClass) { NativeCall<void, UClass*>(this, "USkeletalMeshComponent.SetAnimInstanceClass(UClass*)", NewClass); }
	USkeletalMesh* GetSkeletalMeshAsset() { return NativeCall<USkeletalMesh*>(this, "USkeletalMeshComponent.GetSkeletalMeshAsset()"); }
	void UnregisterOnPhysicsCreatedDelegate(const FDelegateHandle& DelegateHandle) { NativeCall<void, const FDelegateHandle&>(this, "USkeletalMeshComponent.UnregisterOnPhysicsCreatedDelegate(FDelegateHandle&)", DelegateHandle); }
	void OnConstraintBrokenWrapper(int ConstraintIndex) { NativeCall<void, int>(this, "USkeletalMeshComponent.OnConstraintBrokenWrapper(int)", ConstraintIndex); }
	void UpdateClothTransformImp() { NativeCall<void>(this, "USkeletalMeshComponent.UpdateClothTransformImp()"); }
	void SetAllBodiesSimulatePhysics(bool bNewSimulate) { NativeCall<void, bool>(this, "USkeletalMeshComponent.SetAllBodiesSimulatePhysics(bool)", bNewSimulate); }
	void ReleaseAllClothingResources() { NativeCall<void>(this, "USkeletalMeshComponent.ReleaseAllClothingResources()"); }
	void ControlRigNotify(FName NotifyName, FName NotifyCustomTag, const FHitResult& WorldSpaceHitResult, const UE::Math::TVector<double>& Velocity) { NativeCall<void, FName, FName, const FHitResult&, const UE::Math::TVector<double>&>(this, "USkeletalMeshComponent.ControlRigNotify(FName,FName,FHitResult&,UE::Math::TVector<double>&)", NotifyName, NotifyCustomTag, WorldSpaceHitResult, Velocity); }
	void UpdateBoneBodyMapping() { NativeCall<void>(this, "USkeletalMeshComponent.UpdateBoneBodyMapping()"); }
	void RemoveFollowerPoseComponent(USkinnedMeshComponent* SkinnedMeshComponent) { NativeCall<void, USkinnedMeshComponent*>(this, "USkeletalMeshComponent.RemoveFollowerPoseComponent(USkinnedMeshComponent*)", SkinnedMeshComponent); }
	UBodySetup* GetBodySetup() { return NativeCall<UBodySetup*>(this, "USkeletalMeshComponent.GetBodySetup()"); }
	void ResetToRefPose() { NativeCall<void>(this, "USkeletalMeshComponent.ResetToRefPose()"); }
	bool IsPlayingNetworkedRootMotionMontage() { return NativeCall<bool>(this, "USkeletalMeshComponent.IsPlayingNetworkedRootMotionMontage()"); }
	void ForceClothNextUpdateTeleport() { NativeCall<void>(this, "USkeletalMeshComponent.ForceClothNextUpdateTeleport()"); }
	void DoInstancePreEvaluation() { NativeCall<void>(this, "USkeletalMeshComponent.DoInstancePreEvaluation()"); }
	bool AreBoneTransformsValid() { return NativeCall<bool>(this, "USkeletalMeshComponent.AreBoneTransformsValid()"); }
	void SkelMeshCompOnParticleSystemFinished(UParticleSystemComponent* PSC) { NativeCall<void, UParticleSystemComponent*>(this, "USkeletalMeshComponent.SkelMeshCompOnParticleSystemFinished(UParticleSystemComponent*)", PSC); }
	void SwapEvaluationContextBuffers() { NativeCall<void>(this, "USkeletalMeshComponent.SwapEvaluationContextBuffers()"); }
	void SetCollisionEnabled(ECollisionEnabled::Type NewType) { NativeCall<void, ECollisionEnabled::Type>(this, "USkeletalMeshComponent.SetCollisionEnabled(ECollisionEnabled::Type)", NewType); }
	void GetWindForCloth_GameThread(UE::Math::TVector<double>& WindDirection, float& WindAdaption) { NativeCall<void, UE::Math::TVector<double>&, float&>(this, "USkeletalMeshComponent.GetWindForCloth_GameThread(UE::Math::TVector<double>&,float&)", WindDirection, WindAdaption); }
	void ResetClothCollisionSources() { NativeCall<void>(this, "USkeletalMeshComponent.ResetClothCollisionSources()"); }
	static UE::Math::TVector<float>* GetSkinnedVertexPosition(UE::Math::TVector<float>* result, USkeletalMeshComponent* Component, int VertexIndex, const FSkeletalMeshLODRenderData& LODData, const FSkinWeightVertexBuffer& SkinWeightBuffer) { return NativeCall<UE::Math::TVector<float>*, UE::Math::TVector<float>*, USkeletalMeshComponent*, int, const FSkeletalMeshLODRenderData&, const FSkinWeightVertexBuffer&>(nullptr, "USkeletalMeshComponent.GetSkinnedVertexPosition(USkeletalMeshComponent*,int,FSkeletalMeshLODRenderData&,FSkinWeightVertexBuffer&)", result, Component, VertexIndex, LODData, SkinWeightBuffer); }
	void SetBodyNotifyRigidBodyCollision(bool bNewNotifyRigidBodyCollision, FName BoneName) { NativeCall<void, bool, FName>(this, "USkeletalMeshComponent.SetBodyNotifyRigidBodyCollision(bool,FName)", bNewNotifyRigidBodyCollision, BoneName); }
	void TickAnimation(float DeltaTime, bool bNeedsValidRootMotion) { NativeCall<void, float, bool>(this, "USkeletalMeshComponent.TickAnimation(float,bool)", DeltaTime, bNeedsValidRootMotion); }
	bool IsGravityEnabled() { return NativeCall<bool>(this, "USkeletalMeshComponent.IsGravityEnabled()"); }
	void RemoveClothCollisionSources(USkeletalMeshComponent* InSourceComponent) { NativeCall<void, USkeletalMeshComponent*>(this, "USkeletalMeshComponent.RemoveClothCollisionSources(USkeletalMeshComponent*)", InSourceComponent); }
	float GetTeleportDistanceThreshold() { return NativeCall<float>(this, "USkeletalMeshComponent.GetTeleportDistanceThreshold()"); }
	bool ShouldTickAnimation() { return NativeCall<bool>(this, "USkeletalMeshComponent.ShouldTickAnimation()"); }
	void UnregisterOnTeleportDelegate(const FDelegateHandle& DelegateHandle) { NativeCall<void, const FDelegateHandle&>(this, "USkeletalMeshComponent.UnregisterOnTeleportDelegate(FDelegateHandle&)", DelegateHandle); }
	bool GetDisablePostProcessBlueprint() { return NativeCall<bool>(this, "USkeletalMeshComponent.GetDisablePostProcessBlueprint()"); }
	void SetBodySimulatePhysics(const FName& InBoneName, bool bSimulate) { NativeCall<void, const FName&, bool>(this, "USkeletalMeshComponent.SetBodySimulatePhysics(FName&,bool)", InBoneName, bSimulate); }
	void ResetClothTeleportMode() { NativeCall<void>(this, "USkeletalMeshComponent.ResetClothTeleportMode()"); }
	bool CanSimulateClothing() { return NativeCall<bool>(this, "USkeletalMeshComponent.CanSimulateClothing()"); }
	static UClass* StaticClass() { return AsaApi::ResolveClass("USkeletalMeshComponent"); }
	void DestroyPhysicsState() { NativeCall<void>(this, "USkeletalMeshComponent.DestroyPhysicsState()"); }
	UE::Math::TVector<double>* GetMeshScaleMultiplier(UE::Math::TVector<double>* result) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*>(this, "USkeletalMeshComponent.GetMeshScaleMultiplier()", result); }
	void RemoveClothCollisionSource(USkeletalMeshComponent* InSourceComponent, UPhysicsAsset* InSourcePhysicsAsset) { NativeCall<void, USkeletalMeshComponent*, UPhysicsAsset*>(this, "USkeletalMeshComponent.RemoveClothCollisionSource(USkeletalMeshComponent*,UPhysicsAsset*)", InSourceComponent, InSourcePhysicsAsset); }
	UE::Math::TVector<double>* GetBoneLinearVelocity(UE::Math::TVector<double>* result, const FName& InBoneName) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*, const FName&>(this, "USkeletalMeshComponent.GetBoneLinearVelocity(FName&)", result, InBoneName); }
	void BeginPlay() { NativeCall<void>(this, "USkeletalMeshComponent.BeginPlay()"); }
	static void GetRequiredVirtualBones(const USkeletalMesh* SkeletalMesh, TArray<unsigned short, TSizedDefaultAllocator<32> >& OutRequiredBones) { NativeCall<void, const USkeletalMesh*, TArray<unsigned short, TSizedDefaultAllocator<32> >&>(nullptr, "USkeletalMeshComponent.GetRequiredVirtualBones(USkeletalMesh*,TArray<unsignedshort,TSizedDefaultAllocator<32>>&)", SkeletalMesh, OutRequiredBones); }
	bool IsWindEnabled() { return NativeCall<bool>(this, "USkeletalMeshComponent.IsWindEnabled()"); }
	void SetPlayRate(float Rate) { NativeCall<void, float>(this, "USkeletalMeshComponent.SetPlayRate(float)", Rate); }
	void UpdateVisualizeLODString(FString& DebugString) { NativeCall<void, FString&>(this, "USkeletalMeshComponent.UpdateVisualizeLODString(FString&)", DebugString); }
	void RegisterEndPhysicsTick(bool bRegister) { NativeCall<void, bool>(this, "USkeletalMeshComponent.RegisterEndPhysicsTick(bool)", bRegister); }
	void WritebackClothingSimulationData() { NativeCall<void>(this, "USkeletalMeshComponent.WritebackClothingSimulationData()"); }
	void DoParallelEvaluationTasks_OnGameThread() { NativeCall<void>(this, "USkeletalMeshComponent.DoParallelEvaluationTasks_OnGameThread()"); }
	bool ShouldUpdateTransform(bool bLODHasChanged) { return NativeCall<bool, bool>(this, "USkeletalMeshComponent.ShouldUpdateTransform(bool)", bLODHasChanged); }
	void OnSyncComponentToRBPhysics() { NativeCall<void>(this, "USkeletalMeshComponent.OnSyncComponentToRBPhysics()"); }
	void SetAngularLimits(FName InBoneName, float Swing1LimitAngle, float TwistLimitAngle, float Swing2LimitAngle) { NativeCall<void, FName, float, float, float>(this, "USkeletalMeshComponent.SetAngularLimits(FName,float,float,float)", InBoneName, Swing1LimitAngle, TwistLimitAngle, Swing2LimitAngle); }
	void GetResourceSizeEx(FResourceSizeEx& CumulativeResourceSize) { NativeCall<void, FResourceSizeEx&>(this, "USkeletalMeshComponent.GetResourceSizeEx(FResourceSizeEx&)", CumulativeResourceSize); }
	void Play(bool bLooping) { NativeCall<void, bool>(this, "USkeletalMeshComponent.Play(bool)", bLooping); }
	void SetAllPhysicsLinearVelocity(UE::Math::TVector<double>* NewVel, bool bAddToCurrent) { if (!NewVel) throw std::invalid_argument("Null native value parameter"); return NativeCall<void, UE :: Math :: TVector < double >, bool>(this, "USkeletalMeshComponent.SetAllPhysicsLinearVelocity(UE::Math::TVector<double>,bool)", *NewVel, bAddToCurrent); }
	void WakeAllRigidBodies() { NativeCall<void>(this, "USkeletalMeshComponent.WakeAllRigidBodies()"); }
	void CompleteParallelClothSimulation() { NativeCall<void>(this, "USkeletalMeshComponent.CompleteParallelClothSimulation()"); }
	void PostDuplicate(bool bDuplicateForPIE) { NativeCall<void, bool>(this, "USkeletalMeshComponent.PostDuplicate(bool)", bDuplicateForPIE); }
	void AddImpulseToAllBodiesBelow(UE::Math::TVector<double>* Impulse, FName BoneName, bool bVelChange, bool bIncludeSelf) { if (!Impulse) throw std::invalid_argument("Null native value parameter"); return NativeCall<void, UE :: Math :: TVector < double >, FName, bool, bool>(this, "USkeletalMeshComponent.AddImpulseToAllBodiesBelow(UE::Math::TVector<double>,FName,bool,bool)", *Impulse, BoneName, bVelChange, bIncludeSelf); }
	void ResetRootBodyIndex() { NativeCall<void>(this, "USkeletalMeshComponent.ResetRootBodyIndex()"); }
	void SetAnimClass(UClass* NewClass) { NativeCall<void, UClass*>(this, "USkeletalMeshComponent.SetAnimClass(UClass*)", NewClass); }
	void Stop() { NativeCall<void>(this, "USkeletalMeshComponent.Stop()"); }
	bool IsAnySimulatingPhysics() { return NativeCall<bool>(this, "USkeletalMeshComponent.IsAnySimulatingPhysics()"); }
	float CalculateMass(FName BoneName) { return NativeCall<float, FName>(this, "USkeletalMeshComponent.CalculateMass(FName)", BoneName); }
	bool ShouldEvaluatePostProcessInstance() { return NativeCall<bool>(this, "USkeletalMeshComponent.ShouldEvaluatePostProcessInstance()"); }
	void ConditionallyDispatchQueuedAnimEvents() { NativeCall<void>(this, "USkeletalMeshComponent.ConditionallyDispatchQueuedAnimEvents()"); }
	void GetCurrentJointAngles(FName InBoneName, float& Swing1Angle, float& TwistAngle, float& Swing2Angle) { NativeCall<void, FName, float&, float&, float&>(this, "USkeletalMeshComponent.GetCurrentJointAngles(FName,float&,float&,float&)", InBoneName, Swing1Angle, TwistAngle, Swing2Angle); }
	void SetAnimation(UAnimationAsset* NewAnimToPlay) { NativeCall<void, UAnimationAsset*>(this, "USkeletalMeshComponent.SetAnimation(UAnimationAsset*)", NewAnimToPlay); }
	void SetEnableGravityOnAllBodiesBelow(bool bEnableGravity, FName BoneName, bool bIncludeSelf) { NativeCall<void, bool, FName, bool>(this, "USkeletalMeshComponent.SetEnableGravityOnAllBodiesBelow(bool,FName,bool)", bEnableGravity, BoneName, bIncludeSelf); }
	void AllowQueuedAnimEventsNextDispatch() { NativeCall<void>(this, "USkeletalMeshComponent.AllowQueuedAnimEventsNextDispatch()"); }
	void TermBodiesBelow(FName ParentBoneName) { NativeCall<void, FName>(this, "USkeletalMeshComponent.TermBodiesBelow(FName)", ParentBoneName); }
	void UpdateClothTransform() { NativeCall<void>(this, "USkeletalMeshComponent.UpdateClothTransform()"); }
	void UpdateMeshForBrokenConstraints() { NativeCall<void>(this, "USkeletalMeshComponent.UpdateMeshForBrokenConstraints()"); }
	void ParallelDuplicateAndInterpolate(FAnimationEvaluationContext& InAnimEvaluationContext) { NativeCall<void, FAnimationEvaluationContext&>(this, "USkeletalMeshComponent.ParallelDuplicateAndInterpolate(FAnimationEvaluationContext&)", InAnimEvaluationContext); }
	void PostLoad() { NativeCall<void>(this, "USkeletalMeshComponent.PostLoad()"); }
	static const FName& GetAnimationModePropertyNameChecked() { return NativeCall<const FName&>(nullptr, "USkeletalMeshComponent.GetAnimationModePropertyNameChecked()"); }
	void RecreateClothingActors() { NativeCall<void>(this, "USkeletalMeshComponent.RecreateClothingActors()"); }
	void ParallelAnimationEvaluation() { NativeCall<void>(this, "USkeletalMeshComponent.ParallelAnimationEvaluation()"); }
	void SkippedTickPose() { NativeCall<void>(this, "USkeletalMeshComponent.SkippedTickPose()"); }
	bool K2_GetClosestPointOnPhysicsAsset(const UE::Math::TVector<double>& WorldPosition, UE::Math::TVector<double>& ClosestWorldPosition, UE::Math::TVector<double>& Normal, FName& BoneName, float& Distance) { return NativeCall<bool, const UE::Math::TVector<double>&, UE::Math::TVector<double>&, UE::Math::TVector<double>&, FName&, float&>(this, "USkeletalMeshComponent.K2_GetClosestPointOnPhysicsAsset(UE::Math::TVector<double>&,UE::Math::TVector<double>&,UE::Math::TVector<double>&,FName&,float&)", WorldPosition, ClosestWorldPosition, Normal, BoneName, Distance); }
	void ForceClothNextUpdateTeleportAndReset() { NativeCall<void>(this, "USkeletalMeshComponent.ForceClothNextUpdateTeleportAndReset()"); }
	UE::Math::TVector<double>* GetSkeletalCenterOfMass(UE::Math::TVector<double>* result) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*>(this, "USkeletalMeshComponent.GetSkeletalCenterOfMass()", result); }
	void SetEnableAnimation(bool bNewEnableAnimation) { NativeCall<void, bool>(this, "USkeletalMeshComponent.SetEnableAnimation(bool)", bNewEnableAnimation); }
	void SetSimulatePhysics(bool bSimulate) { NativeCall<void, bool>(this, "USkeletalMeshComponent.SetSimulatePhysics(bool)", bSimulate); }
	void K2_SetAnimInstanceClass(UClass* NewClass) { NativeCall<void, UClass*>(this, "USkeletalMeshComponent.K2_SetAnimInstanceClass(UClass*)", NewClass); }
	FConstraintInstance* GetConstraintInstanceByIndex(unsigned int Index) { return NativeCall<FConstraintInstance*, unsigned int>(this, "USkeletalMeshComponent.GetConstraintInstanceByIndex(unsignedint)", Index); }
	void SetClothMaxDistanceScale(float Scale) { NativeCall<void, float>(this, "USkeletalMeshComponent.SetClothMaxDistanceScale(float)", Scale); }
	void SetAllBodiesBelowPhysicsBlendWeight(const FName& InBoneName, float PhysicsBlendWeight, bool bSkipCustomPhysicsType, bool bIncludeSelf) { NativeCall<void, const FName&, float, bool, bool>(this, "USkeletalMeshComponent.SetAllBodiesBelowPhysicsBlendWeight(FName&,float,bool,bool)", InBoneName, PhysicsBlendWeight, bSkipCustomPhysicsType, bIncludeSelf); }
	void SetNotifyRigidBodyCollision(bool bNewNotifyRigidBodyCollision) { NativeCall<void, bool>(this, "USkeletalMeshComponent.SetNotifyRigidBodyCollision(bool)", bNewNotifyRigidBodyCollision); }
	void SetEnablePerPolyCollision(bool bInEnablePerPolyCollision) { NativeCall<void, bool>(this, "USkeletalMeshComponent.SetEnablePerPolyCollision(bool)", bInEnablePerPolyCollision); }
	void SetUpdateClothInEditor(bool NewUpdateState) { NativeCall<void, bool>(this, "USkeletalMeshComponent.SetUpdateClothInEditor(bool)", NewUpdateState); }
	void SetAllPhysicsAngularVelocityInRadians(const UE::Math::TVector<double>& NewAngVel, bool bAddToCurrent) { NativeCall<void, const UE::Math::TVector<double>&, bool>(this, "USkeletalMeshComponent.SetAllPhysicsAngularVelocityInRadians(UE::Math::TVector<double>&,bool)", NewAngVel, bAddToCurrent); }
	EAnimationMode::Type GetAnimationMode() { return NativeCall<EAnimationMode::Type>(this, "USkeletalMeshComponent.GetAnimationMode()"); }
	bool IsPlayingAnimationMontagesOnSlotName(FName SlotName, bool bCheckAllAnimTracks) { return NativeCall<bool, FName, bool>(this, "USkeletalMeshComponent.IsPlayingAnimationMontagesOnSlotName(FName,bool)", SlotName, bCheckAllAnimTracks); }
	static void GetShadowShapeRequiredBones(const USkeletalMeshComponent* SkeletalMeshComponent, TArray<unsigned short, TSizedDefaultAllocator<32> >& OutRequiredBones) { NativeCall<void, const USkeletalMeshComponent*, TArray<unsigned short, TSizedDefaultAllocator<32> >&>(nullptr, "USkeletalMeshComponent.GetShadowShapeRequiredBones(USkeletalMeshComponent*,TArray<unsignedshort,TSizedDefaultAllocator<32>>&)", SkeletalMeshComponent, OutRequiredBones); }
	void RefreshBonesAndUpdateBounds(FActorComponentTickFunction* TickFunction) { NativeCall<void, FActorComponentTickFunction*>(this, "USkeletalMeshComponent.RefreshBonesAndUpdateBounds(FActorComponentTickFunction*)", TickFunction); }
	bool IsPlayingRootMotion() { return NativeCall<bool>(this, "USkeletalMeshComponent.IsPlayingRootMotion()"); }
	void DeallocateTransformData() { NativeCall<void>(this, "USkeletalMeshComponent.DeallocateTransformData()"); }
	void GetWeldedBodies(TArray<FBodyInstance*, TSizedDefaultAllocator<32> >& OutWeldedBodies, TArray<FName, TSizedDefaultAllocator<32> >& OutLabels, bool bIncludingAutoWeld) { NativeCall<void, TArray<FBodyInstance*, TSizedDefaultAllocator<32> >&, TArray<FName, TSizedDefaultAllocator<32> >&, bool>(this, "USkeletalMeshComponent.GetWeldedBodies(TArray<FBodyInstance*,TSizedDefaultAllocator<32>>&,TArray<FName,TSizedDefaultAllocator<32>>&,bool)", OutWeldedBodies, OutLabels, bIncludingAutoWeld); }
	void ResetAllBodiesSimulatePhysics() { NativeCall<void>(this, "USkeletalMeshComponent.ResetAllBodiesSimulatePhysics()"); }
	float GetMass() { return NativeCall<float>(this, "USkeletalMeshComponent.GetMass()"); }
	void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) { NativeCall<void, float, ELevelTick, FActorComponentTickFunction*>(this, "USkeletalMeshComponent.TickComponent(float,ELevelTick,FActorComponentTickFunction*)", DeltaTime, TickType, ThisTickFunction); }
	void RefreshBoneTransforms(FActorComponentTickFunction* TickFunction) { NativeCall<void, FActorComponentTickFunction*>(this, "USkeletalMeshComponent.RefreshBoneTransforms(FActorComponentTickFunction*)", TickFunction); }
	void SetSkinnedAssetAndUpdate(USkinnedAsset* InSkinnedAsset, bool bReinitPose) { NativeCall<void, USkinnedAsset*, bool>(this, "USkeletalMeshComponent.SetSkinnedAssetAndUpdate(USkinnedAsset*,bool)", InSkinnedAsset, bReinitPose); }
	void SetUpdateAnimationInEditor(bool NewUpdateState) { NativeCall<void, bool>(this, "USkeletalMeshComponent.SetUpdateAnimationInEditor(bool)", NewUpdateState); }
	void SnapshotPose(FPoseSnapshot& Snapshot) { NativeCall<void, FPoseSnapshot&>(this, "USkeletalMeshComponent.SnapshotPose(FPoseSnapshot&)", Snapshot); }
	IClothingSimulationContext* GetClothingSimulationContext() { return NativeCall<IClothingSimulationContext*>(this, "USkeletalMeshComponent.GetClothingSimulationContext()"); }
	void SetSkeletalMesh(USkeletalMesh* InSkelMesh, bool bReinitPose) { NativeCall<void, USkeletalMesh*, bool>(this, "USkeletalMeshComponent.SetSkeletalMesh(USkeletalMesh*,bool)", InSkelMesh, bReinitPose); }
	void UpdateEndPhysicsTickRegisteredState() { NativeCall<void>(this, "USkeletalMeshComponent.UpdateEndPhysicsTickRegisteredState()"); }
	void OnComponentDestroyed(bool bDestroyingHierarchy) { NativeCall<void, bool>(this, "USkeletalMeshComponent.OnComponentDestroyed(bool)", bDestroyingHierarchy); }
	void SetAllMotorsAngularPositionDrive(bool bEnableSwingDrive, bool bEnableTwistDrive, bool bSkipCustomPhysicsType) { NativeCall<void, bool, bool, bool>(this, "USkeletalMeshComponent.SetAllMotorsAngularPositionDrive(bool,bool,bool)", bEnableSwingDrive, bEnableTwistDrive, bSkipCustomPhysicsType); }
	void OnClearAnimScriptInstance() { NativeCall<void>(this, "USkeletalMeshComponent.OnClearAnimScriptInstance()"); }
	void SetEnablePhysicsBlending(bool bNewBlendPhysics) { NativeCall<void, bool>(this, "USkeletalMeshComponent.SetEnablePhysicsBlending(bool)", bNewBlendPhysics); }
	bool ShouldCreatePhysicsState() { return NativeCall<bool>(this, "USkeletalMeshComponent.ShouldCreatePhysicsState()"); }
	void RefreshMorphTargets() { NativeCall<void>(this, "USkeletalMeshComponent.RefreshMorphTargets()"); }
	void ComputeRequiredBones(TArray<unsigned short, TSizedDefaultAllocator<32> >& OutRequiredBones, TArray<unsigned short, TSizedDefaultAllocator<32> >& OutFillComponentSpaceTransformsRequiredBones, int LODIndex, bool bIgnorePhysicsAsset) { NativeCall<void, TArray<unsigned short, TSizedDefaultAllocator<32> >&, TArray<unsigned short, TSizedDefaultAllocator<32> >&, int, bool>(this, "USkeletalMeshComponent.ComputeRequiredBones(TArray<unsignedshort,TSizedDefaultAllocator<32>>&,TArray<unsignedshort,TSizedDefaultAllocator<32>>&,int,bool)", OutRequiredBones, OutFillComponentSpaceTransformsRequiredBones, LODIndex, bIgnorePhysicsAsset); }
	void AddRadialImpulse(UE::Math::TVector<double>* Origin, float Radius, float Strength, ERadialImpulseFalloff Falloff, bool bVelChange) { if (!Origin) throw std::invalid_argument("Null native value parameter"); return NativeCall<void, UE :: Math :: TVector < double >, float, float, ERadialImpulseFalloff, bool>(this, "USkeletalMeshComponent.AddRadialImpulse(UE::Math::TVector<double>,float,float,ERadialImpulseFalloff,bool)", *Origin, Radius, Strength, Falloff, bVelChange); }
	UE::Math::TTransform<double>* GetComponentTransformFromBodyInstance(UE::Math::TTransform<double>* result, FBodyInstance* UseBI) { return NativeCall<UE::Math::TTransform<double>*, UE::Math::TTransform<double>*, FBodyInstance*>(this, "USkeletalMeshComponent.GetComponentTransformFromBodyInstance(FBodyInstance*)", result, UseBI); }
	void AddClothCollisionSource(USkeletalMeshComponent* InSourceComponent, UPhysicsAsset* InSourcePhysicsAsset) { NativeCall<void, USkeletalMeshComponent*, UPhysicsAsset*>(this, "USkeletalMeshComponent.AddClothCollisionSource(USkeletalMeshComponent*,UPhysicsAsset*)", InSourceComponent, InSourcePhysicsAsset); }
	void ClearRefPoseOverride() { NativeCall<void>(this, "USkeletalMeshComponent.ClearRefPoseOverride()"); }
	void ResetLinkedAnimInstances() { NativeCall<void>(this, "USkeletalMeshComponent.ResetLinkedAnimInstances()"); }
	void SendRenderDynamicData_Concurrent() { NativeCall<void>(this, "USkeletalMeshComponent.SendRenderDynamicData_Concurrent()"); }
	void SetAllMotorsAngularDriveParams(float InSpring, float InDamping, float InForceLimit, bool bSkipCustomPhysicsType) { NativeCall<void, float, float, float, bool>(this, "USkeletalMeshComponent.SetAllMotorsAngularDriveParams(float,float,float,bool)", InSpring, InDamping, InForceLimit, bSkipCustomPhysicsType); }
	bool InitializeAnimScriptInstance(bool bForceReinit, bool bInDeferRootNodeInitialization) { return NativeCall<bool, bool, bool>(this, "USkeletalMeshComponent.InitializeAnimScriptInstance(bool,bool)", bForceReinit, bInDeferRootNodeInitialization); }
	bool IsBodyGravityEnabled(FName BoneName) { return NativeCall<bool, FName>(this, "USkeletalMeshComponent.IsBodyGravityEnabled(FName)", BoneName); }
	void ReinitializeAnimNodes() { NativeCall<void>(this, "USkeletalMeshComponent.ReinitializeAnimNodes()"); }
	void FinalizeAnimationUpdate() { NativeCall<void>(this, "USkeletalMeshComponent.FinalizeAnimationUpdate()"); }
	void UpdateClothSimulationContext(float InDeltaTime) { NativeCall<void, float>(this, "USkeletalMeshComponent.UpdateClothSimulationContext(float)", InDeltaTime); }
	void SetAllBodiesBelowSimulatePhysics(const FName& InBoneName, bool bNewSimulate, bool bIncludeSelf) { NativeCall<void, const FName&, bool, bool>(this, "USkeletalMeshComponent.SetAllBodiesBelowSimulatePhysics(FName&,bool,bool)", InBoneName, bNewSimulate, bIncludeSelf); }
	bool ShouldOnlyTickMontagesAndRefreshBones(float DeltaTime) { return NativeCall<bool, float>(this, "USkeletalMeshComponent.ShouldOnlyTickMontagesAndRefreshBones(float)", DeltaTime); }
	bool IsShown(const FEngineShowFlags& ShowFlags) { return NativeCall<bool, const FEngineShowFlags&>(this, "USkeletalMeshComponent.IsShown(FEngineShowFlags&)", ShowFlags); }
	void NotifySkelControlBeyondLimit(USkelControlLookAt* LookAt) { NativeCall<void, USkelControlLookAt*>(this, "USkeletalMeshComponent.NotifySkelControlBeyondLimit(USkelControlLookAt*)", LookAt); }
	void WaitForExistingParallelClothSimulation_GameThread() { NativeCall<void>(this, "USkeletalMeshComponent.WaitForExistingParallelClothSimulation_GameThread()"); }
	void SetEnableBodyGravity(bool bEnableGravity, FName BoneName) { NativeCall<void, bool, FName>(this, "USkeletalMeshComponent.SetEnableBodyGravity(bool,FName)", bEnableGravity, BoneName); }
	void InstantiatePhysicsAssetBodies(const UPhysicsAsset& PhysAsset, TArray<FBodyInstance*, TSizedDefaultAllocator<32> >& OutBodies, FPhysScene_Chaos* PhysScene, USkeletalMeshComponent* OwningComponent, int UseRootBodyIndex, const FPhysicsAggregateReference_Chaos& UseAggregate) { NativeCall<void, const UPhysicsAsset&, TArray<FBodyInstance*, TSizedDefaultAllocator<32> >&, FPhysScene_Chaos*, USkeletalMeshComponent*, int, const FPhysicsAggregateReference_Chaos&>(this, "USkeletalMeshComponent.InstantiatePhysicsAssetBodies(UPhysicsAsset&,TArray<FBodyInstance*,TSizedDefaultAllocator<32>>&,FPhysScene_Chaos*,USkeletalMeshComponent*,int,FPhysicsAggregateReference_Chaos&)", PhysAsset, OutBodies, PhysScene, OwningComponent, UseRootBodyIndex, UseAggregate); }
	bool RequiresPreEndOfFrameSync() { return NativeCall<bool>(this, "USkeletalMeshComponent.RequiresPreEndOfFrameSync()"); }
	bool IsAnyRigidBodyAwake() { return NativeCall<bool>(this, "USkeletalMeshComponent.IsAnyRigidBodyAwake()"); }
	void OnPreRegister() { NativeCall<void>(this, "USkeletalMeshComponent.OnPreRegister()"); }
	void HideBone(int BoneIndex, EPhysBodyOp PhysBodyOption) { NativeCall<void, int, EPhysBodyOp>(this, "USkeletalMeshComponent.HideBone(int,EPhysBodyOp)", BoneIndex, PhysBodyOption); }
	UAnimInstance* GetPostProcessInstance() { return NativeCall<UAnimInstance*>(this, "USkeletalMeshComponent.GetPostProcessInstance()"); }
	void AddFollowerPoseComponent(USkinnedMeshComponent* SkinnedMeshComponent) { NativeCall<void, USkinnedMeshComponent*>(this, "USkeletalMeshComponent.AddFollowerPoseComponent(USkinnedMeshComponent*)", SkinnedMeshComponent); }
	void SetAllMotorsAngularVelocityDrive(bool bEnableSwingDrive, bool bEnableTwistDrive, bool bSkipCustomPhysicsType) { NativeCall<void, bool, bool, bool>(this, "USkeletalMeshComponent.SetAllMotorsAngularVelocityDrive(bool,bool,bool)", bEnableSwingDrive, bEnableTwistDrive, bSkipCustomPhysicsType); }
	void OnAsyncCreatePhysicsStateEnd_GameThread() { NativeCall<void>(this, "USkeletalMeshComponent.OnAsyncCreatePhysicsStateEnd_GameThread()"); }
	void UpdateSlaveComponent() { NativeCall<void>(this, "USkeletalMeshComponent.UpdateSlaveComponent()"); }
	bool UpdateLODStatus() { return NativeCall<bool>(this, "USkeletalMeshComponent.UpdateLODStatus()"); }
	void OnRegister() { NativeCall<void>(this, "USkeletalMeshComponent.OnRegister()"); }
	void SetAllUseCCD(bool InUseCCD) { NativeCall<void, bool>(this, "USkeletalMeshComponent.SetAllUseCCD(bool)", InUseCCD); }
	void SetAllBodiesBelowPhysicsDisabled(const FName& InBoneName, bool bDisabled, bool bIncludeSelf) { NativeCall<void, const FName&, bool, bool>(this, "USkeletalMeshComponent.SetAllBodiesBelowPhysicsDisabled(FName&,bool,bool)", InBoneName, bDisabled, bIncludeSelf); }
	bool DoCustomNavigableGeometryExport(FNavigableGeometryExport& GeomExport) { return NativeCall<bool, FNavigableGeometryExport&>(this, "USkeletalMeshComponent.DoCustomNavigableGeometryExport(FNavigableGeometryExport&)", GeomExport); }
	void SetAllPhysicsRotation(UE::Math::TRotator<double>* NewRot) { if (!NewRot) throw std::invalid_argument("Null native value parameter"); return NativeCall<void, UE :: Math :: TRotator < double >>(this, "USkeletalMeshComponent.SetAllPhysicsRotation(UE::Math::TRotator<double>)", *NewRot); }
	bool IsSkeletalMeshComponent() { return NativeCall<bool>(this, "USkeletalMeshComponent.IsSkeletalMeshComponent()"); }
	void UnregisterOnLODRequiredBonesUpdate_Member(const FDelegateHandle& DelegateHandle) { NativeCall<void, const FDelegateHandle&>(this, "USkeletalMeshComponent.UnregisterOnLODRequiredBonesUpdate_Member(FDelegateHandle&)", DelegateHandle); }
	bool IsPlayingRootMotionFromEverything() { return NativeCall<bool>(this, "USkeletalMeshComponent.IsPlayingRootMotionFromEverything()"); }
	void PlayAnimation(UAnimationAsset* NewAnimToPlay, bool bLooping) { NativeCall<void, UAnimationAsset*, bool>(this, "USkeletalMeshComponent.PlayAnimation(UAnimationAsset*,bool)", NewAnimToPlay, bLooping); }
	UClass* GetAnimClass() { return NativeCall<UClass*>(this, "USkeletalMeshComponent.GetAnimClass()"); }
	void UpdateFollowerComponent() { NativeCall<void>(this, "USkeletalMeshComponent.UpdateFollowerComponent()"); }
	void ClearAnimScriptInstance() { NativeCall<void>(this, "USkeletalMeshComponent.ClearAnimScriptInstance()"); }
	void CheckClothTeleport() { NativeCall<void>(this, "USkeletalMeshComponent.CheckClothTeleport()"); }
	void PostAnimEvaluation(FAnimationEvaluationContext& EvaluationContext) { NativeCall<void, FAnimationEvaluationContext&>(this, "USkeletalMeshComponent.PostAnimEvaluation(FAnimationEvaluationContext&)", EvaluationContext); }
	bool AllocateTransformData() { return NativeCall<bool>(this, "USkeletalMeshComponent.AllocateTransformData()"); }
};
