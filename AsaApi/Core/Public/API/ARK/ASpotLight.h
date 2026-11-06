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
	static UClass* GetPrivateStaticClass() { return StaticClass(); }

	static UClass* StaticClass() { return NativeCall<UClass*>(nullptr, "ASpotLight.StaticClass()"); }
	void PostLoad() { NativeCall<void>(this, "ASpotLight.PostLoad()"); }
};
