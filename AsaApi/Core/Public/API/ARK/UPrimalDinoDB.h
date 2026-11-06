#pragma once
#include "BulkForward.h"
#include "UCachedDB.h"

struct UPrimalDinoDB : public UCachedDB
{
public:
	UPrimalDinoDB() = delete;
	~UPrimalDinoDB() = delete;
	UPrimalDinoDB(const UPrimalDinoDB&) = delete;
	UPrimalDinoDB& operator=(const UPrimalDinoDB&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UPrimalDinoDB"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UPrimalDinoDB"); }

	bool HasAsset(UClass* ClassAsset) { return NativeCall<bool, UClass*>(this, "UPrimalDinoDB.HasAsset(UClass*)", ClassAsset); }
	void RemoveAllAssets() { NativeCall<void>(this, "UPrimalDinoDB.RemoveAllAssets()"); }
	UClass* GetDBClass() { return NativeCall<UClass*>(this, "UPrimalDinoDB.GetDBClass()"); }
	void AddAsset(UClass* DinoClass) { NativeCall<void, UClass*>(this, "UPrimalDinoDB.AddAsset(UClass*)", DinoClass); }
	void RemoveAsset(UClass* ClassAsset) { NativeCall<void, UClass*>(this, "UPrimalDinoDB.RemoveAsset(UClass*)", ClassAsset); }
};
