#pragma once
#include "BulkForward.h"
#include "AISMPartitionActor.h"

struct AInstancedPlacementPartitionActor : public AISMPartitionActor
{
public:
	AInstancedPlacementPartitionActor() = delete;
	~AInstancedPlacementPartitionActor() = delete;
	AInstancedPlacementPartitionActor(const AInstancedPlacementPartitionActor&) = delete;
	AInstancedPlacementPartitionActor& operator=(const AInstancedPlacementPartitionActor&) = delete;
	static UClass* StaticClass() = delete;
	static UClass* GetPrivateStaticClass() = delete;

	void Serialize(FArchive& Ar) { NativeCall<void, FArchive&>(this, "AInstancedPlacementPartitionActor.Serialize(FArchive&)", Ar); }
	void PostLoad() { NativeCall<void>(this, "AInstancedPlacementPartitionActor.PostLoad()"); }
};
