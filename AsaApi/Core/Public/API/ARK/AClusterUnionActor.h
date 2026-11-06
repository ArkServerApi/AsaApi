#pragma once
#include "BulkForward.h"
#include "AActor.h"

struct AClusterUnionActor : public AActor
{
public:
	AClusterUnionActor() = delete;
	~AClusterUnionActor() = delete;
	AClusterUnionActor(const AClusterUnionActor&) = delete;
	AClusterUnionActor& operator=(const AClusterUnionActor&) = delete;
	static UClass* StaticClass() = delete;
	static UClass* GetPrivateStaticClass() = delete;

};
