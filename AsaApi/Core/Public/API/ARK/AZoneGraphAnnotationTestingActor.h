#pragma once
#include "BulkForward.h"
#include "AActor.h"

struct AZoneGraphAnnotationTestingActor : public AActor
{
public:
	AZoneGraphAnnotationTestingActor() = delete;
	~AZoneGraphAnnotationTestingActor() = delete;
	AZoneGraphAnnotationTestingActor(const AZoneGraphAnnotationTestingActor&) = delete;
	AZoneGraphAnnotationTestingActor& operator=(const AZoneGraphAnnotationTestingActor&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("AZoneGraphAnnotationTestingActor"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("AZoneGraphAnnotationTestingActor"); }

};
