#pragma once
#include "BulkForward.h"
#include "ALight.h"

struct ARectLight : public ALight
{
public:
	ARectLight() = delete;
	~ARectLight() = delete;
	ARectLight(const ARectLight&) = delete;
	ARectLight& operator=(const ARectLight&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("ARectLight"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("ARectLight"); }

};
