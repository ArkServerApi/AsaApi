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
	static UClass* StaticClass() = delete;
	static UClass* GetPrivateStaticClass() = delete;

};
