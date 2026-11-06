#pragma once
#include "BulkForward.h"
#include "UReflectionCaptureComponent.h"

struct UBoxReflectionCaptureComponent : public UReflectionCaptureComponent
{
public:
	UBoxReflectionCaptureComponent() = delete;
	~UBoxReflectionCaptureComponent() = delete;
	UBoxReflectionCaptureComponent(const UBoxReflectionCaptureComponent&) = delete;
	UBoxReflectionCaptureComponent& operator=(const UBoxReflectionCaptureComponent&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UBoxReflectionCaptureComponent"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UBoxReflectionCaptureComponent"); }

	float& BoxTransitionDistanceField() { return *GetNativePointerField<float*>(this, "UBoxReflectionCaptureComponent.BoxTransitionDistance"); }
	float GetInfluenceBoundingRadius() { return NativeCall<float>(this, "UBoxReflectionCaptureComponent.GetInfluenceBoundingRadius()"); }
	void UpdatePreviewShape() { NativeCall<void>(this, "UBoxReflectionCaptureComponent.UpdatePreviewShape()"); }
};
