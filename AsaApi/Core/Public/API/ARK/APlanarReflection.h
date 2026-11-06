#pragma once
#include "BulkForward.h"
#include "ASceneCapture.h"

struct APlanarReflection : public ASceneCapture
{
public:
	APlanarReflection() = delete;
	~APlanarReflection() = delete;
	APlanarReflection(const APlanarReflection&) = delete;
	APlanarReflection& operator=(const APlanarReflection&) = delete;
	static UClass* StaticClass() = delete;
	static UClass* GetPrivateStaticClass() = delete;

	bool& bShowPreviewPlane_DEPRECATEDField() { return *GetNativePointerField<bool*>(this, "APlanarReflection.bShowPreviewPlane_DEPRECATED"); }
	void OnInterpToggle(bool bEnable) { NativeCall<void, bool>(this, "APlanarReflection.OnInterpToggle(bool)", bEnable); }
	void PostLoad() { NativeCall<void>(this, "APlanarReflection.PostLoad()"); }
};
