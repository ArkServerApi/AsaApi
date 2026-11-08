#pragma once
#include "BulkForward.h"


struct APrimalStructureBearTrap : APrimalStructure
{
    // Fields

    USkeletalMeshComponent*& TrapSKField() { return *GetNativePointerField<USkeletalMeshComponent**>(this, "APrimalStructureBearTrap.TrapSK"); }
    USphereComponent*& TriggerComponentField() { return *GetNativePointerField<USphereComponent**>(this, "APrimalStructureBearTrap.TriggerComponent"); }
    USoundCue*& TrapTriggerSoundField() { return *GetNativePointerField<USoundCue**>(this, "APrimalStructureBearTrap.TrapTriggerSound"); }
    TSubclassOf<UDamageType>& TrapDamageTypeField() { return *GetNativePointerField<TSubclassOf<UDamageType>*>(this, "APrimalStructureBearTrap.TrapDamageType"); }
    float& TrapMinPawnMassField() { return *GetNativePointerField<float*>(this, "APrimalStructureBearTrap.TrapMinPawnMass"); }
    float& TrapMaxPawnMassField() { return *GetNativePointerField<float*>(this, "APrimalStructureBearTrap.TrapMaxPawnMass"); }
    float& TrapDamageAmountField() { return *GetNativePointerField<float*>(this, "APrimalStructureBearTrap.TrapDamageAmount"); }
    float& PeriodicalTrapDamageTimeField() { return *GetNativePointerField<float*>(this, "APrimalStructureBearTrap.PeriodicalTrapDamageTime"); }
    float& PeriodicalTrapDamageAmountField() { return *GetNativePointerField<float*>(this, "APrimalStructureBearTrap.PeriodicalTrapDamageAmount"); }
    float& IgnoreTriggerAfterSpawnTimeField() { return *GetNativePointerField<float*>(this, "APrimalStructureBearTrap.IgnoreTriggerAfterSpawnTime"); }
    TArray<FName, TSizedDefaultAllocator<32> >& IgnoreDinosWithCustomTagField() { return *GetNativePointerField<TArray<FName, TSizedDefaultAllocator<32> >*>(this, "APrimalStructureBearTrap.IgnoreDinosWithCustomTag"); }
    TArray<FName, TSizedDefaultAllocator<32> >& ForceImmobilizeDinosWithCustomTagField() { return *GetNativePointerField<TArray<FName, TSizedDefaultAllocator<32> >*>(this, "APrimalStructureBearTrap.ForceImmobilizeDinosWithCustomTag"); }
    float& HealthDecreasePerSecPlayersField() { return *GetNativePointerField<float*>(this, "APrimalStructureBearTrap.HealthDecreasePerSecPlayers"); }
    float& HealthDecreasePerSecWildField() { return *GetNativePointerField<float*>(this, "APrimalStructureBearTrap.HealthDecreasePerSecWild"); }
    APrimalCharacter*& ImmobilizedCharacterField() { return *GetNativePointerField<APrimalCharacter**>(this, "APrimalStructureBearTrap.ImmobilizedCharacter"); }
    char& ClientPrevTrapStateField() { return *GetNativePointerField<char*>(this, "APrimalStructureBearTrap.ClientPrevTrapState"); }
    float& HealthDecreasePerSecField() { return *GetNativePointerField<float*>(this, "APrimalStructureBearTrap.HealthDecreasePerSec"); }
    long double& DestroyTimeField() { return *GetNativePointerField<long double*>(this, "APrimalStructureBearTrap.DestroyTime"); }
    float& DestroyAfterTimeField() { return *GetNativePointerField<float*>(this, "APrimalStructureBearTrap.DestroyAfterTime"); }
    TArray<TSubclassOf<UShooterDamageType>, TSizedDefaultAllocator<32> >& DamagedOnlyByField() { return *GetNativePointerField<TArray<TSubclassOf<UShooterDamageType>, TSizedDefaultAllocator<32> >*>(this, "APrimalStructureBearTrap.DamagedOnlyBy"); }
    long double& NetworkPlacementTimeField() { return *GetNativePointerField<long double*>(this, "APrimalStructureBearTrap.NetworkPlacementTime"); }
    UParticleSystem*& OnDestroyFXField() { return *GetNativePointerField<UParticleSystem**>(this, "APrimalStructureBearTrap.OnDestroyFX"); }
    FTimerHandle& HideAnimatedSKHandleField() { return *GetNativePointerField<FTimerHandle*>(this, "APrimalStructureBearTrap.HideAnimatedSKHandle"); }

    // Bitfields

    BitFieldValue<bool, unsigned __int32> bBPUseNotifyImmobilizedCharacterIsDeadOrInConscious() { return { this, "APrimalStructureBearTrap.bBPUseNotifyImmobilizedCharacterIsDeadOrInConscious" }; }

    // Functions

    // Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// static UClass* GetPrivateStaticClass();
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("APrimalStructureBearTrap"); }
    // Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// static void StaticRegisterNativesAPrimalStructureBearTrap();
    // Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// void ValidateGeneratedRepEnums(const TArray<FRepRecord, TSizedDefaultAllocator<32> >* ClassReps);
    void BeginPlay() { NativeCall<void>(this, "APrimalStructureBearTrap.BeginPlay()"); }
    void PlacedStructure(AShooterPlayerController* PC) { NativeCall<void, AShooterPlayerController*>(this, "APrimalStructureBearTrap.PlacedStructure(AShooterPlayerController*)", PC); }
    bool AllowPickupForItem(AShooterPlayerController* ForPC) { return NativeCall<bool, AShooterPlayerController*>(this, "APrimalStructureBearTrap.AllowPickupForItem(AShooterPlayerController*)", ForPC); }
    void GetMultiUseEntries(APlayerController* ForPC, TArray<FMultiUseEntry, TSizedDefaultAllocator<32> >* MultiUseEntries, int hitBodyIndex) { NativeCall<void, APlayerController*, TArray<FMultiUseEntry, TSizedDefaultAllocator<32> >*, int>(this, "APrimalStructureBearTrap.GetMultiUseEntries(APlayerController*,TArray<FMultiUseEntry,TSizedDefaultAllocator<32>>&,int)", ForPC, MultiUseEntries, hitBodyIndex); }
    bool TryMultiUse(APlayerController* ForPC, int UseIndex, int hitBodyIndex) { return NativeCall<bool, APlayerController*, int, int>(this, "APrimalStructureBearTrap.TryMultiUse(APlayerController*,int,int)", ForPC, UseIndex, hitBodyIndex); }
    float TakeDamage(float Damage, const FDamageEvent* DamageEvent, AController* EventInstigator, AActor* DamageCauser) { return NativeCall<float, float, const FDamageEvent*, AController*, AActor*>(this, "APrimalStructureBearTrap.TakeDamage(float,FDamageEvent&,AController*,AActor*)", Damage, DamageEvent, EventInstigator, DamageCauser); }
    void Destroyed() { NativeCall<void>(this, "APrimalStructureBearTrap.Destroyed()"); }
    void TriggerTouched(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const FHitResult* SweepResult) { NativeCall<void, UPrimitiveComponent*, AActor*, UPrimitiveComponent*, int, bool, const FHitResult*>(this, "APrimalStructureBearTrap.TriggerTouched(UPrimitiveComponent*,AActor*,UPrimitiveComponent*,int,bool,FHitResult&)", OverlappedComponent, OtherActor, OtherComp, OtherBodyIndex, bFromSweep, SweepResult); }
    void DecreaseDamageTimer(bool a2) { NativeCall<void, bool>(this, "APrimalStructureBearTrap.DecreaseDamageTimer()", a2); }
    void PeriodicalTrapDamageTimer() { NativeCall<void>(this, "APrimalStructureBearTrap.PeriodicalTrapDamageTimer()"); }
    void ShowAnimatedSK(bool a2) { NativeCall<void, bool>(this, "APrimalStructureBearTrap.ShowAnimatedSK()", a2); }
    void HideAnimatedSK() { NativeCall<void>(this, "APrimalStructureBearTrap.HideAnimatedSK()"); }
    void GetLifetimeReplicatedProps(TArray<FLifetimeProperty, TSizedDefaultAllocator<32> >* OutLifetimeProps) { NativeCall<void, TArray<FLifetimeProperty, TSizedDefaultAllocator<32> >*>(this, "APrimalStructureBearTrap.GetLifetimeReplicatedProps(TArray<FLifetimeProperty,TSizedDefaultAllocator<32>>&)", OutLifetimeProps); }
    void GotoTrapState(char TrapState) { NativeCall<void, char>(this, "APrimalStructureBearTrap.GotoTrapState(signedchar)", TrapState); }
    void NetGotoTrapState_Implementation(char TrapState) { NativeCall<void, char>(this, "APrimalStructureBearTrap.NetGotoTrapState_Implementation(signedchar)", TrapState); }
    void UpdateStructureMesh() { NativeCall<void>(this, "APrimalStructureBearTrap.UpdateStructureMesh()"); }

	bool& bImmuneToNormalDamageField() { return *GetNativePointerField<bool*>(this, "APrimalStructureBearTrap.bImmuneToNormalDamage"); }
	char& CurrentTrapStateField() { return *GetNativePointerField<char*>(this, "APrimalStructureBearTrap.CurrentTrapState"); }
	bool& bClosedTrapField() { return *GetNativePointerField<bool*>(this, "APrimalStructureBearTrap.bClosedTrap"); }
	bool& bUseOnlyOnNonAlliedField() { return *GetNativePointerField<bool*>(this, "APrimalStructureBearTrap.bUseOnlyOnNonAllied"); }
	bool& bSkipUpdateTrapMeshVisibilityField() { return *GetNativePointerField<bool*>(this, "APrimalStructureBearTrap.bSkipUpdateTrapMeshVisibility"); }
	bool& bUseDragWeightForMassCheckField() { return *GetNativePointerField<bool*>(this, "APrimalStructureBearTrap.bUseDragWeightForMassCheck"); }
	bool& bDestroyOnTrapActivatedField() { return *GetNativePointerField<bool*>(this, "APrimalStructureBearTrap.bDestroyOnTrapActivated"); }

	static UClass* StaticClass() { return AsaApi::ResolveClass("APrimalStructureBearTrap"); }

	void BPNotifyImmobilizedCharacterIsDeadOrInConscious(bool IsDead, bool IsConscious) { NativeCall<void, bool, bool>(this, "APrimalStructureBearTrap.BPNotifyImmobilizedCharacterIsDeadOrInConscious(bool,bool)", IsDead, IsConscious); }
	void BPDie() { NativeCall<void>(this, "APrimalStructureBearTrap.BPDie()"); }
	bool IsTrapPrepared(float AnimSetupTime) { return NativeCall<bool, float>(this, "APrimalStructureBearTrap.IsTrapPrepared(float)", AnimSetupTime); }
	void InitBearTrap() { NativeCall<void>(this, "APrimalStructureBearTrap.InitBearTrap()"); }
	void CallTriggerTouched(AActor* OtherActor, UPrimitiveComponent* OtherComp) { NativeCall<void, AActor*, UPrimitiveComponent*>(this, "APrimalStructureBearTrap.CallTriggerTouched(AActor*,UPrimitiveComponent*)", OtherActor, OtherComp); }
	void OnRep_CurrentTrapState() { NativeCall<void>(this, "APrimalStructureBearTrap.OnRep_CurrentTrapState()"); }
};