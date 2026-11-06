#pragma once
#include "BulkForward.h"
#include "UActorComponent.h"

struct UApplicationLifecycleComponent : public UActorComponent
{
public:
	UApplicationLifecycleComponent() = delete;
	~UApplicationLifecycleComponent() = delete;
	UApplicationLifecycleComponent(const UApplicationLifecycleComponent&) = delete;
	UApplicationLifecycleComponent& operator=(const UApplicationLifecycleComponent&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UApplicationLifecycleComponent"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UApplicationLifecycleComponent"); }

	void OnRegister() { NativeCall<void>(this, "UApplicationLifecycleComponent.OnRegister()"); }
	void ApplicationHasReactivatedDelegate_Handler() { NativeCall<void>(this, "UApplicationLifecycleComponent.ApplicationHasReactivatedDelegate_Handler()"); }
	void ApplicationWillEnterBackgroundDelegate_Handler() { NativeCall<void>(this, "UApplicationLifecycleComponent.ApplicationWillEnterBackgroundDelegate_Handler()"); }
	void ApplicationShouldUnloadResourcesDelegate_Handler() { NativeCall<void>(this, "UApplicationLifecycleComponent.ApplicationShouldUnloadResourcesDelegate_Handler()"); }
	void OnUnregister() { NativeCall<void>(this, "UApplicationLifecycleComponent.OnUnregister()"); }
	void ApplicationWillTerminateDelegate_Handler() { NativeCall<void>(this, "UApplicationLifecycleComponent.ApplicationWillTerminateDelegate_Handler()"); }
	void OnLowPowerModeDelegate_Handler(bool bInLowerPowerMode) { NativeCall<void, bool>(this, "UApplicationLifecycleComponent.OnLowPowerModeDelegate_Handler(bool)", bInLowerPowerMode); }
	void ApplicationWillDeactivateDelegate_Handler() { NativeCall<void>(this, "UApplicationLifecycleComponent.ApplicationWillDeactivateDelegate_Handler()"); }
	void ApplicationHasEnteredForegroundDelegate_Handler() { NativeCall<void>(this, "UApplicationLifecycleComponent.ApplicationHasEnteredForegroundDelegate_Handler()"); }
	void ApplicationReceivedStartupArgumentsDelegate_Handler(const TArray<FString, TSizedDefaultAllocator<32> >& StartupArguments) { NativeCall<void, const TArray<FString, TSizedDefaultAllocator<32> >&>(this, "UApplicationLifecycleComponent.ApplicationReceivedStartupArgumentsDelegate_Handler(TArray<FString,TSizedDefaultAllocator<32>>&)", StartupArguments); }
};
