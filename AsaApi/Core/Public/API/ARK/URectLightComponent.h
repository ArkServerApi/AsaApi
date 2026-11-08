#pragma once
#include "BulkForward.h"
#include "ULocalLightComponent.h"

struct URectLightComponent : public ULocalLightComponent
{
public:
	URectLightComponent() = delete;
	~URectLightComponent() = delete;
	URectLightComponent(const URectLightComponent&) = delete;
	URectLightComponent& operator=(const URectLightComponent&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("URectLightComponent"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("URectLightComponent"); }

	float& SourceWidthField() { return *GetNativePointerField<float*>(this, "URectLightComponent.SourceWidth"); }
	float& SourceHeightField() { return *GetNativePointerField<float*>(this, "URectLightComponent.SourceHeight"); }
	float& BarnDoorAngleField() { return *GetNativePointerField<float*>(this, "URectLightComponent.BarnDoorAngle"); }
	float& BarnDoorLengthField() { return *GetNativePointerField<float*>(this, "URectLightComponent.BarnDoorLength"); }
	float& LightFunctionConeAngleField() { return *GetNativePointerField<float*>(this, "URectLightComponent.LightFunctionConeAngle"); }
	UE::Math::TVector2<float>& SourceTextureScaleField() { return *GetNativePointerField<UE::Math::TVector2<float>*>(this, "URectLightComponent.SourceTextureScale"); }
	UE::Math::TVector2<float>& SourceTextureOffsetField() { return *GetNativePointerField<UE::Math::TVector2<float>*>(this, "URectLightComponent.SourceTextureOffset"); }
	bool& bLightRequiresBrokenEVMathField() { return *GetNativePointerField<bool*>(this, "URectLightComponent.bLightRequiresBrokenEVMath"); }
	void Serialize(FArchive& Ar) { NativeCall<void, FArchive&>(this, "URectLightComponent.Serialize(FArchive&)", Ar); }
	void BeginDestroy() { NativeCall<void>(this, "URectLightComponent.BeginDestroy()"); }
	static void BuildSceneProxyDesc(const URectLightComponent& InLightComponent, FRectLightSceneProxyDesc& OutProxyDesc) { NativeCall<void, const URectLightComponent&, FRectLightSceneProxyDesc&>(nullptr, "URectLightComponent.BuildSceneProxyDesc(URectLightComponent&,FRectLightSceneProxyDesc&)", InLightComponent, OutProxyDesc); }
	ELightComponentType GetLightType() { return NativeCall<ELightComponentType>(this, "URectLightComponent.GetLightType()"); }
	void PostLoad() { NativeCall<void>(this, "URectLightComponent.PostLoad()"); }
	FLightSceneProxy* CreateSceneProxy() { return NativeCall<FLightSceneProxy*>(this, "URectLightComponent.CreateSceneProxy()"); }
	float GetUniformPenumbraSize() { return NativeCall<float>(this, "URectLightComponent.GetUniformPenumbraSize()"); }
	float ComputeLightBrightness() { return NativeCall<float>(this, "URectLightComponent.ComputeLightBrightness()"); }
};
