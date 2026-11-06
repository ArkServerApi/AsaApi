#pragma once
#include "BulkForward.h"
#include "UBlueprintFunctionLibrary.h"

struct UPrimalAutocastFunctions : public UBlueprintFunctionLibrary
{
public:
	UPrimalAutocastFunctions() = delete;
	~UPrimalAutocastFunctions() = delete;
	UPrimalAutocastFunctions(const UPrimalAutocastFunctions&) = delete;
	UPrimalAutocastFunctions& operator=(const UPrimalAutocastFunctions&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UPrimalAutocastFunctions"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UPrimalAutocastFunctions"); }

};
