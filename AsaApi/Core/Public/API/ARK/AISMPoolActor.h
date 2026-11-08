#pragma once
#include "BulkForward.h"
#include "AActor.h"

struct AISMPoolActor : public AActor
{
public:
	AISMPoolActor() = delete;
	~AISMPoolActor() = delete;
	AISMPoolActor(const AISMPoolActor&) = delete;
	AISMPoolActor& operator=(const AISMPoolActor&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("AISMPoolActor"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("AISMPoolActor"); }

};
