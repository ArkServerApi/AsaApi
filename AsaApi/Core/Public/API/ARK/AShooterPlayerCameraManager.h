#pragma once
#include "BulkForward.h"
#include "APlayerCameraManager.h"

struct AShooterPlayerCameraManager : public APlayerCameraManager
{
public:
	AShooterPlayerCameraManager() = delete;
	~AShooterPlayerCameraManager() = delete;
	AShooterPlayerCameraManager(const AShooterPlayerCameraManager&) = delete;
	AShooterPlayerCameraManager& operator=(const AShooterPlayerCameraManager&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("AShooterPlayerCameraManager"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("AShooterPlayerCameraManager"); }

	FMinimalViewInfo& LastPreModifierCameraCacheField() { return *GetNativePointerField<FMinimalViewInfo*>(this, "AShooterPlayerCameraManager.LastPreModifierCameraCache"); }
	float& NormalFOVField() { return *GetNativePointerField<float*>(this, "AShooterPlayerCameraManager.NormalFOV"); }
	float& TargetingFOVField() { return *GetNativePointerField<float*>(this, "AShooterPlayerCameraManager.TargetingFOV"); }
	float& TPVZOffsetInterpSpeedField() { return *GetNativePointerField<float*>(this, "AShooterPlayerCameraManager.TPVZOffsetInterpSpeed"); }
	FPostProcessSettings& PPMaterialsField() { return *GetNativePointerField<FPostProcessSettings*>(this, "AShooterPlayerCameraManager.PPMaterials"); }
	float& CurrentAimDriftFactorField() { return *GetNativePointerField<float*>(this, "AShooterPlayerCameraManager.CurrentAimDriftFactor"); }
	bool& bLastTransitionWasFinalModifierField() { return *GetNativePointerField<bool*>(this, "AShooterPlayerCameraManager.bLastTransitionWasFinalModifier"); }
	bool& bWasCrouchedField() { return *GetNativePointerField<bool*>(this, "AShooterPlayerCameraManager.bWasCrouched"); }
	bool& bWasProneField() { return *GetNativePointerField<bool*>(this, "AShooterPlayerCameraManager.bWasProne"); }
	float& CurrentZOffsetField() { return *GetNativePointerField<float*>(this, "AShooterPlayerCameraManager.CurrentZOffset"); }
	bool& bHasCustomDepthStencilField() { return *GetNativePointerField<bool*>(this, "AShooterPlayerCameraManager.bHasCustomDepthStencil"); }
	bool& bCustomDepthStencilIgnoreHealthField() { return *GetNativePointerField<bool*>(this, "AShooterPlayerCameraManager.bCustomDepthStencilIgnoreHealth"); }
	bool& bCompleteCustomDepthStencilOverrideField() { return *GetNativePointerField<bool*>(this, "AShooterPlayerCameraManager.bCompleteCustomDepthStencilOverride"); }
	float& InterpTPVCameraOffsetField() { return *GetNativePointerField<float*>(this, "AShooterPlayerCameraManager.InterpTPVCameraOffset"); }
	float& LastFOVScaleMatParamFOVField() { return *GetNativePointerField<float*>(this, "AShooterPlayerCameraManager.LastFOVScaleMatParamFOV"); }
	FName& LastCameraStyleField() { return *GetNativePointerField<FName*>(this, "AShooterPlayerCameraManager.LastCameraStyle"); }
	TWeakObjectPtr<AActor, FWeakObjectPtr>& LastTargetField() { return *GetNativePointerField<TWeakObjectPtr<AActor, FWeakObjectPtr>*>(this, "AShooterPlayerCameraManager.LastTarget"); }
	FName& LastActualCameraStyleField() { return *GetNativePointerField<FName*>(this, "AShooterPlayerCameraManager.LastActualCameraStyle"); }
	FMinimalViewInfo& LastLivePOVField() { return *GetNativePointerField<FMinimalViewInfo*>(this, "AShooterPlayerCameraManager.LastLivePOV"); }
	bool& bInCameraTransitionField() { return *GetNativePointerField<bool*>(this, "AShooterPlayerCameraManager.bInCameraTransition"); }
	double& LastCameraTransitionTimeField() { return *GetNativePointerField<double*>(this, "AShooterPlayerCameraManager.LastCameraTransitionTime"); }
	float& LastCameraTransitionDurationField() { return *GetNativePointerField<float*>(this, "AShooterPlayerCameraManager.LastCameraTransitionDuration"); }
	double& LastTimeRegeneratedGrassField() { return *GetNativePointerField<double*>(this, "AShooterPlayerCameraManager.LastTimeRegeneratedGrass"); }
	TWeakObjectPtr<USoundBase, FWeakObjectPtr>& LastPostProcessVolumeSoundField() { return *GetNativePointerField<TWeakObjectPtr<USoundBase, FWeakObjectPtr>*>(this, "AShooterPlayerCameraManager.LastPostProcessVolumeSound"); }
	TWeakObjectPtr<UAudioComponent, FWeakObjectPtr>& LastPostProcessAudioComponentField() { return *GetNativePointerField<TWeakObjectPtr<UAudioComponent, FWeakObjectPtr>*>(this, "AShooterPlayerCameraManager.LastPostProcessAudioComponent"); }
	UE::Math::TVector<double>& LastTPVCameraOffsetField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "AShooterPlayerCameraManager.LastTPVCameraOffset"); }
	float& LastTPVCollisionHeightField() { return *GetNativePointerField<float*>(this, "AShooterPlayerCameraManager.LastTPVCollisionHeight"); }
	float& TPVCollisionHeightInterpSpeedField() { return *GetNativePointerField<float*>(this, "AShooterPlayerCameraManager.TPVCollisionHeightInterpSpeed"); }
	UE::Math::TVector<double>& CameraAdjustPositionLocDeltaField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "AShooterPlayerCameraManager.CameraAdjustPositionLocDelta"); }
	int& LastFrameThirdPersonField() { return *GetNativePointerField<int*>(this, "AShooterPlayerCameraManager.LastFrameThirdPerson"); }
	bool& bCachedDeltaField() { return *GetNativePointerField<bool*>(this, "AShooterPlayerCameraManager.bCachedDelta"); }
	FMinimalViewInfo& LastCameraTransitionPointField() { return *GetNativePointerField<FMinimalViewInfo*>(this, "AShooterPlayerCameraManager.LastCameraTransitionPoint"); }
	UE::Math::TVector<double>& LastCameraTransitionPointLocalLocationField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "AShooterPlayerCameraManager.LastCameraTransitionPointLocalLocation"); }
	TWeakObjectPtr<UPrimitiveComponent, FWeakObjectPtr>& LastCameraTransitionPointLocalMovementBaseField() { return *GetNativePointerField<TWeakObjectPtr<UPrimitiveComponent, FWeakObjectPtr>*>(this, "AShooterPlayerCameraManager.LastCameraTransitionPointLocalMovementBase"); }
	UE::Math::TRotator<double>& ASACurrentRotatorField() { return *GetNativePointerField<UE::Math::TRotator<double>*>(this, "AShooterPlayerCameraManager.ASACurrentRotator"); }
	UE::Math::TRotator<double>& OldCameraCurrentRotatorField() { return *GetNativePointerField<UE::Math::TRotator<double>*>(this, "AShooterPlayerCameraManager.OldCameraCurrentRotator"); }
	bool& UseOnSurfaceCameraField() { return *GetNativePointerField<bool*>(this, "AShooterPlayerCameraManager.UseOnSurfaceCamera"); }
	bool& UseOnSurfaceCameraInterpolationField() { return *GetNativePointerField<bool*>(this, "AShooterPlayerCameraManager.UseOnSurfaceCameraInterpolation"); }
	bool& UseOnSurfaceCameraForPassengerField() { return *GetNativePointerField<bool*>(this, "AShooterPlayerCameraManager.UseOnSurfaceCameraForPassenger"); }
	float& OnSurfaceinitialPitchField() { return *GetNativePointerField<float*>(this, "AShooterPlayerCameraManager.OnSurfaceinitialPitch"); }
	float& OnSurfaceTargetPitchField() { return *GetNativePointerField<float*>(this, "AShooterPlayerCameraManager.OnSurfaceTargetPitch"); }
	float& OnSurfaceInitialYawField() { return *GetNativePointerField<float*>(this, "AShooterPlayerCameraManager.OnSurfaceInitialYaw"); }
	float& OnSurfaceTargetYawField() { return *GetNativePointerField<float*>(this, "AShooterPlayerCameraManager.OnSurfaceTargetYaw"); }
	float& OnSurfaceTargetRollField() { return *GetNativePointerField<float*>(this, "AShooterPlayerCameraManager.OnSurfaceTargetRoll"); }
	float& OnSurfaceInterpolatedPitchField() { return *GetNativePointerField<float*>(this, "AShooterPlayerCameraManager.OnSurfaceInterpolatedPitch"); }
	float& OnSurfaceCameraInterpolationSpeedField() { return *GetNativePointerField<float*>(this, "AShooterPlayerCameraManager.OnSurfaceCameraInterpolationSpeed"); }
	UE::Math::TVector<double>& OnSurfaceCameraOffsetField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "AShooterPlayerCameraManager.OnSurfaceCameraOffset"); }
	bool& bLastEnableColorGradingField() { return *GetNativePointerField<bool*>(this, "AShooterPlayerCameraManager.bLastEnableColorGrading"); }
	bool& bLastShooterCharacterPreventsInputField() { return *GetNativePointerField<bool*>(this, "AShooterPlayerCameraManager.bLastShooterCharacterPreventsInput"); }
	bool& bLastWasFPVField() { return *GetNativePointerField<bool*>(this, "AShooterPlayerCameraManager.bLastWasFPV"); }
	bool& bRequestingLevelFlushField() { return *GetNativePointerField<bool*>(this, "AShooterPlayerCameraManager.bRequestingLevelFlush"); }
	float& lastFreeCamMultField() { return *GetNativePointerField<float*>(this, "AShooterPlayerCameraManager.lastFreeCamMult"); }
	float& lastUpOffField() { return *GetNativePointerField<float*>(this, "AShooterPlayerCameraManager.lastUpOff"); }
	bool& bSeatedFreeLookActiveField() { return *GetNativePointerField<bool*>(this, "AShooterPlayerCameraManager.bSeatedFreeLookActive"); }
	UE::Math::TRotator<double>& SeatedFreeLookSavedOrbitRotationField() { return *GetNativePointerField<UE::Math::TRotator<double>*>(this, "AShooterPlayerCameraManager.SeatedFreeLookSavedOrbitRotation"); }
	int& CurrentPrimalCameraModeIndexField() { return *GetNativePointerField<int*>(this, "AShooterPlayerCameraManager.CurrentPrimalCameraModeIndex"); }
	float& CurrentPrimalCameraModeDistanceField() { return *GetNativePointerField<float*>(this, "AShooterPlayerCameraManager.CurrentPrimalCameraModeDistance"); }
	TWeakObjectPtr<AActor, FWeakObjectPtr>& PrimalCameraModeSourceField() { return *GetNativePointerField<TWeakObjectPtr<AActor, FWeakObjectPtr>*>(this, "AShooterPlayerCameraManager.PrimalCameraModeSource"); }
	float& ASALastCameraArmLengthField() { return *GetNativePointerField<float*>(this, "AShooterPlayerCameraManager.ASALastCameraArmLength"); }
	float& OldCameraLastCameraArmLengthField() { return *GetNativePointerField<float*>(this, "AShooterPlayerCameraManager.OldCameraLastCameraArmLength"); }
	FPrimalCameraInterpParams& LastPivotXInterpParamsField() { return *GetNativePointerField<FPrimalCameraInterpParams*>(this, "AShooterPlayerCameraManager.LastPivotXInterpParams"); }
	FPrimalCameraInterpParams& LastPivotYInterpParamsField() { return *GetNativePointerField<FPrimalCameraInterpParams*>(this, "AShooterPlayerCameraManager.LastPivotYInterpParams"); }
	FPrimalCameraInterpParams& LastPivotZInterpParamsField() { return *GetNativePointerField<FPrimalCameraInterpParams*>(this, "AShooterPlayerCameraManager.LastPivotZInterpParams"); }
	FPrimalCameraInterpParams& LastCameraArmLengthInterpParamsField() { return *GetNativePointerField<FPrimalCameraInterpParams*>(this, "AShooterPlayerCameraManager.LastCameraArmLengthInterpParams"); }
	FFloatSpringState& CameraArmLengthSpringStateField() { return *GetNativePointerField<FFloatSpringState*>(this, "AShooterPlayerCameraManager.CameraArmLengthSpringState"); }
	FFloatSpringState& CameraPivotLocationSpringStateXField() { return *GetNativePointerField<FFloatSpringState*>(this, "AShooterPlayerCameraManager.CameraPivotLocationSpringStateX"); }
	FFloatSpringState& CameraPivotLocationSpringStateYField() { return *GetNativePointerField<FFloatSpringState*>(this, "AShooterPlayerCameraManager.CameraPivotLocationSpringStateY"); }
	FFloatSpringState& CameraPivotLocationSpringStateZField() { return *GetNativePointerField<FFloatSpringState*>(this, "AShooterPlayerCameraManager.CameraPivotLocationSpringStateZ"); }
	FQuaternionSpringState& CameraPivotRotationSpringStateField() { return *GetNativePointerField<FQuaternionSpringState*>(this, "AShooterPlayerCameraManager.CameraPivotRotationSpringState"); }
	double& TimeBeganSwitchingCamerasField() { return *GetNativePointerField<double*>(this, "AShooterPlayerCameraManager.TimeBeganSwitchingCameras"); }
	float& SlowInterpToOldCameraAlphaField() { return *GetNativePointerField<float*>(this, "AShooterPlayerCameraManager.SlowInterpToOldCameraAlpha"); }
	float& SlowInterp_AccPitchAlphaField() { return *GetNativePointerField<float*>(this, "AShooterPlayerCameraManager.SlowInterp_AccPitchAlpha"); }
	float& SlowInterp_AccYawAlphaField() { return *GetNativePointerField<float*>(this, "AShooterPlayerCameraManager.SlowInterp_AccYawAlpha"); }
	UE::Math::TRotator<double>& LastTPVControlRotationField() { return *GetNativePointerField<UE::Math::TRotator<double>*>(this, "AShooterPlayerCameraManager.LastTPVControlRotation"); }
	UE::Math::TVector<double>& ASALastPivotLocationOffsetField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "AShooterPlayerCameraManager.ASALastPivotLocationOffset"); }
	UE::Math::TVector<double>& ASALastTargetLocationLocField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "AShooterPlayerCameraManager.ASALastTargetLocationLoc"); }
	UE::Math::TVector<double>& OldCameraLastTargetLocationLocField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "AShooterPlayerCameraManager.OldCameraLastTargetLocationLoc"); }
	UE::Math::TVector<double>& LastTPVCameraTargetLocationField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "AShooterPlayerCameraManager.LastTPVCameraTargetLocation"); }
	UE::Math::TRotator<double>& ControlRotationWhenBeganSwitchingToASACameraField() { return *GetNativePointerField<UE::Math::TRotator<double>*>(this, "AShooterPlayerCameraManager.ControlRotationWhenBeganSwitchingToASACamera"); }
	EPrimalCameraState& PrimalCameraStateField() { return *GetNativePointerField<EPrimalCameraState*>(this, "AShooterPlayerCameraManager.PrimalCameraState"); }
	bool& bTPVCameraInterpolationStabilizedField() { return *GetNativePointerField<bool*>(this, "AShooterPlayerCameraManager.bTPVCameraInterpolationStabilized"); }
	BitFieldValue<bool, unsigned char> bCameraModeFreeAimActive() { return { this, "AShooterPlayerCameraManager.bCameraModeFreeAimActive"}; }
	BitFieldValue<bool, unsigned char> bLastFrameWasUsingASACamera() { return { this, "AShooterPlayerCameraManager.bLastFrameWasUsingASACamera"}; }
	void OnCameraStateChanged(APrimalCharacter* ForChar, EPrimalCameraState PreviousState) { NativeCall<void, APrimalCharacter*, EPrimalCameraState>(this, "AShooterPlayerCameraManager.OnCameraStateChanged(APrimalCharacter*,EPrimalCameraState)", ForChar, PreviousState); }
	void StartCameraTransition(float TransitionDuration, bool bUseFinalModifiedViewTarget, bool bAllowSpectatorPawn) { NativeCall<void, float, bool, bool>(this, "AShooterPlayerCameraManager.StartCameraTransition(float,bool,bool)", TransitionDuration, bUseFinalModifiedViewTarget, bAllowSpectatorPawn); }
	void ProcessCurrentCameraState(APrimalCharacter* ForChar, float DeltaTime, UE::Math::TVector<double>& OutCameraLocation, UE::Math::TRotator<double>& OutCameraRotation, const UE::Math::TVector<double>& OldCameraPos, const UE::Math::TRotator<double>& OldCameraRotator, const UE::Math::TVector<double>& ASAPos, const UE::Math::TRotator<double>& ASARotator, const FHitResult& OldCameraResult, const FHitResult& ASAResult) { NativeCall<void, APrimalCharacter*, float, UE::Math::TVector<double>&, UE::Math::TRotator<double>&, const UE::Math::TVector<double>&, const UE::Math::TRotator<double>&, const UE::Math::TVector<double>&, const UE::Math::TRotator<double>&, const FHitResult&, const FHitResult&>(this, "AShooterPlayerCameraManager.ProcessCurrentCameraState(APrimalCharacter*,float,UE::Math::TVector<double>&,UE::Math::TRotator<double>&,UE::Math::TVector<double>&,UE::Math::TRotator<double>&,UE::Math::TVector<double>&,UE::Math::TRotator<double>&,FHitResult&,FHitResult&)", ForChar, DeltaTime, OutCameraLocation, OutCameraRotation, OldCameraPos, OldCameraRotator, ASAPos, ASARotator, OldCameraResult, ASAResult); }
	bool IsFirstPerson() { return NativeCall<bool>(this, "AShooterPlayerCameraManager.IsFirstPerson()"); }
	void LimitViewPitch(UE::Math::TRotator<double>& ViewRotation, float InViewPitchMin, float InViewPitchMax) { NativeCall<void, UE::Math::TRotator<double>&, float, float>(this, "AShooterPlayerCameraManager.LimitViewPitch(UE::Math::TRotator<double>&,float,float)", ViewRotation, InViewPitchMin, InViewPitchMax); }
	void SetLastCameraTransitionPointLocation(const UE::Math::TVector<double>& NewLastCameraTransitionPointLocation) { NativeCall<void, const UE::Math::TVector<double>&>(this, "AShooterPlayerCameraManager.SetLastCameraTransitionPointLocation(UE::Math::TVector<double>&)", NewLastCameraTransitionPointLocation); }
	static bool ShouldUseASACamera(APrimalCharacter* ForChar, bool bCheckShouldSwitchToOldCamera) { return NativeCall<bool, APrimalCharacter*, bool>(nullptr, "AShooterPlayerCameraManager.ShouldUseASACamera(APrimalCharacter*,bool)", ForChar, bCheckShouldSwitchToOldCamera); }
	void HandleWheeledVehicle(AActor* TargetVehicle, UE::Math::TVector<double>& Loc, float DeltaTime) { NativeCall<void, AActor*, UE::Math::TVector<double>&, float>(this, "AShooterPlayerCameraManager.HandleWheeledVehicle(AActor*,UE::Math::TVector<double>&,float)", TargetVehicle, Loc, DeltaTime); }
	void StartSurfaceCamera(float fOnSurfaceTargetYaw, float fOnSurfaceTargetPitch, float fOnSurfaceTargetRoll, float fOnSurfaceCameraInterpolationSpeed, bool fUseSurfaceCameraInterpolation, const UE::Math::TVector<double>& fCameraOffset, bool fPassengerCamera) { NativeCall<void, float, float, float, float, bool, const UE::Math::TVector<double>&, bool>(this, "AShooterPlayerCameraManager.StartSurfaceCamera(float,float,float,float,bool,UE::Math::TVector<double>&,bool)", fOnSurfaceTargetYaw, fOnSurfaceTargetPitch, fOnSurfaceTargetRoll, fOnSurfaceCameraInterpolationSpeed, fUseSurfaceCameraInterpolation, fCameraOffset, fPassengerCamera); }
	void EndSurfaceCamera() { NativeCall<void>(this, "AShooterPlayerCameraManager.EndSurfaceCamera()"); }
	bool IsFreeAimActive() { return NativeCall<bool>(this, "AShooterPlayerCameraManager.IsFreeAimActive()"); }
	void StopCameraEffect(const FCameraEffectHandle& EffectHandle) { NativeCall<void, const FCameraEffectHandle&>(this, "AShooterPlayerCameraManager.StopCameraEffect(FCameraEffectHandle&)", EffectHandle); }
	void DisableSurfaceCameraInterpolation() { NativeCall<void>(this, "AShooterPlayerCameraManager.DisableSurfaceCameraInterpolation()"); }
	bool BPUpdateViewTarget(FTViewTarget& OutVT, float DeltaTime) { return NativeCall<bool, FTViewTarget&, float>(this, "AShooterPlayerCameraManager.BPUpdateViewTarget(FTViewTarget&,float)", OutVT, DeltaTime); }
	bool HandleLook(float Val) { return NativeCall<bool, float>(this, "AShooterPlayerCameraManager.HandleLook(float)", Val); }
	static unsigned char GetColorCodedStencil(EStencilAlliance::Type InAlliance, float HealthPercent) { return NativeCall<unsigned char, EStencilAlliance::Type, float>(nullptr, "AShooterPlayerCameraManager.GetColorCodedStencil(EStencilAlliance::Type,float)", InAlliance, HealthPercent); }
	void SetGameCameraCutThisFrame() { NativeCall<void>(this, "AShooterPlayerCameraManager.SetGameCameraCutThisFrame()"); }
	void ApplyCameraModifiers(float DeltaTime, FMinimalViewInfo& InOutPOV, bool IgnoredBasedOnModifiers) { NativeCall<void, float, FMinimalViewInfo&, bool>(this, "AShooterPlayerCameraManager.ApplyCameraModifiers(float,FMinimalViewInfo&,bool)", DeltaTime, InOutPOV, IgnoredBasedOnModifiers); }
	void GetCameraAimViewPoint(UE::Math::TVector<double>& OutCamLoc, UE::Math::TRotator<double>& OutCamRot) { NativeCall<void, UE::Math::TVector<double>&, UE::Math::TRotator<double>&>(this, "AShooterPlayerCameraManager.GetCameraAimViewPoint(UE::Math::TVector<double>&,UE::Math::TRotator<double>&)", OutCamLoc, OutCamRot); }
	FName GetCahcedCameraStyle() { using AsaReturnType = FName; alignas(AsaReturnType) unsigned char AsaReturnBytes[sizeof(AsaReturnType)]; auto* AsaReturnPointer = reinterpret_cast<AsaReturnType*>(AsaReturnBytes); auto* AsaReturnedPointer = NativeCall<AsaReturnType*, AsaReturnType*>(this, "AShooterPlayerCameraManager.GetCahcedCameraStyle()", AsaReturnPointer); if (AsaReturnedPointer != AsaReturnPointer) throw std::runtime_error("Unexpected native result buffer"); std::unique_ptr<AsaReturnType, void(*)(AsaReturnType*)> AsaReturnOwner(std::launder(AsaReturnPointer), [](AsaReturnType* value) { value->~AsaReturnType(); }); return MoveTemp(*AsaReturnOwner); }
	void InitializeFor(APlayerController* PC) { NativeCall<void, APlayerController*>(this, "AShooterPlayerCameraManager.InitializeFor(APlayerController*)", PC); }
	float GetTPVCollisionHeight(AActor* ForTarget, bool bIncludeHeightScalar) { return NativeCall<float, AActor*, bool>(this, "AShooterPlayerCameraManager.GetTPVCollisionHeight(AActor*,bool)", ForTarget, bIncludeHeightScalar); }
	float GetWorldCameraShakeScale(bool bForceReturnUserSettingScale) { return NativeCall<float, bool>(this, "AShooterPlayerCameraManager.GetWorldCameraShakeScale(bool)", bForceReturnUserSettingScale); }
	UE::Math::TVector<double>* GetLastCameraTransitionPointLocation(UE::Math::TVector<double>* result, APawn* TargetCharacter) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*, APawn*>(this, "AShooterPlayerCameraManager.GetLastCameraTransitionPointLocation(APawn*)", result, TargetCharacter); }
	bool GetActivePrimalCameraMode(FPrimalCameraMode& OutCameraMode) { return NativeCall<bool, FPrimalCameraMode&>(this, "AShooterPlayerCameraManager.GetActivePrimalCameraMode(FPrimalCameraMode&)", OutCameraMode); }
	bool ShouldLooslyAttachViewToHMDView() { return NativeCall<bool>(this, "AShooterPlayerCameraManager.ShouldLooslyAttachViewToHMDView()"); }
	void UpdateCamera(float DeltaTime) { NativeCall<void, float>(this, "AShooterPlayerCameraManager.UpdateCamera(float)", DeltaTime); }
	void UpdateCameraState(APrimalCharacter* ForChar) { NativeCall<void, APrimalCharacter*>(this, "AShooterPlayerCameraManager.UpdateCameraState(APrimalCharacter*)", ForChar); }
	EPrimalCameraState GetPrimalCameraState() { return NativeCall<EPrimalCameraState>(this, "AShooterPlayerCameraManager.GetPrimalCameraState()"); }
	UE::Math::TVector<double>* GetCameraLocation(UE::Math::TVector<double>* result) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*>(this, "AShooterPlayerCameraManager.GetCameraLocation()", result); }
	void StartSurfaceCameraForPassenger(float fOnSurfaceTargetPitch, UE::Math::TRotator<double>& ViewRotation, float fOnSurfaceTargetYaw, float fOnSurfaceTargetRoll) { NativeCall<void, float, UE::Math::TRotator<double>&, float, float>(this, "AShooterPlayerCameraManager.StartSurfaceCameraForPassenger(float,UE::Math::TRotator<double>&,float,float)", fOnSurfaceTargetPitch, ViewRotation, fOnSurfaceTargetYaw, fOnSurfaceTargetRoll); }
	bool HandleTurn(float Val) { return NativeCall<bool, float>(this, "AShooterPlayerCameraManager.HandleTurn(float)", Val); }
	bool BPUpdateViewTarget_Implementation(FTViewTarget& OutVT, float DeltaTime) { return NativeCall<bool, FTViewTarget&, float>(this, "AShooterPlayerCameraManager.BPUpdateViewTarget_Implementation(FTViewTarget&,float)", OutVT, DeltaTime); }
	UE::Math::TVector<double>* GetPrimalCameraCurrentPivotLocation(UE::Math::TVector<double>* result, APrimalCharacter* ForChar, bool bCheckShouldSwitchToOldCamera) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*, APrimalCharacter*, bool>(this, "AShooterPlayerCameraManager.GetPrimalCameraCurrentPivotLocation(APrimalCharacter*,bool)", result, ForChar, bCheckShouldSwitchToOldCamera); }
	void GetCameraAimViewPointNoModifiers(UE::Math::TVector<double>& OutCamLoc, UE::Math::TRotator<double>& OutCamRot, bool bNoTPVAim) { NativeCall<void, UE::Math::TVector<double>&, UE::Math::TRotator<double>&, bool>(this, "AShooterPlayerCameraManager.GetCameraAimViewPointNoModifiers(UE::Math::TVector<double>&,UE::Math::TRotator<double>&,bool)", OutCamLoc, OutCamRot, bNoTPVAim); }
	void ClearPrimalCameraMode() { NativeCall<void>(this, "AShooterPlayerCameraManager.ClearPrimalCameraMode()"); }
	UE::Math::TRotator<double>* CameraGetRotationForPawnMovementInput(UE::Math::TRotator<double>* result, const APrimalCharacter* forPawn, const UE::Math::TRotator<double>& InControlRotation) { return NativeCall<UE::Math::TRotator<double>*, UE::Math::TRotator<double>*, const APrimalCharacter*, const UE::Math::TRotator<double>&>(this, "AShooterPlayerCameraManager.CameraGetRotationForPawnMovementInput(APrimalCharacter*,UE::Math::TRotator<double>&)", result, forPawn, InControlRotation); }
	bool HandleLook_Implementation(float Val) { return NativeCall<bool, float>(this, "AShooterPlayerCameraManager.HandleLook_Implementation(float)", Val); }
	void CheckForCameraStyleChanged(const FName& NewCameraStyle) { NativeCall<void, const FName&>(this, "AShooterPlayerCameraManager.CheckForCameraStyleChanged(FName&)", NewCameraStyle); }
	void LimitViewYaw(UE::Math::TRotator<double>& ViewRotation, float InViewYawMin, float InViewYawMax) { NativeCall<void, UE::Math::TRotator<double>&, float, float>(this, "AShooterPlayerCameraManager.LimitViewYaw(UE::Math::TRotator<double>&,float,float)", ViewRotation, InViewYawMin, InViewYawMax); }
	int GetCurrentZoomLevel() { return NativeCall<int>(this, "AShooterPlayerCameraManager.GetCurrentZoomLevel()"); }
	void SetPrimalCameraMode(int CameraModeIndex, AActor* Source) { NativeCall<void, int, AActor*>(this, "AShooterPlayerCameraManager.SetPrimalCameraMode(int,AActor*)", CameraModeIndex, Source); }
	UObject* GetBlendableFromMIC(UMaterialInterface* InInterface) { return NativeCall<UObject*, UMaterialInterface*>(this, "AShooterPlayerCameraManager.GetBlendableFromMIC(UMaterialInterface*)", InInterface); }
	UE::Math::TRotator<double>* CameraGetRotationForPawnMovementInput_Implementation(UE::Math::TRotator<double>* result, const APrimalCharacter* forPawn, const UE::Math::TRotator<double>& InControlRotation) { return NativeCall<UE::Math::TRotator<double>*, UE::Math::TRotator<double>*, const APrimalCharacter*, const UE::Math::TRotator<double>&>(this, "AShooterPlayerCameraManager.CameraGetRotationForPawnMovementInput_Implementation(APrimalCharacter*,UE::Math::TRotator<double>&)", result, forPawn, InControlRotation); }
	bool IsInFrustum(const UE::Math::TVector<double>& BoxLocation, const UE::Math::TVector<double>& BoxExtents) { return NativeCall<bool, const UE::Math::TVector<double>&, const UE::Math::TVector<double>&>(this, "AShooterPlayerCameraManager.IsInFrustum(UE::Math::TVector<double>&,UE::Math::TVector<double>&)", BoxLocation, BoxExtents); }
	float PrimalCameraFloatSpringInterp(float Current, float Target, FFloatSpringState& SpringState, float Stiffness, float CriticalDamping, float DeltaTime, float Mass, float TargetVelocityAmount, bool bClamp, float MinValue, float MaxValue, bool bInitializeFromTarget) { return NativeCall<float, float, float, FFloatSpringState&, float, float, float, float, float, bool, float, float, bool>(this, "AShooterPlayerCameraManager.PrimalCameraFloatSpringInterp(float,float,FFloatSpringState&,float,float,float,float,float,bool,float,float,bool)", Current, Target, SpringState, Stiffness, CriticalDamping, DeltaTime, Mass, TargetVelocityAmount, bClamp, MinValue, MaxValue, bInitializeFromTarget); }
	int GetCurrentMaxZoomLevel() { return NativeCall<int>(this, "AShooterPlayerCameraManager.GetCurrentMaxZoomLevel()"); }
	bool ShouldUseSlowInterpToOldCamera(APrimalCharacter* ForChar) { return NativeCall<bool, APrimalCharacter*>(this, "AShooterPlayerCameraManager.ShouldUseSlowInterpToOldCamera(APrimalCharacter*)", ForChar); }
	bool HandleTurn_Implementation(float Val) { return NativeCall<bool, float>(this, "AShooterPlayerCameraManager.HandleTurn_Implementation(float)", Val); }
	FName GetCameraStyle() { using AsaReturnType = FName; alignas(AsaReturnType) unsigned char AsaReturnBytes[sizeof(AsaReturnType)]; auto* AsaReturnPointer = reinterpret_cast<AsaReturnType*>(AsaReturnBytes); auto* AsaReturnedPointer = NativeCall<AsaReturnType*, AsaReturnType*>(this, "AShooterPlayerCameraManager.GetCameraStyle()", AsaReturnPointer); if (AsaReturnedPointer != AsaReturnPointer) throw std::runtime_error("Unexpected native result buffer"); std::unique_ptr<AsaReturnType, void(*)(AsaReturnType*)> AsaReturnOwner(std::launder(AsaReturnPointer), [](AsaReturnType* value) { value->~AsaReturnType(); }); return MoveTemp(*AsaReturnOwner); }
	void UpdateViewTarget(FTViewTarget& OutVT, float DeltaTime) { NativeCall<void, FTViewTarget&, float>(this, "AShooterPlayerCameraManager.UpdateViewTarget(FTViewTarget&,float)", OutVT, DeltaTime); }
	void ResetThirdPersonLerp() { NativeCall<void>(this, "AShooterPlayerCameraManager.ResetThirdPersonLerp()"); }
	void GetCameraViewPointNoModifiers(UE::Math::TVector<double>& OutCamLoc, UE::Math::TRotator<double>& OutCamRot) { NativeCall<void, UE::Math::TVector<double>&, UE::Math::TRotator<double>&>(this, "AShooterPlayerCameraManager.GetCameraViewPointNoModifiers(UE::Math::TVector<double>&,UE::Math::TRotator<double>&)", OutCamLoc, OutCamRot); }
	UE::Math::TVector<double>* GetPrimalCameraCurrentPivotLocationOffset(UE::Math::TVector<double>* result, APrimalCharacter* ForChar, bool bCheckShouldSwitchToOldCamera) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*, APrimalCharacter*, bool>(this, "AShooterPlayerCameraManager.GetPrimalCameraCurrentPivotLocationOffset(APrimalCharacter*,bool)", result, ForChar, bCheckShouldSwitchToOldCamera); }
	void SetLastTargetLocationLoc(UE::Math::TVector<double>* NewTargetLocationLoc) { if (!NewTargetLocationLoc) throw std::invalid_argument("Null native value parameter"); return NativeCall<void, UE :: Math :: TVector < double >>(this, "AShooterPlayerCameraManager.SetLastTargetLocationLoc(UE::Math::TVector<double>)", *NewTargetLocationLoc); }
};
