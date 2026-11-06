#pragma once
#include "BulkForward.h"
#include "ALight.h"

struct ASpotLight : public ALight
{
public:
	ASpotLight() = delete;
	~ASpotLight() = delete;
	ASpotLight(const ASpotLight&) = delete;
	ASpotLight& operator=(const ASpotLight&) = delete;
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("ASpotLight"); }

	static UClass* StaticClass() { return AsaApi::ResolveClass("ASpotLight"); }
	void PostLoad() { NativeCall<void>(this, "ASpotLight.PostLoad()"); }
};
