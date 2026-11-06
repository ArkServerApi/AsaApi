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
	static UClass* StaticClass() = delete;
	static UClass* GetPrivateStaticClass() = delete;

	UBoxReflectionCaptureComponent* GetBoxCaptureComponent() { return NativeCall<UBoxReflectionCaptureComponent*>(this, "ABoxReflectionCapture.GetBoxCaptureComponent()"); }
};
