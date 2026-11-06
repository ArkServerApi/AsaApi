#pragma once
#include "BulkForward.h"
#include "AFadingDestructibleActor.h"

struct APrimalDestroyedMeshActor : public AFadingDestructibleActor
{
public:
	APrimalDestroyedMeshActor() = delete;
	~APrimalDestroyedMeshActor() = delete;
	APrimalDestroyedMeshActor(const APrimalDestroyedMeshActor&) = delete;
	APrimalDestroyedMeshActor& operator=(const APrimalDestroyedMeshActor&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("APrimalDestroyedMeshActor"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("APrimalDestroyedMeshActor"); }

	void BeginPlay() { NativeCall<void>(this, "APrimalDestroyedMeshActor.BeginPlay()"); }
	void Destroyed() { NativeCall<void>(this, "APrimalDestroyedMeshActor.Destroyed()"); }
	void Tick(float DeltaSeconds) { NativeCall<void, float>(this, "APrimalDestroyedMeshActor.Tick(float)", DeltaSeconds); }
	void SetupForFalling(UStaticMesh* InMesh, const TArray<UMaterialInterface*, TSizedDefaultAllocator<32> >& OverrideDestructionMaterials, const UE::Math::TVector<double>& HitDirection, USkeletalMesh* InSKMesh, bool rotate, float Damage, float TotalHealth, UHierarchicalInstancedStaticMeshComponent* HISMComp, int InstanceIdx) { NativeCall<void, UStaticMesh*, const TArray<UMaterialInterface*, TSizedDefaultAllocator<32> >&, const UE::Math::TVector<double>&, USkeletalMesh*, bool, float, float, UHierarchicalInstancedStaticMeshComponent*, int>(this, "APrimalDestroyedMeshActor.SetupForFalling(UStaticMesh*,TArray<UMaterialInterface*,TSizedDefaultAllocator<32>>&,UE::Math::TVector<double>&,USkeletalMesh*,bool,float,float,UHierarchicalInstancedStaticMeshComponent*,int)", InMesh, OverrideDestructionMaterials, HitDirection, InSKMesh, rotate, Damage, TotalHealth, HISMComp, InstanceIdx); }
};
