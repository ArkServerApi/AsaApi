#pragma once
#include "BulkForward.h"
#include "UReflectionCaptureComponent.h"

struct UPlaneReflectionCaptureComponent : public UReflectionCaptureComponent
{
public:
	UPlaneReflectionCaptureComponent() = delete;
	~UPlaneReflectionCaptureComponent() = delete;
	UPlaneReflectionCaptureComponent(const UPlaneReflectionCaptureComponent&) = delete;
	UPlaneReflectionCaptureComponent& operator=(const UPlaneReflectionCaptureComponent&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UPlaneReflectionCaptureComponent"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UPlaneReflectionCaptureComponent"); }

	float& InfluenceRadiusScaleField() { return *GetNativePointerField<float*>(this, "UPlaneReflectionCaptureComponent.InfluenceRadiusScale"); }
	void UpdatePreviewShape() { NativeCall<void>(this, "UPlaneReflectionCaptureComponent.UpdatePreviewShape()"); }
	float GetInfluenceBoundingRadius() { return NativeCall<float>(this, "UPlaneReflectionCaptureComponent.GetInfluenceBoundingRadius()"); }
};
