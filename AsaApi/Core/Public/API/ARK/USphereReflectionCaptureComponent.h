#pragma once
#include "BulkForward.h"
#include "UReflectionCaptureComponent.h"

struct USphereReflectionCaptureComponent : public UReflectionCaptureComponent
{
public:
	USphereReflectionCaptureComponent() = delete;
	~USphereReflectionCaptureComponent() = delete;
	USphereReflectionCaptureComponent(const USphereReflectionCaptureComponent&) = delete;
	USphereReflectionCaptureComponent& operator=(const USphereReflectionCaptureComponent&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("USphereReflectionCaptureComponent"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("USphereReflectionCaptureComponent"); }

	float& InfluenceRadiusField() { return *GetNativePointerField<float*>(this, "USphereReflectionCaptureComponent.InfluenceRadius"); }
	float& CaptureDistanceScaleField() { return *GetNativePointerField<float*>(this, "USphereReflectionCaptureComponent.CaptureDistanceScale"); }
	void UpdatePreviewShape() { NativeCall<void>(this, "USphereReflectionCaptureComponent.UpdatePreviewShape()"); }
	float GetInfluenceBoundingRadius() { return NativeCall<float>(this, "USphereReflectionCaptureComponent.GetInfluenceBoundingRadius()"); }
};
