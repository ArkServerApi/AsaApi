#pragma once
#include "BulkForward.h"
#include "AVolume.h"

struct APrimalNoClimbingVolume : public AVolume
{
public:
	APrimalNoClimbingVolume() = delete;
	~APrimalNoClimbingVolume() = delete;
	APrimalNoClimbingVolume(const APrimalNoClimbingVolume&) = delete;
	APrimalNoClimbingVolume& operator=(const APrimalNoClimbingVolume&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("APrimalNoClimbingVolume"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("APrimalNoClimbingVolume"); }

};
