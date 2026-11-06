#pragma once
#include "BulkForward.h"
#include "UCachedDB.h"

struct UShooterWeaponDB : public UCachedDB
{
public:
	UShooterWeaponDB() = delete;
	~UShooterWeaponDB() = delete;
	UShooterWeaponDB(const UShooterWeaponDB&) = delete;
	UShooterWeaponDB& operator=(const UShooterWeaponDB&) = delete;
	static UClass* StaticClass() = delete;
	static UClass* GetPrivateStaticClass() = delete;

	void AddAsset(UClass* WeaponClass) { NativeCall<void, UClass*>(this, "UShooterWeaponDB.AddAsset(UClass*)", WeaponClass); }
	UClass* GetDBClass() { return NativeCall<UClass*>(this, "UShooterWeaponDB.GetDBClass()"); }
	bool HasAsset(UClass* ClassAsset) { return NativeCall<bool, UClass*>(this, "UShooterWeaponDB.HasAsset(UClass*)", ClassAsset); }
	void RemoveAllAssets() { NativeCall<void>(this, "UShooterWeaponDB.RemoveAllAssets()"); }
	void RemoveAsset(UClass* ClassAsset) { NativeCall<void, UClass*>(this, "UShooterWeaponDB.RemoveAsset(UClass*)", ClassAsset); }
};
