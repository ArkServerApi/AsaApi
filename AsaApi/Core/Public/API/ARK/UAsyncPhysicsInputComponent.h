#pragma once
#include "BulkForward.h"
#include "UActorComponent.h"

struct UAsyncPhysicsInputComponent : public UActorComponent
{
public:
	UAsyncPhysicsInputComponent() = delete;
	~UAsyncPhysicsInputComponent() = delete;
	UAsyncPhysicsInputComponent(const UAsyncPhysicsInputComponent&) = delete;
	UAsyncPhysicsInputComponent& operator=(const UAsyncPhysicsInputComponent&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UAsyncPhysicsInputComponent"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UAsyncPhysicsInputComponent"); }

	APlayerController* GetPlayerController() { return NativeCall<APlayerController*>(this, "UAsyncPhysicsInputComponent.GetPlayerController()"); }
	void AsyncPhysicsTickComponent(float DeltaTime, float SimTime) { NativeCall<void, float, float>(this, "UAsyncPhysicsInputComponent.AsyncPhysicsTickComponent(float,float)", DeltaTime, SimTime); }
	void ServerRPCBufferInput_Implementation(UAsyncPhysicsData* NewData) { NativeCall<void, UAsyncPhysicsData*>(this, "UAsyncPhysicsInputComponent.ServerRPCBufferInput_Implementation(UAsyncPhysicsData*)", NewData); }
};
