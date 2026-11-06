#pragma once
#include "BulkForward.h"
#include "GameplayForward.h"
#include "APrimalWeaponBow.h"

struct APrimalWeaponBoomerang : APrimalWeaponBow
{
public:
	APrimalWeaponBoomerang() = delete;
	~APrimalWeaponBoomerang() = delete;
	APrimalWeaponBoomerang(const APrimalWeaponBoomerang&) = delete;
	APrimalWeaponBoomerang& operator=(const APrimalWeaponBoomerang&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("APrimalWeaponBoomerang"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("APrimalWeaponBoomerang"); }

	float& chanceToBreakField() { return *GetNativePointerField<float*>(this, "APrimalWeaponBoomerang.chanceToBreak"); }

	void OnRep_ClientHideBoomerang() { NativeCall<void>(this, "APrimalWeaponBoomerang.OnRep_ClientHideBoomerang()"); }
	void OnBoomerangLaunch() { NativeCall<void>(this, "APrimalWeaponBoomerang.OnBoomerangLaunch()"); }
	void OnEquip() { NativeCall<void>(this, "APrimalWeaponBoomerang.OnEquip()"); }
	bool CanReload() { return NativeCall<bool>(this, "APrimalWeaponBoomerang.CanReload()"); }
	void BeginPlay() { NativeCall<void>(this, "APrimalWeaponBoomerang.BeginPlay()"); }
	void UnHideArrow() { NativeCall<void>(this, "APrimalWeaponBoomerang.UnHideArrow()"); }
	bool CanMeleeAttack() { return NativeCall<bool>(this, "APrimalWeaponBoomerang.CanMeleeAttack()"); }
	void OnBoomerangReturn() { NativeCall<void>(this, "APrimalWeaponBoomerang.OnBoomerangReturn()"); }

	BitFieldValue<bool, unsigned char> bClientHideBoomerang() { return { this, "APrimalWeaponBoomerang.bClientHideBoomerang"}; }
	BitFieldValue<bool, unsigned char> bHasThrownBoomerang() { return { this, "APrimalWeaponBoomerang.bHasThrownBoomerang"}; }
	BitFieldValue<bool, unsigned char> bBoomerangReturnedThisFrame() { return { this, "APrimalWeaponBoomerang.bBoomerangReturnedThisFrame"}; }

	static void GetbClientHideBoomerang_WrapperImpl(const void* Object, void* OutValue) { NativeCall<void, const void*, void*>(nullptr, "APrimalWeaponBoomerang.GetbClientHideBoomerang_WrapperImpl(void*,void*)", Object, OutValue); }
	static void SetbClientHideBoomerang_WrapperImpl(void* Object, const void* InValue) { NativeCall<void, void*, const void*>(nullptr, "APrimalWeaponBoomerang.SetbClientHideBoomerang_WrapperImpl(void*,void*)", Object, InValue); }
};
