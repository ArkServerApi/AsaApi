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
	static UClass* StaticClass() { return AsaApi::ResolveClass("UPrimalSupplyCrateItemSet"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UPrimalSupplyCrateItemSet"); }

	FSupplyCrateItemSet& ItemSetField() { return *GetNativePointerField<FSupplyCrateItemSet*>(this, "UPrimalSupplyCrateItemSet.ItemSet"); }
};
