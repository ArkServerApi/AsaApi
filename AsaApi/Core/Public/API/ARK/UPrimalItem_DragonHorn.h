#pragma once
#include "GameplayForward.h"
#include "UPrimalItem.h"

struct UPrimalItem_DragonHorn : UPrimalItem
{
public:
	UPrimalItem_DragonHorn() = delete;
	~UPrimalItem_DragonHorn() = delete;
	UPrimalItem_DragonHorn(const UPrimalItem_DragonHorn&) = delete;
	UPrimalItem_DragonHorn& operator=(const UPrimalItem_DragonHorn&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UPrimalItem_DragonHorn"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UPrimalItem_DragonHorn"); }



	void SyncDisplayFromDragonHornBuff(APrimalBuff_DragonHorn* DragonHornBuff) { NativeCall<void, APrimalBuff_DragonHorn*>(this, "UPrimalItem_DragonHorn.SyncDisplayFromDragonHornBuff(APrimalBuff_DragonHorn*)", DragonHornBuff); }
	void Use(bool bOverridePlayerInput) { NativeCall<void, bool>(this, "UPrimalItem_DragonHorn.Use(bool)", bOverridePlayerInput); }
	void LocalUse(AShooterPlayerController* ForPC) { NativeCall<void, AShooterPlayerController*>(this, "UPrimalItem_DragonHorn.LocalUse(AShooterPlayerController*)", ForPC); }
	bool OpenDragonHornRadial(AShooterPlayerController* ForPC) { return NativeCall<bool, AShooterPlayerController*>(this, "UPrimalItem_DragonHorn.OpenDragonHornRadial(AShooterPlayerController*)", ForPC); }
	bool CanUse(bool bIgnoreCooldown) { return NativeCall<bool, bool>(this, "UPrimalItem_DragonHorn.CanUse(bool)", bIgnoreCooldown); }
};
