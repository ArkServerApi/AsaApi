#pragma once
#include "UEObjectForward.h"
#include "BulkForward.h"
#include "UObject.h"

class UAudioBus : public UObject
{
public:
	UAudioBus() = delete;
	~UAudioBus() = delete;
	UAudioBus(const UAudioBus&) = delete;
	UAudioBus& operator=(const UAudioBus&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UAudioBus"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UAudioBus"); }
	void BeginDestroy() { NativeCall<void>(this, "UAudioBus.BeginDestroy()"); }
};
