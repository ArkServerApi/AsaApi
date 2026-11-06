#pragma once
#include "BulkForward.h"
#include "AActor.h"

struct AWorldPartitionAutoInstancedActor : public AActor
{
public:
	AWorldPartitionAutoInstancedActor() = delete;
	~AWorldPartitionAutoInstancedActor() = delete;
	AWorldPartitionAutoInstancedActor(const AWorldPartitionAutoInstancedActor&) = delete;
	AWorldPartitionAutoInstancedActor& operator=(const AWorldPartitionAutoInstancedActor&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("AWorldPartitionAutoInstancedActor"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("AWorldPartitionAutoInstancedActor"); }

	void PostInitializeComponents() { NativeCall<void>(this, "AWorldPartitionAutoInstancedActor.PostInitializeComponents()"); }
	void ForceUpdateHack() { NativeCall<void>(this, "AWorldPartitionAutoInstancedActor.ForceUpdateHack()"); }
};
