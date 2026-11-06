#pragma once
#include "UEObjectForward.h"
#include "BulkForward.h"
#include "UObject.h"

class UHLODProxy : public UObject
{
public:
	UHLODProxy() = delete;
	~UHLODProxy() = delete;
	UHLODProxy(const UHLODProxy&) = delete;
	UHLODProxy& operator=(const UHLODProxy&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UHLODProxy"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UHLODProxy"); }
};
