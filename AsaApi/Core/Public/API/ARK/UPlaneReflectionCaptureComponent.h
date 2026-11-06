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
	static UClass* StaticClass() = delete;
	static UClass* GetPrivateStaticClass() = delete;

	float& InfluenceRadiusScaleField() { return *GetNativePointerField<float*>(this, "UPlaneReflectionCaptureComponent.InfluenceRadiusScale"); }
	void UpdatePreviewShape() { NativeCall<void>(this, "UPlaneReflectionCaptureComponent.UpdatePreviewShape()"); }
	float GetInfluenceBoundingRadius() { return NativeCall<float>(this, "UPlaneReflectionCaptureComponent.GetInfluenceBoundingRadius()"); }
};
