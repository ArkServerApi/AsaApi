#pragma once
#include "BulkForward.h"
#include "UPrimalInventoryComponent.h"

struct UPrimalInventoryComponent_Static : public UPrimalInventoryComponent
{
public:
	UPrimalInventoryComponent_Static() = delete;
	~UPrimalInventoryComponent_Static() = delete;
	UPrimalInventoryComponent_Static(const UPrimalInventoryComponent_Static&) = delete;
	UPrimalInventoryComponent_Static& operator=(const UPrimalInventoryComponent_Static&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UPrimalInventoryComponent_Static"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UPrimalInventoryComponent_Static"); }

};
