#pragma once
#include "BulkForward.h"
#include "UReplicationGraphNode_ActorList.h"

struct UReplicationGraphNode_GridCell : public UReplicationGraphNode_ActorList
{
public:
	UReplicationGraphNode_GridCell() = delete;
	~UReplicationGraphNode_GridCell() = delete;
	UReplicationGraphNode_GridCell(const UReplicationGraphNode_GridCell&) = delete;
	UReplicationGraphNode_GridCell& operator=(const UReplicationGraphNode_GridCell&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UReplicationGraphNode_GridCell"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UReplicationGraphNode_GridCell"); }

};
