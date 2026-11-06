#pragma once
#include "BulkForward.h"


struct ASkeletalMeshActor : AActor
{
	// Fields

	TObjectPtr<USkeletalMeshComponent>& SkeletalMeshComponentField() { return *GetNativePointerField<TObjectPtr<USkeletalMeshComponent>*>(this, "ASkeletalMeshActor.SkeletalMeshComponent"); }
	TObjectPtr<USkeletalMesh>& ReplicatedMeshField() { return *GetNativePointerField<TObjectPtr<USkeletalMesh>*>(this, "ASkeletalMeshActor.ReplicatedMesh"); }
	//TObjectPtr<UPhysicsAsset>& ReplicatedPhysAssetField() { return *GetNativePointerField<TObjectPtr<UPhysicsAsset>*>(this, "ASkeletalMeshActor.ReplicatedPhysAsset"); }
	TObjectPtr<UMaterialInterface>& ReplicatedMaterial0Field() { return *GetNativePointerField<TObjectPtr<UMaterialInterface>*>(this, "ASkeletalMeshActor.ReplicatedMaterial0"); }
	TObjectPtr<UMaterialInterface>& ReplicatedMaterial1Field() { return *GetNativePointerField<TObjectPtr<UMaterialInterface>*>(this, "ASkeletalMeshActor.ReplicatedMaterial1"); }
	TMap<FName, TWeakObjectPtr<UAnimMontage>, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<FName, TWeakObjectPtr<UAnimMontage>, 0> >& CurrentlyPlayingMontagesField() { return *GetNativePointerField<TMap<FName, TWeakObjectPtr<UAnimMontage>, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<FName, TWeakObjectPtr<UAnimMontage>, 0> >*>(this, "ASkeletalMeshActor.CurrentlyPlayingMontages"); }

	// Bitfields

	BitFieldValue<bool, unsigned __int32> bShouldDoAnimNotifies() { return { this, "ASkeletalMeshActor.bShouldDoAnimNotifies" }; }

	// Functions

	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("ASkeletalMeshActor"); }
	USkeletalMeshComponent* GetSkeletalMeshComponent() { return NativeCall<USkeletalMeshComponent*>(this, "ASkeletalMeshActor.GetSkeletalMeshComponent()"); }
	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// static void StaticRegisterNativesASkeletalMeshActor();
	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// void ValidateGeneratedRepEnums(const TArray<FRepRecord, TSizedDefaultAllocator<32> >* ClassReps);
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty, TSizedDefaultAllocator<32> >* OutLifetimeProps) { NativeCall<void, TArray<FLifetimeProperty, TSizedDefaultAllocator<32> >*>(this, "ASkeletalMeshActor.GetLifetimeReplicatedProps(TArray<FLifetimeProperty,TSizedDefaultAllocator<32>>&)", OutLifetimeProps); }
	FString* GetDetailedInfoInternal(FString* result) { return NativeCall<FString*, FString*>(this, "ASkeletalMeshActor.GetDetailedInfoInternal()", result); }
	void PostInitializeComponents() { NativeCall<void>(this, "ASkeletalMeshActor.PostInitializeComponents()"); }
	void OnRep_ReplicatedMesh() { NativeCall<void>(this, "ASkeletalMeshActor.OnRep_ReplicatedMesh()"); }
	void OnRep_ReplicatedPhysAsset() { NativeCall<void>(this, "ASkeletalMeshActor.OnRep_ReplicatedPhysAsset()"); }
	void OnRep_ReplicatedMaterial0() { NativeCall<void>(this, "ASkeletalMeshActor.OnRep_ReplicatedMaterial0()"); }
	void OnRep_ReplicatedMaterial1() { NativeCall<void>(this, "ASkeletalMeshActor.OnRep_ReplicatedMaterial1()"); }
	//void PreviewBeginAnimControl(UInterpGroup* InInterpGroup) { NativeCall<void, UInterpGroup*>(this, "ASkeletalMeshActor.PreviewBeginAnimControl(UInterpGroup*)", InInterpGroup); }
//     bool CanPlayAnimation(UAnimSequenceBase* AnimAssetBase) { return NativeCall<bool, UAnimSequenceBase*>(this, "ASkeletalMeshActor.CanPlayAnimation(UAnimSequenceBase*)", AnimAssetBase); }
// FUNCTION MISSING: ASkeletalMeshActor.CanPlayAnimation(UAnimSequenceBase*)
	//void PreviewFinishAnimControl(UInterpGroup* InInterpGroup) { NativeCall<void, UInterpGroup*>(this, "ASkeletalMeshActor.PreviewFinishAnimControl(UInterpGroup*)", InInterpGroup); }
	void PreviewSetAnimPosition(FName SlotName, int ChannelIndex, UAnimSequence* InAnimSequence, float InPosition, bool bLooping, bool bFireNotifies, float DeltaTime) { NativeCall<void, FName, int, UAnimSequence*, float, bool, bool, float>(this, "ASkeletalMeshActor.PreviewSetAnimPosition(FName,int,UAnimSequence*,float,bool,bool,float)", SlotName, ChannelIndex, InAnimSequence, InPosition, bLooping, bFireNotifies, DeltaTime); }
	void SetAnimPosition(FName SlotName, int ChannelIndex, UAnimSequence* InAnimSequence, float InPosition, bool bFireNotifies, bool bLooping) { NativeCall<void, FName, int, UAnimSequence*, float, bool, bool>(this, "ASkeletalMeshActor.SetAnimPosition(FName,int,UAnimSequence*,float,bool,bool)", SlotName, ChannelIndex, InAnimSequence, InPosition, bFireNotifies, bLooping); }
	//void FinishAnimControl(UInterpGroup* InInterpGroup) { NativeCall<void, UInterpGroup*>(this, "ASkeletalMeshActor.FinishAnimControl(UInterpGroup*)", InInterpGroup); }

	static UClass* StaticClass() { return AsaApi::ResolveClass("ASkeletalMeshActor"); }

	void BeginAnimControl(UInterpGroup* InInterpGroup) { NativeCall<void, UInterpGroup*>(this, "ASkeletalMeshActor.BeginAnimControl(UInterpGroup*)", InInterpGroup); }
	UObject* _getUObject() { return NativeCall<UObject*>(this, "ASkeletalMeshActor._getUObject()"); }
	void PreviewFinishAnimControl(UInterpGroup* InInterpGroup) { NativeCall<void, UInterpGroup*>(this, "ASkeletalMeshActor.PreviewFinishAnimControl(UInterpGroup*)", InInterpGroup); }
	void PreviewBeginAnimControl(UInterpGroup* InInterpGroup) { NativeCall<void, UInterpGroup*>(this, "ASkeletalMeshActor.PreviewBeginAnimControl(UInterpGroup*)", InInterpGroup); }
	void FinishAnimControl(UInterpGroup* InInterpGroup) { NativeCall<void, UInterpGroup*>(this, "ASkeletalMeshActor.FinishAnimControl(UInterpGroup*)", InInterpGroup); }
};