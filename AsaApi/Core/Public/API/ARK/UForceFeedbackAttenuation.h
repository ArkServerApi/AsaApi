#pragma once
#include "UEObjectForward.h"
#include "BulkForward.h"
#include "UObject.h"

class UForceFeedbackAttenuation : public UObject
{
public:
	UForceFeedbackAttenuation() = delete;
	~UForceFeedbackAttenuation() = delete;
	UForceFeedbackAttenuation(const UForceFeedbackAttenuation&) = delete;
	UForceFeedbackAttenuation& operator=(const UForceFeedbackAttenuation&) = delete;
	static UClass* StaticClass() = delete;
	static UClass* GetPrivateStaticClass() = delete;
	FForceFeedbackAttenuationSettings& AttenuationField() { return *GetNativePointerField<FForceFeedbackAttenuationSettings*>(this, "UForceFeedbackAttenuation.Attenuation"); }
};
