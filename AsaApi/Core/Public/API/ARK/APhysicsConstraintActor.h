#pragma once
#include "BulkForward.h"
#include "ARigidBodyBase.h"

struct APhysicsConstraintActor : public ARigidBodyBase
{
public:
	APhysicsConstraintActor() = delete;
	~APhysicsConstraintActor() = delete;
	APhysicsConstraintActor(const APhysicsConstraintActor&) = delete;
	APhysicsConstraintActor& operator=(const APhysicsConstraintActor&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("APhysicsConstraintActor"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("APhysicsConstraintActor"); }

	BitFieldValue<bool, unsigned __int32> bDisableCollision_DEPRECATED() { return { this, "APhysicsConstraintActor.bDisableCollision_DEPRECATED"}; }
	void PostLoad() { NativeCall<void>(this, "APhysicsConstraintActor.PostLoad()"); }
};
