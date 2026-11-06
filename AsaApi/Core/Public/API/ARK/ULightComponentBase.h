#pragma once
#include "BulkForward.h"
#include <API/UE/Math/BoxSphereBounds.h>
#include "USceneComponent.h"

struct ULightComponentBase : public USceneComponent
{
public:
	ULightComponentBase() = delete;
	~ULightComponentBase() = delete;
	ULightComponentBase(const ULightComponentBase&) = delete;
	ULightComponentBase& operator=(const ULightComponentBase&) = delete;
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("ULightComponentBase"); }

	FGuid& OriginalLightGuidField() { return *GetNativePointerField<FGuid*>(this, "ULightComponentBase.OriginalLightGuid"); }
	FGuid& LightGuidField() { return *GetNativePointerField<FGuid*>(this, "ULightComponentBase.LightGuid"); }
	float& Brightness_DEPRECATEDField() { return *GetNativePointerField<float*>(this, "ULightComponentBase.Brightness_DEPRECATED"); }
	float& IntensityField() { return *GetNativePointerField<float*>(this, "ULightComponentBase.Intensity"); }
	float& IntensityScaleField() { return *GetNativePointerField<float*>(this, "ULightComponentBase.IntensityScale"); }
	float& FinalIntensityScaleField() { return *GetNativePointerField<float*>(this, "ULightComponentBase.FinalIntensityScale"); }
	FLinearColor& ColorIntensityField() { return *GetNativePointerField<FLinearColor*>(this, "ULightComponentBase.ColorIntensity"); }
	FColor& LightColorField() { return *GetNativePointerField<FColor*>(this, "ULightComponentBase.LightColor"); }
	float& TurnOffShadowsAtDistanceFromViewerField() { return *GetNativePointerField<float*>(this, "ULightComponentBase.TurnOffShadowsAtDistanceFromViewer"); }
	TEnumAsByte<ECastRayTracedShadow::Type>& CastRaytracedShadowField() { return *GetNativePointerField<TEnumAsByte<ECastRayTracedShadow::Type>*>(this, "ULightComponentBase.CastRaytracedShadow"); }
	float& DeepShadowLayerDistributionField() { return *GetNativePointerField<float*>(this, "ULightComponentBase.DeepShadowLayerDistribution"); }
	float& IndirectLightingIntensityField() { return *GetNativePointerField<float*>(this, "ULightComponentBase.IndirectLightingIntensity"); }
	float& VolumetricScatteringIntensityField() { return *GetNativePointerField<float*>(this, "ULightComponentBase.VolumetricScatteringIntensity"); }
	int& SamplesPerPixelField() { return *GetNativePointerField<int*>(this, "ULightComponentBase.SamplesPerPixel"); }
	int& ObjectLayerMaskField() { return *GetNativePointerField<int*>(this, "ULightComponentBase.ObjectLayerMask"); }
	FLightComponentId& LightComponentIdField() { return *GetNativePointerField<FLightComponentId*>(this, "ULightComponentBase.LightComponentId"); }
	BitFieldValue<bool, unsigned __int32> bAffectsWorld() { return { this, "ULightComponentBase.bAffectsWorld"}; }
	BitFieldValue<bool, unsigned __int32> bAffectedByAtmosphereLights() { return { this, "ULightComponentBase.bAffectedByAtmosphereLights"}; }
	BitFieldValue<bool, unsigned __int32> CastShadows() { return { this, "ULightComponentBase.CastShadows"}; }
	BitFieldValue<bool, unsigned __int32> CastStaticShadows() { return { this, "ULightComponentBase.CastStaticShadows"}; }
	BitFieldValue<bool, unsigned __int32> CastDynamicShadows() { return { this, "ULightComponentBase.CastDynamicShadows"}; }
	BitFieldValue<bool, unsigned __int32> bAffectTranslucentLighting() { return { this, "ULightComponentBase.bAffectTranslucentLighting"}; }
	BitFieldValue<bool, unsigned __int32> bTransmission() { return { this, "ULightComponentBase.bTransmission"}; }
	BitFieldValue<bool, unsigned __int32> bCastVolumetricShadow() { return { this, "ULightComponentBase.bCastVolumetricShadow"}; }
	BitFieldValue<bool, unsigned __int32> bCastDeepShadow() { return { this, "ULightComponentBase.bCastDeepShadow"}; }
	BitFieldValue<bool, unsigned __int32> bCastRaytracedShadow_DEPRECATED() { return { this, "ULightComponentBase.bCastRaytracedShadow_DEPRECATED"}; }
	BitFieldValue<bool, unsigned __int32> bAffectReflection() { return { this, "ULightComponentBase.bAffectReflection"}; }
	BitFieldValue<bool, unsigned __int32> bAffectGlobalIllumination() { return { this, "ULightComponentBase.bAffectGlobalIllumination"}; }
	BitFieldValue<bool, unsigned __int32> bSupportSampledLighting() { return { this, "ULightComponentBase.bSupportSampledLighting"}; }
	BitFieldValue<bool, unsigned __int32> UseBlackLightBuffer() { return { this, "ULightComponentBase.UseBlackLightBuffer"}; }
	BitFieldValue<bool, unsigned __int32> AlwaysProjectShadows() { return { this, "ULightComponentBase.AlwaysProjectShadows"}; }
	BitFieldValue<bool, unsigned __int32> UseAmbientLightInfo() { return { this, "ULightComponentBase.UseAmbientLightInfo"}; }
	BitFieldValue<bool, unsigned __int32> UseSpotLightInfo() { return { this, "ULightComponentBase.UseSpotLightInfo"}; }
	void SetAffectReflection(bool bNewValue) { NativeCall<void, bool>(this, "ULightComponentBase.SetAffectReflection(bool)", bNewValue); }
	bool ShouldCollideWhenPlacing() { return NativeCall<bool>(this, "ULightComponentBase.ShouldCollideWhenPlacing()"); }
	void PostDuplicate(EDuplicateMode::Type DuplicateMode) { NativeCall<void, EDuplicateMode::Type>(this, "ULightComponentBase.PostDuplicate(EDuplicateMode::Type)", DuplicateMode); }
	void SetCastVolumetricShadow(bool bNewValue) { NativeCall<void, bool>(this, "ULightComponentBase.SetCastVolumetricShadow(bool)", bNewValue); }
	bool HasStaticLighting() { return NativeCall<bool>(this, "ULightComponentBase.HasStaticLighting()"); }
	void SetCastRaytracedShadow(bool bNewValue) { NativeCall<void, bool>(this, "ULightComponentBase.SetCastRaytracedShadow(bool)", bNewValue); }
	void SetCastShadows(bool bNewValue) { NativeCall<void, bool>(this, "ULightComponentBase.SetCastShadows(bool)", bNewValue); }
	void UpdateLightGUIDs() { NativeCall<void>(this, "ULightComponentBase.UpdateLightGUIDs()"); }
	UE::Math::TBoxSphereBounds<double, double>* GetPlacementExtent(UE::Math::TBoxSphereBounds<double, double>* result) { return NativeCall<UE::Math::TBoxSphereBounds<double, double>*, UE::Math::TBoxSphereBounds<double, double>*>(this, "ULightComponentBase.GetPlacementExtent()", result); }
	static UClass* StaticClass() { return AsaApi::ResolveClass("ULightComponentBase"); }
	void Serialize(FArchive& Ar) { NativeCall<void, FArchive&>(this, "ULightComponentBase.Serialize(FArchive&)", Ar); }
	void SetAffectGlobalIllumination(bool bNewValue) { NativeCall<void, bool>(this, "ULightComponentBase.SetAffectGlobalIllumination(bool)", bNewValue); }
	void SetSamplesPerPixel(int NewValue) { NativeCall<void, int>(this, "ULightComponentBase.SetSamplesPerPixel(int)", NewValue); }
	void SetCastRaytracedShadows(ECastRayTracedShadow::Type bNewValue) { NativeCall<void, ECastRayTracedShadow::Type>(this, "ULightComponentBase.SetCastRaytracedShadows(ECastRayTracedShadow::Type)", bNewValue); }
	bool HasStaticShadowing() { return NativeCall<bool>(this, "ULightComponentBase.HasStaticShadowing()"); }
	void SetCastDeepShadow(bool bNewValue) { NativeCall<void, bool>(this, "ULightComponentBase.SetCastDeepShadow(bool)", bNewValue); }
};
