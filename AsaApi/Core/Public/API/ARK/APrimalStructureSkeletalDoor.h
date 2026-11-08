#pragma once
#include "BulkForward.h"


struct APrimalStructureSkeletalDoor : APrimalStructureDoor
{
    // Fields

    USkeletalMeshComponent*& SkeletalDoorComponentField() { return *GetNativePointerField<USkeletalMeshComponent**>(this, "APrimalStructureSkeletalDoor.SkeletalDoorComponent"); }
    UShapeComponent*& DoorCollisionComponentField() { return *GetNativePointerField<UShapeComponent**>(this, "APrimalStructureSkeletalDoor.DoorCollisionComponent"); }
    UShapeComponent*& TriggerComponentField() { return *GetNativePointerField<UShapeComponent**>(this, "APrimalStructureSkeletalDoor.TriggerComponent"); }
    TSubclassOf<APrimalBuff>& BuffToApplyWhenInsideStructureField() { return *GetNativePointerField<TSubclassOf<APrimalBuff>*>(this, "APrimalStructureSkeletalDoor.BuffToApplyWhenInsideStructure"); }

    // Bitfields


    // Functions

    // Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// static UClass* GetPrivateStaticClass();
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("APrimalStructureSkeletalDoor"); }
    // Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// static void StaticRegisterNativesAPrimalStructureSkeletalDoor();
    void Tick(float DeltaSeconds) { NativeCall<void, float>(this, "APrimalStructureSkeletalDoor.Tick(float)", DeltaSeconds); }
    void PostInitializeComponents() { NativeCall<void>(this, "APrimalStructureSkeletalDoor.PostInitializeComponents()"); }
    void OnBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const FHitResult* SweepResult) { NativeCall<void, UPrimitiveComponent*, AActor*, UPrimitiveComponent*, int, bool, const FHitResult*>(this, "APrimalStructureSkeletalDoor.OnBeginOverlap(UPrimitiveComponent*,AActor*,UPrimitiveComponent*,int,bool,FHitResult&)", OverlappedComponent, OtherActor, OtherComp, OtherBodyIndex, bFromSweep, SweepResult); }
    void OnEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int OtherBodyIndex) { NativeCall<void, UPrimitiveComponent*, AActor*, UPrimitiveComponent*, int>(this, "APrimalStructureSkeletalDoor.OnEndOverlap(UPrimitiveComponent*,AActor*,UPrimitiveComponent*,int)", OverlappedComponent, OtherActor, OtherComp, OtherBodyIndex); }

	static UClass* StaticClass() { return AsaApi::ResolveClass("APrimalStructureSkeletalDoor"); }

	void BeginPlay() { NativeCall<void>(this, "APrimalStructureSkeletalDoor.BeginPlay()"); }
	int GetDoorOpenState() { return NativeCall<int>(this, "APrimalStructureSkeletalDoor.GetDoorOpenState()"); }
};