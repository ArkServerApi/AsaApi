#pragma once
#include "BulkForward.h"


struct AShooterWeapon_ChainSaw : AShooterWeapon
{
	// Fields

	//TArray<FWeaponAnim, TSizedDefaultAllocator<32> >& ShootAnimListField() { return *GetNativePointerField<TArray<FWeaponAnim, TSizedDefaultAllocator<32> >*>(this, "AShooterWeapon_ChainSaw.ShootAnimList"); }
	//TArray<FWeaponAnim, TSizedDefaultAllocator<32> >& ShootWithHitAnimListField() { return *GetNativePointerField<TArray<FWeaponAnim, TSizedDefaultAllocator<32> >*>(this, "AShooterWeapon_ChainSaw.ShootWithHitAnimList"); }
	USoundCue*& IdleSoundField() { return *GetNativePointerField<USoundCue**>(this, "AShooterWeapon_ChainSaw.IdleSound"); }
	UAudioComponent*& IdleACField() { return *GetNativePointerField<UAudioComponent**>(this, "AShooterWeapon_ChainSaw.IdleAC"); }
	bool& bLastShootHitStationaryField() { return *GetNativePointerField<bool*>(this, "AShooterWeapon_ChainSaw.bLastShootHitStationary"); }

	// Bitfields

	// Functions

	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// static UClass* StaticClass();
	static UClass* StaticClass() { return AsaApi::ResolveClass("AShooterWeapon_ChainSaw"); }
	void ServerReloadWeapon() { NativeCall<void>(this, "AShooterWeapon_ChainSaw.ServerReloadWeapon()"); }
	void ServerStopFireAnim() { NativeCall<void>(this, "AShooterWeapon_ChainSaw.ServerStopFireAnim()"); }
	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// static void StaticRegisterNativesAShooterWeapon_ChainSaw();
	void StopAltFire() { NativeCall<void>(this, "AShooterWeapon_ChainSaw.StopAltFire()"); }
	void StopFire() { NativeCall<void>(this, "AShooterWeapon_ChainSaw.StopFire()"); }
	void FireWeapon() { NativeCall<void>(this, "AShooterWeapon_ChainSaw.FireWeapon()"); }
	void SimulateChangeFireAnim() { NativeCall<void>(this, "AShooterWeapon_ChainSaw.SimulateChangeFireAnim()"); }
	void ClientSimulateChangeFireAnim_Implementation() { NativeCall<void>(this, "AShooterWeapon_ChainSaw.ClientSimulateChangeFireAnim_Implementation()"); }
	void PlayFireAnimation() { NativeCall<void>(this, "AShooterWeapon_ChainSaw.PlayFireAnimation()"); }
	void PlayUnequipAnimation() { NativeCall<void>(this, "AShooterWeapon_ChainSaw.PlayUnequipAnimation()"); }
	void StopFireAnim() { NativeCall<void>(this, "AShooterWeapon_ChainSaw.StopFireAnim()"); }
	void ServerStopFireAnim_Implementation() { NativeCall<void>(this, "AShooterWeapon_ChainSaw.ServerStopFireAnim_Implementation()"); }
	void OnEquipFinished() { NativeCall<void>(this, "AShooterWeapon_ChainSaw.OnEquipFinished()"); }
	void SimulateWeaponFire() { NativeCall<void>(this, "AShooterWeapon_ChainSaw.SimulateWeaponFire()"); }
	void StopSimulatingWeaponFire() { NativeCall<void>(this, "AShooterWeapon_ChainSaw.StopSimulatingWeaponFire()"); }
	void StopOwnerEffects() { NativeCall<void>(this, "AShooterWeapon_ChainSaw.StopOwnerEffects()"); }
	void ServerReloadWeapon_Implementation() { NativeCall<void>(this, "AShooterWeapon_ChainSaw.ServerReloadWeapon_Implementation()"); }
	void SetWeaponState(EWeaponState::Type NewState) { NativeCall<void, EWeaponState::Type>(this, "AShooterWeapon_ChainSaw.SetWeaponState(EWeaponState::Type)", NewState); }
	void ServerHit_Implementation(bool a2) { NativeCall<void, bool>(this, "AShooterWeapon_ChainSaw.ServerHit_Implementation()", a2); }

	bool& bPreviousLastShootHitStationaryField() { return *GetNativePointerField<bool*>(this, "AShooterWeapon_ChainSaw.bPreviousLastShootHitStationary"); }

	void ClientSimulateChangeFireAnim() { NativeCall<void>(this, "AShooterWeapon_ChainSaw.ClientSimulateChangeFireAnim()"); }
	void StartAltFire() { NativeCall<void>(this, "AShooterWeapon_ChainSaw.StartAltFire()"); }
	void ServerHit() { NativeCall<void>(this, "AShooterWeapon_ChainSaw.ServerHit()"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("AShooterWeapon_ChainSaw"); }
};