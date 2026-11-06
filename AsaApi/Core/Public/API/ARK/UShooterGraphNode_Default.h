#pragma once
#include "BulkForward.h"
#include "UReplicationGraphNode_ActorList.h"

struct UShooterGraphNode_Default : public UReplicationGraphNode_ActorList
{
public:
	UShooterGraphNode_Default() = delete;
	~UShooterGraphNode_Default() = delete;
	UShooterGraphNode_Default(const UShooterGraphNode_Default&) = delete;
	UShooterGraphNode_Default& operator=(const UShooterGraphNode_Default&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UShooterGraphNode_Default"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UShooterGraphNode_Default"); }

	void GatherActorListsForConnection(const FConnectionGatherActorListParameters& Params) { NativeCall<void, const FConnectionGatherActorListParameters&>(this, "UShooterGraphNode_Default.GatherActorListsForConnection(FConnectionGatherActorListParameters&)", Params); }
};
