#pragma once
#include "UEValueForward.h"
#include "UEObjectForward.h"
#include <cstddef>
#include <type_traits>

class FVolumetricCloudSceneProxy
{
public:
    FVolumetricCloudRenderSceneInfo * RenderSceneInfo;
    float LayerBottomAltitudeKm;
    float LayerHeightKm;
    float TracingStartMaxDistance;
    float TracingStartDistanceFromCamera;
    unsigned char TracingMaxDistanceMode;
    float TracingMaxDistance;
    float PlanetRadiusKm;
    FColor GroundAlbedo;
    bool bUsePerSampleAtmosphericLightTransmittance;
    bool bHoldout;
    bool bRenderInMainPass;
    bool bVisibleInRealTimeSkyCaptures;
    float SkyLightCloudBottomOcclusion;
    float ViewSampleCountScale;
    float ReflectionViewSampleCountScale;
    float ShadowViewSampleCountScale;
    float ShadowReflectionViewSampleCountScale;
    float ShadowTracingDistance;
    float StopTracingTransmittanceThreshold;
    float AerialPespectiveMieScatteringStartDistance;
    float AerialPespectiveMieScatteringFadeDistance;
    float AerialPespectiveRayleighScatteringStartDistance;
    float AerialPespectiveRayleighScatteringFadeDistance;
    UMaterialInterface * CloudVolumeMaterial = nullptr;
    FVolumetricCloudSceneProxy() = delete;
    FVolumetricCloudSceneProxy(const UVolumetricCloudComponent* InComponent) { NativeCall<void, const UVolumetricCloudComponent *>(this, "FVolumetricCloudSceneProxy.FVolumetricCloudSceneProxy(UVolumetricCloudComponent*)", InComponent); }
    ~FVolumetricCloudSceneProxy() { NativeCall<void>(this, "FVolumetricCloudSceneProxy.~FVolumetricCloudSceneProxy()"); }
    FVolumetricCloudSceneProxy(const FVolumetricCloudSceneProxy&) = delete;
    FVolumetricCloudSceneProxy& operator=(const FVolumetricCloudSceneProxy&) = delete;
    FVolumetricCloudSceneProxy(FVolumetricCloudSceneProxy&&) = delete;
    FVolumetricCloudSceneProxy& operator=(FVolumetricCloudSceneProxy&&) = delete;
    FVolumetricCloudRenderSceneInfo*& RenderSceneInfoField() { return *GetNativePointerField<FVolumetricCloudRenderSceneInfo**>(this, "FVolumetricCloudSceneProxy.RenderSceneInfo"); }
    float& LayerBottomAltitudeKmField() { return *GetNativePointerField<float*>(this, "FVolumetricCloudSceneProxy.LayerBottomAltitudeKm"); }
    float& LayerHeightKmField() { return *GetNativePointerField<float*>(this, "FVolumetricCloudSceneProxy.LayerHeightKm"); }
    float& TracingStartMaxDistanceField() { return *GetNativePointerField<float*>(this, "FVolumetricCloudSceneProxy.TracingStartMaxDistance"); }
    float& TracingStartDistanceFromCameraField() { return *GetNativePointerField<float*>(this, "FVolumetricCloudSceneProxy.TracingStartDistanceFromCamera"); }
    unsigned char& TracingMaxDistanceModeField() { return *GetNativePointerField<unsigned char*>(this, "FVolumetricCloudSceneProxy.TracingMaxDistanceMode"); }
    float& TracingMaxDistanceField() { return *GetNativePointerField<float*>(this, "FVolumetricCloudSceneProxy.TracingMaxDistance"); }
    float& PlanetRadiusKmField() { return *GetNativePointerField<float*>(this, "FVolumetricCloudSceneProxy.PlanetRadiusKm"); }
    FColor& GroundAlbedoField() { return *GetNativePointerField<FColor*>(this, "FVolumetricCloudSceneProxy.GroundAlbedo"); }
    bool& bUsePerSampleAtmosphericLightTransmittanceField() { return *GetNativePointerField<bool*>(this, "FVolumetricCloudSceneProxy.bUsePerSampleAtmosphericLightTransmittance"); }
    bool& bHoldoutField() { return *GetNativePointerField<bool*>(this, "FVolumetricCloudSceneProxy.bHoldout"); }
    bool& bRenderInMainPassField() { return *GetNativePointerField<bool*>(this, "FVolumetricCloudSceneProxy.bRenderInMainPass"); }
    bool& bVisibleInRealTimeSkyCapturesField() { return *GetNativePointerField<bool*>(this, "FVolumetricCloudSceneProxy.bVisibleInRealTimeSkyCaptures"); }
    float& SkyLightCloudBottomOcclusionField() { return *GetNativePointerField<float*>(this, "FVolumetricCloudSceneProxy.SkyLightCloudBottomOcclusion"); }
    float& ViewSampleCountScaleField() { return *GetNativePointerField<float*>(this, "FVolumetricCloudSceneProxy.ViewSampleCountScale"); }
    float& ReflectionViewSampleCountScaleField() { return *GetNativePointerField<float*>(this, "FVolumetricCloudSceneProxy.ReflectionViewSampleCountScale"); }
    float& ShadowViewSampleCountScaleField() { return *GetNativePointerField<float*>(this, "FVolumetricCloudSceneProxy.ShadowViewSampleCountScale"); }
    float& ShadowReflectionViewSampleCountScaleField() { return *GetNativePointerField<float*>(this, "FVolumetricCloudSceneProxy.ShadowReflectionViewSampleCountScale"); }
    float& ShadowTracingDistanceField() { return *GetNativePointerField<float*>(this, "FVolumetricCloudSceneProxy.ShadowTracingDistance"); }
    float& StopTracingTransmittanceThresholdField() { return *GetNativePointerField<float*>(this, "FVolumetricCloudSceneProxy.StopTracingTransmittanceThreshold"); }
    float& AerialPespectiveMieScatteringStartDistanceField() { return *GetNativePointerField<float*>(this, "FVolumetricCloudSceneProxy.AerialPespectiveMieScatteringStartDistance"); }
    float& AerialPespectiveMieScatteringFadeDistanceField() { return *GetNativePointerField<float*>(this, "FVolumetricCloudSceneProxy.AerialPespectiveMieScatteringFadeDistance"); }
    float& AerialPespectiveRayleighScatteringStartDistanceField() { return *GetNativePointerField<float*>(this, "FVolumetricCloudSceneProxy.AerialPespectiveRayleighScatteringStartDistance"); }
    float& AerialPespectiveRayleighScatteringFadeDistanceField() { return *GetNativePointerField<float*>(this, "FVolumetricCloudSceneProxy.AerialPespectiveRayleighScatteringFadeDistance"); }
    UMaterialInterface*& CloudVolumeMaterialField() { return *GetNativePointerField<UMaterialInterface**>(this, "FVolumetricCloudSceneProxy.CloudVolumeMaterial"); }
};
static_assert(sizeof(FVolumetricCloudSceneProxy) == 96);
static_assert(offsetof(FVolumetricCloudSceneProxy, RenderSceneInfo) == 0);
static_assert(offsetof(FVolumetricCloudSceneProxy, LayerBottomAltitudeKm) == 8);
static_assert(offsetof(FVolumetricCloudSceneProxy, LayerHeightKm) == 12);
static_assert(offsetof(FVolumetricCloudSceneProxy, TracingStartMaxDistance) == 16);
static_assert(offsetof(FVolumetricCloudSceneProxy, TracingStartDistanceFromCamera) == 20);
static_assert(offsetof(FVolumetricCloudSceneProxy, TracingMaxDistanceMode) == 24);
static_assert(offsetof(FVolumetricCloudSceneProxy, TracingMaxDistance) == 28);
static_assert(offsetof(FVolumetricCloudSceneProxy, PlanetRadiusKm) == 32);
static_assert(offsetof(FVolumetricCloudSceneProxy, GroundAlbedo) == 36);
static_assert(offsetof(FVolumetricCloudSceneProxy, bUsePerSampleAtmosphericLightTransmittance) == 40);
static_assert(offsetof(FVolumetricCloudSceneProxy, bHoldout) == 41);
static_assert(offsetof(FVolumetricCloudSceneProxy, bRenderInMainPass) == 42);
static_assert(offsetof(FVolumetricCloudSceneProxy, bVisibleInRealTimeSkyCaptures) == 43);
static_assert(offsetof(FVolumetricCloudSceneProxy, SkyLightCloudBottomOcclusion) == 44);
static_assert(offsetof(FVolumetricCloudSceneProxy, ViewSampleCountScale) == 48);
static_assert(offsetof(FVolumetricCloudSceneProxy, ReflectionViewSampleCountScale) == 52);
static_assert(offsetof(FVolumetricCloudSceneProxy, ShadowViewSampleCountScale) == 56);
static_assert(offsetof(FVolumetricCloudSceneProxy, ShadowReflectionViewSampleCountScale) == 60);
static_assert(offsetof(FVolumetricCloudSceneProxy, ShadowTracingDistance) == 64);
static_assert(offsetof(FVolumetricCloudSceneProxy, StopTracingTransmittanceThreshold) == 68);
static_assert(offsetof(FVolumetricCloudSceneProxy, AerialPespectiveMieScatteringStartDistance) == 72);
static_assert(offsetof(FVolumetricCloudSceneProxy, AerialPespectiveMieScatteringFadeDistance) == 76);
static_assert(offsetof(FVolumetricCloudSceneProxy, AerialPespectiveRayleighScatteringStartDistance) == 80);
static_assert(offsetof(FVolumetricCloudSceneProxy, AerialPespectiveRayleighScatteringFadeDistance) == 84);
static_assert(offsetof(FVolumetricCloudSceneProxy, CloudVolumeMaterial) == 88);
static_assert(sizeof(((FVolumetricCloudSceneProxy*)nullptr)->RenderSceneInfo) == 8);
static_assert(sizeof(((FVolumetricCloudSceneProxy*)nullptr)->LayerBottomAltitudeKm) == 4);
static_assert(sizeof(((FVolumetricCloudSceneProxy*)nullptr)->LayerHeightKm) == 4);
static_assert(sizeof(((FVolumetricCloudSceneProxy*)nullptr)->TracingStartMaxDistance) == 4);
static_assert(sizeof(((FVolumetricCloudSceneProxy*)nullptr)->TracingStartDistanceFromCamera) == 4);
static_assert(sizeof(((FVolumetricCloudSceneProxy*)nullptr)->TracingMaxDistanceMode) == 1);
static_assert(sizeof(((FVolumetricCloudSceneProxy*)nullptr)->TracingMaxDistance) == 4);
static_assert(sizeof(((FVolumetricCloudSceneProxy*)nullptr)->PlanetRadiusKm) == 4);
static_assert(sizeof(((FVolumetricCloudSceneProxy*)nullptr)->GroundAlbedo) == 4);
static_assert(sizeof(((FVolumetricCloudSceneProxy*)nullptr)->bUsePerSampleAtmosphericLightTransmittance) == 1);
static_assert(sizeof(((FVolumetricCloudSceneProxy*)nullptr)->bHoldout) == 1);
static_assert(sizeof(((FVolumetricCloudSceneProxy*)nullptr)->bRenderInMainPass) == 1);
static_assert(sizeof(((FVolumetricCloudSceneProxy*)nullptr)->bVisibleInRealTimeSkyCaptures) == 1);
static_assert(sizeof(((FVolumetricCloudSceneProxy*)nullptr)->SkyLightCloudBottomOcclusion) == 4);
static_assert(sizeof(((FVolumetricCloudSceneProxy*)nullptr)->ViewSampleCountScale) == 4);
static_assert(sizeof(((FVolumetricCloudSceneProxy*)nullptr)->ReflectionViewSampleCountScale) == 4);
static_assert(sizeof(((FVolumetricCloudSceneProxy*)nullptr)->ShadowViewSampleCountScale) == 4);
static_assert(sizeof(((FVolumetricCloudSceneProxy*)nullptr)->ShadowReflectionViewSampleCountScale) == 4);
static_assert(sizeof(((FVolumetricCloudSceneProxy*)nullptr)->ShadowTracingDistance) == 4);
static_assert(sizeof(((FVolumetricCloudSceneProxy*)nullptr)->StopTracingTransmittanceThreshold) == 4);
static_assert(sizeof(((FVolumetricCloudSceneProxy*)nullptr)->AerialPespectiveMieScatteringStartDistance) == 4);
static_assert(sizeof(((FVolumetricCloudSceneProxy*)nullptr)->AerialPespectiveMieScatteringFadeDistance) == 4);
static_assert(sizeof(((FVolumetricCloudSceneProxy*)nullptr)->AerialPespectiveRayleighScatteringStartDistance) == 4);
static_assert(sizeof(((FVolumetricCloudSceneProxy*)nullptr)->AerialPespectiveRayleighScatteringFadeDistance) == 4);
static_assert(sizeof(((FVolumetricCloudSceneProxy*)nullptr)->CloudVolumeMaterial) == 8);
static_assert(!std::is_trivially_destructible_v<FVolumetricCloudSceneProxy>);
