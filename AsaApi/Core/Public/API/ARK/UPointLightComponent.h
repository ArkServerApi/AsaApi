#pragma once
#include "BulkForward.h"
#include "ULocalLightComponent.h"

struct UPointLightComponent : public ULocalLightComponent
{
public:
	UPointLightComponent() = delete;
	~UPointLightComponent() = delete;
	UPointLightComponent(const UPointLightComponent&) = delete;
	UPointLightComponent& operator=(const UPointLightComponent&) = delete;
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UPointLightComponent"); }

	float& LightFalloffExponentField() { return *GetNativePointerField<float*>(this, "UPointLightComponent.LightFalloffExponent"); }
	float& SourceRadiusField() { return *GetNativePointerField<float*>(this, "UPointLightComponent.SourceRadius"); }
	float& SoftSourceRadiusField() { return *GetNativePointerField<float*>(this, "UPointLightComponent.SoftSourceRadius"); }
	float& SourceLengthField() { return *GetNativePointerField<float*>(this, "UPointLightComponent.SourceLength"); }
	BitFieldValue<bool, unsigned __int32> bUseInverseSquaredFalloff() { return { this, "UPointLightComponent.bUseInverseSquaredFalloff"}; }
	void SetSourceLength(float NewValue) { NativeCall<void, float>(this, "UPointLightComponent.SetSourceLength(float)", NewValue); }
	ELightComponentType GetLightType() { return NativeCall<ELightComponentType>(this, "UPointLightComponent.GetLightType()"); }
	void SetInverseExposureBlend(float NewInverseExposureBlend) { NativeCall<void, float>(this, "UPointLightComponent.SetInverseExposureBlend(float)", NewInverseExposureBlend); }
	void Serialize(FArchive& Ar) { NativeCall<void, FArchive&>(this, "UPointLightComponent.Serialize(FArchive&)", Ar); }
	static void BuildSceneProxyDesc(const UPointLightComponent& InLightComponent, FPointLightSceneProxyDesc& OutProxyDesc) { NativeCall<void, const UPointLightComponent&, FPointLightSceneProxyDesc&>(nullptr, "UPointLightComponent.BuildSceneProxyDesc(UPointLightComponent&,FPointLightSceneProxyDesc&)", InLightComponent, OutProxyDesc); }
	void SetSourceRadius(float NewValue) { NativeCall<void, float>(this, "UPointLightComponent.SetSourceRadius(float)", NewValue); }
	void PrecachePSOs() { NativeCall<void>(this, "UPointLightComponent.PrecachePSOs()"); }
	FLightSceneProxy* CreateSceneProxy() { return NativeCall<FLightSceneProxy*>(this, "UPointLightComponent.CreateSceneProxy()"); }
	void SetSoftSourceRadius(float NewValue) { NativeCall<void, float>(this, "UPointLightComponent.SetSoftSourceRadius(float)", NewValue); }
	float ComputeLightBrightness() { return NativeCall<float>(this, "UPointLightComponent.ComputeLightBrightness()"); }
	static UClass* StaticClass() { return AsaApi::ResolveClass("UPointLightComponent"); }
	float GetUniformPenumbraSize() { return NativeCall<float>(this, "UPointLightComponent.GetUniformPenumbraSize()"); }
	void SetLightFalloffExponent(float NewLightFalloffExponent) { NativeCall<void, float>(this, "UPointLightComponent.SetLightFalloffExponent(float)", NewLightFalloffExponent); }
};
