#pragma once
#include "BulkForward.h"
#include "UNavigationSystemBase.h"

struct UNavigationSystemV1 : public UNavigationSystemBase
{
public:
	UNavigationSystemV1() = delete;
	~UNavigationSystemV1() = delete;
	UNavigationSystemV1(const UNavigationSystemV1&) = delete;
	UNavigationSystemV1& operator=(const UNavigationSystemV1&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UNavigationSystemV1"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UNavigationSystemV1"); }

};
