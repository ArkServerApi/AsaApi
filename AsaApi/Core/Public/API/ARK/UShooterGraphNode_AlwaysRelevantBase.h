#pragma once
#include "BulkForward.h"
#include "UReplicationGraphNode_ActorList.h"

struct UShooterGraphNode_AlwaysRelevantBase : public UReplicationGraphNode_ActorList
{
public:
	UShooterGraphNode_AlwaysRelevantBase() = delete;
	~UShooterGraphNode_AlwaysRelevantBase() = delete;
	UShooterGraphNode_AlwaysRelevantBase(const UShooterGraphNode_AlwaysRelevantBase&) = delete;
	UShooterGraphNode_AlwaysRelevantBase& operator=(const UShooterGraphNode_AlwaysRelevantBase&) = delete;
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UShooterGraphNode_AlwaysRelevantBase"); }

	static UClass* StaticClass() { return AsaApi::ResolveClass("UShooterGraphNode_AlwaysRelevantBase"); }
	void PrepareForReplication() { NativeCall<void>(this, "UShooterGraphNode_AlwaysRelevantBase.PrepareForReplication()"); }
};
