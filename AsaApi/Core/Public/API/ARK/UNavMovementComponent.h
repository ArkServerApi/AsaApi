#pragma once
#include "BulkForward.h"


struct UNavMovementComponent : UMovementComponent
{
	// Fields

	  // Bitfields

	BitFieldValue<bool, unsigned __int32> bUpdateNavAgentWithOwnersCollision() { return { this, "UNavMovementComponent.bUpdateNavAgentWithOwnersCollision" }; }
	BitFieldValue<bool, unsigned __int32> bUseAccelerationForPaths() { return { this, "UNavMovementComponent.bUseAccelerationForPaths" }; }
	BitFieldValue<bool, unsigned __int32> bUseFixedBrakingDistanceForPaths() { return { this, "UNavMovementComponent.bUseFixedBrakingDistanceForPaths" }; }
	BitFieldValue<bool, unsigned __int32> bStopMovementAbortPaths() { return { this, "UNavMovementComponent.bStopMovementAbortPaths" }; }

	// Functions

	void StopMovementImmediately() { NativeCall<void>(this, "UNavMovementComponent.StopMovementImmediately()"); }
	IPathFollowingAgentInterface* GetPathFollowingAgent() { return NativeCall<IPathFollowingAgentInterface*>(this, "UNavMovementComponent.GetPathFollowingAgent()"); }
	static UClass* StaticClass() { return AsaApi::ResolveClass("UNavMovementComponent"); }
	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// static void StaticRegisterNativesUNavMovementComponent();
	//void UNavMovementComponent(const FObjectInitializer* ObjectInitializer) { NativeCall<void, const FObjectInitializer*>(this, "UNavMovementComponent.UNavMovementComponent(FObjectInitializer&)", ObjectInitializer); }
	//FBasedPosition* GetActorFeetLocationBased(FBasedPosition* result) { return NativeCall<FBasedPosition*, FBasedPosition*>(this, "UNavMovementComponent.GetActorFeetLocationBased()", result); }
	void RequestDirectMove(const UE::Math::TVector<double>* MoveVelocity, bool bForceMaxSpeed) { NativeCall<void, const UE::Math::TVector<double>*, bool>(this, "UNavMovementComponent.RequestDirectMove(UE::Math::TVector<double>&,bool)", MoveVelocity, bForceMaxSpeed); }
	//     float GetPathFollowingBrakingDistance(float MaxSpeed) { return NativeCall<float, float>(this, "UNavMovementComponent.GetPathFollowingBrakingDistance(float)", MaxSpeed); }
	// FUNCTION MISSING: UNavMovementComponent.GetPathFollowingBrakingDistance(float)
	//     void StopActiveMovement() { NativeCall<void>(this, "UNavMovementComponent.StopActiveMovement()"); }
	// FUNCTION MISSING: UNavMovementComponent.StopActiveMovement()

	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UNavMovementComponent"); }

	float& FixedPathBrakingDistance_DEPRECATEDField() { return *GetNativePointerField<float*>(this, "UNavMovementComponent.FixedPathBrakingDistance_DEPRECATED"); }
	FNavMovementProperties& NavMovementPropertiesField() { return *GetNativePointerField<FNavMovementProperties*>(this, "UNavMovementComponent.NavMovementProperties"); }
	FNavAgentProperties& NavAgentPropsField() { return *GetNativePointerField<FNavAgentProperties*>(this, "UNavMovementComponent.NavAgentProps"); }
	FMovementProperties& MovementStateField() { return *GetNativePointerField<FMovementProperties*>(this, "UNavMovementComponent.MovementState"); }
	BitFieldValue<bool, unsigned char> bUpdateNavAgentWithOwnersCollision_DEPRECATED() { return { this, "UNavMovementComponent.bUpdateNavAgentWithOwnersCollision_DEPRECATED"}; }
	BitFieldValue<bool, unsigned char> bUseAccelerationForPaths_DEPRECATED() { return { this, "UNavMovementComponent.bUseAccelerationForPaths_DEPRECATED"}; }
	BitFieldValue<bool, unsigned char> bUseFixedBrakingDistanceForPaths_DEPRECATED() { return { this, "UNavMovementComponent.bUseFixedBrakingDistanceForPaths_DEPRECATED"}; }
	BitFieldValue<bool, unsigned char> bStopMovementAbortPaths_DEPRECATED() { return { this, "UNavMovementComponent.bStopMovementAbortPaths_DEPRECATED"}; }
	bool IsMovingOnGround() { return NativeCall<bool>(this, "UNavMovementComponent.IsMovingOnGround()"); }
	bool CanStopPathFollowing() { return NativeCall<bool>(this, "UNavMovementComponent.CanStopPathFollowing()"); }
	bool IsCrouching() { return NativeCall<bool>(this, "UNavMovementComponent.IsCrouching()"); }
	void RequestPathMove(const UE::Math::TVector<double>& MoveInput) { NativeCall<void, const UE::Math::TVector<double>&>(this, "UNavMovementComponent.RequestPathMove(UE::Math::TVector<double>&)", MoveInput); }
	UE::Math::TVector<double>* GetForwardVector(UE::Math::TVector<double>* result) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*>(this, "UNavMovementComponent.GetForwardVector()", result); }
	float GetMaxSpeedForNavMovement() { return NativeCall<float>(this, "UNavMovementComponent.GetMaxSpeedForNavMovement()"); }
	UE::Math::TVector<double>* GetLocation(UE::Math::TVector<double>* result) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*>(this, "UNavMovementComponent.GetLocation()", result); }
	UE::Math::TVector<double>* GetActorFeetLocation(UE::Math::TVector<double>* result) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*>(this, "UNavMovementComponent.GetActorFeetLocation()", result); }
	void Serialize(FArchive& Ar) { NativeCall<void, FArchive&>(this, "UNavMovementComponent.Serialize(FArchive&)", Ar); }
	UObject* _getUObject() { return NativeCall<UObject*>(this, "UNavMovementComponent._getUObject()"); }
	void SetPathFollowingAgent(IPathFollowingAgentInterface* InPathFollowingAgent) { NativeCall<void, IPathFollowingAgentInterface*>(this, "UNavMovementComponent.SetPathFollowingAgent(IPathFollowingAgentInterface*)", InPathFollowingAgent); }
	UE::Math::TVector<double>* GetVelocityForNavMovement(UE::Math::TVector<double>* result) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*>(this, "UNavMovementComponent.GetVelocityForNavMovement()", result); }
	void UpdateNavAgent(const UObject& ObjectToUpdateFrom) { NativeCall<void, const UObject&>(this, "UNavMovementComponent.UpdateNavAgent(UObject&)", ObjectToUpdateFrom); }
	bool CanStartPathFollowing() { return NativeCall<bool>(this, "UNavMovementComponent.CanStartPathFollowing()"); }
	UObject* GetOwnerAsObject() { return NativeCall<UObject*>(this, "UNavMovementComponent.GetOwnerAsObject()"); }
	bool IsSwimming() { return NativeCall<bool>(this, "UNavMovementComponent.IsSwimming()"); }
	bool IsFalling() { return NativeCall<bool>(this, "UNavMovementComponent.IsFalling()"); }
	void ResetMoveState() { NativeCall<void>(this, "UNavMovementComponent.ResetMoveState()"); }
	bool IsFlying() { return NativeCall<bool>(this, "UNavMovementComponent.IsFlying()"); }
	UE::Math::TVector<double>* GetFeetLocation(UE::Math::TVector<double>* result) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*>(this, "UNavMovementComponent.GetFeetLocation()", result); }
	UE::Math::TVector<double>* GetSimpleCollisionCylinderExtent(UE::Math::TVector<double>* result) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*>(this, "UNavMovementComponent.GetSimpleCollisionCylinderExtent()", result); }
	void GetSimpleCollisionCylinder(float& CollisionRadius, float& CollisionHalfHeight) { NativeCall<void, float&, float&>(this, "UNavMovementComponent.GetSimpleCollisionCylinder(float&,float&)", CollisionRadius, CollisionHalfHeight); }
};