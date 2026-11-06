#pragma once
#include "BulkForward.h"


struct APrimalStructureElevatorTrack : APrimalStructureItemContainer
{
    // Fields

    TWeakObjectPtr<APrimalStructureElevatorPlatform>& ElevatorBaseField() { return *GetNativePointerField<TWeakObjectPtr<APrimalStructureElevatorPlatform>*>(this, "APrimalStructureElevatorTrack.ElevatorBase"); }
    float& TrackTopPointField() { return *GetNativePointerField<float*>(this, "APrimalStructureElevatorTrack.TrackTopPoint"); }
    float& TrackBottomPointField() { return *GetNativePointerField<float*>(this, "APrimalStructureElevatorTrack.TrackBottomPoint"); }

    // Bitfields

    BitFieldValue<bool, unsigned __int32> bAddElevatorMultiUseEntries() { return { this, "APrimalStructureElevatorTrack.bAddElevatorMultiUseEntries" }; }
    BitFieldValue<bool, unsigned __int32> bRequiresPower() { return { this, "APrimalStructureElevatorTrack.bRequiresPower" }; }

    // Functions

    // Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// static UClass* GetPrivateStaticClass();
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("APrimalStructureElevatorTrack"); }
    // Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// static void StaticRegisterNativesAPrimalStructureElevatorTrack();
    // Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// void ValidateGeneratedRepEnums(const TArray<FRepRecord, TSizedDefaultAllocator<32> >* ClassReps);
    void PostInitializeComponents() { NativeCall<void>(this, "APrimalStructureElevatorTrack.PostInitializeComponents()"); }
    void SetElevatorBase(APrimalStructureElevatorPlatform* NewBase) { NativeCall<void, APrimalStructureElevatorPlatform*>(this, "APrimalStructureElevatorTrack.SetElevatorBase(APrimalStructureElevatorPlatform*)", NewBase); }
    void MulticastSetElevatorBase_Implementation(APrimalStructureElevatorPlatform* NewBase) { NativeCall<void, APrimalStructureElevatorPlatform*>(this, "APrimalStructureElevatorTrack.MulticastSetElevatorBase_Implementation(APrimalStructureElevatorPlatform*)", NewBase); }
    void GetMultiUseEntries(APlayerController* ForPC, TArray<FMultiUseEntry, TSizedDefaultAllocator<32> >* MultiUseEntries, int hitBodyIndex) { NativeCall<void, APlayerController*, TArray<FMultiUseEntry, TSizedDefaultAllocator<32> >*, int>(this, "APrimalStructureElevatorTrack.GetMultiUseEntries(APlayerController*,TArray<FMultiUseEntry,TSizedDefaultAllocator<32>>&,int)", ForPC, MultiUseEntries, hitBodyIndex); }
    bool TryMultiUse(APlayerController* ForPC, int UseIndex, int hitBodyIndex) { return NativeCall<bool, APlayerController*, int, int>(this, "APrimalStructureElevatorTrack.TryMultiUse(APlayerController*,int,int)", ForPC, UseIndex, hitBodyIndex); }
    void ClientMultiUse(APlayerController* ForPC, int UseIndex, int hitBodyIndex) { NativeCall<void, APlayerController*, int, int>(this, "APrimalStructureElevatorTrack.ClientMultiUse(APlayerController*,int,int)", ForPC, UseIndex, hitBodyIndex); }
    void GetLifetimeReplicatedProps(TArray<FLifetimeProperty, TSizedDefaultAllocator<32> >* OutLifetimeProps) { NativeCall<void, TArray<FLifetimeProperty, TSizedDefaultAllocator<32> >*>(this, "APrimalStructureElevatorTrack.GetLifetimeReplicatedProps(TArray<FLifetimeProperty,TSizedDefaultAllocator<32>>&)", OutLifetimeProps); }
    bool CanBeActivated() { return NativeCall<bool>(this, "APrimalStructureElevatorTrack.CanBeActivated()"); }
    void AddedLinkedStructure(APrimalStructure* Structure) { NativeCall<void, APrimalStructure*>(this, "APrimalStructureElevatorTrack.AddedLinkedStructure(APrimalStructure*)", Structure); }
    void RemovedLinkedStructure(APrimalStructure* Structure, APlayerController* Controller) { NativeCall<void, APrimalStructure*, APlayerController*>(this, "APrimalStructureElevatorTrack.RemovedLinkedStructure(APrimalStructure*,APlayerController*)", Structure, Controller); }
    bool HasPlatformAttachedToTheTrack() { return NativeCall<bool>(this, "APrimalStructureElevatorTrack.HasPlatformAttachedToTheTrack()"); }
    void CalculateTrackHeight(float* MinZ, float* MaxZ, TArray<APrimalStructureElevatorTrack*, TSizedDefaultAllocator<32> >* Tracks) { NativeCall<void, float*, float*, TArray<APrimalStructureElevatorTrack*, TSizedDefaultAllocator<32> >*>(this, "APrimalStructureElevatorTrack.CalculateTrackHeight(float&,float&,TArray<APrimalStructureElevatorTrack*,TSizedDefaultAllocator<32>>&)", MinZ, MaxZ, Tracks); }
    bool IsPowered() { return NativeCall<bool>(this, "APrimalStructureElevatorTrack.IsPowered()"); }
    char IsPoweredEx(TArray<APrimalStructureElevatorTrack*, TSizedDefaultAllocator<32> >* CheckedTracks) { return NativeCall<char, TArray<APrimalStructureElevatorTrack*, TSizedDefaultAllocator<32> >*>(this, "APrimalStructureElevatorTrack.IsPoweredEx(TArray<APrimalStructureElevatorTrack*,TSizedDefaultAllocator<32>>)", CheckedTracks); }
    void Tick(float DeltaSeconds) { NativeCall<void, float>(this, "APrimalStructureElevatorTrack.Tick(float)", DeltaSeconds); }
    TWeakObjectPtr<APrimalStructureElevatorPlatform>* GetElevatorPlatformEx(TWeakObjectPtr<APrimalStructureElevatorPlatform>* result, TArray<APrimalStructureElevatorTrack*, TSizedDefaultAllocator<32> >* CheckedTracks) { return NativeCall<TWeakObjectPtr<APrimalStructureElevatorPlatform> *, TWeakObjectPtr<APrimalStructureElevatorPlatform>*, TArray<APrimalStructureElevatorTrack*, TSizedDefaultAllocator<32> >*>(this, "APrimalStructureElevatorTrack.GetElevatorPlatformEx(TArray<APrimalStructureElevatorTrack*,TSizedDefaultAllocator<32>>)", result, CheckedTracks); }
    void PlayDying(float KillingDamage, const FDamageEvent* DamageEvent, APawn* InstigatingPawn, AActor* DamageCauser) { NativeCall<void, float, const FDamageEvent*, APawn*, AActor*>(this, "APrimalStructureElevatorTrack.PlayDying(float,FDamageEvent&,APawn*,AActor*)", KillingDamage, DamageEvent, InstigatingPawn, DamageCauser); }
    //TArray<FTooltipTextInfo, TSizedDefaultAllocator<32> >* GetTooltipStructureInfo(TArray<FTooltipTextInfo, TSizedDefaultAllocator<32> >* result, AShooterPlayerController* PlayerOwner) { return NativeCall<TArray<FTooltipTextInfo, TSizedDefaultAllocator<32> >*, TArray<FTooltipTextInfo, TSizedDefaultAllocator<32> >*, AShooterPlayerController*>(this, "APrimalStructureElevatorTrack.GetTooltipStructureInfo(AShooterPlayerController*)", result, PlayerOwner); }

	bool& bHasBaseField() { return *GetNativePointerField<bool*>(this, "APrimalStructureElevatorTrack.bHasBase"); }

	static UClass* StaticClass() { return AsaApi::ResolveClass("APrimalStructureElevatorTrack"); }

	void DrawHUD(AShooterHUD* HUD) { NativeCall<void, AShooterHUD*>(this, "APrimalStructureElevatorTrack.DrawHUD(AShooterHUD*)", HUD); }
	void MulticastSetElevatorBase(APrimalStructureElevatorPlatform* NewBase) { NativeCall<void, APrimalStructureElevatorPlatform*>(this, "APrimalStructureElevatorTrack.MulticastSetElevatorBase(APrimalStructureElevatorPlatform*)", NewBase); }
	void ClientHasPlatform() { NativeCall<void>(this, "APrimalStructureElevatorTrack.ClientHasPlatform()"); }
	void ClientHasPlatform_Implementation() { NativeCall<void>(this, "APrimalStructureElevatorTrack.ClientHasPlatform_Implementation()"); }
	APrimalStructureElevatorPlatform* BPGetElevatorPlatform() { return NativeCall<APrimalStructureElevatorPlatform*>(this, "APrimalStructureElevatorTrack.BPGetElevatorPlatform()"); }
	void GetAllTrackStructures(TArray<AActor*, TSizedDefaultAllocator<32> >& Tracks) { NativeCall<void, TArray<AActor*, TSizedDefaultAllocator<32> >&>(this, "APrimalStructureElevatorTrack.GetAllTrackStructures(TArray<AActor*,TSizedDefaultAllocator<32>>&)", Tracks); }
};