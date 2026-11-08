#pragma once
#include "BulkForward.h"
#include "UActorComponent.h"

struct UNinjaLiveBaseComponent : public UActorComponent
{
public:
	UNinjaLiveBaseComponent() = delete;
	~UNinjaLiveBaseComponent() = delete;
	UNinjaLiveBaseComponent(const UNinjaLiveBaseComponent&) = delete;
	UNinjaLiveBaseComponent& operator=(const UNinjaLiveBaseComponent&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UNinjaLiveBaseComponent"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UNinjaLiveBaseComponent"); }

	bool AllowRegisterWithWorld(UWorld* InWorld) { return NativeCall<bool, UWorld*>(this, "UNinjaLiveBaseComponent.AllowRegisterWithWorld(UWorld*)", InWorld); }
	int ScaleResolutionForSettings(int ToScale) { return NativeCall<int, int>(this, "UNinjaLiveBaseComponent.ScaleResolutionForSettings(int)", ToScale); }
	bool IsFluidSimEnabled() { return NativeCall<bool>(this, "UNinjaLiveBaseComponent.IsFluidSimEnabled()"); }
};
