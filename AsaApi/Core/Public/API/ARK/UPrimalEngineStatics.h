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
	static UClass* StaticClass() { return AsaApi::ResolveClass("UPrimalEngineStatics"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UPrimalEngineStatics"); }

};
