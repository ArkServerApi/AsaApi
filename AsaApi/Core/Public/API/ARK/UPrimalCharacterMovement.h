#pragma once
#include "BulkForward.h"
#include "GameplayForward.h"
#include "UCharacterMovementComponent.h"

struct UPrimalCharacterMovement : UCharacterMovementComponent
{
public:
	UPrimalCharacterMovement() = delete;
	~UPrimalCharacterMovement() = delete;
	UPrimalCharacterMovement(const UPrimalCharacterMovement&) = delete;
	UPrimalCharacterMovement& operator=(const UPrimalCharacterMovement&) = delete;
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UPrimalCharacterMovement"); }

	double& CharacterInterpolationAndStopsUseHighPrecisionVelocityUntilTimeField() { return *GetNativePointerField<double*>(this, "UPrimalCharacterMovement.CharacterInterpolationAndStopsUseHighPrecisionVelocityUntilTime"); }
	float& ProneHalfHeightField() { return *GetNativePointerField<float*>(this, "UPrimalCharacterMovement.ProneHalfHeight"); }
	float& MaxWalkSpeedProneField() { return *GetNativePointerField<float*>(this, "UPrimalCharacterMovement.MaxWalkSpeedProne"); }
	float& DinoClientPositionErrorToleranceStoppedField() { return *GetNativePointerField<float*>(this, "UPrimalCharacterMovement.DinoClientPositionErrorToleranceStopped"); }
	float& DinoClientPositionErrorToleranceMovingFlyingField() { return *GetNativePointerField<float*>(this, "UPrimalCharacterMovement.DinoClientPositionErrorToleranceMovingFlying"); }
	float& ClientRunningPositionErrorToleranceField() { return *GetNativePointerField<float*>(this, "UPrimalCharacterMovement.ClientRunningPositionErrorTolerance"); }
	float& PlayerClientPositionErrorToleranceOverrideField() { return *GetNativePointerField<float*>(this, "UPrimalCharacterMovement.PlayerClientPositionErrorToleranceOverride"); }
	float& SimulatedTickSkipDistanceSQField() { return *GetNativePointerField<float*>(this, "UPrimalCharacterMovement.SimulatedTickSkipDistanceSQ"); }
	float& PreventWaterHoppingPlaneOffsetField() { return *GetNativePointerField<float*>(this, "UPrimalCharacterMovement.PreventWaterHoppingPlaneOffset"); }
	double& PreventWaterHopping_LastTimeAtSurfaceField() { return *GetNativePointerField<double*>(this, "UPrimalCharacterMovement.PreventWaterHopping_LastTimeAtSurface"); }
	float& AccelerationFollowsRotationMinDotField() { return *GetNativePointerField<float*>(this, "UPrimalCharacterMovement.AccelerationFollowsRotationMinDot"); }
	float& AccelerationFollowsRotationStopDistanceField() { return *GetNativePointerField<float*>(this, "UPrimalCharacterMovement.AccelerationFollowsRotationStopDistance"); }
	float& RotationAccelerationField() { return *GetNativePointerField<float*>(this, "UPrimalCharacterMovement.RotationAcceleration"); }
	float& RotationBrakingField() { return *GetNativePointerField<float*>(this, "UPrimalCharacterMovement.RotationBraking"); }
	float& AngleToStartRotationBrakingField() { return *GetNativePointerField<float*>(this, "UPrimalCharacterMovement.AngleToStartRotationBraking"); }
	float& SwimmingAccelZMultiplierField() { return *GetNativePointerField<float*>(this, "UPrimalCharacterMovement.SwimmingAccelZMultiplier"); }
	float& TamedSwimmingAccelZMultiplierField() { return *GetNativePointerField<float*>(this, "UPrimalCharacterMovement.TamedSwimmingAccelZMultiplier"); }
	bool& bSlipOffLedgesField() { return *GetNativePointerField<bool*>(this, "UPrimalCharacterMovement.bSlipOffLedges"); }
	float& LedgeSlipCapsuleRadiusMultiplierField() { return *GetNativePointerField<float*>(this, "UPrimalCharacterMovement.LedgeSlipCapsuleRadiusMultiplier"); }
	float& LedgeSlipPushVelocityField() { return *GetNativePointerField<float*>(this, "UPrimalCharacterMovement.LedgeSlipPushVelocity"); }
	float& LedgeSlipVelocityBuildUpMultiplierField() { return *GetNativePointerField<float*>(this, "UPrimalCharacterMovement.LedgeSlipVelocityBuildUpMultiplier"); }
	float& BackwardsMaxSpeedMultiplierField() { return *GetNativePointerField<float*>(this, "UPrimalCharacterMovement.BackwardsMaxSpeedMultiplier"); }
	float& BackwardsMovementDotThresholdField() { return *GetNativePointerField<float*>(this, "UPrimalCharacterMovement.BackwardsMovementDotThreshold"); }
	float& WaterDinoSurfacePitchClampCapsuleDistanceMultiplierField() { return *GetNativePointerField<float*>(this, "UPrimalCharacterMovement.WaterDinoSurfacePitchClampCapsuleDistanceMultiplier"); }
	float& WaterDinoSurfacePitchClampMaxPitchField() { return *GetNativePointerField<float*>(this, "UPrimalCharacterMovement.WaterDinoSurfacePitchClampMaxPitch"); }
	float& LostDeltaTimeField() { return *GetNativePointerField<float*>(this, "UPrimalCharacterMovement.LostDeltaTime"); }
	float& LastLostDeltaTimeField() { return *GetNativePointerField<float*>(this, "UPrimalCharacterMovement.LastLostDeltaTime"); }
	float& WaveLockingMaxZOffsetField() { return *GetNativePointerField<float*>(this, "UPrimalCharacterMovement.WaveLockingMaxZOffset"); }
	double& LastSkippedMoveTimeField() { return *GetNativePointerField<double*>(this, "UPrimalCharacterMovement.LastSkippedMoveTime"); }
	double& LastTimeTouchedOtherPawnField() { return *GetNativePointerField<double*>(this, "UPrimalCharacterMovement.LastTimeTouchedOtherPawn"); }
	float& CurrentLedgeSlipPushVelocityField() { return *GetNativePointerField<float*>(this, "UPrimalCharacterMovement.CurrentLedgeSlipPushVelocity"); }
	int& LastFrameDisabledFloorBasingField() { return *GetNativePointerField<int*>(this, "UPrimalCharacterMovement.LastFrameDisabledFloorBasing"); }
	double& ForceBigPushingTimeField() { return *GetNativePointerField<double*>(this, "UPrimalCharacterMovement.ForceBigPushingTime"); }
	double& LastSwimTimeField() { return *GetNativePointerField<double*>(this, "UPrimalCharacterMovement.LastSwimTime"); }
	float& TimeLeftToForceTickEveryFrameField() { return *GetNativePointerField<float*>(this, "UPrimalCharacterMovement.TimeLeftToForceTickEveryFrame"); }
	float& LandedPreventRequestedMoveIntervalField() { return *GetNativePointerField<float*>(this, "UPrimalCharacterMovement.LandedPreventRequestedMoveInterval"); }
	float& LandedPreventRequestedMoveMinVelocityMagnitudeField() { return *GetNativePointerField<float*>(this, "UPrimalCharacterMovement.LandedPreventRequestedMoveMinVelocityMagnitude"); }
	double& LastLandedTimeField() { return *GetNativePointerField<double*>(this, "UPrimalCharacterMovement.LastLandedTime"); }
	float& SlopeJumpTraceExtraDistanceField() { return *GetNativePointerField<float*>(this, "UPrimalCharacterMovement.SlopeJumpTraceExtraDistance"); }
	float& SlopeJumpMinNormalZField() { return *GetNativePointerField<float*>(this, "UPrimalCharacterMovement.SlopeJumpMinNormalZ"); }
	float& SlopeJumpZVelocityField() { return *GetNativePointerField<float*>(this, "UPrimalCharacterMovement.SlopeJumpZVelocity"); }
	float& SlopeJumpAirControlField() { return *GetNativePointerField<float*>(this, "UPrimalCharacterMovement.SlopeJumpAirControl"); }
	bool& bSlopeJumpGrantedField() { return *GetNativePointerField<bool*>(this, "UPrimalCharacterMovement.bSlopeJumpGranted"); }
	bool& bSlopeJumpAirControlActiveField() { return *GetNativePointerField<bool*>(this, "UPrimalCharacterMovement.bSlopeJumpAirControlActive"); }
	bool& bSlopeJumpPrevPressedJumpField() { return *GetNativePointerField<bool*>(this, "UPrimalCharacterMovement.bSlopeJumpPrevPressedJump"); }
	float& SavedAirControlForSlopeJumpField() { return *GetNativePointerField<float*>(this, "UPrimalCharacterMovement.SavedAirControlForSlopeJump"); }
	float& FreebieJumpFallingStartTimeField() { return *GetNativePointerField<float*>(this, "UPrimalCharacterMovement.FreebieJumpFallingStartTime"); }
	float& FreebieJumpFallingStartZField() { return *GetNativePointerField<float*>(this, "UPrimalCharacterMovement.FreebieJumpFallingStartZ"); }
	bool& bFreebieJumpReadyField() { return *GetNativePointerField<bool*>(this, "UPrimalCharacterMovement.bFreebieJumpReady"); }
	bool& bFreebieJumpGrantedField() { return *GetNativePointerField<bool*>(this, "UPrimalCharacterMovement.bFreebieJumpGranted"); }
	bool& bFreebieJumpWasFallingField() { return *GetNativePointerField<bool*>(this, "UPrimalCharacterMovement.bFreebieJumpWasFalling"); }
	int& BadFloorPenetrationCountField() { return *GetNativePointerField<int*>(this, "UPrimalCharacterMovement.BadFloorPenetrationCount"); }
	int& LastClientRelevantFrameField() { return *GetNativePointerField<int*>(this, "UPrimalCharacterMovement.LastClientRelevantFrame"); }
	float& LastClosestPlayerDistanceField() { return *GetNativePointerField<float*>(this, "UPrimalCharacterMovement.LastClosestPlayerDistance"); }
	double& DisableMovementPhysicsUntilTimeField() { return *GetNativePointerField<double*>(this, "UPrimalCharacterMovement.DisableMovementPhysicsUntilTime"); }
	int& LastTeleportedFrameField() { return *GetNativePointerField<int*>(this, "UPrimalCharacterMovement.LastTeleportedFrame"); }
	double& LastPushEncroachedPawnsTimeField() { return *GetNativePointerField<double*>(this, "UPrimalCharacterMovement.LastPushEncroachedPawnsTime"); }
	int& RandomStaggerField() { return *GetNativePointerField<int*>(this, "UPrimalCharacterMovement.RandomStagger"); }
	int& MovementModulusField() { return *GetNativePointerField<int*>(this, "UPrimalCharacterMovement.MovementModulus"); }
	float& LastBigPushingMaxDistanceField() { return *GetNativePointerField<float*>(this, "UPrimalCharacterMovement.LastBigPushingMaxDistance"); }
	float& MaxSpeedOverrideField() { return *GetNativePointerField<float*>(this, "UPrimalCharacterMovement.MaxSpeedOverride"); }
	bool& bOverrideMaxSpeedField() { return *GetNativePointerField<bool*>(this, "UPrimalCharacterMovement.bOverrideMaxSpeed"); }
	bool& bAllowFallingField() { return *GetNativePointerField<bool*>(this, "UPrimalCharacterMovement.bAllowFalling"); }
	bool& bForceDoPhysWalkingOnThisTickField() { return *GetNativePointerField<bool*>(this, "UPrimalCharacterMovement.bForceDoPhysWalkingOnThisTick"); }
	bool& bPendingLaunchNoLowerVelocityField() { return *GetNativePointerField<bool*>(this, "UPrimalCharacterMovement.bPendingLaunchNoLowerVelocity"); }
	bool& bPendingLaunchOverrideMovementModeField() { return *GetNativePointerField<bool*>(this, "UPrimalCharacterMovement.bPendingLaunchOverrideMovementMode"); }
	bool& bPreventExitingWaterForceExtraOverlapField() { return *GetNativePointerField<bool*>(this, "UPrimalCharacterMovement.bPreventExitingWaterForceExtraOverlap"); }
	float& TrustedClientYawField() { return *GetNativePointerField<float*>(this, "UPrimalCharacterMovement.TrustedClientYaw"); }
	float& LastAcceptedClientYawField() { return *GetNativePointerField<float*>(this, "UPrimalCharacterMovement.LastAcceptedClientYaw"); }
	bool& bAdoptClientYawThisServerMoveField() { return *GetNativePointerField<bool*>(this, "UPrimalCharacterMovement.bAdoptClientYawThisServerMove"); }
	bool& bWasAdoptingClientYawField() { return *GetNativePointerField<bool*>(this, "UPrimalCharacterMovement.bWasAdoptingClientYaw"); }

	bool CanProneInCurrentState() { return NativeCall<bool>(this, "UPrimalCharacterMovement.CanProneInCurrentState()"); }
	float ImmersionDepth(bool bUseLineTrace) { return NativeCall<float, bool>(this, "UPrimalCharacterMovement.ImmersionDepth(bool)", bUseLineTrace); }
	void UnProne(bool bClientSimulation, bool bForce) { NativeCall<void, bool, bool>(this, "UPrimalCharacterMovement.UnProne(bool,bool)", bClientSimulation, bForce); }
	bool IsInWater() { return NativeCall<bool>(this, "UPrimalCharacterMovement.IsInWater()"); }
	void StartLoggingSavedMoves_Implementation() { NativeCall<void>(this, "UPrimalCharacterMovement.StartLoggingSavedMoves_Implementation()"); }
	void DisableMaxSpeedOverride() { NativeCall<void>(this, "UPrimalCharacterMovement.DisableMaxSpeedOverride()"); }
	void PerformMovement(float DeltaTime) { NativeCall<void, float>(this, "UPrimalCharacterMovement.PerformMovement(float)", DeltaTime); }
	void CheckNetworkUpdate() { NativeCall<void>(this, "UPrimalCharacterMovement.CheckNetworkUpdate()"); }
	void StopLoggingSavedMoves_Implementation() { NativeCall<void>(this, "UPrimalCharacterMovement.StopLoggingSavedMoves_Implementation()"); }
	bool CharacterAlwaysDoFindFloor() { return NativeCall<bool>(this, "UPrimalCharacterMovement.CharacterAlwaysDoFindFloor()"); }
	void ConditionalPushEncroachedPawns(float DeltaTime) { NativeCall<void, float>(this, "UPrimalCharacterMovement.ConditionalPushEncroachedPawns(float)", DeltaTime); }
	bool IsUsingLadderPhysics() { return NativeCall<bool>(this, "UPrimalCharacterMovement.IsUsingLadderPhysics()"); }
	bool CanAttemptJump() { return NativeCall<bool>(this, "UPrimalCharacterMovement.CanAttemptJump()"); }
	float GetMaxSpeed_Internal() { return NativeCall<float>(this, "UPrimalCharacterMovement.GetMaxSpeed_Internal()"); }
	void PerformStaggeredMovement(float DeltaTime) { NativeCall<void, float>(this, "UPrimalCharacterMovement.PerformStaggeredMovement(float)", DeltaTime); }
	void MaybeUpdateBasedMovement(float DeltaSeconds) { NativeCall<void, float>(this, "UPrimalCharacterMovement.MaybeUpdateBasedMovement(float)", DeltaSeconds); }
	void ClearBase(bool bNotifyActor) { NativeCall<void, bool>(this, "UPrimalCharacterMovement.ClearBase(bool)", bNotifyActor); }
	void NotifyBumpedPawn(APawn* BumpedPawn) { NativeCall<void, APawn*>(this, "UPrimalCharacterMovement.NotifyBumpedPawn(APawn*)", BumpedPawn); }
	bool ShouldPreventWaterHopCorrection() { return NativeCall<bool>(this, "UPrimalCharacterMovement.ShouldPreventWaterHopCorrection()"); }
	float GetMaxSpeed() { return NativeCall<float>(this, "UPrimalCharacterMovement.GetMaxSpeed()"); }
	void UpdateFromCompressedFlags(unsigned char Flags) { NativeCall<void, unsigned char>(this, "UPrimalCharacterMovement.UpdateFromCompressedFlags(unsignedchar)", Flags); }
	bool IsProne() { return NativeCall<bool>(this, "UPrimalCharacterMovement.IsProne()"); }
	bool IsMovingBackwards() { return NativeCall<bool>(this, "UPrimalCharacterMovement.IsMovingBackwards()"); }
	void AdjustFloorHeight() { NativeCall<void>(this, "UPrimalCharacterMovement.AdjustFloorHeight()"); }
	void BeginPlay() { NativeCall<void>(this, "UPrimalCharacterMovement.BeginPlay()"); }
	bool HandlePendingLaunch() { return NativeCall<bool>(this, "UPrimalCharacterMovement.HandlePendingLaunch()"); }
	float GetJumpZVelocity() { return NativeCall<float>(this, "UPrimalCharacterMovement.GetJumpZVelocity()"); }
	void UnCrouch(bool bClientSimulation, bool bForce) { NativeCall<void, bool, bool>(this, "UPrimalCharacterMovement.UnCrouch(bool,bool)", bClientSimulation, bForce); }
	void PhysFlying(float deltaTime, int Iterations, float friction, float brakingDeceleration) { NativeCall<void, float, int, float, float>(this, "UPrimalCharacterMovement.PhysFlying(float,int,float,float)", deltaTime, Iterations, friction, brakingDeceleration); }
	bool ShouldUseAutonomousCorrectionOffset() { return NativeCall<bool>(this, "UPrimalCharacterMovement.ShouldUseAutonomousCorrectionOffset()"); }
	void UpdateCharacterStateBeforeMovement(float DeltaSeconds) { NativeCall<void, float>(this, "UPrimalCharacterMovement.UpdateCharacterStateBeforeMovement(float)", DeltaSeconds); }
	void CalcVelocity(float DeltaTime, float Friction, bool bFluid, float BrakingDeceleration) { NativeCall<void, float, float, bool, float>(this, "UPrimalCharacterMovement.CalcVelocity(float,float,bool,float)", DeltaTime, Friction, bFluid, BrakingDeceleration); }
	void PhysFalling(float deltaTime, int Iterations) { NativeCall<void, float, int>(this, "UPrimalCharacterMovement.PhysFalling(float,int)", deltaTime, Iterations); }
	void PostCalcVelocity(float DeltaTime, float Friction, bool bFluid, float BrakingDeceleration) { NativeCall<void, float, float, bool, float>(this, "UPrimalCharacterMovement.PostCalcVelocity(float,float,bool,float)", DeltaTime, Friction, bFluid, BrakingDeceleration); }
	bool IsRiddenAndWithAWaterFin() { return NativeCall<bool>(this, "UPrimalCharacterMovement.IsRiddenAndWithAWaterFin()"); }
	bool IsOnWalkableFloor() { return NativeCall<bool>(this, "UPrimalCharacterMovement.IsOnWalkableFloor()"); }
	bool ShouldUseWaveLocking(bool bForceCheck) { return NativeCall<bool, bool>(this, "UPrimalCharacterMovement.ShouldUseWaveLocking(bool)", bForceCheck); }
	void SimulateMovement(float DeltaTime) { NativeCall<void, float>(this, "UPrimalCharacterMovement.SimulateMovement(float)", DeltaTime); }
	bool CheckWaterStandRequest() { return NativeCall<bool>(this, "UPrimalCharacterMovement.CheckWaterStandRequest()"); }
	bool ShouldCorrectRotation() { return NativeCall<bool>(this, "UPrimalCharacterMovement.ShouldCorrectRotation()"); }
	bool ClientUpdatePositionAfterServerUpdate() { return NativeCall<bool>(this, "UPrimalCharacterMovement.ClientUpdatePositionAfterServerUpdate()"); }
	void ApplyAccumulatedForces(float DeltaSeconds) { NativeCall<void, float>(this, "UPrimalCharacterMovement.ApplyAccumulatedForces(float)", DeltaSeconds); }
	void Prone(bool bClientSimulation) { NativeCall<void, bool>(this, "UPrimalCharacterMovement.Prone(bool)", bClientSimulation); }
	void UpdateCharacterStateAfterMovement(float DeltaSeconds, bool bDoOverrideVelocities) { NativeCall<void, float, bool>(this, "UPrimalCharacterMovement.UpdateCharacterStateAfterMovement(float,bool)", DeltaSeconds, bDoOverrideVelocities); }
	void PhysicsRotation(float DeltaTime) { NativeCall<void, float>(this, "UPrimalCharacterMovement.PhysicsRotation(float)", DeltaTime); }
	void PhysSwimming(float deltaTime, int Iterations) { NativeCall<void, float, int>(this, "UPrimalCharacterMovement.PhysSwimming(float,int)", deltaTime, Iterations); }
	void PhysWalking(float deltaTime, int Iterations) { NativeCall<void, float, int>(this, "UPrimalCharacterMovement.PhysWalking(float,int)", deltaTime, Iterations); }
	static UClass* StaticClass() { return AsaApi::ResolveClass("UPrimalCharacterMovement"); }
	void SetDefaultMovementMode() { NativeCall<void>(this, "UPrimalCharacterMovement.SetDefaultMovementMode()"); }
	void SimulatedTick(float DeltaSeconds) { NativeCall<void, float>(this, "UPrimalCharacterMovement.SimulatedTick(float)", DeltaSeconds); }
	bool PreventSlidingWhileFalling() { return NativeCall<bool>(this, "UPrimalCharacterMovement.PreventSlidingWhileFalling()"); }
	bool ShouldRemainVertical() { return NativeCall<bool>(this, "UPrimalCharacterMovement.ShouldRemainVertical()"); }
	void StartNewPhysics(float deltaTime, int Iterations) { NativeCall<void, float, int>(this, "UPrimalCharacterMovement.StartNewPhysics(float,int)", deltaTime, Iterations); }
	float GetMaxBrakingDeceleration() { return NativeCall<float>(this, "UPrimalCharacterMovement.GetMaxBrakingDeceleration()"); }

	BitFieldValue<bool, unsigned __int32> bAccelerationFollowsRotation() { return { this, "UPrimalCharacterMovement.bAccelerationFollowsRotation"}; }
	BitFieldValue<bool, unsigned __int32> bPreventWaterSurfaceHopping() { return { this, "UPrimalCharacterMovement.bPreventWaterSurfaceHopping"}; }
	BitFieldValue<bool, unsigned __int32> bCheckFallingAITempIgnoreDinoRiderMesh() { return { this, "UPrimalCharacterMovement.bCheckFallingAITempIgnoreDinoRiderMesh"}; }
	BitFieldValue<bool, unsigned __int32> bFallingAITempIgnoreDinoRiderMesh() { return { this, "UPrimalCharacterMovement.bFallingAITempIgnoreDinoRiderMesh"}; }
	BitFieldValue<bool, unsigned __int32> bForceAccelerationFollowsRotationInSwimming() { return { this, "UPrimalCharacterMovement.bForceAccelerationFollowsRotationInSwimming"}; }
	BitFieldValue<bool, unsigned __int32> bUseRotationAcceleration() { return { this, "UPrimalCharacterMovement.bUseRotationAcceleration"}; }
	BitFieldValue<bool, unsigned __int32> bIgnoreRotationAccelerationWhenSwimming() { return { this, "UPrimalCharacterMovement.bIgnoreRotationAccelerationWhenSwimming"}; }
	BitFieldValue<bool, unsigned __int32> bPreventPhysicsModeChange() { return { this, "UPrimalCharacterMovement.bPreventPhysicsModeChange"}; }
	BitFieldValue<bool, unsigned __int32> bUseAsyncWalking() { return { this, "UPrimalCharacterMovement.bUseAsyncWalking"}; }
	BitFieldValue<bool, unsigned __int32> bAllowSimulatedTickDistanceSkip() { return { this, "UPrimalCharacterMovement.bAllowSimulatedTickDistanceSkip"}; }
	BitFieldValue<bool, unsigned __int32> bAllowImpactDeflection() { return { this, "UPrimalCharacterMovement.bAllowImpactDeflection"}; }
	BitFieldValue<bool, unsigned __int32> bDisableSimulatedMovement() { return { this, "UPrimalCharacterMovement.bDisableSimulatedMovement"}; }
	BitFieldValue<bool, unsigned __int32> bLastAllowSimulate() { return { this, "UPrimalCharacterMovement.bLastAllowSimulate"}; }
	BitFieldValue<bool, unsigned __int32> bCanSlide() { return { this, "UPrimalCharacterMovement.bCanSlide"}; }
	BitFieldValue<bool, unsigned __int32> bAssumeSymmetricalRotation() { return { this, "UPrimalCharacterMovement.bAssumeSymmetricalRotation"}; }
	BitFieldValue<bool, unsigned __int32> bWantsToDodge() { return { this, "UPrimalCharacterMovement.bWantsToDodge"}; }
	BitFieldValue<bool, unsigned __int32> bUseWeaponSpeedMultiplierByDirection() { return { this, "UPrimalCharacterMovement.bUseWeaponSpeedMultiplierByDirection"}; }
	BitFieldValue<bool, unsigned __int32> bWantsToProne() { return { this, "UPrimalCharacterMovement.bWantsToProne"}; }
	BitFieldValue<bool, unsigned __int32> bUseCharacterInterpolationAndStops() { return { this, "UPrimalCharacterMovement.bUseCharacterInterpolationAndStops"}; }
	BitFieldValue<bool, unsigned __int32> bOnlyForwardsInputAcceleration() { return { this, "UPrimalCharacterMovement.bOnlyForwardsInputAcceleration"}; }
	BitFieldValue<bool, unsigned __int32> bOnlyForwardsInputAccelerationWalking() { return { this, "UPrimalCharacterMovement.bOnlyForwardsInputAccelerationWalking"}; }
	BitFieldValue<bool, unsigned __int32> bFindFloorOnce() { return { this, "UPrimalCharacterMovement.bFindFloorOnce"}; }
	BitFieldValue<bool, unsigned __int32> bPreventExitingWater() { return { this, "UPrimalCharacterMovement.bPreventExitingWater"}; }
	BitFieldValue<bool, unsigned __int32> bReplicateRelativeToAttachedParent() { return { this, "UPrimalCharacterMovement.bReplicateRelativeToAttachedParent"}; }
	BitFieldValue<bool, unsigned __int32> bUseWaveLocking() { return { this, "UPrimalCharacterMovement.bUseWaveLocking"}; }
	BitFieldValue<bool, unsigned __int32> bForcePreventExitingWater() { return { this, "UPrimalCharacterMovement.bForcePreventExitingWater"}; }
	BitFieldValue<bool, unsigned __int32> bClippedToWaterSurface() { return { this, "UPrimalCharacterMovement.bClippedToWaterSurface"}; }
	BitFieldValue<bool, unsigned __int32> bZeroPitchWhenNoAcceleration() { return { this, "UPrimalCharacterMovement.bZeroPitchWhenNoAcceleration"}; }
	BitFieldValue<bool, unsigned __int32> bRequireAccelerationForUseControllerDesiredRotation() { return { this, "UPrimalCharacterMovement.bRequireAccelerationForUseControllerDesiredRotation"}; }
	BitFieldValue<bool, unsigned __int32> bForceDontAllowDesiredRotationWhenFalling() { return { this, "UPrimalCharacterMovement.bForceDontAllowDesiredRotationWhenFalling"}; }
	BitFieldValue<bool, unsigned __int32> bReduceBackwardsMovement() { return { this, "UPrimalCharacterMovement.bReduceBackwardsMovement"}; }
	BitFieldValue<bool, unsigned __int32> bPreventAddingImpulse() { return { this, "UPrimalCharacterMovement.bPreventAddingImpulse"}; }
	BitFieldValue<bool, unsigned __int32> bPreventSlidingWhileFalling() { return { this, "UPrimalCharacterMovement.bPreventSlidingWhileFalling"}; }
	BitFieldValue<bool, unsigned __int32> bPreventZeroPitchAndRollWhileFalling() { return { this, "UPrimalCharacterMovement.bPreventZeroPitchAndRollWhileFalling"}; }
	BitFieldValue<bool, unsigned __int32> bPreventEnteringWater() { return { this, "UPrimalCharacterMovement.bPreventEnteringWater"}; }
	BitFieldValue<bool, unsigned __int32> bServerCorrectForMovementModeChanges() { return { this, "UPrimalCharacterMovement.bServerCorrectForMovementModeChanges"}; }
	BitFieldValue<bool, unsigned __int32> bFallVelocityRecursionGuard() { return { this, "UPrimalCharacterMovement.bFallVelocityRecursionGuard"}; }
	BitFieldValue<bool, unsigned __int32> bLastHasRequestedVelocity() { return { this, "UPrimalCharacterMovement.bLastHasRequestedVelocity"}; }
	BitFieldValue<bool, unsigned __int32> bOnlyUseRotationAccelerationWhenNoLinearAcceleration() { return { this, "UPrimalCharacterMovement.bOnlyUseRotationAccelerationWhenNoLinearAcceleration"}; }
	BitFieldValue<bool, unsigned __int32> bDisabledRotationFollowsAccelerationFromLockedFin() { return { this, "UPrimalCharacterMovement.bDisabledRotationFollowsAccelerationFromLockedFin"}; }

	UDeferredMovementContext*& DeferredMovementField() { return *GetNativePointerField<UDeferredMovementContext**>(this, "UPrimalCharacterMovement.DeferredMovement"); }

	UE::Math::TVector<double>& LastForcedNetVelocityField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "UPrimalCharacterMovement.LastForcedNetVelocity"); }
	UE::Math::TVector<double>& WantsToDodgeVelocityField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "UPrimalCharacterMovement.WantsToDodgeVelocity"); }
	UE::Math::TVector<double>& PreviousCharacterMovementLocationField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "UPrimalCharacterMovement.PreviousCharacterMovementLocation"); }
	UE::Math::TVector<double>& LastCheckedFloorAtRelativeLocField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "UPrimalCharacterMovement.LastCheckedFloorAtRelativeLoc"); }
	FPrimalServerMoveExtendedData& ServerMoveExtendedDataField() { return *GetNativePointerField<FPrimalServerMoveExtendedData*>(this, "UPrimalCharacterMovement.ServerMoveExtendedData"); }
	UE::Math::TVector<double>& PreviousSimulatedVelocityField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "UPrimalCharacterMovement.PreviousSimulatedVelocity"); }
	UE::Math::TVector<double>& PreviousActorLocationField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "UPrimalCharacterMovement.PreviousActorLocation"); }
	UE::Math::TVector<double>& PreviousActorLocationWithFeetOnFloorField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "UPrimalCharacterMovement.PreviousActorLocationWithFeetOnFloor"); }
	UE::Math::TVector<double>& LastSimulationPositionField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "UPrimalCharacterMovement.LastSimulationPosition"); }
	UE::Math::TRotator<double>& CurrentRotationSpeedField() { return *GetNativePointerField<UE::Math::TRotator<double>*>(this, "UPrimalCharacterMovement.CurrentRotationSpeed"); }
	FPrimalCharacterNetworkMoveDataContainer& PrimalCharacterNetworkMoveDataContainerField() { return *GetNativePointerField<FPrimalCharacterNetworkMoveDataContainer*>(this, "UPrimalCharacterMovement.PrimalCharacterNetworkMoveDataContainer"); }
	bool ApplyRequestedMove(float DeltaTime, float MaxAccel, float MaxSpeed, float Friction, float BrakingDeceleration, UE::Math::TVector<double>& OutAcceleration, float& OutRequestedSpeed) { return NativeCall<bool, float, float, float, float, float, UE::Math::TVector<double>&, float&>(this, "UPrimalCharacterMovement.ApplyRequestedMove(float,float,float,float,float,UE::Math::TVector<double>&,float&)", DeltaTime, MaxAccel, MaxSpeed, Friction, BrakingDeceleration, OutAcceleration, OutRequestedSpeed); }
	void SetPostLandedPhysics(const FHitResult& Hit) { NativeCall<void, const FHitResult&>(this, "UPrimalCharacterMovement.SetPostLandedPhysics(FHitResult&)", Hit); }
	void ServerMove_PerformMovement(const FCharacterNetworkMoveData& MoveData) { NativeCall<void, const FCharacterNetworkMoveData&>(this, "UPrimalCharacterMovement.ServerMove_PerformMovement(FCharacterNetworkMoveData&)", MoveData); }
	bool ServerCheckClientError(float ClientTimeStamp, float DeltaTime, const UE::Math::TVector<double>& Accel, const UE::Math::TVector<double>& ClientWorldLocation, const UE::Math::TVector<double>& RelativeClientLocation, FMovementBaseInterfaceData* ClientMovementBaseInterfaceData, FName ClientBaseBoneName, unsigned char ClientMovementMode) { return NativeCall<bool, float, float, const UE::Math::TVector<double>&, const UE::Math::TVector<double>&, const UE::Math::TVector<double>&, FMovementBaseInterfaceData*, FName, unsigned char>(this, "UPrimalCharacterMovement.ServerCheckClientError(float,float,UE::Math::TVector<double>&,UE::Math::TVector<double>&,UE::Math::TVector<double>&,FMovementBaseInterfaceData*,FName,unsignedchar)", ClientTimeStamp, DeltaTime, Accel, ClientWorldLocation, RelativeClientLocation, ClientMovementBaseInterfaceData, ClientBaseBoneName, ClientMovementMode); }
	bool FindGoodSpot(FCollisionShape& CapsuleShape, UE::Math::TVector<double>& Location, const UE::Math::TVector<double>& Movement, int AdditionalTest, ECollisionChannel TraceChannel, const UE::Math::TVector<double>& TraceWorldGeometryFromLocation, bool bSweep, ECollisionChannel NonSweepTraceChannel, bool bSkipLOSTrace) { return NativeCall<bool, FCollisionShape&, UE::Math::TVector<double>&, const UE::Math::TVector<double>&, int, ECollisionChannel, const UE::Math::TVector<double>&, bool, ECollisionChannel, bool>(this, "UPrimalCharacterMovement.FindGoodSpot(FCollisionShape&,UE::Math::TVector<double>&,UE::Math::TVector<double>&,int,ECollisionChannel,UE::Math::TVector<double>&,bool,ECollisionChannel,bool)", CapsuleShape, Location, Movement, AdditionalTest, TraceChannel, TraceWorldGeometryFromLocation, bSweep, NonSweepTraceChannel, bSkipLOSTrace); }
	void UpdateNewPitchRotation(UE::Math::TRotator<double>& DesiredRotation, UE::Math::TRotator<double>& CurrentRotation, UE::Math::TRotator<double>& NewRotation, UE::Math::TRotator<double>& DeltaRot, float DeltaTime) { NativeCall<void, UE::Math::TRotator<double>&, UE::Math::TRotator<double>&, UE::Math::TRotator<double>&, UE::Math::TRotator<double>&, float>(this, "UPrimalCharacterMovement.UpdateNewPitchRotation(UE::Math::TRotator<double>&,UE::Math::TRotator<double>&,UE::Math::TRotator<double>&,UE::Math::TRotator<double>&,float)", DesiredRotation, CurrentRotation, NewRotation, DeltaRot, DeltaTime); }
	void FindFloorWalking(const UE::Math::TVector<double>& CapsuleLocation, FFindFloorResult& OutFloorResult, bool bCanUseCachedLocation, const FHitResult* DownwardSweepResult) { NativeCall<void, const UE::Math::TVector<double>&, FFindFloorResult&, bool, const FHitResult*>(this, "UPrimalCharacterMovement.FindFloorWalking(UE::Math::TVector<double>&,FFindFloorResult&,bool,FHitResult*)", CapsuleLocation, OutFloorResult, bCanUseCachedLocation, DownwardSweepResult); }
	UE::Math::TVector<double>* NewFallVelocity(UE::Math::TVector<double>* result, const UE::Math::TVector<double>& InitialVelocity, const UE::Math::TVector<double>& Gravity, float DeltaTime) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*, const UE::Math::TVector<double>&, const UE::Math::TVector<double>&, float>(this, "UPrimalCharacterMovement.NewFallVelocity(UE::Math::TVector<double>&,UE::Math::TVector<double>&,float)", result, InitialVelocity, Gravity, DeltaTime); }
	void AdjustToWaterFloor(UE::Math::TVector<double>& Adjusted) { NativeCall<void, UE::Math::TVector<double>&>(this, "UPrimalCharacterMovement.AdjustToWaterFloor(UE::Math::TVector<double>&)", Adjusted); }
	bool TryDeferEndScopedMovementUpdate(USceneComponent* pSceneComponent, FScopedMovementUpdate* pScopedMovementUpdate) { return NativeCall<bool, USceneComponent*, FScopedMovementUpdate*>(this, "UPrimalCharacterMovement.TryDeferEndScopedMovementUpdate(USceneComponent*,FScopedMovementUpdate*)", pSceneComponent, pScopedMovementUpdate); }
	bool ModifySavedMoveAcceleration_PostRep(UE::Math::TVector<double>& ModifyServerAccel) { return NativeCall<bool, UE::Math::TVector<double>&>(this, "UPrimalCharacterMovement.ModifySavedMoveAcceleration_PostRep(UE::Math::TVector<double>&)", ModifyServerAccel); }
	bool IsMeshed(const UE::Math::TVector<double>& PrevLocation) { return NativeCall<bool, const UE::Math::TVector<double>&>(this, "UPrimalCharacterMovement.IsMeshed(UE::Math::TVector<double>&)", PrevLocation); }
	UE::Math::TRotator<double>* GetDeltaRotation(UE::Math::TRotator<double>* result, float DeltaTime) { return NativeCall<UE::Math::TRotator<double>*, UE::Math::TRotator<double>*, float>(this, "UPrimalCharacterMovement.GetDeltaRotation(float)", result, DeltaTime); }
	bool IsWalkable(const FHitResult& Hit, bool bIsSteppingUp) { return NativeCall<bool, const FHitResult&, bool>(this, "UPrimalCharacterMovement.IsWalkable(FHitResult&,bool)", Hit, bIsSteppingUp); }
	void AddImpulseCode(UE::Math::TVector<double>* Impulse, bool bVelocityChange, float MassScaleImpulseExponent, bool bOverrideMaxImpulseZ) { if (!Impulse) throw std::invalid_argument("Null native value parameter"); return NativeCall<void, UE :: Math :: TVector < double >, bool, float, bool>(this, "UPrimalCharacterMovement.AddImpulseCode(UE::Math::TVector<double>,bool,float,bool)", *Impulse, bVelocityChange, MassScaleImpulseExponent, bOverrideMaxImpulseZ); }
	void FindFloor(const UE::Math::TVector<double>& CapsuleLocation, FFindFloorResult& OutFloorResult, bool bCanUseCachedLocation, const FHitResult* DownwardSweepResult) { NativeCall<void, const UE::Math::TVector<double>&, FFindFloorResult&, bool, const FHitResult*>(this, "UPrimalCharacterMovement.FindFloor(UE::Math::TVector<double>&,FFindFloorResult&,bool,FHitResult*)", CapsuleLocation, OutFloorResult, bCanUseCachedLocation, DownwardSweepResult); }
	UE::Math::TVector<double>* LimitRequestedMoveVelocity(UE::Math::TVector<double>* result, const UE::Math::TVector<double>& InVelocity, float DeltaTime) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*, const UE::Math::TVector<double>&, float>(this, "UPrimalCharacterMovement.LimitRequestedMoveVelocity(UE::Math::TVector<double>&,float)", result, InVelocity, DeltaTime); }
	UE::Math::TVector<double>* ComputeSlideVector(UE::Math::TVector<double>* result, const UE::Math::TVector<double>& Delta, float Time, const UE::Math::TVector<double>& Normal, const FHitResult& Hit) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*, const UE::Math::TVector<double>&, float, const UE::Math::TVector<double>&, const FHitResult&>(this, "UPrimalCharacterMovement.ComputeSlideVector(UE::Math::TVector<double>&,float,UE::Math::TVector<double>&,FHitResult&)", result, Delta, Time, Normal, Hit); }
	bool ServerShouldUseAuthoritativePosition(float ClientTimeStamp, float DeltaTime, const UE::Math::TVector<double>& Accel, const UE::Math::TVector<double>& ClientWorldLocation, const UE::Math::TVector<double>& RelativeClientLocation, FMovementBaseInterfaceData* ClientMovementBaseInterfaceData, FName ClientBaseBoneName, unsigned char ClientMovementMode) { return NativeCall<bool, float, float, const UE::Math::TVector<double>&, const UE::Math::TVector<double>&, const UE::Math::TVector<double>&, FMovementBaseInterfaceData*, FName, unsigned char>(this, "UPrimalCharacterMovement.ServerShouldUseAuthoritativePosition(float,float,UE::Math::TVector<double>&,UE::Math::TVector<double>&,UE::Math::TVector<double>&,FMovementBaseInterfaceData*,FName,unsignedchar)", ClientTimeStamp, DeltaTime, Accel, ClientWorldLocation, RelativeClientLocation, ClientMovementBaseInterfaceData, ClientBaseBoneName, ClientMovementMode); }
	void AddImpulse(UE::Math::TVector<double>* Impulse, bool bVelocityChange, float MassScaleImpulseExponent, bool bOverrideMaxImpulseZ) { if (!Impulse) throw std::invalid_argument("Null native value parameter"); return NativeCall<void, UE :: Math :: TVector < double >, bool, float, bool>(this, "UPrimalCharacterMovement.AddImpulse(UE::Math::TVector<double>,bool,float,bool)", *Impulse, bVelocityChange, MassScaleImpulseExponent, bOverrideMaxImpulseZ); }
	void UpdateNewYawRotation(UE::Math::TRotator<double>& DesiredRotation, UE::Math::TRotator<double>& CurrentRotation, UE::Math::TRotator<double>& NewRotation, UE::Math::TRotator<double>& DeltaRot, float DeltaTime) { NativeCall<void, UE::Math::TRotator<double>&, UE::Math::TRotator<double>&, UE::Math::TRotator<double>&, UE::Math::TRotator<double>&, float>(this, "UPrimalCharacterMovement.UpdateNewYawRotation(UE::Math::TRotator<double>&,UE::Math::TRotator<double>&,UE::Math::TRotator<double>&,UE::Math::TRotator<double>&,float)", DesiredRotation, CurrentRotation, NewRotation, DeltaRot, DeltaTime); }
	void AddImpulse_WithLocationOfImpulse(UE::Math::TVector<double>* Impulse, bool bVelocityChange, float MassScaleImpulseExponent, bool bOverrideMaxImpulseZ, UE::Math::TVector<double>* LocationOfImpulse) { if (!Impulse) throw std::invalid_argument("Null native value parameter"); if (!LocationOfImpulse) throw std::invalid_argument("Null native value parameter"); return NativeCall<void, UE :: Math :: TVector < double >, bool, float, bool, UE :: Math :: TVector < double >>(this, "UPrimalCharacterMovement.AddImpulse_WithLocationOfImpulse(UE::Math::TVector<double>,bool,float,bool,UE::Math::TVector<double>)", *Impulse, bVelocityChange, MassScaleImpulseExponent, bOverrideMaxImpulseZ, *LocationOfImpulse); }
	void DetermineRequestedMoveAcceleration(UE::Math::TVector<double>& NewAcceleration, const UE::Math::TVector<double>& MoveVelocity, float DeltaTime, float MaxAccel, float MaxSpeed, float Friction, float CurrentSpeedSq, const UE::Math::TVector<double>& RequestedMoveDir) { NativeCall<void, UE::Math::TVector<double>&, const UE::Math::TVector<double>&, float, float, float, float, float, const UE::Math::TVector<double>&>(this, "UPrimalCharacterMovement.DetermineRequestedMoveAcceleration(UE::Math::TVector<double>&,UE::Math::TVector<double>&,float,float,float,float,float,UE::Math::TVector<double>&)", NewAcceleration, MoveVelocity, DeltaTime, MaxAccel, MaxSpeed, Friction, CurrentSpeedSq, RequestedMoveDir); }
	UE::Math::TVector<double>* GetPreviousActorLocation(UE::Math::TVector<double>* result) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*>(this, "UPrimalCharacterMovement.GetPreviousActorLocation()", result); }
	FNetworkPredictionData_Client* GetPredictionData_Client() { return NativeCall<FNetworkPredictionData_Client*>(this, "UPrimalCharacterMovement.GetPredictionData_Client()"); }
	void DoWaterJump(UE::Math::TVector<double>* WallNormal, unsigned char JumpFlag) { if (!WallNormal) throw std::invalid_argument("Null native value parameter"); return NativeCall<void, UE :: Math :: TVector < double >, unsigned char>(this, "UPrimalCharacterMovement.DoWaterJump(UE::Math::TVector<double>,unsignedchar)", *WallNormal, JumpFlag); }
	void HandleImpact(const FHitResult& Hit, float TimeSlice, const UE::Math::TVector<double>& MoveDelta) { NativeCall<void, const FHitResult&, float, const UE::Math::TVector<double>&>(this, "UPrimalCharacterMovement.HandleImpact(FHitResult&,float,UE::Math::TVector<double>&)", Hit, TimeSlice, MoveDelta); }
	void PhysRotationCheckDesiredRotation(UE::Math::TRotator<double>& DesiredRotation) { NativeCall<void, UE::Math::TRotator<double>&>(this, "UPrimalCharacterMovement.PhysRotationCheckDesiredRotation(UE::Math::TRotator<double>&)", DesiredRotation); }
	UE::Math::TVector<double>* Primal_MoveSmoothAdjustDeltaMovement(UE::Math::TVector<double>* result, const UE::Math::TVector<double>& DeltaMovement) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*, const UE::Math::TVector<double>&>(this, "UPrimalCharacterMovement.Primal_MoveSmoothAdjustDeltaMovement(UE::Math::TVector<double>&)", result, DeltaMovement); }
	float SlideAlongSurface(const UE::Math::TVector<double>& Delta, float Time, const UE::Math::TVector<double>& Normal, FHitResult& Hit, bool bHandleImpact) { return NativeCall<float, const UE::Math::TVector<double>&, float, const UE::Math::TVector<double>&, FHitResult&, bool>(this, "UPrimalCharacterMovement.SlideAlongSurface(UE::Math::TVector<double>&,float,UE::Math::TVector<double>&,FHitResult&,bool)", Delta, Time, Normal, Hit, bHandleImpact); }
	float Swim(UE::Math::TVector<double>* Delta, FHitResult& Hit) { if (!Delta) throw std::invalid_argument("Null native value parameter"); return NativeCall<float, UE :: Math :: TVector < double >, FHitResult &>(this, "UPrimalCharacterMovement.Swim(UE::Math::TVector<double>,FHitResult&)", *Delta, Hit); }
	bool ServerExceedsAllowablePositionError(float ClientTimeStamp, float DeltaTime, const UE::Math::TVector<double>& Accel, const UE::Math::TVector<double>& ClientWorldLocation, const UE::Math::TVector<double>& RelativeClientLocation, FMovementBaseInterfaceData* ClientMovementBaseInterfaceData, FName ClientBaseBoneName, unsigned char ClientMovementMode) { return NativeCall<bool, float, float, const UE::Math::TVector<double>&, const UE::Math::TVector<double>&, const UE::Math::TVector<double>&, FMovementBaseInterfaceData*, FName, unsigned char>(this, "UPrimalCharacterMovement.ServerExceedsAllowablePositionError(float,float,UE::Math::TVector<double>&,UE::Math::TVector<double>&,UE::Math::TVector<double>&,FMovementBaseInterfaceData*,FName,unsignedchar)", ClientTimeStamp, DeltaTime, Accel, ClientWorldLocation, RelativeClientLocation, ClientMovementBaseInterfaceData, ClientBaseBoneName, ClientMovementMode); }
	void AdjustToWaterSurface(UE::Math::TVector<double>& Adjusted, bool& ShouldClipToWaterSurface) { NativeCall<void, UE::Math::TVector<double>&, bool&>(this, "UPrimalCharacterMovement.AdjustToWaterSurface(UE::Math::TVector<double>&,bool&)", Adjusted, ShouldClipToWaterSurface); }
	UE::Math::TRotator<double>* GetControllerPhysicsRotation(UE::Math::TRotator<double>* result, const UE::Math::TRotator<double>& CurrentRotation) { return NativeCall<UE::Math::TRotator<double>*, UE::Math::TRotator<double>*, const UE::Math::TRotator<double>&>(this, "UPrimalCharacterMovement.GetControllerPhysicsRotation(UE::Math::TRotator<double>&)", result, CurrentRotation); }
	void OnClientCorrectionReceived(FNetworkPredictionData_Client_Character& ClientData, float TimeStamp, UE::Math::TVector<double>* NewLocation, UE::Math::TVector<double>* NewVelocity, FMovementBaseInterfaceData* NewMovementBaseInterfaceData, FName NewBaseBoneName, bool bHasBase, bool bBaseRelativePosition, unsigned char ServerMovementMode, UE::Math::TVector<double>* ServerGravityDirection) { if (!NewLocation) throw std::invalid_argument("Null native value parameter"); if (!NewVelocity) throw std::invalid_argument("Null native value parameter"); if (!ServerGravityDirection) throw std::invalid_argument("Null native value parameter"); return NativeCall<void, FNetworkPredictionData_Client_Character &, float, UE :: Math :: TVector < double >, UE :: Math :: TVector < double >, FMovementBaseInterfaceData *, FName, bool, bool, unsigned char, UE :: Math :: TVector < double >>(this, "UPrimalCharacterMovement.OnClientCorrectionReceived(FNetworkPredictionData_Client_Character&,float,UE::Math::TVector<double>,UE::Math::TVector<double>,FMovementBaseInterfaceData*,FName,bool,bool,unsignedchar,UE::Math::TVector<double>)", ClientData, TimeStamp, *NewLocation, *NewVelocity, NewMovementBaseInterfaceData, NewBaseBoneName, bHasBase, bBaseRelativePosition, ServerMovementMode, *ServerGravityDirection); }
	bool ModifySavedMoveAcceleration_PreRep(UE::Math::TVector<double>& ModifyClientAccel) { return NativeCall<bool, UE::Math::TVector<double>&>(this, "UPrimalCharacterMovement.ModifySavedMoveAcceleration_PreRep(UE::Math::TVector<double>&)", ModifyClientAccel); }
	void MoveAutonomous(float ClientTimeStamp, float DeltaTime, unsigned char CompressedFlags, const UE::Math::TVector<double>& NewAccel) { NativeCall<void, float, float, unsigned char, const UE::Math::TVector<double>&>(this, "UPrimalCharacterMovement.MoveAutonomous(float,float,unsignedchar,UE::Math::TVector<double>&)", ClientTimeStamp, DeltaTime, CompressedFlags, NewAccel); }
	void SetAcceleration(UE::Math::TVector<double>* WithAcceleration) { if (!WithAcceleration) throw std::invalid_argument("Null native value parameter"); return NativeCall<void, UE :: Math :: TVector < double >>(this, "UPrimalCharacterMovement.SetAcceleration(UE::Math::TVector<double>)", *WithAcceleration); }
	void OnMovementModeChanged(EMovementMode PreviousMovementMode, unsigned char PreviousCustomMode) { NativeCall<void, EMovementMode, unsigned char>(this, "UPrimalCharacterMovement.OnMovementModeChanged(EMovementMode,unsignedchar)", PreviousMovementMode, PreviousCustomMode); }
	void StartSwimming(UE::Math::TVector<double>* OldLocation, UE::Math::TVector<double>* OldVelocity, float timeTick, float remainingTime, int Iterations) { if (!OldLocation) throw std::invalid_argument("Null native value parameter"); if (!OldVelocity) throw std::invalid_argument("Null native value parameter"); return NativeCall<void, UE :: Math :: TVector < double >, UE :: Math :: TVector < double >, float, float, int>(this, "UPrimalCharacterMovement.StartSwimming(UE::Math::TVector<double>,UE::Math::TVector<double>,float,float,int)", *OldLocation, *OldVelocity, timeTick, remainingTime, Iterations); }
	void SetBase(FMovementBaseInterfaceData* MovementBaseInterfaceData, FName BoneName, bool bNotifyActor) { NativeCall<void, FMovementBaseInterfaceData*, FName, bool>(this, "UPrimalCharacterMovement.SetBase(FMovementBaseInterfaceData*,FName,bool)", MovementBaseInterfaceData, BoneName, bNotifyActor); }
	void SetBase(UPrimitiveComponent* NewBase, FName BoneName, bool bNotifyActor) { NativeCall<void, UPrimitiveComponent*, FName, bool>(this, "UPrimalCharacterMovement.SetBase(UPrimitiveComponent*,FName,bool)", NewBase, BoneName, bNotifyActor); }
	void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) { NativeCall<void, float, ELevelTick, FActorComponentTickFunction*>(this, "UPrimalCharacterMovement.TickComponent(float,ELevelTick,FActorComponentTickFunction*)", DeltaTime, TickType, ThisTickFunction); }
	UE::Math::TVector<double>* ConsumeInputVector(UE::Math::TVector<double>* result) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*>(this, "UPrimalCharacterMovement.ConsumeInputVector()", result); }
	void SetMovementMode(EMovementMode NewMovementMode, unsigned char NewCustomMode) { NativeCall<void, EMovementMode, unsigned char>(this, "UPrimalCharacterMovement.SetMovementMode(EMovementMode,unsignedchar)", NewMovementMode, NewCustomMode); }
	void PostPhysicsRotation(UE::Math::TRotator<double>* NewRotation) { if (!NewRotation) throw std::invalid_argument("Null native value parameter"); return NativeCall<void, UE :: Math :: TRotator < double >>(this, "UPrimalCharacterMovement.PostPhysicsRotation(UE::Math::TRotator<double>)", *NewRotation); }
	bool FloorSweepTest(FHitResult& OutHit, const UE::Math::TVector<double>& Start, const UE::Math::TVector<double>& End, ECollisionChannel TraceChannel, const FCollisionShape& CollisionShape, const FCollisionQueryParams& Params, const FCollisionResponseParams& ResponseParam) { return NativeCall<bool, FHitResult&, const UE::Math::TVector<double>&, const UE::Math::TVector<double>&, ECollisionChannel, const FCollisionShape&, const FCollisionQueryParams&, const FCollisionResponseParams&>(this, "UPrimalCharacterMovement.FloorSweepTest(FHitResult&,UE::Math::TVector<double>&,UE::Math::TVector<double>&,ECollisionChannel,FCollisionShape&,FCollisionQueryParams&,FCollisionResponseParams&)", OutHit, Start, End, TraceChannel, CollisionShape, Params, ResponseParam); }
	bool StepUp(const UE::Math::TVector<double>& GravDir, const UE::Math::TVector<double>& Delta, const FHitResult& Hit, FStepDownResult* OutStepDownResult) { return NativeCall<bool, const UE::Math::TVector<double>&, const UE::Math::TVector<double>&, const FHitResult&, FStepDownResult*>(this, "UPrimalCharacterMovement.StepUp(UE::Math::TVector<double>&,UE::Math::TVector<double>&,FHitResult&,FStepDownResult*)", GravDir, Delta, Hit, OutStepDownResult); }
	UE::Math::TVector<double>* ConstrainInputAcceleration(UE::Math::TVector<double>* result, const UE::Math::TVector<double>& InputAcceleration) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*, const UE::Math::TVector<double>&>(this, "UPrimalCharacterMovement.ConstrainInputAcceleration(UE::Math::TVector<double>&)", result, InputAcceleration); }
};
