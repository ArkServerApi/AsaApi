#pragma once
#include "BulkForward.h"
#include <API/UE/Math/BoxSphereBounds.h>
#include <API/UE/Math/Sphere.h>
#include "UPointLightComponent.h"

struct USpotLightComponent : public UPointLightComponent
{
public:
	USpotLightComponent() = delete;
	~USpotLightComponent() = delete;
	USpotLightComponent(const USpotLightComponent&) = delete;
	USpotLightComponent& operator=(const USpotLightComponent&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("USpotLightComponent"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("USpotLightComponent"); }

	float& InnerConeAngleField() { return *GetNativePointerField<float*>(this, "USpotLightComponent.InnerConeAngle"); }
	float& OuterConeAngleField() { return *GetNativePointerField<float*>(this, "USpotLightComponent.OuterConeAngle"); }
	void SetInnerConeAngle(float NewInnerConeAngle) { NativeCall<void, float>(this, "USpotLightComponent.SetInnerConeAngle(float)", NewInnerConeAngle); }
	FLightSceneProxy* CreateSceneProxy() { return NativeCall<FLightSceneProxy*>(this, "USpotLightComponent.CreateSceneProxy()"); }
	void SetOuterConeAngle(float NewOuterConeAngle) { NativeCall<void, float>(this, "USpotLightComponent.SetOuterConeAngle(float)", NewOuterConeAngle); }
	float ComputeLightBrightness() { return NativeCall<float>(this, "USpotLightComponent.ComputeLightBrightness()"); }
	float GetCosHalfConeAngle() { return NativeCall<float>(this, "USpotLightComponent.GetCosHalfConeAngle()"); }
	void PrecachePSOs() { NativeCall<void>(this, "USpotLightComponent.PrecachePSOs()"); }
	static void BuildSceneProxyDesc(const USpotLightComponent& InLightComponent, FSpotLightSceneProxyDesc& OutProxyDesc) { NativeCall<void, const USpotLightComponent&, FSpotLightSceneProxyDesc&>(nullptr, "USpotLightComponent.BuildSceneProxyDesc(USpotLightComponent&,FSpotLightSceneProxyDesc&)", InLightComponent, OutProxyDesc); }
	ELightComponentType GetLightType() { return NativeCall<ELightComponentType>(this, "USpotLightComponent.GetLightType()"); }
	UE::Math::TSphere<double>* GetBoundingSphere(UE::Math::TSphere<double>* result) { return NativeCall<UE::Math::TSphere<double>*, UE::Math::TSphere<double>*>(this, "USpotLightComponent.GetBoundingSphere()", result); }
	bool AffectsBounds(const UE::Math::TBoxSphereBounds<double, double>& InBounds) { return NativeCall<bool, const UE::Math::TBoxSphereBounds<double, double>&>(this, "USpotLightComponent.AffectsBounds(UE::Math::TBoxSphereBounds<double,double>&)", InBounds); }
	static UE::Math::TVector2<float> GetClampedConeAngles(float InInnerConeAngle, float InOuterConeAngle) { return NativeCall<UE::Math::TVector2<float>, float, float>(nullptr, "USpotLightComponent.GetClampedConeAngles(float,float)", InInnerConeAngle, InOuterConeAngle); }
};
