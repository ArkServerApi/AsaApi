#pragma once
#include "BulkForward.h"
#include "USceneComponent.h"

struct UCameraComponent : public USceneComponent
{
public:
	UCameraComponent() = delete;
	~UCameraComponent() = delete;
	UCameraComponent(const UCameraComponent&) = delete;
	UCameraComponent& operator=(const UCameraComponent&) = delete;
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UCameraComponent"); }

	float& FieldOfViewField() { return *GetNativePointerField<float*>(this, "UCameraComponent.FieldOfView"); }
	float& FirstPersonFieldOfViewField() { return *GetNativePointerField<float*>(this, "UCameraComponent.FirstPersonFieldOfView"); }
	float& FirstPersonScaleField() { return *GetNativePointerField<float*>(this, "UCameraComponent.FirstPersonScale"); }
	float& OrthoWidthField() { return *GetNativePointerField<float*>(this, "UCameraComponent.OrthoWidth"); }
	bool& bAutoCalculateOrthoPlanesField() { return *GetNativePointerField<bool*>(this, "UCameraComponent.bAutoCalculateOrthoPlanes"); }
	float& AutoPlaneShiftField() { return *GetNativePointerField<float*>(this, "UCameraComponent.AutoPlaneShift"); }
	float& OrthoNearClipPlaneField() { return *GetNativePointerField<float*>(this, "UCameraComponent.OrthoNearClipPlane"); }
	float& OrthoFarClipPlaneField() { return *GetNativePointerField<float*>(this, "UCameraComponent.OrthoFarClipPlane"); }
	bool& bUpdateOrthoPlanesField() { return *GetNativePointerField<bool*>(this, "UCameraComponent.bUpdateOrthoPlanes"); }
	bool& bUseCameraHeightAsViewTargetField() { return *GetNativePointerField<bool*>(this, "UCameraComponent.bUseCameraHeightAsViewTarget"); }
	float& AspectRatioField() { return *GetNativePointerField<float*>(this, "UCameraComponent.AspectRatio"); }
	float& OverscanField() { return *GetNativePointerField<float*>(this, "UCameraComponent.Overscan"); }
	bool& bScaleResolutionWithOverscanField() { return *GetNativePointerField<bool*>(this, "UCameraComponent.bScaleResolutionWithOverscan"); }
	bool& bCropOverscanField() { return *GetNativePointerField<bool*>(this, "UCameraComponent.bCropOverscan"); }
	TEnumAsByte<ECameraProjectionMode::Type>& ProjectionModeField() { return *GetNativePointerField<TEnumAsByte<ECameraProjectionMode::Type>*>(this, "UCameraComponent.ProjectionMode"); }
	float& PostProcessBlendWeightField() { return *GetNativePointerField<float*>(this, "UCameraComponent.PostProcessBlendWeight"); }
	float& AdditiveFOVOffsetField() { return *GetNativePointerField<float*>(this, "UCameraComponent.AdditiveFOVOffset"); }
	TArray<float, TSizedDefaultAllocator<32> >& ExtraPostProcessBlendWeightsField() { return *GetNativePointerField<TArray<float, TSizedDefaultAllocator<32> >*>(this, "UCameraComponent.ExtraPostProcessBlendWeights"); }
	FPostProcessSettings& PostProcessSettingsField() { return *GetNativePointerField<FPostProcessSettings*>(this, "UCameraComponent.PostProcessSettings"); }
	BitFieldValue<bool, unsigned char> bConstrainAspectRatio() { return { this, "UCameraComponent.bConstrainAspectRatio"}; }
	BitFieldValue<bool, unsigned char> bOverrideAspectRatioAxisConstraint() { return { this, "UCameraComponent.bOverrideAspectRatioAxisConstraint"}; }
	BitFieldValue<bool, unsigned char> bUseFieldOfViewForLOD() { return { this, "UCameraComponent.bUseFieldOfViewForLOD"}; }
	BitFieldValue<bool, unsigned char> bLockToHmd() { return { this, "UCameraComponent.bLockToHmd"}; }
	BitFieldValue<bool, unsigned char> bUsePawnControlRotation() { return { this, "UCameraComponent.bUsePawnControlRotation"}; }
	BitFieldValue<bool, unsigned char> bEnableFirstPersonFieldOfView() { return { this, "UCameraComponent.bEnableFirstPersonFieldOfView"}; }
	BitFieldValue<bool, unsigned char> bEnableFirstPersonScale() { return { this, "UCameraComponent.bEnableFirstPersonScale"}; }
	BitFieldValue<bool, unsigned char> bUseAdditiveOffset() { return { this, "UCameraComponent.bUseAdditiveOffset"}; }
	void OnRegister() { NativeCall<void>(this, "UCameraComponent.OnRegister()"); }
	void HandleXRCamera(float DeltaTime) { NativeCall<void, float>(this, "UCameraComponent.HandleXRCamera(float)", DeltaTime); }
	void ClearExtraPostProcessBlends() { NativeCall<void>(this, "UCameraComponent.ClearExtraPostProcessBlends()"); }
	void GetCameraView(float DeltaTime, FMinimalViewInfo& DesiredView) { NativeCall<void, float, FMinimalViewInfo&>(this, "UCameraComponent.GetCameraView(float,FMinimalViewInfo&)", DeltaTime, DesiredView); }
	void SetFirstPersonScale(float InFirstPersonScale) { NativeCall<void, float>(this, "UCameraComponent.SetFirstPersonScale(float)", InFirstPersonScale); }
	void SetFirstPersonFieldOfView(float InFirstPersonFieldOfView) { NativeCall<void, float>(this, "UCameraComponent.SetFirstPersonFieldOfView(float)", InFirstPersonFieldOfView); }
	static UClass* StaticClass() { return AsaApi::ResolveClass("UCameraComponent"); }
	void SetFieldOfView(float InFieldOfView) { NativeCall<void, float>(this, "UCameraComponent.SetFieldOfView(float)", InFieldOfView); }
	void AddExtraPostProcessBlend(const FPostProcessSettings& PPSettings, float PPBlendWeight) { NativeCall<void, const FPostProcessSettings&, float>(this, "UCameraComponent.AddExtraPostProcessBlend(FPostProcessSettings&,float)", PPSettings, PPBlendWeight); }
	void NotifyCameraCut() { NativeCall<void>(this, "UCameraComponent.NotifyCameraCut()"); }
	void ClearAdditiveOffset() { NativeCall<void>(this, "UCameraComponent.ClearAdditiveOffset()"); }
};
