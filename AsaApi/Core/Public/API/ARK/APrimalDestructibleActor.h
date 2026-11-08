#pragma once
#include "BulkForward.h"
#include "GameplayForward.h"
#include "AActor.h"

struct APrimalDestructibleActor : AActor
{
public:
	APrimalDestructibleActor() = delete;
	~APrimalDestructibleActor() = delete;
	APrimalDestructibleActor(const APrimalDestructibleActor&) = delete;
	APrimalDestructibleActor& operator=(const APrimalDestructibleActor&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("APrimalDestructibleActor"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("APrimalDestructibleActor"); }

	bool& bForceDisableClusteringField() { return *GetNativePointerField<bool*>(this, "APrimalDestructibleActor.bForceDisableClustering"); }
	bool& bUseBPStartDestructionField() { return *GetNativePointerField<bool*>(this, "APrimalDestructibleActor.bUseBPStartDestruction"); }
	bool& bInfiniteLifespanField() { return *GetNativePointerField<bool*>(this, "APrimalDestructibleActor.bInfiniteLifespan"); }

	UMeshComponent* GetDestructibleMeshComponent() { return NativeCall<UMeshComponent*>(this, "APrimalDestructibleActor.GetDestructibleMeshComponent()"); }
	void Tick(float DeltaTime) { NativeCall<void, float>(this, "APrimalDestructibleActor.Tick(float)", DeltaTime); }
	void SetGeoCollection(UGeometryCollection* GeoCollection) { NativeCall<void, UGeometryCollection*>(this, "APrimalDestructibleActor.SetGeoCollection(UGeometryCollection*)", GeoCollection); }
	void BeginPlay() { NativeCall<void>(this, "APrimalDestructibleActor.BeginPlay()"); }

	void StartDestruction(UGeometryCollection* DestructionAsset, const UE::Math::TVector<double>& HitDirection, float Damage, float TotalHealth) { NativeCall<void, UGeometryCollection*, const UE::Math::TVector<double>&, float, float>(this, "APrimalDestructibleActor.StartDestruction(UGeometryCollection*,UE::Math::TVector<double>&,float,float)", DestructionAsset, HitDirection, Damage, TotalHealth); }
	void BPStartDestruction(UGeometryCollection* destructionAsset, const UE::Math::TVector<double>& HitDirection, float Damage, float TotalHealth) { NativeCall<void, UGeometryCollection*, const UE::Math::TVector<double>&, float, float>(this, "APrimalDestructibleActor.BPStartDestruction(UGeometryCollection*,UE::Math::TVector<double>&,float,float)", destructionAsset, HitDirection, Damage, TotalHealth); }
};
