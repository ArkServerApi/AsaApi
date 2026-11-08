#pragma once
#include "BulkForward.h"
#include "UDebugDrawComponent.h"

struct UISMPoolDebugDrawComponent : public UDebugDrawComponent
{
public:
	UISMPoolDebugDrawComponent() = delete;
	~UISMPoolDebugDrawComponent() = delete;
	UISMPoolDebugDrawComponent(const UISMPoolDebugDrawComponent&) = delete;
	UISMPoolDebugDrawComponent& operator=(const UISMPoolDebugDrawComponent&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UISMPoolDebugDrawComponent"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UISMPoolDebugDrawComponent"); }

	bool& bShowGlobalStatsField() { return *GetNativePointerField<bool*>(this, "UISMPoolDebugDrawComponent.bShowGlobalStats"); }
	bool& bShowStatsField() { return *GetNativePointerField<bool*>(this, "UISMPoolDebugDrawComponent.bShowStats"); }
	bool& bShowBoundsField() { return *GetNativePointerField<bool*>(this, "UISMPoolDebugDrawComponent.bShowBounds"); }
	float& SelectTimerField() { return *GetNativePointerField<float*>(this, "UISMPoolDebugDrawComponent.SelectTimer"); }
	void BeginPlay() { NativeCall<void>(this, "UISMPoolDebugDrawComponent.BeginPlay()"); }
	void UpdateTickEnabled() { NativeCall<void>(this, "UISMPoolDebugDrawComponent.UpdateTickEnabled()"); }
	static void UpdateAllTickEnabled() { NativeCall<void>(nullptr, "UISMPoolDebugDrawComponent.UpdateAllTickEnabled()"); }
	void EndPlay(EEndPlayReason::Type EndPlayReason) { NativeCall<void, EEndPlayReason::Type>(this, "UISMPoolDebugDrawComponent.EndPlay(EEndPlayReason::Type)", EndPlayReason); }
	void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) { NativeCall<void, float, ELevelTick, FActorComponentTickFunction*>(this, "UISMPoolDebugDrawComponent.TickComponent(float,ELevelTick,FActorComponentTickFunction*)", DeltaTime, TickType, ThisTickFunction); }
};
