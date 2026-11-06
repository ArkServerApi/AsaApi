#pragma once
#include "BulkForward.h"
#include "UObject.h"

struct UPrimalSupplyCrateItemSet : public UObject
{
public:
	UPrimalSupplyCrateItemSet() = delete;
	~UPrimalSupplyCrateItemSet() = delete;
	UPrimalSupplyCrateItemSet(const UPrimalSupplyCrateItemSet&) = delete;
	UPrimalSupplyCrateItemSet& operator=(const UPrimalSupplyCrateItemSet&) = delete;
	static UClass* StaticClass() = delete;
	static UClass* GetPrivateStaticClass() = delete;

	FSupplyCrateItemSet& ItemSetField() { return *GetNativePointerField<FSupplyCrateItemSet*>(this, "UPrimalSupplyCrateItemSet.ItemSet"); }
};
