#pragma once
#include "BulkForward.h"
#include <API/UE/Math/BoxSphereBounds.h>
#include <API/UE/Math/Sphere.h>
#include "ULightComponent.h"

struct ULocalLightComponent : public ULightComponent
{
public:
	ULocalLightComponent() = delete;
	~ULocalLightComponent() = delete;
	ULocalLightComponent(const ULocalLightComponent&) = delete;
	ULocalLightComponent& operator=(const ULocalLightComponent&) = delete;
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("ULocalLightComponent"); }

	ELightUnits& IntensityUnitsField() { return *GetNativePointerField<ELightUnits*>(this, "ULocalLightComponent.IntensityUnits"); }
	float& InverseExposureBlendField() { return *GetNativePointerField<float*>(this, "ULocalLightComponent.InverseExposureBlend"); }
	float& Radius_DEPRECATEDField() { return *GetNativePointerField<float*>(this, "ULocalLightComponent.Radius_DEPRECATED"); }
	float& AttenuationRadiusField() { return *GetNativePointerField<float*>(this, "ULocalLightComponent.AttenuationRadius"); }
	FLightmassPointLightSettings& LightmassSettingsField() { return *GetNativePointerField<FLightmassPointLightSettings*>(this, "ULocalLightComponent.LightmassSettings"); }
	static UClass* StaticClass() { return AsaApi::ResolveClass("ULocalLightComponent"); }
	static float GetUnitsConversionFactor(ELightUnits SrcUnits, ELightUnits TargetUnits, float CosHalfConeAngle) { return NativeCall<float, ELightUnits, ELightUnits, float>(nullptr, "ULocalLightComponent.GetUnitsConversionFactor(ELightUnits,ELightUnits,float)", SrcUnits, TargetUnits, CosHalfConeAngle); }
	void SendRenderTransform_Concurrent() { NativeCall<void>(this, "ULocalLightComponent.SendRenderTransform_Concurrent()"); }
	void SetAttenuationRadius(float NewRadius) { NativeCall<void, float>(this, "ULocalLightComponent.SetAttenuationRadius(float)", NewRadius); }
	UE::Math::TSphere<double>* GetBoundingSphere(UE::Math::TSphere<double>* result) { return NativeCall<UE::Math::TSphere<double>*, UE::Math::TSphere<double>*>(this, "ULocalLightComponent.GetBoundingSphere()", result); }
	bool AffectsBounds(const UE::Math::TBoxSphereBounds<double, double>& InBounds) { return NativeCall<bool, const UE::Math::TBoxSphereBounds<double, double>&>(this, "ULocalLightComponent.AffectsBounds(UE::Math::TBoxSphereBounds<double,double>&)", InBounds); }
	static void BuildSceneProxyDesc(const ULocalLightComponent& InLightComponent, FLocalLightSceneProxyDesc& OutProxyDesc) { NativeCall<void, const ULocalLightComponent&, FLocalLightSceneProxyDesc&>(nullptr, "ULocalLightComponent.BuildSceneProxyDesc(ULocalLightComponent&,FLocalLightSceneProxyDesc&)", InLightComponent, OutProxyDesc); }
	void Serialize(FArchive& Ar) { NativeCall<void, FArchive&>(this, "ULocalLightComponent.Serialize(FArchive&)", Ar); }
	ELightUnits GetLightUnits() { return NativeCall<ELightUnits>(this, "ULocalLightComponent.GetLightUnits()"); }
};
