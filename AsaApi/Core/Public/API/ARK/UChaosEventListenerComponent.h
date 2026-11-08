#pragma once
#include "BulkForward.h"
#include "UActorComponent.h"

struct UChaosEventListenerComponent : public UActorComponent
{
public:
	UChaosEventListenerComponent() = delete;
	~UChaosEventListenerComponent() = delete;
	UChaosEventListenerComponent(const UChaosEventListenerComponent&) = delete;
	UChaosEventListenerComponent& operator=(const UChaosEventListenerComponent&) = delete;
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UChaosEventListenerComponent"); }

	float& LastCollisionTickTimeField() { return *GetNativePointerField<float*>(this, "UChaosEventListenerComponent.LastCollisionTickTime"); }
	static UClass* StaticClass() { return AsaApi::ResolveClass("UChaosEventListenerComponent"); }
	void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) { NativeCall<void, float, ELevelTick, FActorComponentTickFunction*>(this, "UChaosEventListenerComponent.TickComponent(float,ELevelTick,FActorComponentTickFunction*)", DeltaTime, TickType, ThisTickFunction); }
};
