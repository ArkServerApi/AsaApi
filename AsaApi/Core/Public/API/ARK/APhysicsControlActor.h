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
	static UClass* StaticClass() { return AsaApi::ResolveClass("APhysicsControlActor"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("APhysicsControlActor"); }

};
