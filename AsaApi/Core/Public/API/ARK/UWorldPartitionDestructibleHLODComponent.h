#pragma once
#include "BulkForward.h"
#include "USceneComponent.h"

struct UWorldPartitionDestructibleHLODComponent : public USceneComponent
{
public:
	UWorldPartitionDestructibleHLODComponent() = delete;
	~UWorldPartitionDestructibleHLODComponent() = delete;
	UWorldPartitionDestructibleHLODComponent(const UWorldPartitionDestructibleHLODComponent&) = delete;
	UWorldPartitionDestructibleHLODComponent& operator=(const UWorldPartitionDestructibleHLODComponent&) = delete;
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UWorldPartitionDestructibleHLODComponent"); }

	FHLODInstancingPackedMappingData& DestructibleHLODInstancesMappingDataField() { return *GetNativePointerField<FHLODInstancingPackedMappingData*>(this, "UWorldPartitionDestructibleHLODComponent.DestructibleHLODInstancesMappingData"); }
	FWorldPartitionDestructibleHLODState& DestructibleHLODStateField() { return *GetNativePointerField<FWorldPartitionDestructibleHLODState*>(this, "UWorldPartitionDestructibleHLODComponent.DestructibleHLODState"); }
	unsigned int& VisibilityTextureSizeField() { return *GetNativePointerField<unsigned int*>(this, "UWorldPartitionDestructibleHLODComponent.VisibilityTextureSize"); }
	TArray<unsigned char, TSizedDefaultAllocator<32> >& VisibilityBufferField() { return *GetNativePointerField<TArray<unsigned char, TSizedDefaultAllocator<32> >*>(this, "UWorldPartitionDestructibleHLODComponent.VisibilityBuffer"); }
	TArray<FName, TSizedDefaultAllocator<32> >& DestructibleActorsField() { return *GetNativePointerField<TArray<FName, TSizedDefaultAllocator<32> >*>(this, "UWorldPartitionDestructibleHLODComponent.DestructibleActors"); }
	static UClass* StaticClass() { return AsaApi::ResolveClass("UWorldPartitionDestructibleHLODComponent"); }
	void ApplyDamagedActorState(int ActorIndex, unsigned char ActorHealth) { NativeCall<void, int, unsigned char>(this, "UWorldPartitionDestructibleHLODComponent.ApplyDamagedActorState(int,unsignedchar)", ActorIndex, ActorHealth); }
	void DamageActor(int ActorIndex, float RemainingHealthPercent) { NativeCall<void, int, float>(this, "UWorldPartitionDestructibleHLODComponent.DamageActor(int,float)", ActorIndex, RemainingHealthPercent); }
	void BeginPlay() { NativeCall<void>(this, "UWorldPartitionDestructibleHLODComponent.BeginPlay()"); }
};
