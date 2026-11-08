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
	static UClass* StaticClass() { return AsaApi::ResolveClass("AGeometryCollectionActor"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("AGeometryCollectionActor"); }

};
