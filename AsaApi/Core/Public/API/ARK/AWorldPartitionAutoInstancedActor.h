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
	static UClass* StaticClass() = delete;
	static UClass* GetPrivateStaticClass() = delete;

	void PostInitializeComponents() { NativeCall<void>(this, "AWorldPartitionAutoInstancedActor.PostInitializeComponents()"); }
	void ForceUpdateHack() { NativeCall<void>(this, "AWorldPartitionAutoInstancedActor.ForceUpdateHack()"); }
};
