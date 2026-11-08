#pragma once
#include "BulkForward.h"


struct APrimalStructureTripwire : APrimalStructureExplosive
{
    // Fields

    UParticleSystemComponent*& WireComponentField() { return *GetNativePointerField<UParticleSystemComponent**>(this, "APrimalStructureTripwire.WireComponent"); }
    UBoxComponent*& TriggerComponentField() { return *GetNativePointerField<UBoxComponent**>(this, "APrimalStructureTripwire.TriggerComponent"); }
    UE::Math::TRotator<double>& CableRotOffsetField() { return *GetNativePointerField<UE::Math::TRotator<double>*>(this, "APrimalStructureTripwire.CableRotOffset"); }
    float& MaximumCableLengthField() { return *GetNativePointerField<float*>(this, "APrimalStructureTripwire.MaximumCableLength"); }
    USoundBase*& NotifyTripChatSoundField() { return *GetNativePointerField<USoundBase**>(this, "APrimalStructureTripwire.NotifyTripChatSound"); }
    FString& BoxNameField() { return *GetNativePointerField<FString*>(this, "APrimalStructureTripwire.BoxName"); }
    APrimalStructureTripwire*& ConnectedToField() { return *GetNativePointerField<APrimalStructureTripwire**>(this, "APrimalStructureTripwire.ConnectedTo"); }
    int& OwnerTargetingTeamField() { return *GetNativePointerField<int*>(this, "APrimalStructureTripwire.OwnerTargetingTeam"); }
    long double& LastToggleAlliesTripTimeField() { return *GetNativePointerField<long double*>(this, "APrimalStructureTripwire.LastToggleAlliesTripTime"); }
    UE::Math::TVector<double>& WireComponentRelativeLocationField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "APrimalStructureTripwire.WireComponentRelativeLocation"); }
    long double& LastSignNamingTimeField() { return *GetNativePointerField<long double*>(this, "APrimalStructureTripwire.LastSignNamingTime"); }
    TObjectPtr<UTexture2D>& RewireIconField() { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "APrimalStructureTripwire.RewireIcon"); }
    TObjectPtr<UTexture2D>& UnwireIconField() { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "APrimalStructureTripwire.UnwireIcon"); }
    TObjectPtr<UTexture2D>& EnableTripAlliesIconField() { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "APrimalStructureTripwire.EnableTripAlliesIcon"); }
    TObjectPtr<UTexture2D>& DisableTripAlliesIconField() { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "APrimalStructureTripwire.DisableTripAlliesIcon"); }
    TObjectPtr<UTexture2D>& EnableTripWildDinosIconField() { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "APrimalStructureTripwire.EnableTripWildDinosIcon"); }
    TObjectPtr<UTexture2D>& DisableTripWildDinosIconField() { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "APrimalStructureTripwire.DisableTripWildDinosIcon"); }

    // Bitfields

    BitFieldValue<bool, unsigned __int32> bOnlyPrimalCharacters() { return { this, "APrimalStructureTripwire.bOnlyPrimalCharacters" }; }
    BitFieldValue<bool, unsigned __int32> bIgnoreAllies() { return { this, "APrimalStructureTripwire.bIgnoreAllies" }; }
    BitFieldValue<bool, unsigned __int32> bNotifyTripChat() { return { this, "APrimalStructureTripwire.bNotifyTripChat" }; }
    BitFieldValue<bool, unsigned __int32> bShowingWireComponent() { return { this, "APrimalStructureTripwire.bShowingWireComponent" }; }
    BitFieldValue<bool, unsigned __int32> bForceIgnoreAllies() { return { this, "APrimalStructureTripwire.bForceIgnoreAllies" }; }
    BitFieldValue<bool, unsigned __int32> bForceIgnoreWildDinos() { return { this, "APrimalStructureTripwire.bForceIgnoreWildDinos" }; }
    BitFieldValue<bool, unsigned __int32> bDoingWireCheck() { return { this, "APrimalStructureTripwire.bDoingWireCheck" }; }
    BitFieldValue<bool, unsigned __int32> bUnwiredTrap() { return { this, "APrimalStructureTripwire.bUnwiredTrap" }; }
    BitFieldValue<bool, unsigned __int32> bAllowToggleForceIgnoreAllies() { return { this, "APrimalStructureTripwire.bAllowToggleForceIgnoreAllies" }; }
    BitFieldValue<bool, unsigned __int32> bAllowToggleForceIgnoreWildDinos() { return { this, "APrimalStructureTripwire.bAllowToggleForceIgnoreWildDinos" }; }

    // Functions

    // Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// static UClass* StaticClass();
	static UClass* StaticClass() { return AsaApi::ResolveClass("APrimalStructureTripwire"); }
    void DisconnectMe() { NativeCall<void>(this, "APrimalStructureTripwire.DisconnectMe()"); }
    void NetUpdateBoxName(const FString* NewName) { NativeCall<void, const FString*>(this, "APrimalStructureTripwire.NetUpdateBoxName(FString&)", NewName); }
    // Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// static void StaticRegisterNativesAPrimalStructureTripwire();
    // Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// void ValidateGeneratedRepEnums(const TArray<FRepRecord, TSizedDefaultAllocator<32> >* ClassReps);
    void BeginPlay() { NativeCall<void>(this, "APrimalStructureTripwire.BeginPlay()"); }
    void PlacedStructure(AShooterPlayerController* PC) { NativeCall<void, AShooterPlayerController*>(this, "APrimalStructureTripwire.PlacedStructure(AShooterPlayerController*)", PC); }
    void OnRep_ConnectedTo() { NativeCall<void>(this, "APrimalStructureTripwire.OnRep_ConnectedTo()"); }
    void OnRep_UnwiredTrap() { NativeCall<void>(this, "APrimalStructureTripwire.OnRep_UnwiredTrap()"); }
    void Multicast_ConnectedTo_Implementation(APrimalStructureTripwire* InTripwire) { NativeCall<void, APrimalStructureTripwire*>(this, "APrimalStructureTripwire.Multicast_ConnectedTo_Implementation(APrimalStructureTripwire*)", InTripwire); }
    void SetConnectedTo(APrimalStructureTripwire* InTripwire) { NativeCall<void, APrimalStructureTripwire*>(this, "APrimalStructureTripwire.SetConnectedTo(APrimalStructureTripwire*)", InTripwire); }
    bool IsWireComponentValid() { return NativeCall<bool>(this, "APrimalStructureTripwire.IsWireComponentValid()"); }
    void WireCheck() { NativeCall<void>(this, "APrimalStructureTripwire.WireCheck()"); }
    void Tripped() { NativeCall<void>(this, "APrimalStructureTripwire.Tripped()"); }
    void SetStaticMobility() { NativeCall<void>(this, "APrimalStructureTripwire.SetStaticMobility()"); }
    void PlayDying(float KillingDamage, const FDamageEvent* DamageEvent, APawn* InstigatingPawn, AActor* DamageCauser) { NativeCall<void, float, const FDamageEvent*, APawn*, AActor*>(this, "APrimalStructureTripwire.PlayDying(float,FDamageEvent&,APawn*,AActor*)", KillingDamage, DamageEvent, InstigatingPawn, DamageCauser); }
    void Unstasis() { NativeCall<void>(this, "APrimalStructureTripwire.Unstasis()"); }
    void GetLifetimeReplicatedProps(TArray<FLifetimeProperty, TSizedDefaultAllocator<32> >* OutLifetimeProps) { NativeCall<void, TArray<FLifetimeProperty, TSizedDefaultAllocator<32> >*>(this, "APrimalStructureTripwire.GetLifetimeReplicatedProps(TArray<FLifetimeProperty,TSizedDefaultAllocator<32>>&)", OutLifetimeProps); }
    bool CanDetonateMe(AShooterCharacter* Character, bool bUsingRemote) { return NativeCall<bool, AShooterCharacter*, bool>(this, "APrimalStructureTripwire.CanDetonateMe(AShooterCharacter*,bool)", Character, bUsingRemote); }
    bool TryMultiUse(APlayerController* ForPC, int UseIndex, int hitBodyIndex) { return NativeCall<bool, APlayerController*, int, int>(this, "APrimalStructureTripwire.TryMultiUse(APlayerController*,int,int)", ForPC, UseIndex, hitBodyIndex); }
    void DisconnectMe_Implementation() { NativeCall<void>(this, "APrimalStructureTripwire.DisconnectMe_Implementation()"); }
    FString* GetDescriptiveName(FString* result) { return NativeCall<FString*, FString*>(this, "APrimalStructureTripwire.GetDescriptiveName()", result); }
    void PostInitProperties() { NativeCall<void>(this, "APrimalStructureTripwire.PostInitProperties()"); }
    void ProcessEditText(AShooterPlayerController* ForPC, const FString* TextToUse, bool __formal) { NativeCall<void, AShooterPlayerController*, const FString*, bool>(this, "APrimalStructureTripwire.ProcessEditText(AShooterPlayerController*,FString&,bool)", ForPC, TextToUse, __formal); }
    void NetUpdateBoxName_Implementation(const FString* NewName) { NativeCall<void, const FString*>(this, "APrimalStructureTripwire.NetUpdateBoxName_Implementation(FString&)", NewName); }
    void ClientMultiUse(APlayerController* ForPC, int UseIndex, int hitBodyIndex) { NativeCall<void, APlayerController*, int, int>(this, "APrimalStructureTripwire.ClientMultiUse(APlayerController*,int,int)", ForPC, UseIndex, hitBodyIndex); }
    void GetMultiUseEntries(APlayerController* ForPC, TArray<FMultiUseEntry, TSizedDefaultAllocator<32> >* MultiUseEntries, int hitBodyIndex) { NativeCall<void, APlayerController*, TArray<FMultiUseEntry, TSizedDefaultAllocator<32> >*, int>(this, "APrimalStructureTripwire.GetMultiUseEntries(APlayerController*,TArray<FMultiUseEntry,TSizedDefaultAllocator<32>>&,int)", ForPC, MultiUseEntries, hitBodyIndex); }
    void ShowWireComponent() { NativeCall<void>(this, "APrimalStructureTripwire.ShowWireComponent()"); }
    void HideWireComponent() { NativeCall<void>(this, "APrimalStructureTripwire.HideWireComponent()"); }
    void SetUnwiredTrap(bool bUnwire) { NativeCall<void, bool>(this, "APrimalStructureTripwire.SetUnwiredTrap(bool)", bUnwire); }

	void TriggerTouched(UPrimitiveComponent* OverlappedComponent, AActor* Other, UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) { NativeCall<void, UPrimitiveComponent*, AActor*, UPrimitiveComponent*, int, bool, const FHitResult&>(this, "APrimalStructureTripwire.TriggerTouched(UPrimitiveComponent*,AActor*,UPrimitiveComponent*,int,bool,FHitResult&)", OverlappedComponent, Other, OtherComp, OtherBodyIndex, bFromSweep, SweepResult); }
	void InitTripWire() { NativeCall<void>(this, "APrimalStructureTripwire.InitTripWire()"); }
	void Multicast_ConnectedTo(APrimalStructureTripwire* InTripwire) { NativeCall<void, APrimalStructureTripwire*>(this, "APrimalStructureTripwire.Multicast_ConnectedTo(APrimalStructureTripwire*)", InTripwire); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("APrimalStructureTripwire"); }
};