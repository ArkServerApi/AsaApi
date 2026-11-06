#pragma once
#include "BulkForward.h"
#include "UObject.h"

struct UReplicationGraphNode : public UObject
{
public:
	UReplicationGraphNode() = delete;
	~UReplicationGraphNode() = delete;
	UReplicationGraphNode(const UReplicationGraphNode&) = delete;
	UReplicationGraphNode& operator=(const UReplicationGraphNode&) = delete;
	static UClass* StaticClass() = delete;
	static UClass* GetPrivateStaticClass() = delete;

};
