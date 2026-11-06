#pragma once
#include "BulkForward.h"
#include "UReplicationGraphNode_GridCell.h"

struct UShooterGraphNode_DormantGridCell : public UReplicationGraphNode_GridCell
{
public:
	UShooterGraphNode_DormantGridCell() = delete;
	~UShooterGraphNode_DormantGridCell() = delete;
	UShooterGraphNode_DormantGridCell(const UShooterGraphNode_DormantGridCell&) = delete;
	UShooterGraphNode_DormantGridCell& operator=(const UShooterGraphNode_DormantGridCell&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UShooterGraphNode_DormantGridCell"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UShooterGraphNode_DormantGridCell"); }

	void RemoveStaticActor(const FNewReplicatedActorInfo& ActorInfo, FGlobalActorReplicationInfo& ActorRepInfo, bool bWasAddedAsDormantActor) { NativeCall<void, const FNewReplicatedActorInfo&, FGlobalActorReplicationInfo&, bool>(this, "UShooterGraphNode_DormantGridCell.RemoveStaticActor(FNewReplicatedActorInfo&,FGlobalActorReplicationInfo&,bool)", ActorInfo, ActorRepInfo, bWasAddedAsDormantActor); }
	void AddStaticActor(const FNewReplicatedActorInfo& ActorInfo, FGlobalActorReplicationInfo& GlobalRepInfo, bool bParentNodeHandlesDormancyChange) { NativeCall<void, const FNewReplicatedActorInfo&, FGlobalActorReplicationInfo&, bool>(this, "UShooterGraphNode_DormantGridCell.AddStaticActor(FNewReplicatedActorInfo&,FGlobalActorReplicationInfo&,bool)", ActorInfo, GlobalRepInfo, bParentNodeHandlesDormancyChange); }
};
