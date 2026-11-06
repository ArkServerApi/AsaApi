#pragma once
#include "BulkForward.h"
#include "UNetReplicationGraphConnection.h"

struct UShooterReplicationConnectionGraph : public UNetReplicationGraphConnection
{
public:
	UShooterReplicationConnectionGraph() = delete;
	~UShooterReplicationConnectionGraph() = delete;
	UShooterReplicationConnectionGraph(const UShooterReplicationConnectionGraph&) = delete;
	UShooterReplicationConnectionGraph& operator=(const UShooterReplicationConnectionGraph&) = delete;
	static UClass* StaticClass() = delete;
	static UClass* GetPrivateStaticClass() = delete;

	UShooterGraphNode_ConnectionSpecificAlwaysRelevant*& AlwaysRelevantNodeField() { return *GetNativePointerField<UShooterGraphNode_ConnectionSpecificAlwaysRelevant**>(this, "UShooterReplicationConnectionGraph.AlwaysRelevantNode"); }
	TArray<UShooterGraphNode_DormantGridCell*, TSizedDefaultAllocator<32> >& DormantCellsField() { return *GetNativePointerField<TArray<UShooterGraphNode_DormantGridCell*, TSizedDefaultAllocator<32> >*>(this, "UShooterReplicationConnectionGraph.DormantCells"); }
	void TearDown() { NativeCall<void>(this, "UShooterReplicationConnectionGraph.TearDown()"); }
	bool HasDormantActor(AActor* Actor, bool bCheckDormancy) { return NativeCall<bool, AActor*, bool>(this, "UShooterReplicationConnectionGraph.HasDormantActor(AActor*,bool)", Actor, bCheckDormancy); }
};
