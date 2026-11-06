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
	static UClass* StaticClass() { return NativeCall<UClass*>(nullptr, "UNavigationSystemBase.StaticClass()"); }
	static UClass* GetPrivateStaticClass() { return StaticClass(); }

};
