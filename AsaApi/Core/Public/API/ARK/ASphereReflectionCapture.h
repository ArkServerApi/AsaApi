#pragma once
#include "BulkForward.h"
#include "AReflectionCapture.h"

struct ASphereReflectionCapture : public AReflectionCapture
{
public:
	ASphereReflectionCapture() = delete;
	~ASphereReflectionCapture() = delete;
	ASphereReflectionCapture(const ASphereReflectionCapture&) = delete;
	ASphereReflectionCapture& operator=(const ASphereReflectionCapture&) = delete;
	static UClass* StaticClass() = delete;
	static UClass* GetPrivateStaticClass() = delete;

	USphereReflectionCaptureComponent* GetSphereCaptureComponent() { return NativeCall<USphereReflectionCaptureComponent*>(this, "ASphereReflectionCapture.GetSphereCaptureComponent()"); }
};
