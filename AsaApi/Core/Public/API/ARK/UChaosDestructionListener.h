#pragma once
#include "BulkForward.h"
#include "USceneComponent.h"

struct UChaosDestructionListener : public USceneComponent
{
public:
	UChaosDestructionListener() = delete;
	~UChaosDestructionListener() = delete;
	UChaosDestructionListener(const UChaosDestructionListener&) = delete;
	UChaosDestructionListener& operator=(const UChaosDestructionListener&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UChaosDestructionListener"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UChaosDestructionListener"); }

	FChaosCollisionEventRequestSettings& CollisionEventRequestSettingsField() { return *GetNativePointerField<FChaosCollisionEventRequestSettings*>(this, "UChaosDestructionListener.CollisionEventRequestSettings"); }
	FChaosBreakingEventRequestSettings& BreakingEventRequestSettingsField() { return *GetNativePointerField<FChaosBreakingEventRequestSettings*>(this, "UChaosDestructionListener.BreakingEventRequestSettings"); }
	FChaosTrailingEventRequestSettings& TrailingEventRequestSettingsField() { return *GetNativePointerField<FChaosTrailingEventRequestSettings*>(this, "UChaosDestructionListener.TrailingEventRequestSettings"); }
	FChaosRemovalEventRequestSettings& RemovalEventRequestSettingsField() { return *GetNativePointerField<FChaosRemovalEventRequestSettings*>(this, "UChaosDestructionListener.RemovalEventRequestSettings"); }
	FOnChaosCollisionEvents& OnCollisionEventsField() { return *GetNativePointerField<FOnChaosCollisionEvents*>(this, "UChaosDestructionListener.OnCollisionEvents"); }
	FOnChaosBreakingEvents& OnBreakingEventsField() { return *GetNativePointerField<FOnChaosBreakingEvents*>(this, "UChaosDestructionListener.OnBreakingEvents"); }
	FOnChaosTrailingEvents& OnTrailingEventsField() { return *GetNativePointerField<FOnChaosTrailingEvents*>(this, "UChaosDestructionListener.OnTrailingEvents"); }
	FOnChaosRemovalEvents& OnRemovalEventsField() { return *GetNativePointerField<FOnChaosRemovalEvents*>(this, "UChaosDestructionListener.OnRemovalEvents"); }
	FThreadSafeCounter& TaskStateField() { return *GetNativePointerField<FThreadSafeCounter*>(this, "UChaosDestructionListener.TaskState"); }
	FThreadSafeBool& bChangedField() { return *GetNativePointerField<FThreadSafeBool*>(this, "UChaosDestructionListener.bChanged"); }
	float& LastCollisionDataTimeStampField() { return *GetNativePointerField<float*>(this, "UChaosDestructionListener.LastCollisionDataTimeStamp"); }
	float& LastBreakingDataTimeStampField() { return *GetNativePointerField<float*>(this, "UChaosDestructionListener.LastBreakingDataTimeStamp"); }
	float& LastTrailingDataTimeStampField() { return *GetNativePointerField<float*>(this, "UChaosDestructionListener.LastTrailingDataTimeStamp"); }
	float& LastRemovalDataTimeStampField() { return *GetNativePointerField<float*>(this, "UChaosDestructionListener.LastRemovalDataTimeStamp"); }
	TArray<FGeometryCollectionPhysicsProxy const*, TSizedDefaultAllocator<32> >& GeometryCollectionPhysicsProxiesField() { return *GetNativePointerField<TArray<FGeometryCollectionPhysicsProxy const*, TSizedDefaultAllocator<32> >*>(this, "UChaosDestructionListener.GeometryCollectionPhysicsProxies"); }
	BitFieldValue<bool, unsigned char> bIsCollisionEventListeningEnabled() { return { this, "UChaosDestructionListener.bIsCollisionEventListeningEnabled"}; }
	BitFieldValue<bool, unsigned char> bIsBreakingEventListeningEnabled() { return { this, "UChaosDestructionListener.bIsBreakingEventListeningEnabled"}; }
	BitFieldValue<bool, unsigned char> bIsTrailingEventListeningEnabled() { return { this, "UChaosDestructionListener.bIsTrailingEventListeningEnabled"}; }
	BitFieldValue<bool, unsigned char> bIsRemovalEventListeningEnabled() { return { this, "UChaosDestructionListener.bIsRemovalEventListeningEnabled"}; }
	void ClearEvents() { NativeCall<void>(this, "UChaosDestructionListener.ClearEvents()"); }
	void EndPlay(EEndPlayReason::Type EndPlayReason) { NativeCall<void, EEndPlayReason::Type>(this, "UChaosDestructionListener.EndPlay(EEndPlayReason::Type)", EndPlayReason); }
	void RegisterChaosEvents(FPhysScene_Chaos* Scene) { NativeCall<void, FPhysScene_Chaos*>(this, "UChaosDestructionListener.RegisterChaosEvents(FPhysScene_Chaos*)", Scene); }
	void BeginPlay() { NativeCall<void>(this, "UChaosDestructionListener.BeginPlay()"); }
	void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) { NativeCall<void, float, ELevelTick, FActorComponentTickFunction*>(this, "UChaosDestructionListener.TickComponent(float,ELevelTick,FActorComponentTickFunction*)", DeltaTime, TickType, ThisTickFunction); }
	void UpdateEvents() { NativeCall<void>(this, "UChaosDestructionListener.UpdateEvents()"); }
	void UpdateTransformSettings() { NativeCall<void>(this, "UChaosDestructionListener.UpdateTransformSettings()"); }
};
