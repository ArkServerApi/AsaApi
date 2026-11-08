#pragma once
#include "BulkForward.h"
#include "UPrimitiveComponent.h"

struct UDrawFrustumComponent : public UPrimitiveComponent
{
public:
	UDrawFrustumComponent() = delete;
	~UDrawFrustumComponent() = delete;
	UDrawFrustumComponent(const UDrawFrustumComponent&) = delete;
	UDrawFrustumComponent& operator=(const UDrawFrustumComponent&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UDrawFrustumComponent"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UDrawFrustumComponent"); }

	bool& bFrustumEnabledField() { return *GetNativePointerField<bool*>(this, "UDrawFrustumComponent.bFrustumEnabled"); }
	FColor& FrustumColorField() { return *GetNativePointerField<FColor*>(this, "UDrawFrustumComponent.FrustumColor"); }
	float& FrustumAngleField() { return *GetNativePointerField<float*>(this, "UDrawFrustumComponent.FrustumAngle"); }
	float& FrustumAspectRatioField() { return *GetNativePointerField<float*>(this, "UDrawFrustumComponent.FrustumAspectRatio"); }
	float& FrustumStartDistField() { return *GetNativePointerField<float*>(this, "UDrawFrustumComponent.FrustumStartDist"); }
	float& FrustumEndDistField() { return *GetNativePointerField<float*>(this, "UDrawFrustumComponent.FrustumEndDist"); }
	FPrimitiveSceneProxy* CreateSceneProxy() { return NativeCall<FPrimitiveSceneProxy*>(this, "UDrawFrustumComponent.CreateSceneProxy()"); }
	bool GetIgnoreBoundsForEditorFocus() { return NativeCall<bool>(this, "UDrawFrustumComponent.GetIgnoreBoundsForEditorFocus()"); }
};
