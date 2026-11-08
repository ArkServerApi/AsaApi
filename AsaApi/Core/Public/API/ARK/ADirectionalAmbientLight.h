#pragma once
#include "BulkForward.h"
#include "ALight.h"

struct ADirectionalAmbientLight : public ALight
{
public:
	ADirectionalAmbientLight() = delete;
	~ADirectionalAmbientLight() = delete;
	ADirectionalAmbientLight(const ADirectionalAmbientLight&) = delete;
	ADirectionalAmbientLight& operator=(const ADirectionalAmbientLight&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("ADirectionalAmbientLight"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("ADirectionalAmbientLight"); }

	void PostLoad() { NativeCall<void>(this, "ADirectionalAmbientLight.PostLoad()"); }
};
