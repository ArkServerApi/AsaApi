#pragma once
#include "BulkForward.h"
#include "UNavigationSystemConfig.h"

struct UNavigationSystemModuleConfig : public UNavigationSystemConfig
{
public:
	UNavigationSystemModuleConfig() = delete;
	~UNavigationSystemModuleConfig() = delete;
	UNavigationSystemModuleConfig(const UNavigationSystemModuleConfig&) = delete;
	UNavigationSystemModuleConfig& operator=(const UNavigationSystemModuleConfig&) = delete;
	static UClass* StaticClass() = delete;
	static UClass* GetPrivateStaticClass() = delete;

};
