#pragma once
#include "BulkForward.h"
#include "UCachedDB.h"

struct UPrimalStructureDB : public UCachedDB
{
public:
	UPrimalStructureDB() = delete;
	~UPrimalStructureDB() = delete;
	UPrimalStructureDB(const UPrimalStructureDB&) = delete;
	UPrimalStructureDB& operator=(const UPrimalStructureDB&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UPrimalStructureDB"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UPrimalStructureDB"); }

	void AddAsset(UClass* StructureClass) { NativeCall<void, UClass*>(this, "UPrimalStructureDB.AddAsset(UClass*)", StructureClass); }
	bool HasAsset(UClass* ClassAsset) { return NativeCall<bool, UClass*>(this, "UPrimalStructureDB.HasAsset(UClass*)", ClassAsset); }
	UClass* GetDBClass() { return NativeCall<UClass*>(this, "UPrimalStructureDB.GetDBClass()"); }
	void RemoveAllAssets() { NativeCall<void>(this, "UPrimalStructureDB.RemoveAllAssets()"); }
	void RemoveAsset(UClass* ClassAsset) { NativeCall<void, UClass*>(this, "UPrimalStructureDB.RemoveAsset(UClass*)", ClassAsset); }
};
