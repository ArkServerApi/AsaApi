#pragma once
#include "BulkForward.h"
#include "USceneComponent.h"

struct UPhysicsThrusterComponent : public USceneComponent
{
public:
	UPhysicsThrusterComponent() = delete;
	~UPhysicsThrusterComponent() = delete;
	UPhysicsThrusterComponent(const UPhysicsThrusterComponent&) = delete;
	UPhysicsThrusterComponent& operator=(const UPhysicsThrusterComponent&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UPhysicsThrusterComponent"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UPhysicsThrusterComponent"); }

	float& ThrustStrengthField() { return *GetNativePointerField<float*>(this, "UPhysicsThrusterComponent.ThrustStrength"); }
	void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) { NativeCall<void, float, ELevelTick, FActorComponentTickFunction*>(this, "UPhysicsThrusterComponent.TickComponent(float,ELevelTick,FActorComponentTickFunction*)", DeltaTime, TickType, ThisTickFunction); }
};
