#pragma once
#include "BulkForward.h"
#include "AActor.h"

struct AZoneGraphTestingActor : public AActor
{
public:
	AZoneGraphTestingActor() = delete;
	~AZoneGraphTestingActor() = delete;
	AZoneGraphTestingActor(const AZoneGraphTestingActor&) = delete;
	AZoneGraphTestingActor& operator=(const AZoneGraphTestingActor&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("AZoneGraphTestingActor"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("AZoneGraphTestingActor"); }

};
