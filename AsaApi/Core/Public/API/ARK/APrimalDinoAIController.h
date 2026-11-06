#pragma once
#include "BulkForward.h"


struct APrimalDinoAIController : AAIController
{
	// Fields

	FTimerHandle& PlayStartledAnimHandleField() { return *GetNativePointerField<FTimerHandle*>(this, "APrimalDinoAIController.PlayStartledAnimHandle"); }
	float& DieIfLeftWaterWanderMinimumWaterHeightMultiplierField() { return *GetNativePointerField<float*>(this, "APrimalDinoAIController.DieIfLeftWaterWanderMinimumWaterHeightMultiplier"); }
	float& DieIfLeftWaterReachedRadiusDistanceCheckMultiplierField() { return *GetNativePointerField<float*>(this, "APrimalDinoAIController.DieIfLeftWaterReachedRadiusDistanceCheckMultiplier"); }
	float& DieIfLeftWaterTargetUnsubmergedTimeoutField() { return *GetNativePointerField<float*>(this, "APrimalDinoAIController.DieIfLeftWaterTargetUnsubmergedTimeout"); }
	float& LandDinoMaxWaterTargetDepthCapsuleMultiplierField() { return *GetNativePointerField<float*>(this, "APrimalDinoAIController.LandDinoMaxWaterTargetDepthCapsuleMultiplier"); }
	float& ExtraCorpseTargetingRangeField() { return *GetNativePointerField<float*>(this, "APrimalDinoAIController.ExtraCorpseTargetingRange"); }
	float& FleeFromAttackCoolDownTimeField() { return *GetNativePointerField<float*>(this, "APrimalDinoAIController.FleeFromAttackCoolDownTime"); }
	float& FleeFromAttackTimeLimitField() { return *GetNativePointerField<float*>(this, "APrimalDinoAIController.FleeFromAttackTimeLimit"); }
	float& ForceFleeUnderHealthPercentageField() { return *GetNativePointerField<float*>(this, "APrimalDinoAIController.ForceFleeUnderHealthPercentage"); }
	float& DieIfLeftWaterTargetingRequiresFreeDepthField() { return *GetNativePointerField<float*>(this, "APrimalDinoAIController.DieIfLeftWaterTargetingRequiresFreeDepth"); }
	float& DieIfLeftWaterWanderRequiresCapsuleMultiFreeDepthField() { return *GetNativePointerField<float*>(this, "APrimalDinoAIController.DieIfLeftWaterWanderRequiresCapsuleMultiFreeDepth"); }
	long double& LastBlockadeCheckTimeField() { return *GetNativePointerField<long double*>(this, "APrimalDinoAIController.LastBlockadeCheckTime"); }
	long double& LastMovingAroundBlockadeTimeField() { return *GetNativePointerField<long double*>(this, "APrimalDinoAIController.LastMovingAroundBlockadeTime"); }
	float& MovingAroundBlockadeDirectionField() { return *GetNativePointerField<float*>(this, "APrimalDinoAIController.MovingAroundBlockadeDirection"); }
	UE::Math::TVector<double>& MovingAroundBlockadePointField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "APrimalDinoAIController.MovingAroundBlockadePoint"); }
	float& LastBlockadeWidthField() { return *GetNativePointerField<float*>(this, "APrimalDinoAIController.LastBlockadeWidth"); }
	UE::Math::TVector<double>& LastBlockadeHitNormalField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "APrimalDinoAIController.LastBlockadeHitNormal"); }
	UE::Math::TVector<double>& LastBlockadeHitLocationField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "APrimalDinoAIController.LastBlockadeHitLocation"); }
	UE::Math::TVector<double>& StartMovingAroundBlockadeLocationField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "APrimalDinoAIController.StartMovingAroundBlockadeLocation"); }
	AActor*& LastMovingAroundBlockadeActorField() { return *GetNativePointerField<AActor**>(this, "APrimalDinoAIController.LastMovingAroundBlockadeActor"); }
	AActor*& ForceTargetActorField() { return *GetNativePointerField<AActor**>(this, "APrimalDinoAIController.ForceTargetActor"); }
	const AActor*& TargetField() { return *GetNativePointerField<const AActor**>(this, "APrimalDinoAIController.Target"); }
	float& AttackDestinationOffsetField() { return *GetNativePointerField<float*>(this, "APrimalDinoAIController.AttackDestinationOffset"); }
	bool& bNotifyNeighborsWithoutDamageField() { return *GetNativePointerField<bool*>(this, "APrimalDinoAIController.bNotifyNeighborsWithoutDamage"); }
	bool& bUseBPShouldNotifyAnyNeighborField() { return *GetNativePointerField<bool*>(this, "APrimalDinoAIController.bUseBPShouldNotifyAnyNeighbor"); }
	float& AboveDeltaZAttackRangeField() { return *GetNativePointerField<float*>(this, "APrimalDinoAIController.AboveDeltaZAttackRange"); }
	float& BelowDeltaZAttackRangeField() { return *GetNativePointerField<float*>(this, "APrimalDinoAIController.BelowDeltaZAttackRange"); }
	float& WildAboveDeltaZTargetingRangeField() { return *GetNativePointerField<float*>(this, "APrimalDinoAIController.WildAboveDeltaZTargetingRange"); }
	float& WildBelowDeltaZTargetingRangeField() { return *GetNativePointerField<float*>(this, "APrimalDinoAIController.WildBelowDeltaZTargetingRange"); }
	TArray<FAggroEntry, TSizedDefaultAllocator<32> >& AggroEntriesField() { return *GetNativePointerField<TArray<FAggroEntry, TSizedDefaultAllocator<32> >*>(this, "APrimalDinoAIController.AggroEntries"); }
	bool& bOnlyOverlapTargetCorpsesUnlessHasTargetField() { return *GetNativePointerField<bool*>(this, "APrimalDinoAIController.bOnlyOverlapTargetCorpsesUnlessHasTarget"); }
	float& NaturalTargetingRangeField() { return *GetNativePointerField<float*>(this, "APrimalDinoAIController.NaturalTargetingRange"); }
	float& TamedTargetingRangeField() { return *GetNativePointerField<float*>(this, "APrimalDinoAIController.TamedTargetingRange"); }
	float& TamedCorpseFoodTargetingRangeField() { return *GetNativePointerField<float*>(this, "APrimalDinoAIController.TamedCorpseFoodTargetingRange"); }
	float& WanderRandomDistanceAmountField() { return *GetNativePointerField<float*>(this, "APrimalDinoAIController.WanderRandomDistanceAmount"); }
	float& FlyingWanderFixedDistanceAmountField() { return *GetNativePointerField<float*>(this, "APrimalDinoAIController.FlyingWanderFixedDistanceAmount"); }
	float& FlyingWanderRandomDistanceAmountField() { return *GetNativePointerField<float*>(this, "APrimalDinoAIController.FlyingWanderRandomDistanceAmount"); }
	float& MaxFlyingTargetDeltaZField() { return *GetNativePointerField<float*>(this, "APrimalDinoAIController.MaxFlyingTargetDeltaZ"); }
	float& WanderFlyingZScalerField() { return *GetNativePointerField<float*>(this, "APrimalDinoAIController.WanderFlyingZScaler"); }
	float& WanderFlyingClampZHeightAboveGroundField() { return *GetNativePointerField<float*>(this, "APrimalDinoAIController.WanderFlyingClampZHeightAboveGround"); }
	float& WanderFlyingMinZHeightAboveGroundField() { return *GetNativePointerField<float*>(this, "APrimalDinoAIController.WanderFlyingMinZHeightAboveGround"); }
	float& WanderFixedDistanceAmountField() { return *GetNativePointerField<float*>(this, "APrimalDinoAIController.WanderFixedDistanceAmount"); }
	float& MinAggroValueField() { return *GetNativePointerField<float*>(this, "APrimalDinoAIController.MinAggroValue"); }
	float& AggroToAddUponRemovingTargetField() { return *GetNativePointerField<float*>(this, "APrimalDinoAIController.AggroToAddUponRemovingTarget"); }
	float& AggroToAddUponAcquiringTargetField() { return *GetNativePointerField<float*>(this, "APrimalDinoAIController.AggroToAddUponAcquiringTarget"); }
	float& AggroFactorDecreaseSpeedField() { return *GetNativePointerField<float*>(this, "APrimalDinoAIController.AggroFactorDecreaseSpeed"); }
	float& AggroFactorDecreaseGracePeriodField() { return *GetNativePointerField<float*>(this, "APrimalDinoAIController.AggroFactorDecreaseGracePeriod"); }
	float& AggroFactorDamagePercentageMultiplierField() { return *GetNativePointerField<float*>(this, "APrimalDinoAIController.AggroFactorDamagePercentageMultiplier"); }
	float& AggroNotifyNeighborsMultiplierField() { return *GetNativePointerField<float*>(this, "APrimalDinoAIController.AggroNotifyNeighborsMultiplier"); }
	float& AggroNotifyNeighborsRangeField() { return *GetNativePointerField<float*>(this, "APrimalDinoAIController.AggroNotifyNeighborsRange"); }
	float& AggroNotifyNeighborsRangeFalloffField() { return *GetNativePointerField<float*>(this, "APrimalDinoAIController.AggroNotifyNeighborsRangeFalloff"); }
	float& TargetingDistanceReductionFactorLinearField() { return *GetNativePointerField<float*>(this, "APrimalDinoAIController.TargetingDistanceReductionFactorLinear"); }
	float& TargetingDistanceReductionFactorExponentField() { return *GetNativePointerField<float*>(this, "APrimalDinoAIController.TargetingDistanceReductionFactorExponent"); }
	float& BeyondTargetingRangeAggroAdditionField() { return *GetNativePointerField<float*>(this, "APrimalDinoAIController.BeyondTargetingRangeAggroAddition"); }
	float& AggroFactorDesirabilityMultiplierField() { return *GetNativePointerField<float*>(this, "APrimalDinoAIController.AggroFactorDesirabilityMultiplier"); }
	float& AttackRangeField() { return *GetNativePointerField<float*>(this, "APrimalDinoAIController.AttackRange"); }
	float& AttackIntervalField() { return *GetNativePointerField<float*>(this, "APrimalDinoAIController.AttackInterval"); }
	float& AttackRotationRangeDegreesField() { return *GetNativePointerField<float*>(this, "APrimalDinoAIController.AttackRotationRangeDegrees"); }
	float& AttackRotationGroundSpeedMultiplierField() { return *GetNativePointerField<float*>(this, "APrimalDinoAIController.AttackRotationGroundSpeedMultiplier"); }
	float& RangeTargetWildDinosMultiplierField() { return *GetNativePointerField<float*>(this, "APrimalDinoAIController.RangeTargetWildDinosMultiplier"); }
	UE::Math::TRotator<double>& AttackRotationRateField() { return *GetNativePointerField<UE::Math::TRotator<double>*>(this, "APrimalDinoAIController.AttackRotationRate"); }
	UE::Math::TVector<double>& FlyingMoveTowardsTargetOffsetField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "APrimalDinoAIController.FlyingMoveTowardsTargetOffset"); }
	UE::Math::TVector<double>& CombatFlyingMoveTowardsTargetOffsetField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "APrimalDinoAIController.CombatFlyingMoveTowardsTargetOffset"); }
	UE::Math::TVector<double>& FlyingTargetFocalPositionOffsetField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "APrimalDinoAIController.FlyingTargetFocalPositionOffset"); }
	float& FlyingReachedDestinationThresholdOffsetField() { return *GetNativePointerField<float*>(this, "APrimalDinoAIController.FlyingReachedDestinationThresholdOffset"); }
	float& SeekingIntervalCheckToFlyField() { return *GetNativePointerField<float*>(this, "APrimalDinoAIController.SeekingIntervalCheckToFly"); }
	float& SeekingPercentChanceToFlyField() { return *GetNativePointerField<float*>(this, "APrimalDinoAIController.SeekingPercentChanceToFly"); }
	float& SeekingIntervalCheckToLandField() { return *GetNativePointerField<float*>(this, "APrimalDinoAIController.SeekingIntervalCheckToLand"); }
	float& SeekingPercentChanceToLandField() { return *GetNativePointerField<float*>(this, "APrimalDinoAIController.SeekingPercentChanceToLand"); }
	float& MinimumWanderGroundNormalZField() { return *GetNativePointerField<float*>(this, "APrimalDinoAIController.MinimumWanderGroundNormalZ"); }
	float& FollowStoppingDistanceField() { return *GetNativePointerField<float*>(this, "APrimalDinoAIController.FollowStoppingDistance"); }
	float& CorpseAttackDestinationMultiplierField() { return *GetNativePointerField<float*>(this, "APrimalDinoAIController.CorpseAttackDestinationMultiplier"); }
	bool& bUseAlternateMovePointField() { return *GetNativePointerField<bool*>(this, "APrimalDinoAIController.bUseAlternateMovePoint"); }
	bool& bWaterDinoAllowUnsubmergedTargetsField() { return *GetNativePointerField<bool*>(this, "APrimalDinoAIController.bWaterDinoAllowUnsubmergedTargets"); }
	UE::Math::TVector<double>& LastCheckAttackRangePawnLocationField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "APrimalDinoAIController.LastCheckAttackRangePawnLocation"); }
	UE::Math::TVector<double>& LastCheckAttackRangeClosestPointField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "APrimalDinoAIController.LastCheckAttackRangeClosestPoint"); }
	UE::Math::TVector<double>& LastCheckAttackRangeTargetLocationField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "APrimalDinoAIController.LastCheckAttackRangeTargetLocation"); }
	AActor*& LastCheckAttackRangeTargetField() { return *GetNativePointerField<AActor**>(this, "APrimalDinoAIController.LastCheckAttackRangeTarget"); }
	TArray<float, TSizedDefaultAllocator<32> >& TamedAITargetingRangeMultipliersField() { return *GetNativePointerField<TArray<float, TSizedDefaultAllocator<32> >*>(this, "APrimalDinoAIController.TamedAITargetingRangeMultipliers"); }
	float& MateBoostAggroNotifyNeighborsMultiplierField() { return *GetNativePointerField<float*>(this, "APrimalDinoAIController.MateBoostAggroNotifyNeighborsMultiplier"); }
	UBehaviorTree*& BehaviourTreeField() { return *GetNativePointerField<UBehaviorTree**>(this, "APrimalDinoAIController.BehaviourTree"); }
	UBehaviorTree*& HasEnemyTreeField() { return *GetNativePointerField<UBehaviorTree**>(this, "APrimalDinoAIController.HasEnemyTree"); }
	UBehaviorTree*& BabyHasEnemyTreeField() { return *GetNativePointerField<UBehaviorTree**>(this, "APrimalDinoAIController.BabyHasEnemyTree"); }
	UBehaviorTree*& ForcedAggroHasEnemyTreeField() { return *GetNativePointerField<UBehaviorTree**>(this, "APrimalDinoAIController.ForcedAggroHasEnemyTree"); }
	UBehaviorTree*& NoEnemyTreeField() { return *GetNativePointerField<UBehaviorTree**>(this, "APrimalDinoAIController.NoEnemyTree"); }
	UBehaviorTree*& FleeFromAttackTreeField() { return *GetNativePointerField<UBehaviorTree**>(this, "APrimalDinoAIController.FleeFromAttackTree"); }
	UBehaviorTree*& TamedNoEnemyTreeField() { return *GetNativePointerField<UBehaviorTree**>(this, "APrimalDinoAIController.TamedNoEnemyTree"); }
	UBehaviorTree*& MissionTreeField() { return *GetNativePointerField<UBehaviorTree**>(this, "APrimalDinoAIController.MissionTree"); }
	TArray<TSoftClassPtr<APrimalDinoCharacter>, TSizedDefaultAllocator<32> >& AggroNotifyNeighborsClassesField() { return *GetNativePointerField<TArray<TSoftClassPtr<APrimalDinoCharacter>, TSizedDefaultAllocator<32> >*>(this, "APrimalDinoAIController.AggroNotifyNeighborsClasses"); }
	float& MoveAroundBlockadeAdditionalWidthField() { return *GetNativePointerField<float*>(this, "APrimalDinoAIController.MoveAroundBlockadeAdditionalWidth"); }
	float& MoveAroundObjectMaxVelocityField() { return *GetNativePointerField<float*>(this, "APrimalDinoAIController.MoveAroundObjectMaxVelocity"); }
	float& ForcedAggroTimeCounterField() { return *GetNativePointerField<float*>(this, "APrimalDinoAIController.ForcedAggroTimeCounter"); }
	float& TamedMaxFollowDistanceField() { return *GetNativePointerField<float*>(this, "APrimalDinoAIController.TamedMaxFollowDistance"); }
	float& BaseStructureTargetingDesireField() { return *GetNativePointerField<float*>(this, "APrimalDinoAIController.BaseStructureTargetingDesire"); }
	float& LandDinoMaxFlyerTargetDeltaZField() { return *GetNativePointerField<float*>(this, "APrimalDinoAIController.LandDinoMaxFlyerTargetDeltaZ"); }
	float& NaturalMaxDepthZField() { return *GetNativePointerField<float*>(this, "APrimalDinoAIController.NaturalMaxDepthZ"); }
	TWeakObjectPtr<AActor>& ForcedAttackTargetField() { return *GetNativePointerField<TWeakObjectPtr<AActor>*>(this, "APrimalDinoAIController.ForcedAttackTarget"); }
	int& ForcedAttackEnemyTeamField() { return *GetNativePointerField<int*>(this, "APrimalDinoAIController.ForcedAttackEnemyTeam"); }
	long double& LastForcedAttackEnemyTeamTimeField() { return *GetNativePointerField<long double*>(this, "APrimalDinoAIController.LastForcedAttackEnemyTeamTime"); }
	TWeakObjectPtr<APawn>& PawnPersistentReferenceField() { return *GetNativePointerField<TWeakObjectPtr<APawn>*>(this, "APrimalDinoAIController.PawnPersistentReference"); }
	float& AccumulatedBehaviorDeltaField() { return *GetNativePointerField<float*>(this, "APrimalDinoAIController.AccumulatedBehaviorDelta"); }
	int& AccumulatedBehaviorFrameCountField() { return *GetNativePointerField<int*>(this, "APrimalDinoAIController.AccumulatedBehaviorFrameCount"); }
	int& LastCharacterTargetTeamField() { return *GetNativePointerField<int*>(this, "APrimalDinoAIController.LastCharacterTargetTeam"); }
	float& ForcedFleeDurationField() { return *GetNativePointerField<float*>(this, "APrimalDinoAIController.ForcedFleeDuration"); }
	float& MinAttackIntervalForFleeingField() { return *GetNativePointerField<float*>(this, "APrimalDinoAIController.MinAttackIntervalForFleeing"); }
	float& MinAttackIntervalForFleeing_WaterField() { return *GetNativePointerField<float*>(this, "APrimalDinoAIController.MinAttackIntervalForFleeing_Water"); }
	float& MinLocChangeIntervalForFleeingField() { return *GetNativePointerField<float*>(this, "APrimalDinoAIController.MinLocChangeIntervalForFleeing"); }
	float& PercentageTorporForFleeingField() { return *GetNativePointerField<float*>(this, "APrimalDinoAIController.PercentageTorporForFleeing"); }
	float& DamagedForceAggroIntervalField() { return *GetNativePointerField<float*>(this, "APrimalDinoAIController.DamagedForceAggroInterval"); }
	long double& ForceAggroUntilTimeField() { return *GetNativePointerField<long double*>(this, "APrimalDinoAIController.ForceAggroUntilTime"); }
	long double& LastExecutedAttackTimeField() { return *GetNativePointerField<long double*>(this, "APrimalDinoAIController.LastExecutedAttackTime"); }
	long double& LastForcedFleeTimeField() { return *GetNativePointerField<long double*>(this, "APrimalDinoAIController.LastForcedFleeTime"); }
	long double& LastFleeLocCheckTimeField() { return *GetNativePointerField<long double*>(this, "APrimalDinoAIController.LastFleeLocCheckTime"); }
	UE::Math::TVector<double>& LastFleeLocCheckField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "APrimalDinoAIController.LastFleeLocCheck"); }
	int& NumAlliesToAttackField() { return *GetNativePointerField<int*>(this, "APrimalDinoAIController.NumAlliesToAttack"); }
	float& FindLandingPositionZOffsetField() { return *GetNativePointerField<float*>(this, "APrimalDinoAIController.FindLandingPositionZOffset"); }
	float& TamedFollowAcceptanceRadiusOffsetField() { return *GetNativePointerField<float*>(this, "APrimalDinoAIController.TamedFollowAcceptanceRadiusOffset"); }
	float& TamedFollowAcceptanceHeightOffsetField() { return *GetNativePointerField<float*>(this, "APrimalDinoAIController.TamedFollowAcceptanceHeightOffset"); }
	float& AIFlightMaxLandingZDistanceField() { return *GetNativePointerField<float*>(this, "APrimalDinoAIController.AIFlightMaxLandingZDistance"); }
	long double& ForcedMoveToUntilTimeField() { return *GetNativePointerField<long double*>(this, "APrimalDinoAIController.ForcedMoveToUntilTime"); }
	long double& LastHadAggroEntriesTimeField() { return *GetNativePointerField<long double*>(this, "APrimalDinoAIController.LastHadAggroEntriesTime"); }
	TArray<TSoftClassPtr<AActor>, TSizedDefaultAllocator<32> >& WildTargetingDesireMultiplierClassesField() { return *GetNativePointerField<TArray<TSoftClassPtr<AActor>, TSizedDefaultAllocator<32> >*>(this, "APrimalDinoAIController.WildTargetingDesireMultiplierClasses"); }
	TArray<float, TSizedDefaultAllocator<32> >& WildTargetingDesireMultiplierValuesField() { return *GetNativePointerField<TArray<float, TSizedDefaultAllocator<32> >*>(this, "APrimalDinoAIController.WildTargetingDesireMultiplierValues"); }
	TArray<TSoftClassPtr<AActor>, TSizedDefaultAllocator<32> >& TamedTargetingDesireMultiplierClassesField() { return *GetNativePointerField<TArray<TSoftClassPtr<AActor>, TSizedDefaultAllocator<32> >*>(this, "APrimalDinoAIController.TamedTargetingDesireMultiplierClasses"); }
	TArray<float, TSizedDefaultAllocator<32> >& TamedTargetingDesireMultiplierValuesField() { return *GetNativePointerField<TArray<float, TSizedDefaultAllocator<32> >*>(this, "APrimalDinoAIController.TamedTargetingDesireMultiplierValues"); }
	TSet<TWeakObjectPtr<AActor>, DefaultKeyFuncs<TWeakObjectPtr<AActor>, 0>, FDefaultSetAllocator>& IgnoredTargetsField() { return *GetNativePointerField<TSet<TWeakObjectPtr<AActor>, DefaultKeyFuncs<TWeakObjectPtr<AActor>, 0>, FDefaultSetAllocator>*>(this, "APrimalDinoAIController.IgnoredTargets"); }

	// Bitfields

	BitFieldValue<bool, unsigned __int32> bForcedAggro() { return { this, "APrimalDinoAIController.bForcedAggro" }; }
	BitFieldValue<bool, unsigned __int32> bDeferredTickMode() { return { this, "APrimalDinoAIController.bDeferredTickMode" }; }
	BitFieldValue<bool, unsigned __int32> bIgnoreMoveAroundBlockade() { return { this, "APrimalDinoAIController.bIgnoreMoveAroundBlockade" }; }
	BitFieldValue<bool, unsigned __int32> bFlyingUseMoveAroundBlockade() { return { this, "APrimalDinoAIController.bFlyingUseMoveAroundBlockade" }; }
	BitFieldValue<bool, unsigned __int32> bUseGeometryInsteadOfStationObjForFreeDepthTest() { return { this, "APrimalDinoAIController.bUseGeometryInsteadOfStationObjForFreeDepthTest" }; }
	BitFieldValue<bool, unsigned __int32> bNotifyBPTargetSet() { return { this, "APrimalDinoAIController.bNotifyBPTargetSet" }; }
	BitFieldValue<bool, unsigned __int32> bUseBPSetupFindTarget() { return { this, "APrimalDinoAIController.bUseBPSetupFindTarget" }; }
	BitFieldValue<bool, unsigned __int32> bNotAllowedToFindTargets() { return { this, "APrimalDinoAIController.bNotAllowedToFindTargets" }; }
	BitFieldValue<bool, unsigned __int32> bAllowForceFleeToSameTargetingTeam() { return { this, "APrimalDinoAIController.bAllowForceFleeToSameTargetingTeam" }; }
	BitFieldValue<bool, unsigned __int32> bUseBPUpdateBestTarget() { return { this, "APrimalDinoAIController.bUseBPUpdateBestTarget" }; }
	BitFieldValue<bool, unsigned __int32> bTargetChanged() { return { this, "APrimalDinoAIController.bTargetChanged" }; }
	BitFieldValue<bool, unsigned __int32> bAttackForcesRunning() { return { this, "APrimalDinoAIController.bAttackForcesRunning" }; }
	BitFieldValue<bool, unsigned __int32> bUseFlyingTargetOffsets() { return { this, "APrimalDinoAIController.bUseFlyingTargetOffsets" }; }
	BitFieldValue<bool, unsigned __int32> bRidingDinoTargetPlayer() { return { this, "APrimalDinoAIController.bRidingDinoTargetPlayer" }; }
	BitFieldValue<bool, unsigned __int32> bRidingPlayerTargetDino() { return { this, "APrimalDinoAIController.bRidingPlayerTargetDino" }; }
	BitFieldValue<bool, unsigned __int32> bIgnoreWaterOrAmphibiousTargets() { return { this, "APrimalDinoAIController.bIgnoreWaterOrAmphibiousTargets" }; }
	BitFieldValue<bool, unsigned __int32> bUseBPTargetingDesire() { return { this, "APrimalDinoAIController.bUseBPTargetingDesire" }; }
	BitFieldValue<bool, unsigned __int32> bDisableForceFlee() { return { this, "APrimalDinoAIController.bDisableForceFlee" }; }
	BitFieldValue<bool, unsigned __int32> bUseCombatMoveTowardsTargetOffset() { return { this, "APrimalDinoAIController.bUseCombatMoveTowardsTargetOffset" }; }
	BitFieldValue<bool, unsigned __int32> bUseBPOverrideIgnoredByWildDino() { return { this, "APrimalDinoAIController.bUseBPOverrideIgnoredByWildDino" }; }
	BitFieldValue<bool, unsigned __int32> bCanUseAttackStateOnTargetChange() { return { this, "APrimalDinoAIController.bCanUseAttackStateOnTargetChange" }; }
	BitFieldValue<bool, unsigned __int32> bModifiedWanderRadius() { return { this, "APrimalDinoAIController.bModifiedWanderRadius" }; }
	BitFieldValue<bool, unsigned __int32> bForceOnlyTargetingPlayerOrTamed() { return { this, "APrimalDinoAIController.bForceOnlyTargetingPlayerOrTamed" }; }
	BitFieldValue<bool, unsigned __int32> bForceTargetingAllStructures() { return { this, "APrimalDinoAIController.bForceTargetingAllStructures" }; }
	BitFieldValue<bool, unsigned __int32> bForceTargetDinoRider() { return { this, "APrimalDinoAIController.bForceTargetDinoRider" }; }
	BitFieldValue<bool, unsigned __int32> bFlyerAllowWaterTargeting() { return { this, "APrimalDinoAIController.bFlyerAllowWaterTargeting" }; }
	BitFieldValue<bool, unsigned __int32> bUseBPForceTargetDinoRider() { return { this, "APrimalDinoAIController.bUseBPForceTargetDinoRider" }; }
	BitFieldValue<bool, unsigned __int32> bAlwaysStartledWhenAggroedByNeighbor() { return { this, "APrimalDinoAIController.bAlwaysStartledWhenAggroedByNeighbor" }; }
	BitFieldValue<bool, unsigned __int32> bForceOnlyTargetingPlayers() { return { this, "APrimalDinoAIController.bForceOnlyTargetingPlayers" }; }
	BitFieldValue<bool, unsigned __int32> bIsMissionDino() { return { this, "APrimalDinoAIController.bIsMissionDino" }; }
	BitFieldValue<bool, unsigned __int32> bUseImprovedAggroFalloffBehavior() { return { this, "APrimalDinoAIController.bUseImprovedAggroFalloffBehavior" }; }
	BitFieldValue<bool, unsigned __int32> bUseBP_TamedOverrideHorizontalLandingRange() { return { this, "APrimalDinoAIController.bUseBP_TamedOverrideHorizontalLandingRange" }; }
	BitFieldValue<bool, unsigned __int32> bFlyerWanderDefaultToOrigin() { return { this, "APrimalDinoAIController.bFlyerWanderDefaultToOrigin" }; }
	BitFieldValue<bool, unsigned __int32> bCheckBuffTargetingDesireOverride() { return { this, "APrimalDinoAIController.bCheckBuffTargetingDesireOverride" }; }
	BitFieldValue<bool, unsigned __int32> bAllowSwimWanderingForLandDinos() { return { this, "APrimalDinoAIController.bAllowSwimWanderingForLandDinos" }; }
	BitFieldValue<bool, unsigned __int32> bUse_BPOverrideLandingLocation() { return { this, "APrimalDinoAIController.bUse_BPOverrideLandingLocation" }; }

	// Functions

	//UPrimalPathFollowingComponent* PFC() { return NativeCall<UPrimalPathFollowingComponent*>(this, "APrimalDinoAIController.PFC()"); }
	static UClass* StaticClass() { return AsaApi::ResolveClass("APrimalDinoAIController"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("APrimalDinoAIController"); }
	void BPOnFleeEvent() { NativeCall<void>(this, "APrimalDinoAIController.BPOnFleeEvent()"); }
	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// static void StaticRegisterNativesAPrimalDinoAIController();
	void BeginPlay() { NativeCall<void>(this, "APrimalDinoAIController.BeginPlay()"); }
	bool RunBehaviorTree(UBehaviorTree* BTAsset) { return NativeCall<bool, UBehaviorTree*>(this, "APrimalDinoAIController.RunBehaviorTree(UBehaviorTree*)", BTAsset); }
	void ForceLand() { NativeCall<void>(this, "APrimalDinoAIController.ForceLand()"); }
	void Unstasis() { NativeCall<void>(this, "APrimalDinoAIController.Unstasis()"); }
	AActor* GetCorpseFoodTarget() { return NativeCall<AActor*>(this, "APrimalDinoAIController.GetCorpseFoodTarget()"); }
	AActor* FindTarget(bool bDontSet) { return NativeCall<AActor*, bool>(this, "APrimalDinoAIController.FindTarget(bool)", bDontSet); }
	float GetTargetingDesire(const AActor* InTarget) { return NativeCall<float, const AActor*>(this, "APrimalDinoAIController.GetTargetingDesire(AActor*)", InTarget); }
	void SetTarget(const AActor* InTarget, bool bDontAddAggro, bool bOverlapFoundTarget) { NativeCall<void, const AActor*, bool, bool>(this, "APrimalDinoAIController.SetTarget(AActor*,bool,bool)", InTarget, bDontAddAggro, bOverlapFoundTarget); }
	void AddToAggro(const AActor* Attacker, float DamagePercent, bool bNotifyNeighbors, bool SetValue, bool bIsFromDamage, bool skipTeamCheck) { NativeCall<void, const AActor*, float, bool, bool, bool, bool>(this, "APrimalDinoAIController.AddToAggro(AActor*,float,bool,bool,bool,bool)", Attacker, DamagePercent, bNotifyNeighbors, SetValue, bIsFromDamage, skipTeamCheck); }
	void UpdateAggro() { NativeCall<void>(this, "APrimalDinoAIController.UpdateAggro()"); }
	bool IsWithinAttackRange(AActor* Other, bool bForceUseLastAttackIndex) { return NativeCall<bool, AActor*, bool>(this, "APrimalDinoAIController.IsWithinAttackRange(AActor*,bool)", Other, bForceUseLastAttackIndex); }
	bool IsWithinAttackRangeAndCalculateBestAttack(AActor* Other, bool* bAttackChanged) { return NativeCall<bool, AActor*, bool*>(this, "APrimalDinoAIController.IsWithinAttackRangeAndCalculateBestAttack(AActor*,bool&)", Other, bAttackChanged); }
	bool CalculateAndSetWonderingAIState(bool* StateChanged) { return NativeCall<bool, bool*>(this, "APrimalDinoAIController.CalculateAndSetWonderingAIState(bool&)", StateChanged); }
	float GetAggroDesirability(const AActor* InTarget) { return NativeCall<float, const AActor*>(this, "APrimalDinoAIController.GetAggroDesirability(AActor*)", InTarget); }
	void NotifyTakeDamage(float Damage, const FDamageEvent* DamageEvent, AController* EventInstigator, AActor* DamageCauser) { NativeCall<void, float, const FDamageEvent*, AController*, AActor*>(this, "APrimalDinoAIController.NotifyTakeDamage(float,FDamageEvent&,AController*,AActor*)", Damage, DamageEvent, EventInstigator, DamageCauser); }
	bool CheckMoveAroundBlockadePoint(UE::Math::TVector<double>* moveToPoint) { return NativeCall<bool, UE::Math::TVector<double>*>(this, "APrimalDinoAIController.CheckMoveAroundBlockadePoint(UE::Math::TVector<double>)", moveToPoint); }
	char MoveAroundBlockade(UE::Math::TVector<double>* PreBumpLocation, AActor* BlockadeActor, UPrimitiveComponent* OtherComp, float BlockadeWidth, UE::Math::TVector<double>* HitNormal, UE::Math::TVector<double>* HitLocation) { return NativeCall<char, UE::Math::TVector<double>*, AActor*, UPrimitiveComponent*, float, UE::Math::TVector<double>*, UE::Math::TVector<double>*>(this, "APrimalDinoAIController.MoveAroundBlockade(UE::Math::TVector<double>,AActor*,UPrimitiveComponent*,float,UE::Math::TVector<double>,UE::Math::TVector<double>,bool)", PreBumpLocation, BlockadeActor, OtherComp, BlockadeWidth, HitNormal, HitLocation); }
	void NotifyBump(UE::Math::TVector<double>* PreBumpLocation, AActor* Other, UPrimitiveComponent* OtherComp, const UE::Math::TVector<double>* HitNormal, const UE::Math::TVector<double>* HitLocation) { NativeCall<void, UE::Math::TVector<double>*, AActor*, UPrimitiveComponent*, const UE::Math::TVector<double>*, const UE::Math::TVector<double>*>(this, "APrimalDinoAIController.NotifyBump(UE::Math::TVector<double>,AActor*,UPrimitiveComponent*,UE::Math::TVector<double>&,UE::Math::TVector<double>&)", PreBumpLocation, Other, OtherComp, HitNormal, HitLocation); }
	void PlayStartledAnim() { NativeCall<void>(this, "APrimalDinoAIController.PlayStartledAnim()"); }
	void Destroyed() { NativeCall<void>(this, "APrimalDinoAIController.Destroyed()"); }
	void SetPawn(APawn* InPawn) { NativeCall<void, APawn*>(this, "APrimalDinoAIController.SetPawn(APawn*)", InPawn); }
	bool CanLand() { return NativeCall<bool>(this, "APrimalDinoAIController.CanLand()"); }
	void AvoidOutOfWater() { NativeCall<void>(this, "APrimalDinoAIController.AvoidOutOfWater()"); }
	void AvoidGenericToPoint(UE::Math::TVector<double>* TargetDestination) { NativeCall<void, UE::Math::TVector<double>*>(this, "APrimalDinoAIController.AvoidGenericToPoint(UE::Math::TVector<double>)", TargetDestination); }
	bool UseLowQualityBehaviorTreeTick() { return NativeCall<bool>(this, "APrimalDinoAIController.UseLowQualityBehaviorTreeTick()"); }
	void Tick(float DeltaSeconds) { NativeCall<void, float>(this, "APrimalDinoAIController.Tick(float)", DeltaSeconds); }
	void SetDeferredTick(bool bShouldDefer, bool bIsDestroying) { NativeCall<void, bool, bool>(this, "APrimalDinoAIController.SetDeferredTick(bool,bool)", bShouldDefer, bIsDestroying); }
	void OnPossess(APawn* InPawn) { NativeCall<void, APawn*>(this, "APrimalDinoAIController.OnPossess(APawn*)", InPawn); }
	bool ShouldForceFlee() { return NativeCall<bool>(this, "APrimalDinoAIController.ShouldForceFlee()"); }
	void SetHasAttackPriority(bool Value) { NativeCall<void, bool>(this, "APrimalDinoAIController.SetHasAttackPriority(bool)", Value); }
	float GetAcceptanceHeightOffset() { return NativeCall<float>(this, "APrimalDinoAIController.GetAcceptanceHeightOffset()"); }
	float GetAcceptanceRadiusOffset() { return NativeCall<float>(this, "APrimalDinoAIController.GetAcceptanceRadiusOffset()"); }
	//void OnMoveCompleted(FAIRequestID RequestID, const FPathFollowingResult* Result) { NativeCall<void, FAIRequestID, const FPathFollowingResult*>(this, "APrimalDinoAIController.OnMoveCompleted(FAIRequestID,FPathFollowingResult&)", RequestID, Result); }
	void StopBrainComponent(FString* reason) { NativeCall<void, FString*>(this, "APrimalDinoAIController.StopBrainComponent(FString)", reason); }
	void RebootBrainComponent() { NativeCall<void>(this, "APrimalDinoAIController.RebootBrainComponent()"); }
	FString* GetDebugInfoString(FString* result) { return NativeCall<FString*, FString*>(this, "APrimalDinoAIController.GetDebugInfoString()", result); }
	UStaticMeshComponent* GetClosestTree(FOverlapResult* OutHit) { return NativeCall<UStaticMeshComponent*, FOverlapResult*>(this, "APrimalDinoAIController.GetClosestTree(FOverlapResult&)", OutHit); }
	bool IsForceTargetDinoRider(AShooterCharacter* playerTarget) { return NativeCall<bool, AShooterCharacter*>(this, "APrimalDinoAIController.IsForceTargetDinoRider(AShooterCharacter*)", playerTarget); }
	bool OrderedToLand() { return NativeCall<bool>(this, "APrimalDinoAIController.OrderedToLand()"); }
	//FPathFollowingRequestResult* MoveTo(FPathFollowingRequestResult* result, const FAIMoveRequest* MoveRequest, TSharedPtr<FNavigationPath, 1>* OutPath) { return NativeCall<FPathFollowingRequestResult*, FPathFollowingRequestResult*, const FAIMoveRequest*, TSharedPtr<FNavigationPath, 1>*>(this, "APrimalDinoAIController.MoveTo(FAIMoveRequest&,TSharedPtr<FNavigationPath,1>*)", result, MoveRequest, OutPath); }

	bool& bOnlyForceFleeUnderHealthPercentageIfWildField() { return *GetNativePointerField<bool*>(this, "APrimalDinoAIController.bOnlyForceFleeUnderHealthPercentageIfWild"); }
	bool& bFleeOnCriticalHealthField() { return *GetNativePointerField<bool*>(this, "APrimalDinoAIController.bFleeOnCriticalHealth"); }
	bool& bUseOverlapTargetCheckField() { return *GetNativePointerField<bool*>(this, "APrimalDinoAIController.bUseOverlapTargetCheck"); }
	bool& bUseBPShouldNotifyNeighborField() { return *GetNativePointerField<bool*>(this, "APrimalDinoAIController.bUseBPShouldNotifyNeighbor"); }
	bool& bRequireAbsoluteDamageForNeighborNotificationField() { return *GetNativePointerField<bool*>(this, "APrimalDinoAIController.bRequireAbsoluteDamageForNeighborNotification"); }
	bool& bWildUseDeltaZTargetingForFlyerPawnOrBigDinoField() { return *GetNativePointerField<bool*>(this, "APrimalDinoAIController.bWildUseDeltaZTargetingForFlyerPawnOrBigDino"); }
	bool& bDontWanderField() { return *GetNativePointerField<bool*>(this, "APrimalDinoAIController.bDontWander"); }
	bool& bUseAggroField() { return *GetNativePointerField<bool*>(this, "APrimalDinoAIController.bUseAggro"); }
	bool& bFocusOnTargetDuringAttackField() { return *GetNativePointerField<bool*>(this, "APrimalDinoAIController.bFocusOnTargetDuringAttack"); }
	float& CombatFlyingCorpseTargetingZOffsetField() { return *GetNativePointerField<float*>(this, "APrimalDinoAIController.CombatFlyingCorpseTargetingZOffset"); }
	float& CombatFlyingCrouchProneTargetingZOffsetField() { return *GetNativePointerField<float*>(this, "APrimalDinoAIController.CombatFlyingCrouchProneTargetingZOffset"); }
	bool& bUseOverlapTargetCheckTracesField() { return *GetNativePointerField<bool*>(this, "APrimalDinoAIController.bUseOverlapTargetCheckTraces"); }
	bool& bTotallyIgnoreWaterTargetsField() { return *GetNativePointerField<bool*>(this, "APrimalDinoAIController.bTotallyIgnoreWaterTargets"); }
	bool& bUseBPAdjustTargetingDesireForActorOutOfLimitVolumeField() { return *GetNativePointerField<bool*>(this, "APrimalDinoAIController.bUseBPAdjustTargetingDesireForActorOutOfLimitVolume"); }
	bool& HasAttackPriorityField() { return *GetNativePointerField<bool*>(this, "APrimalDinoAIController.HasAttackPriority"); }
	float& CachedWanderTimeField() { return *GetNativePointerField<float*>(this, "APrimalDinoAIController.CachedWanderTime"); }
	float& GroundAttackSpeedOverrideField() { return *GetNativePointerField<float*>(this, "APrimalDinoAIController.GroundAttackSpeedOverride"); }
	double& UseHigherTamedTargetingRangeOverrideUntilTimeField() { return *GetNativePointerField<double*>(this, "APrimalDinoAIController.UseHigherTamedTargetingRangeOverrideUntilTime"); }
	float& HigherTamedTargetingRangeOverrideField() { return *GetNativePointerField<float*>(this, "APrimalDinoAIController.HigherTamedTargetingRangeOverride"); }
	float& TimeSinceLostPawnField() { return *GetNativePointerField<float*>(this, "APrimalDinoAIController.TimeSinceLostPawn"); }

	UE::Math::TVector<double>& CachedWanderDestinationField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "APrimalDinoAIController.CachedWanderDestination"); }
	UE::Math::TVector<double>& CachedWanderFromLocationField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "APrimalDinoAIController.CachedWanderFromLocation"); }
	BitFieldValue<bool, unsigned __int32> bUseBPOnSetHasAttackPriority() { return { this, "APrimalDinoAIController.bUseBPOnSetHasAttackPriority"}; }
	BitFieldValue<bool, unsigned __int32> bUseBPWantsAttackPriority() { return { this, "APrimalDinoAIController.bUseBPWantsAttackPriority"}; }
	BitFieldValue<bool, unsigned __int32> bStopMassMovingWithTarget() { return { this, "APrimalDinoAIController.bStopMassMovingWithTarget"}; }
	BitFieldValue<bool, unsigned __int32> bAllowDinoToTargetShips() { return { this, "APrimalDinoAIController.bAllowDinoToTargetShips"}; }
	BitFieldValue<bool, unsigned __int32> bUseBPPreventStartle() { return { this, "APrimalDinoAIController.bUseBPPreventStartle"}; }
	BitFieldValue<bool, unsigned __int32> bUseBPForceAlternateAttackPoint() { return { this, "APrimalDinoAIController.bUseBPForceAlternateAttackPoint"}; }
	BitFieldValue<bool, unsigned char> bOnlyTargetShips() { return { this, "APrimalDinoAIController.bOnlyTargetShips"}; }
	void ResetRotationRate() { NativeCall<void>(this, "APrimalDinoAIController.ResetRotationRate()"); }
	UE::Math::TVector2<double>* BP_TamedOverrideHorizontalLandingRange(UE::Math::TVector2<double>* result) { return NativeCall<UE::Math::TVector2<double>*, UE::Math::TVector2<double>*>(this, "APrimalDinoAIController.BP_TamedOverrideHorizontalLandingRange()", result); }
	void ResetAccelerationFollowsRotation() { NativeCall<void>(this, "APrimalDinoAIController.ResetAccelerationFollowsRotation()"); }
	void BPNotifyTargetSet() { NativeCall<void>(this, "APrimalDinoAIController.BPNotifyTargetSet()"); }
	float GetAggroNotifyNeighborsRange_Implementation() { return NativeCall<float>(this, "APrimalDinoAIController.GetAggroNotifyNeighborsRange_Implementation()"); }
	UE::Math::TVector<double>* GetFocalPointOnActor(UE::Math::TVector<double>* result, const AActor* Actor) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*, const AActor*>(this, "APrimalDinoAIController.GetFocalPointOnActor(AActor*)", result, Actor); }
	APrimalDinoCharacter* GetControlledDino() { return NativeCall<APrimalDinoCharacter*>(this, "APrimalDinoAIController.GetControlledDino()"); }
	void RemoveFromAggro(const AActor* Attacker) { NativeCall<void, const AActor*>(this, "APrimalDinoAIController.RemoveFromAggro(AActor*)", Attacker); }
	void BPSetupFindTarget() { NativeCall<void>(this, "APrimalDinoAIController.BPSetupFindTarget()"); }
	float BPGetTargetingDesire(AActor* ForTarget, float ForTargetingDesireValue) { return NativeCall<float, AActor*, float>(this, "APrimalDinoAIController.BPGetTargetingDesire(AActor*,float)", ForTarget, ForTargetingDesireValue); }
	bool OverrideHasReachedGoalWithUseHeight(const UE::Math::TVector<double>& GoalLoc, float UseRadius, float UseHeight, float ZDelta) { return NativeCall<bool, const UE::Math::TVector<double>&, float, float, float>(this, "APrimalDinoAIController.OverrideHasReachedGoalWithUseHeight(UE::Math::TVector<double>&,float,float,float)", GoalLoc, UseRadius, UseHeight, ZDelta); }
	bool BPPreventAddAggroOnTakeDamage(AActor* DamageCauser) { return NativeCall<bool, AActor*>(this, "APrimalDinoAIController.BPPreventAddAggroOnTakeDamage(AActor*)", DamageCauser); }
	void ChangedAITarget(const AActor* OldTarget) { NativeCall<void, const AActor*>(this, "APrimalDinoAIController.ChangedAITarget(AActor*)", OldTarget); }
	bool BPWantsAttackPriority() { return NativeCall<bool>(this, "APrimalDinoAIController.BPWantsAttackPriority()"); }
	UE::Math::TVector<double>* BPOverrideLandingLocation(UE::Math::TVector<double>* result, float& outRadius) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*, float&>(this, "APrimalDinoAIController.BPOverrideLandingLocation(float&)", result, outRadius); }
	void ClearAggroEntries() { NativeCall<void>(this, "APrimalDinoAIController.ClearAggroEntries()"); }
	UE::Math::TRotator<double>* GetAttackRotationRate(UE::Math::TRotator<double>* result) { return NativeCall<UE::Math::TRotator<double>*, UE::Math::TRotator<double>*>(this, "APrimalDinoAIController.GetAttackRotationRate()", result); }
	AActor* FindNewTarget(bool bDontSet) { return NativeCall<AActor*, bool>(this, "APrimalDinoAIController.FindNewTarget(bool)", bDontSet); }
	void ResetGroundSpeed() { NativeCall<void>(this, "APrimalDinoAIController.ResetGroundSpeed()"); }
	float GetAttackRotationGroundSpeedMultiplier() { return NativeCall<float>(this, "APrimalDinoAIController.GetAttackRotationGroundSpeedMultiplier()"); }
	bool IsLogicPaused() { return NativeCall<bool>(this, "APrimalDinoAIController.IsLogicPaused()"); }
	float GetAttackRotationRangeDegrees() { return NativeCall<float>(this, "APrimalDinoAIController.GetAttackRotationRangeDegrees()"); }
	void BPSetLastCharacterTargetTeam(int NewTeam) { NativeCall<void, int>(this, "APrimalDinoAIController.BPSetLastCharacterTargetTeam(int)", NewTeam); }
	void RecoverMovement() { NativeCall<void>(this, "APrimalDinoAIController.RecoverMovement()"); }
	float GetAttackInterval() { return NativeCall<float>(this, "APrimalDinoAIController.GetAttackInterval()"); }
	UE::Math::TVector<double>* GetNavigationTargetPoint(UE::Math::TVector<double>* result) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*>(this, "APrimalDinoAIController.GetNavigationTargetPoint()", result); }
	UE::Math::TVector<double>* GetLandingLocation(UE::Math::TVector<double>* result) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*>(this, "APrimalDinoAIController.GetLandingLocation()", result); }
	AActor* GetAlternativeSourceActorForOverlapTargetCheckTraces() { return NativeCall<AActor*>(this, "APrimalDinoAIController.GetAlternativeSourceActorForOverlapTargetCheckTraces()"); }
	bool BPPreventStartle(const AActor* Attacker) { return NativeCall<bool, const AActor*>(this, "APrimalDinoAIController.BPPreventStartle(AActor*)", Attacker); }
	void SetAttackRotationRate() { NativeCall<void>(this, "APrimalDinoAIController.SetAttackRotationRate()"); }
	float GetAttackRange() { return NativeCall<float>(this, "APrimalDinoAIController.GetAttackRange()"); }
	void ResetRotationUseAcceleration() { NativeCall<void>(this, "APrimalDinoAIController.ResetRotationUseAcceleration()"); }
	bool IsWildWandering() { return NativeCall<bool>(this, "APrimalDinoAIController.IsWildWandering()"); }
	AActor* GetTarget() { return NativeCall<AActor*>(this, "APrimalDinoAIController.GetTarget()"); }
	void OnLosingTargetEvent() { NativeCall<void>(this, "APrimalDinoAIController.OnLosingTargetEvent()"); }
	bool GetHasAttackPriority() { return NativeCall<bool>(this, "APrimalDinoAIController.GetHasAttackPriority()"); }
	bool WantsAttackPriority() { return NativeCall<bool>(this, "APrimalDinoAIController.WantsAttackPriority()"); }
	bool BPForceAlternateAttackPoint(UE::Math::TVector<double>& NewAlternativeAttackPoint) { return NativeCall<bool, UE::Math::TVector<double>&>(this, "APrimalDinoAIController.BPForceAlternateAttackPoint(UE::Math::TVector<double>&)", NewAlternativeAttackPoint); }
	float GetAggroLastHitTime(const AActor* InTarget) { return NativeCall<float, const AActor*>(this, "APrimalDinoAIController.GetAggroLastHitTime(AActor*)", InTarget); }
	bool BPForceTargetDinoRider(AShooterCharacter* playerTarget) { return NativeCall<bool, AShooterCharacter*>(this, "APrimalDinoAIController.BPForceTargetDinoRider(AShooterCharacter*)", playerTarget); }
	void BPOnSetHasAttackPriority(bool Value) { NativeCall<void, bool>(this, "APrimalDinoAIController.BPOnSetHasAttackPriority(bool)", Value); }
	unsigned char GetCurrentAttackIndex() { return NativeCall<unsigned char>(this, "APrimalDinoAIController.GetCurrentAttackIndex()"); }
	void DestroyController() { NativeCall<void>(this, "APrimalDinoAIController.DestroyController()"); }
	float GetWanderRandomWaitTime(float MinWait, float MaxWait, bool bScaleWithPlayerHeat) { return NativeCall<float, float, float, bool>(this, "APrimalDinoAIController.GetWanderRandomWaitTime(float,float,bool)", MinWait, MaxWait, bScaleWithPlayerHeat); }
	AActor* BPUpdateBestTarget(const AActor* bestTarget, bool dontSetIn, bool& dontSetOut) { return NativeCall<AActor*, const AActor*, bool, bool&>(this, "APrimalDinoAIController.BPUpdateBestTarget(AActor*,bool,bool&)", bestTarget, dontSetIn, dontSetOut); }
	void ChangedAITarget_Implementation(const AActor* OldTarget) { NativeCall<void, const AActor*>(this, "APrimalDinoAIController.ChangedAITarget_Implementation(AActor*)", OldTarget); }
	int GetAggroEntriesCount() { return NativeCall<int>(this, "APrimalDinoAIController.GetAggroEntriesCount()"); }
	bool GetAggroEntry(int Index, AActor*& OutAttacker, float& OutAggroFactor, double& OutLastAggroHitTime) { return NativeCall<bool, int, AActor*&, float&, double&>(this, "APrimalDinoAIController.GetAggroEntry(int,AActor*&,float&,double&)", Index, OutAttacker, OutAggroFactor, OutLastAggroHitTime); }
	bool ShouldForceRunWhenAttacking() { return NativeCall<bool>(this, "APrimalDinoAIController.ShouldForceRunWhenAttacking()"); }
	float GetAggroNotifyNeighborsRange() { return NativeCall<float>(this, "APrimalDinoAIController.GetAggroNotifyNeighborsRange()"); }
	bool BPShouldNotifyAnyNeighbor(APrimalDinoCharacter* neighbor) { return NativeCall<bool, APrimalDinoCharacter*>(this, "APrimalDinoAIController.BPShouldNotifyAnyNeighbor(APrimalDinoCharacter*)", neighbor); }
	float BPAdjustTargetingDesireForActorOutOfLimitVolume(const AActor* ForActor, float InTargetingDesire) { return NativeCall<float, const AActor*, float>(this, "APrimalDinoAIController.BPAdjustTargetingDesireForActorOutOfLimitVolume(AActor*,float)", ForActor, InTargetingDesire); }
	void RestartBrainComponent() { NativeCall<void>(this, "APrimalDinoAIController.RestartBrainComponent()"); }
	bool IsDinoController() { return NativeCall<bool>(this, "APrimalDinoAIController.IsDinoController()"); }
	float GetMinAttackRange() { return NativeCall<float>(this, "APrimalDinoAIController.GetMinAttackRange()"); }
	AActor* GetAggroEntriesAttackerAtIndex(int Index) { return NativeCall<AActor*, int>(this, "APrimalDinoAIController.GetAggroEntriesAttackerAtIndex(int)", Index); }
	bool BPOverrideIgnoredByWildDino(const AActor* wildDinoToIgnore) { return NativeCall<bool, const AActor*>(this, "APrimalDinoAIController.BPOverrideIgnoredByWildDino(AActor*)", wildDinoToIgnore); }
	APawn* GetControllerPawn() { return NativeCall<APawn*>(this, "APrimalDinoAIController.GetControllerPawn()"); }
	bool BPShouldNotifyNeighbor(APrimalDinoCharacter* neighbor) { return NativeCall<bool, APrimalDinoCharacter*>(this, "APrimalDinoAIController.BPShouldNotifyNeighbor(APrimalDinoCharacter*)", neighbor); }
	bool CalculateAndSetWonderingAIStateEvent(bool StateChanged) { return NativeCall<bool, bool>(this, "APrimalDinoAIController.CalculateAndSetWonderingAIStateEvent(bool)", StateChanged); }
	void SetAttackGroundSpeed() { NativeCall<void>(this, "APrimalDinoAIController.SetAttackGroundSpeed()"); }
	UE::Math::TVector<double>* GetRandomPointInReverseVacuumCompartment(UE::Math::TVector<double>* result, APrimalDinoCharacter* dinoPawn) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*, APrimalDinoCharacter*>(this, "APrimalDinoAIController.GetRandomPointInReverseVacuumCompartment(APrimalDinoCharacter*)", result, dinoPawn); }
};