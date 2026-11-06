#pragma once
#include "BulkForward.h"
#include "UReplicationGraphNode_GridCell.h"

struct UShooterGraphNode_DynamicGridCell : public UReplicationGraphNode_GridCell
{
public:
	UShooterGraphNode_DynamicGridCell() = delete;
	~UShooterGraphNode_DynamicGridCell() = delete;
	UShooterGraphNode_DynamicGridCell(const UShooterGraphNode_DynamicGridCell&) = delete;
	UShooterGraphNode_DynamicGridCell& operator=(const UShooterGraphNode_DynamicGridCell&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UShooterGraphNode_DynamicGridCell"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UShooterGraphNode_DynamicGridCell"); }

};
