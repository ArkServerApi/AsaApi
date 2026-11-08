#pragma once
#include "BulkForward.h"
#include "UDebugDrawComponent.h"

struct UGeometryCollectionISMPoolDebugDrawComponent : public UDebugDrawComponent
{
public:
	UGeometryCollectionISMPoolDebugDrawComponent() = delete;
	~UGeometryCollectionISMPoolDebugDrawComponent() = delete;
	UGeometryCollectionISMPoolDebugDrawComponent(const UGeometryCollectionISMPoolDebugDrawComponent&) = delete;
	UGeometryCollectionISMPoolDebugDrawComponent& operator=(const UGeometryCollectionISMPoolDebugDrawComponent&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UGeometryCollectionISMPoolDebugDrawComponent"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UGeometryCollectionISMPoolDebugDrawComponent"); }

	bool& bShowGlobalStatsField() { return *GetNativePointerField<bool*>(this, "UGeometryCollectionISMPoolDebugDrawComponent.bShowGlobalStats"); }
	bool& bShowStatsField() { return *GetNativePointerField<bool*>(this, "UGeometryCollectionISMPoolDebugDrawComponent.bShowStats"); }
	bool& bShowBoundsField() { return *GetNativePointerField<bool*>(this, "UGeometryCollectionISMPoolDebugDrawComponent.bShowBounds"); }
	float& SelectTimerField() { return *GetNativePointerField<float*>(this, "UGeometryCollectionISMPoolDebugDrawComponent.SelectTimer"); }
	static void UpdateAllTickEnabled() { NativeCall<void>(nullptr, "UGeometryCollectionISMPoolDebugDrawComponent.UpdateAllTickEnabled()"); }
	void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) { NativeCall<void, float, ELevelTick, FActorComponentTickFunction*>(this, "UGeometryCollectionISMPoolDebugDrawComponent.TickComponent(float,ELevelTick,FActorComponentTickFunction*)", DeltaTime, TickType, ThisTickFunction); }
	void UpdateTickEnabled() { NativeCall<void>(this, "UGeometryCollectionISMPoolDebugDrawComponent.UpdateTickEnabled()"); }
	void EndPlay(EEndPlayReason::Type EndPlayReason) { NativeCall<void, EEndPlayReason::Type>(this, "UGeometryCollectionISMPoolDebugDrawComponent.EndPlay(EEndPlayReason::Type)", EndPlayReason); }
	void BeginPlay() { NativeCall<void>(this, "UGeometryCollectionISMPoolDebugDrawComponent.BeginPlay()"); }
};
