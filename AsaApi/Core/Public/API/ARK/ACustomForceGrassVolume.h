#pragma once
#include "BulkForward.h"
#include "AVolume.h"

struct ACustomForceGrassVolume : public AVolume
{
public:
	ACustomForceGrassVolume() = delete;
	~ACustomForceGrassVolume() = delete;
	ACustomForceGrassVolume(const ACustomForceGrassVolume&) = delete;
	ACustomForceGrassVolume& operator=(const ACustomForceGrassVolume&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("ACustomForceGrassVolume"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("ACustomForceGrassVolume"); }

};
