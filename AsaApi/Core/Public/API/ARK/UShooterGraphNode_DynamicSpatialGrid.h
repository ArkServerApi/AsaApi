#pragma once
#include "BulkForward.h"
#include "UShooterGraphNode_BaseSpatialGrid.h"

struct UShooterGraphNode_DynamicSpatialGrid : public UShooterGraphNode_BaseSpatialGrid
{
public:
	UShooterGraphNode_DynamicSpatialGrid() = delete;
	~UShooterGraphNode_DynamicSpatialGrid() = delete;
	UShooterGraphNode_DynamicSpatialGrid(const UShooterGraphNode_DynamicSpatialGrid&) = delete;
	UShooterGraphNode_DynamicSpatialGrid& operator=(const UShooterGraphNode_DynamicSpatialGrid&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UShooterGraphNode_DynamicSpatialGrid"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UShooterGraphNode_DynamicSpatialGrid"); }

};
