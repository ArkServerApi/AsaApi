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
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UShooterGraphNode_BaseSpatialGrid"); }

	static UClass* StaticClass() { return AsaApi::ResolveClass("UShooterGraphNode_BaseSpatialGrid"); }
};
