#pragma once
#include "BulkForward.h"
#include "UCachedDB.h"

struct UPrimalInventoryDB : public UCachedDB
{
public:
	UPrimalInventoryDB() = delete;
	~UPrimalInventoryDB() = delete;
	UPrimalInventoryDB(const UPrimalInventoryDB&) = delete;
	UPrimalInventoryDB& operator=(const UPrimalInventoryDB&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UPrimalInventoryDB"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UPrimalInventoryDB"); }

	UClass* GetDBClass() { return NativeCall<UClass*>(this, "UPrimalInventoryDB.GetDBClass()"); }
	void AddAsset(UClass* InventoryClass) { NativeCall<void, UClass*>(this, "UPrimalInventoryDB.AddAsset(UClass*)", InventoryClass); }
	bool HasAsset(UClass* ClassAsset) { return NativeCall<bool, UClass*>(this, "UPrimalInventoryDB.HasAsset(UClass*)", ClassAsset); }
	void RemoveAsset(UClass* ClassAsset) { NativeCall<void, UClass*>(this, "UPrimalInventoryDB.RemoveAsset(UClass*)", ClassAsset); }
	void RemoveAllAssets() { NativeCall<void>(this, "UPrimalInventoryDB.RemoveAllAssets()"); }
};
