#pragma once
#include "BulkForward.h"


struct ABaseBoxTrigger : AActor
{
	// Fields

	USceneComponent*& SceneCompField() { return *GetNativePointerField<USceneComponent**>(this, "ABaseBoxTrigger.SceneComp"); }
	UBoxComponent*& TriggerBoxField() { return *GetNativePointerField<UBoxComponent**>(this, "ABaseBoxTrigger.TriggerBox"); }

	// Bitfields

	BitFieldValue<bool, unsigned __int32> bUseBPOnTriggerBeginOverlap() { return { this, "ABaseBoxTrigger.bUseBPOnTriggerBeginOverlap" }; }
	BitFieldValue<bool, unsigned __int32> bUseBPOnTriggerEndOverlap() { return { this, "ABaseBoxTrigger.bUseBPOnTriggerEndOverlap" }; }

	// Functions

	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// static void StaticRegisterNativesABaseBoxTrigger();
	static UClass* StaticClass() { return AsaApi::ResolveClass("ABaseBoxTrigger"); }
	void BeginPlay() { NativeCall<void>(this, "ABaseBoxTrigger.BeginPlay()"); }
	void OnTriggerBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const FHitResult* SweepResult) { NativeCall<void, UPrimitiveComponent*, AActor*, UPrimitiveComponent*, int, bool, const FHitResult*>(this, "ABaseBoxTrigger.OnTriggerBeginOverlap(UPrimitiveComponent*,AActor*,UPrimitiveComponent*,int,bool,FHitResult&)", OverlappedComponent, OtherActor, OtherComp, OtherBodyIndex, bFromSweep, SweepResult); }
	void OnTriggerEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int OtherBodyIndex) { NativeCall<void, UPrimitiveComponent*, AActor*, UPrimitiveComponent*, int>(this, "ABaseBoxTrigger.OnTriggerEndOverlap(UPrimitiveComponent*,AActor*,UPrimitiveComponent*,int)", OverlappedComponent, OtherActor, OtherComp, OtherBodyIndex); }

	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("ABaseBoxTrigger"); }

	void BPOnTriggerEndOverlap(AActor* OtherActor, UPrimitiveComponent* OtherComp, int OtherBodyIndex) { NativeCall<void, AActor*, UPrimitiveComponent*, int>(this, "ABaseBoxTrigger.BPOnTriggerEndOverlap(AActor*,UPrimitiveComponent*,int)", OtherActor, OtherComp, OtherBodyIndex); }
	bool IsCharacterTouchingTrigger(APrimalCharacter* Character) { return NativeCall<bool, APrimalCharacter*>(this, "ABaseBoxTrigger.IsCharacterTouchingTrigger(APrimalCharacter*)", Character); }
	void GetAllCharactersTouchingTrigger(TArray<APrimalCharacter*, TSizedDefaultAllocator<32> >& OutCharacters) { NativeCall<void, TArray<APrimalCharacter*, TSizedDefaultAllocator<32> >&>(this, "ABaseBoxTrigger.GetAllCharactersTouchingTrigger(TArray<APrimalCharacter*,TSizedDefaultAllocator<32>>&)", OutCharacters); }
	void BPOnTriggerBeginOverlap(AActor* OtherActor, UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) { NativeCall<void, AActor*, UPrimitiveComponent*, int, bool, const FHitResult&>(this, "ABaseBoxTrigger.BPOnTriggerBeginOverlap(AActor*,UPrimitiveComponent*,int,bool,FHitResult&)", OtherActor, OtherComp, OtherBodyIndex, bFromSweep, SweepResult); }
};