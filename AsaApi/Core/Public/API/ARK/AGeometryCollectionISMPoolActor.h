#pragma once
#include "BulkForward.h"
#include "AActor.h"

struct AGeometryCollectionISMPoolActor : public AActor
{
public:
	AGeometryCollectionISMPoolActor() = delete;
	~AGeometryCollectionISMPoolActor() = delete;
	AGeometryCollectionISMPoolActor(const AGeometryCollectionISMPoolActor&) = delete;
	AGeometryCollectionISMPoolActor& operator=(const AGeometryCollectionISMPoolActor&) = delete;
	static UClass* StaticClass() = delete;
	static UClass* GetPrivateStaticClass() = delete;

};
