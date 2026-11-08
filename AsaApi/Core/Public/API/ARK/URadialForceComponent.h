#pragma once
#include "BulkForward.h"
#include "USceneComponent.h"

struct URadialForceComponent : public USceneComponent
{
public:
	URadialForceComponent() = delete;
	~URadialForceComponent() = delete;
	URadialForceComponent(const URadialForceComponent&) = delete;
	URadialForceComponent& operator=(const URadialForceComponent&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("URadialForceComponent"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("URadialForceComponent"); }

	float& RadiusField() { return *GetNativePointerField<float*>(this, "URadialForceComponent.Radius"); }
	float& ImpulseStrengthField() { return *GetNativePointerField<float*>(this, "URadialForceComponent.ImpulseStrength"); }
	float& ForceStrengthField() { return *GetNativePointerField<float*>(this, "URadialForceComponent.ForceStrength"); }
	float& DestructibleDamageField() { return *GetNativePointerField<float*>(this, "URadialForceComponent.DestructibleDamage"); }
	FCollisionObjectQueryParams& CollisionObjectQueryParamsField() { return *GetNativePointerField<FCollisionObjectQueryParams*>(this, "URadialForceComponent.CollisionObjectQueryParams"); }
	BitFieldValue<bool, unsigned __int32> bImpulseVelChange() { return { this, "URadialForceComponent.bImpulseVelChange"}; }
	BitFieldValue<bool, unsigned __int32> bIgnoreOwningActor() { return { this, "URadialForceComponent.bIgnoreOwningActor"}; }
	void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) { NativeCall<void, float, ELevelTick, FActorComponentTickFunction*>(this, "URadialForceComponent.TickComponent(float,ELevelTick,FActorComponentTickFunction*)", DeltaTime, TickType, ThisTickFunction); }
	void FireImpulse() { NativeCall<void>(this, "URadialForceComponent.FireImpulse()"); }
	void BeginPlay() { NativeCall<void>(this, "URadialForceComponent.BeginPlay()"); }
	void UpdateCollisionObjectQueryParams() { NativeCall<void>(this, "URadialForceComponent.UpdateCollisionObjectQueryParams()"); }
	void PostLoad() { NativeCall<void>(this, "URadialForceComponent.PostLoad()"); }
};
