#pragma once
#include "BulkForward.h"
#include "ULightComponent.h"

struct UDirectionalLightComponent : public ULightComponent
{
public:
	UDirectionalLightComponent() = delete;
	~UDirectionalLightComponent() = delete;
	UDirectionalLightComponent(const UDirectionalLightComponent&) = delete;
	UDirectionalLightComponent& operator=(const UDirectionalLightComponent&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UDirectionalLightComponent"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UDirectionalLightComponent"); }

	float& ShadowCascadeBiasDistributionField() { return *GetNativePointerField<float*>(this, "UDirectionalLightComponent.ShadowCascadeBiasDistribution"); }
	float& OcclusionMaskDarknessField() { return *GetNativePointerField<float*>(this, "UDirectionalLightComponent.OcclusionMaskDarkness"); }
	float& OcclusionDepthRangeField() { return *GetNativePointerField<float*>(this, "UDirectionalLightComponent.OcclusionDepthRange"); }
	UE::Math::TVector<double>& LightShaftOverrideDirectionField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "UDirectionalLightComponent.LightShaftOverrideDirection"); }
	float& WholeSceneDynamicShadowRadius_DEPRECATEDField() { return *GetNativePointerField<float*>(this, "UDirectionalLightComponent.WholeSceneDynamicShadowRadius_DEPRECATED"); }
	float& DynamicShadowDistanceMovableLightField() { return *GetNativePointerField<float*>(this, "UDirectionalLightComponent.DynamicShadowDistanceMovableLight"); }
	float& DynamicShadowDistanceStationaryLightField() { return *GetNativePointerField<float*>(this, "UDirectionalLightComponent.DynamicShadowDistanceStationaryLight"); }
	int& DynamicShadowCascadesField() { return *GetNativePointerField<int*>(this, "UDirectionalLightComponent.DynamicShadowCascades"); }
	float& CascadeDistributionExponentField() { return *GetNativePointerField<float*>(this, "UDirectionalLightComponent.CascadeDistributionExponent"); }
	float& CascadeTransitionFractionField() { return *GetNativePointerField<float*>(this, "UDirectionalLightComponent.CascadeTransitionFraction"); }
	float& ShadowDistanceFadeoutFractionField() { return *GetNativePointerField<float*>(this, "UDirectionalLightComponent.ShadowDistanceFadeoutFraction"); }
	int& FarShadowCascadeCountField() { return *GetNativePointerField<int*>(this, "UDirectionalLightComponent.FarShadowCascadeCount"); }
	float& FarShadowDistanceField() { return *GetNativePointerField<float*>(this, "UDirectionalLightComponent.FarShadowDistance"); }
	float& DistanceFieldShadowDistanceField() { return *GetNativePointerField<float*>(this, "UDirectionalLightComponent.DistanceFieldShadowDistance"); }
	int& ForwardShadingPriorityField() { return *GetNativePointerField<int*>(this, "UDirectionalLightComponent.ForwardShadingPriority"); }
	float& LightSourceAngleField() { return *GetNativePointerField<float*>(this, "UDirectionalLightComponent.LightSourceAngle"); }
	float& LightSourceSoftAngleField() { return *GetNativePointerField<float*>(this, "UDirectionalLightComponent.LightSourceSoftAngle"); }
	float& ShadowSourceAngleFactorField() { return *GetNativePointerField<float*>(this, "UDirectionalLightComponent.ShadowSourceAngleFactor"); }
	float& TraceDistanceField() { return *GetNativePointerField<float*>(this, "UDirectionalLightComponent.TraceDistance"); }
	int& AtmosphereSunLightIndexField() { return *GetNativePointerField<int*>(this, "UDirectionalLightComponent.AtmosphereSunLightIndex"); }
	FLinearColor& AtmosphereSunDiskColorScaleField() { return *GetNativePointerField<FLinearColor*>(this, "UDirectionalLightComponent.AtmosphereSunDiskColorScale"); }
	float& CloudShadowStrengthField() { return *GetNativePointerField<float*>(this, "UDirectionalLightComponent.CloudShadowStrength"); }
	float& CloudShadowOnAtmosphereStrengthField() { return *GetNativePointerField<float*>(this, "UDirectionalLightComponent.CloudShadowOnAtmosphereStrength"); }
	float& CloudShadowOnSurfaceStrengthField() { return *GetNativePointerField<float*>(this, "UDirectionalLightComponent.CloudShadowOnSurfaceStrength"); }
	float& CloudShadowDepthBiasField() { return *GetNativePointerField<float*>(this, "UDirectionalLightComponent.CloudShadowDepthBias"); }
	float& CloudShadowExtentField() { return *GetNativePointerField<float*>(this, "UDirectionalLightComponent.CloudShadowExtent"); }
	float& CloudShadowMinDistanceField() { return *GetNativePointerField<float*>(this, "UDirectionalLightComponent.CloudShadowMinDistance"); }
	float& CloudShadowFadeRadiusField() { return *GetNativePointerField<float*>(this, "UDirectionalLightComponent.CloudShadowFadeRadius"); }
	float& MinimumLightSourceAngleField() { return *GetNativePointerField<float*>(this, "UDirectionalLightComponent.MinimumLightSourceAngle"); }
	float& CloudShadowMapResolutionScaleField() { return *GetNativePointerField<float*>(this, "UDirectionalLightComponent.CloudShadowMapResolutionScale"); }
	float& CloudShadowRaySampleCountScaleField() { return *GetNativePointerField<float*>(this, "UDirectionalLightComponent.CloudShadowRaySampleCountScale"); }
	FLinearColor& CloudScatteredLuminanceScaleField() { return *GetNativePointerField<FLinearColor*>(this, "UDirectionalLightComponent.CloudScatteredLuminanceScale"); }
	FLightmassDirectionalLightSettings& LightmassSettingsField() { return *GetNativePointerField<FLightmassDirectionalLightSettings*>(this, "UDirectionalLightComponent.LightmassSettings"); }
	FColor& ModulatedShadowColorField() { return *GetNativePointerField<FColor*>(this, "UDirectionalLightComponent.ModulatedShadowColor"); }
	float& ShadowAmountField() { return *GetNativePointerField<float*>(this, "UDirectionalLightComponent.ShadowAmount"); }
	BitFieldValue<bool, unsigned __int32> bEnableLightShaftOcclusion() { return { this, "UDirectionalLightComponent.bEnableLightShaftOcclusion"}; }
	BitFieldValue<bool, unsigned __int32> bUseInsetShadowsForMovableObjects() { return { this, "UDirectionalLightComponent.bUseInsetShadowsForMovableObjects"}; }
	BitFieldValue<bool, unsigned __int32> bUsedAsAtmosphereSunLight_DEPRECATED() { return { this, "UDirectionalLightComponent.bUsedAsAtmosphereSunLight_DEPRECATED"}; }
	BitFieldValue<bool, unsigned __int32> bAtmosphereSunLight() { return { this, "UDirectionalLightComponent.bAtmosphereSunLight"}; }
	BitFieldValue<bool, unsigned __int32> bPerPixelAtmosphereTransmittance() { return { this, "UDirectionalLightComponent.bPerPixelAtmosphereTransmittance"}; }
	BitFieldValue<bool, unsigned __int32> bCastShadowsOnClouds() { return { this, "UDirectionalLightComponent.bCastShadowsOnClouds"}; }
	BitFieldValue<bool, unsigned __int32> bCastShadowsOnAtmosphere() { return { this, "UDirectionalLightComponent.bCastShadowsOnAtmosphere"}; }
	BitFieldValue<bool, unsigned __int32> bCastCloudShadows() { return { this, "UDirectionalLightComponent.bCastCloudShadows"}; }
	BitFieldValue<bool, unsigned __int32> bCastModulatedShadows() { return { this, "UDirectionalLightComponent.bCastModulatedShadows"}; }
	void SetLightSourceAngle(float NewValue) { NativeCall<void, float>(this, "UDirectionalLightComponent.SetLightSourceAngle(float)", NewValue); }
	float GetUniformPenumbraSize() { return NativeCall<float>(this, "UDirectionalLightComponent.GetUniformPenumbraSize()"); }
	void InvalidateLightingCacheDetailed(bool bInvalidateBuildEnqueuedLighting, bool bTranslationOnly) { NativeCall<void, bool, bool>(this, "UDirectionalLightComponent.InvalidateLightingCacheDetailed(bool,bool)", bInvalidateBuildEnqueuedLighting, bTranslationOnly); }
	void Serialize(FArchive& Ar) { NativeCall<void, FArchive&>(this, "UDirectionalLightComponent.Serialize(FArchive&)", Ar); }
	bool IsUsedAsAtmosphereSunLight() { return NativeCall<bool>(this, "UDirectionalLightComponent.IsUsedAsAtmosphereSunLight()"); }
	unsigned char GetAtmosphereSunLightIndex() { return NativeCall<unsigned char>(this, "UDirectionalLightComponent.GetAtmosphereSunLightIndex()"); }
	void SetForwardShadingPriority(int NewValue) { NativeCall<void, int>(this, "UDirectionalLightComponent.SetForwardShadingPriority(int)", NewValue); }
	void SetAtmosphereSunLightIndex(int NewValue) { NativeCall<void, int>(this, "UDirectionalLightComponent.SetAtmosphereSunLightIndex(int)", NewValue); }
	ELightUnits GetLightUnits() { return NativeCall<ELightUnits>(this, "UDirectionalLightComponent.GetLightUnits()"); }
	FLightSceneProxy* CreateSceneProxy() { return NativeCall<FLightSceneProxy*>(this, "UDirectionalLightComponent.CreateSceneProxy()"); }
	ELightComponentType GetLightType() { return NativeCall<ELightComponentType>(this, "UDirectionalLightComponent.GetLightType()"); }
};
