#pragma once
#include "BulkForward.h"
#include "AActor.h"

struct AChaosCacheManager : public AActor
{
public:
	AChaosCacheManager() = delete;
	~AChaosCacheManager() = delete;
	AChaosCacheManager(const AChaosCacheManager&) = delete;
	AChaosCacheManager& operator=(const AChaosCacheManager&) = delete;
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("AChaosCacheManager"); }

	bool& bCreateNewCacheCollectionAssetOnRecordField() { return *GetNativePointerField<bool*>(this, "AChaosCacheManager.bCreateNewCacheCollectionAssetOnRecord"); }
	float& StartTimeField() { return *GetNativePointerField<float*>(this, "AChaosCacheManager.StartTime"); }
	bool& bStartOnBeginPlayField() { return *GetNativePointerField<bool*>(this, "AChaosCacheManager.bStartOnBeginPlay"); }
	bool& bReplayEventsInStaticPoseModeField() { return *GetNativePointerField<bool*>(this, "AChaosCacheManager.bReplayEventsInStaticPoseMode"); }
	bool& bCanRecordField() { return *GetNativePointerField<bool*>(this, "AChaosCacheManager.bCanRecord"); }
	bool& bIsSimulatingField() { return *GetNativePointerField<bool*>(this, "AChaosCacheManager.bIsSimulating"); }
	float& StartTimeAtBeginPlayField() { return *GetNativePointerField<float*>(this, "AChaosCacheManager.StartTimeAtBeginPlay"); }
	float& PreviousStartTimeField() { return *GetNativePointerField<float*>(this, "AChaosCacheManager.PreviousStartTime"); }
	bool& bRestartSimulationField() { return *GetNativePointerField<bool*>(this, "AChaosCacheManager.bRestartSimulation"); }
	float& RestartTimeStartField() { return *GetNativePointerField<float*>(this, "AChaosCacheManager.RestartTimeStart"); }
	float& RestartTimeEndField() { return *GetNativePointerField<float*>(this, "AChaosCacheManager.RestartTimeEnd"); }
	void UnregisterObservedComponentsNotifiers() { NativeCall<void>(this, "AChaosCacheManager.UnregisterObservedComponentsNotifiers()"); }
	FObservedComponent& AddNewObservedComponent(UPrimitiveComponent* InComponent) { return NativeCall<FObservedComponent&, UPrimitiveComponent*>(this, "AChaosCacheManager.AddNewObservedComponent(UPrimitiveComponent*)", InComponent); }
	void BeginEvaluate() { NativeCall<void>(this, "AChaosCacheManager.BeginEvaluate()"); }
	void EndEvaluate() { NativeCall<void>(this, "AChaosCacheManager.EndEvaluate()"); }
	void OnObservedComponentDestroyed(const FObservedComponent& ObservedComponent) { NativeCall<void, const FObservedComponent&>(this, "AChaosCacheManager.OnObservedComponentDestroyed(FObservedComponent&)", ObservedComponent); }
	void EndPlay(EEndPlayReason::Type EndPlayReason) { NativeCall<void, EEndPlayReason::Type>(this, "AChaosCacheManager.EndPlay(EEndPlayReason::Type)", EndPlayReason); }
	void Destroyed() { NativeCall<void>(this, "AChaosCacheManager.Destroyed()"); }
	void OnStartFrameChanged(double InTime) { NativeCall<void, double>(this, "AChaosCacheManager.OnStartFrameChanged(double)", InTime); }
	void Serialize(FArchive& Ar) { NativeCall<void, FArchive&>(this, "AChaosCacheManager.Serialize(FArchive&)", Ar); }
	void EnsureObservedComponentsNotifierRegistration() { NativeCall<void>(this, "AChaosCacheManager.EnsureObservedComponentsNotifierRegistration()"); }
	void TickActor(float DeltaTime, ELevelTick TickType, FActorTickFunction& ThisTickFunction) { NativeCall<void, float, ELevelTick, FActorTickFunction&>(this, "AChaosCacheManager.TickActor(float,ELevelTick,FActorTickFunction&)", DeltaTime, TickType, ThisTickFunction); }
	static UClass* StaticClass() { return AsaApi::ResolveClass("AChaosCacheManager"); }
	void BeginPlay() { NativeCall<void>(this, "AChaosCacheManager.BeginPlay()"); }
	void ClearObservedComponents(bool bDestroyComponents) { NativeCall<void, bool>(this, "AChaosCacheManager.ClearObservedComponents(bool)", bDestroyComponents); }
};
