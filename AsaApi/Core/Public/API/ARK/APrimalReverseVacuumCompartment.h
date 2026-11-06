#pragma once
#include "BulkForward.h"
#include "GameplayForward.h"
#include "APrimalStructureItemContainer.h"

struct APrimalReverseVacuumCompartment : APrimalStructureItemContainer
{
public:
	APrimalReverseVacuumCompartment() = delete;
	~APrimalReverseVacuumCompartment() = delete;
	APrimalReverseVacuumCompartment(const APrimalReverseVacuumCompartment&) = delete;
	APrimalReverseVacuumCompartment& operator=(const APrimalReverseVacuumCompartment&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("APrimalReverseVacuumCompartment"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("APrimalReverseVacuumCompartment"); }

	int& MaximumConnectedCubesField() { return *GetNativePointerField<int*>(this, "APrimalReverseVacuumCompartment.MaximumConnectedCubes"); }
	int& MaximumConnectedMergedCubesField() { return *GetNativePointerField<int*>(this, "APrimalReverseVacuumCompartment.MaximumConnectedMergedCubes"); }
	float& WaterFrictionField() { return *GetNativePointerField<float*>(this, "APrimalReverseVacuumCompartment.WaterFriction"); }
	bool& bIsActivatedField() { return *GetNativePointerField<bool*>(this, "APrimalReverseVacuumCompartment.bIsActivated"); }
	float& TopWaterPlaneZOffsetField() { return *GetNativePointerField<float*>(this, "APrimalReverseVacuumCompartment.TopWaterPlaneZOffset"); }
	double& DeactivationAfterPowerOffStartTimeStampField() { return *GetNativePointerField<double*>(this, "APrimalReverseVacuumCompartment.DeactivationAfterPowerOffStartTimeStamp"); }
	double& TimeUntilDeactivationAfterPowerOffField() { return *GetNativePointerField<double*>(this, "APrimalReverseVacuumCompartment.TimeUntilDeactivationAfterPowerOff"); }
	double& LastTogglePortholeStateTimeField() { return *GetNativePointerField<double*>(this, "APrimalReverseVacuumCompartment.LastTogglePortholeStateTime"); }
	float& CachedWaterSurfaceZField() { return *GetNativePointerField<float*>(this, "APrimalReverseVacuumCompartment.CachedWaterSurfaceZ"); }

	void SetCurrentViewingPorthole(APlayerController* ForPC) { NativeCall<void, APlayerController*>(this, "APrimalReverseVacuumCompartment.SetCurrentViewingPorthole(APlayerController*)", ForPC); }
	void ClearWaterLines() { NativeCall<void>(this, "APrimalReverseVacuumCompartment.ClearWaterLines()"); }
	void DeActivateAfterPowerOffTimerExpired() { NativeCall<void>(this, "APrimalReverseVacuumCompartment.DeActivateAfterPowerOffTimerExpired()"); }
	void OnRep_IsFlooded() { NativeCall<void>(this, "APrimalReverseVacuumCompartment.OnRep_IsFlooded()"); }
	void DoSetPortholeState(int index, int NewState) { NativeCall<void, int, int>(this, "APrimalReverseVacuumCompartment.DoSetPortholeState(int,int)", index, NewState); }
	bool IsReverseVacuumCompartment_Implementation() { return NativeCall<bool>(this, "APrimalReverseVacuumCompartment.IsReverseVacuumCompartment_Implementation()"); }
	void RefreshPortholeLinks() { NativeCall<void>(this, "APrimalReverseVacuumCompartment.RefreshPortholeLinks()"); }
	void RefreshCollisionCompProfile(int index) { NativeCall<void, int>(this, "APrimalReverseVacuumCompartment.RefreshCollisionCompProfile(int)", index); }
	bool AreBasesOpenToEachOther(APrimalReverseVacuumCompartment* OtherBase, int MyPortholeIndex, int OtherPortholeIndex) { return NativeCall<bool, APrimalReverseVacuumCompartment*, int, int>(this, "APrimalReverseVacuumCompartment.AreBasesOpenToEachOther(APrimalReverseVacuumCompartment*,int,int)", OtherBase, MyPortholeIndex, OtherPortholeIndex); }
	void PopulatePortholes() { NativeCall<void>(this, "APrimalReverseVacuumCompartment.PopulatePortholes()"); }
	void OnRep_AreInteriorWallsHidden() { NativeCall<void>(this, "APrimalReverseVacuumCompartment.OnRep_AreInteriorWallsHidden()"); }
	void NetSetWaterVolumesVisibility(APlayerController* PC, bool bVisible) { NativeCall<void, APlayerController*, bool>(this, "APrimalReverseVacuumCompartment.NetSetWaterVolumesVisibility(APlayerController*,bool)", PC, bVisible); }
	void UpdateLockState(APlayerController* PC, bool DoLock, bool bDontIncrementTagger) { NativeCall<void, APlayerController*, bool, bool>(this, "APrimalReverseVacuumCompartment.UpdateLockState(APlayerController*,bool,bool)", PC, DoLock, bDontIncrementTagger); }
	bool TryMultiUse(APlayerController* ForPC, int UseIndex, int hitBodyIndex) { return NativeCall<bool, APlayerController*, int, int>(this, "APrimalReverseVacuumCompartment.TryMultiUse(APlayerController*,int,int)", ForPC, UseIndex, hitBodyIndex); }
	void DispatchWindCompSurfaceEvents(UPrimalWindSourceComponent* WindComp, float WaterSurfaceZ) { NativeCall<void, UPrimalWindSourceComponent*, float>(this, "APrimalReverseVacuumCompartment.DispatchWindCompSurfaceEvents(UPrimalWindSourceComponent*,float)", WindComp, WaterSurfaceZ); }
	void ResetPortholeMeshCollision(UPrimitiveComponent* InMeshComponent) { NativeCall<void, UPrimitiveComponent*>(this, "APrimalReverseVacuumCompartment.ResetPortholeMeshCollision(UPrimitiveComponent*)", InMeshComponent); }
	void RefreshPortholeByStructure(APrimalReverseVacuumCompartment* PortholeStructure) { NativeCall<void, APrimalReverseVacuumCompartment*>(this, "APrimalReverseVacuumCompartment.RefreshPortholeByStructure(APrimalReverseVacuumCompartment*)", PortholeStructure); }
	float GetInstanceWaterPlacementMinimumWaterHeight() { return NativeCall<float>(this, "APrimalReverseVacuumCompartment.GetInstanceWaterPlacementMinimumWaterHeight()"); }
	void SetPortholeState(int index, int NewState) { NativeCall<void, int, int>(this, "APrimalReverseVacuumCompartment.SetPortholeState(int,int)", index, NewState); }
	void ClientMultiUse(APlayerController* ForPC, int UseIndex, int hitBodyIndex) { NativeCall<void, APlayerController*, int, int>(this, "APrimalReverseVacuumCompartment.ClientMultiUse(APlayerController*,int,int)", ForPC, UseIndex, hitBodyIndex); }
	void PostBeginPlay() { NativeCall<void>(this, "APrimalReverseVacuumCompartment.PostBeginPlay()"); }
	void RemovedLinkedStructure(APrimalStructure* Structure, APlayerController* Controller) { NativeCall<void, APrimalStructure*, APlayerController*>(this, "APrimalReverseVacuumCompartment.RemovedLinkedStructure(APrimalStructure*,APlayerController*)", Structure, Controller); }
	bool IsAPortholeMesh(UPrimitiveComponent* InMeshComponent) { return NativeCall<bool, UPrimitiveComponent*>(this, "APrimalReverseVacuumCompartment.IsAPortholeMesh(UPrimitiveComponent*)", InMeshComponent); }
	void SetPortholeState_Implementation(int index, int NewState) { NativeCall<void, int, int>(this, "APrimalReverseVacuumCompartment.SetPortholeState_Implementation(int,int)", index, NewState); }
	void BPSetPortholeState(int PortholeIndex, int NewState) { NativeCall<void, int, int>(this, "APrimalReverseVacuumCompartment.BPSetPortholeState(int,int)", PortholeIndex, NewState); }
	void HandlePortholeStateChange(APlayerController* ForPC, int PortholeIndex, int NewState) { NativeCall<void, APlayerController*, int, int>(this, "APrimalReverseVacuumCompartment.HandlePortholeStateChange(APlayerController*,int,int)", ForPC, PortholeIndex, NewState); }
	void Destroyed() { NativeCall<void>(this, "APrimalReverseVacuumCompartment.Destroyed()"); }
	void AddedLinkedStructure(APrimalStructure* Structure) { NativeCall<void, APrimalStructure*>(this, "APrimalReverseVacuumCompartment.AddedLinkedStructure(APrimalStructure*)", Structure); }
	void NetSetWaterVolumesVisibility_Implementation(APlayerController* PC, bool bVisible) { NativeCall<void, APlayerController*, bool>(this, "APrimalReverseVacuumCompartment.NetSetWaterVolumesVisibility_Implementation(APlayerController*,bool)", PC, bVisible); }
	void ChangedCompartmentFloodState() { NativeCall<void>(this, "APrimalReverseVacuumCompartment.ChangedCompartmentFloodState()"); }
	void UpdateInteriorWallsState(APlayerController* PC, bool HideInteriorWalls, bool bDontIncrementTagger) { NativeCall<void, APlayerController*, bool, bool>(this, "APrimalReverseVacuumCompartment.UpdateInteriorWallsState(APlayerController*,bool,bool)", PC, HideInteriorWalls, bDontIncrementTagger); }
	void UpdateWaterLines() { NativeCall<void>(this, "APrimalReverseVacuumCompartment.UpdateWaterLines()"); }
	void UpdateFloodState(APlayerController* PC, bool DoFlood, bool bDontIncrementTagger) { NativeCall<void, APlayerController*, bool, bool>(this, "APrimalReverseVacuumCompartment.UpdateFloodState(APlayerController*,bool,bool)", PC, DoFlood, bDontIncrementTagger); }
	void SetStructureCollisionChannels(bool bUpdateOverlaps) { NativeCall<void, bool>(this, "APrimalReverseVacuumCompartment.SetStructureCollisionChannels(bool)", bUpdateOverlaps); }
	void BeginPlay() { NativeCall<void>(this, "APrimalReverseVacuumCompartment.BeginPlay()"); }
	void PreInitializeComponents() { NativeCall<void>(this, "APrimalReverseVacuumCompartment.PreInitializeComponents()"); }
	bool ApplyPinCode(AShooterPlayerController* ForPC, int appledPinCode, bool bIsSetting, int TheCustomIndex) { return NativeCall<bool, AShooterPlayerController*, int, bool, int>(this, "APrimalReverseVacuumCompartment.ApplyPinCode(AShooterPlayerController*,int,bool,int)", ForPC, appledPinCode, bIsSetting, TheCustomIndex); }
	void Unstasis() { NativeCall<void>(this, "APrimalReverseVacuumCompartment.Unstasis()"); }
	void SetWaterVolumesVisibility(APlayerController* PC, bool bVisible) { NativeCall<void, APlayerController*, bool>(this, "APrimalReverseVacuumCompartment.SetWaterVolumesVisibility(APlayerController*,bool)", PC, bVisible); }
	void Tick(float DeltaSeconds) { NativeCall<void, float>(this, "APrimalReverseVacuumCompartment.Tick(float)", DeltaSeconds); }
	void RefreshPowered(APrimalStructureItemContainer* InDirectPower) { NativeCall<void, APrimalStructureItemContainer*>(this, "APrimalReverseVacuumCompartment.RefreshPowered(APrimalStructureItemContainer*)", InDirectPower); }

	BitFieldValue<bool, unsigned char> bIsFlooded() { return { this, "APrimalReverseVacuumCompartment.bIsFlooded"}; }
	BitFieldValue<bool, unsigned char> bAreInteriorWallsHidden() { return { this, "APrimalReverseVacuumCompartment.bAreInteriorWallsHidden"}; }
	BitFieldValue<bool, unsigned char> bPreventAddingPortholeMUEntries() { return { this, "APrimalReverseVacuumCompartment.bPreventAddingPortholeMUEntries"}; }

	USoundBase*& LockSoundField() { return *GetNativePointerField<USoundBase**>(this, "APrimalReverseVacuumCompartment.LockSound"); }
	USoundBase*& UnLockSoundField() { return *GetNativePointerField<USoundBase**>(this, "APrimalReverseVacuumCompartment.UnLockSound"); }
	USoundBase*& OpenPortholeSoundField() { return *GetNativePointerField<USoundBase**>(this, "APrimalReverseVacuumCompartment.OpenPortholeSound"); }
	USoundBase*& ClosePortholeSoundField() { return *GetNativePointerField<USoundBase**>(this, "APrimalReverseVacuumCompartment.ClosePortholeSound"); }
	USoundBase*& FreezePortholeSoundField() { return *GetNativePointerField<USoundBase**>(this, "APrimalReverseVacuumCompartment.FreezePortholeSound"); }
	USoundBase*& UnfreezePortholeSoundField() { return *GetNativePointerField<USoundBase**>(this, "APrimalReverseVacuumCompartment.UnfreezePortholeSound"); }
	UBoxComponent*& WaterVolumeInteriorBoxField() { return *GetNativePointerField<UBoxComponent**>(this, "APrimalReverseVacuumCompartment.WaterVolumeInteriorBox"); }
	UStaticMeshComponent*& WaterVolumeField() { return *GetNativePointerField<UStaticMeshComponent**>(this, "APrimalReverseVacuumCompartment.WaterVolume"); }

	TArray<int, TSizedDefaultAllocator<32> >& PortholeStateField() { return *GetNativePointerField<TArray<int, TSizedDefaultAllocator<32> >*>(this, "APrimalReverseVacuumCompartment.PortholeState"); }
	TArray<int, TSizedDefaultAllocator<32> >& PortholeSaveStateField() { return *GetNativePointerField<TArray<int, TSizedDefaultAllocator<32> >*>(this, "APrimalReverseVacuumCompartment.PortholeSaveState"); }
	TArray<APrimalReverseVacuumCompartment*, TSizedDefaultAllocator<32> >& PortholeLinksField() { return *GetNativePointerField<TArray<APrimalReverseVacuumCompartment*, TSizedDefaultAllocator<32> >*>(this, "APrimalReverseVacuumCompartment.PortholeLinks"); }
	FTimerHandle& TimeUntilDeactivationAfterPowerOffTimerField() { return *GetNativePointerField<FTimerHandle*>(this, "APrimalReverseVacuumCompartment.TimeUntilDeactivationAfterPowerOffTimer"); }
	TArray<UPrimalWirelessExchangeData*, TSizedDefaultAllocator<32> >& WirelessExchangesField() { return *GetNativePointerField<TArray<UPrimalWirelessExchangeData*, TSizedDefaultAllocator<32> >*>(this, "APrimalReverseVacuumCompartment.WirelessExchanges"); }
	TArray<unsigned int, TSizedDefaultAllocator<32> >& CurrentPinCodesField() { return *GetNativePointerField<TArray<unsigned int, TSizedDefaultAllocator<32> >*>(this, "APrimalReverseVacuumCompartment.CurrentPinCodes"); }
	TArray<FString, TSizedDefaultAllocator<32> >& PortholeNameOverridesField() { return *GetNativePointerField<TArray<FString, TSizedDefaultAllocator<32> >*>(this, "APrimalReverseVacuumCompartment.PortholeNameOverrides"); }
	TArray<FColor, TSizedDefaultAllocator<32> >& PortholeNameIconColorOverridesField() { return *GetNativePointerField<TArray<FColor, TSizedDefaultAllocator<32> >*>(this, "APrimalReverseVacuumCompartment.PortholeNameIconColorOverrides"); }
	TArray<UActorComponent*, TSizedDefaultAllocator<32> >& WindCompsReusableBufferField() { return *GetNativePointerField<TArray<UActorComponent*, TSizedDefaultAllocator<32> >*>(this, "APrimalReverseVacuumCompartment.WindCompsReusableBuffer"); }
	bool CheckConnectivity(FPlacementData& OutPlacementData, int& OutTotalCubes, int& OutTotalMergedCubes) { return NativeCall<bool, FPlacementData&, int&, int&>(this, "APrimalReverseVacuumCompartment.CheckConnectivity(FPlacementData&,int&,int&)", OutPlacementData, OutTotalCubes, OutTotalMergedCubes); }
	UE::Math::TVector<double>* GetRandomPointInAllCompartments(UE::Math::TVector<double>* result, float SafeMargin) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*, float>(this, "APrimalReverseVacuumCompartment.GetRandomPointInAllCompartments(float)", result, SafeMargin); }
	bool CanOpenPorthole(const FPorthole& porthole) { return NativeCall<bool, const FPorthole&>(this, "APrimalReverseVacuumCompartment.CanOpenPorthole(FPorthole&)", porthole); }
	void NetApplyStateBatch(const FRVCStateBatchEntry& Batch) { NativeCall<void, const FRVCStateBatchEntry&>(this, "APrimalReverseVacuumCompartment.NetApplyStateBatch(FRVCStateBatchEntry&)", Batch); }
	bool IsInsideBase_Implementation(const UE::Math::TVector<double>& AtPoint) { return NativeCall<bool, const UE::Math::TVector<double>&>(this, "APrimalReverseVacuumCompartment.IsInsideBase_Implementation(UE::Math::TVector<double>&)", AtPoint); }
	void EndPlay(EEndPlayReason::Type EndPlayReason) { NativeCall<void, EEndPlayReason::Type>(this, "APrimalReverseVacuumCompartment.EndPlay(EEndPlayReason::Type)", EndPlayReason); }
	TArray<APrimalReverseVacuumCompartment*, TSizedDefaultAllocator<32> >* GetPortholeLinksFromLinkedStructures(TArray<APrimalReverseVacuumCompartment*, TSizedDefaultAllocator<32> >* result) { return NativeCall<TArray<APrimalReverseVacuumCompartment*, TSizedDefaultAllocator<32> >*, TArray<APrimalReverseVacuumCompartment*, TSizedDefaultAllocator<32> >*>(this, "APrimalReverseVacuumCompartment.GetPortholeLinksFromLinkedStructures()", result); }
	bool IsPortholeObstructed(const FPorthole& porthole, bool CheckForPawns) { return NativeCall<bool, const FPorthole&, bool>(this, "APrimalReverseVacuumCompartment.IsPortholeObstructed(FPorthole&,bool)", porthole, CheckForPawns); }
	APrimalReverseVacuumCompartment* GetLinkedBaseByPortholeIndex(int PortholeIndex, int& LinkedPortholeIndex) { return NativeCall<APrimalReverseVacuumCompartment*, int, int&>(this, "APrimalReverseVacuumCompartment.GetLinkedBaseByPortholeIndex(int,int&)", PortholeIndex, LinkedPortholeIndex); }
	void RefreshLinkedPorthole(APlayerController* ForPC, int NewState, const FPorthole& porthole) { NativeCall<void, APlayerController*, int, const FPorthole&>(this, "APrimalReverseVacuumCompartment.RefreshLinkedPorthole(APlayerController*,int,FPorthole&)", ForPC, NewState, porthole); }
	void BPUpdateWaterLines(APrimalReverseVacuumCompartment* OtherCompartment, const FPorthole& OtherPorthole, const FPorthole& MyPorthole) { NativeCall<void, APrimalReverseVacuumCompartment*, const FPorthole&, const FPorthole&>(this, "APrimalReverseVacuumCompartment.BPUpdateWaterLines(APrimalReverseVacuumCompartment*,FPorthole&,FPorthole&)", OtherCompartment, OtherPorthole, MyPorthole); }
	void NetApplyStateBatch_Implementation(const FRVCStateBatchEntry& Batch) { NativeCall<void, const FRVCStateBatchEntry&>(this, "APrimalReverseVacuumCompartment.NetApplyStateBatch_Implementation(FRVCStateBatchEntry&)", Batch); }
	bool IsMergedVacuumOverLimit(const FPorthole& porthole) { return NativeCall<bool, const FPorthole&>(this, "APrimalReverseVacuumCompartment.IsMergedVacuumOverLimit(FPorthole&)", porthole); }
	void HandleTeleportation(ACharacter* Character, FPorthole& Porthole) { NativeCall<void, ACharacter*, FPorthole&>(this, "APrimalReverseVacuumCompartment.HandleTeleportation(ACharacter*,FPorthole&)", Character, Porthole); }
};
