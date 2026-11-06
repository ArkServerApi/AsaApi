#pragma once
#include "BulkForward.h"
#include <API/UE/Math/BoxSphereBounds.h>
#include "UPrimitiveComponent.h"

struct USSAMTestComponent : public UPrimitiveComponent
{
public:
	USSAMTestComponent() = delete;
	~USSAMTestComponent() = delete;
	USSAMTestComponent(const USSAMTestComponent&) = delete;
	USSAMTestComponent& operator=(const USSAMTestComponent&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("USSAMTestComponent"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("USSAMTestComponent"); }

	UE::Math::TBoxSphereBounds<double, double>& TestBoundsField() { return *GetNativePointerField<UE::Math::TBoxSphereBounds<double, double>*>(this, "USSAMTestComponent.TestBounds"); }
	bool& bUseFallbackProxyField() { return *GetNativePointerField<bool*>(this, "USSAMTestComponent.bUseFallbackProxy"); }
	bool& bSupportScaleFactorField() { return *GetNativePointerField<bool*>(this, "USSAMTestComponent.bSupportScaleFactor"); }
	float GetStreamingScale() { return NativeCall<float>(this, "USSAMTestComponent.GetStreamingScale()"); }
	FPrimitiveSceneProxy* CreateSceneProxy() { return NativeCall<FPrimitiveSceneProxy*>(this, "USSAMTestComponent.CreateSceneProxy()"); }
};
