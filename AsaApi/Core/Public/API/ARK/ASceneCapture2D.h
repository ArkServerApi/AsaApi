#pragma once
#include "BulkForward.h"
#include "ASceneCapture.h"

struct ASceneCapture2D : public ASceneCapture
{
public:
	ASceneCapture2D() = delete;
	~ASceneCapture2D() = delete;
	ASceneCapture2D(const ASceneCapture2D&) = delete;
	ASceneCapture2D& operator=(const ASceneCapture2D&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("ASceneCapture2D"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("ASceneCapture2D"); }

	void CalcCamera(float DeltaTime, FMinimalViewInfo& OutMinimalViewInfo) { NativeCall<void, float, FMinimalViewInfo&>(this, "ASceneCapture2D.CalcCamera(float,FMinimalViewInfo&)", DeltaTime, OutMinimalViewInfo); }
	void OnInterpToggle(bool bEnable) { NativeCall<void, bool>(this, "ASceneCapture2D.OnInterpToggle(bool)", bEnable); }
};
