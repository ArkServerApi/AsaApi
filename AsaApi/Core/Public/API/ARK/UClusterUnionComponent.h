#pragma once
#include "BulkForward.h"
#include <API/UE/Math/BoxSphereBounds.h>
#include "UPrimitiveComponent.h"

struct UClusterUnionComponent : public UPrimitiveComponent
{
public:
	UClusterUnionComponent() = delete;
	~UClusterUnionComponent() = delete;
	UClusterUnionComponent(const UClusterUnionComponent&) = delete;
	UClusterUnionComponent& operator=(const UClusterUnionComponent&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UClusterUnionComponent"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UClusterUnionComponent"); }

	bool& bEnableDamageFromCollisionField() { return *GetNativePointerField<bool*>(this, "UClusterUnionComponent.bEnableDamageFromCollision"); }
	FOnClusterUnionAddedComponent& OnComponentAddedEventField() { return *GetNativePointerField<FOnClusterUnionAddedComponent*>(this, "UClusterUnionComponent.OnComponentAddedEvent"); }
	FOnClusterUnionRemovedComponent& OnComponentRemovedEventField() { return *GetNativePointerField<FOnClusterUnionRemovedComponent*>(this, "UClusterUnionComponent.OnComponentRemovedEvent"); }
	FOnClusterUnionBoundsChanged& OnComponentBoundsChangedEventField() { return *GetNativePointerField<FOnClusterUnionBoundsChanged*>(this, "UClusterUnionComponent.OnComponentBoundsChangedEvent"); }
	int& GravityGroupIndexOverrideField() { return *GetNativePointerField<int*>(this, "UClusterUnionComponent.GravityGroupIndexOverride"); }
	FClusterUnionReplicatedData& ReplicatedRigidStateField() { return *GetNativePointerField<FClusterUnionReplicatedData*>(this, "UClusterUnionComponent.ReplicatedRigidState"); }
	bool& bHasCachedLocalBoundsField() { return *GetNativePointerField<bool*>(this, "UClusterUnionComponent.bHasCachedLocalBounds"); }
	UE::Math::TBoxSphereBounds<double, double>& CachedLocalBoundsField() { return *GetNativePointerField<UE::Math::TBoxSphereBounds<double, double>*>(this, "UClusterUnionComponent.CachedLocalBounds"); }
	bool& bPhysicsPredictionEnabledField() { return *GetNativePointerField<bool*>(this, "UClusterUnionComponent.bPhysicsPredictionEnabled"); }
	FChaosUserData& PhysicsUserDataField() { return *GetNativePointerField<FChaosUserData*>(this, "UClusterUnionComponent.PhysicsUserData"); }
	bool DoCustomNavigableGeometryExport(FNavigableGeometryExport& GeomExport) { return NativeCall<bool, FNavigableGeometryExport&>(this, "UClusterUnionComponent.DoCustomNavigableGeometryExport(FNavigableGeometryExport&)", GeomExport); }
	void OnDestroyPhysicsState() { NativeCall<void>(this, "UClusterUnionComponent.OnDestroyPhysicsState()"); }
	UE::Math::TVector<double>* GetComponentVelocity(UE::Math::TVector<double>* result) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*>(this, "UClusterUnionComponent.GetComponentVelocity()", result); }
	void AddComponentToCluster(UPrimitiveComponent* InComponent, const TArray<int, TSizedDefaultAllocator<32> >& BoneIds, bool bRebuildGeometry) { NativeCall<void, UPrimitiveComponent*, const TArray<int, TSizedDefaultAllocator<32> >&, bool>(this, "UClusterUnionComponent.AddComponentToCluster(UPrimitiveComponent*,TArray<int,TSizedDefaultAllocator<32>>&,bool)", InComponent, BoneIds, bRebuildGeometry); }
	void RemoveComponentFromCluster(UPrimitiveComponent* InComponent) { NativeCall<void, UPrimitiveComponent*>(this, "UClusterUnionComponent.RemoveComponentFromCluster(UPrimitiveComponent*)", InComponent); }
	static void AddReferencedObjects(UObject* InThis, FReferenceCollector& Collector) { NativeCall<void, UObject*, FReferenceCollector&>(nullptr, "UClusterUnionComponent.AddReferencedObjects(UObject*,FReferenceCollector&)", InThis, Collector); }
	void SetMassOverrideInKg(FName BoneName, float MassInKg, bool bOverrideMass) { NativeCall<void, FName, float, bool>(this, "UClusterUnionComponent.SetMassOverrideInKg(FName,float,bool)", BoneName, MassInKg, bOverrideMass); }
	bool IsAnyRigidBodyAwake() { return NativeCall<bool>(this, "UClusterUnionComponent.IsAnyRigidBodyAwake()"); }
	void WakeAllRigidBodies() { NativeCall<void>(this, "UClusterUnionComponent.WakeAllRigidBodies()"); }
	bool GetDisabled() { return NativeCall<bool>(this, "UClusterUnionComponent.GetDisabled()"); }
	void SetDisabled(bool Disabled) { NativeCall<void, bool>(this, "UClusterUnionComponent.SetDisabled(bool)", Disabled); }
	bool LineTraceComponent(FHitResult& OutHit, UE::Math::TVector<double>* Start, UE::Math::TVector<double>* End, ECollisionChannel TraceChannel, const FCollisionQueryParams& Params, const FCollisionResponseParams& ResponseParams, const FCollisionObjectQueryParams& ObjectParams) { if (!Start) throw std::invalid_argument("Null native value parameter"); if (!End) throw std::invalid_argument("Null native value parameter"); return NativeCall<bool, FHitResult &, UE :: Math :: TVector < double >, UE :: Math :: TVector < double >, ECollisionChannel, const FCollisionQueryParams &, const FCollisionResponseParams &, const FCollisionObjectQueryParams &>(this, "UClusterUnionComponent.LineTraceComponent(FHitResult&,UE::Math::TVector<double>,UE::Math::TVector<double>,ECollisionChannel,FCollisionQueryParams&,FCollisionResponseParams&,FCollisionObjectQueryParams&)", OutHit, *Start, *End, TraceChannel, Params, ResponseParams, ObjectParams); }
	FBodyInstance* GetBodyInstance(FName BoneName, bool bGetWelded, int Index) { return NativeCall<FBodyInstance*, FName, bool, int>(this, "UClusterUnionComponent.GetBodyInstance(FName,bool,int)", BoneName, bGetWelded, Index); }
	bool ShouldCreatePhysicsState() { return NativeCall<bool>(this, "UClusterUnionComponent.ShouldCreatePhysicsState()"); }
	TArray<AActor*, TSizedDefaultAllocator<32> >* GetActors(TArray<AActor*, TSizedDefaultAllocator<32> >* result) { return NativeCall<TArray<AActor*, TSizedDefaultAllocator<32> >*, TArray<AActor*, TSizedDefaultAllocator<32> >*>(this, "UClusterUnionComponent.GetActors()", result); }
	void OnRep_RigidState() { NativeCall<void>(this, "UClusterUnionComponent.OnRep_RigidState()"); }
	void SetSimulatePhysics(bool bSimulate) { NativeCall<void, bool>(this, "UClusterUnionComponent.SetSimulatePhysics(bool)", bSimulate); }
	bool ShouldDispatchWakeEvents(FName BoneName) { return NativeCall<bool, FName>(this, "UClusterUnionComponent.ShouldDispatchWakeEvents(FName)", BoneName); }
	bool CanEditSimulatePhysics() { return NativeCall<bool>(this, "UClusterUnionComponent.CanEditSimulatePhysics()"); }
	void RemoveComponentBonesFromCluster(UPrimitiveComponent* InComponent, const TArray<int, TSizedDefaultAllocator<32> >& BoneIds) { NativeCall<void, UPrimitiveComponent*, const TArray<int, TSizedDefaultAllocator<32> >&>(this, "UClusterUnionComponent.RemoveComponentBonesFromCluster(UPrimitiveComponent*,TArray<int,TSizedDefaultAllocator<32>>&)", InComponent, BoneIds); }
	bool HasValidPhysicsState() { return NativeCall<bool>(this, "UClusterUnionComponent.HasValidPhysicsState()"); }
	void SetIsAnchored(bool bIsAnchored) { NativeCall<void, bool>(this, "UClusterUnionComponent.SetIsAnchored(bool)", bIsAnchored); }
	TArray<UPrimitiveComponent*, TSizedDefaultAllocator<32> >* GetPrimitiveComponents(TArray<UPrimitiveComponent*, TSizedDefaultAllocator<32> >* result) { return NativeCall<TArray<UPrimitiveComponent*, TSizedDefaultAllocator<32> >*, TArray<UPrimitiveComponent*, TSizedDefaultAllocator<32> >*>(this, "UClusterUnionComponent.GetPrimitiveComponents()", result); }
	void OnCreatePhysicsState() { NativeCall<void>(this, "UClusterUnionComponent.OnCreatePhysicsState()"); }
	bool IsComponentAdded(UPrimitiveComponent* Component) { return NativeCall<bool, UPrimitiveComponent*>(this, "UClusterUnionComponent.IsComponentAdded(UPrimitiveComponent*)", Component); }
	void SetGravityEnabled(bool Enabled) { NativeCall<void, bool>(this, "UClusterUnionComponent.SetGravityEnabled(bool)", Enabled); }
	bool GetGravityEnabled() { return NativeCall<bool>(this, "UClusterUnionComponent.GetGravityEnabled()"); }
};
