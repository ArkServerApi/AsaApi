#pragma once
#include "BulkForward.h"
#include "GameplayForward.h"
#include "APrimalShip.h"

struct APrimalAirShip : APrimalShip
{
public:
	APrimalAirShip() = delete;
	~APrimalAirShip() = delete;
	APrimalAirShip(const APrimalAirShip&) = delete;
	APrimalAirShip& operator=(const APrimalAirShip&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("APrimalAirShip"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("APrimalAirShip"); }

	float& AnchorGroundTraceDistanceField() { return *GetNativePointerField<float*>(this, "APrimalAirShip.AnchorGroundTraceDistance"); }
	float& AnchorTraceStartHeightField() { return *GetNativePointerField<float*>(this, "APrimalAirShip.AnchorTraceStartHeight"); }
	float& AnchoredGroundOffsetField() { return *GetNativePointerField<float*>(this, "APrimalAirShip.AnchoredGroundOffset"); }
	float& AnchorDescentSpeedField() { return *GetNativePointerField<float*>(this, "APrimalAirShip.AnchorDescentSpeed"); }
	float& AnchorDescentEaseDistanceField() { return *GetNativePointerField<float*>(this, "APrimalAirShip.AnchorDescentEaseDistance"); }
	float& AnchorHoverToleranceField() { return *GetNativePointerField<float*>(this, "APrimalAirShip.AnchorHoverTolerance"); }
	float& AnchorCancelSpeedIncreaseField() { return *GetNativePointerField<float*>(this, "APrimalAirShip.AnchorCancelSpeedIncrease"); }
	float& AnchorCancelGracePeriodField() { return *GetNativePointerField<float*>(this, "APrimalAirShip.AnchorCancelGracePeriod"); }
	float& AnchorFloatFadeDistanceField() { return *GetNativePointerField<float*>(this, "APrimalAirShip.AnchorFloatFadeDistance"); }
	float& AnchorLevelToleranceField() { return *GetNativePointerField<float*>(this, "APrimalAirShip.AnchorLevelTolerance"); }
	float& AnchorBlockedCancelTimeField() { return *GetNativePointerField<float*>(this, "APrimalAirShip.AnchorBlockedCancelTime"); }
	float& MaxClimbSpeedField() { return *GetNativePointerField<float*>(this, "APrimalAirShip.MaxClimbSpeed"); }
	float& MaxDescentSpeedField() { return *GetNativePointerField<float*>(this, "APrimalAirShip.MaxDescentSpeed"); }
	float& AltitudeResponsivenessField() { return *GetNativePointerField<float*>(this, "APrimalAirShip.AltitudeResponsiveness"); }
	float& MaxAltitudeAccelerationField() { return *GetNativePointerField<float*>(this, "APrimalAirShip.MaxAltitudeAcceleration"); }
	float& MinGroundClearanceField() { return *GetNativePointerField<float*>(this, "APrimalAirShip.MinGroundClearance"); }
	float& GroundClearanceTraceDistanceField() { return *GetNativePointerField<float*>(this, "APrimalAirShip.GroundClearanceTraceDistance"); }
	bool& bMaintainClearanceOverWaterField() { return *GetNativePointerField<bool*>(this, "APrimalAirShip.bMaintainClearanceOverWater"); }
	float& MaxFlightAltitudeField() { return *GetNativePointerField<float*>(this, "APrimalAirShip.MaxFlightAltitude"); }
	float& ThrustPitchCouplingField() { return *GetNativePointerField<float*>(this, "APrimalAirShip.ThrustPitchCoupling"); }
	bool& bAllowLandingField() { return *GetNativePointerField<bool*>(this, "APrimalAirShip.bAllowLanding"); }
	float& LandingClearanceField() { return *GetNativePointerField<float*>(this, "APrimalAirShip.LandingClearance"); }
	float& LandingDescentSpeedField() { return *GetNativePointerField<float*>(this, "APrimalAirShip.LandingDescentSpeed"); }
	float& LandedClearanceThresholdField() { return *GetNativePointerField<float*>(this, "APrimalAirShip.LandedClearanceThreshold"); }
	float& LandedReleaseMarginField() { return *GetNativePointerField<float*>(this, "APrimalAirShip.LandedReleaseMargin"); }
	bool& bCanMoveOnLandField() { return *GetNativePointerField<bool*>(this, "APrimalAirShip.bCanMoveOnLand"); }
	bool& bCanMoveOnWaterField() { return *GetNativePointerField<bool*>(this, "APrimalAirShip.bCanMoveOnWater"); }
	float& LandedWaterFollowRateField() { return *GetNativePointerField<float*>(this, "APrimalAirShip.LandedWaterFollowRate"); }
	bool& bIsLandedField() { return *GetNativePointerField<bool*>(this, "APrimalAirShip.bIsLanded"); }
	bool& bLandedOnWaterField() { return *GetNativePointerField<bool*>(this, "APrimalAirShip.bLandedOnWater"); }
	float& FloatScaleAtFullSpeedField() { return *GetNativePointerField<float*>(this, "APrimalAirShip.FloatScaleAtFullSpeed"); }
	float& FloatScaleInterpSpeedField() { return *GetNativePointerField<float*>(this, "APrimalAirShip.FloatScaleInterpSpeed"); }
	float& PitchPerForwardAccelerationField() { return *GetNativePointerField<float*>(this, "APrimalAirShip.PitchPerForwardAcceleration"); }
	float& PitchPerVerticalAccelerationField() { return *GetNativePointerField<float*>(this, "APrimalAirShip.PitchPerVerticalAcceleration"); }
	float& RollPerLateralAccelerationField() { return *GetNativePointerField<float*>(this, "APrimalAirShip.RollPerLateralAcceleration"); }
	float& MaxDynamicTiltAngleField() { return *GetNativePointerField<float*>(this, "APrimalAirShip.MaxDynamicTiltAngle"); }
	float& AccelerationSmoothingField() { return *GetNativePointerField<float*>(this, "APrimalAirShip.AccelerationSmoothing"); }
	float& MaxForwardSpeedField() { return *GetNativePointerField<float*>(this, "APrimalAirShip.MaxForwardSpeed"); }
	float& MaxReverseSpeedField() { return *GetNativePointerField<float*>(this, "APrimalAirShip.MaxReverseSpeed"); }
	float& ThrustResponsivenessField() { return *GetNativePointerField<float*>(this, "APrimalAirShip.ThrustResponsiveness"); }
	float& MaxThrustAccelerationField() { return *GetNativePointerField<float*>(this, "APrimalAirShip.MaxThrustAcceleration"); }
	float& AirThrottleInterpSpeedField() { return *GetNativePointerField<float*>(this, "APrimalAirShip.AirThrottleInterpSpeed"); }
	float& LateralDragField() { return *GetNativePointerField<float*>(this, "APrimalAirShip.LateralDrag"); }
	float& AirAxisDeadZoneField() { return *GetNativePointerField<float*>(this, "APrimalAirShip.AirAxisDeadZone"); }
	float& ThrottleReversalDeadZoneTimeField() { return *GetNativePointerField<float*>(this, "APrimalAirShip.ThrottleReversalDeadZoneTime"); }
	float& ThrottleNeutralBandField() { return *GetNativePointerField<float*>(this, "APrimalAirShip.ThrottleNeutralBand"); }
	float& UnmannedBrakingRateField() { return *GetNativePointerField<float*>(this, "APrimalAirShip.UnmannedBrakingRate"); }
	bool& bReverseRequiresHoldField() { return *GetNativePointerField<bool*>(this, "APrimalAirShip.bReverseRequiresHold"); }
	float& ReverseThrottleInterpSpeedField() { return *GetNativePointerField<float*>(this, "APrimalAirShip.ReverseThrottleInterpSpeed"); }
	float& MaxYawRateField() { return *GetNativePointerField<float*>(this, "APrimalAirShip.MaxYawRate"); }
	float& YawResponsivenessField() { return *GetNativePointerField<float*>(this, "APrimalAirShip.YawResponsiveness"); }
	bool& bInvertSteeringWhenReversingField() { return *GetNativePointerField<bool*>(this, "APrimalAirShip.bInvertSteeringWhenReversing"); }
	float& ReverseSteeringSpeedThresholdField() { return *GetNativePointerField<float*>(this, "APrimalAirShip.ReverseSteeringSpeedThreshold"); }
	float& MaxPitchAngleField() { return *GetNativePointerField<float*>(this, "APrimalAirShip.MaxPitchAngle"); }
	bool& bPitchFollowsPilotViewField() { return *GetNativePointerField<bool*>(this, "APrimalAirShip.bPitchFollowsPilotView"); }
	float& PitchViewFollowScaleField() { return *GetNativePointerField<float*>(this, "APrimalAirShip.PitchViewFollowScale"); }
	float& PitchViewFollowInterpSpeedField() { return *GetNativePointerField<float*>(this, "APrimalAirShip.PitchViewFollowInterpSpeed"); }
	float& PitchViewDeadZoneField() { return *GetNativePointerField<float*>(this, "APrimalAirShip.PitchViewDeadZone"); }
	float& MaxBankAngleField() { return *GetNativePointerField<float*>(this, "APrimalAirShip.MaxBankAngle"); }
	float& BankInterpSpeedField() { return *GetNativePointerField<float*>(this, "APrimalAirShip.BankInterpSpeed"); }
	float& AttitudeStiffnessField() { return *GetNativePointerField<float*>(this, "APrimalAirShip.AttitudeStiffness"); }
	float& AttitudeDampingField() { return *GetNativePointerField<float*>(this, "APrimalAirShip.AttitudeDamping"); }
	bool& bFallWhenDestroyedField() { return *GetNativePointerField<bool*>(this, "APrimalAirShip.bFallWhenDestroyed"); }
	float& ElevationInputField() { return *GetNativePointerField<float*>(this, "APrimalAirShip.ElevationInput"); }
	float& AirThrottleRatioField() { return *GetNativePointerField<float*>(this, "APrimalAirShip.AirThrottleRatio"); }
	float& ReplicatedAirThrottleRatioField() { return *GetNativePointerField<float*>(this, "APrimalAirShip.ReplicatedAirThrottleRatio"); }
	float& TargetPitchAngleField() { return *GetNativePointerField<float*>(this, "APrimalAirShip.TargetPitchAngle"); }
	float& TargetRollAngleField() { return *GetNativePointerField<float*>(this, "APrimalAirShip.TargetRollAngle"); }
	bool& bHasCrewAboardField() { return *GetNativePointerField<bool*>(this, "APrimalAirShip.bHasCrewAboard"); }
	float& CurrentTurnAmountField() { return *GetNativePointerField<float*>(this, "APrimalAirShip.CurrentTurnAmount"); }
	float& LastSentThrottleInputField() { return *GetNativePointerField<float*>(this, "APrimalAirShip.LastSentThrottleInput"); }
	float& LastSentElevationInputField() { return *GetNativePointerField<float*>(this, "APrimalAirShip.LastSentElevationInput"); }
	double& LastSentAirInputsTimeField() { return *GetNativePointerField<double*>(this, "APrimalAirShip.LastSentAirInputsTime"); }
	double& LastAirInputReceivedTimeField() { return *GetNativePointerField<double*>(this, "APrimalAirShip.LastAirInputReceivedTime"); }
	bool& bHasLastLinearVelocityField() { return *GetNativePointerField<bool*>(this, "APrimalAirShip.bHasLastLinearVelocity"); }
	float& ThrottleNeutralHoldRemainingField() { return *GetNativePointerField<float*>(this, "APrimalAirShip.ThrottleNeutralHoldRemaining"); }
	float& FloatScaleSmoothedField() { return *GetNativePointerField<float*>(this, "APrimalAirShip.FloatScaleSmoothed"); }
	float& ClearanceAtTouchdownField() { return *GetNativePointerField<float*>(this, "APrimalAirShip.ClearanceAtTouchdown"); }
	bool& bCachedHasCrewAboardField() { return *GetNativePointerField<bool*>(this, "APrimalAirShip.bCachedHasCrewAboard"); }
	double& LastCrewCheckTimeField() { return *GetNativePointerField<double*>(this, "APrimalAirShip.LastCrewCheckTime"); }
	float& AnchorMinHorizontalSpeedField() { return *GetNativePointerField<float*>(this, "APrimalAirShip.AnchorMinHorizontalSpeed"); }
	bool& bTrackingAnchorDescentField() { return *GetNativePointerField<bool*>(this, "APrimalAirShip.bTrackingAnchorDescent"); }
	double& AnchorDescentStartTimeField() { return *GetNativePointerField<double*>(this, "APrimalAirShip.AnchorDescentStartTime"); }
	bool& bAnchorThrottleHeldAtStartField() { return *GetNativePointerField<bool*>(this, "APrimalAirShip.bAnchorThrottleHeldAtStart"); }
	bool& bAnchorElevationHeldAtStartField() { return *GetNativePointerField<bool*>(this, "APrimalAirShip.bAnchorElevationHeldAtStart"); }
	bool& bAnchorSteeringHeldAtStartField() { return *GetNativePointerField<bool*>(this, "APrimalAirShip.bAnchorSteeringHeldAtStart"); }
	float& AnchorDescentBlockedTimeField() { return *GetNativePointerField<float*>(this, "APrimalAirShip.AnchorDescentBlockedTime"); }
	bool& bLoggedGravityOverrideField() { return *GetNativePointerField<bool*>(this, "APrimalAirShip.bLoggedGravityOverride"); }

	void ClearVesselMotionState() { NativeCall<void>(this, "APrimalAirShip.ClearVesselMotionState()"); }
	float GetEffectiveThrottleRatio() { return NativeCall<float>(this, "APrimalAirShip.GetEffectiveThrottleRatio()"); }
	void ApplySteeringForce() { NativeCall<void>(this, "APrimalAirShip.ApplySteeringForce()"); }
	void SetDeath(bool bJoinInProgress, bool AllowMovementModeChange) { NativeCall<void, bool, bool>(this, "APrimalAirShip.SetDeath(bool,bool)", bJoinInProgress, AllowMovementModeChange); }
	void SetThrottleInput(float Val) { NativeCall<void, float>(this, "APrimalAirShip.SetThrottleInput(float)", Val); }
	bool CanDoAnchoringInternal() { return NativeCall<bool>(this, "APrimalAirShip.CanDoAnchoringInternal()"); }
	void PostInitializeComponents() { NativeCall<void>(this, "APrimalAirShip.PostInitializeComponents()"); }
	void TickAirDynamics(float DeltaSeconds) { NativeCall<void, float>(this, "APrimalAirShip.TickAirDynamics(float)", DeltaSeconds); }
	AShooterPlayerController* GetLocalDriverController() { return NativeCall<AShooterPlayerController*>(this, "APrimalAirShip.GetLocalDriverController()"); }
	void HandleAnchorMovement(float DeltaSeconds) { NativeCall<void, float>(this, "APrimalAirShip.HandleAnchorMovement(float)", DeltaSeconds); }
	bool IsAirShip() { return NativeCall<bool>(this, "APrimalAirShip.IsAirShip()"); }
	void MoveUp(float Val) { NativeCall<void, float>(this, "APrimalAirShip.MoveUp(float)", Val); }
	void EnforceGravityOffWhileAlive() { NativeCall<void>(this, "APrimalAirShip.EnforceGravityOffWhileAlive()"); }
	void SimulatePhysics(float DeltaSeconds) { NativeCall<void, float>(this, "APrimalAirShip.SimulatePhysics(float)", DeltaSeconds); }
	void ServerApplyAirShipInputs(float InThrottleInput, float InElevationInput) { NativeCall<void, float, float>(this, "APrimalAirShip.ServerApplyAirShipInputs(float,float)", InThrottleInput, InElevationInput); }
	bool AllowsShipyardDocking() { return NativeCall<bool>(this, "APrimalAirShip.AllowsShipyardDocking()"); }
	void Internal_FullyChangeStateTo(bool WantsToBeAnchoredAndNotDocked, bool WantsToBeUnanchoredAndFloatingAndNotDocked, int ReplicatedDockID) { NativeCall<void, bool, bool, int>(this, "APrimalAirShip.Internal_FullyChangeStateTo(bool,bool,int)", WantsToBeAnchoredAndNotDocked, WantsToBeUnanchoredAndFloatingAndNotDocked, ReplicatedDockID); }
	float GetGroundClearance() { return NativeCall<float>(this, "APrimalAirShip.GetGroundClearance()"); }
	void BeginPlay() { NativeCall<void>(this, "APrimalAirShip.BeginPlay()"); }
	void SetElevationInput(float Val) { NativeCall<void, float>(this, "APrimalAirShip.SetElevationInput(float)", Val); }
	bool CanDoDocking_Implementation() { return NativeCall<bool>(this, "APrimalAirShip.CanDoDocking_Implementation()"); }
	bool CanFinishAnchorLowering() { return NativeCall<bool>(this, "APrimalAirShip.CanFinishAnchorLowering()"); }
	void Tick(float DeltaSeconds) { NativeCall<void, float>(this, "APrimalAirShip.Tick(float)", DeltaSeconds); }

	UE::Math::TVector<double>& SmoothedAccelerationField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "APrimalAirShip.SmoothedAcceleration"); }
	UE::Math::TVector<double>& LastLinearVelocityField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "APrimalAirShip.LastLinearVelocity"); }
	void GetFlatForwardAndSpeed(UE::Math::TVector<double>& OutForwardFlat, float& OutForwardSpeed) { NativeCall<void, UE::Math::TVector<double>&, float&>(this, "APrimalAirShip.GetFlatForwardAndSpeed(UE::Math::TVector<double>&,float&)", OutForwardFlat, OutForwardSpeed); }
	float GetGroundClearanceAndSurface(bool& bOutIsWater) { return NativeCall<float, bool&>(this, "APrimalAirShip.GetGroundClearanceAndSurface(bool&)", bOutIsWater); }
	void EndPlay(EEndPlayReason::Type EndPlayReason) { NativeCall<void, EEndPlayReason::Type>(this, "APrimalAirShip.EndPlay(EEndPlayReason::Type)", EndPlayReason); }
	UE::Math::TVector<double>* GetHullBottomLocation(UE::Math::TVector<double>* result) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*>(this, "APrimalAirShip.GetHullBottomLocation()", result); }
	void VesselDynamicsOnHit(AActor* OtherActor, UPrimitiveComponent* OtherComp, UE::Math::TVector<double>* NormalImpulse, const FHitResult& Hit) { if (!NormalImpulse) throw std::invalid_argument("Null native value parameter"); return NativeCall<void, AActor *, UPrimitiveComponent *, UE :: Math :: TVector < double >, const FHitResult &>(this, "APrimalAirShip.VesselDynamicsOnHit(AActor*,UPrimitiveComponent*,UE::Math::TVector<double>,FHitResult&)", OtherActor, OtherComp, *NormalImpulse, Hit); }
	bool GetAnchorGroundDistance(float& OutDistance) { return NativeCall<bool, float&>(this, "APrimalAirShip.GetAnchorGroundDistance(float&)", OutDistance); }
	void UpdateAnchorDescentTracking(const UE::Math::TVector<double>& Velocity) { NativeCall<void, const UE::Math::TVector<double>&>(this, "APrimalAirShip.UpdateAnchorDescentTracking(UE::Math::TVector<double>&)", Velocity); }
};
