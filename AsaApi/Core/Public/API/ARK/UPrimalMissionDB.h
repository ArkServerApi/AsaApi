#pragma once
#include "BulkForward.h"
#include "UCachedDB.h"

struct UPrimalMissionDB : public UCachedDB
{
public:
	UPrimalMissionDB() = delete;
	~UPrimalMissionDB() = delete;
	UPrimalMissionDB(const UPrimalMissionDB&) = delete;
	UPrimalMissionDB& operator=(const UPrimalMissionDB&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UPrimalMissionDB"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UPrimalMissionDB"); }

	void AddAsset(UClass* MissionClass) { NativeCall<void, UClass*>(this, "UPrimalMissionDB.AddAsset(UClass*)", MissionClass); }
	UClass* GetDBClass() { return NativeCall<UClass*>(this, "UPrimalMissionDB.GetDBClass()"); }
	bool HasAsset(UClass* ClassAsset) { return NativeCall<bool, UClass*>(this, "UPrimalMissionDB.HasAsset(UClass*)", ClassAsset); }
	void RemoveAllAssets() { NativeCall<void>(this, "UPrimalMissionDB.RemoveAllAssets()"); }
	void RemoveAsset(UClass* ClassAsset) { NativeCall<void, UClass*>(this, "UPrimalMissionDB.RemoveAsset(UClass*)", ClassAsset); }
};
