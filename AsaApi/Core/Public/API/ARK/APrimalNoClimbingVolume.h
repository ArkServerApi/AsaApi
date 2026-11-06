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
	static UClass* StaticClass() = delete;
	static UClass* GetPrivateStaticClass() = delete;

};
