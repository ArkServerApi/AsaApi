#pragma once
#include "BulkForward.h"
#include "UReplicationDriver.h"

struct UReplicationGraph : public UReplicationDriver
{
public:
	UReplicationGraph() = delete;
	~UReplicationGraph() = delete;
	UReplicationGraph(const UReplicationGraph&) = delete;
	UReplicationGraph& operator=(const UReplicationGraph&) = delete;
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UReplicationGraph"); }

	float& DestructInfoMaxDistanceSquaredField() { return *GetNativePointerField<float*>(this, "UReplicationGraph.DestructInfoMaxDistanceSquared"); }
	unsigned int& GlobalActorChannelFrameNumTimeoutField() { return *GetNativePointerField<unsigned int*>(this, "UReplicationGraph.GlobalActorChannelFrameNumTimeout"); }
	unsigned int& PrimalActorChannelAdditionalFrameNumTimeoutField() { return *GetNativePointerField<unsigned int*>(this, "UReplicationGraph.PrimalActorChannelAdditionalFrameNumTimeout"); }
	FPrioritizedRepList& PrioritizedReplicationListField() { return *GetNativePointerField<FPrioritizedRepList*>(this, "UReplicationGraph.PrioritizedReplicationList"); }
	FGlobalActorReplicationInfoMap& GlobalActorReplicationInfoMapField() { return *GetNativePointerField<FGlobalActorReplicationInfoMap*>(this, "UReplicationGraph.GlobalActorReplicationInfoMap"); }
	FReplicationGraphCSVTracker& CSVTrackerField() { return *GetNativePointerField<FReplicationGraphCSVTracker*>(this, "UReplicationGraph.CSVTracker"); }
	FOutBunch*& FastSharedReplicationBunchField() { return *GetNativePointerField<FOutBunch**>(this, "UReplicationGraph.FastSharedReplicationBunch"); }
	UActorChannel*& FastSharedReplicationChannelField() { return *GetNativePointerField<UActorChannel**>(this, "UReplicationGraph.FastSharedReplicationChannel"); }
	FName& FastSharedReplicationFuncNameField() { return *GetNativePointerField<FName*>(this, "UReplicationGraph.FastSharedReplicationFuncName"); }
	bool& bWasConnectionSaturatedField() { return *GetNativePointerField<bool*>(this, "UReplicationGraph.bWasConnectionSaturated"); }
	bool& bWasConnectionFastPathSaturatedField() { return *GetNativePointerField<bool*>(this, "UReplicationGraph.bWasConnectionFastPathSaturated"); }
	TArray<UNetConnection*, TSizedDefaultAllocator<32> >& ConnectionsNeedingsPostTickDispatchFlushField() { return *GetNativePointerField<TArray<UNetConnection*, TSizedDefaultAllocator<32> >*>(this, "UReplicationGraph.ConnectionsNeedingsPostTickDispatchFlush"); }
	unsigned int& ReplicationGraphFrameField() { return *GetNativePointerField<unsigned int*>(this, "UReplicationGraph.ReplicationGraphFrame"); }
	int& ActorDiscoveryMaxBitsPerFrameField() { return *GetNativePointerField<int*>(this, "UReplicationGraph.ActorDiscoveryMaxBitsPerFrame"); }
	int& HeavyComputationConnectionSelectorField() { return *GetNativePointerField<int*>(this, "UReplicationGraph.HeavyComputationConnectionSelector"); }
	float& TimeLeftUntilUpdateField() { return *GetNativePointerField<float*>(this, "UReplicationGraph.TimeLeftUntilUpdate"); }
	FDelegateHandle& WorldCleanupDelegateHandleField() { return *GetNativePointerField<FDelegateHandle*>(this, "UReplicationGraph.WorldCleanupDelegateHandle"); }
	void SetRepDriverWorld(UWorld* InWorld) { NativeCall<void, UWorld*>(this, "UReplicationGraph.SetRepDriverWorld(UWorld*)", InWorld); }
	void RemoveNetworkActor(AActor* Actor) { NativeCall<void, AActor*>(this, "UReplicationGraph.RemoveNetworkActor(AActor*)", Actor); }
	void FlushNetDormancy(AActor* Actor, bool bWasDormInitial) { NativeCall<void, AActor*, bool>(this, "UReplicationGraph.FlushNetDormancy(AActor*,bool)", Actor, bWasDormInitial); }
	void LogGlobalGraphNodes(FReplicationGraphDebugInfo& DebugInfo) { NativeCall<void, FReplicationGraphDebugInfo&>(this, "UReplicationGraph.LogGlobalGraphNodes(FReplicationGraphDebugInfo&)", DebugInfo); }
	void LogConnectionGraphNodes(FReplicationGraphDebugInfo& DebugInfo) { NativeCall<void, FReplicationGraphDebugInfo&>(this, "UReplicationGraph.LogConnectionGraphNodes(FReplicationGraphDebugInfo&)", DebugInfo); }
	UNetReplicationGraphConnection* CreateClientConnectionManagerInternal(UNetConnection* Connection) { return NativeCall<UNetReplicationGraphConnection*, UNetConnection*>(this, "UReplicationGraph.CreateClientConnectionManagerInternal(UNetConnection*)", Connection); }
	void VerifyActorReferencesInternal() { NativeCall<void>(this, "UReplicationGraph.VerifyActorReferencesInternal()"); }
	void NotifyConnectionSaturated(UNetReplicationGraphConnection& Connection) { NativeCall<void, UNetReplicationGraphConnection&>(this, "UReplicationGraph.NotifyConnectionSaturated(UNetReplicationGraphConnection&)", Connection); }
	void SetRoleSwapOnReplicate(AActor* Actor, bool bSwapRoles) { NativeCall<void, AActor*, bool>(this, "UReplicationGraph.SetRoleSwapOnReplicate(AActor*,bool)", Actor, bSwapRoles); }
	void LogGraph(FReplicationGraphDebugInfo& DebugInfo) { NativeCall<void, FReplicationGraphDebugInfo&>(this, "UReplicationGraph.LogGraph(FReplicationGraphDebugInfo&)", DebugInfo); }
	bool ProcessRemoteFunction(AActor* Actor, UFunction* Function, void* Parameters, FOutParmRec* OutParms, FFrame* Stack, UObject* SubObject) { return NativeCall<bool, AActor*, UFunction*, void*, FOutParmRec*, FFrame*, UObject*>(this, "UReplicationGraph.ProcessRemoteFunction(AActor*,UFunction*,void*,FOutParmRec*,FFrame*,UObject*)", Actor, Function, Parameters, OutParms, Stack, SubObject); }
	void InitForNetDriver(UNetDriver* InNetDriver) { NativeCall<void, UNetDriver*>(this, "UReplicationGraph.InitForNetDriver(UNetDriver*)", InNetDriver); }
	void Primal_DestroyForcedStaticDormancyChildren(UNetReplicationGraphConnection* pConnectionManager, AActor* pActor) { NativeCall<void, UNetReplicationGraphConnection*, AActor*>(this, "UReplicationGraph.Primal_DestroyForcedStaticDormancyChildren(UNetReplicationGraphConnection*,AActor*)", pConnectionManager, pActor); }
	void HandleStarvedActorList(const UNetReplicationGraphConnection& RepGraphConnection, const FPrioritizedRepList& List, int StartIdx, FPerConnectionActorInfoMap& ConnectionActorInfoMap, unsigned int FrameNum) { NativeCall<void, const UNetReplicationGraphConnection&, const FPrioritizedRepList&, int, FPerConnectionActorInfoMap&, unsigned int>(this, "UReplicationGraph.HandleStarvedActorList(UNetReplicationGraphConnection&,FPrioritizedRepList&,int,FPerConnectionActorInfoMap&,unsignedint)", RepGraphConnection, List, StartIdx, ConnectionActorInfoMap, FrameNum); }
	UNetReplicationGraphConnection* FindOrAddConnectionManager(UNetConnection* NetConnection) { return NativeCall<UNetReplicationGraphConnection*, UNetConnection*>(this, "UReplicationGraph.FindOrAddConnectionManager(UNetConnection*)", NetConnection); }
	void InitNode(UReplicationGraphNode* Node) { NativeCall<void, UReplicationGraphNode*>(this, "UReplicationGraph.InitNode(UReplicationGraphNode*)", Node); }
	void InitializeActorsInWorld(UWorld* InWorld) { NativeCall<void, UWorld*>(this, "UReplicationGraph.InitializeActorsInWorld(UWorld*)", InWorld); }
	UNetReplicationGraphConnection* FindConnectionManager(UNetConnection* NetConnection) { return NativeCall<UNetReplicationGraphConnection*, UNetConnection*>(this, "UReplicationGraph.FindConnectionManager(UNetConnection*)", NetConnection); }
	void AddConnectionGraphNode(UReplicationGraphNode* GraphNode, UNetReplicationGraphConnection* ConnectionManager) { NativeCall<void, UReplicationGraphNode*, UNetReplicationGraphConnection*>(this, "UReplicationGraph.AddConnectionGraphNode(UReplicationGraphNode*,UNetReplicationGraphConnection*)", GraphNode, ConnectionManager); }
	bool IsConnectionReady(UNetConnection* Connection) { return NativeCall<bool, UNetConnection*>(this, "UReplicationGraph.IsConnectionReady(UNetConnection*)", Connection); }
	void RouteRemoveNetworkActorToNodes(const FNewReplicatedActorInfo& ActorInfo) { NativeCall<void, const FNewReplicatedActorInfo&>(this, "UReplicationGraph.RouteRemoveNetworkActorToNodes(FNewReplicatedActorInfo&)", ActorInfo); }
	void PostTickDispatch() { NativeCall<void>(this, "UReplicationGraph.PostTickDispatch()"); }
	void BeginDestroy() { NativeCall<void>(this, "UReplicationGraph.BeginDestroy()"); }
	__int64 ReplicateSingleActor_FastShared(AActor* Actor, FConnectionReplicationActorInfo& ConnectionData, FGlobalActorReplicationInfo& GlobalActorInfo, UNetReplicationGraphConnection& ConnectionManager, unsigned int FrameNum) { return NativeCall<__int64, AActor*, FConnectionReplicationActorInfo&, FGlobalActorReplicationInfo&, UNetReplicationGraphConnection&, unsigned int>(this, "UReplicationGraph.ReplicateSingleActor_FastShared(AActor*,FConnectionReplicationActorInfo&,FGlobalActorReplicationInfo&,UNetReplicationGraphConnection&,unsignedint)", Actor, ConnectionData, GlobalActorInfo, ConnectionManager, FrameNum); }
	void DebugPrintCullDistances(UNetReplicationGraphConnection* SpecificConnection) { NativeCall<void, UNetReplicationGraphConnection*>(this, "UReplicationGraph.DebugPrintCullDistances(UNetReplicationGraphConnection*)", SpecificConnection); }
	void RemoveClientConnection(UNetConnection* NetConnection) { NativeCall<void, UNetConnection*>(this, "UReplicationGraph.RemoveClientConnection(UNetConnection*)", NetConnection); }
	void CollectRepListStats(FActorRepListStatCollector& StatCollector) { NativeCall<void, FActorRepListStatCollector&>(this, "UReplicationGraph.CollectRepListStats(FActorRepListStatCollector&)", StatCollector); }
	void ResetGameWorldState() { NativeCall<void>(this, "UReplicationGraph.ResetGameWorldState()"); }
	void ForceNetUpdate(AActor* Actor) { NativeCall<void, AActor*>(this, "UReplicationGraph.ForceNetUpdate(AActor*)", Actor); }
	void AddNetworkActor(AActor* Actor) { NativeCall<void, AActor*>(this, "UReplicationGraph.AddNetworkActor(AActor*)", Actor); }
	void NotifyActorRenamed(AActor* Actor, UObject* PreviousOuter, FName PreviousName) { NativeCall<void, AActor*, UObject*, FName>(this, "UReplicationGraph.NotifyActorRenamed(AActor*,UObject*,FName)", Actor, PreviousOuter, PreviousName); }
	void RouteAddNetworkActorToNodes(const FNewReplicatedActorInfo& ActorInfo, FGlobalActorReplicationInfo& GlobalInfo) { NativeCall<void, const FNewReplicatedActorInfo&, FGlobalActorReplicationInfo&>(this, "UReplicationGraph.RouteAddNetworkActorToNodes(FNewReplicatedActorInfo&,FGlobalActorReplicationInfo&)", ActorInfo, GlobalInfo); }
	void AddGlobalGraphNode(UReplicationGraphNode* GraphNode) { NativeCall<void, UReplicationGraphNode*>(this, "UReplicationGraph.AddGlobalGraphNode(UReplicationGraphNode*)", GraphNode); }
	void InitGlobalActorClassSettings() { NativeCall<void>(this, "UReplicationGraph.InitGlobalActorClassSettings()"); }
	void ReplicateActorsForConnection(UNetConnection* NetConnection, FPerConnectionActorInfoMap& ConnectionActorInfoMap, UNetReplicationGraphConnection* ConnectionManager, unsigned int FrameNum) { NativeCall<void, UNetConnection*, FPerConnectionActorInfoMap&, UNetReplicationGraphConnection*, unsigned int>(this, "UReplicationGraph.ReplicateActorsForConnection(UNetConnection*,FPerConnectionActorInfoMap&,UNetReplicationGraphConnection*,unsignedint)", NetConnection, ConnectionActorInfoMap, ConnectionManager, FrameNum); }
	void InitConnectionGraphNodes(UNetReplicationGraphConnection* ConnectionManager) { NativeCall<void, UNetReplicationGraphConnection*>(this, "UReplicationGraph.InitConnectionGraphNodes(UNetReplicationGraphConnection*)", ConnectionManager); }
	void PrintGraphDebugInfo_OnInvalidActor() { NativeCall<void>(this, "UReplicationGraph.PrintGraphDebugInfo_OnInvalidActor()"); }
	UWorld* GetWorld() { return NativeCall<UWorld*>(this, "UReplicationGraph.GetWorld()"); }
	__int64 ReplicateSingleActor(const AActor*& Actor, FConnectionReplicationActorInfo& ActorInfo, FGlobalActorReplicationInfo& GlobalActorInfo, FPerConnectionActorInfoMap& ConnectionActorInfoMap, UNetReplicationGraphConnection& ConnectionManager, unsigned int FrameNum) { return NativeCall<__int64, const AActor*&, FConnectionReplicationActorInfo&, FGlobalActorReplicationInfo&, FPerConnectionActorInfoMap&, UNetReplicationGraphConnection&, unsigned int>(this, "UReplicationGraph.ReplicateSingleActor(AActor*&,FConnectionReplicationActorInfo&,FGlobalActorReplicationInfo&,FPerConnectionActorInfoMap&,UNetReplicationGraphConnection&,unsignedint)", Actor, ActorInfo, GlobalActorInfo, ConnectionActorInfoMap, ConnectionManager, FrameNum); }
	static UClass* StaticClass() { return AsaApi::ResolveClass("UReplicationGraph"); }
	void NotifyActorDormancyChange(AActor* Actor, ENetDormancy OldDormancyState) { NativeCall<void, AActor*, ENetDormancy>(this, "UReplicationGraph.NotifyActorDormancyChange(AActor*,ENetDormancy)", Actor, OldDormancyState); }
	void InitGlobalGraphNodes() { NativeCall<void>(this, "UReplicationGraph.InitGlobalGraphNodes()"); }
	void Primal_NotifyDormantActorServerDestroyedAllConnections(AActor* Actor) { NativeCall<void, AActor*>(this, "UReplicationGraph.Primal_NotifyDormantActorServerDestroyedAllConnections(AActor*)", Actor); }
	void InitializeForWorld(UWorld* World) { NativeCall<void, UWorld*>(this, "UReplicationGraph.InitializeForWorld(UWorld*)", World); }
	void RouteRenameNetworkActorToNodes(const FRenamedReplicatedActorInfo& ActorInfo) { NativeCall<void, const FRenamedReplicatedActorInfo&>(this, "UReplicationGraph.RouteRenameNetworkActorToNodes(FRenamedReplicatedActorInfo&)", ActorInfo); }
	void NotifyActorTearOff(AActor* Actor) { NativeCall<void, AActor*>(this, "UReplicationGraph.NotifyActorTearOff(AActor*)", Actor); }
	void NotifyDestructionInfoCreated(AActor* Actor, FActorDestructionInfo& DestructionInfo) { NativeCall<void, AActor*, FActorDestructionInfo&>(this, "UReplicationGraph.NotifyDestructionInfoCreated(AActor*,FActorDestructionInfo&)", Actor, DestructionInfo); }
	void NotifyActorFullyDormantForConnection(AActor* Actor, UNetConnection* Connection) { NativeCall<void, AActor*, UNetConnection*>(this, "UReplicationGraph.NotifyActorFullyDormantForConnection(AActor*,UNetConnection*)", Actor, Connection); }
	int ServerReplicateActors(float DeltaSeconds) { return NativeCall<int, float>(this, "UReplicationGraph.ServerReplicateActors(float)", DeltaSeconds); }
	void AddClientConnection(UNetConnection* NetConnection) { NativeCall<void, UNetConnection*>(this, "UReplicationGraph.AddClientConnection(UNetConnection*)", NetConnection); }
	void Serialize(FArchive& Ar) { NativeCall<void, FArchive&>(this, "UReplicationGraph.Serialize(FArchive&)", Ar); }
	void TearDown() { NativeCall<void>(this, "UReplicationGraph.TearDown()"); }
};
