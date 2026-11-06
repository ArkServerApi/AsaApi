#pragma once
#include "BulkForward.h"
#include "USceneComponent.h"

struct UExponentialHeightFogComponent : public USceneComponent
{
public:
	UExponentialHeightFogComponent() = delete;
	~UExponentialHeightFogComponent() = delete;
	UExponentialHeightFogComponent(const UExponentialHeightFogComponent&) = delete;
	UExponentialHeightFogComponent& operator=(const UExponentialHeightFogComponent&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UExponentialHeightFogComponent"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UExponentialHeightFogComponent"); }

	float& PriorityField() { return *GetNativePointerField<float*>(this, "UExponentialHeightFogComponent.Priority"); }
	float& FogDensityField() { return *GetNativePointerField<float*>(this, "UExponentialHeightFogComponent.FogDensity"); }
	float& FogHeightFalloffField() { return *GetNativePointerField<float*>(this, "UExponentialHeightFogComponent.FogHeightFalloff"); }
	FExponentialHeightFogData& SecondFogDataField() { return *GetNativePointerField<FExponentialHeightFogData*>(this, "UExponentialHeightFogComponent.SecondFogData"); }
	FLinearColor& FogInscatteringColor_DEPRECATEDField() { return *GetNativePointerField<FLinearColor*>(this, "UExponentialHeightFogComponent.FogInscatteringColor_DEPRECATED"); }
	FLinearColor& FogInscatteringLuminanceField() { return *GetNativePointerField<FLinearColor*>(this, "UExponentialHeightFogComponent.FogInscatteringLuminance"); }
	FLinearColor& SkyAtmosphereAmbientContributionColorScaleField() { return *GetNativePointerField<FLinearColor*>(this, "UExponentialHeightFogComponent.SkyAtmosphereAmbientContributionColorScale"); }
	float& SkyLightCaptureAffectsHeightFogStrengthField() { return *GetNativePointerField<float*>(this, "UExponentialHeightFogComponent.SkyLightCaptureAffectsHeightFogStrength"); }
	float& SkyLightCaptureAffectsHeightFogRoughnessField() { return *GetNativePointerField<float*>(this, "UExponentialHeightFogComponent.SkyLightCaptureAffectsHeightFogRoughness"); }
	float& InscatteringColorCubemapAngleField() { return *GetNativePointerField<float*>(this, "UExponentialHeightFogComponent.InscatteringColorCubemapAngle"); }
	FLinearColor& InscatteringTextureTintField() { return *GetNativePointerField<FLinearColor*>(this, "UExponentialHeightFogComponent.InscatteringTextureTint"); }
	float& FullyDirectionalInscatteringColorDistanceField() { return *GetNativePointerField<float*>(this, "UExponentialHeightFogComponent.FullyDirectionalInscatteringColorDistance"); }
	float& NonDirectionalInscatteringColorDistanceField() { return *GetNativePointerField<float*>(this, "UExponentialHeightFogComponent.NonDirectionalInscatteringColorDistance"); }
	float& DirectionalInscatteringExponentField() { return *GetNativePointerField<float*>(this, "UExponentialHeightFogComponent.DirectionalInscatteringExponent"); }
	float& DirectionalInscatteringStartDistanceField() { return *GetNativePointerField<float*>(this, "UExponentialHeightFogComponent.DirectionalInscatteringStartDistance"); }
	FLinearColor& DirectionalInscatteringColor_DEPRECATEDField() { return *GetNativePointerField<FLinearColor*>(this, "UExponentialHeightFogComponent.DirectionalInscatteringColor_DEPRECATED"); }
	FLinearColor& DirectionalInscatteringLuminanceField() { return *GetNativePointerField<FLinearColor*>(this, "UExponentialHeightFogComponent.DirectionalInscatteringLuminance"); }
	float& FogMaxOpacityField() { return *GetNativePointerField<float*>(this, "UExponentialHeightFogComponent.FogMaxOpacity"); }
	float& StartDistanceField() { return *GetNativePointerField<float*>(this, "UExponentialHeightFogComponent.StartDistance"); }
	float& EndDistanceField() { return *GetNativePointerField<float*>(this, "UExponentialHeightFogComponent.EndDistance"); }
	float& FogCutoffDistanceField() { return *GetNativePointerField<float*>(this, "UExponentialHeightFogComponent.FogCutoffDistance"); }
	bool& bEnableVolumetricFogField() { return *GetNativePointerField<bool*>(this, "UExponentialHeightFogComponent.bEnableVolumetricFog"); }
	float& VolumetricFogProjectionField() { return *GetNativePointerField<float*>(this, "UExponentialHeightFogComponent.VolumetricFogProjection"); }
	float& VolumetricFogScatteringDistributionField() { return *GetNativePointerField<float*>(this, "UExponentialHeightFogComponent.VolumetricFogScatteringDistribution"); }
	FColor& VolumetricFogAlbedoField() { return *GetNativePointerField<FColor*>(this, "UExponentialHeightFogComponent.VolumetricFogAlbedo"); }
	FLinearColor& VolumetricFogEmissiveField() { return *GetNativePointerField<FLinearColor*>(this, "UExponentialHeightFogComponent.VolumetricFogEmissive"); }
	float& VolumetricFogExtinctionScaleField() { return *GetNativePointerField<float*>(this, "UExponentialHeightFogComponent.VolumetricFogExtinctionScale"); }
	float& VolumetricFogDistanceField() { return *GetNativePointerField<float*>(this, "UExponentialHeightFogComponent.VolumetricFogDistance"); }
	float& VolumetricFogStartDistanceField() { return *GetNativePointerField<float*>(this, "UExponentialHeightFogComponent.VolumetricFogStartDistance"); }
	float& VolumetricFogNearFadeInDistanceField() { return *GetNativePointerField<float*>(this, "UExponentialHeightFogComponent.VolumetricFogNearFadeInDistance"); }
	float& VolumetricFogStaticLightingScatteringIntensityField() { return *GetNativePointerField<float*>(this, "UExponentialHeightFogComponent.VolumetricFogStaticLightingScatteringIntensity"); }
	bool& bAllowScalingLumenInVolumetricFogField() { return *GetNativePointerField<bool*>(this, "UExponentialHeightFogComponent.bAllowScalingLumenInVolumetricFog"); }
	float& ScaleLumenInVolumetricFogField() { return *GetNativePointerField<float*>(this, "UExponentialHeightFogComponent.ScaleLumenInVolumetricFog"); }
	bool& bOverrideLightColorsWithFogInscatteringColorsField() { return *GetNativePointerField<bool*>(this, "UExponentialHeightFogComponent.bOverrideLightColorsWithFogInscatteringColors"); }
	bool& bEnableFSSSField() { return *GetNativePointerField<bool*>(this, "UExponentialHeightFogComponent.bEnableFSSS"); }
	float& FSSSSceneColorScatteringAmountScaleField() { return *GetNativePointerField<float*>(this, "UExponentialHeightFogComponent.FSSSSceneColorScatteringAmountScale"); }
	float& FSSSSceneColorScatteringAmountPowerField() { return *GetNativePointerField<float*>(this, "UExponentialHeightFogComponent.FSSSSceneColorScatteringAmountPower"); }
	float& FSSSSpreadScaleField() { return *GetNativePointerField<float*>(this, "UExponentialHeightFogComponent.FSSSSpreadScale"); }
	float& FSSSBlurControlField() { return *GetNativePointerField<float*>(this, "UExponentialHeightFogComponent.FSSSBlurControl"); }
	BitFieldValue<bool, unsigned char> bHoldout() { return { this, "UExponentialHeightFogComponent.bHoldout"}; }
	BitFieldValue<bool, unsigned char> bRenderInMainPass() { return { this, "UExponentialHeightFogComponent.bRenderInMainPass"}; }
	BitFieldValue<bool, unsigned char> bVisibleInReflectionCaptures() { return { this, "UExponentialHeightFogComponent.bVisibleInReflectionCaptures"}; }
	BitFieldValue<bool, unsigned char> bVisibleInRealTimeSkyCaptures() { return { this, "UExponentialHeightFogComponent.bVisibleInRealTimeSkyCaptures"}; }
	void SetDirectionalInscatteringExponent(float NewValue) { NativeCall<void, float>(this, "UExponentialHeightFogComponent.SetDirectionalInscatteringExponent(float)", NewValue); }
	void DestroyRenderState_Concurrent() { NativeCall<void>(this, "UExponentialHeightFogComponent.DestroyRenderState_Concurrent()"); }
	void SetVolumetricFogNearFadeInDistance(float NewValue) { NativeCall<void, float>(this, "UExponentialHeightFogComponent.SetVolumetricFogNearFadeInDistance(float)", NewValue); }
	void AddFogIfNeeded() { NativeCall<void>(this, "UExponentialHeightFogComponent.AddFogIfNeeded()"); }
	void SetSecondFogHeightOffset(float Value) { NativeCall<void, float>(this, "UExponentialHeightFogComponent.SetSecondFogHeightOffset(float)", Value); }
	void SetFogDensity(float NewValue) { NativeCall<void, float>(this, "UExponentialHeightFogComponent.SetFogDensity(float)", NewValue); }
	void CreateRenderState_Concurrent(FRegisterComponentContext* Context) { NativeCall<void, FRegisterComponentContext*>(this, "UExponentialHeightFogComponent.CreateRenderState_Concurrent(FRegisterComponentContext*)", Context); }
	void SetVolumetricFogExtinctionScale(float NewValue) { NativeCall<void, float>(this, "UExponentialHeightFogComponent.SetVolumetricFogExtinctionScale(float)", NewValue); }
	void SetScaleLumenInVolumetricFog(float NewValue) { NativeCall<void, float>(this, "UExponentialHeightFogComponent.SetScaleLumenInVolumetricFog(float)", NewValue); }
	void SetFogHeightFalloff(float NewValue) { NativeCall<void, float>(this, "UExponentialHeightFogComponent.SetFogHeightFalloff(float)", NewValue); }
	void SetSecondFogDensity(float Value) { NativeCall<void, float>(this, "UExponentialHeightFogComponent.SetSecondFogDensity(float)", Value); }
	void SetHoldout(bool bNewHoldout) { NativeCall<void, bool>(this, "UExponentialHeightFogComponent.SetHoldout(bool)", bNewHoldout); }
	void SetFogMaxOpacity(float NewValue) { NativeCall<void, float>(this, "UExponentialHeightFogComponent.SetFogMaxOpacity(float)", NewValue); }
	void Serialize(FArchive& Ar) { NativeCall<void, FArchive&>(this, "UExponentialHeightFogComponent.Serialize(FArchive&)", Ar); }
	void SetVolumetricFogAlbedo(FColor NewValue) { NativeCall<void, FColor>(this, "UExponentialHeightFogComponent.SetVolumetricFogAlbedo(FColor)", NewValue); }
	void SetVolumetricFogStartDistance(float NewValue) { NativeCall<void, float>(this, "UExponentialHeightFogComponent.SetVolumetricFogStartDistance(float)", NewValue); }
	void SetStartDistance(float NewValue) { NativeCall<void, float>(this, "UExponentialHeightFogComponent.SetStartDistance(float)", NewValue); }
	void SetSecondFogHeightFalloff(float Value) { NativeCall<void, float>(this, "UExponentialHeightFogComponent.SetSecondFogHeightFalloff(float)", Value); }
	void SetRenderInMainPass(bool bValue) { NativeCall<void, bool>(this, "UExponentialHeightFogComponent.SetRenderInMainPass(bool)", bValue); }
	void OnUnregister() { NativeCall<void>(this, "UExponentialHeightFogComponent.OnUnregister()"); }
	void SendRenderTransform_Concurrent() { NativeCall<void>(this, "UExponentialHeightFogComponent.SendRenderTransform_Concurrent()"); }
};
