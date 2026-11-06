#pragma once
#include "BulkForward.h"
#include "AInfo.h"

struct ALocalFogVolume : public AInfo
{
public:
	ALocalFogVolume() = delete;
	~ALocalFogVolume() = delete;
	ALocalFogVolume(const ALocalFogVolume&) = delete;
	ALocalFogVolume& operator=(const ALocalFogVolume&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("ALocalFogVolume"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("ALocalFogVolume"); }

};
