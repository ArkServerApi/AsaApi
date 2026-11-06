#pragma once
#include "BulkForward.h"
#include "UBlueprintFunctionLibrary.h"

struct UPrimalEngineStatics : public UBlueprintFunctionLibrary
{
public:
	UPrimalEngineStatics() = delete;
	~UPrimalEngineStatics() = delete;
	UPrimalEngineStatics(const UPrimalEngineStatics&) = delete;
	UPrimalEngineStatics& operator=(const UPrimalEngineStatics&) = delete;
	static UClass* StaticClass() = delete;
	static UClass* GetPrivateStaticClass() = delete;

};
