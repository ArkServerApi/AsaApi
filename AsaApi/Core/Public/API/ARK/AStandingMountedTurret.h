#pragma once
#include "BulkForward.h"
#include "GameplayForward.h"
#include "APrimalStructureSeating.h"

struct AStandingMountedTurret : APrimalStructureSeating
{
public:
	AStandingMountedTurret() = delete;
	~AStandingMountedTurret() = delete;
	AStandingMountedTurret(const AStandingMountedTurret&) = delete;
	AStandingMountedTurret& operator=(const AStandingMountedTurret&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("AStandingMountedTurret"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("AStandingMountedTurret"); }

	float& ShootingDamageAmountField() { return *GetNativePointerField<float*>(this, "AStandingMountedTurret.ShootingDamageAmount"); }
	float& ShootingDamageImpulseField() { return *GetNativePointerField<float*>(this, "AStandingMountedTurret.ShootingDamageImpulse"); }
	float& ShootingAimSpreadField() { return *GetNativePointerField<float*>(this, "AStandingMountedTurret.ShootingAimSpread"); }
	float& ShootingFireIntervalField() { return *GetNativePointerField<float*>(this, "AStandingMountedTurret.ShootingFireInterval"); }
	double& LastShootingFireTimeField() { return *GetNativePointerField<double*>(this, "AStandingMountedTurret.LastShootingFireTime"); }
	bool& bIsTryingToShootField() { return *GetNativePointerField<bool*>(this, "AStandingMountedTurret.bIsTryingToShoot"); }
	bool& bIsShootingField() { return *GetNativePointerField<bool*>(this, "AStandingMountedTurret.bIsShooting"); }
	bool& bIsTargetingField() { return *GetNativePointerField<bool*>(this, "AStandingMountedTurret.bIsTargeting"); }
	bool& bQueuedShotField() { return *GetNativePointerField<bool*>(this, "AStandingMountedTurret.bQueuedShot"); }
	float& YawViewRotationField() { return *GetNativePointerField<float*>(this, "AStandingMountedTurret.YawViewRotation"); }
	float& OldYawViewRotationField() { return *GetNativePointerField<float*>(this, "AStandingMountedTurret.OldYawViewRotation"); }
	float& PitchViewRotationField() { return *GetNativePointerField<float*>(this, "AStandingMountedTurret.PitchViewRotation"); }
	float& RotateSpeedThresholdField() { return *GetNativePointerField<float*>(this, "AStandingMountedTurret.RotateSpeedThreshold"); }
	float& RotateSoundFadeInSpeedField() { return *GetNativePointerField<float*>(this, "AStandingMountedTurret.RotateSoundFadeInSpeed"); }
	float& RotateSoundFadeOutSpeedField() { return *GetNativePointerField<float*>(this, "AStandingMountedTurret.RotateSoundFadeOutSpeed"); }
	float& RotateSoundMinVolumeField() { return *GetNativePointerField<float*>(this, "AStandingMountedTurret.RotateSoundMinVolume"); }
	float& RotateSoundMaxVolumeField() { return *GetNativePointerField<float*>(this, "AStandingMountedTurret.RotateSoundMaxVolume"); }
	float& TPVCameraPitchMinField() { return *GetNativePointerField<float*>(this, "AStandingMountedTurret.TPVCameraPitchMin"); }
	float& TPVCameraPitchMaxField() { return *GetNativePointerField<float*>(this, "AStandingMountedTurret.TPVCameraPitchMax"); }
	float& TPVCameraYawMinField() { return *GetNativePointerField<float*>(this, "AStandingMountedTurret.TPVCameraYawMin"); }
	float& TPVCameraYawMaxField() { return *GetNativePointerField<float*>(this, "AStandingMountedTurret.TPVCameraYawMax"); }
	bool& bIsLoadedField() { return *GetNativePointerField<bool*>(this, "AStandingMountedTurret.bIsLoaded"); }
	float& ControllerRiddingYawField() { return *GetNativePointerField<float*>(this, "AStandingMountedTurret.ControllerRiddingYaw"); }
	unsigned char& bQueueReloadingAnimationField() { return *GetNativePointerField<unsigned char*>(this, "AStandingMountedTurret.bQueueReloadingAnimation"); }
	int& AmmoCountField() { return *GetNativePointerField<int*>(this, "AStandingMountedTurret.AmmoCount"); }
	int& MagazineSizeField() { return *GetNativePointerField<int*>(this, "AStandingMountedTurret.MagazineSize"); }
	float& RangeToCheckForAmmoField() { return *GetNativePointerField<float*>(this, "AStandingMountedTurret.RangeToCheckForAmmo"); }
	float& DefaultAmmoReloadAnimSpeedField() { return *GetNativePointerField<float*>(this, "AStandingMountedTurret.DefaultAmmoReloadAnimSpeed"); }
	float& HealthCostPerShotField() { return *GetNativePointerField<float*>(this, "AStandingMountedTurret.HealthCostPerShot"); }
	float& MinimumHealthPercentToShootField() { return *GetNativePointerField<float*>(this, "AStandingMountedTurret.MinimumHealthPercentToShoot"); }
	float& InstantFireTraceRangeField() { return *GetNativePointerField<float*>(this, "AStandingMountedTurret.InstantFireTraceRange"); }
	bool& AimFromPlayerViewField() { return *GetNativePointerField<bool*>(this, "AStandingMountedTurret.AimFromPlayerView"); }
	double& lastFireTimeField() { return *GetNativePointerField<double*>(this, "AStandingMountedTurret.lastFireTime"); }
	float& FluidSimSplashStrengthField() { return *GetNativePointerField<float*>(this, "AStandingMountedTurret.FluidSimSplashStrength"); }
	float& FireMaxDistanceToMuzzleFlashField() { return *GetNativePointerField<float*>(this, "AStandingMountedTurret.FireMaxDistanceToMuzzleFlash"); }
	int& NumTracesPerShotField() { return *GetNativePointerField<int*>(this, "AStandingMountedTurret.NumTracesPerShot"); }
	float& WeaponSpreadField() { return *GetNativePointerField<float*>(this, "AStandingMountedTurret.WeaponSpread"); }
	float& CurrentFiringSpreadField() { return *GetNativePointerField<float*>(this, "AStandingMountedTurret.CurrentFiringSpread"); }
	float& FiringSpreadMaxField() { return *GetNativePointerField<float*>(this, "AStandingMountedTurret.FiringSpreadMax"); }
	float& FiringSpreadIncrementField() { return *GetNativePointerField<float*>(this, "AStandingMountedTurret.FiringSpreadIncrement"); }
	bool& bExplodeOnInstantHitField() { return *GetNativePointerField<bool*>(this, "AStandingMountedTurret.bExplodeOnInstantHit"); }
	float& ExplosionDamageField() { return *GetNativePointerField<float*>(this, "AStandingMountedTurret.ExplosionDamage"); }
	float& ExplosionRadiusField() { return *GetNativePointerField<float*>(this, "AStandingMountedTurret.ExplosionRadius"); }
	float& ExplosionImpulseField() { return *GetNativePointerField<float*>(this, "AStandingMountedTurret.ExplosionImpulse"); }
	bool& bDoFullRadialDamageField() { return *GetNativePointerField<bool*>(this, "AStandingMountedTurret.bDoFullRadialDamage"); }
	bool& bSpawnExplosionTemplateOnClientField() { return *GetNativePointerField<bool*>(this, "AStandingMountedTurret.bSpawnExplosionTemplateOnClient"); }
	bool& bExplosionOrientUpwardsField() { return *GetNativePointerField<bool*>(this, "AStandingMountedTurret.bExplosionOrientUpwards"); }
	float& NudgedImpactDistanceField() { return *GetNativePointerField<float*>(this, "AStandingMountedTurret.NudgedImpactDistance"); }
	bool& bUseLockOnField() { return *GetNativePointerField<bool*>(this, "AStandingMountedTurret.bUseLockOn"); }
	float& LockOnMaxTraceDistanceField() { return *GetNativePointerField<float*>(this, "AStandingMountedTurret.LockOnMaxTraceDistance"); }
	double& LockOnTimeField() { return *GetNativePointerField<double*>(this, "AStandingMountedTurret.LockOnTime"); }
	int& MaxLockOnTargetsField() { return *GetNativePointerField<int*>(this, "AStandingMountedTurret.MaxLockOnTargets"); }
	float& LockOnYScreenPercentageField() { return *GetNativePointerField<float*>(this, "AStandingMountedTurret.LockOnYScreenPercentage"); }
	float& TimeBetweenLockOnsField() { return *GetNativePointerField<float*>(this, "AStandingMountedTurret.TimeBetweenLockOns"); }
	float& TimeBetweenBarrageShotsField() { return *GetNativePointerField<float*>(this, "AStandingMountedTurret.TimeBetweenBarrageShots"); }
	double& CurrentLockOnTimeField() { return *GetNativePointerField<double*>(this, "AStandingMountedTurret.CurrentLockOnTime"); }
	double& LastLockOnTimeField() { return *GetNativePointerField<double*>(this, "AStandingMountedTurret.LastLockOnTime"); }
	double& LastBarrageTimeField() { return *GetNativePointerField<double*>(this, "AStandingMountedTurret.LastBarrageTime"); }
	bool& bIsLockingOnField() { return *GetNativePointerField<bool*>(this, "AStandingMountedTurret.bIsLockingOn"); }
	bool& bIsInLockOnTargetingField() { return *GetNativePointerField<bool*>(this, "AStandingMountedTurret.bIsInLockOnTargeting"); }
	int& CurrentMissileIndexField() { return *GetNativePointerField<int*>(this, "AStandingMountedTurret.CurrentMissileIndex"); }
	float& MissileRefreshTimeField() { return *GetNativePointerField<float*>(this, "AStandingMountedTurret.MissileRefreshTime"); }
	int& MaxMissilesField() { return *GetNativePointerField<int*>(this, "AStandingMountedTurret.MaxMissiles"); }
	int& ReadyToFireMissileCountField() { return *GetNativePointerField<int*>(this, "AStandingMountedTurret.ReadyToFireMissileCount"); }
	bool& bIsDumbFiringField() { return *GetNativePointerField<bool*>(this, "AStandingMountedTurret.bIsDumbFiring"); }
	float& DumbFireGravityField() { return *GetNativePointerField<float*>(this, "AStandingMountedTurret.DumbFireGravity"); }
	int& MostRecentlyShotMissileIndexField() { return *GetNativePointerField<int*>(this, "AStandingMountedTurret.MostRecentlyShotMissileIndex"); }
	double& LastMuzzleFlashTimeField() { return *GetNativePointerField<double*>(this, "AStandingMountedTurret.LastMuzzleFlashTime"); }
	float& AmmoLoadedPercentPerShotField() { return *GetNativePointerField<float*>(this, "AStandingMountedTurret.AmmoLoadedPercentPerShot"); }
	float& CurrentLoadedAmmoPercentField() { return *GetNativePointerField<float*>(this, "AStandingMountedTurret.CurrentLoadedAmmoPercent"); }
	double& LastTimeDealtDamageField() { return *GetNativePointerField<double*>(this, "AStandingMountedTurret.LastTimeDealtDamage"); }
	double& LastTimeShotAllowedField() { return *GetNativePointerField<double*>(this, "AStandingMountedTurret.LastTimeShotAllowed"); }

	void NotifyItemQuantityUpdated(UPrimalItem* anItem, int amount) { NativeCall<void, UPrimalItem*, int>(this, "AStandingMountedTurret.NotifyItemQuantityUpdated(UPrimalItem*,int)", anItem, amount); }
	float GetCurrentSpread() { return NativeCall<float>(this, "AStandingMountedTurret.GetCurrentSpread()"); }
	void RemoveTarget(AActor* TargetToRemove) { NativeCall<void, AActor*>(this, "AStandingMountedTurret.RemoveTarget(AActor*)", TargetToRemove); }
	void TryFiring_Implementation(bool shouldFire) { NativeCall<void, bool>(this, "AStandingMountedTurret.TryFiring_Implementation(bool)", shouldFire); }
	void BPProjectileSpawned(AShooterProjectile* SpawnedProjectile) { NativeCall<void, AShooterProjectile*>(this, "AStandingMountedTurret.BPProjectileSpawned(AShooterProjectile*)", SpawnedProjectile); }
	void StartFire() { NativeCall<void>(this, "AStandingMountedTurret.StartFire()"); }
	void RemoteRelease(AShooterCharacter* ShooterCharacter) { NativeCall<void, AShooterCharacter*>(this, "AStandingMountedTurret.RemoteRelease(AShooterCharacter*)", ShooterCharacter); }
	void ClientsPlayFireAnim() { NativeCall<void>(this, "AStandingMountedTurret.ClientsPlayFireAnim()"); }
	void TryFiring(bool shouldFire) { NativeCall<void, bool>(this, "AStandingMountedTurret.TryFiring(bool)", shouldFire); }
	bool CanDemolish() { return NativeCall<bool>(this, "AStandingMountedTurret.CanDemolish()"); }
	void InitializeMissileMeshes() { NativeCall<void>(this, "AStandingMountedTurret.InitializeMissileMeshes()"); }
	void SharedRelease(AShooterCharacter* ShooterCharacter) { NativeCall<void, AShooterCharacter*>(this, "AStandingMountedTurret.SharedRelease(AShooterCharacter*)", ShooterCharacter); }
	bool CanFire_Implementation() { return NativeCall<bool>(this, "AStandingMountedTurret.CanFire_Implementation()"); }
	void BotRelease(APrimalBotCharacter* ReleasedBot, int AtSeatNumber) { NativeCall<void, APrimalBotCharacter*, int>(this, "AStandingMountedTurret.BotRelease(APrimalBotCharacter*,int)", ReleasedBot, AtSeatNumber); }
	void DetectTargetsClient() { NativeCall<void>(this, "AStandingMountedTurret.DetectTargetsClient()"); }
	bool BPCanFire() { return NativeCall<bool>(this, "AStandingMountedTurret.BPCanFire()"); }
	bool IsTargetStillValid(AActor* Target, bool bFullCheck) { return NativeCall<bool, AActor*, bool>(this, "AStandingMountedTurret.IsTargetStillValid(AActor*,bool)", Target, bFullCheck); }
	bool IsActorTargetable(AActor* TargetActor) { return NativeCall<bool, AActor*>(this, "AStandingMountedTurret.IsActorTargetable(AActor*)", TargetActor); }
	void UpdateMissileTimers(float DeltaTime) { NativeCall<void, float>(this, "AStandingMountedTurret.UpdateMissileTimers(float)", DeltaTime); }
	bool IsTurretAllowedToFollowControllingPlayerAim(AShooterCharacter* CharacterToUse) { return NativeCall<bool, AShooterCharacter*>(this, "AStandingMountedTurret.IsTurretAllowedToFollowControllingPlayerAim(AShooterCharacter*)", CharacterToUse); }
	bool IsBallistaPenetratingWalls() { return NativeCall<bool>(this, "AStandingMountedTurret.IsBallistaPenetratingWalls()"); }
	void PlayEmptySound() { NativeCall<void>(this, "AStandingMountedTurret.PlayEmptySound()"); }
	void PlayReloadAnimation() { NativeCall<void>(this, "AStandingMountedTurret.PlayReloadAnimation()"); }
	bool IsDriverAllowedToFire_Implementation(AShooterCharacter* CharacterToUse) { return NativeCall<bool, AShooterCharacter*>(this, "AStandingMountedTurret.IsDriverAllowedToFire_Implementation(AShooterCharacter*)", CharacterToUse); }
	void NotifyItemAdded(UPrimalItem* anItem, bool bEquipItem) { NativeCall<void, UPrimalItem*, bool>(this, "AStandingMountedTurret.NotifyItemAdded(UPrimalItem*,bool)", anItem, bEquipItem); }
	void PlayFireAnimation() { NativeCall<void>(this, "AStandingMountedTurret.PlayFireAnimation()"); }
	void BPSetViewYaw(float NewYaw) { NativeCall<void, float>(this, "AStandingMountedTurret.BPSetViewYaw(float)", NewYaw); }
	void PostInitializeComponents() { NativeCall<void>(this, "AStandingMountedTurret.PostInitializeComponents()"); }
	void SpawnMuzzleFlash() { NativeCall<void>(this, "AStandingMountedTurret.SpawnMuzzleFlash()"); }
	int GetAmmoAmount(UClass* ForAmmoType, bool bIncludePlayerInventory) { return NativeCall<int, UClass*, bool>(this, "AStandingMountedTurret.GetAmmoAmount(UClass*,bool)", ForAmmoType, bIncludePlayerInventory); }
	void InitializeMissileArrays() { NativeCall<void>(this, "AStandingMountedTurret.InitializeMissileArrays()"); }
	void RemoteControl(AShooterCharacter* ShooterCharacter) { NativeCall<void, AShooterCharacter*>(this, "AStandingMountedTurret.RemoteControl(AShooterCharacter*)", ShooterCharacter); }
	bool CanReload() { return NativeCall<bool>(this, "AStandingMountedTurret.CanReload()"); }
	void BPSetViewPitch(float NewPitch) { NativeCall<void, float>(this, "AStandingMountedTurret.BPSetViewPitch(float)", NewPitch); }
	void BPFiredWeapon() { NativeCall<void>(this, "AStandingMountedTurret.BPFiredWeapon()"); }
	void AddLockOnTarget(AActor* TargetActor) { NativeCall<void, AActor*>(this, "AStandingMountedTurret.AddLockOnTarget(AActor*)", TargetActor); }
	void SharedControl(AShooterCharacter* ShooterCharacter, int SeatNumber, bool bLockedToSeat) { NativeCall<void, AShooterCharacter*, int, bool>(this, "AStandingMountedTurret.SharedControl(AShooterCharacter*,int,bool)", ShooterCharacter, SeatNumber, bLockedToSeat); }
	void TickSeatedBot(float DeltaSeconds) { NativeCall<void, float>(this, "AStandingMountedTurret.TickSeatedBot(float)", DeltaSeconds); }
	void HandleLockOnTargeting() { NativeCall<void>(this, "AStandingMountedTurret.HandleLockOnTargeting()"); }
	bool IsTurretAllowedToFollowControllingPlayerAim_Implementation(AShooterCharacter* CharacterToUse) { return NativeCall<bool, AShooterCharacter*>(this, "AStandingMountedTurret.IsTurretAllowedToFollowControllingPlayerAim_Implementation(AShooterCharacter*)", CharacterToUse); }
	void FireLockedOnTargets() { NativeCall<void>(this, "AStandingMountedTurret.FireLockedOnTargets()"); }
	float BPGetDamageMultiplier() { return NativeCall<float>(this, "AStandingMountedTurret.BPGetDamageMultiplier()"); }
	void ValidateAndCleanTargets() { NativeCall<void>(this, "AStandingMountedTurret.ValidateAndCleanTargets()"); }
	void ServerSwitchAmmoType_Implementation() { NativeCall<void>(this, "AStandingMountedTurret.ServerSwitchAmmoType_Implementation()"); }
	void OnRep_CurrentRemoteControllingCharacter() { NativeCall<void>(this, "AStandingMountedTurret.OnRep_CurrentRemoteControllingCharacter()"); }
	void ServerSwitchAmmoType() { NativeCall<void>(this, "AStandingMountedTurret.ServerSwitchAmmoType()"); }
	void UpdateAmmoCount(bool bIncludePlayerInventory, bool bIgnoreGetAmmoNearby) { NativeCall<void, bool, bool>(this, "AStandingMountedTurret.UpdateAmmoCount(bool,bool)", bIncludePlayerInventory, bIgnoreGetAmmoNearby); }
	bool CanFire() { return NativeCall<bool>(this, "AStandingMountedTurret.CanFire()"); }
	void BeginPlay() { NativeCall<void>(this, "AStandingMountedTurret.BeginPlay()"); }
	void BotControl(APrimalBotCharacter* SeatedBot, int AtSeatNumber) { NativeCall<void, APrimalBotCharacter*, int>(this, "AStandingMountedTurret.BotControl(APrimalBotCharacter*,int)", SeatedBot, AtSeatNumber); }
	void ServersideSetTargeting(bool bTargeting) { NativeCall<void, bool>(this, "AStandingMountedTurret.ServersideSetTargeting(bool)", bTargeting); }
	void Control(AShooterCharacter* ShooterCharacter, int SeatNumber, bool bLockedToSeat) { NativeCall<void, AShooterCharacter*, int, bool>(this, "AStandingMountedTurret.Control(AShooterCharacter*,int,bool)", ShooterCharacter, SeatNumber, bLockedToSeat); }
	void ClearLockOnTargets() { NativeCall<void>(this, "AStandingMountedTurret.ClearLockOnTargets()"); }
	int GetAmmoNearby(UClass* ForAmmoType) { return NativeCall<int, UClass*>(this, "AStandingMountedTurret.GetAmmoNearby(UClass*)", ForAmmoType); }
	bool IsStandingMountedTurret() { return NativeCall<bool>(this, "AStandingMountedTurret.IsStandingMountedTurret()"); }
	void OnRep_IsShooting() { NativeCall<void>(this, "AStandingMountedTurret.OnRep_IsShooting()"); }
	void Release(AShooterCharacter* ShooterCharacter) { NativeCall<void, AShooterCharacter*>(this, "AStandingMountedTurret.Release(AShooterCharacter*)", ShooterCharacter); }
	bool IsActorTargetable_Implementation(AActor* TargetActor) { return NativeCall<bool, AActor*>(this, "AStandingMountedTurret.IsActorTargetable_Implementation(AActor*)", TargetActor); }
	void ClientsPlayFireAnim_Implementation() { NativeCall<void>(this, "AStandingMountedTurret.ClientsPlayFireAnim_Implementation()"); }
	bool HasLineOfSightToTarget(AActor* Target) { return NativeCall<bool, AActor*>(this, "AStandingMountedTurret.HasLineOfSightToTarget(AActor*)", Target); }
	void Tick(float DeltaSeconds) { NativeCall<void, float>(this, "AStandingMountedTurret.Tick(float)", DeltaSeconds); }
	void NotifyItemRemoved(UPrimalItem* anItem) { NativeCall<void, UPrimalItem*>(this, "AStandingMountedTurret.NotifyItemRemoved(UPrimalItem*)", anItem); }
	void StopFire() { NativeCall<void>(this, "AStandingMountedTurret.StopFire()"); }
	void DoFire(int RandomSeed) { NativeCall<void, int>(this, "AStandingMountedTurret.DoFire(int)", RandomSeed); }
	bool IsDriverAllowedToFire(AShooterCharacter* CharacterToUse) { return NativeCall<bool, AShooterCharacter*>(this, "AStandingMountedTurret.IsDriverAllowedToFire(AShooterCharacter*)", CharacterToUse); }
	bool CanUse(AShooterPlayerController* ForPC) { return NativeCall<bool, AShooterPlayerController*>(this, "AStandingMountedTurret.CanUse(AShooterPlayerController*)", ForPC); }
	void Demolish(APlayerController* ForPC, AActor* DamageCauser) { NativeCall<void, APlayerController*, AActor*>(this, "AStandingMountedTurret.Demolish(APlayerController*,AActor*)", ForPC, DamageCauser); }
	void DrawHUD(AShooterHUD* HUD) { NativeCall<void, AShooterHUD*>(this, "AStandingMountedTurret.DrawHUD(AShooterHUD*)", HUD); }
	void Unstasis() { NativeCall<void>(this, "AStandingMountedTurret.Unstasis()"); }
	USkeletalMeshComponent* GetSkeletalMeshComponent() { return NativeCall<USkeletalMeshComponent*>(this, "AStandingMountedTurret.GetSkeletalMeshComponent()"); }

	BitFieldValue<bool, unsigned char> bClientFireProjectile() { return { this, "AStandingMountedTurret.bClientFireProjectile"}; }
	BitFieldValue<bool, unsigned char> bUseInstantDamageShooting() { return { this, "AStandingMountedTurret.bUseInstantDamageShooting"}; }
	BitFieldValue<bool, unsigned char> bDisableInElectricalStorm() { return { this, "AStandingMountedTurret.bDisableInElectricalStorm"}; }
	BitFieldValue<bool, unsigned char> bUseBallistaAimOffsetOnCharacter() { return { this, "AStandingMountedTurret.bUseBallistaAimOffsetOnCharacter"}; }
	BitFieldValue<bool, unsigned char> bUseBallistaAimOffsetOnCharacter_StandingTurret() { return { this, "AStandingMountedTurret.bUseBallistaAimOffsetOnCharacter_StandingTurret"}; }
	BitFieldValue<bool, unsigned char> bIsReloading() { return { this, "AStandingMountedTurret.bIsReloading"}; }
	BitFieldValue<bool, unsigned char> bIsFiring() { return { this, "AStandingMountedTurret.bIsFiring"}; }
	BitFieldValue<bool, unsigned char> bFireProjectileInvertX() { return { this, "AStandingMountedTurret.bFireProjectileInvertX"}; }
	BitFieldValue<bool, unsigned char> bShowProjectileOnlyBasedOnAmmo() { return { this, "AStandingMountedTurret.bShowProjectileOnlyBasedOnAmmo"}; }
	BitFieldValue<bool, unsigned char> bHideProjectileBone() { return { this, "AStandingMountedTurret.bHideProjectileBone"}; }
	BitFieldValue<bool, unsigned char> bUseBPCanFire() { return { this, "AStandingMountedTurret.bUseBPCanFire"}; }
	BitFieldValue<bool, unsigned char> bUseBPFiredWeapon() { return { this, "AStandingMountedTurret.bUseBPFiredWeapon"}; }
	BitFieldValue<bool, unsigned char> bHideProjectileBoneOnAttachedModule() { return { this, "AStandingMountedTurret.bHideProjectileBoneOnAttachedModule"}; }
	BitFieldValue<bool, unsigned char> bUseAmmoFromNearbyContainer() { return { this, "AStandingMountedTurret.bUseAmmoFromNearbyContainer"}; }
	BitFieldValue<bool, unsigned char> bUseBPGetDamageMultiplier() { return { this, "AStandingMountedTurret.bUseBPGetDamageMultiplier"}; }
	BitFieldValue<bool, unsigned char> bUseBPGetDamageMultiplier_AgainstTarget() { return { this, "AStandingMountedTurret.bUseBPGetDamageMultiplier_AgainstTarget"}; }
	BitFieldValue<bool, unsigned char> bUseRiderSocket() { return { this, "AStandingMountedTurret.bUseRiderSocket"}; }
	BitFieldValue<bool, unsigned char> bShowProjectileCount() { return { this, "AStandingMountedTurret.bShowProjectileCount"}; }
	BitFieldValue<bool, unsigned char> bForceBallistaToUseAimOffsets() { return { this, "AStandingMountedTurret.bForceBallistaToUseAimOffsets"}; }
	BitFieldValue<bool, unsigned char> bInfiniteAmmo() { return { this, "AStandingMountedTurret.bInfiniteAmmo"}; }
	BitFieldValue<bool, unsigned char> bUseBPGetMuzzleSocketName() { return { this, "AStandingMountedTurret.bUseBPGetMuzzleSocketName"}; }
	BitFieldValue<bool, unsigned char> bUseBPGetMuzzleFlashSocketName() { return { this, "AStandingMountedTurret.bUseBPGetMuzzleFlashSocketName"}; }
	BitFieldValue<bool, unsigned char> bSkipBallistaFireAnimFireRateRestriction() { return { this, "AStandingMountedTurret.bSkipBallistaFireAnimFireRateRestriction"}; }
	BitFieldValue<bool, unsigned char> bUseBPProjectileSpawned() { return { this, "AStandingMountedTurret.bUseBPProjectileSpawned"}; }
	BitFieldValue<bool, unsigned char> bUseBPGetProjectileMeshAttachPointSocketName() { return { this, "AStandingMountedTurret.bUseBPGetProjectileMeshAttachPointSocketName"}; }
	BitFieldValue<bool, unsigned char> bUseBPGetProjectileMeshAttachPointForMeshOnlySocketName() { return { this, "AStandingMountedTurret.bUseBPGetProjectileMeshAttachPointForMeshOnlySocketName"}; }
	BitFieldValue<bool, unsigned char> bUseBPGetTurretTipBoneSocketName() { return { this, "AStandingMountedTurret.bUseBPGetTurretTipBoneSocketName"}; }
	BitFieldValue<bool, unsigned char> bUseAttachedModuleSkeletalMeshCompForProjectileMeshAttachPoint() { return { this, "AStandingMountedTurret.bUseAttachedModuleSkeletalMeshCompForProjectileMeshAttachPoint"}; }
	BitFieldValue<bool, unsigned char> bSpawnMuzzleFlashOnProjectileSpawnInsteadOfAnimation() { return { this, "AStandingMountedTurret.bSpawnMuzzleFlashOnProjectileSpawnInsteadOfAnimation"}; }
	BitFieldValue<bool, unsigned char> bSkipReloadingBeforeFiring() { return { this, "AStandingMountedTurret.bSkipReloadingBeforeFiring"}; }
	BitFieldValue<bool, unsigned char> IsRefuelingLoadedAmmoPercent() { return { this, "AStandingMountedTurret.IsRefuelingLoadedAmmoPercent"}; }
	BitFieldValue<bool, unsigned char> bHasSeatedBot() { return { this, "AStandingMountedTurret.bHasSeatedBot"}; }

	UParticleSystem*& ShootingTrailFXField() { return *GetNativePointerField<UParticleSystem**>(this, "AStandingMountedTurret.ShootingTrailFX"); }
	UNiagaraSystem*& ShootingTrailFX_NiagaraField() { return *GetNativePointerField<UNiagaraSystem**>(this, "AStandingMountedTurret.ShootingTrailFX_Niagara"); }
	USoundCue*& FireSoundField() { return *GetNativePointerField<USoundCue**>(this, "AStandingMountedTurret.FireSound"); }
	USoundCue*& EmptyFireSoundField() { return *GetNativePointerField<USoundCue**>(this, "AStandingMountedTurret.EmptyFireSound"); }
	USoundCue*& RotateSoundCueField() { return *GetNativePointerField<USoundCue**>(this, "AStandingMountedTurret.RotateSoundCue"); }
	UAnimMontage*& FireBallistaAnimationField() { return *GetNativePointerField<UAnimMontage**>(this, "AStandingMountedTurret.FireBallistaAnimation"); }
	UAnimMontage*& EmptyBallistaAnimationField() { return *GetNativePointerField<UAnimMontage**>(this, "AStandingMountedTurret.EmptyBallistaAnimation"); }
	UAnimMontage*& ReloadBallistaAnimationField() { return *GetNativePointerField<UAnimMontage**>(this, "AStandingMountedTurret.ReloadBallistaAnimation"); }
	USkeletalMeshComponent*& MySkeletalMeshCompField() { return *GetNativePointerField<USkeletalMeshComponent**>(this, "AStandingMountedTurret.MySkeletalMeshComp"); }
	USkeletalMeshComponent*& AttachedModuleSkeletalMeshCompField() { return *GetNativePointerField<USkeletalMeshComponent**>(this, "AStandingMountedTurret.AttachedModuleSkeletalMeshComp"); }
	UAnimMontage*& AttachedModuleFireAnimationField() { return *GetNativePointerField<UAnimMontage**>(this, "AStandingMountedTurret.AttachedModuleFireAnimation"); }
	UAnimMontage*& AttachedModuleReloadAnimationField() { return *GetNativePointerField<UAnimMontage**>(this, "AStandingMountedTurret.AttachedModuleReloadAnimation"); }
	UStaticMeshComponent*& ProjectileMeshField() { return *GetNativePointerField<UStaticMeshComponent**>(this, "AStandingMountedTurret.ProjectileMesh"); }
	UAudioComponent*& RotateSoundComponentField() { return *GetNativePointerField<UAudioComponent**>(this, "AStandingMountedTurret.RotateSoundComponent"); }
	UTexture2D*& ProgressBarBackgroundField() { return *GetNativePointerField<UTexture2D**>(this, "AStandingMountedTurret.ProgressBarBackground"); }
	UTexture2D*& ProgressBarForegroundField() { return *GetNativePointerField<UTexture2D**>(this, "AStandingMountedTurret.ProgressBarForeground"); }
	UClass*& CurrentAmmoItemTemplateField() { return *GetNativePointerField<UClass**>(this, "AStandingMountedTurret.CurrentAmmoItemTemplate"); }
	UStaticMesh*& AmmoItemTemplateMeshField() { return *GetNativePointerField<UStaticMesh**>(this, "AStandingMountedTurret.AmmoItemTemplateMesh"); }
	UNiagaraSystem*& FluidSimSplashTemplateOverrideField() { return *GetNativePointerField<UNiagaraSystem**>(this, "AStandingMountedTurret.FluidSimSplashTemplateOverride"); }
	UMaterialInterface*& ActorLockedMIField() { return *GetNativePointerField<UMaterialInterface**>(this, "AStandingMountedTurret.ActorLockedMI"); }
	UMaterialInterface*& ActorInLockedAreaMIField() { return *GetNativePointerField<UMaterialInterface**>(this, "AStandingMountedTurret.ActorInLockedAreaMI"); }
	USoundCue*& LockOnSoundField() { return *GetNativePointerField<USoundCue**>(this, "AStandingMountedTurret.LockOnSound"); }
	UMaterialInstanceDynamic*& ActorLockedMIDField() { return *GetNativePointerField<UMaterialInstanceDynamic**>(this, "AStandingMountedTurret.ActorLockedMID"); }
	UMaterialInstanceDynamic*& ActorInLockedAreaMIDField() { return *GetNativePointerField<UMaterialInstanceDynamic**>(this, "AStandingMountedTurret.ActorInLockedAreaMID"); }
	UStaticMesh*& MissileMeshTemplateField() { return *GetNativePointerField<UStaticMesh**>(this, "AStandingMountedTurret.MissileMeshTemplate"); }

	FName& TurretTipBoneField() { return *GetNativePointerField<FName*>(this, "AStandingMountedTurret.TurretTipBone"); }
	FName& RiderOverrideSocketNameField() { return *GetNativePointerField<FName*>(this, "AStandingMountedTurret.RiderOverrideSocketName"); }
	FName& TurretSkeletalMeshComponentNameField() { return *GetNativePointerField<FName*>(this, "AStandingMountedTurret.TurretSkeletalMeshComponentName"); }
	FName& AttachedModuleComponentNameField() { return *GetNativePointerField<FName*>(this, "AStandingMountedTurret.AttachedModuleComponentName"); }
	FName& ProjectileMeshAttachPointField() { return *GetNativePointerField<FName*>(this, "AStandingMountedTurret.ProjectileMeshAttachPoint"); }
	FName& ProjectileMeshAttachPointForMeshOnlyField() { return *GetNativePointerField<FName*>(this, "AStandingMountedTurret.ProjectileMeshAttachPointForMeshOnly"); }
	FName& ProjectileBoneNameField() { return *GetNativePointerField<FName*>(this, "AStandingMountedTurret.ProjectileBoneName"); }
	FString& CurrentAmmoSourceStringField() { return *GetNativePointerField<FString*>(this, "AStandingMountedTurret.CurrentAmmoSourceString"); }
	TArray<UStaticMesh*, TSizedDefaultAllocator<32> >& AlternateAmmoItemTemplateMeshesField() { return *GetNativePointerField<TArray<UStaticMesh*, TSizedDefaultAllocator<32> >*>(this, "AStandingMountedTurret.AlternateAmmoItemTemplateMeshes"); }
	TArray<float, TSizedDefaultAllocator<32> >& AlternateAmmoReloadAnimSpeedsField() { return *GetNativePointerField<TArray<float, TSizedDefaultAllocator<32> >*>(this, "AStandingMountedTurret.AlternateAmmoReloadAnimSpeeds"); }
	TWeakObjectPtr<AShooterCharacter, FWeakObjectPtr>& CurrentRemoteControllingCharacterField() { return *GetNativePointerField<TWeakObjectPtr<AShooterCharacter, FWeakObjectPtr>*>(this, "AStandingMountedTurret.CurrentRemoteControllingCharacter"); }
	UE::Math::TVector<double>& ProjectileSpawnOffsetField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "AStandingMountedTurret.ProjectileSpawnOffset"); }
	TArray<AActor*, TSizedDefaultAllocator<32> >& LockedOnTargetsField() { return *GetNativePointerField<TArray<AActor*, TSizedDefaultAllocator<32> >*>(this, "AStandingMountedTurret.LockedOnTargets"); }
	TArray<FName, TSizedDefaultAllocator<32> >& MissileBonesField() { return *GetNativePointerField<TArray<FName, TSizedDefaultAllocator<32> >*>(this, "AStandingMountedTurret.MissileBones"); }
	TArray<bool, TSizedDefaultAllocator<32> >& MissileAvailableField() { return *GetNativePointerField<TArray<bool, TSizedDefaultAllocator<32> >*>(this, "AStandingMountedTurret.MissileAvailable"); }
	TArray<float, TSizedDefaultAllocator<32> >& MissileTimersField() { return *GetNativePointerField<TArray<float, TSizedDefaultAllocator<32> >*>(this, "AStandingMountedTurret.MissileTimers"); }
	FName& MissileBonePrefixField() { return *GetNativePointerField<FName*>(this, "AStandingMountedTurret.MissileBonePrefix"); }
	TArray<UStaticMeshComponent*, TSizedDefaultAllocator<32> >& MissileMeshComponentsField() { return *GetNativePointerField<TArray<UStaticMeshComponent*, TSizedDefaultAllocator<32> >*>(this, "AStandingMountedTurret.MissileMeshComponents"); }
	TWeakObjectPtr<APrimalBotCharacter, FWeakObjectPtr>& CurrSeatedBotField() { return *GetNativePointerField<TWeakObjectPtr<APrimalBotCharacter, FWeakObjectPtr>*>(this, "AStandingMountedTurret.CurrSeatedBot"); }
	FName GetMuzzleFlashSocketName() { using AsaReturnType = FName; alignas(AsaReturnType) unsigned char AsaReturnBytes[sizeof(AsaReturnType)]; auto* AsaReturnPointer = reinterpret_cast<AsaReturnType*>(AsaReturnBytes); auto* AsaReturnedPointer = NativeCall<AsaReturnType*, AsaReturnType*>(this, "AStandingMountedTurret.GetMuzzleFlashSocketName()", AsaReturnPointer); if (AsaReturnedPointer != AsaReturnPointer) throw std::runtime_error("Unexpected native result buffer"); std::unique_ptr<AsaReturnType, void(*)(AsaReturnType*)> AsaReturnOwner(std::launder(AsaReturnPointer), [](AsaReturnType* value) { value->~AsaReturnType(); }); return MoveTemp(*AsaReturnOwner); }
	USceneComponent* FindComponentByName(FName ComponentName) { return NativeCall<USceneComponent*, FName>(this, "AStandingMountedTurret.FindComponentByName(FName)", ComponentName); }
	void DealDamageOnServer(const FHitResult& Impact, UE::Math::TVector<double>* ShootDir) { if (!ShootDir) throw std::invalid_argument("Null native value parameter"); return NativeCall<void, const FHitResult &, UE :: Math :: TVector < double >>(this, "AStandingMountedTurret.DealDamageOnServer(FHitResult&,UE::Math::TVector<double>)", Impact, *ShootDir); }
	UE::Math::TVector<double>* GetFireProjectileDirection_Implementation(UE::Math::TVector<double>* result, USkeletalMeshComponent* SkeletalMeshComp, FName ProjectileMeshAttachPointName) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*, USkeletalMeshComponent*, FName>(this, "AStandingMountedTurret.GetFireProjectileDirection_Implementation(USkeletalMeshComponent*,FName)", result, SkeletalMeshComp, ProjectileMeshAttachPointName); }
	FName BPGetProjectileMeshAttachPointForMeshOnlySocketName() { using AsaReturnType = FName; alignas(AsaReturnType) unsigned char AsaReturnBytes[sizeof(AsaReturnType)]; auto* AsaReturnPointer = reinterpret_cast<AsaReturnType*>(AsaReturnBytes); auto* AsaReturnedPointer = NativeCall<AsaReturnType*, AsaReturnType*>(this, "AStandingMountedTurret.BPGetProjectileMeshAttachPointForMeshOnlySocketName()", AsaReturnPointer); if (AsaReturnedPointer != AsaReturnPointer) throw std::runtime_error("Unexpected native result buffer"); std::unique_ptr<AsaReturnType, void(*)(AsaReturnType*)> AsaReturnOwner(std::launder(AsaReturnPointer), [](AsaReturnType* value) { value->~AsaReturnType(); }); return MoveTemp(*AsaReturnOwner); }
	bool Die(float KillingDamage, const FDamageEvent& DamageEvent, AController* Killer, AActor* DamageCauser) { return NativeCall<bool, float, const FDamageEvent&, AController*, AActor*>(this, "AStandingMountedTurret.Die(float,FDamageEvent&,AController*,AActor*)", KillingDamage, DamageEvent, Killer, DamageCauser); }
	void Fire(UE::Math::TVector<double>* FireLocation, UE::Math::TVector<double>* FireDirection) { if (!FireLocation) throw std::invalid_argument("Null native value parameter"); if (!FireDirection) throw std::invalid_argument("Null native value parameter"); return NativeCall<void, UE :: Math :: TVector < double >, UE :: Math :: TVector < double >>(this, "AStandingMountedTurret.Fire(UE::Math::TVector<double>,UE::Math::TVector<double>)", *FireLocation, *FireDirection); }
	void FireProjectilesEx_Implementation(AActor* Target, UE::Math::TVector<double>* ShootDir, int MissileIndex) { if (!ShootDir) throw std::invalid_argument("Null native value parameter"); return NativeCall<void, AActor *, UE :: Math :: TVector < double >, int>(this, "AStandingMountedTurret.FireProjectilesEx_Implementation(AActor*,UE::Math::TVector<double>,int)", Target, *ShootDir, MissileIndex); }
	void ApplyInstantHitExplosion(const FHitResult& Impact, const UE::Math::TVector<double>& ShootDir) { NativeCall<void, const FHitResult&, const UE::Math::TVector<double>&>(this, "AStandingMountedTurret.ApplyInstantHitExplosion(FHitResult&,UE::Math::TVector<double>&)", Impact, ShootDir); }
	bool ValidateInstantShot(const FHitResult& Impact, UE::Math::TVector<double>* ShootDir) { if (!ShootDir) throw std::invalid_argument("Null native value parameter"); return NativeCall<bool, const FHitResult &, UE :: Math :: TVector < double >>(this, "AStandingMountedTurret.ValidateInstantShot(FHitResult&,UE::Math::TVector<double>)", Impact, *ShootDir); }
	void DoFireProjectile(UE::Math::TVector<double>* Origin, UE::Math::TVector<double>* ShootDir) { if (!Origin) throw std::invalid_argument("Null native value parameter"); if (!ShootDir) throw std::invalid_argument("Null native value parameter"); return NativeCall<void, UE :: Math :: TVector < double >, UE :: Math :: TVector < double >>(this, "AStandingMountedTurret.DoFireProjectile(UE::Math::TVector<double>,UE::Math::TVector<double>)", *Origin, *ShootDir); }
	FName BPGetTurretTipBoneSocketName() { using AsaReturnType = FName; alignas(AsaReturnType) unsigned char AsaReturnBytes[sizeof(AsaReturnType)]; auto* AsaReturnPointer = reinterpret_cast<AsaReturnType*>(AsaReturnBytes); auto* AsaReturnedPointer = NativeCall<AsaReturnType*, AsaReturnType*>(this, "AStandingMountedTurret.BPGetTurretTipBoneSocketName()", AsaReturnPointer); if (AsaReturnedPointer != AsaReturnPointer) throw std::runtime_error("Unexpected native result buffer"); std::unique_ptr<AsaReturnType, void(*)(AsaReturnType*)> AsaReturnOwner(std::launder(AsaReturnPointer), [](AsaReturnType* value) { value->~AsaReturnType(); }); return MoveTemp(*AsaReturnOwner); }
	FName BPGetProjectileMeshAttachPointSocketName() { using AsaReturnType = FName; alignas(AsaReturnType) unsigned char AsaReturnBytes[sizeof(AsaReturnType)]; auto* AsaReturnPointer = reinterpret_cast<AsaReturnType*>(AsaReturnBytes); auto* AsaReturnedPointer = NativeCall<AsaReturnType*, AsaReturnType*>(this, "AStandingMountedTurret.BPGetProjectileMeshAttachPointSocketName()", AsaReturnPointer); if (AsaReturnedPointer != AsaReturnPointer) throw std::runtime_error("Unexpected native result buffer"); std::unique_ptr<AsaReturnType, void(*)(AsaReturnType*)> AsaReturnOwner(std::launder(AsaReturnPointer), [](AsaReturnType* value) { value->~AsaReturnType(); }); return MoveTemp(*AsaReturnOwner); }
	void AnimNotifyCustomEvent(FName CustomEventName, USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, const UAnimNotify* AnimNotifyObject) { NativeCall<void, FName, USkeletalMeshComponent*, UAnimSequenceBase*, const UAnimNotify*>(this, "AStandingMountedTurret.AnimNotifyCustomEvent(FName,USkeletalMeshComponent*,UAnimSequenceBase*,UAnimNotify*)", CustomEventName, MeshComp, Animation, AnimNotifyObject); }
	FName BPGetMuzzleFlashSocketName() { using AsaReturnType = FName; alignas(AsaReturnType) unsigned char AsaReturnBytes[sizeof(AsaReturnType)]; auto* AsaReturnPointer = reinterpret_cast<AsaReturnType*>(AsaReturnBytes); auto* AsaReturnedPointer = NativeCall<AsaReturnType*, AsaReturnType*>(this, "AStandingMountedTurret.BPGetMuzzleFlashSocketName()", AsaReturnPointer); if (AsaReturnedPointer != AsaReturnPointer) throw std::runtime_error("Unexpected native result buffer"); std::unique_ptr<AsaReturnType, void(*)(AsaReturnType*)> AsaReturnOwner(std::launder(AsaReturnPointer), [](AsaReturnType* value) { value->~AsaReturnType(); }); return MoveTemp(*AsaReturnOwner); }
	bool NetExecCommand(FName CommandName, const FNetExecParams& ExecParams) { return NativeCall<bool, FName, const FNetExecParams&>(this, "AStandingMountedTurret.NetExecCommand(FName,FNetExecParams&)", CommandName, ExecParams); }
	UE::Math::TRotator<double>* GetMuzzleRotation(UE::Math::TRotator<double>* result) { return NativeCall<UE::Math::TRotator<double>*, UE::Math::TRotator<double>*>(this, "AStandingMountedTurret.GetMuzzleRotation()", result); }
	FName BPGetMuzzleSocketName() { using AsaReturnType = FName; alignas(AsaReturnType) unsigned char AsaReturnBytes[sizeof(AsaReturnType)]; auto* AsaReturnPointer = reinterpret_cast<AsaReturnType*>(AsaReturnBytes); auto* AsaReturnedPointer = NativeCall<AsaReturnType*, AsaReturnType*>(this, "AStandingMountedTurret.BPGetMuzzleSocketName()", AsaReturnPointer); if (AsaReturnedPointer != AsaReturnPointer) throw std::runtime_error("Unexpected native result buffer"); std::unique_ptr<AsaReturnType, void(*)(AsaReturnType*)> AsaReturnOwner(std::launder(AsaReturnPointer), [](AsaReturnType* value) { value->~AsaReturnType(); }); return MoveTemp(*AsaReturnOwner); }
	UE::Math::TVector<double>* GetFireProjectileDirection(UE::Math::TVector<double>* result, USkeletalMeshComponent* SkeletalMeshComp, FName ProjectileMeshAttachPointName) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*, USkeletalMeshComponent*, FName>(this, "AStandingMountedTurret.GetFireProjectileDirection(USkeletalMeshComponent*,FName)", result, SkeletalMeshComp, ProjectileMeshAttachPointName); }
	UE::Math::TRotator<double>* GetAimRotationForSeatedBot(UE::Math::TRotator<double>* result, APrimalBotCharacter* SeatedBot) { return NativeCall<UE::Math::TRotator<double>*, UE::Math::TRotator<double>*, APrimalBotCharacter*>(this, "AStandingMountedTurret.GetAimRotationForSeatedBot(APrimalBotCharacter*)", result, SeatedBot); }
	void SpawnImpactEffects(const FHitResult& Impact, const UE::Math::TVector<double>& ShootDir) { NativeCall<void, const FHitResult&, const UE::Math::TVector<double>&>(this, "AStandingMountedTurret.SpawnImpactEffects(FHitResult&,UE::Math::TVector<double>&)", Impact, ShootDir); }
	void ServersideFireAtTarget(AActor* Target, UE::Math::TVector<double>* ShootDir, int MissileIndex) { if (!ShootDir) throw std::invalid_argument("Null native value parameter"); return NativeCall<void, AActor *, UE :: Math :: TVector < double >, int>(this, "AStandingMountedTurret.ServersideFireAtTarget(AActor*,UE::Math::TVector<double>,int)", Target, *ShootDir, MissileIndex); }
	void FireProjectilesEx(AActor* Target, UE::Math::TVector<double>* ShootDir, int MissileIndex) { if (!ShootDir) throw std::invalid_argument("Null native value parameter"); return NativeCall<void, AActor *, UE :: Math :: TVector < double >, int>(this, "AStandingMountedTurret.FireProjectilesEx(AActor*,UE::Math::TVector<double>,int)", Target, *ShootDir, MissileIndex); }
	void SpawnTrailEffect(const UE::Math::TVector<double>& EndPoint) { NativeCall<void, const UE::Math::TVector<double>&>(this, "AStandingMountedTurret.SpawnTrailEffect(UE::Math::TVector<double>&)", EndPoint); }
	bool GetNextMissileBone(FName& OutBoneName, int MissileIndex) { return NativeCall<bool, FName&, int>(this, "AStandingMountedTurret.GetNextMissileBone(FName&,int)", OutBoneName, MissileIndex); }
	UE::Math::TVector<double>* GetMuzzleLocation(UE::Math::TVector<double>* result) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*>(this, "AStandingMountedTurret.GetMuzzleLocation()", result); }
	UE::Math::TVector<double>* GetAttackingFromLocation(UE::Math::TVector<double>* result) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*>(this, "AStandingMountedTurret.GetAttackingFromLocation()", result); }
	UE::Math::TRotator<double>* GetAimRotationForSeatedBot_Implementation(UE::Math::TRotator<double>* result, APrimalBotCharacter* SeatedBot) { return NativeCall<UE::Math::TRotator<double>*, UE::Math::TRotator<double>*, APrimalBotCharacter*>(this, "AStandingMountedTurret.GetAimRotationForSeatedBot_Implementation(APrimalBotCharacter*)", result, SeatedBot); }
	void GetCameraLocationAndRotation(UE::Math::TVector<double>& Location, UE::Math::TRotator<double>& Rotation) { NativeCall<void, UE::Math::TVector<double>&, UE::Math::TRotator<double>&>(this, "AStandingMountedTurret.GetCameraLocationAndRotation(UE::Math::TVector<double>&,UE::Math::TRotator<double>&)", Location, Rotation); }
};
