#pragma once
#include "BulkForward.h"


struct APrimalStructureUnderwaterBase : APrimalStructureItemContainer
{
    // Fields

    TArray<FPorthole, TSizedDefaultAllocator<32> >& PortholesField() { return *GetNativePointerField<TArray<FPorthole, TSizedDefaultAllocator<32> >*>(this, "APrimalStructureUnderwaterBase.Portholes"); }
    TArray<int, TSizedDefaultAllocator<32> >& PortholeStateField() { return *GetNativePointerField<TArray<int, TSizedDefaultAllocator<32> >*>(this, "APrimalStructureUnderwaterBase.PortholeState"); }
    TArray<int, TSizedDefaultAllocator<32> >& PortholeSaveStateField() { return *GetNativePointerField<TArray<int, TSizedDefaultAllocator<32> >*>(this, "APrimalStructureUnderwaterBase.PortholeSaveState"); }
    TArray<APrimalStructureUnderwaterBase*, TSizedDefaultAllocator<32> >& PortholeLinksField() { return *GetNativePointerField<TArray<APrimalStructureUnderwaterBase*, TSizedDefaultAllocator<32> >*>(this, "APrimalStructureUnderwaterBase.PortholeLinks"); }
    TSubclassOf<APrimalEmitterSpawnable>& FloodedEmitterField() { return *GetNativePointerField<TSubclassOf<APrimalEmitterSpawnable>*>(this, "APrimalStructureUnderwaterBase.FloodedEmitter"); }
    TSubclassOf<APrimalEmitterSpawnable>& UnfloodedEmitterField() { return *GetNativePointerField<TSubclassOf<APrimalEmitterSpawnable>*>(this, "APrimalStructureUnderwaterBase.UnfloodedEmitter"); }
    USoundBase*& OpenPortholeSoundField() { return *GetNativePointerField<USoundBase**>(this, "APrimalStructureUnderwaterBase.OpenPortholeSound"); }
    USoundBase*& ClosePortholeSoundField() { return *GetNativePointerField<USoundBase**>(this, "APrimalStructureUnderwaterBase.ClosePortholeSound"); }
    USoundBase*& FreezePortholeSoundField() { return *GetNativePointerField<USoundBase**>(this, "APrimalStructureUnderwaterBase.FreezePortholeSound"); }
    USoundBase*& UnfreezePortholeSoundField() { return *GetNativePointerField<USoundBase**>(this, "APrimalStructureUnderwaterBase.UnfreezePortholeSound"); }
    TArray<unsigned int, TSizedDefaultAllocator<32> >& CurrentPinCodesField() { return *GetNativePointerField<TArray<unsigned int, TSizedDefaultAllocator<32> >*>(this, "APrimalStructureUnderwaterBase.CurrentPinCodes"); }
    TArray<FString, TSizedDefaultAllocator<32> >& PortholeNameOverridesField() { return *GetNativePointerField<TArray<FString, TSizedDefaultAllocator<32> >*>(this, "APrimalStructureUnderwaterBase.PortholeNameOverrides"); }
    TArray<FColor, TSizedDefaultAllocator<32> >& PortholeNameIconColorOverridesField() { return *GetNativePointerField<TArray<FColor, TSizedDefaultAllocator<32> >*>(this, "APrimalStructureUnderwaterBase.PortholeNameIconColorOverrides"); }
    TMap<APlayerController*, UPrimitiveComponent*, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<APlayerController*, UPrimitiveComponent*, 0> >& ClientsViewingPortholesField() { return *GetNativePointerField<TMap<APlayerController*, UPrimitiveComponent*, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<APlayerController*, UPrimitiveComponent*, 0> >*>(this, "APrimalStructureUnderwaterBase.ClientsViewingPortholes"); }
    UBoxComponent*& InteriorBoxField() { return *GetNativePointerField<UBoxComponent**>(this, "APrimalStructureUnderwaterBase.InteriorBox"); }
    long double& LastTogglePortholeStateTimeField() { return *GetNativePointerField<long double*>(this, "APrimalStructureUnderwaterBase.LastTogglePortholeStateTime"); }
    TObjectPtr<UTexture2D>& DrainCompartmentIconField() { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "APrimalStructureUnderwaterBase.DrainCompartmentIcon"); }
    TObjectPtr<UTexture2D>& FloodCompartmentIconField() { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "APrimalStructureUnderwaterBase.FloodCompartmentIcon"); }
    TObjectPtr<UTexture2D>& DrainAllConnectedIconField() { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "APrimalStructureUnderwaterBase.DrainAllConnectedIcon"); }
    TObjectPtr<UTexture2D>& FloodAllConnectedIconField() { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "APrimalStructureUnderwaterBase.FloodAllConnectedIcon"); }
    TObjectPtr<UTexture2D>& OpenIconField() { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "APrimalStructureUnderwaterBase.OpenIcon"); }
    TObjectPtr<UTexture2D>& OpenWindowIconField() { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "APrimalStructureUnderwaterBase.OpenWindowIcon"); }
    TObjectPtr<UTexture2D>& CloseIconField() { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "APrimalStructureUnderwaterBase.CloseIcon"); }
    TObjectPtr<UTexture2D>& ShowFrameIconField() { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "APrimalStructureUnderwaterBase.ShowFrameIcon"); }
    TObjectPtr<UTexture2D>& HideFrameIconField() { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "APrimalStructureUnderwaterBase.HideFrameIcon"); }
    TObjectPtr<UTexture2D>& ShowConnectedFramesIconField() { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "APrimalStructureUnderwaterBase.ShowConnectedFramesIcon"); }
    TObjectPtr<UTexture2D>& HideConnectedFramesIconField() { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "APrimalStructureUnderwaterBase.HideConnectedFramesIcon"); }

    // Bitfields

    BitFieldValue<bool, unsigned __int32> bIsFlooded() { return { this, "APrimalStructureUnderwaterBase.bIsFlooded" }; }
    BitFieldValue<bool, unsigned __int32> bIsFrameHidden() { return { this, "APrimalStructureUnderwaterBase.bIsFrameHidden" }; }

    // Functions

    static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("APrimalStructureUnderwaterBase"); }
    void SetPortholeState(int index, int NewState) { NativeCall<void, int, int>(this, "APrimalStructureUnderwaterBase.SetPortholeState(int,int)", index, NewState); }
    // Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// static void StaticRegisterNativesAPrimalStructureUnderwaterBase();
    // Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// void ValidateGeneratedRepEnums(const TArray<FRepRecord, TSizedDefaultAllocator<32> >* ClassReps);
    void GetLifetimeReplicatedProps(TArray<FLifetimeProperty, TSizedDefaultAllocator<32> >* OutLifetimeProps) { NativeCall<void, TArray<FLifetimeProperty, TSizedDefaultAllocator<32> >*>(this, "APrimalStructureUnderwaterBase.GetLifetimeReplicatedProps(TArray<FLifetimeProperty,TSizedDefaultAllocator<32>>&)", OutLifetimeProps); }
    void OnRep_IsFlooded() { NativeCall<void>(this, "APrimalStructureUnderwaterBase.OnRep_IsFlooded()"); }
    void OnRep_IsFrameHidden() { NativeCall<void>(this, "APrimalStructureUnderwaterBase.OnRep_IsFrameHidden()"); }
//     bool IsInsideBase(const UE::Math::TVector<double>* AtPoint) { return NativeCall<bool, const UE::Math::TVector<double>*>(this, "APrimalStructureUnderwaterBase.IsInsideBase(UE::Math::TVector<double>&)", AtPoint); }
// FUNCTION MISSING: APrimalStructureUnderwaterBase.IsInsideBase(UE::Math::TVector<double>&)
    void AddedLinkedStructure(APrimalStructure* Structure) { NativeCall<void, APrimalStructure*>(this, "APrimalStructureUnderwaterBase.AddedLinkedStructure(APrimalStructure*)", Structure); }
    void RemovedLinkedStructure(APrimalStructure* Structure, APlayerController* Controller) { NativeCall<void, APrimalStructure*, APlayerController*>(this, "APrimalStructureUnderwaterBase.RemovedLinkedStructure(APrimalStructure*,APlayerController*)", Structure, Controller); }
    void PreInitializeComponents() { NativeCall<void>(this, "APrimalStructureUnderwaterBase.PreInitializeComponents()"); }
    void BeginPlay() { NativeCall<void>(this, "APrimalStructureUnderwaterBase.BeginPlay()"); }
    void GetMultiUseEntries(APlayerController* ForPC, TArray<FMultiUseEntry, TSizedDefaultAllocator<32> >* MultiUseEntries, int hitBodyIndex) { NativeCall<void, APlayerController*, TArray<FMultiUseEntry, TSizedDefaultAllocator<32> >*, int>(this, "APrimalStructureUnderwaterBase.GetMultiUseEntries(APlayerController*,TArray<FMultiUseEntry,TSizedDefaultAllocator<32>>&,int)", ForPC, MultiUseEntries, hitBodyIndex); }
    bool TryMultiUse(APlayerController* ForPC, int UseIndex, int hitBodyIndex) { return NativeCall<bool, APlayerController*, int, int>(this, "APrimalStructureUnderwaterBase.TryMultiUse(APlayerController*,int,int)", ForPC, UseIndex, hitBodyIndex); }
    void ClientMultiUse(APlayerController* ForPC, int UseIndex, int hitBodyIndex) { NativeCall<void, APlayerController*, int, int>(this, "APrimalStructureUnderwaterBase.ClientMultiUse(APlayerController*,int,int)", ForPC, UseIndex, hitBodyIndex); }
    void SetCurrentViewingPorthole(APlayerController* ForPC) { NativeCall<void, APlayerController*>(this, "APrimalStructureUnderwaterBase.SetCurrentViewingPorthole(APlayerController*)", ForPC); }
    void SetStructureCollisionChannels() { NativeCall<void>(this, "APrimalStructureUnderwaterBase.SetStructureCollisionChannels(bool)"); }
    void PopulatePortholes() { NativeCall<void>(this, "APrimalStructureUnderwaterBase.PopulatePortholes()"); }
    void SetPortholeState_Implementation(int index, int NewState) { NativeCall<void, int, int>(this, "APrimalStructureUnderwaterBase.SetPortholeState_Implementation(int,int)", index, NewState); }
    void DoSetPortholeState(int index, int NewState) { NativeCall<void, int, int>(this, "APrimalStructureUnderwaterBase.DoSetPortholeState(int,int)", index, NewState); }
    void RefreshLinkedPorthole(const FPorthole* porthole) { NativeCall<void, const FPorthole*>(this, "APrimalStructureUnderwaterBase.RefreshLinkedPorthole(FPorthole&)", porthole); }
    void RefreshPortholeLinks() { NativeCall<void>(this, "APrimalStructureUnderwaterBase.RefreshPortholeLinks()"); }
    APrimalStructureUnderwaterBase* GetLinkedBaseByPortholeIndex(int PortholeIndex, int* LinkedPortholeIndex) { return NativeCall<APrimalStructureUnderwaterBase*, int, int*>(this, "APrimalStructureUnderwaterBase.GetLinkedBaseByPortholeIndex(int,int&)", PortholeIndex, LinkedPortholeIndex); }
    bool CanOpenPorthole(const FPorthole* porthole) { return NativeCall<bool, const FPorthole*>(this, "APrimalStructureUnderwaterBase.CanOpenPorthole(FPorthole&)", porthole); }
    bool IsPortholeObstructed(const FPorthole* porthole, bool CheckForPawns) { return NativeCall<bool, const FPorthole*, bool>(this, "APrimalStructureUnderwaterBase.IsPortholeObstructed(FPorthole&,bool)", porthole, CheckForPawns); }
    bool AreBasesOpenToEachOther(APrimalStructureUnderwaterBase* OtherBase, int MyPortholeIndex, int OtherPortholeIndex) { return NativeCall<bool, APrimalStructureUnderwaterBase*, int, int>(this, "APrimalStructureUnderwaterBase.AreBasesOpenToEachOther(APrimalStructureUnderwaterBase*,int,int)", OtherBase, MyPortholeIndex, OtherPortholeIndex); }
    void UpdateFloodState(APlayerController* PC, bool DoFlood, bool bDontIncrementTagger) { NativeCall<void, APlayerController*, bool, bool>(this, "APrimalStructureUnderwaterBase.UpdateFloodState(APlayerController*,bool,bool)", PC, DoFlood, bDontIncrementTagger); }
    void UpdateFrameState(APlayerController* PC, bool HideFrame, bool bDontIncrementTagger) { NativeCall<void, APlayerController*, bool, bool>(this, "APrimalStructureUnderwaterBase.UpdateFrameState(APlayerController*,bool,bool)", PC, HideFrame, bDontIncrementTagger); }
    void UpdateLockState(APlayerController* PC, bool DoLock, bool bDontIncrementTagger) { NativeCall<void, APlayerController*, bool, bool>(this, "APrimalStructureUnderwaterBase.UpdateLockState(APlayerController*,bool,bool)", PC, DoLock, bDontIncrementTagger); }
    bool ApplyPinCode(AShooterPlayerController* ForPC, int appledPinCode, bool bIsSetting, int TheCustomIndex) { return NativeCall<bool, AShooterPlayerController*, int, bool, int>(this, "APrimalStructureUnderwaterBase.ApplyPinCode(AShooterPlayerController*,int,bool,int)", ForPC, appledPinCode, bIsSetting, TheCustomIndex); }

	static UClass* StaticClass() { return AsaApi::ResolveClass("APrimalStructureUnderwaterBase"); }

	BitFieldValue<bool, unsigned char> bPreventAddingPortholeMUEntries() { return { this, "APrimalStructureUnderwaterBase.bPreventAddingPortholeMUEntries"}; }
	bool IsInsideBase_Implementation(const UE::Math::TVector<double>& AtPoint) { return NativeCall<bool, const UE::Math::TVector<double>&>(this, "APrimalStructureUnderwaterBase.IsInsideBase_Implementation(UE::Math::TVector<double>&)", AtPoint); }
	bool IsUnderwaterBase_Implementation() { return NativeCall<bool>(this, "APrimalStructureUnderwaterBase.IsUnderwaterBase_Implementation()"); }
	float GetInstanceWaterPlacementMinimumWaterHeight() { return NativeCall<float>(this, "APrimalStructureUnderwaterBase.GetInstanceWaterPlacementMinimumWaterHeight()"); }
	void ChangedCompartmentFloodState() { NativeCall<void>(this, "APrimalStructureUnderwaterBase.ChangedCompartmentFloodState()"); }
	void BPSetPortholeState(int PortholeIndex, int NewState) { NativeCall<void, int, int>(this, "APrimalStructureUnderwaterBase.BPSetPortholeState(int,int)", PortholeIndex, NewState); }
};