#pragma once
#include "BulkForward.h"
#include "AActor.h"

struct ACameraShakeSourceActor : public AActor
{
public:
	ACameraShakeSourceActor() = delete;
	~ACameraShakeSourceActor() = delete;
	ACameraShakeSourceActor(const ACameraShakeSourceActor&) = delete;
	ACameraShakeSourceActor& operator=(const ACameraShakeSourceActor&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("ACameraShakeSourceActor"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("ACameraShakeSourceActor"); }

};
