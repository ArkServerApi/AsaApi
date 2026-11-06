#pragma once
#include "BulkForward.h"
#include "AActor.h"

struct APhysicsControlActor : public AActor
{
public:
	APhysicsControlActor() = delete;
	~APhysicsControlActor() = delete;
	APhysicsControlActor(const APhysicsControlActor&) = delete;
	APhysicsControlActor& operator=(const APhysicsControlActor&) = delete;
	static UClass* StaticClass() = delete;
	static UClass* GetPrivateStaticClass() = delete;

};
