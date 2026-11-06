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
	static UClass* StaticClass() = delete;
	static UClass* GetPrivateStaticClass() = delete;

	UGeometryCacheComponent* GetGeometryCacheComponent() { return NativeCall<UGeometryCacheComponent*>(this, "AGeometryCacheActor.GetGeometryCacheComponent()"); }
};
