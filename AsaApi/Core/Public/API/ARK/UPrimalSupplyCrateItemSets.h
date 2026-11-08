#pragma once
#include "BulkForward.h"
#include "UObject.h"

struct UPrimalSupplyCrateItemSets : public UObject
{
public:
	UPrimalSupplyCrateItemSets() = delete;
	~UPrimalSupplyCrateItemSets() = delete;
	UPrimalSupplyCrateItemSets(const UPrimalSupplyCrateItemSets&) = delete;
	UPrimalSupplyCrateItemSets& operator=(const UPrimalSupplyCrateItemSets&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UPrimalSupplyCrateItemSets"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UPrimalSupplyCrateItemSets"); }

};
