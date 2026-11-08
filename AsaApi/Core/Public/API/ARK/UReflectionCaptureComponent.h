#pragma once
#include "BulkForward.h"
#include "USceneComponent.h"

struct UReflectionCaptureComponent : public USceneComponent
{
public:
	UReflectionCaptureComponent() = delete;
	~UReflectionCaptureComponent() = delete;
	UReflectionCaptureComponent(const UReflectionCaptureComponent&) = delete;
	UReflectionCaptureComponent& operator=(const UReflectionCaptureComponent&) = delete;
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UReflectionCaptureComponent"); }

	EReflectionSourceType& ReflectionSourceTypeField() { return *GetNativePointerField<EReflectionSourceType*>(this, "UReflectionCaptureComponent.ReflectionSourceType"); }
	float& SourceCubemapAngleField() { return *GetNativePointerField<float*>(this, "UReflectionCaptureComponent.SourceCubemapAngle"); }
	float& BrightnessField() { return *GetNativePointerField<float*>(this, "UReflectionCaptureComponent.Brightness"); }
	UE::Math::TVector<double>& CaptureOffsetField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "UReflectionCaptureComponent.CaptureOffset"); }
	FLinearColor& RuntimeSkylightScaleField() { return *GetNativePointerField<FLinearColor*>(this, "UReflectionCaptureComponent.RuntimeSkylightScale"); }
	FGuid& MapBuildDataIdField() { return *GetNativePointerField<FGuid*>(this, "UReflectionCaptureComponent.MapBuildDataId"); }
	FReflectionTextureCubeResource*& EncodedHDRCubemapTextureField() { return *GetNativePointerField<FReflectionTextureCubeResource**>(this, "UReflectionCaptureComponent.EncodedHDRCubemapTexture"); }
	bool& bRuntimeCaptureField() { return *GetNativePointerField<bool*>(this, "UReflectionCaptureComponent.bRuntimeCapture"); }
	float& MaxViewDistanceField() { return *GetNativePointerField<float*>(this, "UReflectionCaptureComponent.MaxViewDistance"); }
	bool& bFiniteFarPlaneField() { return *GetNativePointerField<bool*>(this, "UReflectionCaptureComponent.bFiniteFarPlane"); }
	FReflectionCaptureProxy*& SceneProxyField() { return *GetNativePointerField<FReflectionCaptureProxy**>(this, "UReflectionCaptureComponent.SceneProxy"); }
	unsigned int& RuntimeLastRenderedFrameField() { return *GetNativePointerField<unsigned int*>(this, "UReflectionCaptureComponent.RuntimeLastRenderedFrame"); }
	bool& bRefreshRequestedField() { return *GetNativePointerField<bool*>(this, "UReflectionCaptureComponent.bRefreshRequested"); }
	bool& bFastRenderRequestedField() { return *GetNativePointerField<bool*>(this, "UReflectionCaptureComponent.bFastRenderRequested"); }
	bool& bSmoothBlendRequestedField() { return *GetNativePointerField<bool*>(this, "UReflectionCaptureComponent.bSmoothBlendRequested"); }
	bool& bRefreshInFlightField() { return *GetNativePointerField<bool*>(this, "UReflectionCaptureComponent.bRefreshInFlight"); }
	bool& bNeedsRecaptureOrUploadField() { return *GetNativePointerField<bool*>(this, "UReflectionCaptureComponent.bNeedsRecaptureOrUpload"); }
	float& CachedAverageBrightnessField() { return *GetNativePointerField<float*>(this, "UReflectionCaptureComponent.CachedAverageBrightness"); }
	FRenderCommandFence& ReleaseResourcesFenceField() { return *GetNativePointerField<FRenderCommandFence*>(this, "UReflectionCaptureComponent.ReleaseResourcesFence"); }
	float& CaptureBrightnessField() { return *GetNativePointerField<float*>(this, "UReflectionCaptureComponent.CaptureBrightness"); }
	FName& PresistentCaptureParentField() { return *GetNativePointerField<FName*>(this, "UReflectionCaptureComponent.PresistentCaptureParent"); }
	FLinearColor& SkyColorField() { return *GetNativePointerField<FLinearColor*>(this, "UReflectionCaptureComponent.SkyColor"); }
	FLinearColor& GroundColorField() { return *GetNativePointerField<FLinearColor*>(this, "UReflectionCaptureComponent.GroundColor"); }
	float& SkyIBLIntensityField() { return *GetNativePointerField<float*>(this, "UReflectionCaptureComponent.SkyIBLIntensity"); }
	float& FadeOutDistanceStartField() { return *GetNativePointerField<float*>(this, "UReflectionCaptureComponent.FadeOutDistanceStart"); }
	float& FadeOutDistanceEndField() { return *GetNativePointerField<float*>(this, "UReflectionCaptureComponent.FadeOutDistanceEnd"); }
	bool& bUseSeperateShadowFadeOutField() { return *GetNativePointerField<bool*>(this, "UReflectionCaptureComponent.bUseSeperateShadowFadeOut"); }
	float& ShadowFadeOutDistanceStartField() { return *GetNativePointerField<float*>(this, "UReflectionCaptureComponent.ShadowFadeOutDistanceStart"); }
	float& ShadowFadeOutDistanceEndField() { return *GetNativePointerField<float*>(this, "UReflectionCaptureComponent.ShadowFadeOutDistanceEnd"); }
	int& BouncesField() { return *GetNativePointerField<int*>(this, "UReflectionCaptureComponent.Bounces"); }
	TArray<float, TSizedDefaultAllocator<32> >& BouncesIntensityField() { return *GetNativePointerField<TArray<float, TSizedDefaultAllocator<32> >*>(this, "UReflectionCaptureComponent.BouncesIntensity"); }
	float& AtmosphericFogIntensityField() { return *GetNativePointerField<float*>(this, "UReflectionCaptureComponent.AtmosphericFogIntensity"); }
	float& TheTrueSkyBrightnessField() { return *GetNativePointerField<float*>(this, "UReflectionCaptureComponent.TheTrueSkyBrightness"); }
	UE::Math::TVector<double>& TrueSkyColorMultiplierField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "UReflectionCaptureComponent.TrueSkyColorMultiplier"); }
	float& ParentBrightnessMultiplierField() { return *GetNativePointerField<float*>(this, "UReflectionCaptureComponent.ParentBrightnessMultiplier"); }
	float& SelfAndChildBrightnessMultiplierField() { return *GetNativePointerField<float*>(this, "UReflectionCaptureComponent.SelfAndChildBrightnessMultiplier"); }
	float& AmbientShadowIntensityField() { return *GetNativePointerField<float*>(this, "UReflectionCaptureComponent.AmbientShadowIntensity"); }
	float& AmbientLightInfluenceField() { return *GetNativePointerField<float*>(this, "UReflectionCaptureComponent.AmbientLightInfluence"); }
	float& AmbientShadowNearField() { return *GetNativePointerField<float*>(this, "UReflectionCaptureComponent.AmbientShadowNear"); }
	float& AmbientShadowFarField() { return *GetNativePointerField<float*>(this, "UReflectionCaptureComponent.AmbientShadowFar"); }
	float& AmbientShadowFadeDistanceFractionField() { return *GetNativePointerField<float*>(this, "UReflectionCaptureComponent.AmbientShadowFadeDistanceFraction"); }
	FLinearColor& AmbientTranslucencyColorField() { return *GetNativePointerField<FLinearColor*>(this, "UReflectionCaptureComponent.AmbientTranslucencyColor"); }
	int& AmbientShadowCaptureObjectLayerMaskField() { return *GetNativePointerField<int*>(this, "UReflectionCaptureComponent.AmbientShadowCaptureObjectLayerMask"); }
	float& AmbientShadowCaptureScaleField() { return *GetNativePointerField<float*>(this, "UReflectionCaptureComponent.AmbientShadowCaptureScale"); }
	int& MaxAmbientShadowCaptureSizeField() { return *GetNativePointerField<int*>(this, "UReflectionCaptureComponent.MaxAmbientShadowCaptureSize"); }
	TEnumAsByte<EReflectionDFAOOption::Type>& DFAOOptionField() { return *GetNativePointerField<TEnumAsByte<EReflectionDFAOOption::Type>*>(this, "UReflectionCaptureComponent.DFAOOption"); }
	BitFieldValue<bool, unsigned __int32> bBakeAndStream() { return { this, "UReflectionCaptureComponent.bBakeAndStream"}; }
	BitFieldValue<bool, unsigned __int32> bUseGlobalBrightness() { return { this, "UReflectionCaptureComponent.bUseGlobalBrightness"}; }
	BitFieldValue<bool, unsigned __int32> bLockCaptureData() { return { this, "UReflectionCaptureComponent.bLockCaptureData"}; }
	BitFieldValue<bool, unsigned __int32> bUseGlobalGroundColorMultiplier() { return { this, "UReflectionCaptureComponent.bUseGlobalGroundColorMultiplier"}; }
	BitFieldValue<bool, unsigned __int32> bUseGlobalSkyColorMultiplier() { return { this, "UReflectionCaptureComponent.bUseGlobalSkyColorMultiplier"}; }
	BitFieldValue<bool, unsigned __int32> bUseGlobalSkyIntensityMultiplier() { return { this, "UReflectionCaptureComponent.bUseGlobalSkyIntensityMultiplier"}; }
	BitFieldValue<bool, unsigned __int32> bUseParentBrightness() { return { this, "UReflectionCaptureComponent.bUseParentBrightness"}; }
	BitFieldValue<bool, unsigned __int32> bUseParentAmbientLightInfo() { return { this, "UReflectionCaptureComponent.bUseParentAmbientLightInfo"}; }
	BitFieldValue<bool, unsigned __int32> bCaptureAmbientShadow() { return { this, "UReflectionCaptureComponent.bCaptureAmbientShadow"}; }
	static int GetReflectionCaptureSize() { return NativeCall<int>(nullptr, "UReflectionCaptureComponent.GetReflectionCaptureSize()"); }
	void UpdatePreviewShape() { NativeCall<void>(this, "UReflectionCaptureComponent.UpdatePreviewShape()"); }
	static UClass* StaticClass() { return AsaApi::ResolveClass("UReflectionCaptureComponent"); }
	void PostInitProperties() { NativeCall<void>(this, "UReflectionCaptureComponent.PostInitProperties()"); }
	void MarkDirtyForRecaptureOrUpload() { NativeCall<void>(this, "UReflectionCaptureComponent.MarkDirtyForRecaptureOrUpload()"); }
	float GetInfluenceBoundingRadius() { return NativeCall<float>(this, "UReflectionCaptureComponent.GetInfluenceBoundingRadius()"); }
	void CreateRenderState_Concurrent(FRegisterComponentContext* Context) { NativeCall<void, FRegisterComponentContext*>(this, "UReflectionCaptureComponent.CreateRenderState_Concurrent(FRegisterComponentContext*)", Context); }
	void DestroyRenderState_Concurrent() { NativeCall<void>(this, "UReflectionCaptureComponent.DestroyRenderState_Concurrent()"); }
	void PropagateLightingScenarioChange() { NativeCall<void>(this, "UReflectionCaptureComponent.PropagateLightingScenarioChange()"); }
	void InvalidateLightingCacheDetailed(bool bInvalidateBuildEnqueuedLighting, bool bTranslationOnly) { NativeCall<void, bool, bool>(this, "UReflectionCaptureComponent.InvalidateLightingCacheDetailed(bool,bool)", bInvalidateBuildEnqueuedLighting, bTranslationOnly); }
	bool IsReadyForFinishDestroy() { return NativeCall<bool>(this, "UReflectionCaptureComponent.IsReadyForFinishDestroy()"); }
	void SerializeLegacyData(FArchive& Ar) { NativeCall<void, FArchive&>(this, "UReflectionCaptureComponent.SerializeLegacyData(FArchive&)", Ar); }
	void FinishDestroy() { NativeCall<void>(this, "UReflectionCaptureComponent.FinishDestroy()"); }
	void Serialize(FArchive& Ar) { NativeCall<void, FArchive&>(this, "UReflectionCaptureComponent.Serialize(FArchive&)", Ar); }
	void SendRenderTransform_Concurrent() { NativeCall<void>(this, "UReflectionCaptureComponent.SendRenderTransform_Concurrent()"); }
	void BeginDestroy() { NativeCall<void>(this, "UReflectionCaptureComponent.BeginDestroy()"); }
};
