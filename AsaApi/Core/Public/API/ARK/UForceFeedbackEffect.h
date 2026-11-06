#pragma once
#include "UEObjectForward.h"
#include "BulkForward.h"
#include "UObject.h"

struct UForceFeedbackEffect : public UObject
{
public:
	UForceFeedbackEffect() = delete;
	~UForceFeedbackEffect() = delete;
	UForceFeedbackEffect(const UForceFeedbackEffect&) = delete;
	UForceFeedbackEffect& operator=(const UForceFeedbackEffect&) = delete;
	static UClass* StaticClass() = delete;
	static UClass* GetPrivateStaticClass() = delete;
	float& DurationField() { return *GetNativePointerField<float*>(this, "UForceFeedbackEffect.Duration"); }
	float GetDuration() { return NativeCall<float>(this, "UForceFeedbackEffect.GetDuration()"); }
};
