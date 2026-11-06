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
	static UClass* StaticClass() = delete;
	static UClass* GetPrivateStaticClass() = delete;

};
