#pragma once
#include "BulkForward.h"
#include "USpectatorPawnMovement.h"

struct UHoverDroneMovementComponent : public USpectatorPawnMovement
{
public:
	UHoverDroneMovementComponent() = delete;
	~UHoverDroneMovementComponent() = delete;
	UHoverDroneMovementComponent(const UHoverDroneMovementComponent&) = delete;
	UHoverDroneMovementComponent& operator=(const UHoverDroneMovementComponent&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UHoverDroneMovementComponent"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UHoverDroneMovementComponent"); }

	UE::Math::TVector<double>& MeasuredVelocityField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "UHoverDroneMovementComponent.MeasuredVelocity"); }
	int& MaxAllowedSpeedIndexField() { return *GetNativePointerField<int*>(this, "UHoverDroneMovementComponent.MaxAllowedSpeedIndex"); }
	FMaxAllowedSpeedUpdated& MaxAllowedSpeedUpdatedField() { return *GetNativePointerField<FMaxAllowedSpeedUpdated*>(this, "UHoverDroneMovementComponent.MaxAllowedSpeedUpdated"); }
	UE::Math::TRotator<double>& RotationInputField() { return *GetNativePointerField<UE::Math::TRotator<double>*>(this, "UHoverDroneMovementComponent.RotationInput"); }
	UE::Math::TRotator<double>& RotVelocityField() { return *GetNativePointerField<UE::Math::TRotator<double>*>(this, "UHoverDroneMovementComponent.RotVelocity"); }
	UE::Math::TRotator<double>& DirectRotationInputField() { return *GetNativePointerField<UE::Math::TRotator<double>*>(this, "UHoverDroneMovementComponent.DirectRotationInput"); }
	float& DirectRotationInputYawScaleField() { return *GetNativePointerField<float*>(this, "UHoverDroneMovementComponent.DirectRotationInputYawScale"); }
	float& DirectRotationInputPitchScaleField() { return *GetNativePointerField<float*>(this, "UHoverDroneMovementComponent.DirectRotationInputPitchScale"); }
	UE::Math::TRotator<double>& DirectRotationInputGoalRotationField() { return *GetNativePointerField<UE::Math::TRotator<double>*>(this, "UHoverDroneMovementComponent.DirectRotationInputGoalRotation"); }
	float& DirectRotationInputInterpSpeedField() { return *GetNativePointerField<float*>(this, "UHoverDroneMovementComponent.DirectRotationInputInterpSpeed"); }
	bool& bUseFOVScalingField() { return *GetNativePointerField<bool*>(this, "UHoverDroneMovementComponent.bUseFOVScaling"); }
	UE::Math::TVector2<double>& CameraFovRangeField() { return *GetNativePointerField<UE::Math::TVector2<double>*>(this, "UHoverDroneMovementComponent.CameraFovRange"); }
	UE::Math::TVector2<double>& InputFovScaleRangeField() { return *GetNativePointerField<UE::Math::TVector2<double>*>(this, "UHoverDroneMovementComponent.InputFovScaleRange"); }
	float& RotAccelerationField() { return *GetNativePointerField<float*>(this, "UHoverDroneMovementComponent.RotAcceleration"); }
	float& RotDecelerationField() { return *GetNativePointerField<float*>(this, "UHoverDroneMovementComponent.RotDeceleration"); }
	float& MaxPitchRotSpeedField() { return *GetNativePointerField<float*>(this, "UHoverDroneMovementComponent.MaxPitchRotSpeed"); }
	float& MaxYawRotSpeedField() { return *GetNativePointerField<float*>(this, "UHoverDroneMovementComponent.MaxYawRotSpeed"); }
	float& FullAirFrictionVelocityField() { return *GetNativePointerField<float*>(this, "UHoverDroneMovementComponent.FullAirFrictionVelocity"); }
	UE::Math::TVector<double>& MovementAccelFactorField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "UHoverDroneMovementComponent.MovementAccelFactor"); }
	FAccelerationInterpolatorVector& LinearVelInterpolatorField() { return *GetNativePointerField<FAccelerationInterpolatorVector*>(this, "UHoverDroneMovementComponent.LinearVelInterpolator"); }
	FAccelerationInterpolatorFloat& YawVelInterpolatorField() { return *GetNativePointerField<FAccelerationInterpolatorFloat*>(this, "UHoverDroneMovementComponent.YawVelInterpolator"); }
	FAccelerationInterpolatorFloat& PitchVelInterpolatorField() { return *GetNativePointerField<FAccelerationInterpolatorFloat*>(this, "UHoverDroneMovementComponent.PitchVelInterpolator"); }
	FIIRInterpolatorVector& LinearVelInterpolator_IIRField() { return *GetNativePointerField<FIIRInterpolatorVector*>(this, "UHoverDroneMovementComponent.LinearVelInterpolator_IIR"); }
	FIIRInterpolatorFloat& YawVelInterpolator_IIRField() { return *GetNativePointerField<FIIRInterpolatorFloat*>(this, "UHoverDroneMovementComponent.YawVelInterpolator_IIR"); }
	FIIRInterpolatorFloat& PitchVelInterpolator_IIRField() { return *GetNativePointerField<FIIRInterpolatorFloat*>(this, "UHoverDroneMovementComponent.PitchVelInterpolator_IIR"); }
	float& Acceleration_NewModelField() { return *GetNativePointerField<float*>(this, "UHoverDroneMovementComponent.Acceleration_NewModel"); }
	float& Deceleration_NewModelField() { return *GetNativePointerField<float*>(this, "UHoverDroneMovementComponent.Deceleration_NewModel"); }
	float& MaxSpeed_NewModelField() { return *GetNativePointerField<float*>(this, "UHoverDroneMovementComponent.MaxSpeed_NewModel"); }
	float& MaxYawRotSpeed_NewModelField() { return *GetNativePointerField<float*>(this, "UHoverDroneMovementComponent.MaxYawRotSpeed_NewModel"); }
	float& MaxPitchRotSpeed_NewModelField() { return *GetNativePointerField<float*>(this, "UHoverDroneMovementComponent.MaxPitchRotSpeed_NewModel"); }
	float& RotAcceleration_NewModelField() { return *GetNativePointerField<float*>(this, "UHoverDroneMovementComponent.RotAcceleration_NewModel"); }
	float& RotDeceleration_NewModelField() { return *GetNativePointerField<float*>(this, "UHoverDroneMovementComponent.RotDeceleration_NewModel"); }
	bool& bUseNewDroneFlightModelField() { return *GetNativePointerField<bool*>(this, "UHoverDroneMovementComponent.bUseNewDroneFlightModel"); }
	float& MinAirFrictionField() { return *GetNativePointerField<float*>(this, "UHoverDroneMovementComponent.MinAirFriction"); }
	int& DroneSpeedParamIndexField() { return *GetNativePointerField<int*>(this, "UHoverDroneMovementComponent.DroneSpeedParamIndex"); }
	float& MaxSimulationTimestepField() { return *GetNativePointerField<float*>(this, "UHoverDroneMovementComponent.MaxSimulationTimestep"); }
	float& MinSpeedHeightField() { return *GetNativePointerField<float*>(this, "UHoverDroneMovementComponent.MinSpeedHeight"); }
	float& MaxSpeedHeightField() { return *GetNativePointerField<float*>(this, "UHoverDroneMovementComponent.MaxSpeedHeight"); }
	float& MaxSpeedHeightMultiplierField() { return *GetNativePointerField<float*>(this, "UHoverDroneMovementComponent.MaxSpeedHeightMultiplier"); }
	float& MinPitchField() { return *GetNativePointerField<float*>(this, "UHoverDroneMovementComponent.MinPitch"); }
	float& MaxPitchField() { return *GetNativePointerField<float*>(this, "UHoverDroneMovementComponent.MaxPitch"); }
	float& CurrentAltitudeField() { return *GetNativePointerField<float*>(this, "UHoverDroneMovementComponent.CurrentAltitude"); }
	float& DroneMaxAltitudeField() { return *GetNativePointerField<float*>(this, "UHoverDroneMovementComponent.DroneMaxAltitude"); }
	float& DesiredHoverHeightField() { return *GetNativePointerField<float*>(this, "UHoverDroneMovementComponent.DesiredHoverHeight"); }
	float& MinHoverHeightField() { return *GetNativePointerField<float*>(this, "UHoverDroneMovementComponent.MinHoverHeight"); }
	float& MaintainHoverHeightToleranceField() { return *GetNativePointerField<float*>(this, "UHoverDroneMovementComponent.MaintainHoverHeightTolerance"); }
	float& MaintainHoverHeightPredictionTimeField() { return *GetNativePointerField<float*>(this, "UHoverDroneMovementComponent.MaintainHoverHeightPredictionTime"); }
	UE::Math::TVector<double>& ForcedFacingLocationField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "UHoverDroneMovementComponent.ForcedFacingLocation"); }
	float& ForceFacingInterpInPctField() { return *GetNativePointerField<float*>(this, "UHoverDroneMovementComponent.ForceFacingInterpInPct"); }
	UE::Math::TVector<double>& LastFollowedPlayerFacingLocField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "UHoverDroneMovementComponent.LastFollowedPlayerFacingLoc"); }
	float& ForceFacingInterpInTimeField() { return *GetNativePointerField<float*>(this, "UHoverDroneMovementComponent.ForceFacingInterpInTime"); }
	UE::Math::TVector<double>& FollowedActorLastPositionField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "UHoverDroneMovementComponent.FollowedActorLastPosition"); }
	UE::Math::TVector<double>& FollowedActorSmoothedPositionField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "UHoverDroneMovementComponent.FollowedActorSmoothedPosition"); }
	float& FollowedActorPositionInterpSpeedField() { return *GetNativePointerField<float*>(this, "UHoverDroneMovementComponent.FollowedActorPositionInterpSpeed"); }
	UE::Math::TVector<double>& ForceFacingPlayerLocalOffsetField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "UHoverDroneMovementComponent.ForceFacingPlayerLocalOffset"); }
	float& CurrentFOVField() { return *GetNativePointerField<float*>(this, "UHoverDroneMovementComponent.CurrentFOV"); }
	UE::Math::TVector<double>& PendingVelocityToAddField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "UHoverDroneMovementComponent.PendingVelocityToAdd"); }
	UE::Math::TRotator<double>& PendingRotVelocityToAddField() { return *GetNativePointerField<UE::Math::TRotator<double>*>(this, "UHoverDroneMovementComponent.PendingRotVelocityToAdd"); }
	UE::Math::TRotator<double>& LastForceFacingRotVelocityField() { return *GetNativePointerField<UE::Math::TRotator<double>*>(this, "UHoverDroneMovementComponent.LastForceFacingRotVelocity"); }
	BitFieldValue<bool, unsigned char> bMaintainHoverHeight() { return { this, "UHoverDroneMovementComponent.bMaintainHoverHeight"}; }
	BitFieldValue<bool, unsigned __int32> bSimulateRotation() { return { this, "UHoverDroneMovementComponent.bSimulateRotation"}; }
	BitFieldValue<bool, unsigned __int32> bIgnoreDroneLimiters() { return { this, "UHoverDroneMovementComponent.bIgnoreDroneLimiters"}; }
	BitFieldValue<bool, unsigned __int32> bForceFacingLocation() { return { this, "UHoverDroneMovementComponent.bForceFacingLocation"}; }
	BitFieldValue<bool, unsigned __int32> bTurbo() { return { this, "UHoverDroneMovementComponent.bTurbo"}; }
	BitFieldValue<bool, unsigned __int32> bForceFacingFollowedPlayer() { return { this, "UHoverDroneMovementComponent.bForceFacingFollowedPlayer"}; }
	BitFieldValue<bool, unsigned __int32> bTetherToFollowedPlayer() { return { this, "UHoverDroneMovementComponent.bTetherToFollowedPlayer"}; }
	BitFieldValue<bool, unsigned __int32> bResetInterpolation() { return { this, "UHoverDroneMovementComponent.bResetInterpolation"}; }
	void BeginPlay() { NativeCall<void>(this, "UHoverDroneMovementComponent.BeginPlay()"); }
	void OnRegister() { NativeCall<void>(this, "UHoverDroneMovementComponent.OnRegister()"); }
	void ApplyControlInputToRotation_NewModel(float DeltaTime) { NativeCall<void, float>(this, "UHoverDroneMovementComponent.ApplyControlInputToRotation_NewModel(float)", DeltaTime); }
	void OnTeleported() { NativeCall<void>(this, "UHoverDroneMovementComponent.OnTeleported()"); }
	void ApplyControlInputToVelocity(float DeltaTime) { NativeCall<void, float>(this, "UHoverDroneMovementComponent.ApplyControlInputToVelocity(float)", DeltaTime); }
	void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) { NativeCall<void, float, ELevelTick, FActorComponentTickFunction*>(this, "UHoverDroneMovementComponent.TickComponent(float,ELevelTick,FActorComponentTickFunction*)", DeltaTime, TickType, ThisTickFunction); }
	void InitializeComponent() { NativeCall<void>(this, "UHoverDroneMovementComponent.InitializeComponent()"); }
	void ApplyControlInputToRotation(float DeltaTime) { NativeCall<void, float>(this, "UHoverDroneMovementComponent.ApplyControlInputToRotation(float)", DeltaTime); }
	void UpdateAutoHover() { NativeCall<void>(this, "UHoverDroneMovementComponent.UpdateAutoHover()"); }
	void Init() { NativeCall<void>(this, "UHoverDroneMovementComponent.Init()"); }
	void OnUnregister() { NativeCall<void>(this, "UHoverDroneMovementComponent.OnUnregister()"); }
	float MeasureAltitude(UE::Math::TVector<double>* Location) { if (!Location) throw std::invalid_argument("Null native value parameter"); return NativeCall<float, UE :: Math :: TVector < double >>(this, "UHoverDroneMovementComponent.MeasureAltitude(UE::Math::TVector<double>)", *Location); }
	float GetInputFOVScale() { return NativeCall<float>(this, "UHoverDroneMovementComponent.GetInputFOVScale()"); }
};
