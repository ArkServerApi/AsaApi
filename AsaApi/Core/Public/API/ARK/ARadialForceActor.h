#pragma once
#include "BulkForward.h"
#include "ARigidBodyBase.h"

struct ARadialForceActor : public ARigidBodyBase
{
public:
	ARadialForceActor() = delete;
	~ARadialForceActor() = delete;
	ARadialForceActor(const ARadialForceActor&) = delete;
	ARadialForceActor& operator=(const ARadialForceActor&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("ARadialForceActor"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("ARadialForceActor"); }

	void FireImpulse() { NativeCall<void>(this, "ARadialForceActor.FireImpulse()"); }
	void DisableForce() { NativeCall<void>(this, "ARadialForceActor.DisableForce()"); }
	void ToggleForce() { NativeCall<void>(this, "ARadialForceActor.ToggleForce()"); }
	void EnableForce() { NativeCall<void>(this, "ARadialForceActor.EnableForce()"); }
};
