#pragma once
#include "BulkForward.h"


struct AShooterWeapon_Melee : AShooterWeapon
{
	// Fields

	  // Bitfields

	  // Functions

	static UClass* StaticClass() { return GetPrivateStaticClass(); }
	static UClass* GetPrivateStaticClass() { return NativeCall<UClass*>(nullptr, "AShooterWeapon_Melee.StaticClass()"); }
	void FireWeapon() { NativeCall<void>(this, "AShooterWeapon_Melee.FireWeapon()"); }
	void StartFire(bool bFromGamepad) { NativeCall<void, bool>(this, "AShooterWeapon_Melee.StartFire(bool)", bFromGamepad); }
	void StopFire() { NativeCall<void>(this, "AShooterWeapon_Melee.StopFire()"); }
	void StartSecondaryAction() { NativeCall<void>(this, "AShooterWeapon_Melee.StartSecondaryAction()"); }
	void StartReload(bool bFromReplication) { NativeCall<void, bool>(this, "AShooterWeapon_Melee.StartReload(bool)", bFromReplication); }

	bool& bUseAltFireOnNormalFireField() { return *GetNativePointerField<bool*>(this, "AShooterWeapon_Melee.bUseAltFireOnNormalFire"); }

	void StartAltFire() { NativeCall<void>(this, "AShooterWeapon_Melee.StartAltFire()"); }
};