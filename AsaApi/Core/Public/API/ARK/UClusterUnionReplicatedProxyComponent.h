#pragma once
#include "BulkForward.h"
#include "UActorComponent.h"

struct UClusterUnionReplicatedProxyComponent : public UActorComponent
{
public:
	UClusterUnionReplicatedProxyComponent() = delete;
	~UClusterUnionReplicatedProxyComponent() = delete;
	UClusterUnionReplicatedProxyComponent(const UClusterUnionReplicatedProxyComponent&) = delete;
	UClusterUnionReplicatedProxyComponent& operator=(const UClusterUnionReplicatedProxyComponent&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UClusterUnionReplicatedProxyComponent"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UClusterUnionReplicatedProxyComponent"); }

	TWeakObjectPtr<UClusterUnionComponent, FWeakObjectPtr>& ParentClusterUnionField() { return *GetNativePointerField<TWeakObjectPtr<UClusterUnionComponent, FWeakObjectPtr>*>(this, "UClusterUnionReplicatedProxyComponent.ParentClusterUnion"); }
	TWeakObjectPtr<UPrimitiveComponent, FWeakObjectPtr>& ChildClusteredComponentField() { return *GetNativePointerField<TWeakObjectPtr<UPrimitiveComponent, FWeakObjectPtr>*>(this, "UClusterUnionReplicatedProxyComponent.ChildClusteredComponent"); }
	TArray<int, TSizedDefaultAllocator<32> >& ParticleBoneIdsField() { return *GetNativePointerField<TArray<int, TSizedDefaultAllocator<32> >*>(this, "UClusterUnionReplicatedProxyComponent.ParticleBoneIds"); }
	bool& bNetUpdateParentClusterUnionField() { return *GetNativePointerField<bool*>(this, "UClusterUnionReplicatedProxyComponent.bNetUpdateParentClusterUnion"); }
	bool& bNetUpdateChildClusteredComponentField() { return *GetNativePointerField<bool*>(this, "UClusterUnionReplicatedProxyComponent.bNetUpdateChildClusteredComponent"); }
	bool& bNetUpdateParticleBoneIdsField() { return *GetNativePointerField<bool*>(this, "UClusterUnionReplicatedProxyComponent.bNetUpdateParticleBoneIds"); }
	bool& bNetUpdateParticleChildToParentsField() { return *GetNativePointerField<bool*>(this, "UClusterUnionReplicatedProxyComponent.bNetUpdateParticleChildToParents"); }
	bool& bIsPendingDeletionField() { return *GetNativePointerField<bool*>(this, "UClusterUnionReplicatedProxyComponent.bIsPendingDeletion"); }
	FTimerHandle& DeferSetChildToParentHandleField() { return *GetNativePointerField<FTimerHandle*>(this, "UClusterUnionReplicatedProxyComponent.DeferSetChildToParentHandle"); }
	void AddComponentToCluster() { NativeCall<void>(this, "UClusterUnionReplicatedProxyComponent.AddComponentToCluster()"); }
	void PostRepNotifies() { NativeCall<void>(this, "UClusterUnionReplicatedProxyComponent.PostRepNotifies()"); }
	void SetParentClusterUnion(UClusterUnionComponent* InComponent) { NativeCall<void, UClusterUnionComponent*>(this, "UClusterUnionReplicatedProxyComponent.SetParentClusterUnion(UClusterUnionComponent*)", InComponent); }
	void DeferSetChildToParentChildUntilClusteredComponentInParentUnion() { NativeCall<void>(this, "UClusterUnionReplicatedProxyComponent.DeferSetChildToParentChildUntilClusteredComponentInParentUnion()"); }
	void SetParticleBoneIds(const TArray<int, TSizedDefaultAllocator<32> >& InIds) { NativeCall<void, const TArray<int, TSizedDefaultAllocator<32> >&>(this, "UClusterUnionReplicatedProxyComponent.SetParticleBoneIds(TArray<int,TSizedDefaultAllocator<32>>&)", InIds); }
	void SetChildClusteredComponent(UPrimitiveComponent* InComponent) { NativeCall<void, UPrimitiveComponent*>(this, "UClusterUnionReplicatedProxyComponent.SetChildClusteredComponent(UPrimitiveComponent*)", InComponent); }
	void EndPlay(EEndPlayReason::Type EndPlayReason) { NativeCall<void, EEndPlayReason::Type>(this, "UClusterUnionReplicatedProxyComponent.EndPlay(EEndPlayReason::Type)", EndPlayReason); }
};
