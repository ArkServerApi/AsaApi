#pragma once
#include "BulkForward.h"
#include "UInterface.h"

struct UPrimalShipInterface : public UInterface
{
public:
	UPrimalShipInterface() = delete;
	~UPrimalShipInterface() = delete;
	UPrimalShipInterface(const UPrimalShipInterface&) = delete;
	UPrimalShipInterface& operator=(const UPrimalShipInterface&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UPrimalShipInterface"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UPrimalShipInterface"); }

};
