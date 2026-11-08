#pragma once
#include "BulkForward.h"


struct APrimalWeaponGrenade : AShooterWeapon_Projectile
{
	// Fields

	//FWeaponAnim& PrepareThrowAnimField() { return *GetNativePointerField<FWeaponAnim*>(this, "APrimalWeaponGrenade.PrepareThrowAnim"); }
	//FWeaponAnim& QuickThrowAnimField() { return *GetNativePointerField<FWeaponAnim*>(this, "APrimalWeaponGrenade.QuickThrowAnim"); }
	//FWeaponAnim& OvercookHurtAnimField() { return *GetNativePointerField<FWeaponAnim*>(this, "APrimalWeaponGrenade.OvercookHurtAnim"); }
	FName& GrenadeBoneNameField() { return *GetNativePointerField<FName*>(this, "APrimalWeaponGrenade.GrenadeBoneName"); }
	FName& GrenadePinBoneNameField() { return *GetNativePointerField<FName*>(this, "APrimalWeaponGrenade.GrenadePinBoneName"); }
	float& MaxGrenadeLifeField() { return *GetNativePointerField<float*>(this, "APrimalWeaponGrenade.MaxGrenadeLife"); }
	bool& bIsThrowingGrenadeField() { return *GetNativePointerField<bool*>(this, "APrimalWeaponGrenade.bIsThrowingGrenade"); }
	bool& bUseBlueprintSpeedField() { return *GetNativePointerField<bool*>(this, "APrimalWeaponGrenade.bUseBlueprintSpeed"); }
	float& CookingTimeField() { return *GetNativePointerField<float*>(this, "APrimalWeaponGrenade.CookingTime"); }
	UE::Math::TVector<double>& ProjectileOriginField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "APrimalWeaponGrenade.ProjectileOrigin"); }
	UE::Math::TVector<double>& ProjectileShootDirField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "APrimalWeaponGrenade.ProjectileShootDir"); }
	bool& bIsWeapScoutField() { return *GetNativePointerField<bool*>(this, "APrimalWeaponGrenade.bIsWeapScout"); }

	// Bitfields

	BitFieldValue<bool, unsigned __int32> bDontCookGrenade() { return { this, "APrimalWeaponGrenade.bDontCookGrenade" }; }
	BitFieldValue<bool, unsigned __int32> bHideGrenadeOnFireProjectile() { return { this, "APrimalWeaponGrenade.bHideGrenadeOnFireProjectile" }; }
	BitFieldValue<bool, unsigned __int32> bEnablePrepareThrowAnim() { return { this, "APrimalWeaponGrenade.bEnablePrepareThrowAnim" }; }
	BitFieldValue<bool, unsigned __int32> bPreventCookingWhileProne() { return { this, "APrimalWeaponGrenade.bPreventCookingWhileProne" }; }

	// Functions

	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// static UClass* StaticClass();
	static UClass* StaticClass() { return AsaApi::ResolveClass("APrimalWeaponGrenade"); }
	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// static void StaticRegisterNativesAPrimalWeaponGrenade();
	void StartFire(bool bFromGamepad) { NativeCall<void, bool>(this, "APrimalWeaponGrenade.StartFire(bool)", bFromGamepad); }
	void StopFire() { NativeCall<void>(this, "APrimalWeaponGrenade.StopFire()"); }
	void FireWeapon() { NativeCall<void>(this, "APrimalWeaponGrenade.FireWeapon()"); }
	void DoFireProjectile(UE::Math::TVector<double>* Origin, UE::Math::TVector<double>* ShootDir) { NativeCall<void, UE::Math::TVector<double>*, UE::Math::TVector<double>*>(this, "APrimalWeaponGrenade.DoFireProjectile(UE::Math::TVector<double>,UE::Math::TVector<double>)", Origin, ShootDir); }
	void DoFireProjectileCustom(bool bExplodeInHand) { NativeCall<void, bool>(this, "APrimalWeaponGrenade.DoFireProjectileCustom(bool)", bExplodeInHand); }
	void ApplyWeaponConfig(FProjectileWeaponData* Data) { NativeCall<void, FProjectileWeaponData*>(this, "APrimalWeaponGrenade.ApplyWeaponConfig(FProjectileWeaponData&)", Data); }
	void Tick(float DeltaSeconds) { NativeCall<void, float>(this, "APrimalWeaponGrenade.Tick(float)", DeltaSeconds); }
	void AnimNotifyCustomEvent(FName CustomEventName, USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, const UAnimNotify* AnimNotifyObject) { NativeCall<void, FName, USkeletalMeshComponent*, UAnimSequenceBase*, const UAnimNotify*>(this, "APrimalWeaponGrenade.AnimNotifyCustomEvent(FName,USkeletalMeshComponent*,UAnimSequenceBase*,UAnimNotify*)", CustomEventName, MeshComp, Animation, AnimNotifyObject); }
	void UpdateFirstPersonMeshes(bool bIsFirstPerson) { NativeCall<void, bool>(this, "APrimalWeaponGrenade.UpdateFirstPersonMeshes(bool)", bIsFirstPerson); }
	void HideGrenade() { NativeCall<void>(this, "APrimalWeaponGrenade.HideGrenade()"); }
	void UnHideGrenade(__int64 a2) { NativeCall<void, __int64>(this, "APrimalWeaponGrenade.UnHideGrenade()", a2); }
	void OnEquip() { NativeCall<void>(this, "APrimalWeaponGrenade.OnEquip()"); }
	void PlayFireAnimation() { NativeCall<void>(this, "APrimalWeaponGrenade.PlayFireAnimation()"); }
	float ServerClampProjectileSpeed(float inSpeed) { return NativeCall<float, float>(this, "APrimalWeaponGrenade.ServerClampProjectileSpeed(float)", inSpeed); }
	void FireProjectile(UE::Math::TVector<double>* Origin, FVector_NetQuantizeNormal* ShootDir, int ProjectileID) { NativeCall<void, UE::Math::TVector<double>*, FVector_NetQuantizeNormal*, int>(this, "APrimalWeaponGrenade.FireProjectile(UE::Math::TVector<double>,FVector_NetQuantizeNormal,int)", Origin, ShootDir, ProjectileID); }
	void FireProjectileEx(UE::Math::TVector<double>* Origin, FVector_NetQuantizeNormal* ShootDir, float Speed, int RandomSeed, int ProjectileID) { NativeCall<void, UE::Math::TVector<double>*, FVector_NetQuantizeNormal*, float, int, int>(this, "APrimalWeaponGrenade.FireProjectileEx(UE::Math::TVector<double>,FVector_NetQuantizeNormal,float,int,int)", Origin, ShootDir, Speed, RandomSeed, ProjectileID); }
	void ServerFixScout_Implementation() { NativeCall<void>(this, "APrimalWeaponGrenade.ServerFixScout_Implementation()"); }

	bool& bIsCookingGrenadeField() { return *GetNativePointerField<bool*>(this, "APrimalWeaponGrenade.bIsCookingGrenade"); }
	bool& bHideSkeletalMeshField() { return *GetNativePointerField<bool*>(this, "APrimalWeaponGrenade.bHideSkeletalMesh"); }
	bool& bHiddenGrenadeFPVField() { return *GetNativePointerField<bool*>(this, "APrimalWeaponGrenade.bHiddenGrenadeFPV"); }
	bool& bPlayBothFirstAndThirdPersonOnStartFireField() { return *GetNativePointerField<bool*>(this, "APrimalWeaponGrenade.bPlayBothFirstAndThirdPersonOnStartFire"); }

	FWeaponAnim& PrepareThrowAnimField() { return *GetNativePointerField<FWeaponAnim*>(this, "APrimalWeaponGrenade.PrepareThrowAnim"); }
	FWeaponAnim& QuickThrowAnimField() { return *GetNativePointerField<FWeaponAnim*>(this, "APrimalWeaponGrenade.QuickThrowAnim"); }
	FWeaponAnim& OvercookHurtAnimField() { return *GetNativePointerField<FWeaponAnim*>(this, "APrimalWeaponGrenade.OvercookHurtAnim"); }
	BitFieldValue<bool, unsigned char> bReplicateIsCookingGrenade() { return { this, "APrimalWeaponGrenade.bReplicateIsCookingGrenade"}; }
	void HidePin() { NativeCall<void>(this, "APrimalWeaponGrenade.HidePin()"); }
	float BPGetProjectileSpeed() { return NativeCall<float>(this, "APrimalWeaponGrenade.BPGetProjectileSpeed()"); }
	void BPFixScout() { NativeCall<void>(this, "APrimalWeaponGrenade.BPFixScout()"); }
	void UnHidePin() { NativeCall<void>(this, "APrimalWeaponGrenade.UnHidePin()"); }
	static void SetbIsCookingGrenade_WrapperImpl(void* Object, const void* InValue) { NativeCall<void, void*, const void*>(nullptr, "APrimalWeaponGrenade.SetbIsCookingGrenade_WrapperImpl(void*,void*)", Object, InValue); }
	static void GetbIsCookingGrenade_WrapperImpl(const void* Object, void* OutValue) { NativeCall<void, const void*, void*>(nullptr, "APrimalWeaponGrenade.GetbIsCookingGrenade_WrapperImpl(void*,void*)", Object, OutValue); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("APrimalWeaponGrenade"); }
};