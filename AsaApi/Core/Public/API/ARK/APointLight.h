#pragma once
#include "BulkForward.h"
#include "ALight.h"

struct APointLight : public ALight
{
public:
	APointLight() = delete;
	~APointLight() = delete;
	APointLight(const APointLight&) = delete;
	APointLight& operator=(const APointLight&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("APointLight"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("APointLight"); }

	void SetRadius(float NewRadius) { NativeCall<void, float>(this, "APointLight.SetRadius(float)", NewRadius); }
	void SetLightFalloffExponent(float NewLightFalloffExponent) { NativeCall<void, float>(this, "APointLight.SetLightFalloffExponent(float)", NewLightFalloffExponent); }
};
