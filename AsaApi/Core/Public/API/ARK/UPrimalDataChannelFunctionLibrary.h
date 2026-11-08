#pragma once
#include "BulkForward.h"
#include "UBlueprintFunctionLibrary.h"

struct UPrimalDataChannelFunctionLibrary : public UBlueprintFunctionLibrary
{
public:
	UPrimalDataChannelFunctionLibrary() = delete;
	~UPrimalDataChannelFunctionLibrary() = delete;
	UPrimalDataChannelFunctionLibrary(const UPrimalDataChannelFunctionLibrary&) = delete;
	UPrimalDataChannelFunctionLibrary& operator=(const UPrimalDataChannelFunctionLibrary&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UPrimalDataChannelFunctionLibrary"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UPrimalDataChannelFunctionLibrary"); }

};
