#pragma once
#include "BulkForward.h"
#include "UReplicationGraphNode.h"

struct UReplicationGraphNode_GridSpatialization2D : public UReplicationGraphNode
{
public:
	UReplicationGraphNode_GridSpatialization2D() = delete;
	~UReplicationGraphNode_GridSpatialization2D() = delete;
	UReplicationGraphNode_GridSpatialization2D(const UReplicationGraphNode_GridSpatialization2D&) = delete;
	UReplicationGraphNode_GridSpatialization2D& operator=(const UReplicationGraphNode_GridSpatialization2D&) = delete;
	static UClass* StaticClass() { return NativeCall<UClass*>(nullptr, "UReplicationGraphNode_GridSpatialization2D.StaticClass()"); }
	static UClass* GetPrivateStaticClass() { return StaticClass(); }

};
