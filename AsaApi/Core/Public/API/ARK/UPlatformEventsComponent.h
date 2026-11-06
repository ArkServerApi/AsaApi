#pragma once
#include "BulkForward.h"
#include "UActorComponent.h"

struct UPlatformEventsComponent : public UActorComponent
{
public:
	UPlatformEventsComponent() = delete;
	~UPlatformEventsComponent() = delete;
	UPlatformEventsComponent(const UPlatformEventsComponent&) = delete;
	UPlatformEventsComponent& operator=(const UPlatformEventsComponent&) = delete;
	static UClass* StaticClass() = delete;
	static UClass* GetPrivateStaticClass() = delete;

	void OnRegister() { NativeCall<void>(this, "UPlatformEventsComponent.OnRegister()"); }
	void OnUnregister() { NativeCall<void>(this, "UPlatformEventsComponent.OnUnregister()"); }
};
