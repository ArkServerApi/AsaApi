#pragma once
#include "BulkForward.h"


struct APrimalStructureDoor : APrimalStructure
{
    // Fields

    USceneComponent*& MyDoorTransformField() { return *GetNativePointerField<USceneComponent**>(this, "APrimalStructureDoor.MyDoorTransform"); }
    UStaticMeshComponent*& SecondDoorCosmeticVariantStaticMeshField() { return *GetNativePointerField<UStaticMeshComponent**>(this, "APrimalStructureDoor.SecondDoorCosmeticVariantStaticMesh"); }
    float& RotationSpeedField() { return *GetNativePointerField<float*>(this, "APrimalStructureDoor.RotationSpeed"); }
    USoundCue*& DoorOpenSoundField() { return *GetNativePointerField<USoundCue**>(this, "APrimalStructureDoor.DoorOpenSound"); }
    USoundCue*& DoorCloseSoundField() { return *GetNativePointerField<USoundCue**>(this, "APrimalStructureDoor.DoorCloseSound"); }
    unsigned int& CurrentPinCodeField() { return *GetNativePointerField<unsigned int*>(this, "APrimalStructureDoor.CurrentPinCode"); }
    int& CurrentOpenModeField() { return *GetNativePointerField<int*>(this, "APrimalStructureDoor.CurrentOpenMode"); }
    float& MaxOpenRotDegField() { return *GetNativePointerField<float*>(this, "APrimalStructureDoor.MaxOpenRotDeg"); }
    float& DoorStateChangeIgnoreEncroachmentIntervalField() { return *GetNativePointerField<float*>(this, "APrimalStructureDoor.DoorStateChangeIgnoreEncroachmentInterval"); }
    char& ClientPrevDoorOpenStateField() { return *GetNativePointerField<char*>(this, "APrimalStructureDoor.ClientPrevDoorOpenState"); }
    UStaticMeshComponent*& SecondDoorMeshField() { return *GetNativePointerField<UStaticMeshComponent**>(this, "APrimalStructureDoor.SecondDoorMesh"); }
    long double& LastLockStateChangeTimeField() { return *GetNativePointerField<long double*>(this, "APrimalStructureDoor.LastLockStateChangeTime"); }
    UE::Math::TRotator<double>& SecondDoorDefaultRotField() { return *GetNativePointerField<UE::Math::TRotator<double>*>(this, "APrimalStructureDoor.SecondDoorDefaultRot"); }
    float& CurrentDoorAngleField() { return *GetNativePointerField<float*>(this, "APrimalStructureDoor.CurrentDoorAngle"); }
    USoundBase*& UnlockDoorSoundField() { return *GetNativePointerField<USoundBase**>(this, "APrimalStructureDoor.UnlockDoorSound"); }
    USoundBase*& LockDoorSoundField() { return *GetNativePointerField<USoundBase**>(this, "APrimalStructureDoor.LockDoorSound"); }
    USoundBase*& LockedSoundField() { return *GetNativePointerField<USoundBase**>(this, "APrimalStructureDoor.LockedSound"); }
    long double& LastPinOpenSuccessTimeField() { return *GetNativePointerField<long double*>(this, "APrimalStructureDoor.LastPinOpenSuccessTime"); }
    long double& LastDoorStateChangeTimeField() { return *GetNativePointerField<long double*>(this, "APrimalStructureDoor.LastDoorStateChangeTime"); }
    TObjectPtr<UTexture2D>& OpenIconField() { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "APrimalStructureDoor.OpenIcon"); }
    TObjectPtr<UTexture2D>& CloseIconField() { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "APrimalStructureDoor.CloseIcon"); }
    TObjectPtr<UTexture2D>& OpenModeInAndOutIconField() { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "APrimalStructureDoor.OpenModeInAndOutIcon"); }
    TObjectPtr<UTexture2D>& OpenModeAlwaysInIconField() { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "APrimalStructureDoor.OpenModeAlwaysInIcon"); }
    TObjectPtr<UTexture2D>& OpenModeAlwaysOutIconField() { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "APrimalStructureDoor.OpenModeAlwaysOutIcon"); }

    // Bitfields

    BitFieldValue<bool, unsigned __int32> bInvertOpenCloseDirection() { return { this, "APrimalStructureDoor.bInvertOpenCloseDirection" }; }
    BitFieldValue<bool, unsigned __int32> bSupportsLocking() { return { this, "APrimalStructureDoor.bSupportsLocking" }; }
    BitFieldValue<bool, unsigned __int32> bUseSecondDoor() { return { this, "APrimalStructureDoor.bUseSecondDoor" }; }
    BitFieldValue<bool, unsigned __int32> bSupportsPinLocking() { return { this, "APrimalStructureDoor.bSupportsPinLocking" }; }
    BitFieldValue<bool, unsigned __int32> bIsLocked() { return { this, "APrimalStructureDoor.bIsLocked" }; }
    BitFieldValue<bool, unsigned __int32> bIsPinLocked() { return { this, "APrimalStructureDoor.bIsPinLocked" }; }
    BitFieldValue<bool, unsigned __int32> bAdminOnlyAccess() { return { this, "APrimalStructureDoor.bAdminOnlyAccess" }; }
    BitFieldValue<bool, unsigned __int32> bCanBeForcedOpenByDino() { return { this, "APrimalStructureDoor.bCanBeForcedOpenByDino" }; }
    BitFieldValue<bool, unsigned __int32> bPreventBasingWhileMoving() { return { this, "APrimalStructureDoor.bPreventBasingWhileMoving" }; }
    BitFieldValue<bool, unsigned __int32> bForceDoorOpenIn() { return { this, "APrimalStructureDoor.bForceDoorOpenIn" }; }
    BitFieldValue<bool, unsigned __int32> bForceDoorOpenOut() { return { this, "APrimalStructureDoor.bForceDoorOpenOut" }; }
    BitFieldValue<bool, unsigned __int32> bIsDoorMoving() { return { this, "APrimalStructureDoor.bIsDoorMoving" }; }
    BitFieldValue<bool, unsigned __int32> bForceStaticMobility() { return { this, "APrimalStructureDoor.bForceStaticMobility" }; }
    BitFieldValue<bool, unsigned __int32> bRotatePitch() { return { this, "APrimalStructureDoor.bRotatePitch" }; }
    BitFieldValue<bool, unsigned __int32> bRotateRoll() { return { this, "APrimalStructureDoor.bRotateRoll" }; }
    BitFieldValue<bool, unsigned __int32> bRotateYaw() { return { this, "APrimalStructureDoor.bRotateYaw" }; }
    BitFieldValue<bool, unsigned __int32> bInitializedRotation() { return { this, "APrimalStructureDoor.bInitializedRotation" }; }
    BitFieldValue<bool, unsigned __int32> bPreventDoorInterpolation() { return { this, "APrimalStructureDoor.bPreventDoorInterpolation" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPGotoDoorState() { return { this, "APrimalStructureDoor.bUseBPGotoDoorState" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOverrideChangeDoorState() { return { this, "APrimalStructureDoor.bUseBPOverrideChangeDoorState" }; }
    BitFieldValue<bool, unsigned __int32> bForceNoPinLocking() { return { this, "APrimalStructureDoor.bForceNoPinLocking" }; }
    BitFieldValue<bool, unsigned __int32> bDoesntAffectDinoNavigationWhileOpen() { return { this, "APrimalStructureDoor.bDoesntAffectDinoNavigationWhileOpen" }; }
    BitFieldValue<bool, unsigned __int32> bDoesntUseOpenMode() { return { this, "APrimalStructureDoor.bDoesntUseOpenMode" }; }

    // Functions

    static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("APrimalStructureDoor"); }
    // Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// static void StaticRegisterNativesAPrimalStructureDoor();
    // Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// void ValidateGeneratedRepEnums(const TArray<FRepRecord, TSizedDefaultAllocator<32> >* ClassReps);
    void BeginPlay() { NativeCall<void>(this, "APrimalStructureDoor.BeginPlay()"); }
    void Tick(float DeltaSeconds) { NativeCall<void, float>(this, "APrimalStructureDoor.Tick(float)", DeltaSeconds); }
    void GetLifetimeReplicatedProps(TArray<FLifetimeProperty, TSizedDefaultAllocator<32> >* OutLifetimeProps) { NativeCall<void, TArray<FLifetimeProperty, TSizedDefaultAllocator<32> >*>(this, "APrimalStructureDoor.GetLifetimeReplicatedProps(TArray<FLifetimeProperty,TSizedDefaultAllocator<32>>&)", OutLifetimeProps); }
    void DrawHUD(AShooterHUD* HUD) { NativeCall<void, AShooterHUD*>(this, "APrimalStructureDoor.DrawHUD(AShooterHUD*)", HUD); }
    void GotoDoorState(char DoorState) { NativeCall<void, char>(this, "APrimalStructureDoor.GotoDoorState(signedchar)", DoorState); }
    void DelayedGotoDoorState(char DoorState, float DelayTime) { NativeCall<void, char, float>(this, "APrimalStructureDoor.DelayedGotoDoorState(signedchar,float)", DoorState, DelayTime); }
    void DelayedGotoDoorStateTimer() { NativeCall<void>(this, "APrimalStructureDoor.DelayedGotoDoorStateTimer()"); }
    void GetMultiUseEntries(APlayerController* ForPC, TArray<FMultiUseEntry, TSizedDefaultAllocator<32> >* MultiUseEntries, int hitBodyIndex) { NativeCall<void, APlayerController*, TArray<FMultiUseEntry, TSizedDefaultAllocator<32> >*, int>(this, "APrimalStructureDoor.GetMultiUseEntries(APlayerController*,TArray<FMultiUseEntry,TSizedDefaultAllocator<32>>&,int)", ForPC, MultiUseEntries, hitBodyIndex); }
    bool IsPinLocked() { return NativeCall<bool>(this, "APrimalStructureDoor.IsPinLocked()"); }
    int GetPinCode() { return NativeCall<int>(this, "APrimalStructureDoor.GetPinCode()"); }
    bool TryMultiUse(APlayerController* ForPC, int UseIndex, int hitBodyIndex) { return NativeCall<bool, APlayerController*, int, int>(this, "APrimalStructureDoor.TryMultiUse(APlayerController*,int,int)", ForPC, UseIndex, hitBodyIndex); }
    void ClientMultiUse(APlayerController* ForPC, int UseIndex, int hitBodyIndex) { NativeCall<void, APlayerController*, int, int>(this, "APrimalStructureDoor.ClientMultiUse(APlayerController*,int,int)", ForPC, UseIndex, hitBodyIndex); }
    bool CanOpen(APlayerController* ForPC) { return NativeCall<bool, APlayerController*>(this, "APrimalStructureDoor.CanOpen(APlayerController*)", ForPC); }
    FString* GetDescriptiveName(FString* result) { return NativeCall<FString*, FString*>(this, "APrimalStructureDoor.GetDescriptiveName()", result); }
    bool ApplyPinCode(AShooterPlayerController* ForPC, int appledPinCode, bool bIsSetting, int TheCustomIndex) { return NativeCall<bool, AShooterPlayerController*, int, bool, int>(this, "APrimalStructureDoor.ApplyPinCode(AShooterPlayerController*,int,bool,int)", ForPC, appledPinCode, bIsSetting, TheCustomIndex); }
    void SetStaticMobility() { NativeCall<void>(this, "APrimalStructureDoor.SetStaticMobility()"); }
    void NetGotoDoorState_Implementation(char DoorState) { NativeCall<void, char>(this, "APrimalStructureDoor.NetGotoDoorState_Implementation(signedchar)", DoorState); }
    void PostInitializeComponents() { NativeCall<void>(this, "APrimalStructureDoor.PostInitializeComponents()"); }
    bool AllowStructureAccess(APlayerController* ForPC) { return NativeCall<bool, APlayerController*>(this, "APrimalStructureDoor.AllowStructureAccess(APlayerController*)", ForPC); }
    bool PreventCharacterBasing(AActor* OtherActor, UPrimitiveComponent* BasedOnComponent) { return NativeCall<bool, AActor*, UPrimitiveComponent*>(this, "APrimalStructureDoor.PreventCharacterBasing(AActor*,UPrimitiveComponent*)", OtherActor, BasedOnComponent); }
    bool AllowPickupForItem(AShooterPlayerController* ForPC) { return NativeCall<bool, AShooterPlayerController*>(this, "APrimalStructureDoor.AllowPickupForItem(AShooterPlayerController*)", ForPC); }
    bool AllowIgnoreCharacterEncroachment_Implementation(UPrimitiveComponent* HitComponent, AActor* EncroachingCharacter) { return NativeCall<bool, UPrimitiveComponent*, AActor*>(this, "APrimalStructureDoor.AllowIgnoreCharacterEncroachment_Implementation(UPrimitiveComponent*,AActor*)", HitComponent, EncroachingCharacter); }
    void UpdateStructureMesh() { NativeCall<void>(this, "APrimalStructureDoor.UpdateStructureMesh()"); }
    void UpdateCosmeticMeshComp(UE::Math::TTransform<double>* CosmeticMeshTransform, UStaticMesh* CosmeticMesh) { NativeCall<void, UE::Math::TTransform<double>*, UStaticMesh*>(this, "APrimalStructureDoor.UpdateCosmeticMeshComp(UE::Math::TTransform<double>,UStaticMesh*)", CosmeticMeshTransform, CosmeticMesh); }

	char& DoorOpenStateField() { return *GetNativePointerField<char*>(this, "APrimalStructureDoor.DoorOpenState"); }
	char& DelayedDoorStateField() { return *GetNativePointerField<char*>(this, "APrimalStructureDoor.DelayedDoorState"); }

	static UClass* StaticClass() { return AsaApi::ResolveClass("APrimalStructureDoor"); }

	int GetDoorState() { return NativeCall<int>(this, "APrimalStructureDoor.GetDoorState()"); }
	bool HasSamePinCode(APrimalStructureItemContainer* otherContainer) { return NativeCall<bool, APrimalStructureItemContainer*>(this, "APrimalStructureDoor.HasSamePinCode(APrimalStructureItemContainer*)", otherContainer); }
	void BPOverrideChangeDoorState(APlayerController* PC) { NativeCall<void, APlayerController*>(this, "APrimalStructureDoor.BPOverrideChangeDoorState(APlayerController*)", PC); }
	void BPSetDoorState(int DoorState) { NativeCall<void, int>(this, "APrimalStructureDoor.BPSetDoorState(int)", DoorState); }
	bool AllowSetPinCode() { return NativeCall<bool>(this, "APrimalStructureDoor.AllowSetPinCode()"); }
	void BPGotoDoorState(int NewDoorState) { NativeCall<void, int>(this, "APrimalStructureDoor.BPGotoDoorState(int)", NewDoorState); }
};