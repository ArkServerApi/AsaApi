#pragma once
#include "BulkForward.h"
#include "AActor.h"

struct APlayerCameraManager : public AActor
{
public:
	APlayerCameraManager() = delete;
	~APlayerCameraManager() = delete;
	APlayerCameraManager(const APlayerCameraManager&) = delete;
	APlayerCameraManager& operator=(const APlayerCameraManager&) = delete;
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("APlayerCameraManager"); }

	FName& CameraStyleField() { return *GetNativePointerField<FName*>(this, "APlayerCameraManager.CameraStyle"); }
	float& DefaultFOVField() { return *GetNativePointerField<float*>(this, "APlayerCameraManager.DefaultFOV"); }
	float& LockedFOVField() { return *GetNativePointerField<float*>(this, "APlayerCameraManager.LockedFOV"); }
	float& DefaultOrthoWidthField() { return *GetNativePointerField<float*>(this, "APlayerCameraManager.DefaultOrthoWidth"); }
	float& LockedOrthoWidthField() { return *GetNativePointerField<float*>(this, "APlayerCameraManager.LockedOrthoWidth"); }
	float& DefaultAspectRatioField() { return *GetNativePointerField<float*>(this, "APlayerCameraManager.DefaultAspectRatio"); }
	FLinearColor& FadeColorField() { return *GetNativePointerField<FLinearColor*>(this, "APlayerCameraManager.FadeColor"); }
	float& FadeAmountField() { return *GetNativePointerField<float*>(this, "APlayerCameraManager.FadeAmount"); }
	UE::Math::TVector<double>& ColorScaleField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "APlayerCameraManager.ColorScale"); }
	UE::Math::TVector<double>& DesiredColorScaleField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "APlayerCameraManager.DesiredColorScale"); }
	UE::Math::TVector<double>& OriginalColorScaleField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "APlayerCameraManager.OriginalColorScale"); }
	float& ColorScaleInterpDurationField() { return *GetNativePointerField<float*>(this, "APlayerCameraManager.ColorScaleInterpDuration"); }
	double& ColorScaleInterpStartTimeField() { return *GetNativePointerField<double*>(this, "APlayerCameraManager.ColorScaleInterpStartTime"); }
	FTViewTarget& ViewTargetField() { return *GetNativePointerField<FTViewTarget*>(this, "APlayerCameraManager.ViewTarget"); }
	FTViewTarget& PendingViewTargetField() { return *GetNativePointerField<FTViewTarget*>(this, "APlayerCameraManager.PendingViewTarget"); }
	float& BlendTimeToGoField() { return *GetNativePointerField<float*>(this, "APlayerCameraManager.BlendTimeToGo"); }
	FViewTargetTransitionParams& BlendParamsField() { return *GetNativePointerField<FViewTargetTransitionParams*>(this, "APlayerCameraManager.BlendParams"); }
	FCameraCacheEntry& CameraCachePrivateField() { return *GetNativePointerField<FCameraCacheEntry*>(this, "APlayerCameraManager.CameraCachePrivate"); }
	FCameraCacheEntry& LastFrameCameraCachePrivateField() { return *GetNativePointerField<FCameraCacheEntry*>(this, "APlayerCameraManager.LastFrameCameraCachePrivate"); }
	float& FreeCamDistanceField() { return *GetNativePointerField<float*>(this, "APlayerCameraManager.FreeCamDistance"); }
	UE::Math::TVector<double>& FreeCamOffsetField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "APlayerCameraManager.FreeCamOffset"); }
	UE::Math::TVector<double>& ViewTargetOffsetField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "APlayerCameraManager.ViewTargetOffset"); }
	FOnAudioFadeChangeSignature& OnAudioFadeChangeEventField() { return *GetNativePointerField<FOnAudioFadeChangeSignature*>(this, "APlayerCameraManager.OnAudioFadeChangeEvent"); }
	UE::Math::TVector2<double>& FadeAlphaField() { return *GetNativePointerField<UE::Math::TVector2<double>*>(this, "APlayerCameraManager.FadeAlpha"); }
	float& FadeTimeField() { return *GetNativePointerField<float*>(this, "APlayerCameraManager.FadeTime"); }
	float& FadeTimeRemainingField() { return *GetNativePointerField<float*>(this, "APlayerCameraManager.FadeTimeRemaining"); }
	TArray<float, TSizedDefaultAllocator<32> >& PostProcessBlendCacheWeightsField() { return *GetNativePointerField<TArray<float, TSizedDefaultAllocator<32> >*>(this, "APlayerCameraManager.PostProcessBlendCacheWeights"); }
	float& AutoPlaneShiftField() { return *GetNativePointerField<float*>(this, "APlayerCameraManager.AutoPlaneShift"); }
	float& ViewPitchMinField() { return *GetNativePointerField<float*>(this, "APlayerCameraManager.ViewPitchMin"); }
	float& ViewPitchMaxField() { return *GetNativePointerField<float*>(this, "APlayerCameraManager.ViewPitchMax"); }
	float& ViewYawMinField() { return *GetNativePointerField<float*>(this, "APlayerCameraManager.ViewYawMin"); }
	float& ViewYawMaxField() { return *GetNativePointerField<float*>(this, "APlayerCameraManager.ViewYawMax"); }
	float& ViewRollMinField() { return *GetNativePointerField<float*>(this, "APlayerCameraManager.ViewRollMin"); }
	float& ViewRollMaxField() { return *GetNativePointerField<float*>(this, "APlayerCameraManager.ViewRollMax"); }
	float& TimeSinceLastServerUpdateCameraField() { return *GetNativePointerField<float*>(this, "APlayerCameraManager.TimeSinceLastServerUpdateCamera"); }
	float& ServerUpdateCameraTimeoutField() { return *GetNativePointerField<float*>(this, "APlayerCameraManager.ServerUpdateCameraTimeout"); }
	FTimerHandle& SwapPendingViewTargetWhenUsingClientSideCameraUpdatesTimerHandleField() { return *GetNativePointerField<FTimerHandle*>(this, "APlayerCameraManager.SwapPendingViewTargetWhenUsingClientSideCameraUpdatesTimerHandle"); }
	UE::Math::TVector<double>& TPVCameraOffsetField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "APlayerCameraManager.TPVCameraOffset"); }
	float& TPVCameraCollisionHeightScalerField() { return *GetNativePointerField<float*>(this, "APlayerCameraManager.TPVCameraCollisionHeightScaler"); }
	BitFieldValue<bool, unsigned __int32> bIsOrthographic() { return { this, "APlayerCameraManager.bIsOrthographic"}; }
	BitFieldValue<bool, unsigned __int32> bAutoCalculateOrthoPlanes() { return { this, "APlayerCameraManager.bAutoCalculateOrthoPlanes"}; }
	BitFieldValue<bool, unsigned __int32> bUpdateOrthoPlanes() { return { this, "APlayerCameraManager.bUpdateOrthoPlanes"}; }
	BitFieldValue<bool, unsigned __int32> bUseCameraHeightAsViewTarget() { return { this, "APlayerCameraManager.bUseCameraHeightAsViewTarget"}; }
	BitFieldValue<bool, unsigned __int32> bDefaultConstrainAspectRatio() { return { this, "APlayerCameraManager.bDefaultConstrainAspectRatio"}; }
	BitFieldValue<bool, unsigned __int32> bEnableFading() { return { this, "APlayerCameraManager.bEnableFading"}; }
	BitFieldValue<bool, unsigned __int32> bFadeAudio() { return { this, "APlayerCameraManager.bFadeAudio"}; }
	BitFieldValue<bool, unsigned __int32> bEnableColorScaling() { return { this, "APlayerCameraManager.bEnableColorScaling"}; }
	BitFieldValue<bool, unsigned __int32> bEnableColorScaleInterp() { return { this, "APlayerCameraManager.bEnableColorScaleInterp"}; }
	BitFieldValue<bool, unsigned __int32> bClientSimulatingViewTarget() { return { this, "APlayerCameraManager.bClientSimulatingViewTarget"}; }
	BitFieldValue<bool, unsigned __int32> bUseClientSideCameraUpdates() { return { this, "APlayerCameraManager.bUseClientSideCameraUpdates"}; }
	BitFieldValue<bool, unsigned __int32> bDebugClientSideCamera() { return { this, "APlayerCameraManager.bDebugClientSideCamera"}; }
	BitFieldValue<bool, unsigned __int32> bShouldSendClientSideCameraUpdate() { return { this, "APlayerCameraManager.bShouldSendClientSideCameraUpdate"}; }
	BitFieldValue<bool, unsigned __int32> bGameCameraCutThisFrame() { return { this, "APlayerCameraManager.bGameCameraCutThisFrame"}; }
	BitFieldValue<bool, unsigned __int32> bHoldFadeWhenFinished() { return { this, "APlayerCameraManager.bHoldFadeWhenFinished"}; }
	BitFieldValue<bool, unsigned __int32> bAutoAnimateFade() { return { this, "APlayerCameraManager.bAutoAnimateFade"}; }
	BitFieldValue<bool, unsigned __int32> bAlwaysApplyModifiers() { return { this, "APlayerCameraManager.bAlwaysApplyModifiers"}; }
	void SwapPendingViewTargetWhenUsingClientSideCameraUpdates() { NativeCall<void>(this, "APlayerCameraManager.SwapPendingViewTargetWhenUsingClientSideCameraUpdates()"); }
	void UpdateCamera(float DeltaTime) { NativeCall<void, float>(this, "APlayerCameraManager.UpdateCamera(float)", DeltaTime); }
	bool AllowPhotographyMode() { return NativeCall<bool>(this, "APlayerCameraManager.AllowPhotographyMode()"); }
	void FillCameraCache(const FMinimalViewInfo& NewInfo) { NativeCall<void, const FMinimalViewInfo&>(this, "APlayerCameraManager.FillCameraCache(FMinimalViewInfo&)", NewInfo); }
	void OnPhotographySessionEnd_Implementation() { NativeCall<void>(this, "APlayerCameraManager.OnPhotographySessionEnd_Implementation()"); }
	bool AddCameraModifierToList(UCameraModifier* NewModifier) { return NativeCall<bool, UCameraModifier*>(this, "APlayerCameraManager.AddCameraModifierToList(UCameraModifier*)", NewModifier); }
	void UpdateViewTarget(FTViewTarget& OutVT, float DeltaTime) { NativeCall<void, FTViewTarget&, float>(this, "APlayerCameraManager.UpdateViewTarget(FTViewTarget&,float)", OutVT, DeltaTime); }
	void SetGameCameraCutThisFrame() { NativeCall<void>(this, "APlayerCameraManager.SetGameCameraCutThisFrame()"); }
	void ApplyCameraModifiers(float DeltaTime, FMinimalViewInfo& InOutPOV, bool IgnoredBasedOnModifiers) { NativeCall<void, float, FMinimalViewInfo&, bool>(this, "APlayerCameraManager.ApplyCameraModifiers(float,FMinimalViewInfo&,bool)", DeltaTime, InOutPOV, IgnoredBasedOnModifiers); }
	void SetLastFrameCameraCachePOV(const FMinimalViewInfo& InPOV) { NativeCall<void, const FMinimalViewInfo&>(this, "APlayerCameraManager.SetLastFrameCameraCachePOV(FMinimalViewInfo&)", InPOV); }
	const FMinimalViewInfo& GetCameraCacheView() { return NativeCall<const FMinimalViewInfo&>(this, "APlayerCameraManager.GetCameraCacheView()"); }
	bool ShouldTickIfViewportsOnly() { return NativeCall<bool>(this, "APlayerCameraManager.ShouldTickIfViewportsOnly()"); }
	void UnlockOrthoWidth() { NativeCall<void>(this, "APlayerCameraManager.UnlockOrthoWidth()"); }
	bool UpdatePhotographyCamera(FMinimalViewInfo& NewPOV) { return NativeCall<bool, FMinimalViewInfo&>(this, "APlayerCameraManager.UpdatePhotographyCamera(FMinimalViewInfo&)", NewPOV); }
	void ClearCachedPPBlends() { NativeCall<void>(this, "APlayerCameraManager.ClearCachedPPBlends()"); }
	void UpdateCameraPhotographyOnly() { NativeCall<void>(this, "APlayerCameraManager.UpdateCameraPhotographyOnly()"); }
	void Destroyed() { NativeCall<void>(this, "APlayerCameraManager.Destroyed()"); }
	void UpdateCameraLensEffects(const FTViewTarget& OutVT) { NativeCall<void, const FTViewTarget&>(this, "APlayerCameraManager.UpdateCameraLensEffects(FTViewTarget&)", OutVT); }
	APlayerController* GetOwningPlayerController() { return NativeCall<APlayerController*>(this, "APlayerCameraManager.GetOwningPlayerController()"); }
	void LimitViewPitch(UE::Math::TRotator<double>& ViewRotation, float InViewPitchMin, float InViewPitchMax) { NativeCall<void, UE::Math::TRotator<double>&, float, float>(this, "APlayerCameraManager.LimitViewPitch(UE::Math::TRotator<double>&,float,float)", ViewRotation, InViewPitchMin, InViewPitchMax); }
	void StopAllInstancesOfCameraAnim(UCameraAnim* Anim, bool bImmediate) { NativeCall<void, UCameraAnim*, bool>(this, "APlayerCameraManager.StopAllInstancesOfCameraAnim(UCameraAnim*,bool)", Anim, bImmediate); }
	UCameraAnimInst* PlayCameraAnim(UCameraAnim* Anim, float Rate, float Scale, float BlendInTime, float BlendOutTime, bool bLoop, bool bRandomStartTime, float Duration, ECameraShakePlaySpace PlaySpace, UE::Math::TRotator<double>* UserPlaySpaceRot) { if (!UserPlaySpaceRot) throw std::invalid_argument("Null native value parameter"); return NativeCall<UCameraAnimInst *, UCameraAnim *, float, float, float, float, bool, bool, float, ECameraShakePlaySpace, UE :: Math :: TRotator < double >>(this, "APlayerCameraManager.PlayCameraAnim(UCameraAnim*,float,float,float,float,bool,bool,float,ECameraShakePlaySpace,UE::Math::TRotator<double>)", Anim, Rate, Scale, BlendInTime, BlendOutTime, bLoop, bRandomStartTime, Duration, PlaySpace, *UserPlaySpaceRot); }
	void SetDesiredColorScale(UE::Math::TVector<double>* NewColorScale, float InterpTime) { if (!NewColorScale) throw std::invalid_argument("Null native value parameter"); return NativeCall<void, UE :: Math :: TVector < double >, float>(this, "APlayerCameraManager.SetDesiredColorScale(UE::Math::TVector<double>,float)", *NewColorScale, InterpTime); }
	void EndPlay(EEndPlayReason::Type EndPlayReason) { NativeCall<void, EEndPlayReason::Type>(this, "APlayerCameraManager.EndPlay(EEndPlayReason::Type)", EndPlayReason); }
	void GetCameraCacheLocationAndRotationForServer(UE::Math::TVector<double>& OutLocation, UE::Math::TRotator<double>& OutRotation) { NativeCall<void, UE::Math::TVector<double>&, UE::Math::TRotator<double>&>(this, "APlayerCameraManager.GetCameraCacheLocationAndRotationForServer(UE::Math::TVector<double>&,UE::Math::TRotator<double>&)", OutLocation, OutRotation); }
	void GetCameraViewPoint(UE::Math::TVector<double>& OutCamLoc, UE::Math::TRotator<double>& OutCamRot) { NativeCall<void, UE::Math::TVector<double>&, UE::Math::TRotator<double>&>(this, "APlayerCameraManager.GetCameraViewPoint(UE::Math::TVector<double>&,UE::Math::TRotator<double>&)", OutCamLoc, OutCamRot); }
	void PhotographyCameraModify_Implementation(UE::Math::TVector<double>* NewCameraLocation, UE::Math::TVector<double>* PreviousCameraLocation, UE::Math::TVector<double>* OriginalCameraLocation, UE::Math::TVector<double>& OutCameraLocation) { if (!NewCameraLocation) throw std::invalid_argument("Null native value parameter"); if (!PreviousCameraLocation) throw std::invalid_argument("Null native value parameter"); if (!OriginalCameraLocation) throw std::invalid_argument("Null native value parameter"); return NativeCall<void, UE :: Math :: TVector < double >, UE :: Math :: TVector < double >, UE :: Math :: TVector < double >, UE :: Math :: TVector < double > &>(this, "APlayerCameraManager.PhotographyCameraModify_Implementation(UE::Math::TVector<double>,UE::Math::TVector<double>,UE::Math::TVector<double>,UE::Math::TVector<double>&)", *NewCameraLocation, *PreviousCameraLocation, *OriginalCameraLocation, OutCameraLocation); }
	void StopAllCameraShakes(bool bImmediately) { NativeCall<void, bool>(this, "APlayerCameraManager.StopAllCameraShakes(bool)", bImmediately); }
	void StopCameraAnimInst(UCameraAnimInst* AnimInst, bool bImmediate) { NativeCall<void, UCameraAnimInst*, bool>(this, "APlayerCameraManager.StopCameraAnimInst(UCameraAnimInst*,bool)", AnimInst, bImmediate); }
	bool RemoveCameraModifier(UCameraModifier* ModifierToRemove) { return NativeCall<bool, UCameraModifier*>(this, "APlayerCameraManager.RemoveCameraModifier(UCameraModifier*)", ModifierToRemove); }
	float GetFOVAngle() { return NativeCall<float>(this, "APlayerCameraManager.GetFOVAngle()"); }
	const FMinimalViewInfo& GetLastFrameCameraCacheView() { return NativeCall<const FMinimalViewInfo&>(this, "APlayerCameraManager.GetLastFrameCameraCacheView()"); }
	void InitializeFor(APlayerController* PC) { NativeCall<void, APlayerController*>(this, "APlayerCameraManager.InitializeFor(APlayerController*)", PC); }
	void ApplyWorldOffset(const UE::Math::TVector<double>& InOffset, bool bWorldShift) { NativeCall<void, const UE::Math::TVector<double>&, bool>(this, "APlayerCameraManager.ApplyWorldOffset(UE::Math::TVector<double>&,bool)", InOffset, bWorldShift); }
	UE::Math::TVector<double>* GetCameraLocation(UE::Math::TVector<double>* result) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*>(this, "APlayerCameraManager.GetCameraLocation()", result); }
	void GetLastFrameCameraCacheLocationAndRotationForServer(UE::Math::TVector<double>& OutLocation, UE::Math::TRotator<double>& OutRotation) { NativeCall<void, UE::Math::TVector<double>&, UE::Math::TRotator<double>&>(this, "APlayerCameraManager.GetLastFrameCameraCacheLocationAndRotationForServer(UE::Math::TVector<double>&,UE::Math::TRotator<double>&)", OutLocation, OutRotation); }
	void ApplyAudioFade() { NativeCall<void>(this, "APlayerCameraManager.ApplyAudioFade()"); }
	APawn* GetViewTargetPawn() { return NativeCall<APawn*>(this, "APlayerCameraManager.GetViewTargetPawn()"); }
	bool ShouldLooslyAttachViewToHMDView() { return NativeCall<bool>(this, "APlayerCameraManager.ShouldLooslyAttachViewToHMDView()"); }
	AActor* GetViewTarget() { return NativeCall<AActor*>(this, "APlayerCameraManager.GetViewTarget()"); }
	static UClass* StaticClass() { return AsaApi::ResolveClass("APlayerCameraManager"); }
	void DoUpdateCamera(float DeltaTime) { NativeCall<void, float>(this, "APlayerCameraManager.DoUpdateCamera(float)", DeltaTime); }
	void StopCameraShake(UCameraShakeBase* ShakeInst, bool bImmediately) { NativeCall<void, UCameraShakeBase*, bool>(this, "APlayerCameraManager.StopCameraShake(UCameraShakeBase*,bool)", ShakeInst, bImmediately); }
	void CleanUpAnimCamera(bool bDestroy) { NativeCall<void, bool>(this, "APlayerCameraManager.CleanUpAnimCamera(bool)", bDestroy); }
	void UpdatePhotographyPostProcessing(FPostProcessSettings& InOutPostProcessingSettings) { NativeCall<void, FPostProcessSettings&>(this, "APlayerCameraManager.UpdatePhotographyPostProcessing(FPostProcessSettings&)", InOutPostProcessingSettings); }
	void StopAudioFade() { NativeCall<void>(this, "APlayerCameraManager.StopAudioFade()"); }
	void UpdateViewTargetInternal(FTViewTarget& OutVT, float DeltaTime) { NativeCall<void, FTViewTarget&, float>(this, "APlayerCameraManager.UpdateViewTargetInternal(FTViewTarget&,float)", OutVT, DeltaTime); }
	void DisplayDebug(UCanvas* Canvas, const FDebugDisplayInfo& DebugDisplay, float& YL, float& YPos) { NativeCall<void, UCanvas*, const FDebugDisplayInfo&, float&, float&>(this, "APlayerCameraManager.DisplayDebug(UCanvas*,FDebugDisplayInfo&,float&,float&)", Canvas, DebugDisplay, YL, YPos); }
	void OnPhotographyMultiPartCaptureEnd_Implementation() { NativeCall<void>(this, "APlayerCameraManager.OnPhotographyMultiPartCaptureEnd_Implementation()"); }
	void PostInitializeComponents() { NativeCall<void>(this, "APlayerCameraManager.PostInitializeComponents()"); }
	void ClearCameraLensEffects() { NativeCall<void>(this, "APlayerCameraManager.ClearCameraLensEffects()"); }
	void SetCameraCachePOV(const FMinimalViewInfo& InPOV) { NativeCall<void, const FMinimalViewInfo&>(this, "APlayerCameraManager.SetCameraCachePOV(FMinimalViewInfo&)", InPOV); }
	void StopAllCameraShakesFromSource(UCameraShakeSourceComponent* SourceComponent, bool bImmediately) { NativeCall<void, UCameraShakeSourceComponent*, bool>(this, "APlayerCameraManager.StopAllCameraShakesFromSource(UCameraShakeSourceComponent*,bool)", SourceComponent, bImmediately); }
	void StopAllCameraAnims(bool bImmediate) { NativeCall<void, bool>(this, "APlayerCameraManager.StopAllCameraAnims(bool)", bImmediate); }
	void UnlockFOV() { NativeCall<void>(this, "APlayerCameraManager.UnlockFOV()"); }
	void ProcessViewRotation(float DeltaTime, UE::Math::TRotator<double>& OutViewRotation, UE::Math::TRotator<double>& OutDeltaRot) { NativeCall<void, float, UE::Math::TRotator<double>&, UE::Math::TRotator<double>&>(this, "APlayerCameraManager.ProcessViewRotation(float,UE::Math::TRotator<double>&,UE::Math::TRotator<double>&)", DeltaTime, OutViewRotation, OutDeltaRot); }
	void OnPhotographyMultiPartCaptureStart_Implementation() { NativeCall<void>(this, "APlayerCameraManager.OnPhotographyMultiPartCaptureStart_Implementation()"); }
	void SetFOV(float NewFOV) { NativeCall<void, float>(this, "APlayerCameraManager.SetFOV(float)", NewFOV); }
	void SetOrthoWidth(float OrthoWidth) { NativeCall<void, float>(this, "APlayerCameraManager.SetOrthoWidth(float)", OrthoWidth); }
	float GetWorldCameraShakeScale(bool bForceReturnUserSettingScale) { return NativeCall<float, bool>(this, "APlayerCameraManager.GetWorldCameraShakeScale(bool)", bForceReturnUserSettingScale); }
	void OnPhotographySessionStart_Implementation() { NativeCall<void>(this, "APlayerCameraManager.OnPhotographySessionStart_Implementation()"); }
	void StopCameraFade() { NativeCall<void>(this, "APlayerCameraManager.StopCameraFade()"); }
	void LimitViewYaw(UE::Math::TRotator<double>& ViewRotation, float InViewYawMin, float InViewYawMax) { NativeCall<void, UE::Math::TRotator<double>&, float, float>(this, "APlayerCameraManager.LimitViewYaw(UE::Math::TRotator<double>&,float,float)", ViewRotation, InViewYawMin, InViewYawMax); }
	void LimitViewRoll(UE::Math::TRotator<double>& ViewRotation, float InViewRollMin, float InViewRollMax) { NativeCall<void, UE::Math::TRotator<double>&, float, float>(this, "APlayerCameraManager.LimitViewRoll(UE::Math::TRotator<double>&,float,float)", ViewRotation, InViewRollMin, InViewRollMax); }
	bool IsOrthographic() { return NativeCall<bool>(this, "APlayerCameraManager.IsOrthographic()"); }
	UE::Math::TRotator<double>* GetCameraRotation(UE::Math::TRotator<double>* result) { return NativeCall<UE::Math::TRotator<double>*, UE::Math::TRotator<double>*>(this, "APlayerCameraManager.GetCameraRotation()", result); }
	bool BlueprintUpdateCamera(AActor* CameraTarget, UE::Math::TVector<double>& NewCameraLocation, UE::Math::TRotator<double>& NewCameraRotation, float& NewCameraFOV) { return NativeCall<bool, AActor*, UE::Math::TVector<double>&, UE::Math::TRotator<double>&, float&>(this, "APlayerCameraManager.BlueprintUpdateCamera(AActor*,UE::Math::TVector<double>&,UE::Math::TRotator<double>&,float&)", CameraTarget, NewCameraLocation, NewCameraRotation, NewCameraFOV); }
	float GetOrthoWidth() { return NativeCall<float>(this, "APlayerCameraManager.GetOrthoWidth()"); }
};
