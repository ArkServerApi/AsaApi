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
	static UClass* StaticClass() = delete;
	static UClass* GetPrivateStaticClass() = delete;

};
