#pragma once
#include "BulkForward.h"


struct ADroppedItemTorch : ADroppedItem
{
	// Fields

	float& LifeTimeMeterField() { return *GetNativePointerField<float*>(this, "ADroppedItemTorch.LifeTimeMeter"); }
	float& PassiveDurabilityCostPerIntervalField() { return *GetNativePointerField<float*>(this, "ADroppedItemTorch.PassiveDurabilityCostPerInterval"); }
	float& PassiveDurabilityCostIntervalField() { return *GetNativePointerField<float*>(this, "ADroppedItemTorch.PassiveDurabilityCostInterval"); }
	long double& LastDurabilityConsumptionTimeField() { return *GetNativePointerField<long double*>(this, "ADroppedItemTorch.LastDurabilityConsumptionTime"); }
	float& LifeTimeMeterSinceDroppedField() { return *GetNativePointerField<float*>(this, "ADroppedItemTorch.LifeTimeMeterSinceDropped"); }

	// Bitfields

	// Functions

	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// static UClass* StaticClass();
	static UClass* StaticClass() { return AsaApi::ResolveClass("ADroppedItemTorch"); }
	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// static void StaticRegisterNativesADroppedItemTorch();
	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// void ValidateGeneratedRepEnums(const TArray<FRepRecord, TSizedDefaultAllocator<32> >* ClassReps);
	void OnRep_FireIsOn() { NativeCall<void>(this, "ADroppedItemTorch.OnRep_FireIsOn()"); }
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty, TSizedDefaultAllocator<32> >* OutLifetimeProps) { NativeCall<void, TArray<FLifetimeProperty, TSizedDefaultAllocator<32> >*>(this, "ADroppedItemTorch.GetLifetimeReplicatedProps(TArray<FLifetimeProperty,TSizedDefaultAllocator<32>>&)", OutLifetimeProps); }
	void HandleCollisionWithObjects(FHitResult* aHit) { NativeCall<void, FHitResult*>(this, "ADroppedItemTorch.HandleCollisionWithObjects(FHitResult)", aHit); }
	void Tick(float DeltaSeconds) { NativeCall<void, float>(this, "ADroppedItemTorch.Tick(float)", DeltaSeconds); }
	void BeginPlay() { NativeCall<void>(this, "ADroppedItemTorch.BeginPlay()"); }
	float GetDroppedItemLifeTime() { return NativeCall<float>(this, "ADroppedItemTorch.GetDroppedItemLifeTime()"); }
	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// void LoadData();
	void SetDroppedItemLifeTime() { NativeCall<void>(this, "ADroppedItemTorch.SetDroppedItemLifeTime()"); }

	bool& FireIsOnField() { return *GetNativePointerField<bool*>(this, "ADroppedItemTorch.FireIsOn"); }
	int GetFlameColorIndex() { return NativeCall<int>(this, "ADroppedItemTorch.GetFlameColorIndex()"); }
	void Suicide() { NativeCall<void>(this, "ADroppedItemTorch.Suicide()"); }
	static void GetFireIsOn_WrapperImpl(const void* Object, void* OutValue) { NativeCall<void, const void*, void*>(nullptr, "ADroppedItemTorch.GetFireIsOn_WrapperImpl(void*,void*)", Object, OutValue); }
	int GetFlameColorIndex_Implementation() { return NativeCall<int>(this, "ADroppedItemTorch.GetFlameColorIndex_Implementation()"); }
	static void SetFireIsOn_WrapperImpl(void* Object, const void* InValue) { NativeCall<void, void*, const void*>(nullptr, "ADroppedItemTorch.SetFireIsOn_WrapperImpl(void*,void*)", Object, InValue); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("ADroppedItemTorch"); }
};