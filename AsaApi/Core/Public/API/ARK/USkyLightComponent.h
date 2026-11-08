#pragma once
#include "BulkForward.h"
#include "ULightComponentBase.h"

struct USkyLightComponent : public ULightComponentBase
{
public:
	USkyLightComponent() = delete;
	~USkyLightComponent() = delete;
	USkyLightComponent(const USkyLightComponent&) = delete;
	USkyLightComponent& operator=(const USkyLightComponent&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("USkyLightComponent"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("USkyLightComponent"); }

	bool& bRealTimeCaptureField() { return *GetNativePointerField<bool*>(this, "USkyLightComponent.bRealTimeCapture"); }
	float& SourceCubemapAngleField() { return *GetNativePointerField<float*>(this, "USkyLightComponent.SourceCubemapAngle"); }
	int& CubemapResolutionField() { return *GetNativePointerField<int*>(this, "USkyLightComponent.CubemapResolution"); }
	float& SkyDistanceThresholdField() { return *GetNativePointerField<float*>(this, "USkyLightComponent.SkyDistanceThreshold"); }
	bool& bCaptureEmissiveOnlyField() { return *GetNativePointerField<bool*>(this, "USkyLightComponent.bCaptureEmissiveOnly"); }
	bool& bLowerHemisphereIsBlackField() { return *GetNativePointerField<bool*>(this, "USkyLightComponent.bLowerHemisphereIsBlack"); }
	FLinearColor& LowerHemisphereColorField() { return *GetNativePointerField<FLinearColor*>(this, "USkyLightComponent.LowerHemisphereColor"); }
	float& OcclusionMaxDistanceField() { return *GetNativePointerField<float*>(this, "USkyLightComponent.OcclusionMaxDistance"); }
	float& ContrastField() { return *GetNativePointerField<float*>(this, "USkyLightComponent.Contrast"); }
	float& OcclusionExponentField() { return *GetNativePointerField<float*>(this, "USkyLightComponent.OcclusionExponent"); }
	float& MinOcclusionField() { return *GetNativePointerField<float*>(this, "USkyLightComponent.MinOcclusion"); }
	FColor& OcclusionTintField() { return *GetNativePointerField<FColor*>(this, "USkyLightComponent.OcclusionTint"); }
	float& CloudAmbientOcclusionStrengthField() { return *GetNativePointerField<float*>(this, "USkyLightComponent.CloudAmbientOcclusionStrength"); }
	float& CloudAmbientOcclusionExtentField() { return *GetNativePointerField<float*>(this, "USkyLightComponent.CloudAmbientOcclusionExtent"); }
	float& CloudAmbientOcclusionMapResolutionScaleField() { return *GetNativePointerField<float*>(this, "USkyLightComponent.CloudAmbientOcclusionMapResolutionScale"); }
	float& CloudAmbientOcclusionApertureScaleField() { return *GetNativePointerField<float*>(this, "USkyLightComponent.CloudAmbientOcclusionApertureScale"); }
	bool& bSavedConstructionScriptValuesValidField() { return *GetNativePointerField<bool*>(this, "USkyLightComponent.bSavedConstructionScriptValuesValid"); }
	bool& bHasEverCapturedField() { return *GetNativePointerField<bool*>(this, "USkyLightComponent.bHasEverCaptured"); }
	float& AverageBrightnessField() { return *GetNativePointerField<float*>(this, "USkyLightComponent.AverageBrightness"); }
	float& BlendFractionField() { return *GetNativePointerField<float*>(this, "USkyLightComponent.BlendFraction"); }
	float& BlendDestinationAverageBrightnessField() { return *GetNativePointerField<float*>(this, "USkyLightComponent.BlendDestinationAverageBrightness"); }
	FLinearColor& SpecifiedCubemapColorScaleField() { return *GetNativePointerField<FLinearColor*>(this, "USkyLightComponent.SpecifiedCubemapColorScale"); }
	FRenderCommandFence& IrradianceMapFenceField() { return *GetNativePointerField<FRenderCommandFence*>(this, "USkyLightComponent.IrradianceMapFence"); }
	FRenderCommandFence& ReleaseResourcesFenceField() { return *GetNativePointerField<FRenderCommandFence*>(this, "USkyLightComponent.ReleaseResourcesFence"); }
	FSkyLightSceneProxy*& SceneProxyField() { return *GetNativePointerField<FSkyLightSceneProxy**>(this, "USkyLightComponent.SceneProxy"); }
	BitFieldValue<bool, unsigned __int32> bCloudAmbientOcclusion() { return { this, "USkyLightComponent.bCloudAmbientOcclusion"}; }
	void UpdateOcclusionRenderingStateFast() { NativeCall<void>(this, "USkyLightComponent.UpdateOcclusionRenderingStateFast()"); }
	static void UpdateSkyCaptureContentsArray(UWorld* WorldToUpdate, TArray<USkyLightComponent*, TSizedDefaultAllocator<32> >& ComponentArray, bool bOperateOnBlendSource) { NativeCall<void, UWorld*, TArray<USkyLightComponent*, TSizedDefaultAllocator<32> >&, bool>(nullptr, "USkyLightComponent.UpdateSkyCaptureContentsArray(UWorld*,TArray<USkyLightComponent*,TSizedDefaultAllocator<32>>&,bool)", WorldToUpdate, ComponentArray, bOperateOnBlendSource); }
	void SetCubemapBlend(UTextureCube* SourceCubemap, UTextureCube* DestinationCubemap, float InBlendFraction) { NativeCall<void, UTextureCube*, UTextureCube*, float>(this, "USkyLightComponent.SetCubemapBlend(UTextureCube*,UTextureCube*,float)", SourceCubemap, DestinationCubemap, InBlendFraction); }
	void OnVisibilityChanged() { NativeCall<void>(this, "USkyLightComponent.OnVisibilityChanged()"); }
	void PostLoad() { NativeCall<void>(this, "USkyLightComponent.PostLoad()"); }
	void SetIntensity(float NewIntensity) { NativeCall<void, float>(this, "USkyLightComponent.SetIntensity(float)", NewIntensity); }
	void SendRenderTransform_Concurrent() { NativeCall<void>(this, "USkyLightComponent.SendRenderTransform_Concurrent()"); }
	void SetBlendDestinationCaptureIsDirty() { NativeCall<void>(this, "USkyLightComponent.SetBlendDestinationCaptureIsDirty()"); }
	void Serialize(FArchive& Ar) { NativeCall<void, FArchive&>(this, "USkyLightComponent.Serialize(FArchive&)", Ar); }
	void SetCubemap(UTextureCube* NewCubemap) { NativeCall<void, UTextureCube*>(this, "USkyLightComponent.SetCubemap(UTextureCube*)", NewCubemap); }
	void SetRealTimeCapture(bool bInRealTimeCapture) { NativeCall<void, bool>(this, "USkyLightComponent.SetRealTimeCapture(bool)", bInRealTimeCapture); }
	void DestroyRenderState_Concurrent() { NativeCall<void>(this, "USkyLightComponent.DestroyRenderState_Concurrent()"); }
	void CreateRenderState_Concurrent(FRegisterComponentContext* Context) { NativeCall<void, FRegisterComponentContext*>(this, "USkyLightComponent.CreateRenderState_Concurrent(FRegisterComponentContext*)", Context); }
	void SetCaptureIsDirty() { NativeCall<void>(this, "USkyLightComponent.SetCaptureIsDirty()"); }
	void PostInitProperties() { NativeCall<void>(this, "USkyLightComponent.PostInitProperties()"); }
	bool IsReadyForFinishDestroy() { return NativeCall<bool>(this, "USkyLightComponent.IsReadyForFinishDestroy()"); }
	void BeginDestroy() { NativeCall<void>(this, "USkyLightComponent.BeginDestroy()"); }
	static void UpdateSkyCaptureContents(UWorld* WorldToUpdate) { NativeCall<void, UWorld*>(nullptr, "USkyLightComponent.UpdateSkyCaptureContents(UWorld*)", WorldToUpdate); }
	void UpdateLimitedRenderingStateFast() { NativeCall<void>(this, "USkyLightComponent.UpdateLimitedRenderingStateFast()"); }
};
