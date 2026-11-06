#pragma once
#include "BulkForward.h"


struct AShooterWeapon_Projectile : AShooterWeapon
{
	// Fields

	TSubclassOf<AShooterProjectile>& ProjectileClassField() { return *GetNativePointerField<TSubclassOf<AShooterProjectile>*>(this, "AShooterWeapon_Projectile.ProjectileClass"); }
	USoundCue*& FireProjectileSoundField() { return *GetNativePointerField<USoundCue**>(this, "AShooterWeapon_Projectile.FireProjectileSound"); }
	UStaticMeshComponent*& ProjectileMesh3PField() { return *GetNativePointerField<UStaticMeshComponent**>(this, "AShooterWeapon_Projectile.ProjectileMesh3P"); }
	FName& ProjectileAttachPoint3PField() { return *GetNativePointerField<FName*>(this, "AShooterWeapon_Projectile.ProjectileAttachPoint3P"); }
	int& trashFramesField() { return *GetNativePointerField<int*>(this, "AShooterWeapon_Projectile.trashFrames"); }
	bool& bUseBPSelectProjectileToFireField() { return *GetNativePointerField<bool*>(this, "AShooterWeapon_Projectile.bUseBPSelectProjectileToFire"); }
	float& ProjectileSpreadYawField() { return *GetNativePointerField<float*>(this, "AShooterWeapon_Projectile.ProjectileSpreadYaw"); }
	float& ProjectileSpreadPitchField() { return *GetNativePointerField<float*>(this, "AShooterWeapon_Projectile.ProjectileSpreadPitch"); }
	float& ServerMaxProjectileAngleErrorField() { return *GetNativePointerField<float*>(this, "AShooterWeapon_Projectile.ServerMaxProjectileAngleError"); }
	float& ServerMaxProjectileOriginErrorField() { return *GetNativePointerField<float*>(this, "AShooterWeapon_Projectile.ServerMaxProjectileOriginError"); }
	FName& Mesh1PProjectileBoneNameField() { return *GetNativePointerField<FName*>(this, "AShooterWeapon_Projectile.Mesh1PProjectileBoneName"); }
	float& LockOnYScreenPercentageField() { return *GetNativePointerField<float*>(this, "AShooterWeapon_Projectile.LockOnYScreenPercentage"); }
	float& LockOnTimeField() { return *GetNativePointerField<float*>(this, "AShooterWeapon_Projectile.LockOnTime"); }
	float& CurrentLockOnTimeField() { return *GetNativePointerField<float*>(this, "AShooterWeapon_Projectile.CurrentLockOnTime"); }
	float& LockOnMaxTraceDistanceField() { return *GetNativePointerField<float*>(this, "AShooterWeapon_Projectile.LockOnMaxTraceDistance"); }
	UE::Math::TVector<double>& LockOnTraceBoxExtentField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "AShooterWeapon_Projectile.LockOnTraceBoxExtent"); }
	UMaterialInterface*& ActorLockedMIField() { return *GetNativePointerField<UMaterialInterface**>(this, "AShooterWeapon_Projectile.ActorLockedMI"); }
	UMaterialInstanceDynamic*& ActorLockedMIDField() { return *GetNativePointerField<UMaterialInstanceDynamic**>(this, "AShooterWeapon_Projectile.ActorLockedMID"); }
	UMaterialInterface*& ActorInLockedAreaMIField() { return *GetNativePointerField<UMaterialInterface**>(this, "AShooterWeapon_Projectile.ActorInLockedAreaMI"); }
	UMaterialInstanceDynamic*& ActorInLockedAreaMIDField() { return *GetNativePointerField<UMaterialInstanceDynamic**>(this, "AShooterWeapon_Projectile.ActorInLockedAreaMID"); }
	TWeakObjectPtr<AActor>& LockOnActorField() { return *GetNativePointerField<TWeakObjectPtr<AActor>*>(this, "AShooterWeapon_Projectile.LockOnActor"); }
	UE::Math::TVector<double>& LockOnRelativeHitLocationField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "AShooterWeapon_Projectile.LockOnRelativeHitLocation"); }
	FTimerHandle& CheckRefireTimerHandleField() { return *GetNativePointerField<FTimerHandle*>(this, "AShooterWeapon_Projectile.CheckRefireTimerHandle"); }

	// Bitfields

	BitFieldValue<bool, unsigned __int32> bServerFireProjectileForceUpdateAimActors() { return { this, "AShooterWeapon_Projectile.bServerFireProjectileForceUpdateAimActors" }; }
	BitFieldValue<bool, unsigned __int32> bUseHideProjectileAnimEvents() { return { this, "AShooterWeapon_Projectile.bUseHideProjectileAnimEvents" }; }

	// Functions

	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("AShooterWeapon_Projectile"); }
	void Listener_LockOn_Update(bool reset) { NativeCall<void, bool>(this, "AShooterWeapon_Projectile.Listener_LockOn_Update(bool)", reset); }
	void OnHideProjectile() { NativeCall<void>(this, "AShooterWeapon_Projectile.OnHideProjectile()"); }
	void SetLockedTarget(AActor* Actor, bool bIsLocked) { NativeCall<void, AActor*, bool>(this, "AShooterWeapon_Projectile.SetLockedTarget(AActor*,bool)", Actor, bIsLocked); }
	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// static void StaticRegisterNativesAShooterWeapon_Projectile();
	FHitResult* GetTrajectoryTarget(FHitResult* result, int SubSteps, float TotalTime) { return NativeCall<FHitResult*, FHitResult*, int, float>(this, "AShooterWeapon_Projectile.GetTrajectoryTarget(int,float)", result, SubSteps, TotalTime); }
	void PostInitializeComponents() { NativeCall<void>(this, "AShooterWeapon_Projectile.PostInitializeComponents()"); }
	void DrawHUD(AShooterHUD* HUD) { NativeCall<void, AShooterHUD*>(this, "AShooterWeapon_Projectile.DrawHUD(AShooterHUD*)", HUD); }
	void GetProjectileSpawnTransform(UE::Math::TVector<double>* Origin, UE::Math::TVector<double>* ShootDir) { NativeCall<void, UE::Math::TVector<double>*, UE::Math::TVector<double>*>(this, "AShooterWeapon_Projectile.GetProjectileSpawnTransform(UE::Math::TVector<double>&,UE::Math::TVector<double>&)", Origin, ShootDir); }
	void FireWeapon() { NativeCall<void>(this, "AShooterWeapon_Projectile.FireWeapon()"); }
	void DoFireProjectile(UE::Math::TVector<double>* Origin, UE::Math::TVector<double>* ShootDir) { NativeCall<void, UE::Math::TVector<double>*, UE::Math::TVector<double>*>(this, "AShooterWeapon_Projectile.DoFireProjectile(UE::Math::TVector<double>,UE::Math::TVector<double>)", Origin, ShootDir); }
	void CheckRefireTimer() { NativeCall<void>(this, "AShooterWeapon_Projectile.CheckRefireTimer()"); }
	void ServerFireProjectile_Implementation(UE::Math::TVector<double>* Origin, FVector_NetQuantizeNormal* ShootDir, int ProjectileID) { NativeCall<void, UE::Math::TVector<double>*, FVector_NetQuantizeNormal*, int>(this, "AShooterWeapon_Projectile.ServerFireProjectile_Implementation(UE::Math::TVector<double>,FVector_NetQuantizeNormal,int)", Origin, ShootDir, ProjectileID); }
	void ClientsFireProjectile_Implementation(UE::Math::TVector<double>* Origin, FVector_NetQuantizeNormal* ShootDir, int ProjectileID) { NativeCall<void, UE::Math::TVector<double>*, FVector_NetQuantizeNormal*, int>(this, "AShooterWeapon_Projectile.ClientsFireProjectile_Implementation(UE::Math::TVector<double>,FVector_NetQuantizeNormal,int)", Origin, ShootDir, ProjectileID); }
	void FireProjectile(UE::Math::TVector<double>* Origin, FVector_NetQuantizeNormal* ShootDir, int ProjectileID) { NativeCall<void, UE::Math::TVector<double>*, FVector_NetQuantizeNormal*, int>(this, "AShooterWeapon_Projectile.FireProjectile(UE::Math::TVector<double>,FVector_NetQuantizeNormal,int)", Origin, ShootDir, ProjectileID); }
	void ServerFireProjectileEx_Implementation(UE::Math::TVector<double>* Origin, FVector_NetQuantizeNormal* ShootDir, float Speed, int RandomSeed, int ProjectileID) { NativeCall<void, UE::Math::TVector<double>*, FVector_NetQuantizeNormal*, float, int, int>(this, "AShooterWeapon_Projectile.ServerFireProjectileEx_Implementation(UE::Math::TVector<double>,FVector_NetQuantizeNormal,float,int,int)", Origin, ShootDir, Speed, RandomSeed, ProjectileID); }
	void ClientsFireProjectileEx_Implementation(UE::Math::TVector<double>* Origin, FVector_NetQuantizeNormal* ShootDir, float Speed) { NativeCall<void, UE::Math::TVector<double>*, FVector_NetQuantizeNormal*, float>(this, "AShooterWeapon_Projectile.ClientsFireProjectileEx_Implementation(UE::Math::TVector<double>,FVector_NetQuantizeNormal,float,int,int)", Origin, ShootDir, Speed); }
	void FireProjectileEx(UE::Math::TVector<double>* Origin, FVector_NetQuantizeNormal* ShootDir, float Speed, int RandomSeed, int ProjectileID) { NativeCall<void, UE::Math::TVector<double>*, FVector_NetQuantizeNormal*, float, int, int>(this, "AShooterWeapon_Projectile.FireProjectileEx(UE::Math::TVector<double>,FVector_NetQuantizeNormal,float,int,int)", Origin, ShootDir, Speed, RandomSeed, ProjectileID); }
	void ApplyWeaponConfig(FProjectileWeaponData* Data) { NativeCall<void, FProjectileWeaponData*>(this, "AShooterWeapon_Projectile.ApplyWeaponConfig(FProjectileWeaponData&)", Data); }
	float ServerClampProjectileSpeed(float inSpeed) { return NativeCall<float, float>(this, "AShooterWeapon_Projectile.ServerClampProjectileSpeed(float)", inSpeed); }
	void AnimNotifyCustomEvent(FName CustomEventName, USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, const UAnimNotify* AnimNotifyObject) { NativeCall<void, FName, USkeletalMeshComponent*, UAnimSequenceBase*, const UAnimNotify*>(this, "AShooterWeapon_Projectile.AnimNotifyCustomEvent(FName,USkeletalMeshComponent*,UAnimSequenceBase*,UAnimNotify*)", CustomEventName, MeshComp, Animation, AnimNotifyObject); }
	void AttachOtherMeshes() { NativeCall<void>(this, "AShooterWeapon_Projectile.AttachOtherMeshes()"); }
	void PostAttachOtherMeshes() { NativeCall<void>(this, "AShooterWeapon_Projectile.PostAttachOtherMeshes()"); }
	void ClearLockOn() { NativeCall<void>(this, "AShooterWeapon_Projectile.ClearLockOn()"); }
	void SetLockedTarget_Implementation(AActor* Actor, bool bIsLocked) { NativeCall<void, AActor*, bool>(this, "AShooterWeapon_Projectile.SetLockedTarget_Implementation(AActor*,bool)", Actor, bIsLocked); }
	void HideProjectile() { NativeCall<void>(this, "AShooterWeapon_Projectile.HideProjectile()"); }
	void CustomEventUnHideProjectile() { NativeCall<void>(this, "AShooterWeapon_Projectile.CustomEventUnHideProjectile()"); }
	void Tick(float DeltaSeconds) { NativeCall<void, float>(this, "AShooterWeapon_Projectile.Tick(float)", DeltaSeconds); }

	bool& bUseAmmoOnFireProjectileField() { return *GetNativePointerField<bool*>(this, "AShooterWeapon_Projectile.bUseAmmoOnFireProjectile"); }
	bool& bSpawnProjectileOnClientField() { return *GetNativePointerField<bool*>(this, "AShooterWeapon_Projectile.bSpawnProjectileOnClient"); }
	bool& bUseLockOnField() { return *GetNativePointerField<bool*>(this, "AShooterWeapon_Projectile.bUseLockOn"); }
	bool& bHasLockedTargetField() { return *GetNativePointerField<bool*>(this, "AShooterWeapon_Projectile.bHasLockedTarget"); }

	static UClass* StaticClass() { return AsaApi::ResolveClass("AShooterWeapon_Projectile"); }

	BitFieldValue<bool, unsigned char> bCallBPCustomSpawningEventOnProjectileSpawn() { return { this, "AShooterWeapon_Projectile.bCallBPCustomSpawningEventOnProjectileSpawn"}; }
	void Listener_LockOn_Stop_Implementation() { NativeCall<void>(this, "AShooterWeapon_Projectile.Listener_LockOn_Stop_Implementation()"); }
	void Listener_LockOn_Update_Implementation(bool reset) { NativeCall<void, bool>(this, "AShooterWeapon_Projectile.Listener_LockOn_Update_Implementation(bool)", reset); }
	bool ProjectToLockOnCanvas(AShooterPlayerController* PC, UCanvas* Canvas, const UE::Math::TVector<double>& WorldLocation, UE::Math::TVector2<double>& OutCanvasLocation) { return NativeCall<bool, AShooterPlayerController*, UCanvas*, const UE::Math::TVector<double>&, UE::Math::TVector2<double>&>(this, "AShooterWeapon_Projectile.ProjectToLockOnCanvas(AShooterPlayerController*,UCanvas*,UE::Math::TVector<double>&,UE::Math::TVector2<double>&)", PC, Canvas, WorldLocation, OutCanvasLocation); }
	bool IsInLockOnArea(UCanvas* Canvas, const UE::Math::TVector2<double>& CanvasLocation) { return NativeCall<bool, UCanvas*, const UE::Math::TVector2<double>&>(this, "AShooterWeapon_Projectile.IsInLockOnArea(UCanvas*,UE::Math::TVector2<double>&)", Canvas, CanvasLocation); }
	AActor* FindScreenAreaLockOnTarget(AShooterPlayerController* PC, UCanvas* Canvas, const UE::Math::TVector<double>& ViewLocation, const UE::Math::TVector<double>& ViewDirection, UE::Math::TVector<double>& OutTargetWorldPoint) { return NativeCall<AActor*, AShooterPlayerController*, UCanvas*, const UE::Math::TVector<double>&, const UE::Math::TVector<double>&, UE::Math::TVector<double>&>(this, "AShooterWeapon_Projectile.FindScreenAreaLockOnTarget(AShooterPlayerController*,UCanvas*,UE::Math::TVector<double>&,UE::Math::TVector<double>&,UE::Math::TVector<double>&)", PC, Canvas, ViewLocation, ViewDirection, OutTargetWorldPoint); }
	int CreateProjectileID() { return NativeCall<int>(this, "AShooterWeapon_Projectile.CreateProjectileID()"); }
	void BPGetProjectileSpawnTransform(UE::Math::TVector<double>& Origin, UE::Math::TVector<double>& ShootDir) { NativeCall<void, UE::Math::TVector<double>&, UE::Math::TVector<double>&>(this, "AShooterWeapon_Projectile.BPGetProjectileSpawnTransform(UE::Math::TVector<double>&,UE::Math::TVector<double>&)", Origin, ShootDir); }
	float GetProjectileGravityModifier() { return NativeCall<float>(this, "AShooterWeapon_Projectile.GetProjectileGravityModifier()"); }
	float GetProjectileSpeedModifier() { return NativeCall<float>(this, "AShooterWeapon_Projectile.GetProjectileSpeedModifier()"); }
	void DrawLockOnArea(UCanvas* Canvas) { NativeCall<void, UCanvas*>(this, "AShooterWeapon_Projectile.DrawLockOnArea(UCanvas*)", Canvas); }
	float GetLockOnXScreenPercentage() { return NativeCall<float>(this, "AShooterWeapon_Projectile.GetLockOnXScreenPercentage()"); }
	bool HasLockOnLineOfSight(const UE::Math::TVector<double>& From, AActor* Target, const UE::Math::TVector<double>& TargetPoint) { return NativeCall<bool, const UE::Math::TVector<double>&, AActor*, const UE::Math::TVector<double>&>(this, "AShooterWeapon_Projectile.HasLockOnLineOfSight(UE::Math::TVector<double>&,AActor*,UE::Math::TVector<double>&)", From, Target, TargetPoint); }
	void BPOnSpawnedProjectile(AShooterProjectile* Projectile) { NativeCall<void, AShooterProjectile*>(this, "AShooterWeapon_Projectile.BPOnSpawnedProjectile(AShooterProjectile*)", Projectile); }
	AActor* GetLockedTarget() { return NativeCall<AActor*>(this, "AShooterWeapon_Projectile.GetLockedTarget()"); }
	void Listener_LockOn_Stop() { NativeCall<void>(this, "AShooterWeapon_Projectile.Listener_LockOn_Stop()"); }
	void OnUnHideProjectile() { NativeCall<void>(this, "AShooterWeapon_Projectile.OnUnHideProjectile()"); }
	void OnEquip() { NativeCall<void>(this, "AShooterWeapon_Projectile.OnEquip()"); }
	bool ShouldUseScreenAreaLockOn() { return NativeCall<bool>(this, "AShooterWeapon_Projectile.ShouldUseScreenAreaLockOn()"); }
	UE::Math::TVector<double>* GetAdjustedAim(UE::Math::TVector<double>* result) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*>(this, "AShooterWeapon_Projectile.GetAdjustedAim()", result); }
	bool IsValidLockOnCandidate(AActor* Candidate) { return NativeCall<bool, AActor*>(this, "AShooterWeapon_Projectile.IsValidLockOnCandidate(AActor*)", Candidate); }
	bool ShouldUseBPSelectProjectileToFireV2() { return NativeCall<bool>(this, "AShooterWeapon_Projectile.ShouldUseBPSelectProjectileToFireV2()"); }
};