#pragma once
#include "BulkForward.h"
#include "UReplicationGraphNode.h"

struct UShooterGraphNode_TeamAlwaysRelevant : public UReplicationGraphNode
{
public:
	UShooterGraphNode_TeamAlwaysRelevant() = delete;
	~UShooterGraphNode_TeamAlwaysRelevant() = delete;
	UShooterGraphNode_TeamAlwaysRelevant(const UShooterGraphNode_TeamAlwaysRelevant&) = delete;
	UShooterGraphNode_TeamAlwaysRelevant& operator=(const UShooterGraphNode_TeamAlwaysRelevant&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UShooterGraphNode_TeamAlwaysRelevant"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UShooterGraphNode_TeamAlwaysRelevant"); }

	void NotifyResetAllNetworkActors() { NativeCall<void>(this, "UShooterGraphNode_TeamAlwaysRelevant.NotifyResetAllNetworkActors()"); }
	void Serialize(FArchive& Ar) { NativeCall<void, FArchive&>(this, "UShooterGraphNode_TeamAlwaysRelevant.Serialize(FArchive&)", Ar); }
	void NotifyAddNetworkActor(const FNewReplicatedActorInfo& ActorInfo) { NativeCall<void, const FNewReplicatedActorInfo&>(this, "UShooterGraphNode_TeamAlwaysRelevant.NotifyAddNetworkActor(FNewReplicatedActorInfo&)", ActorInfo); }
	void GatherActorListsForConnection(const FConnectionGatherActorListParameters& Params) { NativeCall<void, const FConnectionGatherActorListParameters&>(this, "UShooterGraphNode_TeamAlwaysRelevant.GatherActorListsForConnection(FConnectionGatherActorListParameters&)", Params); }
	void RemoveTeamChangedEventHandler(AActor* ForActor) { NativeCall<void, AActor*>(this, "UShooterGraphNode_TeamAlwaysRelevant.RemoveTeamChangedEventHandler(AActor*)", ForActor); }
	void AddActorToTeamList(AActor* Actor, int TeamId) { NativeCall<void, AActor*, int>(this, "UShooterGraphNode_TeamAlwaysRelevant.AddActorToTeamList(AActor*,int)", Actor, TeamId); }
	void RemoveActorFromTeamList(AActor* Actor, int TeamId) { NativeCall<void, AActor*, int>(this, "UShooterGraphNode_TeamAlwaysRelevant.RemoveActorFromTeamList(AActor*,int)", Actor, TeamId); }
	void GetAllActorsInNode_Debugging(TArray<AActor*, TSizedDefaultAllocator<32> >& OutArray) { NativeCall<void, TArray<AActor*, TSizedDefaultAllocator<32> >&>(this, "UShooterGraphNode_TeamAlwaysRelevant.GetAllActorsInNode_Debugging(TArray<AActor*,TSizedDefaultAllocator<32>>&)", OutArray); }
	void LogNode(FReplicationGraphDebugInfo& DebugInfo, const FString& NodeName) { NativeCall<void, FReplicationGraphDebugInfo&, const FString&>(this, "UShooterGraphNode_TeamAlwaysRelevant.LogNode(FReplicationGraphDebugInfo&,FString&)", DebugInfo, NodeName); }
	void RemoveAllTeamChangedEventHandlers() { NativeCall<void>(this, "UShooterGraphNode_TeamAlwaysRelevant.RemoveAllTeamChangedEventHandlers()"); }
	void TearDown() { NativeCall<void>(this, "UShooterGraphNode_TeamAlwaysRelevant.TearDown()"); }
	bool NotifyRemoveNetworkActor(const FNewReplicatedActorInfo& ActorInfo, bool bWarnIfNotFound) { return NativeCall<bool, const FNewReplicatedActorInfo&, bool>(this, "UShooterGraphNode_TeamAlwaysRelevant.NotifyRemoveNetworkActor(FNewReplicatedActorInfo&,bool)", ActorInfo, bWarnIfNotFound); }
};
