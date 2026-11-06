#pragma once
#include "BulkForward.h"
#include "UReplicationGraphNode_GridSpatialization2D.h"

struct UShooterGraphNode_BaseSpatialGrid : public UReplicationGraphNode_GridSpatialization2D
{
public:
	UShooterGraphNode_BaseSpatialGrid() = delete;
	~UShooterGraphNode_BaseSpatialGrid() = delete;
	UShooterGraphNode_BaseSpatialGrid(const UShooterGraphNode_BaseSpatialGrid&) = delete;
	UShooterGraphNode_BaseSpatialGrid& operator=(const UShooterGraphNode_BaseSpatialGrid&) = delete;
	static UClass* GetPrivateStaticClass() { return StaticClass(); }

	static UClass* StaticClass() { return NativeCall<UClass*>(nullptr, "UShooterGraphNode_BaseSpatialGrid.StaticClass()"); }
};
