#pragma once
#include "BulkForward.h"
#include "SparseForward.h"


struct APrimalWheeledVehicleCharacter : APrimalDinoCharacter
{
	// Fields

	//UPrimalWheeledVehicleDustType*& DustTypeField() { return *GetNativePointerField<UPrimalWheeledVehicleDustType**>(this, "APrimalWheeledVehicleCharacter.DustType"); }
	FieldArray<UParticleSystemComponent*, 4> DustPSCField() { return { this, "APrimalWheeledVehicleCharacter.DustPSC" }; }
	UAudioComponent*& EngineACField() { return *GetNativePointerField<UAudioComponent**>(this, "APrimalWheeledVehicleCharacter.EngineAC"); }
	UAudioComponent*& HonkACField() { return *GetNativePointerField<UAudioComponent**>(this, "APrimalWheeledVehicleCharacter.HonkAC"); }
	UAudioComponent*& SkidACField() { return *GetNativePointerField<UAudioComponent**>(this, "APrimalWheeledVehicleCharacter.SkidAC"); }
	
	
	
	
	
	
	
	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// float& LongSlipSkidThresholdField();
	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// float& LateralSlipSkidThresholdField();
	
	float& SkidStartTimeField() { return *GetNativePointerField<float*>(this, "APrimalWheeledVehicleCharacter.SkidStartTime"); }
	
	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// UParticleSystem*& DeathFXField();
	float& UpForceField() { return *GetNativePointerField<float*>(this, "APrimalWheeledVehicleCharacter.UpForce"); }
	float& BackForceField() { return *GetNativePointerField<float*>(this, "APrimalWheeledVehicleCharacter.BackForce"); }
	float& MinimumDamageSpeedField() { return *GetNativePointerField<float*>(this, "APrimalWheeledVehicleCharacter.MinimumDamageSpeed"); }
	long double& LastTimeTurnedInputField() { return *GetNativePointerField<long double*>(this, "APrimalWheeledVehicleCharacter.LastTimeTurnedInput"); }
	float& DefaultLinearDampingField() { return *GetNativePointerField<float*>(this, "APrimalWheeledVehicleCharacter.DefaultLinearDamping"); }
	float& DefaultAngularDampingField() { return *GetNativePointerField<float*>(this, "APrimalWheeledVehicleCharacter.DefaultAngularDamping"); }
	UE::Math::TVector<double>& CenterTraceLocationOffsetField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "APrimalWheeledVehicleCharacter.CenterTraceLocationOffset"); }

	// Bitfields

	// Functions

	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// static UClass* StaticClass();
	static UClass* StaticClass() { return AsaApi::ResolveClass("APrimalWheeledVehicleCharacter"); }
	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// static void StaticRegisterNativesAPrimalWheeledVehicleCharacter();
	void PostInitializeComponents() { NativeCall<void>(this, "APrimalWheeledVehicleCharacter.PostInitializeComponents()"); }
	void TurnInput(float Val) { NativeCall<void, float>(this, "APrimalWheeledVehicleCharacter.TurnInput(float)", Val); }
	void PawnClientRestart() { NativeCall<void>(this, "APrimalWheeledVehicleCharacter.PawnClientRestart()"); }
	void DestroyPlayerInputComponent() { NativeCall<void>(this, "APrimalWheeledVehicleCharacter.DestroyPlayerInputComponent()"); }
	void GetMultiUseEntries(APlayerController* ForPC, TArray<FMultiUseEntry, TSizedDefaultAllocator<32> >* MultiUseEntries, int hitBodyIndex) { NativeCall<void, APlayerController*, TArray<FMultiUseEntry, TSizedDefaultAllocator<32> >*, int>(this, "APrimalWheeledVehicleCharacter.GetMultiUseEntries(APlayerController*,TArray<FMultiUseEntry,TSizedDefaultAllocator<32>>&,int)", ForPC, MultiUseEntries, hitBodyIndex); }
	bool TryMultiUse(APlayerController* ForPC, int UseIndex, int hitBodyIndex) { return NativeCall<bool, APlayerController*, int, int>(this, "APrimalWheeledVehicleCharacter.TryMultiUse(APlayerController*,int,int)", ForPC, UseIndex, hitBodyIndex); }
	void ClientMultiUse(APlayerController* ForPC, int UseIndex, int hitBodyIndex) { NativeCall<void, APlayerController*, int, int>(this, "APrimalWheeledVehicleCharacter.ClientMultiUse(APlayerController*,int,int)", ForPC, UseIndex, hitBodyIndex); }
	void SetRider(AShooterCharacter* aRider) { NativeCall<void, AShooterCharacter*>(this, "APrimalWheeledVehicleCharacter.SetRider(AShooterCharacter*)", aRider); }
	void ClearRider(bool bFromRider, bool bCancelForceLand, bool SpawnDinoDefaultController, int OverrideUnboardDirection, bool bForceEvenIfBuffPreventsClear) { NativeCall<void, bool, bool, bool, int, bool>(this, "APrimalWheeledVehicleCharacter.ClearRider(bool,bool,bool,int,bool,bool)", bFromRider, bCancelForceLand, SpawnDinoDefaultController, OverrideUnboardDirection, bForceEvenIfBuffPreventsClear); }
	void Stasis() { NativeCall<void>(this, "APrimalWheeledVehicleCharacter.Stasis()"); }
	void PlayDying(float KillingDamage, const FDamageEvent* DamageEvent, APawn* InstigatingPawn, AActor* DamageCauser) { NativeCall<void, float, const FDamageEvent*, APawn*, AActor*>(this, "APrimalWheeledVehicleCharacter.PlayDying(float,FDamageEvent&,APawn*,AActor*)", KillingDamage, DamageEvent, InstigatingPawn, DamageCauser); }
	void DisplayDebug(UCanvas* Canvas, const FDebugDisplayInfo* DebugDisplay, float* YL, float* YPos) { NativeCall<void, UCanvas*, const FDebugDisplayInfo*, float*, float*>(this, "APrimalWheeledVehicleCharacter.DisplayDebug(UCanvas*,FDebugDisplayInfo&,float&,float&)", Canvas, DebugDisplay, YL, YPos); }
	void SetupPlayerInputComponent(UInputComponent* WithInputComponent) { NativeCall<void, UInputComponent*>(this, "APrimalWheeledVehicleCharacter.SetupPlayerInputComponent(UInputComponent*)", WithInputComponent); }
	void StartHonk() { NativeCall<void>(this, "APrimalWheeledVehicleCharacter.StartHonk()"); }
	void StopHonk() { NativeCall<void>(this, "APrimalWheeledVehicleCharacter.StopHonk()"); }
	void ServerHonk_Implementation(bool bEnable) { NativeCall<void, bool>(this, "APrimalWheeledVehicleCharacter.ServerHonk_Implementation(bool)", bEnable); }
	void NetHonk_Implementation(bool bEnable) { NativeCall<void, bool>(this, "APrimalWheeledVehicleCharacter.NetHonk_Implementation(bool)", bEnable); }
	void ReceiveHit(UPrimitiveComponent* MyComp, AActor* Other, UPrimitiveComponent* OtherComp, bool bSelfMoved, UE::Math::TVector<double>* HitLocation, UE::Math::TVector<double>* HitNormal, UE::Math::TVector<double>* NormalImpulse, const FHitResult* Hit) { NativeCall<void, UPrimitiveComponent*, AActor*, UPrimitiveComponent*, bool, UE::Math::TVector<double>*, UE::Math::TVector<double>*, UE::Math::TVector<double>*, const FHitResult*>(this, "APrimalWheeledVehicleCharacter.ReceiveHit(UPrimitiveComponent*,AActor*,UPrimitiveComponent*,bool,UE::Math::TVector<double>,UE::Math::TVector<double>,UE::Math::TVector<double>,FHitResult&)", MyComp, Other, OtherComp, bSelfMoved, HitLocation, HitNormal, NormalImpulse, Hit); }
	void GetCameraRelatedCollisionHeight(float* InCollisionHeight) { NativeCall<void, float*>(this, "APrimalWheeledVehicleCharacter.GetCameraRelatedCollisionHeight(float&)", InCollisionHeight); }
	void OverrideCameraSweepChannel(ECollisionChannel* InSweepChannel) { NativeCall<void, ECollisionChannel*>(this, "APrimalWheeledVehicleCharacter.OverrideCameraSweepChannel(ECollisionChannel&)", InSweepChannel); }
	FPrimalWheeledCharSparseClassData* GetPrimalWheeledCharSparseClassData(EGetSparseClassDataMethod GetMethod) const
	{
		return (FPrimalWheeledCharSparseClassData*)const_cast<APrimalWheeledVehicleCharacter*>(this)->ClassPrivateField()->GetSparseClassData(GetMethod);
	}

	double& NetworkTimeSecondsField() { return *GetNativePointerField<double*>(this, "APrimalWheeledVehicleCharacter.NetworkTimeSeconds"); }
	float& LocationDeltaSqField() { return *GetNativePointerField<float*>(this, "APrimalWheeledVehicleCharacter.LocationDeltaSq"); }
	double& LastSteeringInputTimeField() { return *GetNativePointerField<double*>(this, "APrimalWheeledVehicleCharacter.LastSteeringInputTime"); }
	double& LastManualCameraInputTimeField() { return *GetNativePointerField<double*>(this, "APrimalWheeledVehicleCharacter.LastManualCameraInputTime"); }
	double& LastTeleportTimeField() { return *GetNativePointerField<double*>(this, "APrimalWheeledVehicleCharacter.LastTeleportTime"); }
	double& LastThrottleInputTimeField() { return *GetNativePointerField<double*>(this, "APrimalWheeledVehicleCharacter.LastThrottleInputTime"); }
	double& LastThrottleReleaseTimeWhenNotUsingCameraSteeringField() { return *GetNativePointerField<double*>(this, "APrimalWheeledVehicleCharacter.LastThrottleReleaseTimeWhenNotUsingCameraSteering"); }
	double& LastThrottleInputAfterTimeoutTimeField() { return *GetNativePointerField<double*>(this, "APrimalWheeledVehicleCharacter.LastThrottleInputAfterTimeoutTime"); }
	double& LastRearModuleUseTimeField() { return *GetNativePointerField<double*>(this, "APrimalWheeledVehicleCharacter.LastRearModuleUseTime"); }
	double& LastOwningClientUpdateServerTimeField() { return *GetNativePointerField<double*>(this, "APrimalWheeledVehicleCharacter.LastOwningClientUpdateServerTime"); }
	unsigned __int64& LastFrameHadCollisionField() { return *GetNativePointerField<unsigned __int64*>(this, "APrimalWheeledVehicleCharacter.LastFrameHadCollision"); }
	float& RetainPlayerCameraRotationWhileMovingForField() { return *GetNativePointerField<float*>(this, "APrimalWheeledVehicleCharacter.RetainPlayerCameraRotationWhileMovingFor"); }
	float& CameraRotationInterpolationSpeedField() { return *GetNativePointerField<float*>(this, "APrimalWheeledVehicleCharacter.CameraRotationInterpolationSpeed"); }
	float& SteeringInputTimeoutField() { return *GetNativePointerField<float*>(this, "APrimalWheeledVehicleCharacter.SteeringInputTimeout"); }
	float& ForwardInputTimeoutField() { return *GetNativePointerField<float*>(this, "APrimalWheeledVehicleCharacter.ForwardInputTimeout"); }
	float& CurrentSteeringInputField() { return *GetNativePointerField<float*>(this, "APrimalWheeledVehicleCharacter.CurrentSteeringInput"); }
	float& TeleportCooldownField() { return *GetNativePointerField<float*>(this, "APrimalWheeledVehicleCharacter.TeleportCooldown"); }
	float& ManualCameraInputTimeoutField() { return *GetNativePointerField<float*>(this, "APrimalWheeledVehicleCharacter.ManualCameraInputTimeout"); }
	float& LastThrottleInputField() { return *GetNativePointerField<float*>(this, "APrimalWheeledVehicleCharacter.LastThrottleInput"); }
	float& SimpleMoverightSteerMultiplierField() { return *GetNativePointerField<float*>(this, "APrimalWheeledVehicleCharacter.SimpleMoverightSteerMultiplier"); }
	float& SteeringAssistIntensityField() { return *GetNativePointerField<float*>(this, "APrimalWheeledVehicleCharacter.SteeringAssistIntensity"); }
	float& AerialRotationAccelerationField() { return *GetNativePointerField<float*>(this, "APrimalWheeledVehicleCharacter.AerialRotationAcceleration"); }
	float& AerialRotationDragField() { return *GetNativePointerField<float*>(this, "APrimalWheeledVehicleCharacter.AerialRotationDrag"); }
	float& MaxAerialRotationSpeedField() { return *GetNativePointerField<float*>(this, "APrimalWheeledVehicleCharacter.MaxAerialRotationSpeed"); }
	float& CurrentRearModuleFuelField() { return *GetNativePointerField<float*>(this, "APrimalWheeledVehicleCharacter.CurrentRearModuleFuel"); }
	float& MaxRearModuleFuelField() { return *GetNativePointerField<float*>(this, "APrimalWheeledVehicleCharacter.MaxRearModuleFuel"); }
	float& RearModuleInitialCostField() { return *GetNativePointerField<float*>(this, "APrimalWheeledVehicleCharacter.RearModuleInitialCost"); }
	float& RearModuleContinuousCostField() { return *GetNativePointerField<float*>(this, "APrimalWheeledVehicleCharacter.RearModuleContinuousCost"); }
	float& RearModuleReleaseCostField() { return *GetNativePointerField<float*>(this, "APrimalWheeledVehicleCharacter.RearModuleReleaseCost"); }
	float& RearModuleRegenDelayField() { return *GetNativePointerField<float*>(this, "APrimalWheeledVehicleCharacter.RearModuleRegenDelay"); }
	float& RearModuleRegenRateField() { return *GetNativePointerField<float*>(this, "APrimalWheeledVehicleCharacter.RearModuleRegenRate"); }
	float& RearModuleMinimumFuelRequiredField() { return *GetNativePointerField<float*>(this, "APrimalWheeledVehicleCharacter.RearModuleMinimumFuelRequired"); }
	float& AnalogThrottleField() { return *GetNativePointerField<float*>(this, "APrimalWheeledVehicleCharacter.AnalogThrottle"); }
	float& AnalogBrakeField() { return *GetNativePointerField<float*>(this, "APrimalWheeledVehicleCharacter.AnalogBrake"); }
	bool& bAllowFlyingField() { return *GetNativePointerField<bool*>(this, "APrimalWheeledVehicleCharacter.bAllowFlying"); }
	float& RequiredGravityDecelerationField() { return *GetNativePointerField<float*>(this, "APrimalWheeledVehicleCharacter.RequiredGravityDeceleration"); }
	int& MaxFlyingFalsePositivesField() { return *GetNativePointerField<int*>(this, "APrimalWheeledVehicleCharacter.MaxFlyingFalsePositives"); }
	int& FlyingFalsePositiveCountField() { return *GetNativePointerField<int*>(this, "APrimalWheeledVehicleCharacter.FlyingFalsePositiveCount"); }
	double& LastTimeCheckedAntiFlyCheckField() { return *GetNativePointerField<double*>(this, "APrimalWheeledVehicleCharacter.LastTimeCheckedAntiFlyCheck"); }
	float& RearModuleAirborneHackCheckStartTimeField() { return *GetNativePointerField<float*>(this, "APrimalWheeledVehicleCharacter.RearModuleAirborneHackCheckStartTime"); }
	float& MaxRearModuleAirborneHackCheckTimeField() { return *GetNativePointerField<float*>(this, "APrimalWheeledVehicleCharacter.MaxRearModuleAirborneHackCheckTime"); }
	float& PredictedUpwardVelocityOverTimeField() { return *GetNativePointerField<float*>(this, "APrimalWheeledVehicleCharacter.PredictedUpwardVelocityOverTime"); }

	FPrimalWheeledCharSparseClassData* GetMutablePrimalWheeledCharSparseClassData() { return const_cast<FPrimalWheeledCharSparseClassData*>(GetPrimalWheeledCharSparseClassData(EGetSparseClassDataMethod::CreateIfNull)); }

	FOwningClientToServerMovementParams& LastOwningClientParamsField() { return *GetNativePointerField<FOwningClientToServerMovementParams*>(this, "APrimalWheeledVehicleCharacter.LastOwningClientParams"); }
	TArray<ECollisionEnabled::Type, TSizedDefaultAllocator<32> >& CachedCollisionStatesToRestoreField() { return *GetNativePointerField<TArray<ECollisionEnabled::Type, TSizedDefaultAllocator<32> >*>(this, "APrimalWheeledVehicleCharacter.CachedCollisionStatesToRestore"); }
	TArray<UActorComponent*, TSizedDefaultAllocator<32> >& CachedComponentsToRestoreCollisionStatesField() { return *GetNativePointerField<TArray<UActorComponent*, TSizedDefaultAllocator<32> >*>(this, "APrimalWheeledVehicleCharacter.CachedComponentsToRestoreCollisionStates"); }
	UE::Math::TVector<double>& LocationAtPrevFrameField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "APrimalWheeledVehicleCharacter.LocationAtPrevFrame"); }
	UE::Math::TVector<double>& LocalSpaceAerialRotationVelocityField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "APrimalWheeledVehicleCharacter.LocalSpaceAerialRotationVelocity"); }
	UE::Math::TVector<double>& DirectionLastLeftGround2DField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "APrimalWheeledVehicleCharacter.DirectionLastLeftGround2D"); }
	UE::Math::TVector<double>& LastFullyValidatedLocationField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "APrimalWheeledVehicleCharacter.LastFullyValidatedLocation"); }
	UE::Math::TRotator<double>& LastBaseRotationField() { return *GetNativePointerField<UE::Math::TRotator<double>*>(this, "APrimalWheeledVehicleCharacter.LastBaseRotation"); }
	FOnRearModAbilityEnded& OnRearModAbilityEndedField() { return *GetNativePointerField<FOnRearModAbilityEnded*>(this, "APrimalWheeledVehicleCharacter.OnRearModAbilityEnded"); }
	UChaosWheeledVehicleMovementComponent*& VehicleMovementField() { return *GetNativePointerField<UChaosWheeledVehicleMovementComponent**>(this, "APrimalWheeledVehicleCharacter.VehicleMovement"); }
	UE::Math::TVector<double>& LastValidatedVelocityField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "APrimalWheeledVehicleCharacter.LastValidatedVelocity"); }
	BitFieldValue<bool, unsigned char> bSkidding() { return { this, "APrimalWheeledVehicleCharacter.bSkidding"}; }
	BitFieldValue<bool, unsigned char> bTiresTouchingGround() { return { this, "APrimalWheeledVehicleCharacter.bTiresTouchingGround"}; }
	BitFieldValue<bool, unsigned char> bFollowCamera() { return { this, "APrimalWheeledVehicleCharacter.bFollowCamera"}; }
	BitFieldValue<bool, unsigned char> bEnableDebugSimulation() { return { this, "APrimalWheeledVehicleCharacter.bEnableDebugSimulation"}; }
	BitFieldValue<bool, unsigned char> bEnableDebugDraw() { return { this, "APrimalWheeledVehicleCharacter.bEnableDebugDraw"}; }
	BitFieldValue<bool, unsigned char> bHasReregisteredVehicleOnce() { return { this, "APrimalWheeledVehicleCharacter.bHasReregisteredVehicleOnce"}; }
	BitFieldValue<bool, unsigned char> bGamepadThrottleActive() { return { this, "APrimalWheeledVehicleCharacter.bGamepadThrottleActive"}; }
	BitFieldValue<bool, unsigned char> bGamepadBrakeActive() { return { this, "APrimalWheeledVehicleCharacter.bGamepadBrakeActive"}; }
	BitFieldValue<bool, unsigned char> bGamepadThrottleActive_Analog() { return { this, "APrimalWheeledVehicleCharacter.bGamepadThrottleActive_Analog"}; }
	BitFieldValue<bool, unsigned char> bGamepadBrakeActive_Analog() { return { this, "APrimalWheeledVehicleCharacter.bGamepadBrakeActive_Analog"}; }
	BitFieldValue<bool, unsigned char> bUseCameraBasedSteering() { return { this, "APrimalWheeledVehicleCharacter.bUseCameraBasedSteering"}; }
	BitFieldValue<bool, unsigned char> bAutoSwitchToCameraSteering() { return { this, "APrimalWheeledVehicleCharacter.bAutoSwitchToCameraSteering"}; }
	BitFieldValue<bool, unsigned char> bWasUsingCameraSteering() { return { this, "APrimalWheeledVehicleCharacter.bWasUsingCameraSteering"}; }
	BitFieldValue<bool, unsigned char> bUseBPShouldCameraFollowBehindVehicle() { return { this, "APrimalWheeledVehicleCharacter.bUseBPShouldCameraFollowBehindVehicle"}; }
	BitFieldValue<bool, unsigned char> bUseBPShouldWeRestrictMovementToLocation() { return { this, "APrimalWheeledVehicleCharacter.bUseBPShouldWeRestrictMovementToLocation"}; }
	BitFieldValue<bool, unsigned char> bIsUsingRearModule() { return { this, "APrimalWheeledVehicleCharacter.bIsUsingRearModule"}; }
	BitFieldValue<bool, unsigned char> bGamepadRightShoulderActive() { return { this, "APrimalWheeledVehicleCharacter.bGamepadRightShoulderActive"}; }
	BitFieldValue<bool, unsigned char> bGamepadLeftShoulderActive() { return { this, "APrimalWheeledVehicleCharacter.bGamepadLeftShoulderActive"}; }
	BitFieldValue<bool, unsigned char> bSetClientMeshBeginPlayTransform() { return { this, "APrimalWheeledVehicleCharacter.bSetClientMeshBeginPlayTransform"}; }
	BitFieldValue<bool, unsigned char> bEnableValidationDebugDraw() { return { this, "APrimalWheeledVehicleCharacter.bEnableValidationDebugDraw"}; }
	BitFieldValue<bool, unsigned char> updatingCollision() { return { this, "APrimalWheeledVehicleCharacter.updatingCollision"}; }
	void SwapRootComponent(UPrimitiveComponent* newRoot, UPrimitiveComponent* oldRoot) { NativeCall<void, UPrimitiveComponent*, UPrimitiveComponent*>(this, "APrimalWheeledVehicleCharacter.SwapRootComponent(UPrimitiveComponent*,UPrimitiveComponent*)", newRoot, oldRoot); }
	void DecrementRearModuleFuel_Implementation(float DecrementAmount) { NativeCall<void, float>(this, "APrimalWheeledVehicleCharacter.DecrementRearModuleFuel_Implementation(float)", DecrementAmount); }
	void MoveForward(float Val) { NativeCall<void, float>(this, "APrimalWheeledVehicleCharacter.MoveForward(float)", Val); }
	void MulticastTeleport_Implementation(const UE::Math::TVector<double>& NewLocation, const UE::Math::TRotator<double>& NewRotation) { NativeCall<void, const UE::Math::TVector<double>&, const UE::Math::TRotator<double>&>(this, "APrimalWheeledVehicleCharacter.MulticastTeleport_Implementation(UE::Math::TVector<double>&,UE::Math::TRotator<double>&)", NewLocation, NewRotation); }
	float GetFuelPercent() { return NativeCall<float>(this, "APrimalWheeledVehicleCharacter.GetFuelPercent()"); }
	void OnMovementModeChanged(EMovementMode PrevMovementMode, unsigned char PreviousCustomMode) { NativeCall<void, EMovementMode, unsigned char>(this, "APrimalWheeledVehicleCharacter.OnMovementModeChanged(EMovementMode,unsignedchar)", PrevMovementMode, PreviousCustomMode); }
	double GetTimeSinceThrottleInputAfterNoSteeringOrThrottleInput_Implementation() { return NativeCall<double>(this, "APrimalWheeledVehicleCharacter.GetTimeSinceThrottleInputAfterNoSteeringOrThrottleInput_Implementation()"); }
	bool CanDeactivateRearModule_Implementation() { return NativeCall<bool>(this, "APrimalWheeledVehicleCharacter.CanDeactivateRearModule_Implementation()"); }
	UE::Math::TVector<double>* GetActorCenterTraceLocation(UE::Math::TVector<double>* result) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*>(this, "APrimalWheeledVehicleCharacter.GetActorCenterTraceLocation()", result); }
	void MultiUpdateTransformParams(const FServerToSimulatedClientMovementParams& serverMovementParams) { NativeCall<void, const FServerToSimulatedClientMovementParams&>(this, "APrimalWheeledVehicleCharacter.MultiUpdateTransformParams(FServerToSimulatedClientMovementParams&)", serverMovementParams); }
	UE::Math::TRotator<double>* GetInterpolatedRotation(UE::Math::TRotator<double>* result) { return NativeCall<UE::Math::TRotator<double>*, UE::Math::TRotator<double>*>(this, "APrimalWheeledVehicleCharacter.GetInterpolatedRotation()", result); }
	void StopGamepadLeftShoulder() { NativeCall<void>(this, "APrimalWheeledVehicleCharacter.StopGamepadLeftShoulder()"); }
	double GetTimeSinceThrottleInputReleasedWhenNotUsingCameraSteering_Implementation() { return NativeCall<double>(this, "APrimalWheeledVehicleCharacter.GetTimeSinceThrottleInputReleasedWhenNotUsingCameraSteering_Implementation()"); }
	float GetRearModuleContinuousCostValue_Implementation() { return NativeCall<float>(this, "APrimalWheeledVehicleCharacter.GetRearModuleContinuousCostValue_Implementation()"); }
	bool ValidateOwningClientMovementParams(const FOwningClientToServerMovementParams& owningClientMovementParams, bool& bShouldTeleportBack) { return NativeCall<bool, const FOwningClientToServerMovementParams&, bool&>(this, "APrimalWheeledVehicleCharacter.ValidateOwningClientMovementParams(FOwningClientToServerMovementParams&,bool&)", owningClientMovementParams, bShouldTeleportBack); }
	bool ValidateLocation(const UE::Math::TVector<double>& unvalidatedLocation) { return NativeCall<bool, const UE::Math::TVector<double>&>(this, "APrimalWheeledVehicleCharacter.ValidateLocation(UE::Math::TVector<double>&)", unvalidatedLocation); }
	bool IsMoving() { return NativeCall<bool>(this, "APrimalWheeledVehicleCharacter.IsMoving()"); }
	void ResetServerValidation() { NativeCall<void>(this, "APrimalWheeledVehicleCharacter.ResetServerValidation()"); }
	void UpdatePhysicsStateBP() { NativeCall<void>(this, "APrimalWheeledVehicleCharacter.UpdatePhysicsStateBP()"); }
	void MulticastLaunchVehicle_NoOffset_Implementation(UE::Math::TVector<double>* LaunchVelocity) { if (!LaunchVelocity) throw std::invalid_argument("Null native value parameter"); return NativeCall<void, UE :: Math :: TVector < double >>(this, "APrimalWheeledVehicleCharacter.MulticastLaunchVehicle_NoOffset_Implementation(UE::Math::TVector<double>)", *LaunchVelocity); }
	void UpdateVehicleSteering() { NativeCall<void>(this, "APrimalWheeledVehicleCharacter.UpdateVehicleSteering()"); }
	int GetNumWheelsOnGround() { return NativeCall<int>(this, "APrimalWheeledVehicleCharacter.GetNumWheelsOnGround()"); }
	void ThrottleInput() { NativeCall<void>(this, "APrimalWheeledVehicleCharacter.ThrottleInput()"); }
	void StartGamepadLeftShoulder() { NativeCall<void>(this, "APrimalWheeledVehicleCharacter.StartGamepadLeftShoulder()"); }
	void GamepadThrottle(float Val) { NativeCall<void, float>(this, "APrimalWheeledVehicleCharacter.GamepadThrottle(float)", Val); }
	void OnCharMoveCompAddImpulse_WithLocationOfImpulse_Implementation(UE::Math::TVector<double>* Impulse, bool bVelocityChange, float MassScaleImpulseExponent, bool bOverrideMaxImpulseZ, UE::Math::TVector<double>* LocationOfImpulse) { if (!Impulse) throw std::invalid_argument("Null native value parameter"); if (!LocationOfImpulse) throw std::invalid_argument("Null native value parameter"); return NativeCall<void, UE :: Math :: TVector < double >, bool, float, bool, UE :: Math :: TVector < double >>(this, "APrimalWheeledVehicleCharacter.OnCharMoveCompAddImpulse_WithLocationOfImpulse_Implementation(UE::Math::TVector<double>,bool,float,bool,UE::Math::TVector<double>)", *Impulse, bVelocityChange, MassScaleImpulseExponent, bOverrideMaxImpulseZ, *LocationOfImpulse); }
	void BPNetSetCharacterMovementVelocity_WithLocationOfImpulse(bool bSetNewVelocity, UE::Math::TVector<double>* NewVelocity, bool bSetNewMovementMode, EMovementMode NewMovementMode, UE::Math::TVector<double>* LocationOfImpulse) { if (!NewVelocity) throw std::invalid_argument("Null native value parameter"); if (!LocationOfImpulse) throw std::invalid_argument("Null native value parameter"); return NativeCall<void, bool, UE :: Math :: TVector < double >, bool, EMovementMode, UE :: Math :: TVector < double >>(this, "APrimalWheeledVehicleCharacter.BPNetSetCharacterMovementVelocity_WithLocationOfImpulse(bool,UE::Math::TVector<double>,bool,EMovementMode,UE::Math::TVector<double>)", bSetNewVelocity, *NewVelocity, bSetNewMovementMode, NewMovementMode, *LocationOfImpulse); }
	void StartUsingRearModule_Implementation() { NativeCall<void>(this, "APrimalWheeledVehicleCharacter.StartUsingRearModule_Implementation()"); }
	float GetRearModuleRegenRateValue_Implementation() { return NativeCall<float>(this, "APrimalWheeledVehicleCharacter.GetRearModuleRegenRateValue_Implementation()"); }
	void TickSimulation(float DeltaSeconds) { NativeCall<void, float>(this, "APrimalWheeledVehicleCharacter.TickSimulation(float)", DeltaSeconds); }
	float ModifySteeringInput_Implementation(float InSteeringInput, bool UsingCameraSteering) { return NativeCall<float, float, bool>(this, "APrimalWheeledVehicleCharacter.ModifySteeringInput_Implementation(float,bool)", InSteeringInput, UsingCameraSteering); }
	double GetTimeSinceThrottleInput_Implementation() { return NativeCall<double>(this, "APrimalWheeledVehicleCharacter.GetTimeSinceThrottleInput_Implementation()"); }
	float GetServerValidationParams_TraceOffset() { return NativeCall<float>(this, "APrimalWheeledVehicleCharacter.GetServerValidationParams_TraceOffset()"); }
	float GetRearModuleContinuousCostValue() { return NativeCall<float>(this, "APrimalWheeledVehicleCharacter.GetRearModuleContinuousCostValue()"); }
	double GetTimeSinceThrottleInputReleasedWhenNotUsingCameraSteering() { return NativeCall<double>(this, "APrimalWheeledVehicleCharacter.GetTimeSinceThrottleInputReleasedWhenNotUsingCameraSteering()"); }
	void StartGamepadRightShoulder() { NativeCall<void>(this, "APrimalWheeledVehicleCharacter.StartGamepadRightShoulder()"); }
	float GetOwningClientPing() { return NativeCall<float>(this, "APrimalWheeledVehicleCharacter.GetOwningClientPing()"); }
	void PreRegisterAllComponents() { NativeCall<void>(this, "APrimalWheeledVehicleCharacter.PreRegisterAllComponents()"); }
	bool BPShouldCameraFollowBehindVehicle() { return NativeCall<bool>(this, "APrimalWheeledVehicleCharacter.BPShouldCameraFollowBehindVehicle()"); }
	float GetRearModuleRegenDelayValue_Implementation() { return NativeCall<float>(this, "APrimalWheeledVehicleCharacter.GetRearModuleRegenDelayValue_Implementation()"); }
	bool IsCapsuleTraceClear(UE::Math::TVector<double>* start, UE::Math::TVector<double>* end, float Radius, float HalfHeight, bool IgnoreBacktrace, FHitResult& HitResult) { if (!start) throw std::invalid_argument("Null native value parameter"); if (!end) throw std::invalid_argument("Null native value parameter"); return NativeCall<bool, UE :: Math :: TVector < double >, UE :: Math :: TVector < double >, float, float, bool, FHitResult &>(this, "APrimalWheeledVehicleCharacter.IsCapsuleTraceClear(UE::Math::TVector<double>,UE::Math::TVector<double>,float,float,bool,FHitResult&)", *start, *end, Radius, HalfHeight, IgnoreBacktrace, HitResult); }
	float GetRearModuleMinimumFuelRequiredValue() { return NativeCall<float>(this, "APrimalWheeledVehicleCharacter.GetRearModuleMinimumFuelRequiredValue()"); }
	void UpdateRearModuleState_Implementation(bool bIsActive, float NewFuelAmount, double NewLastUseTime) { NativeCall<void, bool, float, double>(this, "APrimalWheeledVehicleCharacter.UpdateRearModuleState_Implementation(bool,float,double)", bIsActive, NewFuelAmount, NewLastUseTime); }
	bool ShouldCameraFollowBehindVehicle_Implementation() { return NativeCall<bool>(this, "APrimalWheeledVehicleCharacter.ShouldCameraFollowBehindVehicle_Implementation()"); }
	void AlignVehicleWithGround() { NativeCall<void>(this, "APrimalWheeledVehicleCharacter.AlignVehicleWithGround()"); }
	double GetTimeSinceSteeringInput() { return NativeCall<double>(this, "APrimalWheeledVehicleCharacter.GetTimeSinceSteeringInput()"); }
	float GetRearModuleMaxFuelValue_Implementation() { return NativeCall<float>(this, "APrimalWheeledVehicleCharacter.GetRearModuleMaxFuelValue_Implementation()"); }
	void ServerUpdateTransformParams(const FOwningClientToServerMovementParams& owningClientMovementParams) { NativeCall<void, const FOwningClientToServerMovementParams&>(this, "APrimalWheeledVehicleCharacter.ServerUpdateTransformParams(FOwningClientToServerMovementParams&)", owningClientMovementParams); }
	void UpdateRearModuleResource(float DeltaTime) { NativeCall<void, float>(this, "APrimalWheeledVehicleCharacter.UpdateRearModuleResource(float)", DeltaTime); }
	bool IsMultiMeshPaintable_Implementation() { return NativeCall<bool>(this, "APrimalWheeledVehicleCharacter.IsMultiMeshPaintable_Implementation()"); }
	void LaunchCharacter(UE::Math::TVector<double>* LaunchVelocity, bool bXYOverride, bool bZOverride) { if (!LaunchVelocity) throw std::invalid_argument("Null native value parameter"); return NativeCall<void, UE :: Math :: TVector < double >, bool, bool>(this, "APrimalWheeledVehicleCharacter.LaunchCharacter(UE::Math::TVector<double>,bool,bool)", *LaunchVelocity, bXYOverride, bZOverride); }
	bool IsVehicle() { return NativeCall<bool>(this, "APrimalWheeledVehicleCharacter.IsVehicle()"); }
	void MulticastLaunchVehicle_WithRotation_Implementation(UE::Math::TVector<double>* LaunchVelocity, UE::Math::TVector<double>* AngularVelocity) { if (!LaunchVelocity) throw std::invalid_argument("Null native value parameter"); if (!AngularVelocity) throw std::invalid_argument("Null native value parameter"); return NativeCall<void, UE :: Math :: TVector < double >, UE :: Math :: TVector < double >>(this, "APrimalWheeledVehicleCharacter.MulticastLaunchVehicle_WithRotation_Implementation(UE::Math::TVector<double>,UE::Math::TVector<double>)", *LaunchVelocity, *AngularVelocity); }
	float GetRearModuleInitialCostValue() { return NativeCall<float>(this, "APrimalWheeledVehicleCharacter.GetRearModuleInitialCostValue()"); }
	void StartGamepadThrottle() { NativeCall<void>(this, "APrimalWheeledVehicleCharacter.StartGamepadThrottle()"); }
	void StartGamepadBrake() { NativeCall<void>(this, "APrimalWheeledVehicleCharacter.StartGamepadBrake()"); }
	bool CanActivateRearModule_Implementation() { return NativeCall<bool>(this, "APrimalWheeledVehicleCharacter.CanActivateRearModule_Implementation()"); }
	bool IsCurrentlyUsingCameraSteering() { return NativeCall<bool>(this, "APrimalWheeledVehicleCharacter.IsCurrentlyUsingCameraSteering()"); }
	void StopGamepadBrake() { NativeCall<void>(this, "APrimalWheeledVehicleCharacter.StopGamepadBrake()"); }
	void UpdateRearModuleState(bool bIsActive, float NewFuelAmount, double NewLastUseTime) { NativeCall<void, bool, float, double>(this, "APrimalWheeledVehicleCharacter.UpdateRearModuleState(bool,float,double)", bIsActive, NewFuelAmount, NewLastUseTime); }
	UStaticMeshComponent* GetDebugVehicleComponent() { return NativeCall<UStaticMeshComponent*>(this, "APrimalWheeledVehicleCharacter.GetDebugVehicleComponent()"); }
	bool TeleportTo(const UE::Math::TVector<double>& DestLocation, const UE::Math::TRotator<double>& DestRotation, bool bIsATest, bool bNoCheck) { return NativeCall<bool, const UE::Math::TVector<double>&, const UE::Math::TRotator<double>&, bool, bool>(this, "APrimalWheeledVehicleCharacter.TeleportTo(UE::Math::TVector<double>&,UE::Math::TRotator<double>&,bool,bool)", DestLocation, DestRotation, bIsATest, bNoCheck); }
	float GetRearModuleReleaseCostValue_Implementation() { return NativeCall<float>(this, "APrimalWheeledVehicleCharacter.GetRearModuleReleaseCostValue_Implementation()"); }
	void UpdateWheelEffects(float DeltaTime) { NativeCall<void, float>(this, "APrimalWheeledVehicleCharacter.UpdateWheelEffects(float)", DeltaTime); }
	float GetSteeringAssistIntensity_Implementation() { return NativeCall<float>(this, "APrimalWheeledVehicleCharacter.GetSteeringAssistIntensity_Implementation()"); }
	bool UpdateSimulationState(bool& HadChangedSimState) { return NativeCall<bool, bool&>(this, "APrimalWheeledVehicleCharacter.UpdateSimulationState(bool&)", HadChangedSimState); }
	bool BPShouldWeRestrictMovementToLocation(UE::Math::TVector<double>* LocationStart, UE::Math::TVector<double>* LocationEnd) { if (!LocationStart) throw std::invalid_argument("Null native value parameter"); if (!LocationEnd) throw std::invalid_argument("Null native value parameter"); return NativeCall<bool, UE :: Math :: TVector < double >, UE :: Math :: TVector < double >>(this, "APrimalWheeledVehicleCharacter.BPShouldWeRestrictMovementToLocation(UE::Math::TVector<double>,UE::Math::TVector<double>)", *LocationStart, *LocationEnd); }
	UObject* _getUObject() { return NativeCall<UObject*>(this, "APrimalWheeledVehicleCharacter._getUObject()"); }
	void AddControllerPitchInput(float Val) { NativeCall<void, float>(this, "APrimalWheeledVehicleCharacter.AddControllerPitchInput(float)", Val); }
	void MultiUpdateTransformParams_Implementation(const FServerToSimulatedClientMovementParams& serverMovementParams) { NativeCall<void, const FServerToSimulatedClientMovementParams&>(this, "APrimalWheeledVehicleCharacter.MultiUpdateTransformParams_Implementation(FServerToSimulatedClientMovementParams&)", serverMovementParams); }
	void MulticastSyncPhysicsState_Implementation(const UE::Math::TVector<double>& NewLocation, const UE::Math::TRotator<double>& NewRotation) { NativeCall<void, const UE::Math::TVector<double>&, const UE::Math::TRotator<double>&>(this, "APrimalWheeledVehicleCharacter.MulticastSyncPhysicsState_Implementation(UE::Math::TVector<double>&,UE::Math::TRotator<double>&)", NewLocation, NewRotation); }
	float GetRearModuleReleaseCostValue() { return NativeCall<float>(this, "APrimalWheeledVehicleCharacter.GetRearModuleReleaseCostValue()"); }
	bool ServerIsAirborne() { return NativeCall<bool>(this, "APrimalWheeledVehicleCharacter.ServerIsAirborne()"); }
	void StopUsingRearModule_Implementation() { NativeCall<void>(this, "APrimalWheeledVehicleCharacter.StopUsingRearModule_Implementation()"); }
	float GetFuelPercent_Implementation() { return NativeCall<float>(this, "APrimalWheeledVehicleCharacter.GetFuelPercent_Implementation()"); }
	float ModifySteeringInput(float SteeringInput, bool UsingCameraSteering) { return NativeCall<float, float, bool>(this, "APrimalWheeledVehicleCharacter.ModifySteeringInput(float,bool)", SteeringInput, UsingCameraSteering); }
	void ClearRiderCodeNextTick() { NativeCall<void>(this, "APrimalWheeledVehicleCharacter.ClearRiderCodeNextTick()"); }
	double GetTimeSinceThrottleInput() { return NativeCall<double>(this, "APrimalWheeledVehicleCharacter.GetTimeSinceThrottleInput()"); }
	bool ShouldCameraFollowBehindVehicle() { return NativeCall<bool>(this, "APrimalWheeledVehicleCharacter.ShouldCameraFollowBehindVehicle()"); }
	void PostNetReceivePhysicState() { NativeCall<void>(this, "APrimalWheeledVehicleCharacter.PostNetReceivePhysicState()"); }
	void TickStepDamage(float DeltaSeconds) { NativeCall<void, float>(this, "APrimalWheeledVehicleCharacter.TickStepDamage(float)", DeltaSeconds); }
	void Destroyed() { NativeCall<void>(this, "APrimalWheeledVehicleCharacter.Destroyed()"); }
	UE::Math::TVector<double>* GetFloatingHUDLocation(UE::Math::TVector<double>* result) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*>(this, "APrimalWheeledVehicleCharacter.GetFloatingHUDLocation()", result); }
	void TickPrediction(float DeltaSeconds) { NativeCall<void, float>(this, "APrimalWheeledVehicleCharacter.TickPrediction(float)", DeltaSeconds); }
	void UpdatePhysicsState() { NativeCall<void>(this, "APrimalWheeledVehicleCharacter.UpdatePhysicsState()"); }
	void Tick(float DeltaSeconds) { NativeCall<void, float>(this, "APrimalWheeledVehicleCharacter.Tick(float)", DeltaSeconds); }
	float GetRearModuleRegenRateValue() { return NativeCall<float>(this, "APrimalWheeledVehicleCharacter.GetRearModuleRegenRateValue()"); }
	void UpdateSaddleStructureCollision() { NativeCall<void>(this, "APrimalWheeledVehicleCharacter.UpdateSaddleStructureCollision()"); }
	void LaunchCharacter_WithLocationOfImpulse(UE::Math::TVector<double>* LaunchVelocity, bool bXYOverride, bool bZOverride, UE::Math::TVector<double>* LocationOfImpulse) { if (!LaunchVelocity) throw std::invalid_argument("Null native value parameter"); if (!LocationOfImpulse) throw std::invalid_argument("Null native value parameter"); return NativeCall<void, UE :: Math :: TVector < double >, bool, bool, UE :: Math :: TVector < double >>(this, "APrimalWheeledVehicleCharacter.LaunchCharacter_WithLocationOfImpulse(UE::Math::TVector<double>,bool,bool,UE::Math::TVector<double>)", *LaunchVelocity, bXYOverride, bZOverride, *LocationOfImpulse); }
	void MulticastTeleport(const UE::Math::TVector<double>& NewLocation, const UE::Math::TRotator<double>& NewRotation) { NativeCall<void, const UE::Math::TVector<double>&, const UE::Math::TRotator<double>&>(this, "APrimalWheeledVehicleCharacter.MulticastTeleport(UE::Math::TVector<double>&,UE::Math::TRotator<double>&)", NewLocation, NewRotation); }
	void MulticastLaunchVehicle_NoOffset(UE::Math::TVector<double>* LaunchVelocity) { if (!LaunchVelocity) throw std::invalid_argument("Null native value parameter"); return NativeCall<void, UE :: Math :: TVector < double >>(this, "APrimalWheeledVehicleCharacter.MulticastLaunchVehicle_NoOffset(UE::Math::TVector<double>)", *LaunchVelocity); }
	void StopGamepadRightShoulder() { NativeCall<void>(this, "APrimalWheeledVehicleCharacter.StopGamepadRightShoulder()"); }
	double GetTimeSinceThrottleInputAfterNoSteeringOrThrottleInput() { return NativeCall<double>(this, "APrimalWheeledVehicleCharacter.GetTimeSinceThrottleInputAfterNoSteeringOrThrottleInput()"); }
	UChaosWheeledVehicleMovementComponent* GetVehicleMovementComponent() { return NativeCall<UChaosWheeledVehicleMovementComponent*>(this, "APrimalWheeledVehicleCharacter.GetVehicleMovementComponent()"); }
	bool ValidateOverTimeOwningClientMovementParams(const FOwningClientToServerMovementParams& owningClientMovementParams, bool& bShouldTeleportBack) { return NativeCall<bool, const FOwningClientToServerMovementParams&, bool&>(this, "APrimalWheeledVehicleCharacter.ValidateOverTimeOwningClientMovementParams(FOwningClientToServerMovementParams&,bool&)", owningClientMovementParams, bShouldTeleportBack); }
	float GetRearModuleMinimumFuelRequiredValue_Implementation() { return NativeCall<float>(this, "APrimalWheeledVehicleCharacter.GetRearModuleMinimumFuelRequiredValue_Implementation()"); }
	void MulticastUpdateRearModuleState_Implementation(bool bIsActive, float NewFuelAmount, double NewLastUseTime) { NativeCall<void, bool, float, double>(this, "APrimalWheeledVehicleCharacter.MulticastUpdateRearModuleState_Implementation(bool,float,double)", bIsActive, NewFuelAmount, NewLastUseTime); }
	void ServerUpdateTransformParams_Implementation(const FOwningClientToServerMovementParams& owningClientMovementParams) { NativeCall<void, const FOwningClientToServerMovementParams&>(this, "APrimalWheeledVehicleCharacter.ServerUpdateTransformParams_Implementation(FOwningClientToServerMovementParams&)", owningClientMovementParams); }
	float GetRearModuleInitialCostValue_Implementation() { return NativeCall<float>(this, "APrimalWheeledVehicleCharacter.GetRearModuleInitialCostValue_Implementation()"); }
	UE::Math::TVector<double>* GetDefaultMeshRelativeOffset(UE::Math::TVector<double>* result) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*>(this, "APrimalWheeledVehicleCharacter.GetDefaultMeshRelativeOffset()", result); }
	void TickCollisionState(float DeltaSeconds) { NativeCall<void, float>(this, "APrimalWheeledVehicleCharacter.TickCollisionState(float)", DeltaSeconds); }
	bool CanActivateRearModule() { return NativeCall<bool>(this, "APrimalWheeledVehicleCharacter.CanActivateRearModule()"); }
	double GetTimeSinceSteeringInput_Implementation() { return NativeCall<double>(this, "APrimalWheeledVehicleCharacter.GetTimeSinceSteeringInput_Implementation()"); }
	float GetRearModuleRegenDelayValue() { return NativeCall<float>(this, "APrimalWheeledVehicleCharacter.GetRearModuleRegenDelayValue()"); }
	float GetRearModuleMaxFuelValue() { return NativeCall<float>(this, "APrimalWheeledVehicleCharacter.GetRearModuleMaxFuelValue()"); }
	void PerformVehicleTeleport(const UE::Math::TVector<double>& NewLocation, const UE::Math::TRotator<double>& NewRotation) { NativeCall<void, const UE::Math::TVector<double>&, const UE::Math::TRotator<double>&>(this, "APrimalWheeledVehicleCharacter.PerformVehicleTeleport(UE::Math::TVector<double>&,UE::Math::TRotator<double>&)", NewLocation, NewRotation); }
	bool IsCurrentlyUsingCameraSteering_Implementation() { return NativeCall<bool>(this, "APrimalWheeledVehicleCharacter.IsCurrentlyUsingCameraSteering_Implementation()"); }
	void BPNetSetCharacterMovementVelocity(bool bSetNewVelocity, UE::Math::TVector<double>* NewVelocity, bool bSetNewMovementMode, EMovementMode NewMovementMode) { if (!NewVelocity) throw std::invalid_argument("Null native value parameter"); return NativeCall<void, bool, UE :: Math :: TVector < double >, bool, EMovementMode>(this, "APrimalWheeledVehicleCharacter.BPNetSetCharacterMovementVelocity(bool,UE::Math::TVector<double>,bool,EMovementMode)", bSetNewVelocity, *NewVelocity, bSetNewMovementMode, NewMovementMode); }
	void OnRep_ClientBeginPlayTransform() { NativeCall<void>(this, "APrimalWheeledVehicleCharacter.OnRep_ClientBeginPlayTransform()"); }
	float GetSteeringAssistIntensity() { return NativeCall<float>(this, "APrimalWheeledVehicleCharacter.GetSteeringAssistIntensity()"); }
	FString* GetDescriptiveName(FString* result) { return NativeCall<FString*, FString*>(this, "APrimalWheeledVehicleCharacter.GetDescriptiveName()", result); }
	void TickGamepadInput() { NativeCall<void>(this, "APrimalWheeledVehicleCharacter.TickGamepadInput()"); }
	float GetSteerMultiplier() { return NativeCall<float>(this, "APrimalWheeledVehicleCharacter.GetSteerMultiplier()"); }
	void OnCharMoveCompAddImpulse_Implementation(UE::Math::TVector<double>* Impulse, bool bVelocityChange, float MassScaleImpulseExponent, bool bOverrideMaxImpulseZ) { if (!Impulse) throw std::invalid_argument("Null native value parameter"); return NativeCall<void, UE :: Math :: TVector < double >, bool, float, bool>(this, "APrimalWheeledVehicleCharacter.OnCharMoveCompAddImpulse_Implementation(UE::Math::TVector<double>,bool,float,bool)", *Impulse, bVelocityChange, MassScaleImpulseExponent, bOverrideMaxImpulseZ); }
	bool JustTurned() { return NativeCall<bool>(this, "APrimalWheeledVehicleCharacter.JustTurned()"); }
	void MoveRight(float Val) { NativeCall<void, float>(this, "APrimalWheeledVehicleCharacter.MoveRight(float)", Val); }
	void Unstasis() { NativeCall<void>(this, "APrimalWheeledVehicleCharacter.Unstasis()"); }
	void TickReplication(float DeltaSeconds) { NativeCall<void, float>(this, "APrimalWheeledVehicleCharacter.TickReplication(float)", DeltaSeconds); }
	void UpdateAirControl(float DeltaSeconds) { NativeCall<void, float>(this, "APrimalWheeledVehicleCharacter.UpdateAirControl(float)", DeltaSeconds); }
	bool CanTakePassenger(APrimalCharacter* aCharacter, int PassengerSeatIndex, bool bForcePassenger, bool bAllowFlyersAndWaterDinos, bool bSkipLineTrace) { return NativeCall<bool, APrimalCharacter*, int, bool, bool, bool>(this, "APrimalWheeledVehicleCharacter.CanTakePassenger(APrimalCharacter*,int,bool,bool,bool)", aCharacter, PassengerSeatIndex, bForcePassenger, bAllowFlyersAndWaterDinos, bSkipLineTrace); }
	void StopUsingRearModule() { NativeCall<void>(this, "APrimalWheeledVehicleCharacter.StopUsingRearModule()"); }
	void AddControllerYawInput(float Val) { NativeCall<void, float>(this, "APrimalWheeledVehicleCharacter.AddControllerYawInput(float)", Val); }
	bool CanRide(AShooterCharacter* byPawn, unsigned char* bOutHasSaddle, unsigned char* bOutCanRideOtherThanSaddle, bool bDontCheckDistance, bool bIsFromGetMultiUse) { return NativeCall<bool, AShooterCharacter*, unsigned char*, unsigned char*, bool, bool>(this, "APrimalWheeledVehicleCharacter.CanRide(AShooterCharacter*,unsignedchar*,unsignedchar*,bool,bool)", byPawn, bOutHasSaddle, bOutCanRideOtherThanSaddle, bDontCheckDistance, bIsFromGetMultiUse); }
	void StopGamepadThrottle() { NativeCall<void>(this, "APrimalWheeledVehicleCharacter.StopGamepadThrottle()"); }
	void CalcAimRotation() { NativeCall<void>(this, "APrimalWheeledVehicleCharacter.CalcAimRotation()"); }
	UE::Math::TVector<double>* GetInterpolatedLocation(UE::Math::TVector<double>* result) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*>(this, "APrimalWheeledVehicleCharacter.GetInterpolatedLocation()", result); }
	void MulticastLaunchVehicle_WithRotation(UE::Math::TVector<double>* LaunchVelocity, UE::Math::TVector<double>* AngularVelocity) { if (!LaunchVelocity) throw std::invalid_argument("Null native value parameter"); if (!AngularVelocity) throw std::invalid_argument("Null native value parameter"); return NativeCall<void, UE :: Math :: TVector < double >, UE :: Math :: TVector < double >>(this, "APrimalWheeledVehicleCharacter.MulticastLaunchVehicle_WithRotation(UE::Math::TVector<double>,UE::Math::TVector<double>)", *LaunchVelocity, *AngularVelocity); }
	float GetRearModuleFuelPercentage_Implementation() { return NativeCall<float>(this, "APrimalWheeledVehicleCharacter.GetRearModuleFuelPercentage_Implementation()"); }
	FString* GetShooterHUDDebugString_Implementation(FString* result) { return NativeCall<FString*, FString*>(this, "APrimalWheeledVehicleCharacter.GetShooterHUDDebugString_Implementation()", result); }
	bool OverridesVehicleWheelProperties() { return NativeCall<bool>(this, "APrimalWheeledVehicleCharacter.OverridesVehicleWheelProperties()"); }
	void UpdateRearModuleResource_Implementation(float DeltaTime) { NativeCall<void, float>(this, "APrimalWheeledVehicleCharacter.UpdateRearModuleResource_Implementation(float)", DeltaTime); }
	float GetEngineRotationSpeed() { return NativeCall<float>(this, "APrimalWheeledVehicleCharacter.GetEngineRotationSpeed()"); }
	void OnSaddleStructLoaded(APrimalStructure* TheStruct) { NativeCall<void, APrimalStructure*>(this, "APrimalWheeledVehicleCharacter.OnSaddleStructLoaded(APrimalStructure*)", TheStruct); }
	bool CanDeactivateRearModule() { return NativeCall<bool>(this, "APrimalWheeledVehicleCharacter.CanDeactivateRearModule()"); }
	void MulticastUpdateRearModuleState(bool bIsActive, float NewFuelAmount, double NewLastUseTime) { NativeCall<void, bool, float, double>(this, "APrimalWheeledVehicleCharacter.MulticastUpdateRearModuleState(bool,float,double)", bIsActive, NewFuelAmount, NewLastUseTime); }
	void BeginPlay() { NativeCall<void>(this, "APrimalWheeledVehicleCharacter.BeginPlay()"); }
	void ProcessEvent(UFunction* Function, void* Parms) { NativeCall<void, UFunction*, void*>(this, "APrimalWheeledVehicleCharacter.ProcessEvent(UFunction*,void*)", Function, Parms); }
	void TeleportVehicleTo(const UE::Math::TVector<double>& NewLocation, const UE::Math::TRotator<double>& NewRotation) { NativeCall<void, const UE::Math::TVector<double>&, const UE::Math::TRotator<double>&>(this, "APrimalWheeledVehicleCharacter.TeleportVehicleTo(UE::Math::TVector<double>&,UE::Math::TRotator<double>&)", NewLocation, NewRotation); }
	float GetSteerMultiplier_Implementation() { return NativeCall<float>(this, "APrimalWheeledVehicleCharacter.GetSteerMultiplier_Implementation()"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("APrimalWheeledVehicleCharacter"); }
};