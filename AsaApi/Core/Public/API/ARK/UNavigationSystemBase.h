#pragma once
#include "BulkForward.h"
#include "UObject.h"

struct UNavigationSystemBase : public UObject
{
public:
	UNavigationSystemBase() = delete;
	~UNavigationSystemBase() = delete;
	UNavigationSystemBase(const UNavigationSystemBase&) = delete;
	UNavigationSystemBase& operator=(const UNavigationSystemBase&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UNavigationSystemBase"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UNavigationSystemBase"); }

};
