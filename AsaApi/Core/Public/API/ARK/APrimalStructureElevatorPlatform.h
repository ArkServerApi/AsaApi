#pragma once
#include "BulkForward.h"


struct APrimalStructureElevatorPlatform : APrimalStructure
{
    // Fields

    float& MaxCarryWeightField() { return *GetNativePointerField<float*>(this, "APrimalStructureElevatorPlatform.MaxCarryWeight"); }
    float& SpeedField() { return *GetNativePointerField<float*>(this, "APrimalStructureElevatorPlatform.Speed"); }
    float& DownSpeedField() { return *GetNativePointerField<float*>(this, "APrimalStructureElevatorPlatform.DownSpeed"); }
    float& ClientLocationInterpSpeedField() { return *GetNativePointerField<float*>(this, "APrimalStructureElevatorPlatform.ClientLocationInterpSpeed"); }
    float& ClientLocationInterpSpeedDownField() { return *GetNativePointerField<float*>(this, "APrimalStructureElevatorPlatform.ClientLocationInterpSpeedDown"); }
    float& UpObstructionTraceLengthField() { return *GetNativePointerField<float*>(this, "APrimalStructureElevatorPlatform.UpObstructionTraceLength"); }
    float& DownObstructionTraceLengthField() { return *GetNativePointerField<float*>(this, "APrimalStructureElevatorPlatform.DownObstructionTraceLength"); }
    float& TrackTraceLengthField() { return *GetNativePointerField<float*>(this, "APrimalStructureElevatorPlatform.TrackTraceLength"); }
    USoundBase*& StartMovingSoundField() { return *GetNativePointerField<USoundBase**>(this, "APrimalStructureElevatorPlatform.StartMovingSound"); }
    USoundBase*& StopMovingSoundField() { return *GetNativePointerField<USoundBase**>(this, "APrimalStructureElevatorPlatform.StopMovingSound"); }
    float& DistanceToTravelField() { return *GetNativePointerField<float*>(this, "APrimalStructureElevatorPlatform.DistanceToTravel"); }
    UE::Math::TVector<double>& StartLocationField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "APrimalStructureElevatorPlatform.StartLocation"); }
    TArray<TWeakObjectPtr<APrimalCharacter>, TSizedDefaultAllocator<32> >& CarriedActorsField() { return *GetNativePointerField<TArray<TWeakObjectPtr<APrimalCharacter>, TSizedDefaultAllocator<32> >*>(this, "APrimalStructureElevatorPlatform.CarriedActors"); }
    float& TraveledDistanceField() { return *GetNativePointerField<float*>(this, "APrimalStructureElevatorPlatform.TraveledDistance"); }
    float& CurrentLiftedWeightField() { return *GetNativePointerField<float*>(this, "APrimalStructureElevatorPlatform.CurrentLiftedWeight"); }
    float& DistanceRepTimerField() { return *GetNativePointerField<float*>(this, "APrimalStructureElevatorPlatform.DistanceRepTimer"); }
    TArray<TWeakObjectPtr<APrimalCharacter>, TSizedDefaultAllocator<32> >& CarriedRagdollsField() { return *GetNativePointerField<TArray<TWeakObjectPtr<APrimalCharacter>, TSizedDefaultAllocator<32> >*>(this, "APrimalStructureElevatorPlatform.CarriedRagdolls"); }
    float& MinHeightField() { return *GetNativePointerField<float*>(this, "APrimalStructureElevatorPlatform.MinHeight"); }
    float& MaxHeightField() { return *GetNativePointerField<float*>(this, "APrimalStructureElevatorPlatform.MaxHeight"); }
    float& HeightField() { return *GetNativePointerField<float*>(this, "APrimalStructureElevatorPlatform.Height"); }
    float& ReplicatedZField() { return *GetNativePointerField<float*>(this, "APrimalStructureElevatorPlatform.ReplicatedZ"); }
    unsigned int& CurrentPinCodeField() { return *GetNativePointerField<unsigned int*>(this, "APrimalStructureElevatorPlatform.CurrentPinCode"); }
    long double& LastLockStateChangeTimeField() { return *GetNativePointerField<long double*>(this, "APrimalStructureElevatorPlatform.LastLockStateChangeTime"); }
    TObjectPtr<UTexture2D>& ElevateIconField() { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "APrimalStructureElevatorPlatform.ElevateIcon"); }
    TObjectPtr<UTexture2D>& DelevateIconField() { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "APrimalStructureElevatorPlatform.DelevateIcon"); }
    TObjectPtr<UTexture2D>& StopIconField() { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "APrimalStructureElevatorPlatform.StopIcon"); }
    TObjectPtr<UTexture2D>& CallToMeIconField() { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "APrimalStructureElevatorPlatform.CallToMeIcon"); }

    // Bitfields

    BitFieldValue<bool, unsigned __int32> bIsActivated() { return { this, "APrimalStructureElevatorPlatform.bIsActivated" }; }
    BitFieldValue<bool, unsigned __int32> bWasActivated() { return { this, "APrimalStructureElevatorPlatform.bWasActivated" }; }
    BitFieldValue<bool, unsigned __int32> bUpdateLocation() { return { this, "APrimalStructureElevatorPlatform.bUpdateLocation" }; }
    BitFieldValue<bool, unsigned __int32> bAddElevatorMultiUseEntries() { return { this, "APrimalStructureElevatorPlatform.bAddElevatorMultiUseEntries" }; }
    BitFieldValue<bool, unsigned __int32> bIsLocked() { return { this, "APrimalStructureElevatorPlatform.bIsLocked" }; }
    BitFieldValue<bool, unsigned __int32> bIsPinLocked() { return { this, "APrimalStructureElevatorPlatform.bIsPinLocked" }; }
    BitFieldValue<bool, unsigned __int32> bAdminOnlyAccess() { return { this, "APrimalStructureElevatorPlatform.bAdminOnlyAccess" }; }

    // Functions

    // Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// static UClass* StaticClass();
	static UClass* StaticClass() { return AsaApi::ResolveClass("APrimalStructureElevatorPlatform"); }
    void ServerActivate(APlayerController* ForPC, bool bForceDirection, EPrimalStructureElevatorState Dir, float DistanceToTravelOverride) { NativeCall<void, APlayerController*, bool, EPrimalStructureElevatorState, float>(this, "APrimalStructureElevatorPlatform.ServerActivate(APlayerController*,bool,EPrimalStructureElevatorState,float)", ForPC, bForceDirection, Dir, DistanceToTravelOverride); }
    // Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// static void StaticRegisterNativesAPrimalStructureElevatorPlatform();
    // Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// void ValidateGeneratedRepEnums(const TArray<FRepRecord, TSizedDefaultAllocator<32> >* ClassReps);
    void BeginPlay() { NativeCall<void>(this, "APrimalStructureElevatorPlatform.BeginPlay()"); }
    void GetLifetimeReplicatedProps(TArray<FLifetimeProperty, TSizedDefaultAllocator<32> >* OutLifetimeProps) { NativeCall<void, TArray<FLifetimeProperty, TSizedDefaultAllocator<32> >*>(this, "APrimalStructureElevatorPlatform.GetLifetimeReplicatedProps(TArray<FLifetimeProperty,TSizedDefaultAllocator<32>>&)", OutLifetimeProps); }
    bool NetExecCommand(FName CommandName, const FNetExecParams* ExecParams) { return NativeCall<bool, FName, const FNetExecParams*>(this, "APrimalStructureElevatorPlatform.NetExecCommand(FName,FNetExecParams&)", CommandName, ExecParams); }
    void Tick(float DeltaSeconds) { NativeCall<void, float>(this, "APrimalStructureElevatorPlatform.Tick(float)", DeltaSeconds); }
    void Activate(APlayerController* ForPC, bool bForceDirection, EPrimalStructureElevatorState Dir, float DistanceToTravelOverride) { NativeCall<void, APlayerController*, bool, EPrimalStructureElevatorState, float>(this, "APrimalStructureElevatorPlatform.Activate(APlayerController*,bool,EPrimalStructureElevatorState,float)", ForPC, bForceDirection, Dir, DistanceToTravelOverride); }
    bool IsPinLocked() { return NativeCall<bool>(this, "APrimalStructureElevatorPlatform.IsPinLocked()"); }
    int GetPinCode() { return NativeCall<int>(this, "APrimalStructureElevatorPlatform.GetPinCode()"); }
    void Deactivate(bool bSwitchDirection) { NativeCall<void, bool>(this, "APrimalStructureElevatorPlatform.Deactivate(bool,bool,float)", bSwitchDirection); }
    void UpdateLocation(float DeltaSeconds) { NativeCall<void, float>(this, "APrimalStructureElevatorPlatform.UpdateLocation(float)", DeltaSeconds); }
    __int64 IsAllowedToBuild(APlayerController* PC, UE::Math::TVector<double>* AtLocation, UE::Math::TRotator<double>* AtRotation, FPlacementData* OutPlacementData, bool bDontAdjustForMaxRange, UE::Math::TRotator<double>* PlayerViewRotation, bool bFinalPlacement, bool bUseOriginalOutPlacementData) { return NativeCall<__int64, APlayerController*, UE::Math::TVector<double>*, UE::Math::TRotator<double>*, FPlacementData*, bool, UE::Math::TRotator<double>*, bool, bool>(this, "APrimalStructureElevatorPlatform.IsAllowedToBuild(APlayerController*,UE::Math::TVector<double>,UE::Math::TRotator<double>,FPlacementData&,bool,UE::Math::TRotator<double>,bool,bool,APawn*)", PC, AtLocation, AtRotation, OutPlacementData, bDontAdjustForMaxRange, PlayerViewRotation, bFinalPlacement, bUseOriginalOutPlacementData); }
    void ServerActivate_Implementation(APlayerController* ForPC, bool bForceDirection, EPrimalStructureElevatorState Dir, float DistanceToTravelOverride) { NativeCall<void, APlayerController*, bool, EPrimalStructureElevatorState, float>(this, "APrimalStructureElevatorPlatform.ServerActivate_Implementation(APlayerController*,bool,EPrimalStructureElevatorState,float)", ForPC, bForceDirection, Dir, DistanceToTravelOverride); }
    void PostNetReceiveLocationAndRotation() { NativeCall<void>(this, "APrimalStructureElevatorPlatform.PostNetReceiveLocationAndRotation()"); }
    void CalculateTrackHeight() { NativeCall<void>(this, "APrimalStructureElevatorPlatform.CalculateTrackHeight()"); }
//     float CalculateCurrentLiftedWeight(__int16 a2) { return NativeCall<float, __int16>(this, "APrimalStructureElevatorPlatform.CalculateCurrentLiftedWeight()", a2); }
// FUNCTION MISSING: APrimalStructureElevatorPlatform.CalculateCurrentLiftedWeight()
    void Destroyed(__int16 a2) { NativeCall<void, __int16>(this, "APrimalStructureElevatorPlatform.Destroyed()", a2); }
    void OnRep_bIsActivated() { NativeCall<void>(this, "APrimalStructureElevatorPlatform.OnRep_bIsActivated()"); }
    void GetMultiUseEntries(APlayerController* ForPC, TArray<FMultiUseEntry, TSizedDefaultAllocator<32> >* MultiUseEntries, int hitBodyIndex) { NativeCall<void, APlayerController*, TArray<FMultiUseEntry, TSizedDefaultAllocator<32> >*, int>(this, "APrimalStructureElevatorPlatform.GetMultiUseEntries(APlayerController*,TArray<FMultiUseEntry,TSizedDefaultAllocator<32>>&,int)", ForPC, MultiUseEntries, hitBodyIndex); }
    void GetTrackMultiUseEntries(APlayerController* ForPC, TArray<FMultiUseEntry, TSizedDefaultAllocator<32> >* MultiUseEntries) { NativeCall<void, APlayerController*, TArray<FMultiUseEntry, TSizedDefaultAllocator<32> >*>(this, "APrimalStructureElevatorPlatform.GetTrackMultiUseEntries(APlayerController*,TArray<FMultiUseEntry,TSizedDefaultAllocator<32>>&)", ForPC, MultiUseEntries); }
    bool TryMultiUse(APlayerController* ForPC, int UseIndex, int hitBodyIndex) { return NativeCall<bool, APlayerController*, int, int>(this, "APrimalStructureElevatorPlatform.TryMultiUse(APlayerController*,int,int)", ForPC, UseIndex, hitBodyIndex); }
    void ClientMultiUse(APlayerController* ForPC, int UseIndex, int hitBodyIndex) { NativeCall<void, APlayerController*, int, int>(this, "APrimalStructureElevatorPlatform.ClientMultiUse(APlayerController*,int,int)", ForPC, UseIndex, hitBodyIndex); }
    void GetAllTrackStructures(TArray<AActor*, TSizedDefaultAllocator<32> >* Tracks) { NativeCall<void, TArray<AActor*, TSizedDefaultAllocator<32> >*>(this, "APrimalStructureElevatorPlatform.GetAllTrackStructures(TArray<AActor*,TSizedDefaultAllocator<32>>&)", Tracks); }
    void Demolish(APlayerController* ForPC, AActor* DamageCauser) { NativeCall<void, APlayerController*, AActor*>(this, "APrimalStructureElevatorPlatform.Demolish(APlayerController*,AActor*)", ForPC, DamageCauser); }
    bool CanOpen(APlayerController* ForPC) { return NativeCall<bool, APlayerController*>(this, "APrimalStructureElevatorPlatform.CanOpen(APlayerController*)", ForPC); }
    bool AllowStructureAccess(APlayerController* ForPC) { return NativeCall<bool, APlayerController*>(this, "APrimalStructureElevatorPlatform.AllowStructureAccess(APlayerController*)", ForPC); }
    bool ApplyPinCode(AShooterPlayerController* ForPC, int appledPinCode, bool bIsSetting, int TheCustomIndex) { return NativeCall<bool, AShooterPlayerController*, int, bool, int>(this, "APrimalStructureElevatorPlatform.ApplyPinCode(AShooterPlayerController*,int,bool,int)", ForPC, appledPinCode, bIsSetting, TheCustomIndex); }

	bool& bUseBPElevatorStoppedField() { return *GetNativePointerField<bool*>(this, "APrimalStructureElevatorPlatform.bUseBPElevatorStopped"); }

	bool CanBeActivated() { return NativeCall<bool>(this, "APrimalStructureElevatorPlatform.CanBeActivated()"); }
	bool HasReachedMaxWeight() { return NativeCall<bool>(this, "APrimalStructureElevatorPlatform.HasReachedMaxWeight()"); }
	void RemoveLiftedActor(APrimalCharacter* LiftedActor) { NativeCall<void, APrimalCharacter*>(this, "APrimalStructureElevatorPlatform.RemoveLiftedActor(APrimalCharacter*)", LiftedActor); }
	float GetCurrentLiftedWeight() { return NativeCall<float>(this, "APrimalStructureElevatorPlatform.GetCurrentLiftedWeight()"); }
	bool AllowSetPinCode() { return NativeCall<bool>(this, "APrimalStructureElevatorPlatform.AllowSetPinCode()"); }
	bool HasSamePinCode(APrimalStructureItemContainer* otherContainer) { return NativeCall<bool, APrimalStructureItemContainer*>(this, "APrimalStructureElevatorPlatform.HasSamePinCode(APrimalStructureItemContainer*)", otherContainer); }
	float GetTrackHeight() { return NativeCall<float>(this, "APrimalStructureElevatorPlatform.GetTrackHeight()"); }
	void AddLiftedActor(APrimalCharacter* LiftedActor) { NativeCall<void, APrimalCharacter*>(this, "APrimalStructureElevatorPlatform.AddLiftedActor(APrimalCharacter*)", LiftedActor); }
	void BPElevatorStopped(bool bSwitchedDirection, EPrimalStructureElevatorState NewDirection) { NativeCall<void, bool, EPrimalStructureElevatorState>(this, "APrimalStructureElevatorPlatform.BPElevatorStopped(bool,EPrimalStructureElevatorState)", bSwitchedDirection, NewDirection); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("APrimalStructureElevatorPlatform"); }
};