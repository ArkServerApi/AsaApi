#pragma once
#include "BulkForward.h"
#include "AActor.h"

struct APartitionActor : public AActor
{
public:
	APartitionActor() = delete;
	~APartitionActor() = delete;
	APartitionActor(const APartitionActor&) = delete;
	APartitionActor& operator=(const APartitionActor&) = delete;
	static UClass* GetPrivateStaticClass() { return StaticClass(); }

	static bool IsPartitioned(const APartitionActor* Actor) { return NativeCall<bool, const APartitionActor*>(nullptr, "APartitionActor.IsPartitioned(APartitionActor*)", Actor); }
	static UClass* StaticClass() { return NativeCall<UClass*>(nullptr, "APartitionActor.StaticClass()"); }
};
