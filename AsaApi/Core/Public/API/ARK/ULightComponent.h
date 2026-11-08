#pragma once
#include "BulkForward.h"
#include <API/UE/Math/BoxSphereBounds.h>
#include <API/UE/Math/Sphere.h>
#include "ULightComponentBase.h"

struct ULightComponent : public ULightComponentBase
{
public:
	ULightComponent() = delete;
	~ULightComponent() = delete;
	ULightComponent(const ULightComponent&) = delete;
	ULightComponent& operator=(const ULightComponent&) = delete;
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("ULightComponent"); }

	float& TemperatureField() { return *GetNativePointerField<float*>(this, "ULightComponent.Temperature"); }
	float& MaxDrawDistanceField() { return *GetNativePointerField<float*>(this, "ULightComponent.MaxDrawDistance"); }
	float& MaxDistanceFadeRangeField() { return *GetNativePointerField<float*>(this, "ULightComponent.MaxDistanceFadeRange"); }
	int& ShadowMapChannel_DEPRECATEDField() { return *GetNativePointerField<int*>(this, "ULightComponent.ShadowMapChannel_DEPRECATED"); }
	int& PreviewShadowMapChannelField() { return *GetNativePointerField<int*>(this, "ULightComponent.PreviewShadowMapChannel"); }
	float& MinRoughness_DEPRECATEDField() { return *GetNativePointerField<float*>(this, "ULightComponent.MinRoughness_DEPRECATED"); }
	float& SpecularScaleField() { return *GetNativePointerField<float*>(this, "ULightComponent.SpecularScale"); }
	float& DiffuseScaleField() { return *GetNativePointerField<float*>(this, "ULightComponent.DiffuseScale"); }
	float& ShadowResolutionScaleField() { return *GetNativePointerField<float*>(this, "ULightComponent.ShadowResolutionScale"); }
	float& ShadowBiasField() { return *GetNativePointerField<float*>(this, "ULightComponent.ShadowBias"); }
	float& ShadowSlopeBiasField() { return *GetNativePointerField<float*>(this, "ULightComponent.ShadowSlopeBias"); }
	float& ShadowSharpenField() { return *GetNativePointerField<float*>(this, "ULightComponent.ShadowSharpen"); }
	float& ContactShadowLengthField() { return *GetNativePointerField<float*>(this, "ULightComponent.ContactShadowLength"); }
	float& ContactShadowCastingIntensityField() { return *GetNativePointerField<float*>(this, "ULightComponent.ContactShadowCastingIntensity"); }
	float& ContactShadowNonCastingIntensityField() { return *GetNativePointerField<float*>(this, "ULightComponent.ContactShadowNonCastingIntensity"); }
	float& RayEndBiasField() { return *GetNativePointerField<float*>(this, "ULightComponent.RayEndBias"); }
	FLightingChannels& LightingChannelsField() { return *GetNativePointerField<FLightingChannels*>(this, "ULightComponent.LightingChannels"); }
	FViewLightingChannels& ViewLightingChannelsField() { return *GetNativePointerField<FViewLightingChannels*>(this, "ULightComponent.ViewLightingChannels"); }
	UE::Math::TVector<double>& LightFunctionScaleField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "ULightComponent.LightFunctionScale"); }
	float& IESBrightnessScaleField() { return *GetNativePointerField<float*>(this, "ULightComponent.IESBrightnessScale"); }
	float& LightFunctionFadeDistanceField() { return *GetNativePointerField<float*>(this, "ULightComponent.LightFunctionFadeDistance"); }
	float& DisabledBrightnessField() { return *GetNativePointerField<float*>(this, "ULightComponent.DisabledBrightness"); }
	float& BloomScaleField() { return *GetNativePointerField<float*>(this, "ULightComponent.BloomScale"); }
	float& BloomThresholdField() { return *GetNativePointerField<float*>(this, "ULightComponent.BloomThreshold"); }
	float& BloomMaxBrightnessField() { return *GetNativePointerField<float*>(this, "ULightComponent.BloomMaxBrightness"); }
	FColor& BloomTintField() { return *GetNativePointerField<FColor*>(this, "ULightComponent.BloomTint"); }
	bool& bUseRayTracedDistanceFieldShadowsField() { return *GetNativePointerField<bool*>(this, "ULightComponent.bUseRayTracedDistanceFieldShadows"); }
	float& RayStartOffsetDepthScaleField() { return *GetNativePointerField<float*>(this, "ULightComponent.RayStartOffsetDepthScale"); }
	FLightSceneProxy*& SceneProxyField() { return *GetNativePointerField<FLightSceneProxy**>(this, "ULightComponent.SceneProxy"); }
	FStaticShadowDepthMap& StaticShadowDepthMapField() { return *GetNativePointerField<FStaticShadowDepthMap*>(this, "ULightComponent.StaticShadowDepthMap"); }
	FRenderCommandFence& DestroyFenceField() { return *GetNativePointerField<FRenderCommandFence*>(this, "ULightComponent.DestroyFence"); }
	FPSOPrecacheComponentData& PSOPrecacheComponentDataField() { return *GetNativePointerField<FPSOPrecacheComponentData*>(this, "ULightComponent.PSOPrecacheComponentData"); }
	BitFieldValue<bool, unsigned __int32> bUseTemperature() { return { this, "ULightComponent.bUseTemperature"}; }
	BitFieldValue<bool, unsigned __int32> ContactShadowLengthInWS() { return { this, "ULightComponent.ContactShadowLengthInWS"}; }
	BitFieldValue<bool, unsigned __int32> InverseSquaredFalloff_DEPRECATED() { return { this, "ULightComponent.InverseSquaredFalloff_DEPRECATED"}; }
	BitFieldValue<bool, unsigned __int32> CastTranslucentShadows() { return { this, "ULightComponent.CastTranslucentShadows"}; }
	BitFieldValue<bool, unsigned __int32> bCastShadowsFromCinematicObjectsOnly() { return { this, "ULightComponent.bCastShadowsFromCinematicObjectsOnly"}; }
	BitFieldValue<bool, unsigned __int32> bForceCachedShadowsForMovablePrimitives() { return { this, "ULightComponent.bForceCachedShadowsForMovablePrimitives"}; }
	BitFieldValue<bool, unsigned __int32> bAllowMegaLights() { return { this, "ULightComponent.bAllowMegaLights"}; }
	BitFieldValue<bool, unsigned __int32> bOverrideRayEndBias() { return { this, "ULightComponent.bOverrideRayEndBias"}; }
	BitFieldValue<bool, unsigned __int32> bPrimaryShadow() { return { this, "ULightComponent.bPrimaryShadow"}; }
	BitFieldValue<bool, unsigned __int32> bInheritedShadow() { return { this, "ULightComponent.bInheritedShadow"}; }
	BitFieldValue<bool, unsigned __int32> bDummyPrimaryShadowLight() { return { this, "ULightComponent.bDummyPrimaryShadowLight"}; }
	BitFieldValue<bool, unsigned __int32> bPrimaryCloudShadowEnable() { return { this, "ULightComponent.bPrimaryCloudShadowEnable"}; }
	BitFieldValue<bool, unsigned __int32> bUseIESBrightness() { return { this, "ULightComponent.bUseIESBrightness"}; }
	BitFieldValue<bool, unsigned __int32> bEnableLightShaftBloom() { return { this, "ULightComponent.bEnableLightShaftBloom"}; }
	BitFieldValue<bool, unsigned __int32> bAddedToSceneVisible() { return { this, "ULightComponent.bAddedToSceneVisible"}; }
	float GetUniformPenumbraSize() { return NativeCall<float>(this, "ULightComponent.GetUniformPenumbraSize()"); }
	void InvalidateLightingCacheDetailed(bool bInvalidateBuildEnqueuedLighting, bool bTranslationOnly) { NativeCall<void, bool, bool>(this, "ULightComponent.InvalidateLightingCacheDetailed(bool,bool)", bInvalidateBuildEnqueuedLighting, bTranslationOnly); }
	bool IsUsedAsAtmosphereSunLight() { return NativeCall<bool>(this, "ULightComponent.IsUsedAsAtmosphereSunLight()"); }
	bool AffectsBounds(const UE::Math::TBoxSphereBounds<double, double>& InBounds) { return NativeCall<bool, const UE::Math::TBoxSphereBounds<double, double>&>(this, "ULightComponent.AffectsBounds(UE::Math::TBoxSphereBounds<double,double>&)", InBounds); }
	void SetIESBrightnessScale(float NewValue) { NativeCall<void, float>(this, "ULightComponent.SetIESBrightnessScale(float)", NewValue); }
	void ApplyComponentInstanceData(FPrecomputedLightInstanceData* LightMapData) { NativeCall<void, FPrecomputedLightInstanceData*>(this, "ULightComponent.ApplyComponentInstanceData(FPrecomputedLightInstanceData*)", LightMapData); }
	void Serialize(FArchive& Ar) { NativeCall<void, FArchive&>(this, "ULightComponent.Serialize(FArchive&)", Ar); }
	void SetLightFColor(FColor NewLightColor) { NativeCall<void, FColor>(this, "ULightComponent.SetLightFColor(FColor)", NewLightColor); }
	void BeginDestroy() { NativeCall<void>(this, "ULightComponent.BeginDestroy()"); }
	void SetMaterial(int ElementIndex, UMaterialInterface* InMaterial) { NativeCall<void, int, UMaterialInterface*>(this, "ULightComponent.SetMaterial(int,UMaterialInterface*)", ElementIndex, InMaterial); }
	void SetUseIESBrightness(bool bNewValue) { NativeCall<void, bool>(this, "ULightComponent.SetUseIESBrightness(bool)", bNewValue); }
	void OnRegister() { NativeCall<void>(this, "ULightComponent.OnRegister()"); }
	ELightComponentType GetLightType() { return NativeCall<ELightComponentType>(this, "ULightComponent.GetLightType()"); }
	void SetLightFunctionMaterial(UMaterialInterface* NewLightFunctionMaterial) { NativeCall<void, UMaterialInterface*>(this, "ULightComponent.SetLightFunctionMaterial(UMaterialInterface*)", NewLightFunctionMaterial); }
	void SetIntensity(float NewIntensity) { NativeCall<void, float>(this, "ULightComponent.SetIntensity(float)", NewIntensity); }
	void UpdateColorAndBrightness() { NativeCall<void>(this, "ULightComponent.UpdateColorAndBrightness()"); }
	void SendRenderTransform_Concurrent() { NativeCall<void>(this, "ULightComponent.SendRenderTransform_Concurrent()"); }
	void PrecachePSOs() { NativeCall<void>(this, "ULightComponent.PrecachePSOs()"); }
	void ClearLightFunctionMaterial() { NativeCall<void>(this, "ULightComponent.ClearLightFunctionMaterial()"); }
	void PostLoad() { NativeCall<void>(this, "ULightComponent.PostLoad()"); }
	void SetNewTurnOffShadowsAtDistanceFromViewer(float newTurnOffShadowsAtDistanceFromViewer) { NativeCall<void, float>(this, "ULightComponent.SetNewTurnOffShadowsAtDistanceFromViewer(float)", newTurnOffShadowsAtDistanceFromViewer); }
	void InitializeStaticShadowDepthMap() { NativeCall<void>(this, "ULightComponent.InitializeStaticShadowDepthMap()"); }
	UE::Math::TSphere<double>* GetBoundingSphere(UE::Math::TSphere<double>* result) { return NativeCall<UE::Math::TSphere<double>*, UE::Math::TSphere<double>*>(this, "ULightComponent.GetBoundingSphere()", result); }
	void SetVolumetricScatteringIntensity(float NewIntensity) { NativeCall<void, float>(this, "ULightComponent.SetVolumetricScatteringIntensity(float)", NewIntensity); }
	int GetNumMaterials() { return NativeCall<int>(this, "ULightComponent.GetNumMaterials()"); }
	void SetTemperature(float NewTemperature) { NativeCall<void, float>(this, "ULightComponent.SetTemperature(float)", NewTemperature); }
	UE::Math::TVector<double>* GetDirection(UE::Math::TVector<double>* result) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*>(this, "ULightComponent.GetDirection()", result); }
	UMaterialInterface* GetMaterial(int ElementIndex) { return NativeCall<UMaterialInterface*, int>(this, "ULightComponent.GetMaterial(int)", ElementIndex); }
	void SetIndirectLightingIntensity(float NewIntensity) { NativeCall<void, float>(this, "ULightComponent.SetIndirectLightingIntensity(float)", NewIntensity); }
	void SetLightFunctionFadeDistance(float NewLightFunctionFadeDistance) { NativeCall<void, float>(this, "ULightComponent.SetLightFunctionFadeDistance(float)", NewLightFunctionFadeDistance); }
	static UClass* StaticClass() { return AsaApi::ResolveClass("ULightComponent"); }
	void SetLightFunctionScale(UE::Math::TVector<double>* NewLightFunctionScale) { if (!NewLightFunctionScale) throw std::invalid_argument("Null native value parameter"); return NativeCall<void, UE :: Math :: TVector < double >>(this, "ULightComponent.SetLightFunctionScale(UE::Math::TVector<double>)", *NewLightFunctionScale); }
	unsigned char GetAtmosphereSunLightIndex() { return NativeCall<unsigned char>(this, "ULightComponent.GetAtmosphereSunLightIndex()"); }
	void SetUseTemperature(bool bNewValue) { NativeCall<void, bool>(this, "ULightComponent.SetUseTemperature(bool)", bNewValue); }
	FLightSceneProxy* CreateSceneProxy() { return NativeCall<FLightSceneProxy*>(this, "ULightComponent.CreateSceneProxy()"); }
	float ComputeLightBrightness() { return NativeCall<float>(this, "ULightComponent.ComputeLightBrightness()"); }
	static void BuildSceneProxyDesc(const ULightComponent& InLightComponent, FLightSceneProxyDesc& OutProxyDesc) { NativeCall<void, const ULightComponent&, FLightSceneProxyDesc&>(nullptr, "ULightComponent.BuildSceneProxyDesc(ULightComponent&,FLightSceneProxyDesc&)", InLightComponent, OutProxyDesc); }
	bool IsReadyForFinishDestroy() { return NativeCall<bool>(this, "ULightComponent.IsReadyForFinishDestroy()"); }
	void SetAffectTranslucentLighting(bool bNewValue) { NativeCall<void, bool>(this, "ULightComponent.SetAffectTranslucentLighting(bool)", bNewValue); }
	ELightUnits GetLightUnits() { return NativeCall<ELightUnits>(this, "ULightComponent.GetLightUnits()"); }
	void PropagateLightingScenarioChange() { NativeCall<void>(this, "ULightComponent.PropagateLightingScenarioChange()"); }
	bool IsPrecomputedLightingValid() { return NativeCall<bool>(this, "ULightComponent.IsPrecomputedLightingValid()"); }
	void SendRenderDynamicData_Concurrent() { NativeCall<void>(this, "ULightComponent.SendRenderDynamicData_Concurrent()"); }
	const FStaticShadowDepthMap* GetStaticShadowDepthMap() { return NativeCall<const FStaticShadowDepthMap*>(this, "ULightComponent.GetStaticShadowDepthMap()"); }
	void SetIESTexture(UTextureLightProfile* NewValue) { NativeCall<void, UTextureLightProfile*>(this, "ULightComponent.SetIESTexture(UTextureLightProfile*)", NewValue); }
	void PushSelectionToProxy() { NativeCall<void>(this, "ULightComponent.PushSelectionToProxy()"); }
	void DestroyRenderState_Concurrent() { NativeCall<void>(this, "ULightComponent.DestroyRenderState_Concurrent()"); }
	const FLightComponentMapBuildData* GetLightComponentMapBuildData() { return NativeCall<const FLightComponentMapBuildData*>(this, "ULightComponent.GetLightComponentMapBuildData()"); }
	void SetLightingChannels(bool bChannel0, bool bChannel1, bool bChannel2) { NativeCall<void, bool, bool, bool>(this, "ULightComponent.SetLightingChannels(bool,bool,bool)", bChannel0, bChannel1, bChannel2); }
	void CreateRenderState_Concurrent(FRegisterComponentContext* Context) { NativeCall<void, FRegisterComponentContext*>(this, "ULightComponent.CreateRenderState_Concurrent(FRegisterComponentContext*)", Context); }
};
