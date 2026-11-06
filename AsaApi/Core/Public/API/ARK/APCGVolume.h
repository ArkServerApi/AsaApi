#pragma once
#include "BulkForward.h"
#include "AVolume.h"

struct APCGVolume : public AVolume
{
public:
	APCGVolume() = delete;
	~APCGVolume() = delete;
	APCGVolume(const APCGVolume&) = delete;
	APCGVolume& operator=(const APCGVolume&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("APCGVolume"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("APCGVolume"); }

};
