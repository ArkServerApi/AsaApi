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
	static UClass* StaticClass() { return AsaApi::ResolveClass("AGeometryCollectionISMPoolActor"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("AGeometryCollectionISMPoolActor"); }

};
