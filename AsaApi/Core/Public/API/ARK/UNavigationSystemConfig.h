#pragma once
#include "BulkForward.h"
#include "UObject.h"

struct UNavigationSystemConfig : public UObject
{
public:
	UNavigationSystemConfig() = delete;
	~UNavigationSystemConfig() = delete;
	UNavigationSystemConfig(const UNavigationSystemConfig&) = delete;
	UNavigationSystemConfig& operator=(const UNavigationSystemConfig&) = delete;
	static UClass* StaticClass() { return NativeCall<UClass*>(nullptr, "UNavigationSystemConfig.StaticClass()"); }
	static UClass* GetPrivateStaticClass() { return StaticClass(); }

};
