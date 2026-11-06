#pragma once
#include "UEObjectForward.h"
#include "BulkForward.h"
#include "UObject.h"

struct USoundAttenuation : public UObject
{
public:
	USoundAttenuation() = delete;
	~USoundAttenuation() = delete;
	USoundAttenuation(const USoundAttenuation&) = delete;
	USoundAttenuation& operator=(const USoundAttenuation&) = delete;
	static UClass* StaticClass() = delete;
	static UClass* GetPrivateStaticClass() = delete;
	FSoundAttenuationSettings& AttenuationField() { return *GetNativePointerField<FSoundAttenuationSettings*>(this, "USoundAttenuation.Attenuation"); }
};
