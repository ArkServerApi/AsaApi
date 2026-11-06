#pragma once


struct APrimalStructureSeatingMusic : APrimalStructureSeating
{
    // Fields

    UStaticMeshComponent*& StickMesh1Field() { return *GetNativePointerField<UStaticMeshComponent**>(this, "APrimalStructureSeatingMusic.StickMesh1"); }
    UStaticMeshComponent*& StickMesh2Field() { return *GetNativePointerField<UStaticMeshComponent**>(this, "APrimalStructureSeatingMusic.StickMesh2"); }
    FName& StickMeshAttachPoint1Field() { return *GetNativePointerField<FName*>(this, "APrimalStructureSeatingMusic.StickMeshAttachPoint1"); }
    FName& StickMeshAttachPoint2Field() { return *GetNativePointerField<FName*>(this, "APrimalStructureSeatingMusic.StickMeshAttachPoint2"); }
    TArray<USoundBase*, TSizedDefaultAllocator<32> >& InstrumentSoundsField() { return *GetNativePointerField<TArray<USoundBase*, TSizedDefaultAllocator<32> >*>(this, "APrimalStructureSeatingMusic.InstrumentSounds"); }
    TArray<UAnimMontage*, TSizedDefaultAllocator<32> >& InstrumentPawnAnimationsField() { return *GetNativePointerField<TArray<UAnimMontage*, TSizedDefaultAllocator<32> >*>(this, "APrimalStructureSeatingMusic.InstrumentPawnAnimations"); }
    float& MinimumTimeBetweenPlaysField() { return *GetNativePointerField<float*>(this, "APrimalStructureSeatingMusic.MinimumTimeBetweenPlays"); }
    TArray<double, TSizedDefaultAllocator<32> >& LastPlayInstrumentTimeField() { return *GetNativePointerField<TArray<double, TSizedDefaultAllocator<32> >*>(this, "APrimalStructureSeatingMusic.LastPlayInstrumentTime"); }

    // Bitfields


    // Functions

    // Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// static UClass* StaticClass();
	static UClass* StaticClass() { return AsaApi::ResolveClass("APrimalStructureSeatingMusic"); }
    void PostInitializeComponents() { NativeCall<void>(this, "APrimalStructureSeatingMusic.PostInitializeComponents()"); }
    void Control(AShooterCharacter* ShooterCharacter, int SeatNumber, bool bLockedToSeat) { NativeCall<void, AShooterCharacter*, int, bool>(this, "APrimalStructureSeatingMusic.Control(AShooterCharacter*,int,bool)", ShooterCharacter, SeatNumber, bLockedToSeat); }
    void Release(AShooterCharacter* ShooterCharacter) { NativeCall<void, AShooterCharacter*>(this, "APrimalStructureSeatingMusic.Release(AShooterCharacter*)", ShooterCharacter); }
    void OnPrimaryFire() { NativeCall<void>(this, "APrimalStructureSeatingMusic.OnPrimaryFire()"); }
    void OnAltFire() { NativeCall<void>(this, "APrimalStructureSeatingMusic.OnAltFire()"); }
    void OnUseKey(int Index) { NativeCall<void, int>(this, "APrimalStructureSeatingMusic.OnUseKey(int)", Index); }
    void LocalSeatingStructureAction(unsigned __int8 ActionNumber) { NativeCall<void, unsigned __int8>(this, "APrimalStructureSeatingMusic.LocalSeatingStructureAction(unsignedchar)", ActionNumber); }
    void ServerSeatingStructureAction(unsigned __int8 ActionNumber) { NativeCall<void, unsigned __int8>(this, "APrimalStructureSeatingMusic.ServerSeatingStructureAction(unsignedchar)", ActionNumber); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("APrimalStructureSeatingMusic"); }
};