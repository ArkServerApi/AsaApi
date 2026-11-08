#pragma once
#include "BulkForward.h"
#include "AReflectionCapture.h"

struct ABoxReflectionCapture : public AReflectionCapture
{
public:
	ABoxReflectionCapture() = delete;
	~ABoxReflectionCapture() = delete;
	ABoxReflectionCapture(const ABoxReflectionCapture&) = delete;
	ABoxReflectionCapture& operator=(const ABoxReflectionCapture&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("ABoxReflectionCapture"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("ABoxReflectionCapture"); }

	UBoxReflectionCaptureComponent* GetBoxCaptureComponent() { return NativeCall<UBoxReflectionCaptureComponent*>(this, "ABoxReflectionCapture.GetBoxCaptureComponent()"); }
};
