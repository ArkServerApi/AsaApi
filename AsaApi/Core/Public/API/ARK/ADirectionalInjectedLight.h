#pragma once
#include "BulkForward.h"
#include "ALight.h"

struct ADirectionalInjectedLight : public ALight
{
public:
	ADirectionalInjectedLight() = delete;
	~ADirectionalInjectedLight() = delete;
	ADirectionalInjectedLight(const ADirectionalInjectedLight&) = delete;
	ADirectionalInjectedLight& operator=(const ADirectionalInjectedLight&) = delete;
	static UClass* StaticClass() = delete;
	static UClass* GetPrivateStaticClass() = delete;

	void PostLoad() { NativeCall<void>(this, "ADirectionalInjectedLight.PostLoad()"); }
};
