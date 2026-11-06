#pragma once
#include "BulkForward.h"


struct APrimalStructureTurret : APrimalStructureItemContainer
{
    // Fields

    TWeakObjectPtr<AActor>& WeakTargetField() { return *GetNativePointerField<TWeakObjectPtr<AActor>*>(this, "APrimalStructureTurret.WeakTarget"); }
    TSubclassOf<UPrimalItem>& AmmoItemTemplateField() { return *GetNativePointerField<TSubclassOf<UPrimalItem>*>(this, "APrimalStructureTurret.AmmoItemTemplate"); }
    TSubclassOf<APrimalEmitterSpawnable>& MuzzleFlashEmitterField() { return *GetNativePointerField<TSubclassOf<APrimalEmitterSpawnable>*>(this, "APrimalStructureTurret.MuzzleFlashEmitter"); }
    float& FireIntervalField() { return *GetNativePointerField<float*>(this, "APrimalStructureTurret.FireInterval"); }
    long double& LastFireTimeField() { return *GetNativePointerField<long double*>(this, "APrimalStructureTurret.LastFireTime"); }
    long double& LastLongReloadStartTimeField() { return *GetNativePointerField<long double*>(this, "APrimalStructureTurret.LastLongReloadStartTime"); }
    float& MaxFireYawDeltaField() { return *GetNativePointerField<float*>(this, "APrimalStructureTurret.MaxFireYawDelta"); }
    float& MaxFirePitchDeltaField() { return *GetNativePointerField<float*>(this, "APrimalStructureTurret.MaxFirePitchDelta"); }
    UE::Math::TVector<double>& TargetingLocOffsetField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "APrimalStructureTurret.TargetingLocOffset"); }
    float& TargetingRotationInterpSpeedField() { return *GetNativePointerField<float*>(this, "APrimalStructureTurret.TargetingRotationInterpSpeed"); }
    float& NonTargetingRotationInterpSpeedField() { return *GetNativePointerField<float*>(this, "APrimalStructureTurret.NonTargetingRotationInterpSpeed"); }
    FieldArray<float, 3> TargetingRangesField() { return { this, "APrimalStructureTurret.TargetingRanges" }; }
    UE::Math::TVector<double>& TargetingTraceOffsetField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "APrimalStructureTurret.TargetingTraceOffset"); }
    TSubclassOf<UDamageType>& FireDamageTypeField() { return *GetNativePointerField<TSubclassOf<UDamageType>*>(this, "APrimalStructureTurret.FireDamageType"); }
    float& FireDamageAmountField() { return *GetNativePointerField<float*>(this, "APrimalStructureTurret.FireDamageAmount"); }
    float& FireDamageImpulseField() { return *GetNativePointerField<float*>(this, "APrimalStructureTurret.FireDamageImpulse"); }
    UParticleSystem*& TrailFXField() { return *GetNativePointerField<UParticleSystem**>(this, "APrimalStructureTurret.TrailFX"); }
    UE::Math::TRotator<double>& TurretAimRotOffsetField() { return *GetNativePointerField<UE::Math::TRotator<double>*>(this, "APrimalStructureTurret.TurretAimRotOffset"); }
    UE::Math::TVector<double>& AimTargetLocOffsetField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "APrimalStructureTurret.AimTargetLocOffset"); }
    UE::Math::TVector<double>& PlayerProneTargetOffsetField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "APrimalStructureTurret.PlayerProneTargetOffset"); }
    float& AimSpreadField() { return *GetNativePointerField<float*>(this, "APrimalStructureTurret.AimSpread"); }
    unsigned __int8& RangeSettingField() { return *GetNativePointerField<unsigned __int8*>(this, "APrimalStructureTurret.RangeSetting"); }
    unsigned __int8& WarningSettingField() { return *GetNativePointerField<unsigned __int8*>(this, "APrimalStructureTurret.WarningSetting"); }
    unsigned __int8& AISettingField() { return *GetNativePointerField<unsigned __int8*>(this, "APrimalStructureTurret.AISetting"); }
    int& MinTargetLevelField() { return *GetNativePointerField<int*>(this, "APrimalStructureTurret.MinTargetLevel"); }
    int& MaxTargetLevelField() { return *GetNativePointerField<int*>(this, "APrimalStructureTurret.MaxTargetLevel"); }
    TArray<TSubclassOf<APrimalDinoCharacter>, TSizedDefaultAllocator<32> >& DinoTargetListField() { return *GetNativePointerField<TArray<TSubclassOf<APrimalDinoCharacter>, TSizedDefaultAllocator<32> >*>(this, "APrimalStructureTurret.DinoTargetList"); }
    int& NumBulletsField() { return *GetNativePointerField<int*>(this, "APrimalStructureTurret.NumBullets"); }
    int& NumBulletsPerShotField() { return *GetNativePointerField<int*>(this, "APrimalStructureTurret.NumBulletsPerShot"); }
    int& LongAmmoReloadCDField() { return *GetNativePointerField<int*>(this, "APrimalStructureTurret.LongAmmoReloadCD"); }
    float& MaxAmmoContainerReloadPercentField() { return *GetNativePointerField<float*>(this, "APrimalStructureTurret.MaxAmmoContainerReloadPercent"); }
    float& AlwaysEnableFastTurretTargetingOverVelocityField() { return *GetNativePointerField<float*>(this, "APrimalStructureTurret.AlwaysEnableFastTurretTargetingOverVelocity"); }
    TSubclassOf<AShooterProjectile>& ProjectileClassField() { return *GetNativePointerField<TSubclassOf<AShooterProjectile>*>(this, "APrimalStructureTurret.ProjectileClass"); }
    float& WarningExpirationTimeField() { return *GetNativePointerField<float*>(this, "APrimalStructureTurret.WarningExpirationTime"); }
    TSubclassOf<APrimalEmitterSpawnable>& WarningEmitterShortField() { return *GetNativePointerField<TSubclassOf<APrimalEmitterSpawnable>*>(this, "APrimalStructureTurret.WarningEmitterShort"); }
    TSubclassOf<APrimalEmitterSpawnable>& WarningEmitterLongField() { return *GetNativePointerField<TSubclassOf<APrimalEmitterSpawnable>*>(this, "APrimalStructureTurret.WarningEmitterLong"); }
    float& BatteryIntervalFromActivationBeforeFiringField() { return *GetNativePointerField<float*>(this, "APrimalStructureTurret.BatteryIntervalFromActivationBeforeFiring"); }
    USkeletalMeshComponent*& MySkeletalMeshCompField() { return *GetNativePointerField<USkeletalMeshComponent**>(this, "APrimalStructureTurret.MySkeletalMeshComp"); }
    FTimerHandle& FinishWarningHandleField() { return *GetNativePointerField<FTimerHandle*>(this, "APrimalStructureTurret.FinishWarningHandle"); }
    UChildActorComponent*& MyChildEmitterTargetingEffectField() { return *GetNativePointerField<UChildActorComponent**>(this, "APrimalStructureTurret.MyChildEmitterTargetingEffect"); }
    UE::Math::TRotator<double>& DefaultTurretAimRotOffsetField() { return *GetNativePointerField<UE::Math::TRotator<double>*>(this, "APrimalStructureTurret.DefaultTurretAimRotOffset"); }
    UE::Math::TVector<double>& MuzzleLocOffsetField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "APrimalStructureTurret.MuzzleLocOffset"); }
    long double& LastWarningTimeField() { return *GetNativePointerField<long double*>(this, "APrimalStructureTurret.LastWarningTime"); }
    int& MagazineSizeField() { return *GetNativePointerField<int*>(this, "APrimalStructureTurret.MagazineSize"); }
    float& RangeToCheckForAmmoField() { return *GetNativePointerField<float*>(this, "APrimalStructureTurret.RangeToCheckForAmmo"); }
    float& AmmoBoxReloadCooldownField() { return *GetNativePointerField<float*>(this, "APrimalStructureTurret.AmmoBoxReloadCooldown"); }
    UStaticMeshComponent*& CopySettingsRangeMeshField() { return *GetNativePointerField<UStaticMeshComponent**>(this, "APrimalStructureTurret.CopySettingsRangeMesh"); }
    long double& LastCheckNearbyAmmoContainerTimeField() { return *GetNativePointerField<long double*>(this, "APrimalStructureTurret.LastCheckNearbyAmmoContainerTime"); }
    TObjectPtr<UTexture2D>& ShowCopySettingsVisualIconField() { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "APrimalStructureTurret.ShowCopySettingsVisualIcon"); }
    TObjectPtr<UTexture2D>& HideCopySettingsVisualIconField() { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "APrimalStructureTurret.HideCopySettingsVisualIcon"); }
    TObjectPtr<UTexture2D>& CopySettingsIconField() { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "APrimalStructureTurret.CopySettingsIcon"); }
    TObjectPtr<UTexture2D>& CopySettingsInRangeIconField() { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "APrimalStructureTurret.CopySettingsInRangeIcon"); }
    TObjectPtr<UTexture2D>& CopySettingsInRangeWithPinCodeIconField() { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "APrimalStructureTurret.CopySettingsInRangeWithPinCodeIcon"); }
    TObjectPtr<UTexture2D>& TargetingOptionsIconField() { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "APrimalStructureTurret.TargetingOptionsIcon"); }
    TArray<TObjectPtr<UTexture2D>, TSizedDefaultAllocator<32> >& RangeSettingIconsField() { return *GetNativePointerField<TArray<TObjectPtr<UTexture2D>, TSizedDefaultAllocator<32> >*>(this, "APrimalStructureTurret.RangeSettingIcons"); }
    TArray<TObjectPtr<UTexture2D>, TSizedDefaultAllocator<32> >& AISettingIconsField() { return *GetNativePointerField<TArray<TObjectPtr<UTexture2D>, TSizedDefaultAllocator<32> >*>(this, "APrimalStructureTurret.AISettingIcons"); }
    TArray<TObjectPtr<UTexture2D>, TSizedDefaultAllocator<32> >& WarningSettingIconsField() { return *GetNativePointerField<TArray<TObjectPtr<UTexture2D>, TSizedDefaultAllocator<32> >*>(this, "APrimalStructureTurret.WarningSettingIcons"); }
    TObjectPtr<UTexture2D>& InclusionListIconField() { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "APrimalStructureTurret.InclusionListIcon"); }
    TObjectPtr<UTexture2D>& ExclusionListIconField() { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "APrimalStructureTurret.ExclusionListIcon"); }
    TObjectPtr<UTexture2D>& AddCreatureToInclusionListIconField() { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "APrimalStructureTurret.AddCreatureToInclusionListIcon"); }
    TObjectPtr<UTexture2D>& RemoveCreatureFromInclusionListIconField() { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "APrimalStructureTurret.RemoveCreatureFromInclusionListIcon"); }
    TObjectPtr<UTexture2D>& AddCreatureToExclusionListIconField() { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "APrimalStructureTurret.AddCreatureToExclusionListIcon"); }
    TObjectPtr<UTexture2D>& RemoveCreatureFromExclusionListIconField() { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "APrimalStructureTurret.RemoveCreatureFromExclusionListIcon"); }
    float& FluidSimSplashStrengthField() { return *GetNativePointerField<float*>(this, "APrimalStructureTurret.FluidSimSplashStrength"); }
    UNiagaraSystem*& FluidSimSplashTemplateOverrideField() { return *GetNativePointerField<UNiagaraSystem**>(this, "APrimalStructureTurret.FluidSimSplashTemplateOverride"); }

    // Bitfields

    BitFieldValue<bool, unsigned __int32> bUseNoWarning() { return { this, "APrimalStructureTurret.bUseNoWarning" }; }
    BitFieldValue<bool, unsigned __int32> bUseLevelLimitsForTargeting() { return { this, "APrimalStructureTurret.bUseLevelLimitsForTargeting" }; }
    BitFieldValue<bool, unsigned __int32> bUseInclusionListTargeting() { return { this, "APrimalStructureTurret.bUseInclusionListTargeting" }; }
    BitFieldValue<bool, unsigned __int32> bUseNoAmmo() { return { this, "APrimalStructureTurret.bUseNoAmmo" }; }
    BitFieldValue<bool, unsigned __int32> bOnlyUseAmmoOnDamage() { return { this, "APrimalStructureTurret.bOnlyUseAmmoOnDamage" }; }
    BitFieldValue<bool, unsigned __int32> bHasOmniDirectionalFire() { return { this, "APrimalStructureTurret.bHasOmniDirectionalFire" }; }
    BitFieldValue<bool, unsigned __int32> bFireProjectiles() { return { this, "APrimalStructureTurret.bFireProjectiles" }; }
    BitFieldValue<bool, unsigned __int32> bClientFireProjectile() { return { this, "APrimalStructureTurret.bClientFireProjectile" }; }
    BitFieldValue<bool, unsigned __int32> bIsTargeting() { return { this, "APrimalStructureTurret.bIsTargeting" }; }
    BitFieldValue<bool, unsigned __int32> bInWaterOnlyTargetWater() { return { this, "APrimalStructureTurret.bInWaterOnlyTargetWater" }; }
    BitFieldValue<bool, unsigned __int32> bTurretIgnoreProjectiles() { return { this, "APrimalStructureTurret.bTurretIgnoreProjectiles" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPTurretPreventsTargeting() { return { this, "APrimalStructureTurret.bUseBPTurretPreventsTargeting" }; }
    BitFieldValue<bool, unsigned __int32> bAimIgnoreSockets() { return { this, "APrimalStructureTurret.bAimIgnoreSockets" }; }
    BitFieldValue<bool, unsigned __int32> bTurretIsDisabledTooManyNearbyTurrets() { return { this, "APrimalStructureTurret.bTurretIsDisabledTooManyNearbyTurrets" }; }
    BitFieldValue<bool, unsigned __int32> bUseAmmoFromNearbyContainer() { return { this, "APrimalStructureTurret.bUseAmmoFromNearbyContainer" }; }
    BitFieldValue<bool, unsigned __int32> bUseMaxInventoryForAmmoContainerReload() { return { this, "APrimalStructureTurret.bUseMaxInventoryForAmmoContainerReload" }; }
    BitFieldValue<bool, unsigned __int32> bIsTargetListInclusion() { return { this, "APrimalStructureTurret.bIsTargetListInclusion" }; }

    // Functions

    static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("APrimalStructureTurret"); }
    static UClass* StaticClass() { return AsaApi::ResolveClass("APrimalStructureTurret"); }
    // Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// static void StaticRegisterNativesAPrimalStructureTurret();
    // Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// void ValidateGeneratedRepEnums(const TArray<FRepRecord, TSizedDefaultAllocator<32> >* ClassReps);
    void DrawHUD(AShooterHUD* HUD) { NativeCall<void, AShooterHUD*>(this, "APrimalStructureTurret.DrawHUD(AShooterHUD*)", HUD); }
//     AActor* GetTarget() { return NativeCall<AActor*>(this, "APrimalStructureTurret.GetTarget()"); }
// FUNCTION MISSING: APrimalStructureTurret.GetTarget()
    void BeginPlay() { NativeCall<void>(this, "APrimalStructureTurret.BeginPlay()"); }
    void GetLifetimeReplicatedProps(TArray<FLifetimeProperty, TSizedDefaultAllocator<32> >* OutLifetimeProps) { NativeCall<void, TArray<FLifetimeProperty, TSizedDefaultAllocator<32> >*>(this, "APrimalStructureTurret.GetLifetimeReplicatedProps(TArray<FLifetimeProperty,TSizedDefaultAllocator<32>>&)", OutLifetimeProps); }
    AActor* FindTarget(bool* bTargetsInRange) { return NativeCall<AActor*, bool*>(this, "APrimalStructureTurret.FindTarget(bool*)", bTargetsInRange); }
//     void SetTarget(AActor* aTarget) { NativeCall<void, AActor*>(this, "APrimalStructureTurret.SetTarget(AActor*)", aTarget); }
// FUNCTION MISSING: APrimalStructureTurret.SetTarget(AActor*)
    void NetMultiUpdateTarget_Implementation(AActor* pNewTarget, long double NewLastFireTime) { NativeCall<void, AActor*, long double>(this, "APrimalStructureTurret.NetMultiUpdateTarget_Implementation(AActor*,double)", pNewTarget, NewLastFireTime); }
    //TArray<FTooltipTextInfo, TSizedDefaultAllocator<32> >* GetTooltipStructureInfo(TArray<FTooltipTextInfo, TSizedDefaultAllocator<32> >* result, AShooterPlayerController* PlayerOwner) { return NativeCall<TArray<FTooltipTextInfo, TSizedDefaultAllocator<32> >*, TArray<FTooltipTextInfo, TSizedDefaultAllocator<32> >*, AShooterPlayerController*>(this, "APrimalStructureTurret.GetTooltipStructureInfo(AShooterPlayerController*)", result, PlayerOwner); }
    void WeaponTraceHits(TArray<FHitResult, TSizedDefaultAllocator<32> >* HitResults, const UE::Math::TVector<double>* StartTrace, const UE::Math::TVector<double>* EndTrace) { NativeCall<void, TArray<FHitResult, TSizedDefaultAllocator<32> >*, const UE::Math::TVector<double>*, const UE::Math::TVector<double>*>(this, "APrimalStructureTurret.WeaponTraceHits(TArray<FHitResult,TSizedDefaultAllocator<32>>&,UE::Math::TVector<double>&,UE::Math::TVector<double>&)", HitResults, StartTrace, EndTrace); }
    void GetAmmoNearby(UClass** FoundAmmoItemType, bool bAlreadyTriedFindTargetThisFrame) { NativeCall<void, UClass**, bool>(this, "APrimalStructureTurret.GetAmmoNearby(UClass**,bool)", FoundAmmoItemType, bAlreadyTriedFindTargetThisFrame); }
    bool NetExecCommand(FName CommandName, const FNetExecParams* ExecParams) { return NativeCall<bool, FName, const FNetExecParams*>(this, "APrimalStructureTurret.NetExecCommand(FName,FNetExecParams&)", CommandName, ExecParams); }
    void DoFire(int RandomSeed) { NativeCall<void, int>(this, "APrimalStructureTurret.DoFire(int)", RandomSeed); }
    void DoFireProjectile(UE::Math::TVector<double>* Origin, UE::Math::TVector<double>* ShootDir) { NativeCall<void, UE::Math::TVector<double>*, UE::Math::TVector<double>*>(this, "APrimalStructureTurret.DoFireProjectile(UE::Math::TVector<double>,UE::Math::TVector<double>)", Origin, ShootDir); }
    void ClientsFireProjectile_Implementation(UE::Math::TVector<double>* Origin, FVector_NetQuantizeNormal* ShootDir) { NativeCall<void, UE::Math::TVector<double>*, FVector_NetQuantizeNormal*>(this, "APrimalStructureTurret.ClientsFireProjectile_Implementation(UE::Math::TVector<double>,FVector_NetQuantizeNormal)", Origin, ShootDir); }
    void SpawnTrailEffect(const UE::Math::TVector<double>* EndPoint) { NativeCall<void, const UE::Math::TVector<double>*>(this, "APrimalStructureTurret.SpawnTrailEffect(UE::Math::TVector<double>&)", EndPoint); }
    bool ShouldDealDamage(AActor* TestActor) { return NativeCall<bool, AActor*>(this, "APrimalStructureTurret.ShouldDealDamage(AActor*)", TestActor); }
    void DealDamage(const FHitResult* Impact, const UE::Math::TVector<double>* ShootDir, int DamageAmount, TSubclassOf<UDamageType> DamageType, float Impulse) { NativeCall<void, const FHitResult*, const UE::Math::TVector<double>*, int, TSubclassOf<UDamageType>, float>(this, "APrimalStructureTurret.DealDamage(FHitResult&,UE::Math::TVector<double>&,int,TSubclassOf<UDamageType>,float)", Impact, ShootDir, DamageAmount, DamageType, Impulse); }
    void StartWarning() { NativeCall<void>(this, "APrimalStructureTurret.StartWarning()"); }
    void FinishWarning() { NativeCall<void>(this, "APrimalStructureTurret.FinishWarning()"); }
    void Tick(float DeltaSeconds) { NativeCall<void, float>(this, "APrimalStructureTurret.Tick(float)", DeltaSeconds); }
    bool IsValidToFire() { return NativeCall<bool>(this, "APrimalStructureTurret.IsValidToFire()"); }
    FName* GetMuzzleFlashSocketName(FName* result) { return NativeCall<FName*, FName*>(this, "APrimalStructureTurret.GetMuzzleFlashSocketName()", result); }
    void GetMultiUseEntries(APlayerController* ForPC, TArray<FMultiUseEntry, TSizedDefaultAllocator<32> >* MultiUseEntries, int hitBodyIndex) { NativeCall<void, APlayerController*, TArray<FMultiUseEntry, TSizedDefaultAllocator<32> >*, int>(this, "APrimalStructureTurret.GetMultiUseEntries(APlayerController*,TArray<FMultiUseEntry,TSizedDefaultAllocator<32>>&,int)", ForPC, MultiUseEntries, hitBodyIndex); }
    bool TryMultiUse(APlayerController* ForPC, int UseIndex, int hitBodyIndex) { return NativeCall<bool, APlayerController*, int, int>(this, "APrimalStructureTurret.TryMultiUse(APlayerController*,int,int)", ForPC, UseIndex, hitBodyIndex); }
    void ClientMultiUse(APlayerController* ForPC, int UseIndex, int hitBodyIndex) { NativeCall<void, APlayerController*, int, int>(this, "APrimalStructureTurret.ClientMultiUse(APlayerController*,int,int)", ForPC, UseIndex, hitBodyIndex); }
    void NotifyItemRemoved(UPrimalItem* anItem) { NativeCall<void, UPrimalItem*>(this, "APrimalStructureTurret.NotifyItemRemoved(UPrimalItem*)", anItem); }
    void NotifyItemAdded(UPrimalItem* anItem, bool bEquipItem) { NativeCall<void, UPrimalItem*, bool>(this, "APrimalStructureTurret.NotifyItemAdded(UPrimalItem*,bool)", anItem, bEquipItem); }
    void NotifyItemQuantityUpdated(UPrimalItem* anItem, int amount) { NativeCall<void, UPrimalItem*, int>(this, "APrimalStructureTurret.NotifyItemQuantityUpdated(UPrimalItem*,int)", anItem, amount); }
    void UpdateNumBullets() { NativeCall<void>(this, "APrimalStructureTurret.UpdateNumBullets()"); }
    void PreInitializeComponents() { NativeCall<void>(this, "APrimalStructureTurret.PreInitializeComponents()"); }
    void Stasis() { NativeCall<void>(this, "APrimalStructureTurret.Stasis()"); }
    void Unstasis() { NativeCall<void>(this, "APrimalStructureTurret.Unstasis()"); }
    void UpdatedTargeting() { NativeCall<void>(this, "APrimalStructureTurret.UpdatedTargeting()"); }
    bool CanFire() { return NativeCall<bool>(this, "APrimalStructureTurret.CanFire()"); }
    FName* GetTargetAltAimSocket(FName* result, APrimalCharacter* ForTarget) { return NativeCall<FName*, FName*, APrimalCharacter*>(this, "APrimalStructureTurret.GetTargetAltAimSocket(APrimalCharacter*)", result, ForTarget); }
    USkeletalMeshComponent* GetSkeletalMeshComponent() { return NativeCall<USkeletalMeshComponent*>(this, "APrimalStructureTurret.GetSkeletalMeshComponent()"); }
    bool UseTurretFastTargeting(bool bCheckFastTargetingAutoEnabled) { return NativeCall<bool, bool>(this, "APrimalStructureTurret.UseTurretFastTargeting(bool)", bCheckFastTargetingAutoEnabled); }
    void ConsumeAmmo() { NativeCall<void>(this, "APrimalStructureTurret.ConsumeAmmo()"); }
    void CopySettingsToTurrentsInRange(APlayerController* ForPC, int PinCode) { NativeCall<void, APlayerController*, int>(this, "APrimalStructureTurret.CopySettingsToTurrentsInRange(APlayerController*,int)", ForPC, PinCode); }
    void SetPinToTurrentsInRange(APlayerController* ForPC, int PinCode) { NativeCall<void, APlayerController*, int>(this, "APrimalStructureTurret.SetPinToTurrentsInRange(APlayerController*,int)", ForPC, PinCode); }
    void ToggleCopySettingsVisualRange() { NativeCall<void>(this, "APrimalStructureTurret.ToggleCopySettingsVisualRange()"); }
    bool ApplyPinCode(AShooterPlayerController* ForPC, int appledPinCode, bool bIsSetting, int TheCustomIndex) { return NativeCall<bool, AShooterPlayerController*, int, bool, int>(this, "APrimalStructureTurret.ApplyPinCode(AShooterPlayerController*,int,bool,int)", ForPC, appledPinCode, bIsSetting, TheCustomIndex); }
    bool GetHasNearbyAmmoContainer() { return NativeCall<bool>(this, "APrimalStructureTurret.GetHasNearbyAmmoContainer()"); }

	double& LastFindTargetTimeField() { return *GetNativePointerField<double*>(this, "APrimalStructureTurret.LastFindTargetTime"); }
	bool& bWarnedField() { return *GetNativePointerField<bool*>(this, "APrimalStructureTurret.bWarned"); }
	bool& bHasNearbyAmmoContainerField() { return *GetNativePointerField<bool*>(this, "APrimalStructureTurret.bHasNearbyAmmoContainer"); }

	FTimerHandle& PerformFullTraceTimerHandleField() { return *GetNativePointerField<FTimerHandle*>(this, "APrimalStructureTurret.PerformFullTraceTimerHandle"); }
	USkeletalMeshComponent*& MySkinSkeletalMeshCompField() { return *GetNativePointerField<USkeletalMeshComponent**>(this, "APrimalStructureTurret.MySkinSkeletalMeshComp"); }
	bool BPCopyCustomSettingsFromTurret(APrimalStructureTurret* FromTurret) { return NativeCall<bool, APrimalStructureTurret*>(this, "APrimalStructureTurret.BPCopyCustomSettingsFromTurret(APrimalStructureTurret*)", FromTurret); }
	AActor* FindTargetStaggered(bool* bAttempted, bool* bTargetsInRange) { return NativeCall<AActor*, bool*, bool*>(this, "APrimalStructureTurret.FindTargetStaggered(bool*,bool*)", bAttempted, bTargetsInRange); }
	void NetMultiUpdateTarget(AActor* pNewTarget, double NewLastFireTime) { NativeCall<void, AActor*, double>(this, "APrimalStructureTurret.NetMultiUpdateTarget(AActor*,double)", pNewTarget, NewLastFireTime); }
	void SpawnImpactEffects(const FHitResult& Impact, const UE::Math::TVector<double>& ShootDir) { NativeCall<void, const FHitResult&, const UE::Math::TVector<double>&>(this, "APrimalStructureTurret.SpawnImpactEffects(FHitResult&,UE::Math::TVector<double>&)", Impact, ShootDir); }
	bool IsPrimalStructureTurret() { return NativeCall<bool>(this, "APrimalStructureTurret.IsPrimalStructureTurret()"); }
	void PlayShootAnim() { NativeCall<void>(this, "APrimalStructureTurret.PlayShootAnim()"); }
	UE::Math::TVector<double>* GetTargetAimAtLocation(UE::Math::TVector<double>* result, AActor* ForTarget) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*, AActor*>(this, "APrimalStructureTurret.GetTargetAimAtLocation(AActor*)", result, ForTarget); }
	UE::Math::TVector<double>* GetTargetFireAtLocation(UE::Math::TVector<double>* result, APrimalCharacter* ForTarget) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*, APrimalCharacter*>(this, "APrimalStructureTurret.GetTargetFireAtLocation(APrimalCharacter*)", result, ForTarget); }
	float GetFireInterval() { return NativeCall<float>(this, "APrimalStructureTurret.GetFireInterval()"); }
	void PerformFullTrace() { NativeCall<void>(this, "APrimalStructureTurret.PerformFullTrace()"); }
	UE::Math::TVector<double>* GetAttackingFromLocation(UE::Math::TVector<double>* result) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*>(this, "APrimalStructureTurret.GetAttackingFromLocation()", result); }
	UE::Math::TVector<double>* GetMuzzleLocation(UE::Math::TVector<double>* result) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*>(this, "APrimalStructureTurret.GetMuzzleLocation()", result); }
	bool BPTurretPreventsTargeting(APrimalCharacter* PotentialTarget) { return NativeCall<bool, APrimalCharacter*>(this, "APrimalStructureTurret.BPTurretPreventsTargeting(APrimalCharacter*)", PotentialTarget); }
	bool ShouldForceTargetRidingDinoNotRider() { return NativeCall<bool>(this, "APrimalStructureTurret.ShouldForceTargetRidingDinoNotRider()"); }
	void SelectAttackOrigin(const UE::Math::TVector<double>& TargetPosition) { NativeCall<void, const UE::Math::TVector<double>&>(this, "APrimalStructureTurret.SelectAttackOrigin(UE::Math::TVector<double>&)", TargetPosition); }
	UE::Math::TRotator<double>* GetMuzzleRotation(UE::Math::TRotator<double>* result) { return NativeCall<UE::Math::TRotator<double>*, UE::Math::TRotator<double>*>(this, "APrimalStructureTurret.GetMuzzleRotation()", result); }
};