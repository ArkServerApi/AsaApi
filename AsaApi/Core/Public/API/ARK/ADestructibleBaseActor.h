#pragma once
#include "BulkForward.h"
#include "AActor.h"

struct ADestructibleBaseActor : public AActor
{
public:
	ADestructibleBaseActor() = delete;
	~ADestructibleBaseActor() = delete;
	ADestructibleBaseActor(const ADestructibleBaseActor&) = delete;
	ADestructibleBaseActor& operator=(const ADestructibleBaseActor&) = delete;
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("ADestructibleBaseActor"); }

	bool UseRotationalFall() { return NativeCall<bool>(this, "ADestructibleBaseActor.UseRotationalFall()"); }
	void SetupForFalling(UStaticMesh* InMesh, const TArray<UMaterialInterface*, TSizedDefaultAllocator<32> >& OverrideDestructionMaterials, const UE::Math::TVector<double>& HitDirection, USkeletalMesh* InSKMesh, bool rotate, float Damage, float TotalHealth, UHierarchicalInstancedStaticMeshComponent* HISMComp, int InstanceIdx) { NativeCall<void, UStaticMesh*, const TArray<UMaterialInterface*, TSizedDefaultAllocator<32> >&, const UE::Math::TVector<double>&, USkeletalMesh*, bool, float, float, UHierarchicalInstancedStaticMeshComponent*, int>(this, "ADestructibleBaseActor.SetupForFalling(UStaticMesh*,TArray<UMaterialInterface*,TSizedDefaultAllocator<32>>&,UE::Math::TVector<double>&,USkeletalMesh*,bool,float,float,UHierarchicalInstancedStaticMeshComponent*,int)", InMesh, OverrideDestructionMaterials, HitDirection, InSKMesh, rotate, Damage, TotalHealth, HISMComp, InstanceIdx); }
	bool IsFader() { return NativeCall<bool>(this, "ADestructibleBaseActor.IsFader()"); }
	static UClass* StaticClass() { return AsaApi::ResolveClass("ADestructibleBaseActor"); }
};
