#pragma once
#include "BulkForward.h"
#include "ADestructibleBaseActor.h"

struct ADestructibleActor : public ADestructibleBaseActor
{
public:
	ADestructibleActor() = delete;
	~ADestructibleActor() = delete;
	ADestructibleActor(const ADestructibleActor&) = delete;
	ADestructibleActor& operator=(const ADestructibleActor&) = delete;
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("ADestructibleActor"); }

	void SetupForFalling(UStaticMesh* InMesh, const TArray<UMaterialInterface*, TSizedDefaultAllocator<32> >& OverrideDestructionMaterials, const UE::Math::TVector<double>& HitDirection, USkeletalMesh* InSKMesh, bool rotate, float Damage, float TotalHealth, UHierarchicalInstancedStaticMeshComponent* HISMComp, int InstanceIdx) { NativeCall<void, UStaticMesh*, const TArray<UMaterialInterface*, TSizedDefaultAllocator<32> >&, const UE::Math::TVector<double>&, USkeletalMesh*, bool, float, float, UHierarchicalInstancedStaticMeshComponent*, int>(this, "ADestructibleActor.SetupForFalling(UStaticMesh*,TArray<UMaterialInterface*,TSizedDefaultAllocator<32>>&,UE::Math::TVector<double>&,USkeletalMesh*,bool,float,float,UHierarchicalInstancedStaticMeshComponent*,int)", InMesh, OverrideDestructionMaterials, HitDirection, InSKMesh, rotate, Damage, TotalHealth, HISMComp, InstanceIdx); }
	UMeshComponent* GetFadingMeshComponent() { return NativeCall<UMeshComponent*>(this, "ADestructibleActor.GetFadingMeshComponent()"); }
	static UClass* StaticClass() { return AsaApi::ResolveClass("ADestructibleActor"); }
};
