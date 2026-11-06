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
	static UClass* StaticClass() { return NativeCall<UClass*>(nullptr, "UNavigationSystemV1.StaticClass()"); }
	static UClass* GetPrivateStaticClass() { return StaticClass(); }

};
