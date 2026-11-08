#pragma once
#include "BulkForward.h"
#include "UPrimalItem.h"

struct UPrimalItem_CruiseMissile : public UPrimalItem
{
public:
	UPrimalItem_CruiseMissile() = delete;
	~UPrimalItem_CruiseMissile() = delete;
	UPrimalItem_CruiseMissile(const UPrimalItem_CruiseMissile&) = delete;
	UPrimalItem_CruiseMissile& operator=(const UPrimalItem_CruiseMissile&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UPrimalItem_CruiseMissile"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UPrimalItem_CruiseMissile"); }

};
