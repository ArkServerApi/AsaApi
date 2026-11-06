#pragma once
#include "BulkForward.h"


struct APrimalStructureWaterPipe : APrimalStructure
{
    // Fields

    float& AutoDestroyPeriodWhenUnconnectedToNonPipeField() { return *GetNativePointerField<float*>(this, "APrimalStructureWaterPipe.AutoDestroyPeriodWhenUnconnectedToNonPipe"); }
    UMaterialInterface*& HasWaterMaterialField() { return *GetNativePointerField<UMaterialInterface**>(this, "APrimalStructureWaterPipe.HasWaterMaterial"); }
    UMaterialInterface*& NoWaterMaterialField() { return *GetNativePointerField<UMaterialInterface**>(this, "APrimalStructureWaterPipe.NoWaterMaterial"); }
    int& WaterMaterialIndexField() { return *GetNativePointerField<int*>(this, "APrimalStructureWaterPipe.WaterMaterialIndex"); }

    // Bitfields

    BitFieldValue<bool, unsigned __int32> bAlwaysHasWater() { return { this, "APrimalStructureWaterPipe.bAlwaysHasWater" }; }
    BitFieldValue<bool, unsigned __int32> bHasWater() { return { this, "APrimalStructureWaterPipe.bHasWater" }; }
    BitFieldValue<bool, unsigned __int32> bIsMeshHidden() { return { this, "APrimalStructureWaterPipe.bIsMeshHidden" }; }
    BitFieldValue<bool, unsigned __int32> bIsWaterPipe() { return { this, "APrimalStructureWaterPipe.bIsWaterPipe" }; }
    BitFieldValue<bool, unsigned __int32> bConnectedToNonPipe() { return { this, "APrimalStructureWaterPipe.bConnectedToNonPipe" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOnRefreshPipeMaterials() { return { this, "APrimalStructureWaterPipe.bUseBPOnRefreshPipeMaterials" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOnWaterStateChange() { return { this, "APrimalStructureWaterPipe.bUseBPOnWaterStateChange" }; }
    BitFieldValue<bool, unsigned __int32> bCanHideMesh() { return { this, "APrimalStructureWaterPipe.bCanHideMesh" }; }
    BitFieldValue<bool, unsigned __int32> bHasRefreshedConnectedToNonPipe() { return { this, "APrimalStructureWaterPipe.bHasRefreshedConnectedToNonPipe" }; }

    // Functions

    // Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// static UClass* StaticClass();
	static UClass* StaticClass() { return AsaApi::ResolveClass("APrimalStructureWaterPipe"); }
    // Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// static void StaticRegisterNativesAPrimalStructureWaterPipe();
    // Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// void ValidateGeneratedRepEnums(const TArray<FRepRecord, TSizedDefaultAllocator<32> >* ClassReps);
    void GetLifetimeReplicatedProps(TArray<FLifetimeProperty, TSizedDefaultAllocator<32> >* OutLifetimeProps) { NativeCall<void, TArray<FLifetimeProperty, TSizedDefaultAllocator<32> >*>(this, "APrimalStructureWaterPipe.GetLifetimeReplicatedProps(TArray<FLifetimeProperty,TSizedDefaultAllocator<32>>&)", OutLifetimeProps); }
    void OnRep_IsMeshHidden() { NativeCall<void>(this, "APrimalStructureWaterPipe.OnRep_IsMeshHidden()"); }
    void GetMultiUseEntries(APlayerController* ForPC, TArray<FMultiUseEntry, TSizedDefaultAllocator<32> >* MultiUseEntries, int hitBodyIndex) { NativeCall<void, APlayerController*, TArray<FMultiUseEntry, TSizedDefaultAllocator<32> >*, int>(this, "APrimalStructureWaterPipe.GetMultiUseEntries(APlayerController*,TArray<FMultiUseEntry,TSizedDefaultAllocator<32>>&,int)", ForPC, MultiUseEntries, hitBodyIndex); }
    bool TryMultiUse(APlayerController* ForPC, int UseIndex, int hitBodyIndex) { return NativeCall<bool, APlayerController*, int, int>(this, "APrimalStructureWaterPipe.TryMultiUse(APlayerController*,int,int)", ForPC, UseIndex, hitBodyIndex); }
    void SetHasWater(bool bNewHasWater) { NativeCall<void, bool>(this, "APrimalStructureWaterPipe.SetHasWater(bool)", bNewHasWater); }
    void FinalLoadedFromSaveGame() { NativeCall<void>(this, "APrimalStructureWaterPipe.FinalLoadedFromSaveGame()"); }
    void RemovedLinkedStructure(APrimalStructure* Structure, APlayerController* Controller) { NativeCall<void, APrimalStructure*, APlayerController*>(this, "APrimalStructureWaterPipe.RemovedLinkedStructure(APrimalStructure*,APlayerController*)", Structure, Controller); }
    void AddedLinkedStructure(APrimalStructure* Structure) { NativeCall<void, APrimalStructure*>(this, "APrimalStructureWaterPipe.AddedLinkedStructure(APrimalStructure*)", Structure); }
    void PreLinkedStructure() { NativeCall<void>(this, "APrimalStructureWaterPipe.PreLinkedStructure()"); }
    void RefreshLinkedToNonPipeState() { NativeCall<void>(this, "APrimalStructureWaterPipe.RefreshLinkedToNonPipeState()"); }
    bool Internal_CheckForNonPipeLink() { return NativeCall<bool>(this, "APrimalStructureWaterPipe.Internal_CheckForNonPipeLink()"); }
    void Internal_PushNonPipeLink(bool bHasLinkToNonPipe) { NativeCall<void, bool>(this, "APrimalStructureWaterPipe.Internal_PushNonPipeLink(bool)", bHasLinkToNonPipe); }
    void Unstasis() { NativeCall<void>(this, "APrimalStructureWaterPipe.Unstasis()"); }
    void RefreshWaterState() { NativeCall<void>(this, "APrimalStructureWaterPipe.RefreshWaterState()"); }
    void ParseGraphForWater(TArray<APrimalStructure*, TSizedDefaultAllocator<32> >* InContainerOverrideWaterSpots, TArray<APrimalStructure*, TSizedDefaultAllocator<32> >* InAlwaysWaterSpots, APrimalStructureWaterPipe* OriginalWaterPipe) { NativeCall<void, TArray<APrimalStructure*, TSizedDefaultAllocator<32> >*, TArray<APrimalStructure*, TSizedDefaultAllocator<32> >*, APrimalStructureWaterPipe*>(this, "APrimalStructureWaterPipe.ParseGraphForWater(TArray<APrimalStructure*,TSizedDefaultAllocator<32>>&,TArray<APrimalStructure*,TSizedDefaultAllocator<32>>&,APrimalStructureWaterPipe*)", InContainerOverrideWaterSpots, InAlwaysWaterSpots, OriginalWaterPipe); }
    void PushWaterState(bool bHasInContainerOverrideSpots, bool bHasAlwaysWaterSpots) { NativeCall<void, bool, bool>(this, "APrimalStructureWaterPipe.PushWaterState(bool,bool)", bHasInContainerOverrideSpots, bHasAlwaysWaterSpots); }
    bool CheckForWater(TSet<APrimalStructure*, DefaultKeyFuncs<APrimalStructure*, 0>, FDefaultSetAllocator>* TestedStructures, bool bAllowWateredOverride, APrimalStructureWaterPipe* OriginalWaterPipe) { return NativeCall<bool, TSet<APrimalStructure*, DefaultKeyFuncs<APrimalStructure*, 0>, FDefaultSetAllocator>*, bool, APrimalStructureWaterPipe*>(this, "APrimalStructureWaterPipe.CheckForWater(TSet<APrimalStructure*,DefaultKeyFuncs<APrimalStructure*,0>,FDefaultSetAllocator>&,bool,APrimalStructureWaterPipe*)", TestedStructures, bAllowWateredOverride, OriginalWaterPipe); }
    void PlayDying(float KillingDamage, const FDamageEvent* DamageEvent, APawn* InstigatingPawn, AActor* DamageCauser) { NativeCall<void, float, const FDamageEvent*, APawn*, AActor*>(this, "APrimalStructureWaterPipe.PlayDying(float,FDamageEvent&,APawn*,AActor*)", KillingDamage, DamageEvent, InstigatingPawn, DamageCauser); }
    void PostInitializeComponents() { NativeCall<void>(this, "APrimalStructureWaterPipe.PostInitializeComponents()"); }
    void BeginPlay() { NativeCall<void>(this, "APrimalStructureWaterPipe.BeginPlay()"); }
    void SubtractWaterFromConnections_Internal(float Amount, float* AmountRemoved, TArray<APrimalStructure*, TSizedDefaultAllocator<32> >* TestedStructures, bool bAllowNetworking) { NativeCall<void, float, float*, TArray<APrimalStructure*, TSizedDefaultAllocator<32> >*, bool>(this, "APrimalStructureWaterPipe.SubtractWaterFromConnections_Internal(float,float&,TArray<APrimalStructure*,TSizedDefaultAllocator<32>>&,bool)", Amount, AmountRemoved, TestedStructures, bAllowNetworking); }
    void GetAllLinkedPipes(TArray<APrimalStructureWaterPipe*, TSizedDefaultAllocator<32> >* OutLinkedPipes) { NativeCall<void, TArray<APrimalStructureWaterPipe*, TSizedDefaultAllocator<32> >*>(this, "APrimalStructureWaterPipe.GetAllLinkedPipes(TArray<APrimalStructureWaterPipe*,TSizedDefaultAllocator<32>>&)", OutLinkedPipes); }

	void RefreshHasSourceMaterials() { NativeCall<void>(this, "APrimalStructureWaterPipe.RefreshHasSourceMaterials()"); }
	void SubtractWaterFromConnections(float Amount, float& AmountRemoved, TArray<APrimalStructure*, TSizedDefaultAllocator<32> >& TestedStructures, bool bAllowNetworking) { NativeCall<void, float, float&, TArray<APrimalStructure*, TSizedDefaultAllocator<32> >&, bool>(this, "APrimalStructureWaterPipe.SubtractWaterFromConnections(float,float&,TArray<APrimalStructure*,TSizedDefaultAllocator<32>>&,bool)", Amount, AmountRemoved, TestedStructures, bAllowNetworking); }
	void BPOnWaterStateChange(bool bPipeHasWaterOrPower) { NativeCall<void, bool>(this, "APrimalStructureWaterPipe.BPOnWaterStateChange(bool)", bPipeHasWaterOrPower); }
	void OnRep_HasWater(bool bPreviousHasWater) { NativeCall<void, bool>(this, "APrimalStructureWaterPipe.OnRep_HasWater(bool)", bPreviousHasWater); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("APrimalStructureWaterPipe"); }
};