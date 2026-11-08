#pragma once
#include "BulkForward.h"
#include "UPawnMovementComponent.h"

struct UChaosVehicleMovementComponent : public UPawnMovementComponent
{
public:
	UChaosVehicleMovementComponent() = delete;
	~UChaosVehicleMovementComponent() = delete;
	UChaosVehicleMovementComponent(const UChaosVehicleMovementComponent&) = delete;
	UChaosVehicleMovementComponent& operator=(const UChaosVehicleMovementComponent&) = delete;
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UChaosVehicleMovementComponent"); }

	float& MassField() { return *GetNativePointerField<float*>(this, "UChaosVehicleMovementComponent.Mass"); }
	bool& bEnableCenterOfMassOverrideField() { return *GetNativePointerField<bool*>(this, "UChaosVehicleMovementComponent.bEnableCenterOfMassOverride"); }
	UE::Math::TVector<double>& CenterOfMassOverrideField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "UChaosVehicleMovementComponent.CenterOfMassOverride"); }
	UE::Math::TVector<double>& CenterOfMassOffsetField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "UChaosVehicleMovementComponent.CenterOfMassOffset"); }
	float& ChassisWidthField() { return *GetNativePointerField<float*>(this, "UChaosVehicleMovementComponent.ChassisWidth"); }
	float& ChassisHeightField() { return *GetNativePointerField<float*>(this, "UChaosVehicleMovementComponent.ChassisHeight"); }
	float& DragCoefficientField() { return *GetNativePointerField<float*>(this, "UChaosVehicleMovementComponent.DragCoefficient"); }
	float& DownforceCoefficientField() { return *GetNativePointerField<float*>(this, "UChaosVehicleMovementComponent.DownforceCoefficient"); }
	float& DragAreaField() { return *GetNativePointerField<float*>(this, "UChaosVehicleMovementComponent.DragArea"); }
	float& DebugDragMagnitudeField() { return *GetNativePointerField<float*>(this, "UChaosVehicleMovementComponent.DebugDragMagnitude"); }
	UE::Math::TVector<double>& InertiaTensorScaleField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "UChaosVehicleMovementComponent.InertiaTensorScale"); }
	float& SleepThresholdField() { return *GetNativePointerField<float*>(this, "UChaosVehicleMovementComponent.SleepThreshold"); }
	float& SleepSlopeLimitField() { return *GetNativePointerField<float*>(this, "UChaosVehicleMovementComponent.SleepSlopeLimit"); }
	FVehicleTorqueControlConfig& TorqueControlField() { return *GetNativePointerField<FVehicleTorqueControlConfig*>(this, "UChaosVehicleMovementComponent.TorqueControl"); }
	FVehicleTargetRotationControlConfig& TargetRotationControlField() { return *GetNativePointerField<FVehicleTargetRotationControlConfig*>(this, "UChaosVehicleMovementComponent.TargetRotationControl"); }
	FVehicleStabilizeControlConfig& StabilizeControlField() { return *GetNativePointerField<FVehicleStabilizeControlConfig*>(this, "UChaosVehicleMovementComponent.StabilizeControl"); }
	unsigned int& VehicleSetupTagField() { return *GetNativePointerField<unsigned int*>(this, "UChaosVehicleMovementComponent.VehicleSetupTag"); }
	FChaosVehicleAsyncInput*& CurAsyncInputField() { return *GetNativePointerField<FChaosVehicleAsyncInput**>(this, "UChaosVehicleMovementComponent.CurAsyncInput"); }
	FChaosVehicleAsyncOutput*& CurAsyncOutputField() { return *GetNativePointerField<FChaosVehicleAsyncOutput**>(this, "UChaosVehicleMovementComponent.CurAsyncOutput"); }
	FChaosVehicleAsyncOutput*& NextAsyncOutputField() { return *GetNativePointerField<FChaosVehicleAsyncOutput**>(this, "UChaosVehicleMovementComponent.NextAsyncOutput"); }
	float& OutputInterpAlphaField() { return *GetNativePointerField<float*>(this, "UChaosVehicleMovementComponent.OutputInterpAlpha"); }
	FVehicleReplicatedState& ReplicatedStateField() { return *GetNativePointerField<FVehicleReplicatedState*>(this, "UChaosVehicleMovementComponent.ReplicatedState"); }
	float& AngErrorAccumulatorField() { return *GetNativePointerField<float*>(this, "UChaosVehicleMovementComponent.AngErrorAccumulator"); }
	float& RawSteeringInputField() { return *GetNativePointerField<float*>(this, "UChaosVehicleMovementComponent.RawSteeringInput"); }
	float& RawThrottleInputField() { return *GetNativePointerField<float*>(this, "UChaosVehicleMovementComponent.RawThrottleInput"); }
	float& RawThrustersInputField() { return *GetNativePointerField<float*>(this, "UChaosVehicleMovementComponent.RawThrustersInput"); }
	float& RawBrakeInputField() { return *GetNativePointerField<float*>(this, "UChaosVehicleMovementComponent.RawBrakeInput"); }
	float& RawPitchInputField() { return *GetNativePointerField<float*>(this, "UChaosVehicleMovementComponent.RawPitchInput"); }
	float& RawRollInputField() { return *GetNativePointerField<float*>(this, "UChaosVehicleMovementComponent.RawRollInput"); }
	float& RawYawInputField() { return *GetNativePointerField<float*>(this, "UChaosVehicleMovementComponent.RawYawInput"); }
	float& SteeringInputField() { return *GetNativePointerField<float*>(this, "UChaosVehicleMovementComponent.SteeringInput"); }
	float& ThrottleInputField() { return *GetNativePointerField<float*>(this, "UChaosVehicleMovementComponent.ThrottleInput"); }
	bool& UseThrustersInputField() { return *GetNativePointerField<bool*>(this, "UChaosVehicleMovementComponent.UseThrustersInput"); }
	float& ThrustersInputField() { return *GetNativePointerField<float*>(this, "UChaosVehicleMovementComponent.ThrustersInput"); }
	float& BrakeInputField() { return *GetNativePointerField<float*>(this, "UChaosVehicleMovementComponent.BrakeInput"); }
	float& PitchInputField() { return *GetNativePointerField<float*>(this, "UChaosVehicleMovementComponent.PitchInput"); }
	float& RollInputField() { return *GetNativePointerField<float*>(this, "UChaosVehicleMovementComponent.RollInput"); }
	float& YawInputField() { return *GetNativePointerField<float*>(this, "UChaosVehicleMovementComponent.YawInput"); }
	float& HandbrakeInputField() { return *GetNativePointerField<float*>(this, "UChaosVehicleMovementComponent.HandbrakeInput"); }
	bool& bRequiresControllerForInputsField() { return *GetNativePointerField<bool*>(this, "UChaosVehicleMovementComponent.bRequiresControllerForInputs"); }
	float& IdleBrakeInputField() { return *GetNativePointerField<float*>(this, "UChaosVehicleMovementComponent.IdleBrakeInput"); }
	float& StopThresholdField() { return *GetNativePointerField<float*>(this, "UChaosVehicleMovementComponent.StopThreshold"); }
	float& WrongDirectionThresholdField() { return *GetNativePointerField<float*>(this, "UChaosVehicleMovementComponent.WrongDirectionThreshold"); }
	FVehicleInputRateConfig& ThrottleInputRateField() { return *GetNativePointerField<FVehicleInputRateConfig*>(this, "UChaosVehicleMovementComponent.ThrottleInputRate"); }
	bool& bUseThrustersInputField() { return *GetNativePointerField<bool*>(this, "UChaosVehicleMovementComponent.bUseThrustersInput"); }
	FVehicleInputRateConfig& ThrustersInputRateField() { return *GetNativePointerField<FVehicleInputRateConfig*>(this, "UChaosVehicleMovementComponent.ThrustersInputRate"); }
	FVehicleInputRateConfig& BrakeInputRateField() { return *GetNativePointerField<FVehicleInputRateConfig*>(this, "UChaosVehicleMovementComponent.BrakeInputRate"); }
	FVehicleInputRateConfig& SteeringInputRateField() { return *GetNativePointerField<FVehicleInputRateConfig*>(this, "UChaosVehicleMovementComponent.SteeringInputRate"); }
	FVehicleInputRateConfig& HandbrakeInputRateField() { return *GetNativePointerField<FVehicleInputRateConfig*>(this, "UChaosVehicleMovementComponent.HandbrakeInputRate"); }
	FVehicleInputRateConfig& PitchInputRateField() { return *GetNativePointerField<FVehicleInputRateConfig*>(this, "UChaosVehicleMovementComponent.PitchInputRate"); }
	FVehicleInputRateConfig& RollInputRateField() { return *GetNativePointerField<FVehicleInputRateConfig*>(this, "UChaosVehicleMovementComponent.RollInputRate"); }
	FVehicleInputRateConfig& YawInputRateField() { return *GetNativePointerField<FVehicleInputRateConfig*>(this, "UChaosVehicleMovementComponent.YawInputRate"); }
	FVehicleState& VehicleStateField() { return *GetNativePointerField<FVehicleState*>(this, "UChaosVehicleMovementComponent.VehicleState"); }
	FDelegateHandle& MeshOnPhysicsStateChangeHandleField() { return *GetNativePointerField<FDelegateHandle*>(this, "UChaosVehicleMovementComponent.MeshOnPhysicsStateChangeHandle"); }
	int& TargetGearField() { return *GetNativePointerField<int*>(this, "UChaosVehicleMovementComponent.TargetGear"); }
	float& PrevSteeringInputField() { return *GetNativePointerField<float*>(this, "UChaosVehicleMovementComponent.PrevSteeringInput"); }
	float& PrevReplicatedSteeringInputField() { return *GetNativePointerField<float*>(this, "UChaosVehicleMovementComponent.PrevReplicatedSteeringInput"); }
	UE::Math::TVector<double>& ExtraAerialGravityField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "UChaosVehicleMovementComponent.ExtraAerialGravity"); }
	UE::Math::TVector<double>& ExtraGroundGravityField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "UChaosVehicleMovementComponent.ExtraGroundGravity"); }
	bool& bUsingNetworkPhysicsPredictionField() { return *GetNativePointerField<bool*>(this, "UChaosVehicleMovementComponent.bUsingNetworkPhysicsPrediction"); }
	BitFieldValue<bool, unsigned char> bReverseAsBrake() { return { this, "UChaosVehicleMovementComponent.bReverseAsBrake"}; }
	BitFieldValue<bool, unsigned char> bThrottleAsBrake() { return { this, "UChaosVehicleMovementComponent.bThrottleAsBrake"}; }
	BitFieldValue<bool, unsigned char> bRawHandbrakeInput() { return { this, "UChaosVehicleMovementComponent.bRawHandbrakeInput"}; }
	BitFieldValue<bool, unsigned char> bRawGearUpInput() { return { this, "UChaosVehicleMovementComponent.bRawGearUpInput"}; }
	BitFieldValue<bool, unsigned char> bRawGearDownInput() { return { this, "UChaosVehicleMovementComponent.bRawGearDownInput"}; }
	BitFieldValue<bool, unsigned __int32> bWasAvoidanceUpdated() { return { this, "UChaosVehicleMovementComponent.bWasAvoidanceUpdated"}; }
	BitFieldValue<bool, unsigned char> bParkEnabled() { return { this, "UChaosVehicleMovementComponent.bParkEnabled"}; }
	BitFieldValue<bool, unsigned char> bUseEngineHandbrake() { return { this, "UChaosVehicleMovementComponent.bUseEngineHandbrake"}; }
	void ServerUpdateState_Implementation(float InSteeringInput, float InThrottleInput, float InThrustersInput, float InBrakeInput, float InHandbrakeInput, int InCurrentGear, float InRollInput, float InPitchInput, float InYawInput) { NativeCall<void, float, float, float, float, float, int, float, float, float>(this, "UChaosVehicleMovementComponent.ServerUpdateState_Implementation(float,float,float,float,float,int,float,float,float)", InSteeringInput, InThrottleInput, InThrustersInput, InBrakeInput, InHandbrakeInput, InCurrentGear, InRollInput, InPitchInput, InYawInput); }
	void PreTickGT(float DeltaTime) { NativeCall<void, float>(this, "UChaosVehicleMovementComponent.PreTickGT(float)", DeltaTime); }
	void SetCurrentAsyncInputOutputInternal(FChaosVehicleAsyncInput* CurInput, int InputIdx, FChaosVehicleManagerAsyncOutput* CurOutput, FChaosVehicleManagerAsyncOutput* NextOutput, float Alpha, int VehicleManagerTimestamp) { NativeCall<void, FChaosVehicleAsyncInput*, int, FChaosVehicleManagerAsyncOutput*, FChaosVehicleManagerAsyncOutput*, float, int>(this, "UChaosVehicleMovementComponent.SetCurrentAsyncInputOutputInternal(FChaosVehicleAsyncInput*,int,FChaosVehicleManagerAsyncOutput*,FChaosVehicleManagerAsyncOutput*,float,int)", CurInput, InputIdx, CurOutput, NextOutput, Alpha, VehicleManagerTimestamp); }
	void ComputeConstants() { NativeCall<void>(this, "UChaosVehicleMovementComponent.ComputeConstants()"); }
	void StopMovementImmediately() { NativeCall<void>(this, "UChaosVehicleMovementComponent.StopMovementImmediately()"); }
	void OnCreatePhysicsState() { NativeCall<void>(this, "UChaosVehicleMovementComponent.OnCreatePhysicsState()"); }
	void ParallelUpdate(float DeltaSeconds) { NativeCall<void, float>(this, "UChaosVehicleMovementComponent.ParallelUpdate(float)", DeltaSeconds); }
	void SetSleeping(bool bEnableSleep) { NativeCall<void, bool>(this, "UChaosVehicleMovementComponent.SetSleeping(bool)", bEnableSleep); }
	float GetForwardSpeed() { return NativeCall<float>(this, "UChaosVehicleMovementComponent.GetForwardSpeed()"); }
	void Update(float DeltaTime) { NativeCall<void, float>(this, "UChaosVehicleMovementComponent.Update(float)", DeltaTime); }
	bool CanCreateVehicle() { return NativeCall<bool>(this, "UChaosVehicleMovementComponent.CanCreateVehicle()"); }
	void CreateVehicle() { NativeCall<void>(this, "UChaosVehicleMovementComponent.CreateVehicle()"); }
	void ShowDebugInfo(AHUD* HUD, UCanvas* Canvas, const FDebugDisplayInfo& DisplayInfo, float& YL, float& YPos) { NativeCall<void, AHUD*, UCanvas*, const FDebugDisplayInfo&, float&, float&>(this, "UChaosVehicleMovementComponent.ShowDebugInfo(AHUD*,UCanvas*,FDebugDisplayInfo&,float&,float&)", HUD, Canvas, DisplayInfo, YL, YPos); }
	static UClass* StaticClass() { return AsaApi::ResolveClass("UChaosVehicleMovementComponent"); }
	void SetUpdatedComponent(USceneComponent* NewUpdatedComponent) { NativeCall<void, USceneComponent*>(this, "UChaosVehicleMovementComponent.SetUpdatedComponent(USceneComponent*)", NewUpdatedComponent); }
	AController* GetController() { return NativeCall<AController*>(this, "UChaosVehicleMovementComponent.GetController()"); }
	void SetTargetGear(int GearNum, bool bImmediate) { NativeCall<void, int, bool>(this, "UChaosVehicleMovementComponent.SetTargetGear(int,bool)", GearNum, bImmediate); }
	void SetupVehicleMass() { NativeCall<void>(this, "UChaosVehicleMovementComponent.SetupVehicleMass()"); }
	void CalcThrottleBrakeInput(float& ThrottleOut, float& BrakeOut) { NativeCall<void, float&, float&>(this, "UChaosVehicleMovementComponent.CalcThrottleBrakeInput(float&,float&)", ThrottleOut, BrakeOut); }
	UE::Math::TVector<double>* LocateBoneOffset(UE::Math::TVector<double>* result, FName InBoneName, const UE::Math::TVector<double>& InExtraOffset) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*, FName, const UE::Math::TVector<double>&>(this, "UChaosVehicleMovementComponent.LocateBoneOffset(FName,UE::Math::TVector<double>&)", result, InBoneName, InExtraOffset); }
	void ResetVehicleState() { NativeCall<void>(this, "UChaosVehicleMovementComponent.ResetVehicleState()"); }
	void OnDestroyPhysicsState() { NativeCall<void>(this, "UChaosVehicleMovementComponent.OnDestroyPhysicsState()"); }
	bool HasValidPhysicsState() { return NativeCall<bool>(this, "UChaosVehicleMovementComponent.HasValidPhysicsState()"); }
	void UpdateState(float DeltaTime) { NativeCall<void, float>(this, "UChaosVehicleMovementComponent.UpdateState(float)", DeltaTime); }
	void ClearRawInput() { NativeCall<void>(this, "UChaosVehicleMovementComponent.ClearRawInput()"); }
	void Serialize(FArchive& Ar) { NativeCall<void, FArchive&>(this, "UChaosVehicleMovementComponent.Serialize(FArchive&)", Ar); }
	void SetOverrideController(AController* InOverrideController) { NativeCall<void, AController*>(this, "UChaosVehicleMovementComponent.SetOverrideController(AController*)", InOverrideController); }
	bool ServerUpdateState_Validate(float InSteeringInput, float InThrottleInput, float InThrustersInput, float InBrakeInput, float InHandbrakeInput, int InCurrentGear, float InRollInput, float InPitchInput, float InYawInput) { return NativeCall<bool, float, float, float, float, float, int, float, float, float>(this, "UChaosVehicleMovementComponent.ServerUpdateState_Validate(float,float,float,float,float,int,float,float,float)", InSteeringInput, InThrottleInput, InThrustersInput, InBrakeInput, InHandbrakeInput, InCurrentGear, InRollInput, InPitchInput, InYawInput); }
	void UpdateSimulation_OnNonOwningClients(float DeltaTime, float LastReplicatedSteeringInput, float Speed, UWorld* World_Ref) { NativeCall<void, float, float, float, UWorld*>(this, "UChaosVehicleMovementComponent.UpdateSimulation_OnNonOwningClients(float,float,float,UWorld*)", DeltaTime, LastReplicatedSteeringInput, Speed, World_Ref); }
	void SetThrottleInput(float Throttle) { NativeCall<void, float>(this, "UChaosVehicleMovementComponent.SetThrottleInput(float)", Throttle); }
	void ServerUpdateState(float InSteeringInput, float InThrottleInput, float InThrustersInput, float InBrakeInput, float InHandbrakeInput, int InCurrentGear, float InRollInput, float InPitchInput, float InYawInput) { NativeCall<void, float, float, float, float, float, int, float, float, float>(this, "UChaosVehicleMovementComponent.ServerUpdateState(float,float,float,float,float,int,float,float,float)", InSteeringInput, InThrottleInput, InThrustersInput, InBrakeInput, InHandbrakeInput, InCurrentGear, InRollInput, InPitchInput, InYawInput); }
	void DrawDebug(UCanvas* Canvas, float& YL, float& YPos) { NativeCall<void, UCanvas*, float&, float&>(this, "UChaosVehicleMovementComponent.DrawDebug(UCanvas*,float&,float&)", Canvas, YL, YPos); }
	float CalcSteeringInput() { return NativeCall<float>(this, "UChaosVehicleMovementComponent.CalcSteeringInput()"); }
	void PostSetupVehicle() { NativeCall<void>(this, "UChaosVehicleMovementComponent.PostSetupVehicle()"); }
	void SetSteeringInput(float Steering) { NativeCall<void, float>(this, "UChaosVehicleMovementComponent.SetSteeringInput(float)", Steering); }
	bool ShouldCreatePhysicsState() { return NativeCall<bool>(this, "UChaosVehicleMovementComponent.ShouldCreatePhysicsState()"); }
	void FixupSkeletalMesh() { NativeCall<void>(this, "UChaosVehicleMovementComponent.FixupSkeletalMesh()"); }
	void SetBrakeInput(float Brake) { NativeCall<void, float>(this, "UChaosVehicleMovementComponent.SetBrakeInput(float)", Brake); }
	float GetSuspensionOffset(int WheelIndex) { return NativeCall<float, int>(this, "UChaosVehicleMovementComponent.GetSuspensionOffset(int)", WheelIndex); }
	void ClearInput() { NativeCall<void>(this, "UChaosVehicleMovementComponent.ClearInput()"); }
	void ProcessSleeping(const FControlInputs& ControlInputs) { NativeCall<void, const FControlInputs&>(this, "UChaosVehicleMovementComponent.ProcessSleeping(FControlInputs&)", ControlInputs); }
};
