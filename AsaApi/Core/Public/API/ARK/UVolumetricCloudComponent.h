#pragma once
#include "BulkForward.h"
#include "USceneComponent.h"

struct UVolumetricCloudComponent : public USceneComponent
{
public:
	UVolumetricCloudComponent() = delete;
	~UVolumetricCloudComponent() = delete;
	UVolumetricCloudComponent(const UVolumetricCloudComponent&) = delete;
	UVolumetricCloudComponent& operator=(const UVolumetricCloudComponent&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UVolumetricCloudComponent"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UVolumetricCloudComponent"); }

	float& LayerBottomAltitudeField() { return *GetNativePointerField<float*>(this, "UVolumetricCloudComponent.LayerBottomAltitude"); }
	float& LayerHeightField() { return *GetNativePointerField<float*>(this, "UVolumetricCloudComponent.LayerHeight"); }
	float& TracingStartMaxDistanceField() { return *GetNativePointerField<float*>(this, "UVolumetricCloudComponent.TracingStartMaxDistance"); }
	float& TracingStartDistanceFromCameraField() { return *GetNativePointerField<float*>(this, "UVolumetricCloudComponent.TracingStartDistanceFromCamera"); }
	EVolumetricCloudTracingMaxDistanceMode& TracingMaxDistanceModeField() { return *GetNativePointerField<EVolumetricCloudTracingMaxDistanceMode*>(this, "UVolumetricCloudComponent.TracingMaxDistanceMode"); }
	float& TracingMaxDistanceField() { return *GetNativePointerField<float*>(this, "UVolumetricCloudComponent.TracingMaxDistance"); }
	float& PlanetRadiusField() { return *GetNativePointerField<float*>(this, "UVolumetricCloudComponent.PlanetRadius"); }
	FColor& GroundAlbedoField() { return *GetNativePointerField<FColor*>(this, "UVolumetricCloudComponent.GroundAlbedo"); }
	float& SkyLightCloudBottomOcclusionField() { return *GetNativePointerField<float*>(this, "UVolumetricCloudComponent.SkyLightCloudBottomOcclusion"); }
	float& ViewSampleCountScaleField() { return *GetNativePointerField<float*>(this, "UVolumetricCloudComponent.ViewSampleCountScale"); }
	float& ReflectionViewSampleCountScaleValueField() { return *GetNativePointerField<float*>(this, "UVolumetricCloudComponent.ReflectionViewSampleCountScaleValue"); }
	float& ReflectionViewSampleCountScale_DEPRECATEDField() { return *GetNativePointerField<float*>(this, "UVolumetricCloudComponent.ReflectionViewSampleCountScale_DEPRECATED"); }
	float& ReflectionSampleCountScale_DEPRECATEDField() { return *GetNativePointerField<float*>(this, "UVolumetricCloudComponent.ReflectionSampleCountScale_DEPRECATED"); }
	float& ShadowViewSampleCountScaleField() { return *GetNativePointerField<float*>(this, "UVolumetricCloudComponent.ShadowViewSampleCountScale"); }
	float& ShadowReflectionViewSampleCountScaleValueField() { return *GetNativePointerField<float*>(this, "UVolumetricCloudComponent.ShadowReflectionViewSampleCountScaleValue"); }
	float& ShadowReflectionViewSampleCountScale_DEPRECATEDField() { return *GetNativePointerField<float*>(this, "UVolumetricCloudComponent.ShadowReflectionViewSampleCountScale_DEPRECATED"); }
	float& ShadowReflectionSampleCountScale_DEPRECATEDField() { return *GetNativePointerField<float*>(this, "UVolumetricCloudComponent.ShadowReflectionSampleCountScale_DEPRECATED"); }
	float& ShadowTracingDistanceField() { return *GetNativePointerField<float*>(this, "UVolumetricCloudComponent.ShadowTracingDistance"); }
	float& StopTracingTransmittanceThresholdField() { return *GetNativePointerField<float*>(this, "UVolumetricCloudComponent.StopTracingTransmittanceThreshold"); }
	float& AerialPespectiveRayleighScatteringStartDistanceField() { return *GetNativePointerField<float*>(this, "UVolumetricCloudComponent.AerialPespectiveRayleighScatteringStartDistance"); }
	float& AerialPespectiveRayleighScatteringFadeDistanceField() { return *GetNativePointerField<float*>(this, "UVolumetricCloudComponent.AerialPespectiveRayleighScatteringFadeDistance"); }
	float& AerialPespectiveMieScatteringStartDistanceField() { return *GetNativePointerField<float*>(this, "UVolumetricCloudComponent.AerialPespectiveMieScatteringStartDistance"); }
	float& AerialPespectiveMieScatteringFadeDistanceField() { return *GetNativePointerField<float*>(this, "UVolumetricCloudComponent.AerialPespectiveMieScatteringFadeDistance"); }
	FVolumetricCloudSceneProxy*& VolumetricCloudSceneProxyField() { return *GetNativePointerField<FVolumetricCloudSceneProxy**>(this, "UVolumetricCloudComponent.VolumetricCloudSceneProxy"); }
	BitFieldValue<bool, unsigned __int32> bUsePerSampleAtmosphericLightTransmittance() { return { this, "UVolumetricCloudComponent.bUsePerSampleAtmosphericLightTransmittance"}; }
	BitFieldValue<bool, unsigned char> bHoldout() { return { this, "UVolumetricCloudComponent.bHoldout"}; }
	BitFieldValue<bool, unsigned char> bRenderInMainPass() { return { this, "UVolumetricCloudComponent.bRenderInMainPass"}; }
	BitFieldValue<bool, unsigned char> bVisibleInRealTimeSkyCaptures() { return { this, "UVolumetricCloudComponent.bVisibleInRealTimeSkyCaptures"}; }
	void PrecachePSOs() { NativeCall<void>(this, "UVolumetricCloudComponent.PrecachePSOs()"); }
	void PostLoad() { NativeCall<void>(this, "UVolumetricCloudComponent.PostLoad()"); }
	void OnRegister() { NativeCall<void>(this, "UVolumetricCloudComponent.OnRegister()"); }
	void SetRenderInMainPass(bool bValue) { NativeCall<void, bool>(this, "UVolumetricCloudComponent.SetRenderInMainPass(bool)", bValue); }
	void DestroyRenderState_Concurrent() { NativeCall<void>(this, "UVolumetricCloudComponent.DestroyRenderState_Concurrent()"); }
	void Serialize(FArchive& Ar) { NativeCall<void, FArchive&>(this, "UVolumetricCloudComponent.Serialize(FArchive&)", Ar); }
	void SetMaterial(UMaterialInterface* NewValue) { NativeCall<void, UMaterialInterface*>(this, "UVolumetricCloudComponent.SetMaterial(UMaterialInterface*)", NewValue); }
	void CreateRenderState_Concurrent(FRegisterComponentContext* Context) { NativeCall<void, FRegisterComponentContext*>(this, "UVolumetricCloudComponent.CreateRenderState_Concurrent(FRegisterComponentContext*)", Context); }
	void SetHoldout(bool bNewHoldout) { NativeCall<void, bool>(this, "UVolumetricCloudComponent.SetHoldout(bool)", bNewHoldout); }
};
