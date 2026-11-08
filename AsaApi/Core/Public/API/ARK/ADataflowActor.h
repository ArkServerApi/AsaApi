#pragma once
#include "BulkForward.h"
#include "AActor.h"

struct ADataflowActor : public AActor
{
public:
	ADataflowActor() = delete;
	~ADataflowActor() = delete;
	ADataflowActor(const ADataflowActor&) = delete;
	ADataflowActor& operator=(const ADataflowActor&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("ADataflowActor"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("ADataflowActor"); }

};
