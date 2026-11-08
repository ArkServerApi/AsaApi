#pragma once
#include "BulkForward.h"
#include "AActor.h"

struct AGeometryCacheActor : public AActor
{
public:
	AGeometryCacheActor() = delete;
	~AGeometryCacheActor() = delete;
	AGeometryCacheActor(const AGeometryCacheActor&) = delete;
	AGeometryCacheActor& operator=(const AGeometryCacheActor&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("AGeometryCacheActor"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("AGeometryCacheActor"); }

	UGeometryCacheComponent* GetGeometryCacheComponent() { return NativeCall<UGeometryCacheComponent*>(this, "AGeometryCacheActor.GetGeometryCacheComponent()"); }
};
