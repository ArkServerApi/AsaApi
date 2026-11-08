#pragma once
#include "BulkForward.h"
#include "ASceneCapture.h"

struct ASceneCaptureCube : public ASceneCapture
{
public:
	ASceneCaptureCube() = delete;
	~ASceneCaptureCube() = delete;
	ASceneCaptureCube(const ASceneCaptureCube&) = delete;
	ASceneCaptureCube& operator=(const ASceneCaptureCube&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("ASceneCaptureCube"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("ASceneCaptureCube"); }

	void OnInterpToggle(bool bEnable) { NativeCall<void, bool>(this, "ASceneCaptureCube.OnInterpToggle(bool)", bEnable); }
};
