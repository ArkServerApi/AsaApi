#pragma once
#include "BulkForward.h"
#include "AActor.h"

struct AGeometryCollectionActor : public AActor
{
public:
	AGeometryCollectionActor() = delete;
	~AGeometryCollectionActor() = delete;
	AGeometryCollectionActor(const AGeometryCollectionActor&) = delete;
	AGeometryCollectionActor& operator=(const AGeometryCollectionActor&) = delete;
	static UClass* StaticClass() = delete;
	static UClass* GetPrivateStaticClass() = delete;

};
