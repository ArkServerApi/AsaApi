#pragma once
#include "BulkForward.h"
#include "UActorComponent.h"

struct UChaosDebugDrawComponent : public UActorComponent
{
public:
	UChaosDebugDrawComponent() = delete;
	~UChaosDebugDrawComponent() = delete;
	UChaosDebugDrawComponent(const UChaosDebugDrawComponent&) = delete;
	UChaosDebugDrawComponent& operator=(const UChaosDebugDrawComponent&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UChaosDebugDrawComponent"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UChaosDebugDrawComponent"); }

	bool& bInPlayField() { return *GetNativePointerField<bool*>(this, "UChaosDebugDrawComponent.bInPlay"); }
	void BeginPlay() { NativeCall<void>(this, "UChaosDebugDrawComponent.BeginPlay()"); }
	void BeginDestroy() { NativeCall<void>(this, "UChaosDebugDrawComponent.BeginDestroy()"); }
	void EndPlay(EEndPlayReason::Type EndPlayReason) { NativeCall<void, EEndPlayReason::Type>(this, "UChaosDebugDrawComponent.EndPlay(EEndPlayReason::Type)", EndPlayReason); }
	void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) { NativeCall<void, float, ELevelTick, FActorComponentTickFunction*>(this, "UChaosDebugDrawComponent.TickComponent(float,ELevelTick,FActorComponentTickFunction*)", DeltaTime, TickType, ThisTickFunction); }
};
