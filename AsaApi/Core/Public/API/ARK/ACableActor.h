#pragma once
#include "BulkForward.h"
#include "AActor.h"

struct ACableActor : public AActor
{
public:
	ACableActor() = delete;
	~ACableActor() = delete;
	ACableActor(const ACableActor&) = delete;
	ACableActor& operator=(const ACableActor&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("ACableActor"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("ACableActor"); }

};
