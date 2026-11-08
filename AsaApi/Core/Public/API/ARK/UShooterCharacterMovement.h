#pragma once
#include "BulkForward.h"
#include "GameplayForward.h"
#include "UPrimalCharacterMovement.h"

struct UShooterCharacterMovement : UPrimalCharacterMovement
{
public:
	UShooterCharacterMovement() = delete;
	~UShooterCharacterMovement() = delete;
	UShooterCharacterMovement(const UShooterCharacterMovement&) = delete;
	UShooterCharacterMovement& operator=(const UShooterCharacterMovement&) = delete;
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UShooterCharacterMovement"); }

	float& MaxSpeedMultiplierField() { return *GetNativePointerField<float*>(this, "UShooterCharacterMovement.MaxSpeedMultiplier"); }
	bool& bUseAdditionalLinePenetrationChecksField() { return *GetNativePointerField<bool*>(this, "UShooterCharacterMovement.bUseAdditionalLinePenetrationChecks"); }
	double& LastWaterWalkingNetworkTimeField() { return *GetNativePointerField<double*>(this, "UShooterCharacterMovement.LastWaterWalkingNetworkTime"); }
	bool& bLastWaterCheckIsRaftField() { return *GetNativePointerField<bool*>(this, "UShooterCharacterMovement.bLastWaterCheckIsRaft"); }
	bool& bMPLandingAfterLeavingField() { return *GetNativePointerField<bool*>(this, "UShooterCharacterMovement.bMPLandingAfterLeaving"); }

	float GetDefaultMaxSpeed() { return NativeCall<float>(this, "UShooterCharacterMovement.GetDefaultMaxSpeed()"); }
	void BP_PerformMovement(float DeltaTime) { NativeCall<void, float>(this, "UShooterCharacterMovement.BP_PerformMovement(float)", DeltaTime); }
	float BP_GetAnalogueInputModifier() { return NativeCall<float>(this, "UShooterCharacterMovement.BP_GetAnalogueInputModifier()"); }
	bool ForceControlledCharacterMove() { return NativeCall<bool>(this, "UShooterCharacterMovement.ForceControlledCharacterMove()"); }
	bool CanProneInCurrentState() { return NativeCall<bool>(this, "UShooterCharacterMovement.CanProneInCurrentState()"); }
	float GetGravityZ() { return NativeCall<float>(this, "UShooterCharacterMovement.GetGravityZ()"); }
	bool IsWaterWalking() { return NativeCall<bool>(this, "UShooterCharacterMovement.IsWaterWalking()"); }
	void PhysicsVolumeChanged(APhysicsVolume* NewVolume) { NativeCall<void, APhysicsVolume*>(this, "UShooterCharacterMovement.PhysicsVolumeChanged(APhysicsVolume*)", NewVolume); }
	void ApplyAccumulatedForces(float DeltaSeconds) { NativeCall<void, float>(this, "UShooterCharacterMovement.ApplyAccumulatedForces(float)", DeltaSeconds); }
	APhysicsVolume* GetPhysicsVolume() { return NativeCall<APhysicsVolume*>(this, "UShooterCharacterMovement.GetPhysicsVolume()"); }
	void PhysCustom(float deltaTime, int Iterations) { NativeCall<void, float, int>(this, "UShooterCharacterMovement.PhysCustom(float,int)", deltaTime, Iterations); }
	static UClass* StaticClass() { return AsaApi::ResolveClass("UShooterCharacterMovement"); }
	bool CanCrouchInCurrentState() { return NativeCall<bool>(this, "UShooterCharacterMovement.CanCrouchInCurrentState()"); }
	float ImmersionDepth(bool bUseLineTrace) { return NativeCall<float, bool>(this, "UShooterCharacterMovement.ImmersionDepth(bool)", bUseLineTrace); }
	void LocalClientPostAdjustPosition() { NativeCall<void>(this, "UShooterCharacterMovement.LocalClientPostAdjustPosition()"); }
	void BP_PhysicsRotation(float DeltaTime) { NativeCall<void, float>(this, "UShooterCharacterMovement.BP_PhysicsRotation(float)", DeltaTime); }
	void PostCalcVelocity(float DeltaTime, float Friction, bool bFluid, float BrakingDeceleration) { NativeCall<void, float, float, bool, float>(this, "UShooterCharacterMovement.PostCalcVelocity(float,float,bool,float)", DeltaTime, Friction, bFluid, BrakingDeceleration); }
	bool IsUsingLadderPhysics() { return NativeCall<bool>(this, "UShooterCharacterMovement.IsUsingLadderPhysics()"); }
	void LocalClientPreAdjustPosition() { NativeCall<void>(this, "UShooterCharacterMovement.LocalClientPreAdjustPosition()"); }
	float GetMaxSpeed_Internal() { return NativeCall<float>(this, "UShooterCharacterMovement.GetMaxSpeed_Internal()"); }
	void UpdateAnalogueInputModifier() { NativeCall<void>(this, "UShooterCharacterMovement.UpdateAnalogueInputModifier()"); }

	BitFieldValue<bool, unsigned __int32> bWaterBaseOnly() { return { this, "UShooterCharacterMovement.bWaterBaseOnly"}; }
	BitFieldValue<bool, unsigned __int32> bAllowWaterWalking() { return { this, "UShooterCharacterMovement.bAllowWaterWalking"}; }

	UE::Math::TVector<double>& MovementModeCustomClimbing_TargetPositionField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "UShooterCharacterMovement.MovementModeCustomClimbing_TargetPosition"); }
	UE::Math::TRotator<double>& MovementModeCustomClimbing_TargetRotationField() { return *GetNativePointerField<UE::Math::TRotator<double>*>(this, "UShooterCharacterMovement.MovementModeCustomClimbing_TargetRotation"); }
	bool IsWalkable(const FHitResult& Hit, bool bIsSteppingUp) { return NativeCall<bool, const FHitResult&, bool>(this, "UShooterCharacterMovement.IsWalkable(FHitResult&,bool)", Hit, bIsSteppingUp); }
	void HandleImpact(const FHitResult& Impact, float TimeSlice, const UE::Math::TVector<double>& MoveDelta) { NativeCall<void, const FHitResult&, float, const UE::Math::TVector<double>&>(this, "UShooterCharacterMovement.HandleImpact(FHitResult&,float,UE::Math::TVector<double>&)", Impact, TimeSlice, MoveDelta); }
	bool FloorSweepTest(FHitResult& OutHit, const UE::Math::TVector<double>& Start, const UE::Math::TVector<double>& End, ECollisionChannel TraceChannel, const FCollisionShape& CollisionShape, const FCollisionQueryParams& Params, const FCollisionResponseParams& ResponseParam) { return NativeCall<bool, FHitResult&, const UE::Math::TVector<double>&, const UE::Math::TVector<double>&, ECollisionChannel, const FCollisionShape&, const FCollisionQueryParams&, const FCollisionResponseParams&>(this, "UShooterCharacterMovement.FloorSweepTest(FHitResult&,UE::Math::TVector<double>&,UE::Math::TVector<double>&,ECollisionChannel,FCollisionShape&,FCollisionQueryParams&,FCollisionResponseParams&)", OutHit, Start, End, TraceChannel, CollisionShape, Params, ResponseParam); }
	void DoWaterJump(UE::Math::TVector<double>* WallNormal, unsigned char JumpFlag) { if (!WallNormal) throw std::invalid_argument("Null native value parameter"); return NativeCall<void, UE :: Math :: TVector < double >, unsigned char>(this, "UShooterCharacterMovement.DoWaterJump(UE::Math::TVector<double>,unsignedchar)", *WallNormal, JumpFlag); }
	void SetClimbingTarget(const UE::Math::TVector<double>& TargetPosition, const UE::Math::TRotator<double>& TargetRotation) { NativeCall<void, const UE::Math::TVector<double>&, const UE::Math::TRotator<double>&>(this, "UShooterCharacterMovement.SetClimbingTarget(UE::Math::TVector<double>&,UE::Math::TRotator<double>&)", TargetPosition, TargetRotation); }
	float SlideAlongSurface(const UE::Math::TVector<double>& Delta, float Time, const UE::Math::TVector<double>& InNormal, FHitResult& Hit, bool bHandleImpact) { return NativeCall<float, const UE::Math::TVector<double>&, float, const UE::Math::TVector<double>&, FHitResult&, bool>(this, "UShooterCharacterMovement.SlideAlongSurface(UE::Math::TVector<double>&,float,UE::Math::TVector<double>&,FHitResult&,bool)", Delta, Time, InNormal, Hit, bHandleImpact); }
	void SetCurrentAcceleration(UE::Math::TVector<double>* NewAcceleration) { if (!NewAcceleration) throw std::invalid_argument("Null native value parameter"); return NativeCall<void, UE :: Math :: TVector < double >>(this, "UShooterCharacterMovement.SetCurrentAcceleration(UE::Math::TVector<double>)", *NewAcceleration); }
	void OnMovementModeChanged(EMovementMode PreviousMovementMode, unsigned char PreviousCustomMode) { NativeCall<void, EMovementMode, unsigned char>(this, "UShooterCharacterMovement.OnMovementModeChanged(EMovementMode,unsignedchar)", PreviousMovementMode, PreviousCustomMode); }
	bool CheckWaterJump(UE::Math::TVector<double>* CheckPoint, UE::Math::TVector<double>& WallNormal) { if (!CheckPoint) throw std::invalid_argument("Null native value parameter"); return NativeCall<bool, UE :: Math :: TVector < double >, UE :: Math :: TVector < double > &>(this, "UShooterCharacterMovement.CheckWaterJump(UE::Math::TVector<double>,UE::Math::TVector<double>&)", *CheckPoint, WallNormal); }
	UE::Math::TVector<double>* GetActorFeetLocation(UE::Math::TVector<double>* result) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*>(this, "UShooterCharacterMovement.GetActorFeetLocation()", result); }
	UE::Math::TVector<double>* ConstrainInputAcceleration(UE::Math::TVector<double>* result, const UE::Math::TVector<double>& InputAcceleration) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*, const UE::Math::TVector<double>&>(this, "UShooterCharacterMovement.ConstrainInputAcceleration(UE::Math::TVector<double>&)", result, InputAcceleration); }
	void BPApplyVelocityBraking(float DeltaTime, float Friction, float BrakingDeceleration, UE::Math::TVector<double>& InOutVelocity) { NativeCall<void, float, float, float, UE::Math::TVector<double>&>(this, "UShooterCharacterMovement.BPApplyVelocityBraking(float,float,float,UE::Math::TVector<double>&)", DeltaTime, Friction, BrakingDeceleration, InOutVelocity); }
	void AddImpulse(UE::Math::TVector<double>* Impulse, bool bVelocityChange, float MassScaleImpulseExponent, bool bOverrideMaxImpulseZ) { if (!Impulse) throw std::invalid_argument("Null native value parameter"); return NativeCall<void, UE :: Math :: TVector < double >, bool, float, bool>(this, "UShooterCharacterMovement.AddImpulse(UE::Math::TVector<double>,bool,float,bool)", *Impulse, bVelocityChange, MassScaleImpulseExponent, bOverrideMaxImpulseZ); }
};
