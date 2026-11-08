#pragma once
#include "BulkForward.h"
#include "UActorComponent.h"

struct UPCGGenSourceComponent : public UActorComponent
{
public:
	UPCGGenSourceComponent() = delete;
	~UPCGGenSourceComponent() = delete;
	UPCGGenSourceComponent(const UPCGGenSourceComponent&) = delete;
	UPCGGenSourceComponent& operator=(const UPCGGenSourceComponent&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UPCGGenSourceComponent"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UPCGGenSourceComponent"); }

	void OnUnregister() { NativeCall<void>(this, "UPCGGenSourceComponent.OnUnregister()"); }
	void OnComponentDestroyed(bool bDestroyingHierarchy) { NativeCall<void, bool>(this, "UPCGGenSourceComponent.OnComponentDestroyed(bool)", bDestroyingHierarchy); }
	UObject* _getUObject() { return NativeCall<UObject*>(this, "UPCGGenSourceComponent._getUObject()"); }
	void OnComponentCreated() { NativeCall<void>(this, "UPCGGenSourceComponent.OnComponentCreated()"); }
	void OnRegister() { NativeCall<void>(this, "UPCGGenSourceComponent.OnRegister()"); }
	FString* GetDebugName(FString* result) { return NativeCall<FString*, FString*>(this, "UPCGGenSourceComponent.GetDebugName()", result); }
	void EndPlay(EEndPlayReason::Type EndPlayReason) { NativeCall<void, EEndPlayReason::Type>(this, "UPCGGenSourceComponent.EndPlay(EEndPlayReason::Type)", EndPlayReason); }
	void BeginPlay() { NativeCall<void>(this, "UPCGGenSourceComponent.BeginPlay()"); }
};
