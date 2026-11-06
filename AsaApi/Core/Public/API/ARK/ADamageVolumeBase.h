#pragma once
#include "BulkForward.h"


struct ADamageVolumeBase : AVolume
{
	// Fields

	float& DamageAmountField() { return *GetNativePointerField<float*>(this, "ADamageVolumeBase.DamageAmount"); }
	float& DamageIntervalField() { return *GetNativePointerField<float*>(this, "ADamageVolumeBase.DamageInterval"); }
	TSubclassOf<UDamageType>& DamageTypeField() { return *GetNativePointerField<TSubclassOf<UDamageType>*>(this, "ADamageVolumeBase.DamageType"); }
	//TArray<FDamageNegatingItem, TSizedDefaultAllocator<32> >& DamageNegatingItemsField() { return *GetNativePointerField<TArray<FDamageNegatingItem, TSizedDefaultAllocator<32> >*>(this, "ADamageVolumeBase.DamageNegatingItems"); }
	TArray<TWeakObjectPtr<AShooterCharacter>, TSizedDefaultAllocator<32> >& OverlappedActorsField() { return *GetNativePointerField<TArray<TWeakObjectPtr<AShooterCharacter>, TSizedDefaultAllocator<32> >*>(this, "ADamageVolumeBase.OverlappedActors"); }

	// Bitfields

	// Functions

	static UClass* StaticClass() { return AsaApi::ResolveClass("ADamageVolumeBase"); }
	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// static void StaticRegisterNativesADamageVolumeBase();
	void BeginPlay() { NativeCall<void>(this, "ADamageVolumeBase.BeginPlay()"); }

	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("ADamageVolumeBase"); }

	void Tick(float DeltaSeconds) { NativeCall<void, float>(this, "ADamageVolumeBase.Tick(float)", DeltaSeconds); }
	void OnBeginOverlap(AActor* OverlappedActor, AActor* Actor) { NativeCall<void, AActor*, AActor*>(this, "ADamageVolumeBase.OnBeginOverlap(AActor*,AActor*)", OverlappedActor, Actor); }
	void OnEndOverlap(AActor* OverlappedActor, AActor* Actor) { NativeCall<void, AActor*, AActor*>(this, "ADamageVolumeBase.OnEndOverlap(AActor*,AActor*)", OverlappedActor, Actor); }
	float GetDamageNegationModifier(AActor* Actor) { return NativeCall<float, AActor*>(this, "ADamageVolumeBase.GetDamageNegationModifier(AActor*)", Actor); }
};