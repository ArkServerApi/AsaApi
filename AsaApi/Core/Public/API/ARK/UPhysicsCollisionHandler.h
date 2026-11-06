#pragma once
#include "UEObjectForward.h"
#include "BulkForward.h"
#include "UObject.h"

class UPhysicsCollisionHandler : public UObject
{
public:
	UPhysicsCollisionHandler() = delete;
	~UPhysicsCollisionHandler() = delete;
	UPhysicsCollisionHandler(const UPhysicsCollisionHandler&) = delete;
	UPhysicsCollisionHandler& operator=(const UPhysicsCollisionHandler&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UPhysicsCollisionHandler"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UPhysicsCollisionHandler"); }
	float& ImpactThresholdField() { return *GetNativePointerField<float*>(this, "UPhysicsCollisionHandler.ImpactThreshold"); }
	float& ImpactReFireDelayField() { return *GetNativePointerField<float*>(this, "UPhysicsCollisionHandler.ImpactReFireDelay"); }
	float& LastImpactSoundTimeField() { return *GetNativePointerField<float*>(this, "UPhysicsCollisionHandler.LastImpactSoundTime"); }
	void DefaultHandleCollision_AssumesLocked(const FRigidBodyCollisionInfo& MyInfo, const FRigidBodyCollisionInfo& OtherInfo, const FCollisionImpactData& RigidCollisionData) { NativeCall<void, const FRigidBodyCollisionInfo&, const FRigidBodyCollisionInfo&, const FCollisionImpactData&>(this, "UPhysicsCollisionHandler.DefaultHandleCollision_AssumesLocked(FRigidBodyCollisionInfo&,FRigidBodyCollisionInfo&,FCollisionImpactData&)", MyInfo, OtherInfo, RigidCollisionData); }
	UWorld* GetWorld() { return NativeCall<UWorld*>(this, "UPhysicsCollisionHandler.GetWorld()"); }
	void InitCollisionHandler() { NativeCall<void>(this, "UPhysicsCollisionHandler.InitCollisionHandler()"); }
};
