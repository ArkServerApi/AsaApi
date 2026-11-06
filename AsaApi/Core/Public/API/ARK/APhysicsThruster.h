#pragma once
#include "BulkForward.h"
#include "ARigidBodyBase.h"

struct APhysicsThruster : public ARigidBodyBase
{
public:
	APhysicsThruster() = delete;
	~APhysicsThruster() = delete;
	APhysicsThruster(const APhysicsThruster&) = delete;
	APhysicsThruster& operator=(const APhysicsThruster&) = delete;
	static UClass* StaticClass() = delete;
	static UClass* GetPrivateStaticClass() = delete;

};
