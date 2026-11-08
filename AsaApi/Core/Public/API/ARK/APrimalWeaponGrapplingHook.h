#pragma once
#include "BulkForward.h"


struct APrimalWeaponGrapplingHook : AShooterWeapon_Projectile
{
	// Fields

	bool& bPreventReelingField() { return *GetNativePointerField<bool*>(this, "APrimalWeaponGrapplingHook.bPreventReeling"); }
	long double& LastTimeWithGrapHookField() { return *GetNativePointerField<long double*>(this, "APrimalWeaponGrapplingHook.LastTimeWithGrapHook"); }
	USceneComponent*& CableAttach1PField() { return *GetNativePointerField<USceneComponent**>(this, "APrimalWeaponGrapplingHook.CableAttach1P"); }
	USceneComponent*& CableAttach3PField() { return *GetNativePointerField<USceneComponent**>(this, "APrimalWeaponGrapplingHook.CableAttach3P"); }
	USoundCue*& ReelInSoundCueField() { return *GetNativePointerField<USoundCue**>(this, "APrimalWeaponGrapplingHook.ReelInSoundCue"); }
	USoundCue*& ReelOutSoundCueField() { return *GetNativePointerField<USoundCue**>(this, "APrimalWeaponGrapplingHook.ReelOutSoundCue"); }

	// Bitfields

	// Functions

	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// static UClass* StaticClass();
	static UClass* StaticClass() { return AsaApi::ResolveClass("APrimalWeaponGrapplingHook"); }
	void BeginPlay() { NativeCall<void>(this, "APrimalWeaponGrapplingHook.BeginPlay()"); }
	void StartFire(bool bFromGamepad) { NativeCall<void, bool>(this, "APrimalWeaponGrapplingHook.StartFire(bool)", bFromGamepad); }
	void StopFire() { NativeCall<void>(this, "APrimalWeaponGrapplingHook.StopFire()"); }
	void StartSecondaryAction() { NativeCall<void>(this, "APrimalWeaponGrapplingHook.StartSecondaryAction()"); }
	void StopSecondaryAction() { NativeCall<void>(this, "APrimalWeaponGrapplingHook.StopSecondaryAction()"); }
	void OnEquip() { NativeCall<void>(this, "APrimalWeaponGrapplingHook.OnEquip()"); }
	void StartUnequip_Implementation() { NativeCall<void>(this, "APrimalWeaponGrapplingHook.StartUnequip_Implementation()"); }
	void Tick(float DeltaSeconds) { NativeCall<void, float>(this, "APrimalWeaponGrapplingHook.Tick(float)", DeltaSeconds); }
	bool CanFire(bool bForceAllowSubmergedFiring) { return NativeCall<bool, bool>(this, "APrimalWeaponGrapplingHook.CanFire(bool)", bForceAllowSubmergedFiring); }
	bool CanReload() { return NativeCall<bool>(this, "APrimalWeaponGrapplingHook.CanReload()"); }
	bool CanTarget() { return NativeCall<bool>(this, "APrimalWeaponGrapplingHook.CanTarget()"); }
	void Destroyed() { NativeCall<void>(this, "APrimalWeaponGrapplingHook.Destroyed()"); }
	float PlayReloadAnimation() { return NativeCall<float>(this, "APrimalWeaponGrapplingHook.PlayReloadAnimation()"); }
	//FWeaponAnim* GetReloadAnim(FWeaponAnim* result, bool bOnlyCheckRegularReload) { return NativeCall<FWeaponAnim*, FWeaponAnim*, bool>(this, "APrimalWeaponGrapplingHook.GetReloadAnim(bool)", result, bOnlyCheckRegularReload); }

	bool& bDetachGrapHookOnUnequipField() { return *GetNativePointerField<bool*>(this, "APrimalWeaponGrapplingHook.bDetachGrapHookOnUnequip"); }
	bool& bPullingRopeField() { return *GetNativePointerField<bool*>(this, "APrimalWeaponGrapplingHook.bPullingRope"); }

	USceneComponent* GetCableAttachComponent() { return NativeCall<USceneComponent*>(this, "APrimalWeaponGrapplingHook.GetCableAttachComponent()"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("APrimalWeaponGrapplingHook"); }
};