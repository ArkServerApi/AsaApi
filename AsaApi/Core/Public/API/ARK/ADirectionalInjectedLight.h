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
	static UClass* StaticClass() { return AsaApi::ResolveClass("ADirectionalInjectedLight"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("ADirectionalInjectedLight"); }

	void PostLoad() { NativeCall<void>(this, "ADirectionalInjectedLight.PostLoad()"); }
};
