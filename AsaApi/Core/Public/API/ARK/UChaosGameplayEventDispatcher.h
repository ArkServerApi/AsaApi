#pragma once
#include "BulkForward.h"
#include "UChaosEventListenerComponent.h"

struct UChaosGameplayEventDispatcher : public UChaosEventListenerComponent
{
public:
	UChaosGameplayEventDispatcher() = delete;
	~UChaosGameplayEventDispatcher() = delete;
	UChaosGameplayEventDispatcher(const UChaosGameplayEventDispatcher&) = delete;
	UChaosGameplayEventDispatcher& operator=(const UChaosGameplayEventDispatcher&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UChaosGameplayEventDispatcher"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UChaosGameplayEventDispatcher"); }

	float& LastCollisionDataTimeField() { return *GetNativePointerField<float*>(this, "UChaosGameplayEventDispatcher.LastCollisionDataTime"); }
	float& LastBreakingDataTimeField() { return *GetNativePointerField<float*>(this, "UChaosGameplayEventDispatcher.LastBreakingDataTime"); }
	float& LastRemovalDataTimeField() { return *GetNativePointerField<float*>(this, "UChaosGameplayEventDispatcher.LastRemovalDataTime"); }
	float& LastCrumblingDataTimeField() { return *GetNativePointerField<float*>(this, "UChaosGameplayEventDispatcher.LastCrumblingDataTime"); }
	void RegisterForCollisionEvents(UPrimitiveComponent* ComponentToListenTo, UObject* ObjectToNotify) { NativeCall<void, UPrimitiveComponent*, UObject*>(this, "UChaosGameplayEventDispatcher.RegisterForCollisionEvents(UPrimitiveComponent*,UObject*)", ComponentToListenTo, ObjectToNotify); }
	TArray<UObject*, TSizedDefaultAllocator<32> >* GetInterestedProxyOwnersForCrumblingEvents(TArray<UObject*, TSizedDefaultAllocator<32> >* result) { return NativeCall<TArray<UObject*, TSizedDefaultAllocator<32> >*, TArray<UObject*, TSizedDefaultAllocator<32> >*>(this, "UChaosGameplayEventDispatcher.GetInterestedProxyOwnersForCrumblingEvents()", result); }
	void RegisterChaosEvents() { NativeCall<void>(this, "UChaosGameplayEventDispatcher.RegisterChaosEvents()"); }
	void OnRegister() { NativeCall<void>(this, "UChaosGameplayEventDispatcher.OnRegister()"); }
	void OnUnregister() { NativeCall<void>(this, "UChaosGameplayEventDispatcher.OnUnregister()"); }
	void DispatchPendingCollisionNotifies() { NativeCall<void>(this, "UChaosGameplayEventDispatcher.DispatchPendingCollisionNotifies()"); }
	TArray<UObject*, TSizedDefaultAllocator<32> >* GetInterestedProxyOwnersForCollisionEvents(TArray<UObject*, TSizedDefaultAllocator<32> >* result) { return NativeCall<TArray<UObject*, TSizedDefaultAllocator<32> >*, TArray<UObject*, TSizedDefaultAllocator<32> >*>(this, "UChaosGameplayEventDispatcher.GetInterestedProxyOwnersForCollisionEvents()", result); }
	void UnRegisterForCollisionEvents(UPrimitiveComponent* ComponentToListenTo, UObject* ObjectToNotify) { NativeCall<void, UPrimitiveComponent*, UObject*>(this, "UChaosGameplayEventDispatcher.UnRegisterForCollisionEvents(UPrimitiveComponent*,UObject*)", ComponentToListenTo, ObjectToNotify); }
	TArray<UObject*, TSizedDefaultAllocator<32> >* GetInterestedProxyOwnersForRemovalEvents(TArray<UObject*, TSizedDefaultAllocator<32> >* result) { return NativeCall<TArray<UObject*, TSizedDefaultAllocator<32> >*, TArray<UObject*, TSizedDefaultAllocator<32> >*>(this, "UChaosGameplayEventDispatcher.GetInterestedProxyOwnersForRemovalEvents()", result); }
	TArray<UObject*, TSizedDefaultAllocator<32> >* GetInterestedProxyOwnersForBreakingEvents(TArray<UObject*, TSizedDefaultAllocator<32> >* result) { return NativeCall<TArray<UObject*, TSizedDefaultAllocator<32> >*, TArray<UObject*, TSizedDefaultAllocator<32> >*>(this, "UChaosGameplayEventDispatcher.GetInterestedProxyOwnersForBreakingEvents()", result); }
	void UnregisterChaosEvents() { NativeCall<void>(this, "UChaosGameplayEventDispatcher.UnregisterChaosEvents()"); }
};
