#pragma once
#include "BulkForward.h"


struct ADroppedItemEgg : ADroppedItem
{
	// Fields

	TSubclassOf<APrimalEmitterSpawnable>& SpawnDinoEmitterField() { return *GetNativePointerField<TSubclassOf<APrimalEmitterSpawnable>*>(this, "ADroppedItemEgg.SpawnDinoEmitter"); }
	float& IndoorsHypoThermalInsulationField() { return *GetNativePointerField<float*>(this, "ADroppedItemEgg.IndoorsHypoThermalInsulation"); }
	float& IndoorsHyperThermalInsulationField() { return *GetNativePointerField<float*>(this, "ADroppedItemEgg.IndoorsHyperThermalInsulation"); }
	float& EggThermalInsulationTemperatureMultiplierField() { return *GetNativePointerField<float*>(this, "ADroppedItemEgg.EggThermalInsulationTemperatureMultiplier"); }
	ABiomeZoneVolume*& MyBiomeZoneField() { return *GetNativePointerField<ABiomeZoneVolume**>(this, "ADroppedItemEgg.MyBiomeZone"); }
	long double& LastInsulationCalcTimeField() { return *GetNativePointerField<long double*>(this, "ADroppedItemEgg.LastInsulationCalcTime"); }
	float& HyperThermalInsulationField() { return *GetNativePointerField<float*>(this, "ADroppedItemEgg.HyperThermalInsulation"); }
	float& HypoThermalInsulationField() { return *GetNativePointerField<float*>(this, "ADroppedItemEgg.HypoThermalInsulation"); }

	// Bitfields

	BitFieldValue<bool, unsigned __int32> bIsEggTooHot() { return { this, "ADroppedItemEgg.bIsEggTooHot" }; }
	BitFieldValue<bool, unsigned __int32> bIsEggTooCold() { return { this, "ADroppedItemEgg.bIsEggTooCold" }; }

	// Functions

	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// static UClass* GetPrivateStaticClass();
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("ADroppedItemEgg"); }
	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// static void StaticRegisterNativesADroppedItemEgg();
	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// void ValidateGeneratedRepEnums(const TArray<FRepRecord, TSizedDefaultAllocator<32> >* ClassReps);
	void Tick(float DeltaSeconds) { NativeCall<void, float>(this, "ADroppedItemEgg.Tick(float)", DeltaSeconds); }
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty, TSizedDefaultAllocator<32> >* OutLifetimeProps) { NativeCall<void, TArray<FLifetimeProperty, TSizedDefaultAllocator<32> >*>(this, "ADroppedItemEgg.GetLifetimeReplicatedProps(TArray<FLifetimeProperty,TSizedDefaultAllocator<32>>&)", OutLifetimeProps); }
	void NetSpawnDinoEmitter_Implementation() { NativeCall<void>(this, "ADroppedItemEgg.NetSpawnDinoEmitter_Implementation()"); }
	void UpdateEgg(float DeltaSeconds) { NativeCall<void, float>(this, "ADroppedItemEgg.UpdateEgg(float)", DeltaSeconds); }
	void BeginPlay() { NativeCall<void>(this, "ADroppedItemEgg.BeginPlay()"); }
	void CalcInsulation() { NativeCall<void>(this, "ADroppedItemEgg.CalcInsulation()"); }

	static UClass* StaticClass() { return AsaApi::ResolveClass("ADroppedItemEgg"); }

	float& EggVFXScaleMultiplierField() { return *GetNativePointerField<float*>(this, "ADroppedItemEgg.EggVFXScaleMultiplier"); }
	float& LastEggTemperatureAlphaField() { return *GetNativePointerField<float*>(this, "ADroppedItemEgg.LastEggTemperatureAlpha"); }
	float& DelayHatchingTimeField() { return *GetNativePointerField<float*>(this, "ADroppedItemEgg.DelayHatchingTime"); }
	static void SetbIsEggTooCold_WrapperImpl(void* Object, const void* InValue) { NativeCall<void, void*, const void*>(nullptr, "ADroppedItemEgg.SetbIsEggTooCold_WrapperImpl(void*,void*)", Object, InValue); }
	void TryHatchEgg_Implementation() { NativeCall<void>(this, "ADroppedItemEgg.TryHatchEgg_Implementation()"); }
	static void SetbIsEggTooHot_WrapperImpl(void* Object, const void* InValue) { NativeCall<void, void*, const void*>(nullptr, "ADroppedItemEgg.SetbIsEggTooHot_WrapperImpl(void*,void*)", Object, InValue); }
	void NetSpawnDinoEmitter() { NativeCall<void>(this, "ADroppedItemEgg.NetSpawnDinoEmitter()"); }
	void TryHatchEgg() { NativeCall<void>(this, "ADroppedItemEgg.TryHatchEgg()"); }
	static void GetbIsEggTooHot_WrapperImpl(const void* Object, void* OutValue) { NativeCall<void, const void*, void*>(nullptr, "ADroppedItemEgg.GetbIsEggTooHot_WrapperImpl(void*,void*)", Object, OutValue); }
	void DoHatchEgg() { NativeCall<void>(this, "ADroppedItemEgg.DoHatchEgg()"); }
	static void GetbIsEggTooCold_WrapperImpl(const void* Object, void* OutValue) { NativeCall<void, const void*, void*>(nullptr, "ADroppedItemEgg.GetbIsEggTooCold_WrapperImpl(void*,void*)", Object, OutValue); }
	void Stasis() { NativeCall<void>(this, "ADroppedItemEgg.Stasis()"); }
};