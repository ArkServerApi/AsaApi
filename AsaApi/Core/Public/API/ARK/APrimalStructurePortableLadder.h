#pragma once
#include "BulkForward.h"


struct APrimalStructurePortableLadder : APrimalStructureLadder
{
    // Fields

    float& MaximumHeightAllowedForLadderField() { return *GetNativePointerField<float*>(this, "APrimalStructurePortableLadder.MaximumHeightAllowedForLadder"); }
    USkeletalMeshComponent*& SkeletalMeshThatIsInAnimationField() { return *GetNativePointerField<USkeletalMeshComponent**>(this, "APrimalStructurePortableLadder.SkeletalMeshThatIsInAnimation"); }
    //TSubclassOf<UAnimInstance>& BottomAnimBlueprintField() { return *GetNativePointerField<TSubclassOf<UAnimInstance>*>(this, "APrimalStructurePortableLadder.BottomAnimBlueprint"); }
    //TSubclassOf<UAnimInstance>& MidAnimBlueprintField() { return *GetNativePointerField<TSubclassOf<UAnimInstance>*>(this, "APrimalStructurePortableLadder.MidAnimBlueprint"); }
    UAnimMontage*& MidRetractedAnimMontageBlueprintField() { return *GetNativePointerField<UAnimMontage**>(this, "APrimalStructurePortableLadder.MidRetractedAnimMontageBlueprint"); }
    UAnimMontage*& BottomRetractedAnimMontageBlueprintField() { return *GetNativePointerField<UAnimMontage**>(this, "APrimalStructurePortableLadder.BottomRetractedAnimMontageBlueprint"); }
    UAnimMontage*& MidAnimMontageBlueprintField() { return *GetNativePointerField<UAnimMontage**>(this, "APrimalStructurePortableLadder.MidAnimMontageBlueprint"); }
    UAnimMontage*& BottomAnimMontageBlueprintField() { return *GetNativePointerField<UAnimMontage**>(this, "APrimalStructurePortableLadder.BottomAnimMontageBlueprint"); }
    UAnimMontage*& MidAnimMontageExtendedBlueprintField() { return *GetNativePointerField<UAnimMontage**>(this, "APrimalStructurePortableLadder.MidAnimMontageExtendedBlueprint"); }
    UAnimMontage*& BottomAnimMontageExtendedBlueprintField() { return *GetNativePointerField<UAnimMontage**>(this, "APrimalStructurePortableLadder.BottomAnimMontageExtendedBlueprint"); }
    USkeletalMesh*& MidSkeletalMeshField() { return *GetNativePointerField<USkeletalMesh**>(this, "APrimalStructurePortableLadder.MidSkeletalMesh"); }
    USkeletalMesh*& MyBottomSkeletalMeshField() { return *GetNativePointerField<USkeletalMesh**>(this, "APrimalStructurePortableLadder.MyBottomSkeletalMesh"); }
    TArray<USkeletalMeshComponent*, TSizedDefaultAllocator<32> >& MidLadderSkeletalMeshsField() { return *GetNativePointerField<TArray<USkeletalMeshComponent*, TSizedDefaultAllocator<32> >*>(this, "APrimalStructurePortableLadder.MidLadderSkeletalMeshs"); }
    USkeletalMeshComponent*& BottomLadderSkeletalMeshField() { return *GetNativePointerField<USkeletalMeshComponent**>(this, "APrimalStructurePortableLadder.BottomLadderSkeletalMesh"); }
    TArray<USkeletalMeshComponent*, TSizedDefaultAllocator<32> >& SkeletalMeshsForAnimationField() { return *GetNativePointerField<TArray<USkeletalMeshComponent*, TSizedDefaultAllocator<32> >*>(this, "APrimalStructurePortableLadder.SkeletalMeshsForAnimation"); }
    FTimerHandle& AnimTimerHandleField() { return *GetNativePointerField<FTimerHandle*>(this, "APrimalStructurePortableLadder.AnimTimerHandle"); }
    UBoxComponent*& CollisionBoxComponentField() { return *GetNativePointerField<UBoxComponent**>(this, "APrimalStructurePortableLadder.CollisionBoxComponent"); }
    FTimerHandle& PlaySetupAnimationHandleField() { return *GetNativePointerField<FTimerHandle*>(this, "APrimalStructurePortableLadder.PlaySetupAnimationHandle"); }

    // Bitfields

    BitFieldValue<bool, unsigned __int32> bisDonePlacing() { return { this, "APrimalStructurePortableLadder.bisDonePlacing" }; }

    // Functions

    // Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// static UClass* GetPrivateStaticClass();
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("APrimalStructurePortableLadder"); }
    // Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// static void StaticRegisterNativesAPrimalStructurePortableLadder();
    // Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// void ValidateGeneratedRepEnums(const TArray<FRepRecord, TSizedDefaultAllocator<32> >* ClassReps);
    void PlacedStructureLocation() { NativeCall<void>(this, "APrimalStructurePortableLadder.PlacedStructureLocation()"); }
    void GetMultiUseEntries(APlayerController* ForPC, TArray<FMultiUseEntry, TSizedDefaultAllocator<32> >* MultiUseEntries, int hitBodyIndex) { NativeCall<void, APlayerController*, TArray<FMultiUseEntry, TSizedDefaultAllocator<32> >*, int>(this, "APrimalStructurePortableLadder.GetMultiUseEntries(APlayerController*,TArray<FMultiUseEntry,TSizedDefaultAllocator<32>>&,int)", ForPC, MultiUseEntries, hitBodyIndex); }
    bool TryMultiUse(APlayerController* ForPC, int UseIndex, int hitBodyIndex) { return NativeCall<bool, APlayerController*, int, int>(this, "APrimalStructurePortableLadder.TryMultiUse(APlayerController*,int,int)", ForPC, UseIndex, hitBodyIndex); }
    void SetLaddersRetracted(bool bRetract, TArray<APrimalStructureLadder*, TSizedDefaultAllocator<32> >* TestedLadders) { NativeCall<void, bool, TArray<APrimalStructureLadder*, TSizedDefaultAllocator<32> >*>(this, "APrimalStructurePortableLadder.SetLaddersRetracted(bool,TArray<APrimalStructureLadder*,TSizedDefaultAllocator<32>>&)", bRetract, TestedLadders); }
    void UpdateRetraction() { NativeCall<void>(this, "APrimalStructurePortableLadder.UpdateRetraction()"); }
    void BeginPlay() { NativeCall<void>(this, "APrimalStructurePortableLadder.BeginPlay()"); }
    void UpdateLadder() { NativeCall<void>(this, "APrimalStructurePortableLadder.UpdateLadder()"); }
    void GetLifetimeReplicatedProps(TArray<FLifetimeProperty, TSizedDefaultAllocator<32> >* OutLifetimeProps) { NativeCall<void, TArray<FLifetimeProperty, TSizedDefaultAllocator<32> >*>(this, "APrimalStructurePortableLadder.GetLifetimeReplicatedProps(TArray<FLifetimeProperty,TSizedDefaultAllocator<32>>&)", OutLifetimeProps); }
    void ModifyHudMultiUseLoc_Implementation(UE::Math::TVector2<double>* theVec, APlayerController* PC, int index) { NativeCall<void, UE::Math::TVector2<double>*, APlayerController*, int>(this, "APrimalStructurePortableLadder.ModifyHudMultiUseLoc_Implementation(UE::Math::TVector2<double>&,APlayerController*,int)", theVec, PC, index); }

	bool& bIsPlayingAnimationField() { return *GetNativePointerField<bool*>(this, "APrimalStructurePortableLadder.bIsPlayingAnimation"); }

	static UClass* StaticClass() { return AsaApi::ResolveClass("APrimalStructurePortableLadder"); }

	BitFieldValue<bool, unsigned __int32> bQuickRetractAnim() { return { this, "APrimalStructurePortableLadder.bQuickRetractAnim"}; }
	void BPSetLaddersRetracted(bool bRetract) { NativeCall<void, bool>(this, "APrimalStructurePortableLadder.BPSetLaddersRetracted(bool)", bRetract); }
	void BuildLadder() { NativeCall<void>(this, "APrimalStructurePortableLadder.BuildLadder()"); }
	void UpdateBoxCollisionForRetraction(bool bRetracted) { NativeCall<void, bool>(this, "APrimalStructurePortableLadder.UpdateBoxCollisionForRetraction(bool)", bRetracted); }
	void ClearSkeletalMeshes() { NativeCall<void>(this, "APrimalStructurePortableLadder.ClearSkeletalMeshes()"); }
	UE::Math::TVector<double>* GetNearestLadderPosition(UE::Math::TVector<double>* result, const UE::Math::TVector<double>& Position) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*, const UE::Math::TVector<double>&>(this, "APrimalStructurePortableLadder.GetNearestLadderPosition(UE::Math::TVector<double>&)", result, Position); }
	void PlaySetupAnimation() { NativeCall<void>(this, "APrimalStructurePortableLadder.PlaySetupAnimation()"); }
	void Unstasis() { NativeCall<void>(this, "APrimalStructurePortableLadder.Unstasis()"); }
};