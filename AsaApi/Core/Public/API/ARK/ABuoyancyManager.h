#pragma once
#include "BulkForward.h"
#include "AActor.h"

struct ABuoyancyManager : public AActor
{
public:
	ABuoyancyManager() = delete;
	~ABuoyancyManager() = delete;
	ABuoyancyManager(const ABuoyancyManager&) = delete;
	ABuoyancyManager& operator=(const ABuoyancyManager&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("ABuoyancyManager"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("ABuoyancyManager"); }

	TArray<UBuoyancyComponent*, TSizedDefaultAllocator<32> >& BuoyancyComponentsActiveField() { return *GetNativePointerField<TArray<UBuoyancyComponent*, TSizedDefaultAllocator<32> >*>(this, "ABuoyancyManager.BuoyancyComponentsActive"); }
	FBuoyancyManagerAsyncCallback*& AsyncCallbackField() { return *GetNativePointerField<FBuoyancyManagerAsyncCallback**>(this, "ABuoyancyManager.AsyncCallback"); }
	int& TimestampField() { return *GetNativePointerField<int*>(this, "ABuoyancyManager.Timestamp"); }
	FDelegateHandle& OnCreateDelegateHandleField() { return *GetNativePointerField<FDelegateHandle*>(this, "ABuoyancyManager.OnCreateDelegateHandle"); }
	FDelegateHandle& OnDestroyDelegateHandleField() { return *GetNativePointerField<FDelegateHandle*>(this, "ABuoyancyManager.OnDestroyDelegateHandle"); }
	FDelegateHandle& OnPhysScenePreTickHandleField() { return *GetNativePointerField<FDelegateHandle*>(this, "ABuoyancyManager.OnPhysScenePreTickHandle"); }
	void Update(FPhysScene_Chaos* PhysScene, float DeltaTime) { NativeCall<void, FPhysScene_Chaos*, float>(this, "ABuoyancyManager.Update(FPhysScene_Chaos*,float)", PhysScene, DeltaTime); }
	void OnDestroyPhysics(UActorComponent* Component) { NativeCall<void, UActorComponent*>(this, "ABuoyancyManager.OnDestroyPhysics(UActorComponent*)", Component); }
	void OnCreatePhysics(UActorComponent* Component) { NativeCall<void, UActorComponent*>(this, "ABuoyancyManager.OnCreatePhysics(UActorComponent*)", Component); }
	void InitializeAsyncAux(UBuoyancyComponent* Component) { NativeCall<void, UBuoyancyComponent*>(this, "ABuoyancyManager.InitializeAsyncAux(UBuoyancyComponent*)", Component); }
	void BeginPlay() { NativeCall<void>(this, "ABuoyancyManager.BeginPlay()"); }
	void EndPlay(EEndPlayReason::Type EndPlayReason) { NativeCall<void, EEndPlayReason::Type>(this, "ABuoyancyManager.EndPlay(EEndPlayReason::Type)", EndPlayReason); }
};
