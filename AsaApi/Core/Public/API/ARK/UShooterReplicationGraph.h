#pragma once
#include "BulkForward.h"
#include "UReplicationGraph.h"

struct UShooterReplicationGraph : public UReplicationGraph
{
public:
	UShooterReplicationGraph() = delete;
	~UShooterReplicationGraph() = delete;
	UShooterReplicationGraph(const UShooterReplicationGraph&) = delete;
	UShooterReplicationGraph& operator=(const UShooterReplicationGraph&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UShooterReplicationGraph"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UShooterReplicationGraph"); }

	float& DynamicCellSizeField() { return *GetNativePointerField<float*>(this, "UShooterReplicationGraph.DynamicCellSize"); }
	float& DormantCellSizeField() { return *GetNativePointerField<float*>(this, "UShooterReplicationGraph.DormantCellSize"); }
	float& DistanceMultiplierField() { return *GetNativePointerField<float*>(this, "UShooterReplicationGraph.DistanceMultiplier"); }
	float& DistanceMultiplierSqField() { return *GetNativePointerField<float*>(this, "UShooterReplicationGraph.DistanceMultiplierSq"); }
	bool& bEnableSpatialRebuildsField() { return *GetNativePointerField<bool*>(this, "UShooterReplicationGraph.bEnableSpatialRebuilds"); }
	UShooterGraphNode_DynamicSpatialGrid*& DynamicGridField() { return *GetNativePointerField<UShooterGraphNode_DynamicSpatialGrid**>(this, "UShooterReplicationGraph.DynamicGrid"); }
	UShooterGraphNode_DormantSpatialGrid*& DormantGridField() { return *GetNativePointerField<UShooterGraphNode_DormantSpatialGrid**>(this, "UShooterReplicationGraph.DormantGrid"); }
	UShooterGraphNode_Default*& DefaultBehaviorNodeField() { return *GetNativePointerField<UShooterGraphNode_Default**>(this, "UShooterReplicationGraph.DefaultBehaviorNode"); }
	UShooterGraphNode_GlobalAlwaysRelevant*& AlwaysRelevantNodeField() { return *GetNativePointerField<UShooterGraphNode_GlobalAlwaysRelevant**>(this, "UShooterReplicationGraph.AlwaysRelevantNode"); }
	UShooterGraphNode_TeamAlwaysRelevant*& TeamAlwaysRelevantNodeField() { return *GetNativePointerField<UShooterGraphNode_TeamAlwaysRelevant**>(this, "UShooterReplicationGraph.TeamAlwaysRelevantNode"); }
	TArray<AActor*, TSizedDefaultAllocator<32> >& PendingConnectionActorsField() { return *GetNativePointerField<TArray<AActor*, TSizedDefaultAllocator<32> >*>(this, "UShooterReplicationGraph.PendingConnectionActors"); }
	void RouteRemoveNetworkActorToNodes(const FNewReplicatedActorInfo& ActorInfo) { NativeCall<void, const FNewReplicatedActorInfo&>(this, "UShooterReplicationGraph.RouteRemoveNetworkActorToNodes(FNewReplicatedActorInfo&)", ActorInfo); }
	void InitGlobalGraphNodes() { NativeCall<void>(this, "UShooterReplicationGraph.InitGlobalGraphNodes()"); }
	void PublicSetForceDormancyInsteadOfClosingDueToRelevancy(AActor* ForActor, bool bValue) { NativeCall<void, AActor*, bool>(this, "UShooterReplicationGraph.PublicSetForceDormancyInsteadOfClosingDueToRelevancy(AActor*,bool)", ForActor, bValue); }
	void HandleStarvedActorList(const UNetReplicationGraphConnection& RepGraphConnection, const FPrioritizedRepList& List, int StartIdx, FPerConnectionActorInfoMap& ConnectionActorInfoMap, unsigned int FrameNum) { NativeCall<void, const UNetReplicationGraphConnection&, const FPrioritizedRepList&, int, FPerConnectionActorInfoMap&, unsigned int>(this, "UShooterReplicationGraph.HandleStarvedActorList(UNetReplicationGraphConnection&,FPrioritizedRepList&,int,FPerConnectionActorInfoMap&,unsignedint)", RepGraphConnection, List, StartIdx, ConnectionActorInfoMap, FrameNum); }
	static void SetNetworkParent(AActor* ParentActor, AActor* ChildActor) { NativeCall<void, AActor*, AActor*>(nullptr, "UShooterReplicationGraph.SetNetworkParent(AActor*,AActor*)", ParentActor, ChildActor); }
	void PublicReconcileDormantActorsForConnection(UNetConnection* ForConnection) { NativeCall<void, UNetConnection*>(this, "UShooterReplicationGraph.PublicReconcileDormantActorsForConnection(UNetConnection*)", ForConnection); }
	void PublicUpdateNetworkActorCullDistance(AActor* ForActor) { NativeCall<void, AActor*>(this, "UShooterReplicationGraph.PublicUpdateNetworkActorCullDistance(AActor*)", ForActor); }
	void SetActiveRepGraphBehaviorFor(AActor* pActor) { NativeCall<void, AActor*>(this, "UShooterReplicationGraph.SetActiveRepGraphBehaviorFor(AActor*)", pActor); }
	void RouteRemoveNetworkActorToConnectionNodes(EReplicationGraphBehavior Behavior, const FNewReplicatedActorInfo& ActorInfo) { NativeCall<void, EReplicationGraphBehavior, const FNewReplicatedActorInfo&>(this, "UShooterReplicationGraph.RouteRemoveNetworkActorToConnectionNodes(EReplicationGraphBehavior,FNewReplicatedActorInfo&)", Behavior, ActorInfo); }
	void AddDependentActor(AActor* ReplicatorActor, AActor* DependentActor) { NativeCall<void, AActor*, AActor*>(this, "UShooterReplicationGraph.AddDependentActor(AActor*,AActor*)", ReplicatorActor, DependentActor); }
	void RouteAddNetworkActorToConnectionNodes(EReplicationGraphBehavior Behavior, const FNewReplicatedActorInfo& ActorInfo, FGlobalActorReplicationInfo& GlobalInfo) { NativeCall<void, EReplicationGraphBehavior, const FNewReplicatedActorInfo&, FGlobalActorReplicationInfo&>(this, "UShooterReplicationGraph.RouteAddNetworkActorToConnectionNodes(EReplicationGraphBehavior,FNewReplicatedActorInfo&,FGlobalActorReplicationInfo&)", Behavior, ActorInfo, GlobalInfo); }
	void ResetGameWorldState() { NativeCall<void>(this, "UShooterReplicationGraph.ResetGameWorldState()"); }
	int ServerReplicateActors(float DeltaSeconds) { return NativeCall<int, float>(this, "UShooterReplicationGraph.ServerReplicateActors(float)", DeltaSeconds); }
	void HandlePendingActors() { NativeCall<void>(this, "UShooterReplicationGraph.HandlePendingActors()"); }
	void ReplicateActorsForConnection(UNetConnection* NetConnection, FPerConnectionActorInfoMap& ConnectionActorInfoMap, UNetReplicationGraphConnection* ConnectionManager, unsigned int FrameNum) { NativeCall<void, UNetConnection*, FPerConnectionActorInfoMap&, UNetReplicationGraphConnection*, unsigned int>(this, "UShooterReplicationGraph.ReplicateActorsForConnection(UNetConnection*,FPerConnectionActorInfoMap&,UNetReplicationGraphConnection*,unsignedint)", NetConnection, ConnectionActorInfoMap, ConnectionManager, FrameNum); }
	void InitGlobalActorClassSettings() { NativeCall<void>(this, "UShooterReplicationGraph.InitGlobalActorClassSettings()"); }
	void PublicEnableNetworkActorPlatformCullDistanceScalar(AActor* ForActor, bool bEnablePlatformCullDistanceScalar) { NativeCall<void, AActor*, bool>(this, "UShooterReplicationGraph.PublicEnableNetworkActorPlatformCullDistanceScalar(AActor*,bool)", ForActor, bEnablePlatformCullDistanceScalar); }
	void RemoveClientConnection(UNetConnection* NetConnection) { NativeCall<void, UNetConnection*>(this, "UShooterReplicationGraph.RemoveClientConnection(UNetConnection*)", NetConnection); }
	void OnRemoveConnectionGraphNodes(UNetReplicationGraphConnection* RepGraphConnection) { NativeCall<void, UNetReplicationGraphConnection*>(this, "UShooterReplicationGraph.OnRemoveConnectionGraphNodes(UNetReplicationGraphConnection*)", RepGraphConnection); }
	void InitConnectionGraphNodes(UNetReplicationGraphConnection* RepGraphConnection) { NativeCall<void, UNetReplicationGraphConnection*>(this, "UShooterReplicationGraph.InitConnectionGraphNodes(UNetReplicationGraphConnection*)", RepGraphConnection); }
	void RouteAddNetworkActorToNodes(const FNewReplicatedActorInfo& ActorInfo, FGlobalActorReplicationInfo& GlobalInfo) { NativeCall<void, const FNewReplicatedActorInfo&, FGlobalActorReplicationInfo&>(this, "UShooterReplicationGraph.RouteAddNetworkActorToNodes(FNewReplicatedActorInfo&,FGlobalActorReplicationInfo&)", ActorInfo, GlobalInfo); }
};
