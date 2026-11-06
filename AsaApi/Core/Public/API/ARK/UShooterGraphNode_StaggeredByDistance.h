#pragma once
#include "BulkForward.h"
#include "UReplicationGraphNode_ActorList.h"

struct UShooterGraphNode_StaggeredByDistance : public UReplicationGraphNode_ActorList
{
public:
	UShooterGraphNode_StaggeredByDistance() = delete;
	~UShooterGraphNode_StaggeredByDistance() = delete;
	UShooterGraphNode_StaggeredByDistance(const UShooterGraphNode_StaggeredByDistance&) = delete;
	UShooterGraphNode_StaggeredByDistance& operator=(const UShooterGraphNode_StaggeredByDistance&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UShooterGraphNode_StaggeredByDistance"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UShooterGraphNode_StaggeredByDistance"); }

	void AssessActorListForNetStagger(const FConnectionGatherActorListParameters& Params, FActorRepListRefView& BuiltList, FActorRepListRefView& FullList, const TArray<UE::Math::TVector<double>, TSizedDefaultAllocator<32> >& ViewLocations, int FrameCounter) { NativeCall<void, const FConnectionGatherActorListParameters&, FActorRepListRefView&, FActorRepListRefView&, const TArray<UE::Math::TVector<double>, TSizedDefaultAllocator<32> >&, int>(this, "UShooterGraphNode_StaggeredByDistance.AssessActorListForNetStagger(FConnectionGatherActorListParameters&,FActorRepListRefView&,FActorRepListRefView&,TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>>&,int)", Params, BuiltList, FullList, ViewLocations, FrameCounter); }
	void GatherActorListsForConnection(const FConnectionGatherActorListParameters& Params) { NativeCall<void, const FConnectionGatherActorListParameters&>(this, "UShooterGraphNode_StaggeredByDistance.GatherActorListsForConnection(FConnectionGatherActorListParameters&)", Params); }
};
