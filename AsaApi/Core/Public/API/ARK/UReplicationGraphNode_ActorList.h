#pragma once
#include "BulkForward.h"
#include "UReplicationGraphNode.h"

struct UReplicationGraphNode_ActorList : public UReplicationGraphNode
{
public:
	UReplicationGraphNode_ActorList() = delete;
	~UReplicationGraphNode_ActorList() = delete;
	UReplicationGraphNode_ActorList(const UReplicationGraphNode_ActorList&) = delete;
	UReplicationGraphNode_ActorList& operator=(const UReplicationGraphNode_ActorList&) = delete;
	static UClass* StaticClass() { return NativeCall<UClass*>(nullptr, "UReplicationGraphNode_ActorList.StaticClass()"); }
	static UClass* GetPrivateStaticClass() { return StaticClass(); }

};
