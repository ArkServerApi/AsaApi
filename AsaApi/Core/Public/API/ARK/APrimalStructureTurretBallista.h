#pragma once
#include "BulkForward.h"


struct APrimalStructureTurretBallista : APrimalStructureSeating
{
    // Fields

    FName& TurretTipBoneField() { return *GetNativePointerField<FName*>(this, "APrimalStructureTurretBallista.TurretTipBone"); }
    FName& RiderOverrideSocketNameField() { return *GetNativePointerField<FName*>(this, "APrimalStructureTurretBallista.RiderOverrideSocketName"); }
    TSubclassOf<UPrimalItem>& AmmoItemTemplateField() { return *GetNativePointerField<TSubclassOf<UPrimalItem>*>(this, "APrimalStructureTurretBallista.AmmoItemTemplate"); }
    TArray<TSubclassOf<UPrimalItem>, TSizedDefaultAllocator<32> >& AlternateAmmoItemTemplatesField() { return *GetNativePointerField<TArray<TSubclassOf<UPrimalItem>, TSizedDefaultAllocator<32> >*>(this, "APrimalStructureTurretBallista.AlternateAmmoItemTemplates"); }
    TSubclassOf<AShooterProjectile>& ProjectileClassField() { return *GetNativePointerField<TSubclassOf<AShooterProjectile>*>(this, "APrimalStructureTurretBallista.ProjectileClass"); }
    TSubclassOf<UDamageType>& ShootingDamageTypeField() { return *GetNativePointerField<TSubclassOf<UDamageType>*>(this, "APrimalStructureTurretBallista.ShootingDamageType"); }
    float& ShootingDamageAmountField() { return *GetNativePointerField<float*>(this, "APrimalStructureTurretBallista.ShootingDamageAmount"); }
    float& ShootingDamageImpulseField() { return *GetNativePointerField<float*>(this, "APrimalStructureTurretBallista.ShootingDamageImpulse"); }
    UParticleSystem*& ShootingTrailFXField() { return *GetNativePointerField<UParticleSystem**>(this, "APrimalStructureTurretBallista.ShootingTrailFX"); }
    float& ShootingAimSpreadField() { return *GetNativePointerField<float*>(this, "APrimalStructureTurretBallista.ShootingAimSpread"); }
    TSubclassOf<APrimalEmitterSpawnable>& MuzzleFlashEmitterField() { return *GetNativePointerField<TSubclassOf<APrimalEmitterSpawnable>*>(this, "APrimalStructureTurretBallista.MuzzleFlashEmitter"); }
    float& ShootingFireIntervalField() { return *GetNativePointerField<float*>(this, "APrimalStructureTurretBallista.ShootingFireInterval"); }
    long double& LastShootingFireTimeField() { return *GetNativePointerField<long double*>(this, "APrimalStructureTurretBallista.LastShootingFireTime"); }
    bool& bIsShootingField() { return *GetNativePointerField<bool*>(this, "APrimalStructureTurretBallista.bIsShooting"); }
    bool& bQueuedShotField() { return *GetNativePointerField<bool*>(this, "APrimalStructureTurretBallista.bQueuedShot"); }
    float& YawViewRotationField() { return *GetNativePointerField<float*>(this, "APrimalStructureTurretBallista.YawViewRotation"); }
    float& OldYawViewRotationField() { return *GetNativePointerField<float*>(this, "APrimalStructureTurretBallista.OldYawViewRotation"); }
    float& PitctViewRotationField() { return *GetNativePointerField<float*>(this, "APrimalStructureTurretBallista.PitctViewRotation"); }
    UE::Math::TRotator<double>& RotationInputField() { return *GetNativePointerField<UE::Math::TRotator<double>*>(this, "APrimalStructureTurretBallista.RotationInput"); }
    USoundCue*& FireSoundField() { return *GetNativePointerField<USoundCue**>(this, "APrimalStructureTurretBallista.FireSound"); }
    USoundCue*& EmptyFireSoundField() { return *GetNativePointerField<USoundCue**>(this, "APrimalStructureTurretBallista.EmptyFireSound"); }
    USoundCue*& RotateSoundCueField() { return *GetNativePointerField<USoundCue**>(this, "APrimalStructureTurretBallista.RotateSoundCue"); }
    float& RotateSpeedThresholdField() { return *GetNativePointerField<float*>(this, "APrimalStructureTurretBallista.RotateSpeedThreshold"); }
    float& RotateSoundFadeInSpeedField() { return *GetNativePointerField<float*>(this, "APrimalStructureTurretBallista.RotateSoundFadeInSpeed"); }
    float& RotateSoundFadeOutSpeedField() { return *GetNativePointerField<float*>(this, "APrimalStructureTurretBallista.RotateSoundFadeOutSpeed"); }
    float& RotateSoundMinVolumeField() { return *GetNativePointerField<float*>(this, "APrimalStructureTurretBallista.RotateSoundMinVolume"); }
    float& RotateSoundMaxVolumeField() { return *GetNativePointerField<float*>(this, "APrimalStructureTurretBallista.RotateSoundMaxVolume"); }
    float& TPVCameraPitchMinField() { return *GetNativePointerField<float*>(this, "APrimalStructureTurretBallista.TPVCameraPitchMin"); }
    float& TPVCameraPitchMaxField() { return *GetNativePointerField<float*>(this, "APrimalStructureTurretBallista.TPVCameraPitchMax"); }
    float& TPVCameraYawMinField() { return *GetNativePointerField<float*>(this, "APrimalStructureTurretBallista.TPVCameraYawMin"); }
    float& TPVCameraYawMaxField() { return *GetNativePointerField<float*>(this, "APrimalStructureTurretBallista.TPVCameraYawMax"); }
    UAnimMontage*& FireBallistaAnimationField() { return *GetNativePointerField<UAnimMontage**>(this, "APrimalStructureTurretBallista.FireBallistaAnimation"); }
    UAnimMontage*& EmptyBallistaAnimationField() { return *GetNativePointerField<UAnimMontage**>(this, "APrimalStructureTurretBallista.EmptyBallistaAnimation"); }
    UAnimMontage*& ReloadBallistaAnimationField() { return *GetNativePointerField<UAnimMontage**>(this, "APrimalStructureTurretBallista.ReloadBallistaAnimation"); }
    float& ControllerRiddingYawField() { return *GetNativePointerField<float*>(this, "APrimalStructureTurretBallista.ControllerRiddingYaw"); }
    FName& TurretSkeletalMeshComponentNameField() { return *GetNativePointerField<FName*>(this, "APrimalStructureTurretBallista.TurretSkeletalMeshComponentName"); }
    USkeletalMeshComponent*& MySkeletalMeshCompField() { return *GetNativePointerField<USkeletalMeshComponent**>(this, "APrimalStructureTurretBallista.MySkeletalMeshComp"); }
    FName& AttachedModuleComponentNameField() { return *GetNativePointerField<FName*>(this, "APrimalStructureTurretBallista.AttachedModuleComponentName"); }
    USkeletalMeshComponent*& AttachedModuleSkeletalMeshCompField() { return *GetNativePointerField<USkeletalMeshComponent**>(this, "APrimalStructureTurretBallista.AttachedModuleSkeletalMeshComp"); }
    UAnimMontage*& AttachedModuleFireAnimationField() { return *GetNativePointerField<UAnimMontage**>(this, "APrimalStructureTurretBallista.AttachedModuleFireAnimation"); }
    UAnimMontage*& AttachedModuleReloadAnimationField() { return *GetNativePointerField<UAnimMontage**>(this, "APrimalStructureTurretBallista.AttachedModuleReloadAnimation"); }
    FName& ProjectileMeshAttachPointField() { return *GetNativePointerField<FName*>(this, "APrimalStructureTurretBallista.ProjectileMeshAttachPoint"); }
    FName& ProjectileMeshAttachPointForMeshOnlyField() { return *GetNativePointerField<FName*>(this, "APrimalStructureTurretBallista.ProjectileMeshAttachPointForMeshOnly"); }
    FName& ProjectileBoneNameField() { return *GetNativePointerField<FName*>(this, "APrimalStructureTurretBallista.ProjectileBoneName"); }
    unsigned __int8& bQueueReloadingAnimationField() { return *GetNativePointerField<unsigned __int8*>(this, "APrimalStructureTurretBallista.bQueueReloadingAnimation"); }
    UStaticMeshComponent*& ProjectileMeshField() { return *GetNativePointerField<UStaticMeshComponent**>(this, "APrimalStructureTurretBallista.ProjectileMesh"); }
    UAudioComponent*& RotateSoundComponentField() { return *GetNativePointerField<UAudioComponent**>(this, "APrimalStructureTurretBallista.RotateSoundComponent"); }
    UTexture2D*& ProgressBarBackgroundField() { return *GetNativePointerField<UTexture2D**>(this, "APrimalStructureTurretBallista.ProgressBarBackground"); }
    UTexture2D*& ProgressBarForegroundField() { return *GetNativePointerField<UTexture2D**>(this, "APrimalStructureTurretBallista.ProgressBarForeground"); }
    int& AmmoCountField() { return *GetNativePointerField<int*>(this, "APrimalStructureTurretBallista.AmmoCount"); }
    UClass*& CurrentAmmoItemTemplateField() { return *GetNativePointerField<UClass**>(this, "APrimalStructureTurretBallista.CurrentAmmoItemTemplate"); }
    int& MagazineSizeField() { return *GetNativePointerField<int*>(this, "APrimalStructureTurretBallista.MagazineSize"); }
    float& RangeToCheckForAmmoField() { return *GetNativePointerField<float*>(this, "APrimalStructureTurretBallista.RangeToCheckForAmmo"); }
    FString& CurrentAmmoSourceStringField() { return *GetNativePointerField<FString*>(this, "APrimalStructureTurretBallista.CurrentAmmoSourceString"); }
    long double& AuthorityDisableUpdateMeshAtTimeField() { return *GetNativePointerField<long double*>(this, "APrimalStructureTurretBallista.AuthorityDisableUpdateMeshAtTime"); }
    UStaticMesh*& AmmoItemTemplateMeshField() { return *GetNativePointerField<UStaticMesh**>(this, "APrimalStructureTurretBallista.AmmoItemTemplateMesh"); }
    TArray<UStaticMesh*, TSizedDefaultAllocator<32> >& AlternateAmmoItemTemplateMeshesField() { return *GetNativePointerField<TArray<UStaticMesh*, TSizedDefaultAllocator<32> >*>(this, "APrimalStructureTurretBallista.AlternateAmmoItemTemplateMeshes"); }
    TArray<TSubclassOf<AShooterProjectile>, TSizedDefaultAllocator<32> >& AlternateAmmoProjectileClassesField() { return *GetNativePointerField<TArray<TSubclassOf<AShooterProjectile>, TSizedDefaultAllocator<32> >*>(this, "APrimalStructureTurretBallista.AlternateAmmoProjectileClasses"); }
    TArray<TSubclassOf<APrimalBuff>, TSizedDefaultAllocator<32> >& BuffsWhileSeatedField() { return *GetNativePointerField<TArray<TSubclassOf<APrimalBuff>, TSizedDefaultAllocator<32> >*>(this, "APrimalStructureTurretBallista.BuffsWhileSeated"); }
    float& DefaultAmmoReloadAnimSpeedField() { return *GetNativePointerField<float*>(this, "APrimalStructureTurretBallista.DefaultAmmoReloadAnimSpeed"); }
    TArray<float, TSizedDefaultAllocator<32> >& AlternateAmmoReloadAnimSpeedsField() { return *GetNativePointerField<TArray<float, TSizedDefaultAllocator<32> >*>(this, "APrimalStructureTurretBallista.AlternateAmmoReloadAnimSpeeds"); }
    float& HealthCostPerShotField() { return *GetNativePointerField<float*>(this, "APrimalStructureTurretBallista.HealthCostPerShot"); }
    float& MinimumHealthPercentToShootField() { return *GetNativePointerField<float*>(this, "APrimalStructureTurretBallista.MinimumHealthPercentToShoot"); }
    float& InstantFireTraceRangeField() { return *GetNativePointerField<float*>(this, "APrimalStructureTurretBallista.InstantFireTraceRange"); }
    long double& lastFireTimeField() { return *GetNativePointerField<long double*>(this, "APrimalStructureTurretBallista.lastFireTime"); }
    float& FluidSimSplashStrengthField() { return *GetNativePointerField<float*>(this, "APrimalStructureTurretBallista.FluidSimSplashStrength"); }
    UNiagaraSystem*& FluidSimSplashTemplateOverrideField() { return *GetNativePointerField<UNiagaraSystem**>(this, "APrimalStructureTurretBallista.FluidSimSplashTemplateOverride"); }

    // Bitfields

    BitFieldValue<bool, unsigned __int32> bClientFireProjectile() { return { this, "APrimalStructureTurretBallista.bClientFireProjectile" }; }
    BitFieldValue<bool, unsigned __int32> bUseInstantDamageShooting() { return { this, "APrimalStructureTurretBallista.bUseInstantDamageShooting" }; }
    BitFieldValue<bool, unsigned __int32> bDisableInElectricalStorm() { return { this, "APrimalStructureTurretBallista.bDisableInElectricalStorm" }; }
    BitFieldValue<bool, unsigned __int32> bUseBallistaAimOffsetOnCharacter() { return { this, "APrimalStructureTurretBallista.bUseBallistaAimOffsetOnCharacter" }; }
    BitFieldValue<bool, unsigned __int32> bIsReloading() { return { this, "APrimalStructureTurretBallista.bIsReloading" }; }
    BitFieldValue<bool, unsigned __int32> bIsFiring() { return { this, "APrimalStructureTurretBallista.bIsFiring" }; }
    BitFieldValue<bool, unsigned __int32> bFireProjectileInvertX() { return { this, "APrimalStructureTurretBallista.bFireProjectileInvertX" }; }
    BitFieldValue<bool, unsigned __int32> bShowProjectileOnlyBasedOnAmmo() { return { this, "APrimalStructureTurretBallista.bShowProjectileOnlyBasedOnAmmo" }; }
    BitFieldValue<bool, unsigned __int32> bHideProjectileBone() { return { this, "APrimalStructureTurretBallista.bHideProjectileBone" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPCanFire() { return { this, "APrimalStructureTurretBallista.bUseBPCanFire" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPFiredWeapon() { return { this, "APrimalStructureTurretBallista.bUseBPFiredWeapon" }; }
    BitFieldValue<bool, unsigned __int32> bHideProjectileBoneOnAttachedModule() { return { this, "APrimalStructureTurretBallista.bHideProjectileBoneOnAttachedModule" }; }
    BitFieldValue<bool, unsigned __int32> bUseAmmoFromNearbyContainer() { return { this, "APrimalStructureTurretBallista.bUseAmmoFromNearbyContainer" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPGetDamageMultiplier() { return { this, "APrimalStructureTurretBallista.bUseBPGetDamageMultiplier" }; }

    // Functions

    // Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// static UClass* GetPrivateStaticClass();
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("APrimalStructureTurretBallista"); }
    // Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// static void StaticRegisterNativesAPrimalStructureTurretBallista();
    // Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// void ValidateGeneratedRepEnums(const TArray<FRepRecord, TSizedDefaultAllocator<32> >* ClassReps);
    void DoFire(int RandomSeed) { NativeCall<void, int>(this, "APrimalStructureTurretBallista.DoFire(int)", RandomSeed); }
    void TryFiring_Implementation(bool shouldFire) { NativeCall<void, bool>(this, "APrimalStructureTurretBallista.TryFiring_Implementation(bool)", shouldFire); }
    void ServerSwitchAmmoType_Implementation() { NativeCall<void>(this, "APrimalStructureTurretBallista.ServerSwitchAmmoType_Implementation()"); }
    void StartFire() { NativeCall<void>(this, "APrimalStructureTurretBallista.StartFire()"); }
    void StopFire() { NativeCall<void>(this, "APrimalStructureTurretBallista.StopFire()"); }
    void AnimNotifyCustomEvent(FName CustomEventName, USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, const UAnimNotify* AnimNotifyObject) { NativeCall<void, FName, USkeletalMeshComponent*, UAnimSequenceBase*, const UAnimNotify*>(this, "APrimalStructureTurretBallista.AnimNotifyCustomEvent(FName,USkeletalMeshComponent*,UAnimSequenceBase*,UAnimNotify*)", CustomEventName, MeshComp, Animation, AnimNotifyObject); }
    void PostInitializeComponents() { NativeCall<void>(this, "APrimalStructureTurretBallista.PostInitializeComponents()"); }
    void BeginPlay() { NativeCall<void>(this, "APrimalStructureTurretBallista.BeginPlay()"); }
    void GetLifetimeReplicatedProps(TArray<FLifetimeProperty, TSizedDefaultAllocator<32> >* OutLifetimeProps) { NativeCall<void, TArray<FLifetimeProperty, TSizedDefaultAllocator<32> >*>(this, "APrimalStructureTurretBallista.GetLifetimeReplicatedProps(TArray<FLifetimeProperty,TSizedDefaultAllocator<32>>&)", OutLifetimeProps); }
    bool NetExecCommand(FName CommandName, const FNetExecParams* ExecParams) { return NativeCall<bool, FName, const FNetExecParams*>(this, "APrimalStructureTurretBallista.NetExecCommand(FName,FNetExecParams&)", CommandName, ExecParams); }
    void Tick(float DeltaSeconds) { NativeCall<void, float>(this, "APrimalStructureTurretBallista.Tick(float)", DeltaSeconds); }
    bool CanUse(AShooterPlayerController* ForPC) { return NativeCall<bool, AShooterPlayerController*>(this, "APrimalStructureTurretBallista.CanUse(AShooterPlayerController*)", ForPC); }
    void Control(AShooterCharacter* ShooterCharacter, int SeatNumber, bool bLockedToSeat) { NativeCall<void, AShooterCharacter*, int, bool>(this, "APrimalStructureTurretBallista.Control(AShooterCharacter*,int,bool)", ShooterCharacter, SeatNumber, bLockedToSeat); }
    void Release(AShooterCharacter* ShooterCharacter) { NativeCall<void, AShooterCharacter*>(this, "APrimalStructureTurretBallista.Release(AShooterCharacter*)", ShooterCharacter); }
    void SwitchAmmoType() { NativeCall<void>(this, "APrimalStructureTurretBallista.SwitchAmmoType()"); }
//     void OnRep_Loaded() { NativeCall<void>(this, "APrimalStructureTurretBallista.OnRep_Loaded()"); }
// FUNCTION MISSING: APrimalStructureTurretBallista.OnRep_Loaded()
    USkeletalMeshComponent* GetSkeletalMeshComponent() { return NativeCall<USkeletalMeshComponent*>(this, "APrimalStructureTurretBallista.GetSkeletalMeshComponent()"); }
    void PlayReloadAnimation() { NativeCall<void>(this, "APrimalStructureTurretBallista.PlayReloadAnimation()"); }
    bool CanFire() { return NativeCall<bool>(this, "APrimalStructureTurretBallista.CanFire()"); }
    bool CanReload() { return NativeCall<bool>(this, "APrimalStructureTurretBallista.CanReload()"); }
    void GetCameraLocationAndRotation(UE::Math::TVector<double>* Location, UE::Math::TRotator<double>* Rotation) { NativeCall<void, UE::Math::TVector<double>*, UE::Math::TRotator<double>*>(this, "APrimalStructureTurretBallista.GetCameraLocationAndRotation(UE::Math::TVector<double>&,UE::Math::TRotator<double>&)", Location, Rotation); }
    void UpdateAmmoCount(bool bIncludePlayerInventory, bool bIgnoreGetAmmoNearby) { NativeCall<void, bool, bool>(this, "APrimalStructureTurretBallista.UpdateAmmoCount(bool,bool)", bIncludePlayerInventory, bIgnoreGetAmmoNearby); }
    void NotifyItemRemoved(UPrimalItem* anItem) { NativeCall<void, UPrimalItem*>(this, "APrimalStructureTurretBallista.NotifyItemRemoved(UPrimalItem*)", anItem); }
    void NotifyItemAdded(UPrimalItem* anItem, bool bEquipItem) { NativeCall<void, UPrimalItem*, bool>(this, "APrimalStructureTurretBallista.NotifyItemAdded(UPrimalItem*,bool)", anItem, bEquipItem); }
    void NotifyItemQuantityUpdated(UPrimalItem* anItem, int amount) { NativeCall<void, UPrimalItem*, int>(this, "APrimalStructureTurretBallista.NotifyItemQuantityUpdated(UPrimalItem*,int)", anItem, amount); }
    void DoFireProjectile(UE::Math::TVector<double>* Origin, UE::Math::TVector<double>* ShootDir) { NativeCall<void, UE::Math::TVector<double>*, UE::Math::TVector<double>*>(this, "APrimalStructureTurretBallista.DoFireProjectile(UE::Math::TVector<double>,UE::Math::TVector<double>)", Origin, ShootDir); }
    void ClientsPlayFireAnim_Implementation() { NativeCall<void>(this, "APrimalStructureTurretBallista.ClientsPlayFireAnim_Implementation()"); }
    void ClientsFireProjectile_Implementation(UE::Math::TVector<double>* Origin, FVector_NetQuantizeNormal* ShootDir) { NativeCall<void, UE::Math::TVector<double>*, FVector_NetQuantizeNormal*>(this, "APrimalStructureTurretBallista.ClientsFireProjectile_Implementation(UE::Math::TVector<double>,FVector_NetQuantizeNormal)", Origin, ShootDir); }
    //TArray<FTooltipTextInfo, TSizedDefaultAllocator<32> >* GetTooltipStructureInfo(TArray<FTooltipTextInfo, TSizedDefaultAllocator<32> >* result, AShooterPlayerController* PlayerOwner) { return NativeCall<TArray<FTooltipTextInfo, TSizedDefaultAllocator<32> >*, TArray<FTooltipTextInfo, TSizedDefaultAllocator<32> >*, AShooterPlayerController*>(this, "APrimalStructureTurretBallista.GetTooltipStructureInfo(AShooterPlayerController*)", result, PlayerOwner); }
    void ShowProjectileMesh(bool Visible, bool bIsFromStartLoading) { NativeCall<void, bool, bool>(this, "APrimalStructureTurretBallista.ShowProjectileMesh(bool,bool)", Visible, bIsFromStartLoading); }
    void Demolish(APlayerController* ForPC, AActor* DamageCauser) { NativeCall<void, APlayerController*, AActor*>(this, "APrimalStructureTurretBallista.Demolish(APlayerController*,AActor*)", ForPC, DamageCauser); }
    bool CanDemolish() { return NativeCall<bool>(this, "APrimalStructureTurretBallista.CanDemolish()"); }
    bool Die(float KillingDamage, const FDamageEvent* DamageEvent, AController* Killer, AActor* DamageCauser) { return NativeCall<bool, float, const FDamageEvent*, AController*, AActor*>(this, "APrimalStructureTurretBallista.Die(float,FDamageEvent&,AController*,AActor*)", KillingDamage, DamageEvent, Killer, DamageCauser); }
    bool IsBallistaPenetratingWalls(__int16 a2) { return NativeCall<bool, __int16>(this, "APrimalStructureTurretBallista.IsBallistaPenetratingWalls()", a2); }
    FName* GetMuzzleFlashSocketName(FName* result) { return NativeCall<FName*, FName*>(this, "APrimalStructureTurretBallista.GetMuzzleFlashSocketName()", result); }
//     void GetShootingOriginAndDirection(UE::Math::TVector<double>* Origin, UE::Math::TVector<double>* Direction) { NativeCall<void, UE::Math::TVector<double>*, UE::Math::TVector<double>*>(this, "APrimalStructureTurretBallista.GetShootingOriginAndDirection(UE::Math::TVector<double>&,UE::Math::TVector<double>&)", Origin, Direction); }
// FUNCTION MISSING: APrimalStructureTurretBallista.GetShootingOriginAndDirection(UE::Math::TVector<double>&,UE::Math::TVector<double>&)
    void DealDamageOnServer(const FHitResult* Impact, const UE::Math::TVector<double>* ShootDir) { NativeCall<void, const FHitResult*, const UE::Math::TVector<double>*>(this, "APrimalStructureTurretBallista.DealDamageOnServer(FHitResult&,UE::Math::TVector<double>)", Impact, ShootDir); }
    void DealDamage(const FHitResult* Impact, const UE::Math::TVector<double>* ShootDir, int DamageAmount, TSubclassOf<UDamageType> DamageType, float Impulse) { NativeCall<void, const FHitResult*, const UE::Math::TVector<double>*, int, TSubclassOf<UDamageType>, float>(this, "APrimalStructureTurretBallista.DealDamage(FHitResult&,UE::Math::TVector<double>&,int,TSubclassOf<UDamageType>,float)", Impact, ShootDir, DamageAmount, DamageType, Impulse); }
    void WeaponTraceHits(TArray<FHitResult, TSizedDefaultAllocator<32> >* HitResults, const UE::Math::TVector<double>* StartTrace, const UE::Math::TVector<double>* EndTrace) { NativeCall<void, TArray<FHitResult, TSizedDefaultAllocator<32> >*, const UE::Math::TVector<double>*, const UE::Math::TVector<double>*>(this, "APrimalStructureTurretBallista.WeaponTraceHits(TArray<FHitResult,TSizedDefaultAllocator<32>>&,UE::Math::TVector<double>&,UE::Math::TVector<double>&)", HitResults, StartTrace, EndTrace); }
    int GetAmmoNearby(UClass* ForAmmoType) { return NativeCall<int, UClass*>(this, "APrimalStructureTurretBallista.GetAmmoNearby(UClass*)", ForAmmoType); }
    void SpawnTrailEffect(const UE::Math::TVector<double>* EndPoint) { NativeCall<void, const UE::Math::TVector<double>*>(this, "APrimalStructureTurretBallista.SpawnTrailEffect(UE::Math::TVector<double>&)", EndPoint); }
    int GetAmmoAmount(UClass* ForAmmoType, bool bIncludePlayerInventory) { return NativeCall<int, UClass*, bool>(this, "APrimalStructureTurretBallista.GetAmmoAmount(UClass*,bool)", ForAmmoType, bIncludePlayerInventory); }
    void ServerSetTargeting_Implementation(bool bTargeting) { NativeCall<void, bool>(this, "APrimalStructureTurretBallista.ServerSetTargeting_Implementation(bool)", bTargeting); }

	bool& bIsTryingToShootField() { return *GetNativePointerField<bool*>(this, "APrimalStructureTurretBallista.bIsTryingToShoot"); }
	bool& bIsTargetingField() { return *GetNativePointerField<bool*>(this, "APrimalStructureTurretBallista.bIsTargeting"); }
	bool& bIsLoadedField() { return *GetNativePointerField<bool*>(this, "APrimalStructureTurretBallista.bIsLoaded"); }
	bool& AimFromPlayerViewField() { return *GetNativePointerField<bool*>(this, "APrimalStructureTurretBallista.AimFromPlayerView"); }
	float& FireMaxDistanceToMuzzleFlashField() { return *GetNativePointerField<float*>(this, "APrimalStructureTurretBallista.FireMaxDistanceToMuzzleFlash"); }

	static UClass* StaticClass() { return AsaApi::ResolveClass("APrimalStructureTurretBallista"); }

	TWeakObjectPtr<APrimalBotCharacter, FWeakObjectPtr>& CurrSeatedBotField() { return *GetNativePointerField<TWeakObjectPtr<APrimalBotCharacter, FWeakObjectPtr>*>(this, "APrimalStructureTurretBallista.CurrSeatedBot"); }
	BitFieldValue<bool, unsigned char> bUseBallistaAimOffsetOnCharacter_StandingTurret() { return { this, "APrimalStructureTurretBallista.bUseBallistaAimOffsetOnCharacter_StandingTurret"}; }
	BitFieldValue<bool, unsigned char> bUseRiderSocket() { return { this, "APrimalStructureTurretBallista.bUseRiderSocket"}; }
	BitFieldValue<bool, unsigned char> bShowProjectileCount() { return { this, "APrimalStructureTurretBallista.bShowProjectileCount"}; }
	BitFieldValue<bool, unsigned char> bInfiniteAmmo() { return { this, "APrimalStructureTurretBallista.bInfiniteAmmo"}; }
	BitFieldValue<bool, unsigned char> bForceBallistaToUseAimOffsets() { return { this, "APrimalStructureTurretBallista.bForceBallistaToUseAimOffsets"}; }
	BitFieldValue<bool, unsigned char> bHasSeatedBot() { return { this, "APrimalStructureTurretBallista.bHasSeatedBot"}; }
	void PlayFireAnimation() { NativeCall<void>(this, "APrimalStructureTurretBallista.PlayFireAnimation()"); }
	void BPSetViewYaw(float NewYaw) { NativeCall<void, float>(this, "APrimalStructureTurretBallista.BPSetViewYaw(float)", NewYaw); }
	UE::Math::TRotator<double>* GetMuzzleRotation(UE::Math::TRotator<double>* result) { return NativeCall<UE::Math::TRotator<double>*, UE::Math::TRotator<double>*>(this, "APrimalStructureTurretBallista.GetMuzzleRotation()", result); }
	UE::Math::TVector<double>* GetMuzzleLocation(UE::Math::TVector<double>* result) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*>(this, "APrimalStructureTurretBallista.GetMuzzleLocation()", result); }
	float BPGetDamageMultiplier() { return NativeCall<float>(this, "APrimalStructureTurretBallista.BPGetDamageMultiplier()"); }
	void BPSetViewPitch(float NewPitch) { NativeCall<void, float>(this, "APrimalStructureTurretBallista.BPSetViewPitch(float)", NewPitch); }
	void TickSeatedBot(float DeltaSeconds) { NativeCall<void, float>(this, "APrimalStructureTurretBallista.TickSeatedBot(float)", DeltaSeconds); }
	void ClientsPlayFireAnim() { NativeCall<void>(this, "APrimalStructureTurretBallista.ClientsPlayFireAnim()"); }
	UE::Math::TVector<double>* GetFireProjectileDirection(UE::Math::TVector<double>* result) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*>(this, "APrimalStructureTurretBallista.GetFireProjectileDirection()", result); }
	USceneComponent* FindComponentByName(FName ComponentName) { return NativeCall<USceneComponent*, FName>(this, "APrimalStructureTurretBallista.FindComponentByName(FName)", ComponentName); }
	void TryFiring(bool shouldFire) { NativeCall<void, bool>(this, "APrimalStructureTurretBallista.TryFiring(bool)", shouldFire); }
	void BotRelease(APrimalBotCharacter* ReleasedBot, int AtSeatNumber) { NativeCall<void, APrimalBotCharacter*, int>(this, "APrimalStructureTurretBallista.BotRelease(APrimalBotCharacter*,int)", ReleasedBot, AtSeatNumber); }
	UE::Math::TVector<double>* GetAttackingFromLocation(UE::Math::TVector<double>* result) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*>(this, "APrimalStructureTurretBallista.GetAttackingFromLocation()", result); }
	void Fire(UE::Math::TVector<double>* FireLocation, UE::Math::TVector<double>* FireDirection) { if (!FireLocation) throw std::invalid_argument("Null native value parameter"); if (!FireDirection) throw std::invalid_argument("Null native value parameter"); return NativeCall<void, UE :: Math :: TVector < double >, UE :: Math :: TVector < double >>(this, "APrimalStructureTurretBallista.Fire(UE::Math::TVector<double>,UE::Math::TVector<double>)", *FireLocation, *FireDirection); }
	void PlayEmptySound() { NativeCall<void>(this, "APrimalStructureTurretBallista.PlayEmptySound()"); }
	UE::Math::TVector<double>* GetFireProjectileDirection_Implementation(UE::Math::TVector<double>* result) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*>(this, "APrimalStructureTurretBallista.GetFireProjectileDirection_Implementation()", result); }
	bool BPCanFire() { return NativeCall<bool>(this, "APrimalStructureTurretBallista.BPCanFire()"); }
	void DrawHUD(AShooterHUD* HUD) { NativeCall<void, AShooterHUD*>(this, "APrimalStructureTurretBallista.DrawHUD(AShooterHUD*)", HUD); }
	void ServerSetTargeting(bool bTargeting) { NativeCall<void, bool>(this, "APrimalStructureTurretBallista.ServerSetTargeting(bool)", bTargeting); }
	void BPFiredWeapon() { NativeCall<void>(this, "APrimalStructureTurretBallista.BPFiredWeapon()"); }
	void Unstasis() { NativeCall<void>(this, "APrimalStructureTurretBallista.Unstasis()"); }
	UE::Math::TRotator<double>* GetAimRotationForSeatedBot_Implementation(UE::Math::TRotator<double>* result, APrimalBotCharacter* SeatedBot) { return NativeCall<UE::Math::TRotator<double>*, UE::Math::TRotator<double>*, APrimalBotCharacter*>(this, "APrimalStructureTurretBallista.GetAimRotationForSeatedBot_Implementation(APrimalBotCharacter*)", result, SeatedBot); }
	void ServerSwitchAmmoType() { NativeCall<void>(this, "APrimalStructureTurretBallista.ServerSwitchAmmoType()"); }
	void OnRep_IsShooting() { NativeCall<void>(this, "APrimalStructureTurretBallista.OnRep_IsShooting()"); }
	void BotControl(APrimalBotCharacter* SeatedBot, int AtSeatNumber) { NativeCall<void, APrimalBotCharacter*, int>(this, "APrimalStructureTurretBallista.BotControl(APrimalBotCharacter*,int)", SeatedBot, AtSeatNumber); }
	bool IsPrimalStructureTurretBallista() { return NativeCall<bool>(this, "APrimalStructureTurretBallista.IsPrimalStructureTurretBallista()"); }
	UE::Math::TRotator<double>* GetAimRotationForSeatedBot(UE::Math::TRotator<double>* result, APrimalBotCharacter* SeatedBot) { return NativeCall<UE::Math::TRotator<double>*, UE::Math::TRotator<double>*, APrimalBotCharacter*>(this, "APrimalStructureTurretBallista.GetAimRotationForSeatedBot(APrimalBotCharacter*)", result, SeatedBot); }
};