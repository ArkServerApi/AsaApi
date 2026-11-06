#pragma once
#include "BulkForward.h"
#include "UNavigationSystemModuleConfig.h"

struct UPrimalNavigationSystemConfig : public UNavigationSystemModuleConfig
{
public:
	UPrimalNavigationSystemConfig() = delete;
	~UPrimalNavigationSystemConfig() = delete;
	UPrimalNavigationSystemConfig(const UPrimalNavigationSystemConfig&) = delete;
	UPrimalNavigationSystemConfig& operator=(const UPrimalNavigationSystemConfig&) = delete;
	static UClass* StaticClass() = delete;
	static UClass* GetPrivateStaticClass() = delete;

	bool& bEnableShouldDiscardSubLevelNavDataOverrideField() { return *GetNativePointerField<bool*>(this, "UPrimalNavigationSystemConfig.bEnableShouldDiscardSubLevelNavDataOverride"); }
	bool& bShouldDiscardSubLevelNavDataOverrideField() { return *GetNativePointerField<bool*>(this, "UPrimalNavigationSystemConfig.bShouldDiscardSubLevelNavDataOverride"); }
	bool& bEnableGenerateNavigationOnlyAroundNavigationInvokersOverrideField() { return *GetNativePointerField<bool*>(this, "UPrimalNavigationSystemConfig.bEnableGenerateNavigationOnlyAroundNavigationInvokersOverride"); }
	bool& bGenerateNavigationOnlyAroundNavigationInvokersOverrideField() { return *GetNativePointerField<bool*>(this, "UPrimalNavigationSystemConfig.bGenerateNavigationOnlyAroundNavigationInvokersOverride"); }
	void PostInitProperties() { NativeCall<void>(this, "UPrimalNavigationSystemConfig.PostInitProperties()"); }
	UNavigationSystemBase* CreateAndConfigureNavigationSystem(UWorld& World) { return NativeCall<UNavigationSystemBase*, UWorld&>(this, "UPrimalNavigationSystemConfig.CreateAndConfigureNavigationSystem(UWorld&)", World); }
};
