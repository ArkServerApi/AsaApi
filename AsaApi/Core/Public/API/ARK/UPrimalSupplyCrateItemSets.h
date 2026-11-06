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
	static UClass* StaticClass() = delete;
	static UClass* GetPrivateStaticClass() = delete;

};
