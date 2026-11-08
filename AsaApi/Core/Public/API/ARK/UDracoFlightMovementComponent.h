#pragma once
#include "BulkForward.h"
#include "GameplayForward.h"
#include "UShooterCharacterMovement.h"

struct UDracoFlightMovementComponent : UShooterCharacterMovement
{
public:
	UDracoFlightMovementComponent() = delete;
	~UDracoFlightMovementComponent() = delete;
	UDracoFlightMovementComponent(const UDracoFlightMovementComponent&) = delete;
	UDracoFlightMovementComponent& operator=(const UDracoFlightMovementComponent&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UDracoFlightMovementComponent"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UDracoFlightMovementComponent"); }

	float& LandedRunningSpeedModifierField() { return *GetNativePointerField<float*>(this, "UDracoFlightMovementComponent.LandedRunningSpeedModifier"); }
	float& HoverRunningSpeedModifierField() { return *GetNativePointerField<float*>(this, "UDracoFlightMovementComponent.HoverRunningSpeedModifier"); }
	float& SprintRunningSpeedModifierField() { return *GetNativePointerField<float*>(this, "UDracoFlightMovementComponent.SprintRunningSpeedModifier"); }
	float& SprintFastCruiseInputScaleField() { return *GetNativePointerField<float*>(this, "UDracoFlightMovementComponent.SprintFastCruiseInputScale"); }
	float& SprintSlowCruiseInputScaleField() { return *GetNativePointerField<float*>(this, "UDracoFlightMovementComponent.SprintSlowCruiseInputScale"); }
	float& GroundWalkSpeedField() { return *GetNativePointerField<float*>(this, "UDracoFlightMovementComponent.GroundWalkSpeed"); }
	float& GroundJumpZField() { return *GetNativePointerField<float*>(this, "UDracoFlightMovementComponent.GroundJumpZ"); }
	float& InputTapThresholdField() { return *GetNativePointerField<float*>(this, "UDracoFlightMovementComponent.InputTapThreshold"); }
	float& DoubleTapWindowSecondsField() { return *GetNativePointerField<float*>(this, "UDracoFlightMovementComponent.DoubleTapWindowSeconds"); }
	float& BarrelRollTapLockoutSecondsField() { return *GetNativePointerField<float*>(this, "UDracoFlightMovementComponent.BarrelRollTapLockoutSeconds"); }
	float& BarrelRollDashSpeedField() { return *GetNativePointerField<float*>(this, "UDracoFlightMovementComponent.BarrelRollDashSpeed"); }
	float& BarrelRollDashDistanceField() { return *GetNativePointerField<float*>(this, "UDracoFlightMovementComponent.BarrelRollDashDistance"); }
	float& DashFaceTargetTurnRateDegField() { return *GetNativePointerField<float*>(this, "UDracoFlightMovementComponent.DashFaceTargetTurnRateDeg"); }
	float& DashFollowControlTurnRateDegField() { return *GetNativePointerField<float*>(this, "UDracoFlightMovementComponent.DashFollowControlTurnRateDeg"); }
	float& DashControlRotationLookAtRateDegField() { return *GetNativePointerField<float*>(this, "UDracoFlightMovementComponent.DashControlRotationLookAtRateDeg"); }
	float& MaxDashSubstepDistanceField() { return *GetNativePointerField<float*>(this, "UDracoFlightMovementComponent.MaxDashSubstepDistance"); }
	int& MaxDashSubstepCountField() { return *GetNativePointerField<int*>(this, "UDracoFlightMovementComponent.MaxDashSubstepCount"); }
	float& TekShieldCheckRadiusField() { return *GetNativePointerField<float*>(this, "UDracoFlightMovementComponent.TekShieldCheckRadius"); }
	float& DashAnimVelocityMultiplierField() { return *GetNativePointerField<float*>(this, "UDracoFlightMovementComponent.DashAnimVelocityMultiplier"); }
	float& ManeuverStaminaCostField() { return *GetNativePointerField<float*>(this, "UDracoFlightMovementComponent.ManeuverStaminaCost"); }
	float& SprintFlightStaminaDrainPerSecondField() { return *GetNativePointerField<float*>(this, "UDracoFlightMovementComponent.SprintFlightStaminaDrainPerSecond"); }
	float& SprintFlightStaminaDrainIntervalSecondsField() { return *GetNativePointerField<float*>(this, "UDracoFlightMovementComponent.SprintFlightStaminaDrainIntervalSeconds"); }
	float& SprintFlightMinStaminaToEnterField() { return *GetNativePointerField<float*>(this, "UDracoFlightMovementComponent.SprintFlightMinStaminaToEnter"); }
	float& AirLoopMinSpeedField() { return *GetNativePointerField<float*>(this, "UDracoFlightMovementComponent.AirLoopMinSpeed"); }
	float& AirLoopMinRadiusField() { return *GetNativePointerField<float*>(this, "UDracoFlightMovementComponent.AirLoopMinRadius"); }
	float& AirLoopMaxRadiusField() { return *GetNativePointerField<float*>(this, "UDracoFlightMovementComponent.AirLoopMaxRadius"); }
	float& AirLoopFallbackDurationField() { return *GetNativePointerField<float*>(this, "UDracoFlightMovementComponent.AirLoopFallbackDuration"); }
	float& AirLoopSteerRateDegField() { return *GetNativePointerField<float*>(this, "UDracoFlightMovementComponent.AirLoopSteerRateDeg"); }
	float& AirLoopAnimVelocityMultiplierField() { return *GetNativePointerField<float*>(this, "UDracoFlightMovementComponent.AirLoopAnimVelocityMultiplier"); }
	float& AirLoopRollStartFractionField() { return *GetNativePointerField<float*>(this, "UDracoFlightMovementComponent.AirLoopRollStartFraction"); }
	float& ControlRotationSampleMinIntervalSecondsField() { return *GetNativePointerField<float*>(this, "UDracoFlightMovementComponent.ControlRotationSampleMinIntervalSeconds"); }
	float& ControlRotationSampleMaxCatchupSecondsField() { return *GetNativePointerField<float*>(this, "UDracoFlightMovementComponent.ControlRotationSampleMaxCatchupSeconds"); }
	float& ScriptedMotionCorrectionGraceSecondsField() { return *GetNativePointerField<float*>(this, "UDracoFlightMovementComponent.ScriptedMotionCorrectionGraceSeconds"); }
	float& HighSpeedCorrectionLeashScaleField() { return *GetNativePointerField<float*>(this, "UDracoFlightMovementComponent.HighSpeedCorrectionLeashScale"); }
	float& HighSpeedCorrectionLeashMaxSecondsField() { return *GetNativePointerField<float*>(this, "UDracoFlightMovementComponent.HighSpeedCorrectionLeashMaxSeconds"); }
	float& HighSpeedCorrectionMinLeashField() { return *GetNativePointerField<float*>(this, "UDracoFlightMovementComponent.HighSpeedCorrectionMinLeash"); }
	float& ManeuverEndReconcileToleranceCmField() { return *GetNativePointerField<float*>(this, "UDracoFlightMovementComponent.ManeuverEndReconcileToleranceCm"); }
	float& SteeredLoopEndReconcileToleranceCmField() { return *GetNativePointerField<float*>(this, "UDracoFlightMovementComponent.SteeredLoopEndReconcileToleranceCm"); }
	float& ScriptedMotionEntryBlendSecondsField() { return *GetNativePointerField<float*>(this, "UDracoFlightMovementComponent.ScriptedMotionEntryBlendSeconds"); }
	bool& bDebugDrawAirLoopField() { return *GetNativePointerField<bool*>(this, "UDracoFlightMovementComponent.bDebugDrawAirLoop"); }
	bool& bDebugDrawDashField() { return *GetNativePointerField<bool*>(this, "UDracoFlightMovementComponent.bDebugDrawDash"); }
	float& ManeuverRequestMinIntervalSecondsField() { return *GetNativePointerField<float*>(this, "UDracoFlightMovementComponent.ManeuverRequestMinIntervalSeconds"); }
	int& FlightModePollFrameIntervalField() { return *GetNativePointerField<int*>(this, "UDracoFlightMovementComponent.FlightModePollFrameInterval"); }
	float& PostFlightActionSprintHoldSecondsField() { return *GetNativePointerField<float*>(this, "UDracoFlightMovementComponent.PostFlightActionSprintHoldSeconds"); }
	float& DiveMinDownSpeedField() { return *GetNativePointerField<float*>(this, "UDracoFlightMovementComponent.DiveMinDownSpeed"); }
	float& DiveFullDownSpeedField() { return *GetNativePointerField<float*>(this, "UDracoFlightMovementComponent.DiveFullDownSpeed"); }
	float& DiveMaxBonusSpeedField() { return *GetNativePointerField<float*>(this, "UDracoFlightMovementComponent.DiveMaxBonusSpeed"); }
	float& DiveSpeedRiseRateField() { return *GetNativePointerField<float*>(this, "UDracoFlightMovementComponent.DiveSpeedRiseRate"); }
	float& DiveSpeedFallRateField() { return *GetNativePointerField<float*>(this, "UDracoFlightMovementComponent.DiveSpeedFallRate"); }
	float& DiveRotationRateScaleAtMaxField() { return *GetNativePointerField<float*>(this, "UDracoFlightMovementComponent.DiveRotationRateScaleAtMax"); }
	float& DiveStateEnterAlphaField() { return *GetNativePointerField<float*>(this, "UDracoFlightMovementComponent.DiveStateEnterAlpha"); }
	float& DiveStateExitAlphaField() { return *GetNativePointerField<float*>(this, "UDracoFlightMovementComponent.DiveStateExitAlpha"); }
	float& DiveStateMinToggleIntervalSecondsField() { return *GetNativePointerField<float*>(this, "UDracoFlightMovementComponent.DiveStateMinToggleIntervalSeconds"); }
	float& DiveImpactLandingMinSpeedField() { return *GetNativePointerField<float*>(this, "UDracoFlightMovementComponent.DiveImpactLandingMinSpeed"); }
	float& DiveImpactLandingMinDownSpeedField() { return *GetNativePointerField<float*>(this, "UDracoFlightMovementComponent.DiveImpactLandingMinDownSpeed"); }
	float& DiveImpactLandingMinAlphaField() { return *GetNativePointerField<float*>(this, "UDracoFlightMovementComponent.DiveImpactLandingMinAlpha"); }
	float& GetMeStartHeightField() { return *GetNativePointerField<float*>(this, "UDracoFlightMovementComponent.GetMeStartHeight"); }
	float& GetMeDashSpeedField() { return *GetNativePointerField<float*>(this, "UDracoFlightMovementComponent.GetMeDashSpeed"); }
	float& GetMeTargetHeightOffsetField() { return *GetNativePointerField<float*>(this, "UDracoFlightMovementComponent.GetMeTargetHeightOffset"); }
	float& GetMeMountRadiusField() { return *GetNativePointerField<float*>(this, "UDracoFlightMovementComponent.GetMeMountRadius"); }
	bool& bAppliedProfileWasLandingField() { return *GetNativePointerField<bool*>(this, "UDracoFlightMovementComponent.bAppliedProfileWasLanding"); }
	double& DiveStateChangeNetworkTimeSecondsField() { return *GetNativePointerField<double*>(this, "UDracoFlightMovementComponent.DiveStateChangeNetworkTimeSeconds"); }
	float& DiveStateChangeBonusSpeedField() { return *GetNativePointerField<float*>(this, "UDracoFlightMovementComponent.DiveStateChangeBonusSpeed"); }
	bool& bIsDivingField() { return *GetNativePointerField<bool*>(this, "UDracoFlightMovementComponent.bIsDiving"); }
	bool& bUnriddenWantsSprintFlightField() { return *GetNativePointerField<bool*>(this, "UDracoFlightMovementComponent.bUnriddenWantsSprintFlight"); }
	bool& bRiderWantsSprintFlightField() { return *GetNativePointerField<bool*>(this, "UDracoFlightMovementComponent.bRiderWantsSprintFlight"); }
	double& ForcedSprintSkillUnlockExpireTimeField() { return *GetNativePointerField<double*>(this, "UDracoFlightMovementComponent.ForcedSprintSkillUnlockExpireTime"); }
	unsigned __int64& LastFlightModePollFrameField() { return *GetNativePointerField<unsigned __int64*>(this, "UDracoFlightMovementComponent.LastFlightModePollFrame"); }
	float& WindTunnelDiveBoostPercentField() { return *GetNativePointerField<float*>(this, "UDracoFlightMovementComponent.WindTunnelDiveBoostPercent"); }
	float& WindTunnelCameraWeightField() { return *GetNativePointerField<float*>(this, "UDracoFlightMovementComponent.WindTunnelCameraWeight"); }
	float& WindTunnelCameraBlendTimeField() { return *GetNativePointerField<float*>(this, "UDracoFlightMovementComponent.WindTunnelCameraBlendTime"); }
	double& WindTunnelCameraLastTimeField() { return *GetNativePointerField<double*>(this, "UDracoFlightMovementComponent.WindTunnelCameraLastTime"); }
	float& CurrentDiveAlphaField() { return *GetNativePointerField<float*>(this, "UDracoFlightMovementComponent.CurrentDiveAlpha"); }
	float& DiveCurrentBonusSpeedField() { return *GetNativePointerField<float*>(this, "UDracoFlightMovementComponent.DiveCurrentBonusSpeed"); }
	double& PendingLateralTapTimeField() { return *GetNativePointerField<double*>(this, "UDracoFlightMovementComponent.PendingLateralTapTime"); }
	double& LastLateralDirectionalInputTimeField() { return *GetNativePointerField<double*>(this, "UDracoFlightMovementComponent.LastLateralDirectionalInputTime"); }
	double& LateralTapLockoutEndTimeSecondsField() { return *GetNativePointerField<double*>(this, "UDracoFlightMovementComponent.LateralTapLockoutEndTimeSeconds"); }
	double& ScriptedActionSprintHoldEndTimeSecondsField() { return *GetNativePointerField<double*>(this, "UDracoFlightMovementComponent.ScriptedActionSprintHoldEndTimeSeconds"); }
	bool& bObservedFlyingField() { return *GetNativePointerField<bool*>(this, "UDracoFlightMovementComponent.bObservedFlying"); }
	bool& bLastObservedHasRiderField() { return *GetNativePointerField<bool*>(this, "UDracoFlightMovementComponent.bLastObservedHasRider"); }
	bool& bLastAppliedDiveStateField() { return *GetNativePointerField<bool*>(this, "UDracoFlightMovementComponent.bLastAppliedDiveState"); }
	double& LastDiveStateToggleNetworkTimeSecondsField() { return *GetNativePointerField<double*>(this, "UDracoFlightMovementComponent.LastDiveStateToggleNetworkTimeSeconds"); }
	bool& bRunningAirLoopField() { return *GetNativePointerField<bool*>(this, "UDracoFlightMovementComponent.bRunningAirLoop"); }
	double& LoopStartTimeSecondsField() { return *GetNativePointerField<double*>(this, "UDracoFlightMovementComponent.LoopStartTimeSeconds"); }
	float& LoopDurationSecondsField() { return *GetNativePointerField<float*>(this, "UDracoFlightMovementComponent.LoopDurationSeconds"); }
	float& LoopInitialSpeedField() { return *GetNativePointerField<float*>(this, "UDracoFlightMovementComponent.LoopInitialSpeed"); }
	float& QuickTurnStartControlYawField() { return *GetNativePointerField<float*>(this, "UDracoFlightMovementComponent.QuickTurnStartControlYaw"); }
	float& QuickTurnStartControlPitchField() { return *GetNativePointerField<float*>(this, "UDracoFlightMovementComponent.QuickTurnStartControlPitch"); }
	float& QuickTurnControlYawDeltaField() { return *GetNativePointerField<float*>(this, "UDracoFlightMovementComponent.QuickTurnControlYawDelta"); }
	float& QuickTurnControlPitchDeltaField() { return *GetNativePointerField<float*>(this, "UDracoFlightMovementComponent.QuickTurnControlPitchDelta"); }
	float& LoopPitchSweepDegreesField() { return *GetNativePointerField<float*>(this, "UDracoFlightMovementComponent.LoopPitchSweepDegrees"); }
	float& LoopRadiusField() { return *GetNativePointerField<float*>(this, "UDracoFlightMovementComponent.LoopRadius"); }
	float& ManeuverEntryBonusSpeedField() { return *GetNativePointerField<float*>(this, "UDracoFlightMovementComponent.ManeuverEntryBonusSpeed"); }
	float& ActiveManeuverChargeBonusPercentField() { return *GetNativePointerField<float*>(this, "UDracoFlightMovementComponent.ActiveManeuverChargeBonusPercent"); }
	bool& bAirLoopUsesQuickTurnYawField() { return *GetNativePointerField<bool*>(this, "UDracoFlightMovementComponent.bAirLoopUsesQuickTurnYaw"); }
	bool& bRunningDashField() { return *GetNativePointerField<bool*>(this, "UDracoFlightMovementComponent.bRunningDash"); }
	double& DashStartTimeSecondsField() { return *GetNativePointerField<double*>(this, "UDracoFlightMovementComponent.DashStartTimeSeconds"); }
	float& DashDurationSecondsField() { return *GetNativePointerField<float*>(this, "UDracoFlightMovementComponent.DashDurationSeconds"); }
	float& DashDistanceField() { return *GetNativePointerField<float*>(this, "UDracoFlightMovementComponent.DashDistance"); }
	float& DashExitSpeedField() { return *GetNativePointerField<float*>(this, "UDracoFlightMovementComponent.DashExitSpeed"); }
	bool& bDashYawOnlySteeringField() { return *GetNativePointerField<bool*>(this, "UDracoFlightMovementComponent.bDashYawOnlySteering"); }
	bool& bDashForcesControlRotationToTargetField() { return *GetNativePointerField<bool*>(this, "UDracoFlightMovementComponent.bDashForcesControlRotationToTarget"); }
	bool& bDashCollidesWithPawnsField() { return *GetNativePointerField<bool*>(this, "UDracoFlightMovementComponent.bDashCollidesWithPawns"); }
	bool& bScriptedGetMeInProgressField() { return *GetNativePointerField<bool*>(this, "UDracoFlightMovementComponent.bScriptedGetMeInProgress"); }
	unsigned char& SavedScriptedMotionNetworkSmoothingModeField() { return *GetNativePointerField<unsigned char*>(this, "UDracoFlightMovementComponent.SavedScriptedMotionNetworkSmoothingMode"); }
	bool& bSavedScriptedMotionDisableControllerDesiredRotationField() { return *GetNativePointerField<bool*>(this, "UDracoFlightMovementComponent.bSavedScriptedMotionDisableControllerDesiredRotation"); }
	bool& bSavedScriptedMotionPreventCharacterBasingField() { return *GetNativePointerField<bool*>(this, "UDracoFlightMovementComponent.bSavedScriptedMotionPreventCharacterBasing"); }
	bool& bScriptedPawnCollisionIgnoreActiveField() { return *GetNativePointerField<bool*>(this, "UDracoFlightMovementComponent.bScriptedPawnCollisionIgnoreActive"); }
	double& ScriptedMotionCorrectionGraceEndNetworkTimeSecondsField() { return *GetNativePointerField<double*>(this, "UDracoFlightMovementComponent.ScriptedMotionCorrectionGraceEndNetworkTimeSeconds"); }
	double& ScriptedMotionDeterministicEndTimeSecondsField() { return *GetNativePointerField<double*>(this, "UDracoFlightMovementComponent.ScriptedMotionDeterministicEndTimeSeconds"); }
	double& ScriptedMotionWatchdogRealDeadlineSecondsField() { return *GetNativePointerField<double*>(this, "UDracoFlightMovementComponent.ScriptedMotionWatchdogRealDeadlineSeconds"); }
	bool& bScriptedMotionLocallyCompletedField() { return *GetNativePointerField<bool*>(this, "UDracoFlightMovementComponent.bScriptedMotionLocallyCompleted"); }
	float& ReceivedAirLoopControlYawField() { return *GetNativePointerField<float*>(this, "UDracoFlightMovementComponent.ReceivedAirLoopControlYaw"); }
	float& ReceivedAirLoopControlPitchField() { return *GetNativePointerField<float*>(this, "UDracoFlightMovementComponent.ReceivedAirLoopControlPitch"); }
	double& ReceivedAirLoopControlSampleTimeSecondsField() { return *GetNativePointerField<double*>(this, "UDracoFlightMovementComponent.ReceivedAirLoopControlSampleTimeSeconds"); }
	bool& bHasReceivedAirLoopControlSampleField() { return *GetNativePointerField<bool*>(this, "UDracoFlightMovementComponent.bHasReceivedAirLoopControlSample"); }
	float& DiveRampAnchorBonusField() { return *GetNativePointerField<float*>(this, "UDracoFlightMovementComponent.DiveRampAnchorBonus"); }
	double& DiveRampAnchorTimeSecondsField() { return *GetNativePointerField<double*>(this, "UDracoFlightMovementComponent.DiveRampAnchorTimeSeconds"); }
	bool& bDiveRampRisingField() { return *GetNativePointerField<bool*>(this, "UDracoFlightMovementComponent.bDiveRampRising"); }
	bool& bDiveDistanceMilestoneTrackingField() { return *GetNativePointerField<bool*>(this, "UDracoFlightMovementComponent.bDiveDistanceMilestoneTracking"); }
	float& AccumulatedDiveDistanceMilestoneMetersField() { return *GetNativePointerField<float*>(this, "UDracoFlightMovementComponent.AccumulatedDiveDistanceMilestoneMeters"); }
	bool& bScriptedEntryBlendArmedField() { return *GetNativePointerField<bool*>(this, "UDracoFlightMovementComponent.bScriptedEntryBlendArmed"); }
	double& ScriptedEntryBlendStartTimeSecondsField() { return *GetNativePointerField<double*>(this, "UDracoFlightMovementComponent.ScriptedEntryBlendStartTimeSeconds"); }
	double& NextSprintFlightStaminaDrainTimeSecondsField() { return *GetNativePointerField<double*>(this, "UDracoFlightMovementComponent.NextSprintFlightStaminaDrainTimeSeconds"); }

	void SetDefaultMovementMode() { NativeCall<void>(this, "UDracoFlightMovementComponent.SetDefaultMovementMode()"); }
	void StartScriptedActionSprintHold() { NativeCall<void>(this, "UDracoFlightMovementComponent.StartScriptedActionSprintHold()"); }
	bool IsWithinScriptedMotionCorrectionGrace() { return NativeCall<bool>(this, "UDracoFlightMovementComponent.IsWithinScriptedMotionCorrectionGrace()"); }
	bool ShouldResolveScriptedMotionCollision() { return NativeCall<bool>(this, "UDracoFlightMovementComponent.ShouldResolveScriptedMotionCollision()"); }
	void UpdateActiveFlightSystems() { NativeCall<void>(this, "UDracoFlightMovementComponent.UpdateActiveFlightSystems()"); }
	void NetApplyRiderSprintMode_Implementation(bool bWantsSprint) { NativeCall<void, bool>(this, "UDracoFlightMovementComponent.NetApplyRiderSprintMode_Implementation(bool)", bWantsSprint); }
	void ApplyFlightMovementProfile() { NativeCall<void>(this, "UDracoFlightMovementComponent.ApplyFlightMovementProfile()"); }
	bool ShouldEnableServerCorrectionRejection() { return NativeCall<bool>(this, "UDracoFlightMovementComponent.ShouldEnableServerCorrectionRejection()"); }
	static UDracoFlightMovementComponent* GetDracoFlightMovementComponent(APrimalDinoCharacter* Dino) { return NativeCall<UDracoFlightMovementComponent*, APrimalDinoCharacter*>(nullptr, "UDracoFlightMovementComponent.GetDracoFlightMovementComponent(APrimalDinoCharacter*)", Dino); }
	void OnRep_RiderWantsSprintFlight() { NativeCall<void>(this, "UDracoFlightMovementComponent.OnRep_RiderWantsSprintFlight()"); }
	bool TryMountScriptedGetMeCharacter() { return NativeCall<bool>(this, "UDracoFlightMovementComponent.TryMountScriptedGetMeCharacter()"); }
	void ResetLateralTapState(bool bStartLockout) { NativeCall<void, bool>(this, "UDracoFlightMovementComponent.ResetLateralTapState(bool)", bStartLockout); }
	void ServerSetSprintMode(bool bWantsSprint) { NativeCall<void, bool>(this, "UDracoFlightMovementComponent.ServerSetSprintMode(bool)", bWantsSprint); }
	void ApplyForcedSprintFlightOverride() { NativeCall<void>(this, "UDracoFlightMovementComponent.ApplyForcedSprintFlightOverride()"); }
	void UpdateReplicatedDiveStateFromAlpha() { NativeCall<void>(this, "UDracoFlightMovementComponent.UpdateReplicatedDiveStateFromAlpha()"); }
	float CurrentManeuverProgressPercent() { return NativeCall<float>(this, "UDracoFlightMovementComponent.CurrentManeuverProgressPercent()"); }
	float BPGetMinimumDiveBoostSpeed_Implementation() { return NativeCall<float>(this, "UDracoFlightMovementComponent.BPGetMinimumDiveBoostSpeed_Implementation()"); }
	bool IsAppliedFlightProfileStale() { return NativeCall<bool>(this, "UDracoFlightMovementComponent.IsAppliedFlightProfileStale()"); }
	bool IsScriptedActionSprintHoldActive() { return NativeCall<bool>(this, "UDracoFlightMovementComponent.IsScriptedActionSprintHoldActive()"); }
	void SetUnriddenWantsSprintFlight(bool bWantsSprint) { NativeCall<void, bool>(this, "UDracoFlightMovementComponent.SetUnriddenWantsSprintFlight(bool)", bWantsSprint); }
	void MulticastAirLoopSteering(float ControlYaw, float ControlPitch, double SampleTimeSeconds) { NativeCall<void, float, float, double>(this, "UDracoFlightMovementComponent.MulticastAirLoopSteering(float,float,double)", ControlYaw, ControlPitch, SampleTimeSeconds); }
	void NetApplyUnriddenSprintFlightRequest_Implementation(bool bWantsSprint) { NativeCall<void, bool>(this, "UDracoFlightMovementComponent.NetApplyUnriddenSprintFlightRequest_Implementation(bool)", bWantsSprint); }
	void UpdateFlightModeState() { NativeCall<void>(this, "UDracoFlightMovementComponent.UpdateFlightModeState()"); }
	void EndScriptedMotionPawnCollisionIgnore() { NativeCall<void>(this, "UDracoFlightMovementComponent.EndScriptedMotionPawnCollisionIgnore()"); }
	bool CacheOwnerDino() { return NativeCall<bool>(this, "UDracoFlightMovementComponent.CacheOwnerDino()"); }
	bool CancelActiveDash() { return NativeCall<bool>(this, "UDracoFlightMovementComponent.CancelActiveDash()"); }
	float BPGetManeuverCooldownMultiplier_Implementation() { return NativeCall<float>(this, "UDracoFlightMovementComponent.BPGetManeuverCooldownMultiplier_Implementation()"); }
	void NetApplyDiveSpeedState_Implementation(float NewDiveAlpha, float NewBonusSpeed, double StateChangeTimeSeconds) { NativeCall<void, float, float, double>(this, "UDracoFlightMovementComponent.NetApplyDiveSpeedState_Implementation(float,float,double)", NewDiveAlpha, NewBonusSpeed, StateChangeTimeSeconds); }
	void NotifyMovementModeChanged(bool bIsFlyingNow) { NativeCall<void, bool>(this, "UDracoFlightMovementComponent.NotifyMovementModeChanged(bool)", bIsFlyingNow); }
	void ServerUpdateAirLoopSteering_Implementation(float ControlYaw, float ControlPitch, double SampleTimeSeconds) { NativeCall<void, float, float, double>(this, "UDracoFlightMovementComponent.ServerUpdateAirLoopSteering_Implementation(float,float,double)", ControlYaw, ControlPitch, SampleTimeSeconds); }
	bool TryStartScriptedGetMe(AShooterCharacter* TargetCharacter) { return NativeCall<bool, AShooterCharacter*>(this, "UDracoFlightMovementComponent.TryStartScriptedGetMe(AShooterCharacter*)", TargetCharacter); }
	float GetDownwardSpeed() { return NativeCall<float>(this, "UDracoFlightMovementComponent.GetDownwardSpeed()"); }
	void TrySetSprintMode(bool bWantsSprint) { NativeCall<void, bool>(this, "UDracoFlightMovementComponent.TrySetSprintMode(bool)", bWantsSprint); }
	void ServerSetSprintMode_Implementation(bool bWantsSprint) { NativeCall<void, bool>(this, "UDracoFlightMovementComponent.ServerSetSprintMode_Implementation(bool)", bWantsSprint); }
	float GetCurrentFlightSpeed() { return NativeCall<float>(this, "UDracoFlightMovementComponent.GetCurrentFlightSpeed()"); }
	bool IsSprintModeSkillUnlocked() { return NativeCall<bool>(this, "UDracoFlightMovementComponent.IsSprintModeSkillUnlocked()"); }
	bool ApplyDiveSpeedState(float NewDiveAlpha, float NewBonusSpeed, double StateChangeTimeSeconds) { return NativeCall<bool, float, float, double>(this, "UDracoFlightMovementComponent.ApplyDiveSpeedState(float,float,double)", NewDiveAlpha, NewBonusSpeed, StateChangeTimeSeconds); }
	void UpdateSprintFlightStaminaDrain() { NativeCall<void>(this, "UDracoFlightMovementComponent.UpdateSprintFlightStaminaDrain()"); }
	void MulticastAirLoopSteering_Implementation(float ControlYaw, float ControlPitch, double SampleTimeSeconds) { NativeCall<void, float, float, double>(this, "UDracoFlightMovementComponent.MulticastAirLoopSteering_Implementation(float,float,double)", ControlYaw, ControlPitch, SampleTimeSeconds); }
	float GetCustomRotationRateModifier() { return NativeCall<float>(this, "UDracoFlightMovementComponent.GetCustomRotationRateModifier()"); }
	void BeginScriptedMotionPawnCollisionIgnore() { NativeCall<void>(this, "UDracoFlightMovementComponent.BeginScriptedMotionPawnCollisionIgnore()"); }
	void RestoreMovementDefaults() { NativeCall<void>(this, "UDracoFlightMovementComponent.RestoreMovementDefaults()"); }
	float GetEffectiveDiveMaxBonusSpeed() { return NativeCall<float>(this, "UDracoFlightMovementComponent.GetEffectiveDiveMaxBonusSpeed()"); }
	void ResetDashState() { NativeCall<void>(this, "UDracoFlightMovementComponent.ResetDashState()"); }
	void UpdateDash() { NativeCall<void>(this, "UDracoFlightMovementComponent.UpdateDash()"); }
	float GetCurrentDashProgressPercent() { return NativeCall<float>(this, "UDracoFlightMovementComponent.GetCurrentDashProgressPercent()"); }
	void EnterScriptedMotion() { NativeCall<void>(this, "UDracoFlightMovementComponent.EnterScriptedMotion()"); }
	void UpdateAirLoop() { NativeCall<void>(this, "UDracoFlightMovementComponent.UpdateAirLoop()"); }
	void RestoreFlightModeAfterScriptedAction(bool bHoldSprint) { NativeCall<void, bool>(this, "UDracoFlightMovementComponent.RestoreFlightModeAfterScriptedAction(bool)", bHoldSprint); }
	float GetDiveBonusAppliedPercent() { return NativeCall<float>(this, "UDracoFlightMovementComponent.GetDiveBonusAppliedPercent()"); }
	void ForceSprintSkillUnlockedFor(float DurationSeconds) { NativeCall<void, float>(this, "UDracoFlightMovementComponent.ForceSprintSkillUnlockedFor(float)", DurationSeconds); }
	void PhysicsRotation(float DeltaTime) { NativeCall<void, float>(this, "UDracoFlightMovementComponent.PhysicsRotation(float)", DeltaTime); }
	float ResolveSprintForwardInput(float AxisValue) { return NativeCall<float, float>(this, "UDracoFlightMovementComponent.ResolveSprintForwardInput(float)", AxisValue); }
	bool BPCanEnterSprintMode() { return NativeCall<bool>(this, "UDracoFlightMovementComponent.BPCanEnterSprintMode()"); }
	void DoBarrelRollDash(bool bRight, double StartTimeSeconds) { NativeCall<void, bool, double>(this, "UDracoFlightMovementComponent.DoBarrelRollDash(bool,double)", bRight, StartTimeSeconds); }
	void EvaluateLateralDoubleTap(float AxisValue) { NativeCall<void, float>(this, "UDracoFlightMovementComponent.EvaluateLateralDoubleTap(float)", AxisValue); }
	bool HasEnoughStaminaForSprintFlight() { return NativeCall<bool>(this, "UDracoFlightMovementComponent.HasEnoughStaminaForSprintFlight()"); }
	void ServerUpdateAirLoopSteering(float ControlYaw, float ControlPitch, double SampleTimeSeconds) { NativeCall<void, float, float, double>(this, "UDracoFlightMovementComponent.ServerUpdateAirLoopSteering(float,float,double)", ControlYaw, ControlPitch, SampleTimeSeconds); }
	float BPGetManeuverCooldownMultiplier() { return NativeCall<float>(this, "UDracoFlightMovementComponent.BPGetManeuverCooldownMultiplier()"); }
	void ApplyRiderSprintMode(bool bWantsSprint) { NativeCall<void, bool>(this, "UDracoFlightMovementComponent.ApplyRiderSprintMode(bool)", bWantsSprint); }
	bool ShouldConsumeFlightInput() { return NativeCall<bool>(this, "UDracoFlightMovementComponent.ShouldConsumeFlightInput()"); }
	float GetCustomMaxSpeedModifier() { return NativeCall<float>(this, "UDracoFlightMovementComponent.GetCustomMaxSpeedModifier()"); }
	void OnRep_DiveState(bool bPreviousIsDiving) { NativeCall<void, bool>(this, "UDracoFlightMovementComponent.OnRep_DiveState(bool)", bPreviousIsDiving); }
	float GetFlightSpeedPercent() { return NativeCall<float>(this, "UDracoFlightMovementComponent.GetFlightSpeedPercent()"); }
	void ApplyAirLoopMeshVisual(float Alpha) { NativeCall<void, float>(this, "UDracoFlightMovementComponent.ApplyAirLoopMeshVisual(float)", Alpha); }
	void NetApplyDiveState(bool bNewIsDiving, double StateChangeTimeSeconds, float BonusSpeedAtChange) { NativeCall<void, bool, double, float>(this, "UDracoFlightMovementComponent.NetApplyDiveState(bool,double,float)", bNewIsDiving, StateChangeTimeSeconds, BonusSpeedAtChange); }
	void NotifyRiderCleared(AShooterCharacter* __formal) { NativeCall<void, AShooterCharacter*>(this, "UDracoFlightMovementComponent.NotifyRiderCleared(AShooterCharacter*)", __formal); }
	bool CanEnterSprintMode() { return NativeCall<bool>(this, "UDracoFlightMovementComponent.CanEnterSprintMode()"); }
	void HandleDinoLandingStateReset(APrimalDinoCharacter* ForDino) { NativeCall<void, APrimalDinoCharacter*>(this, "UDracoFlightMovementComponent.HandleDinoLandingStateReset(APrimalDinoCharacter*)", ForDino); }
	bool IsSprintFlightRequested() { return NativeCall<bool>(this, "UDracoFlightMovementComponent.IsSprintFlightRequested()"); }
	void NetApplyRiderSprintMode(bool bWantsSprint) { NativeCall<void, bool>(this, "UDracoFlightMovementComponent.NetApplyRiderSprintMode(bool)", bWantsSprint); }
	void UnbindDinoLandingDelegates() { NativeCall<void>(this, "UDracoFlightMovementComponent.UnbindDinoLandingDelegates()"); }
	void NetApplyDiveSpeedState(float NewDiveAlpha, float NewBonusSpeed, double StateChangeTimeSeconds) { NativeCall<void, float, float, double>(this, "UDracoFlightMovementComponent.NetApplyDiveSpeedState(float,float,double)", NewDiveAlpha, NewBonusSpeed, StateChangeTimeSeconds); }
	bool PassesSprintStaminaAndVeto() { return NativeCall<bool>(this, "UDracoFlightMovementComponent.PassesSprintStaminaAndVeto()"); }
	bool CanEnableSprintFlight() { return NativeCall<bool>(this, "UDracoFlightMovementComponent.CanEnableSprintFlight()"); }
	bool ApplyDiveState(bool bNewIsDiving, bool bNotify, double StateChangeTimeSeconds, float BonusSpeedAtChange) { return NativeCall<bool, bool, bool, double, float>(this, "UDracoFlightMovementComponent.ApplyDiveState(bool,bool,double,float)", bNewIsDiving, bNotify, StateChangeTimeSeconds, BonusSpeedAtChange); }
	bool HasActiveScriptedMotion() { return NativeCall<bool>(this, "UDracoFlightMovementComponent.HasActiveScriptedMotion()"); }
	bool BPCanEnterSprintMode_Implementation() { return NativeCall<bool>(this, "UDracoFlightMovementComponent.BPCanEnterSprintMode_Implementation()"); }
	void NetApplyDiveState_Implementation(bool bNewIsDiving, double StateChangeTimeSeconds, float BonusSpeedAtChange) { NativeCall<void, bool, double, float>(this, "UDracoFlightMovementComponent.NetApplyDiveState_Implementation(bool,double,float)", bNewIsDiving, StateChangeTimeSeconds, BonusSpeedAtChange); }
	void ExitScriptedMotion() { NativeCall<void>(this, "UDracoFlightMovementComponent.ExitScriptedMotion()"); }
	void ArmScriptedMotionWatchdog() { NativeCall<void>(this, "UDracoFlightMovementComponent.ArmScriptedMotionWatchdog()"); }
	double GetDragonNetworkTimeSeconds() { return NativeCall<double>(this, "UDracoFlightMovementComponent.GetDragonNetworkTimeSeconds()"); }
	void UpdateAirLoopSteering() { NativeCall<void>(this, "UDracoFlightMovementComponent.UpdateAirLoopSteering()"); }
	bool RefreshFlightModeFromOwnerState(bool bForce) { return NativeCall<bool, bool>(this, "UDracoFlightMovementComponent.RefreshFlightModeFromOwnerState(bool)", bForce); }
	bool BPPreventFlightModeToggle(bool bWantsSprintMode) { return NativeCall<bool, bool>(this, "UDracoFlightMovementComponent.BPPreventFlightModeToggle(bool)", bWantsSprintMode); }
	void BeginPlay() { NativeCall<void>(this, "UDracoFlightMovementComponent.BeginPlay()"); }
	void SetCurrentDiveBoostSpeed(float NewDiveBoostSpeed) { NativeCall<void, float>(this, "UDracoFlightMovementComponent.SetCurrentDiveBoostSpeed(float)", NewDiveBoostSpeed); }
	void NotifyRiderMounted(AShooterCharacter* NewRider) { NativeCall<void, AShooterCharacter*>(this, "UDracoFlightMovementComponent.NotifyRiderMounted(AShooterCharacter*)", NewRider); }
	bool ShouldForceSprintForScriptedAction() { return NativeCall<bool>(this, "UDracoFlightMovementComponent.ShouldForceSprintForScriptedAction()"); }
	void ApplyUnriddenSprintFlightRequest(bool bWantsSprint) { NativeCall<void, bool>(this, "UDracoFlightMovementComponent.ApplyUnriddenSprintFlightRequest(bool)", bWantsSprint); }
	float GetEffectiveSprintFlightStaminaDrainPerSecond() { return NativeCall<float>(this, "UDracoFlightMovementComponent.GetEffectiveSprintFlightStaminaDrainPerSecond()"); }
	bool ShouldProcessDracoInput() { return NativeCall<bool>(this, "UDracoFlightMovementComponent.ShouldProcessDracoInput()"); }
	float GetCurrentDiveBoostSpeed() { return NativeCall<float>(this, "UDracoFlightMovementComponent.GetCurrentDiveBoostSpeed()"); }
	void ApplyDiveDistanceMilestoneProgress() { NativeCall<void>(this, "UDracoFlightMovementComponent.ApplyDiveDistanceMilestoneProgress()"); }
	bool IsOwnerFlyingForFlightMode() { return NativeCall<bool>(this, "UDracoFlightMovementComponent.IsOwnerFlyingForFlightMode()"); }
	void NetApplyUnriddenSprintFlightRequest(bool bWantsSprint) { NativeCall<void, bool>(this, "UDracoFlightMovementComponent.NetApplyUnriddenSprintFlightRequest(bool)", bWantsSprint); }
	bool StoreReceivedAirLoopSteering(float ControlYaw, float ControlPitch, double SampleTimeSeconds) { return NativeCall<bool, float, float, double>(this, "UDracoFlightMovementComponent.StoreReceivedAirLoopSteering(float,float,double)", ControlYaw, ControlPitch, SampleTimeSeconds); }
	float GetDiveEffectiveMaxFlightSpeed() { return NativeCall<float>(this, "UDracoFlightMovementComponent.GetDiveEffectiveMaxFlightSpeed()"); }
	float BPGetMinimumDiveBoostSpeed() { return NativeCall<float>(this, "UDracoFlightMovementComponent.BPGetMinimumDiveBoostSpeed()"); }
	bool CancelActiveManeuver() { return NativeCall<bool>(this, "UDracoFlightMovementComponent.CancelActiveManeuver()"); }
	void OnRep_UnriddenWantsSprintFlight() { NativeCall<void>(this, "UDracoFlightMovementComponent.OnRep_UnriddenWantsSprintFlight()"); }
	void CancelScriptedGetMe() { NativeCall<void>(this, "UDracoFlightMovementComponent.CancelScriptedGetMe()"); }
	void UpdateDiveState() { NativeCall<void>(this, "UDracoFlightMovementComponent.UpdateDiveState()"); }
	void ResetTransientState() { NativeCall<void>(this, "UDracoFlightMovementComponent.ResetTransientState()"); }
	bool AreFlightSkillsFullyUnlocked() { return NativeCall<bool>(this, "UDracoFlightMovementComponent.AreFlightSkillsFullyUnlocked()"); }
	bool ResetDiveSpeedState() { return NativeCall<bool>(this, "UDracoFlightMovementComponent.ResetDiveSpeedState()"); }
	float GetEffectiveManeuverStaminaCost() { return NativeCall<float>(this, "UDracoFlightMovementComponent.GetEffectiveManeuverStaminaCost()"); }
	void ApplyQuickTurnControlRotation(float Alpha) { NativeCall<void, float>(this, "UDracoFlightMovementComponent.ApplyQuickTurnControlRotation(float)", Alpha); }
	void ResetAirLoopState() { NativeCall<void>(this, "UDracoFlightMovementComponent.ResetAirLoopState()"); }

	APrimalDinoCharacter*& CachedOwnerDinoField() { return *GetNativePointerField<APrimalDinoCharacter**>(this, "UDracoFlightMovementComponent.CachedOwnerDino"); }
	APrimalDinoCharacter*& BoundLandingDinoField() { return *GetNativePointerField<APrimalDinoCharacter**>(this, "UDracoFlightMovementComponent.BoundLandingDino"); }

	FDragonFlightModeChangedSignature& OnFlightModeChangedField() { return *GetNativePointerField<FDragonFlightModeChangedSignature*>(this, "UDracoFlightMovementComponent.OnFlightModeChanged"); }
	FDragonManeuverExecutedSignature& OnManeuverExecutedField() { return *GetNativePointerField<FDragonManeuverExecutedSignature*>(this, "UDracoFlightMovementComponent.OnManeuverExecuted"); }
	FDragonDiveStateChangedSignature& OnDiveStateChangedField() { return *GetNativePointerField<FDragonDiveStateChangedSignature*>(this, "UDracoFlightMovementComponent.OnDiveStateChanged"); }
	FDragonDiveImpactHitNotifiedSignature& OnDiveImpactHitNotifiedField() { return *GetNativePointerField<FDragonDiveImpactHitNotifiedSignature*>(this, "UDracoFlightMovementComponent.OnDiveImpactHitNotified"); }
	FDragonDiveLandNotifiedSignature& OnDiveLandNotifiedField() { return *GetNativePointerField<FDragonDiveLandNotifiedSignature*>(this, "UDracoFlightMovementComponent.OnDiveLandNotified"); }
	FDragonManeuverFinishedSignature& OnManeuverFinishedField() { return *GetNativePointerField<FDragonManeuverFinishedSignature*>(this, "UDracoFlightMovementComponent.OnManeuverFinished"); }
	FDragonDashEndedSignature& OnDashEndedField() { return *GetNativePointerField<FDragonDashEndedSignature*>(this, "UDracoFlightMovementComponent.OnDashEnded"); }
	FDragonScriptedGetMeEndedSignature& OnScriptedGetMeEndedField() { return *GetNativePointerField<FDragonScriptedGetMeEndedSignature*>(this, "UDracoFlightMovementComponent.OnScriptedGetMeEnded"); }
	TWeakObjectPtr<APrimalBuff_WindTunnel, FWeakObjectPtr>& WindTunnelBuffField() { return *GetNativePointerField<TWeakObjectPtr<APrimalBuff_WindTunnel, FWeakObjectPtr>*>(this, "UDracoFlightMovementComponent.WindTunnelBuff"); }
	FDragonFlightModeTuning& HoverModeField() { return *GetNativePointerField<FDragonFlightModeTuning*>(this, "UDracoFlightMovementComponent.HoverMode"); }
	FDragonFlightModeTuning& SprintModeField() { return *GetNativePointerField<FDragonFlightModeTuning*>(this, "UDracoFlightMovementComponent.SprintMode"); }
	FSkillModifierRef& ManeuverCooldownModifierField() { return *GetNativePointerField<FSkillModifierRef*>(this, "UDracoFlightMovementComponent.ManeuverCooldownModifier"); }
	FSkillModifierRef& ManeuverStaminaCostModifierField() { return *GetNativePointerField<FSkillModifierRef*>(this, "UDracoFlightMovementComponent.ManeuverStaminaCostModifier"); }
	FSkillModifierRef& SprintFlightStaminaCostModifierField() { return *GetNativePointerField<FSkillModifierRef*>(this, "UDracoFlightMovementComponent.SprintFlightStaminaCostModifier"); }
	FSkillModifierRef& DiveBoostMaxChargeModifierField() { return *GetNativePointerField<FSkillModifierRef*>(this, "UDracoFlightMovementComponent.DiveBoostMaxChargeModifier"); }
	FName& SprintModeUnlockSkillNameField() { return *GetNativePointerField<FName*>(this, "UDracoFlightMovementComponent.SprintModeUnlockSkillName"); }
	FName& DiveUnlockSkillNameField() { return *GetNativePointerField<FName*>(this, "UDracoFlightMovementComponent.DiveUnlockSkillName"); }
	FName& BarrelRollUnlockSkillNameField() { return *GetNativePointerField<FName*>(this, "UDracoFlightMovementComponent.BarrelRollUnlockSkillName"); }
	FName& QuickTurnUnlockSkillNameField() { return *GetNativePointerField<FName*>(this, "UDracoFlightMovementComponent.QuickTurnUnlockSkillName"); }
	FName& BackflipUnlockSkillNameField() { return *GetNativePointerField<FName*>(this, "UDracoFlightMovementComponent.BackflipUnlockSkillName"); }
	FDragonManeuverTuning& BarrelRollLeftManeuverField() { return *GetNativePointerField<FDragonManeuverTuning*>(this, "UDracoFlightMovementComponent.BarrelRollLeftManeuver"); }
	FDragonManeuverTuning& BarrelRollRightManeuverField() { return *GetNativePointerField<FDragonManeuverTuning*>(this, "UDracoFlightMovementComponent.BarrelRollRightManeuver"); }
	FDragonManeuverTuning& LoopBackflipManeuverField() { return *GetNativePointerField<FDragonManeuverTuning*>(this, "UDracoFlightMovementComponent.LoopBackflipManeuver"); }
	FDragonManeuverTuning& QuickTurnManeuverField() { return *GetNativePointerField<FDragonManeuverTuning*>(this, "UDracoFlightMovementComponent.QuickTurnManeuver"); }
	TArray<FName, TSizedDefaultAllocator<32> >& DiveDistanceMilestoneNamesField() { return *GetNativePointerField<TArray<FName, TSizedDefaultAllocator<32> >*>(this, "UDracoFlightMovementComponent.DiveDistanceMilestoneNames"); }
	UE::Math::TVector<double>& WindTunnelCameraFramingField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "UDracoFlightMovementComponent.WindTunnelCameraFraming"); }
	UE::Math::TVector<double>& WindTunnelCameraLastOffsetField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "UDracoFlightMovementComponent.WindTunnelCameraLastOffset"); }
	UE::Math::TVector<double>& LoopCenterLocationField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "UDracoFlightMovementComponent.LoopCenterLocation"); }
	UE::Math::TVector<double>& LoopInitialForwardField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "UDracoFlightMovementComponent.LoopInitialForward"); }
	UE::Math::TVector<double>& LoopInitialUpField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "UDracoFlightMovementComponent.LoopInitialUp"); }
	UE::Math::TVector<double>& DashStartLocationField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "UDracoFlightMovementComponent.DashStartLocation"); }
	UE::Math::TVector<double>& DashTargetLocationField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "UDracoFlightMovementComponent.DashTargetLocation"); }
	UE::Math::TVector<double>& DashTravelDirectionField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "UDracoFlightMovementComponent.DashTravelDirection"); }
	TWeakObjectPtr<AShooterCharacter, FWeakObjectPtr>& PendingGetMeCharacterField() { return *GetNativePointerField<TWeakObjectPtr<AShooterCharacter, FWeakObjectPtr>*>(this, "UDracoFlightMovementComponent.PendingGetMeCharacter"); }
	TWeakObjectPtr<UPrimitiveComponent, FWeakObjectPtr>& ScriptedPawnCollisionIgnoredComponentField() { return *GetNativePointerField<TWeakObjectPtr<UPrimitiveComponent, FWeakObjectPtr>*>(this, "UDracoFlightMovementComponent.ScriptedPawnCollisionIgnoredComponent"); }
	UE::Math::TVector<double>& ScriptedMotionLocalCompletionLocationField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "UDracoFlightMovementComponent.ScriptedMotionLocalCompletionLocation"); }
	TWeakObjectPtr<AShooterPlayerController, FWeakObjectPtr>& CachedRiderSPCField() { return *GetNativePointerField<TWeakObjectPtr<AShooterPlayerController, FWeakObjectPtr>*>(this, "UDracoFlightMovementComponent.CachedRiderSPC"); }
	UE::Math::TVector<double>& ScriptedEntryBlendLocOffsetField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "UDracoFlightMovementComponent.ScriptedEntryBlendLocOffset"); }
	bool GetCurrentDashParams(FDragonDashParams& OutParams) { return NativeCall<bool, FDragonDashParams&>(this, "UDracoFlightMovementComponent.GetCurrentDashParams(FDragonDashParams&)", OutParams); }
	UE::Math::TVector<double>* TimeAdjustScriptedEndLocation(UE::Math::TVector<double>* result, const UE::Math::TVector<double>& EndpointLocation, const UE::Math::TVector<double>& ExitVelocity) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*, const UE::Math::TVector<double>&, const UE::Math::TVector<double>&>(this, "UDracoFlightMovementComponent.TimeAdjustScriptedEndLocation(UE::Math::TVector<double>&,UE::Math::TVector<double>&)", result, EndpointLocation, ExitVelocity); }
	bool StartGetMeDash(AShooterCharacter* TargetCharacter, const UE::Math::TVector<double>& TargetLocation) { return NativeCall<bool, AShooterCharacter*, const UE::Math::TVector<double>&>(this, "UDracoFlightMovementComponent.StartGetMeDash(AShooterCharacter*,UE::Math::TVector<double>&)", TargetCharacter, TargetLocation); }
	void OnMovementUpdated(float DeltaSeconds, const UE::Math::TVector<double>& OldLocation, const UE::Math::TVector<double>& OldVelocity) { NativeCall<void, float, const UE::Math::TVector<double>&, const UE::Math::TVector<double>&>(this, "UDracoFlightMovementComponent.OnMovementUpdated(float,UE::Math::TVector<double>&,UE::Math::TVector<double>&)", DeltaSeconds, OldLocation, OldVelocity); }
	bool StartDashInternal(const FDragonDashParams& Params, double StartTimeSeconds) { return NativeCall<bool, const FDragonDashParams&, double>(this, "UDracoFlightMovementComponent.StartDashInternal(FDragonDashParams&,double)", Params, StartTimeSeconds); }
	void NetNotifyDiveImpactHit(const FHitResult& Hit) { NativeCall<void, const FHitResult&>(this, "UDracoFlightMovementComponent.NetNotifyDiveImpactHit(FHitResult&)", Hit); }
	void UpdateDashControlRotationToTarget(const UE::Math::TVector<double>& DashLocation, float DeltaSeconds) { NativeCall<void, const UE::Math::TVector<double>&, float>(this, "UDracoFlightMovementComponent.UpdateDashControlRotationToTarget(UE::Math::TVector<double>&,float)", DashLocation, DeltaSeconds); }
	bool GetWindTunnelCameraLocation(const UE::Math::TVector<double>& CameraLocation, const UE::Math::TRotator<double>& CameraRotation, UE::Math::TVector<double>& OutLocation) { return NativeCall<bool, const UE::Math::TVector<double>&, const UE::Math::TRotator<double>&, UE::Math::TVector<double>&>(this, "UDracoFlightMovementComponent.GetWindTunnelCameraLocation(UE::Math::TVector<double>&,UE::Math::TRotator<double>&,UE::Math::TVector<double>&)", CameraLocation, CameraRotation, OutLocation); }
	bool TryTeleportOwnerToGetMeStagingPoint(AShooterCharacter* TargetCharacter, const UE::Math::TVector<double>& TargetLocation) { return NativeCall<bool, AShooterCharacter*, const UE::Math::TVector<double>&>(this, "UDracoFlightMovementComponent.TryTeleportOwnerToGetMeStagingPoint(AShooterCharacter*,UE::Math::TVector<double>&)", TargetCharacter, TargetLocation); }
	bool RetargetActiveDash(const UE::Math::TVector<double>& NewEndLocation) { return NativeCall<bool, const UE::Math::TVector<double>&>(this, "UDracoFlightMovementComponent.RetargetActiveDash(UE::Math::TVector<double>&)", NewEndLocation); }
	void OnMovementModeChanged(EMovementMode PreviousMovementMode, unsigned char PreviousCustomMode) { NativeCall<void, EMovementMode, unsigned char>(this, "UDracoFlightMovementComponent.OnMovementModeChanged(EMovementMode,unsignedchar)", PreviousMovementMode, PreviousCustomMode); }
	bool ServerCheckClientError(float ClientTimeStamp, float DeltaTime, const UE::Math::TVector<double>& Accel, const UE::Math::TVector<double>& ClientWorldLocation, const UE::Math::TVector<double>& RelativeClientLocation, FMovementBaseInterfaceData* ClientMovementBaseInterfaceData, FName ClientBaseBoneName, unsigned char ClientMovementMode) { return NativeCall<bool, float, float, const UE::Math::TVector<double>&, const UE::Math::TVector<double>&, const UE::Math::TVector<double>&, FMovementBaseInterfaceData*, FName, unsigned char>(this, "UDracoFlightMovementComponent.ServerCheckClientError(float,float,UE::Math::TVector<double>&,UE::Math::TVector<double>&,UE::Math::TVector<double>&,FMovementBaseInterfaceData*,FName,unsignedchar)", ClientTimeStamp, DeltaTime, Accel, ClientWorldLocation, RelativeClientLocation, ClientMovementBaseInterfaceData, ClientBaseBoneName, ClientMovementMode); }
	UE::Math::TVector<double>* ConsumeInputVector(UE::Math::TVector<double>* result) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*>(this, "UDracoFlightMovementComponent.ConsumeInputVector()", result); }
	void NetNotifyDiveLand_Implementation(UE::Math::TVector<double>* LandingLocation) { if (!LandingLocation) throw std::invalid_argument("Null native value parameter"); return NativeCall<void, UE :: Math :: TVector < double >>(this, "UDracoFlightMovementComponent.NetNotifyDiveLand_Implementation(UE::Math::TVector<double>)", *LandingLocation); }
	UE::Math::TVector<double>* AlignInputWithWindTunnel(UE::Math::TVector<double>* result, const UE::Math::TVector<double>& InputVector) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*, const UE::Math::TVector<double>&>(this, "UDracoFlightMovementComponent.AlignInputWithWindTunnel(UE::Math::TVector<double>&)", result, InputVector); }
	bool CanGetMeDashAlongCorridor(const UE::Math::TVector<double>& StartLocation, const UE::Math::TVector<double>& TargetLocation, AShooterCharacter* TargetCharacter) { return NativeCall<bool, const UE::Math::TVector<double>&, const UE::Math::TVector<double>&, AShooterCharacter*>(this, "UDracoFlightMovementComponent.CanGetMeDashAlongCorridor(UE::Math::TVector<double>&,UE::Math::TVector<double>&,AShooterCharacter*)", StartLocation, TargetLocation, TargetCharacter); }
	void NetNotifyDiveImpactHit_Implementation(const FHitResult& Hit) { NativeCall<void, const FHitResult&>(this, "UDracoFlightMovementComponent.NetNotifyDiveImpactHit_Implementation(FHitResult&)", Hit); }
	float GetFlightSkillMultiplier(const FSkillModifierRef& SkillModifier) { return NativeCall<float, const FSkillModifierRef&>(this, "UDracoFlightMovementComponent.GetFlightSkillMultiplier(FSkillModifierRef&)", SkillModifier); }
	void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) { NativeCall<void, float, ELevelTick, FActorComponentTickFunction*>(this, "UDracoFlightMovementComponent.TickComponent(float,ELevelTick,FActorComponentTickFunction*)", DeltaTime, TickType, ThisTickFunction); }
	bool IsFlightSkillUnlocked(FName SkillName) { return NativeCall<bool, FName>(this, "UDracoFlightMovementComponent.IsFlightSkillUnlocked(FName)", SkillName); }
	bool CanAutoLandFromImpact(const FHitResult& Hit) { return NativeCall<bool, const FHitResult&>(this, "UDracoFlightMovementComponent.CanAutoLandFromImpact(FHitResult&)", Hit); }
	UE::Math::TQuat<double>* ComputeAirLoopSteeringTarget(UE::Math::TQuat<double>* result, const UE::Math::TRotator<double>& ControlRotation) { return NativeCall<UE::Math::TQuat<double>*, UE::Math::TQuat<double>*, const UE::Math::TRotator<double>&>(this, "UDracoFlightMovementComponent.ComputeAirLoopSteeringTarget(UE::Math::TRotator<double>&)", result, ControlRotation); }
	void AddInputVector(UE::Math::TVector<double>* WorldVector, bool bForce) { if (!WorldVector) throw std::invalid_argument("Null native value parameter"); return NativeCall<void, UE :: Math :: TVector < double >, bool>(this, "UDracoFlightMovementComponent.AddInputVector(UE::Math::TVector<double>,bool)", *WorldVector, bForce); }
	bool ShouldSuppressClientFlightCorrection(const UE::Math::TVector<double>& ClientWorldLocation, float MoveDeltaSeconds) { return NativeCall<bool, const UE::Math::TVector<double>&, float>(this, "UDracoFlightMovementComponent.ShouldSuppressClientFlightCorrection(UE::Math::TVector<double>&,float)", ClientWorldLocation, MoveDeltaSeconds); }
	bool HandleDiveImpactHit(const FHitResult& Hit, UE::Math::TVector<double>& OutLandingLocation) { return NativeCall<bool, const FHitResult&, UE::Math::TVector<double>&>(this, "UDracoFlightMovementComponent.HandleDiveImpactHit(FHitResult&,UE::Math::TVector<double>&)", Hit, OutLandingLocation); }
	bool StartDash(const FDragonDashParams& Params) { return NativeCall<bool, const FDragonDashParams&>(this, "UDracoFlightMovementComponent.StartDash(FDragonDashParams&)", Params); }
	static UE::Math::TRotator<double>* MakeStableFaceTargetDashRotation(UE::Math::TRotator<double>* result, const UE::Math::TVector<double>& FaceDirection, const UE::Math::TRotator<double>& ReferenceRotation) { return NativeCall<UE::Math::TRotator<double>*, UE::Math::TRotator<double>*, const UE::Math::TVector<double>&, const UE::Math::TRotator<double>&>(nullptr, "UDracoFlightMovementComponent.MakeStableFaceTargetDashRotation(UE::Math::TVector<double>&,UE::Math::TRotator<double>&)", result, FaceDirection, ReferenceRotation); }
	void NetNotifyDiveLand(UE::Math::TVector<double>* LandingLocation) { if (!LandingLocation) throw std::invalid_argument("Null native value parameter"); return NativeCall<void, UE :: Math :: TVector < double >>(this, "UDracoFlightMovementComponent.NetNotifyDiveLand(UE::Math::TVector<double>)", *LandingLocation); }
	void EndPlay(EEndPlayReason::Type EndPlayReason) { NativeCall<void, EEndPlayReason::Type>(this, "UDracoFlightMovementComponent.EndPlay(EEndPlayReason::Type)", EndPlayReason); }
	UE::Math::TQuat<double>* ComputeAirLoopActorDelta(UE::Math::TQuat<double>* result, float Alpha) { return NativeCall<UE::Math::TQuat<double>*, UE::Math::TQuat<double>*, float>(this, "UDracoFlightMovementComponent.ComputeAirLoopActorDelta(float)", result, Alpha); }
	UE::Math::TVector<double>* GetForwardInputDirection(UE::Math::TVector<double>* result) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*>(this, "UDracoFlightMovementComponent.GetForwardInputDirection()", result); }
	bool ShouldAcceptServerCorrection(const UE::Math::TVector<double>& __formal) { return NativeCall<bool, const UE::Math::TVector<double>&>(this, "UDracoFlightMovementComponent.ShouldAcceptServerCorrection(UE::Math::TVector<double>&)", __formal); }
};
