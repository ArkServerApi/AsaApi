#pragma once
#include "BulkForward.h"
#include "UShooterGraphNode_BaseSpatialGrid.h"

struct UShooterGraphNode_DormantSpatialGrid : public UShooterGraphNode_BaseSpatialGrid
{
public:
	UShooterGraphNode_DormantSpatialGrid() = delete;
	~UShooterGraphNode_DormantSpatialGrid() = delete;
	UShooterGraphNode_DormantSpatialGrid(const UShooterGraphNode_DormantSpatialGrid&) = delete;
	UShooterGraphNode_DormantSpatialGrid& operator=(const UShooterGraphNode_DormantSpatialGrid&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UShooterGraphNode_DormantSpatialGrid"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UShooterGraphNode_DormantSpatialGrid"); }

	void NotifyActorRemoved(AActor* Actor) { NativeCall<void, AActor*>(this, "UShooterGraphNode_DormantSpatialGrid.NotifyActorRemoved(AActor*)", Actor); }
	void GatherActorListsForConnection(const FConnectionGatherActorListParameters& Params) { NativeCall<void, const FConnectionGatherActorListParameters&>(this, "UShooterGraphNode_DormantSpatialGrid.GatherActorListsForConnection(FConnectionGatherActorListParameters&)", Params); }
	void HandleDormantDestroy(const FConnectionGatherActorListParameters& Params, FActorRepListRefView& ActiveList, FActorRepListRefView& DestroyList) { NativeCall<void, const FConnectionGatherActorListParameters&, FActorRepListRefView&, FActorRepListRefView&>(this, "UShooterGraphNode_DormantSpatialGrid.HandleDormantDestroy(FConnectionGatherActorListParameters&,FActorRepListRefView&,FActorRepListRefView&)", Params, ActiveList, DestroyList); }
};
