#pragma once
#include "BulkForward.h"
#include "UReplicationGraph.h"

struct UBasicReplicationGraph : public UReplicationGraph
{
public:
	UBasicReplicationGraph() = delete;
	~UBasicReplicationGraph() = delete;
	UBasicReplicationGraph(const UBasicReplicationGraph&) = delete;
	UBasicReplicationGraph& operator=(const UBasicReplicationGraph&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UBasicReplicationGraph"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UBasicReplicationGraph"); }

	void RouteRemoveNetworkActorToNodes(const FNewReplicatedActorInfo& ActorInfo) { NativeCall<void, const FNewReplicatedActorInfo&>(this, "UBasicReplicationGraph.RouteRemoveNetworkActorToNodes(FNewReplicatedActorInfo&)", ActorInfo); }
	void InitGlobalGraphNodes() { NativeCall<void>(this, "UBasicReplicationGraph.InitGlobalGraphNodes()"); }
	void InitConnectionGraphNodes(UNetReplicationGraphConnection* RepGraphConnection) { NativeCall<void, UNetReplicationGraphConnection*>(this, "UBasicReplicationGraph.InitConnectionGraphNodes(UNetReplicationGraphConnection*)", RepGraphConnection); }
	void RouteRenameNetworkActorToNodes(const FRenamedReplicatedActorInfo& ActorInfo) { NativeCall<void, const FRenamedReplicatedActorInfo&>(this, "UBasicReplicationGraph.RouteRenameNetworkActorToNodes(FRenamedReplicatedActorInfo&)", ActorInfo); }
	void RouteAddNetworkActorToNodes(const FNewReplicatedActorInfo& ActorInfo, FGlobalActorReplicationInfo& GlobalInfo) { NativeCall<void, const FNewReplicatedActorInfo&, FGlobalActorReplicationInfo&>(this, "UBasicReplicationGraph.RouteAddNetworkActorToNodes(FNewReplicatedActorInfo&,FGlobalActorReplicationInfo&)", ActorInfo, GlobalInfo); }
	int ServerReplicateActors(float DeltaSeconds) { return NativeCall<int, float>(this, "UBasicReplicationGraph.ServerReplicateActors(float)", DeltaSeconds); }
	UReplicationGraphNode_AlwaysRelevant_ForConnection* GetAlwaysRelevantNodeForConnection(UNetConnection* Connection) { return NativeCall<UReplicationGraphNode_AlwaysRelevant_ForConnection*, UNetConnection*>(this, "UBasicReplicationGraph.GetAlwaysRelevantNodeForConnection(UNetConnection*)", Connection); }
	void InitGlobalActorClassSettings() { NativeCall<void>(this, "UBasicReplicationGraph.InitGlobalActorClassSettings()"); }
};
