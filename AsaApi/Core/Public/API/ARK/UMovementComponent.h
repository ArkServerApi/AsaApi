#pragma once
#include "BulkForward.h"


struct UMovementComponent : UActorComponent
{
	// Fields

	TObjectPtr<USceneComponent>& UpdatedComponentField() { return *GetNativePointerField<TObjectPtr<USceneComponent>*>(this, "UMovementComponent.UpdatedComponent"); }
	TObjectPtr<UPrimitiveComponent>& UpdatedPrimitiveField() { return *GetNativePointerField<TObjectPtr<UPrimitiveComponent>*>(this, "UMovementComponent.UpdatedPrimitive"); }
	EMoveComponentFlags& MoveComponentFlagsField() { return *GetNativePointerField<EMoveComponentFlags*>(this, "UMovementComponent.MoveComponentFlags"); }
	UE::Math::TVector<double>& VelocityField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "UMovementComponent.Velocity"); }
	UE::Math::TVector<double>& PlaneConstraintNormalField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "UMovementComponent.PlaneConstraintNormal"); }
	UE::Math::TVector<double>& PlaneConstraintOriginField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "UMovementComponent.PlaneConstraintOrigin"); }
	bool& bInOnRegisterField() { return *GetNativePointerField<bool*>(this, "UMovementComponent.bInOnRegister"); }
	bool& bInInitializeComponentField() { return *GetNativePointerField<bool*>(this, "UMovementComponent.bInInitializeComponent"); }
	EPlaneConstraintAxisSetting& PlaneConstraintAxisSettingField() { return *GetNativePointerField<EPlaneConstraintAxisSetting*>(this, "UMovementComponent.PlaneConstraintAxisSetting"); }

	// Bitfields

	BitFieldValue<bool, unsigned __int32> bUpdateOnlyIfRendered() { return { this, "UMovementComponent.bUpdateOnlyIfRendered" }; }
	BitFieldValue<bool, unsigned __int32> bAutoUpdateTickRegistration() { return { this, "UMovementComponent.bAutoUpdateTickRegistration" }; }
	BitFieldValue<bool, unsigned __int32> bTickBeforeOwner() { return { this, "UMovementComponent.bTickBeforeOwner" }; }
	BitFieldValue<bool, unsigned __int32> bAutoRegisterUpdatedComponent() { return { this, "UMovementComponent.bAutoRegisterUpdatedComponent" }; }
	BitFieldValue<bool, unsigned __int32> bConstrainToPlane() { return { this, "UMovementComponent.bConstrainToPlane" }; }
	BitFieldValue<bool, unsigned __int32> bSnapToPlaneAtStart() { return { this, "UMovementComponent.bSnapToPlaneAtStart" }; }
	BitFieldValue<bool, unsigned __int32> bAutoRegisterPhysicsVolumeUpdates() { return { this, "UMovementComponent.bAutoRegisterPhysicsVolumeUpdates" }; }
	BitFieldValue<bool, unsigned __int32> bComponentShouldUpdatePhysicsVolume() { return { this, "UMovementComponent.bComponentShouldUpdatePhysicsVolume" }; }

	// Functions

	void StopMovementImmediately() { NativeCall<void>(this, "UMovementComponent.StopMovementImmediately()"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UMovementComponent"); }
	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// static void StaticRegisterNativesUMovementComponent();
	void Serialize(FStructuredArchiveRecord Record) { NativeCall<void, FStructuredArchiveRecord>(this, "UMovementComponent.Serialize(FStructuredArchiveRecord)", Record); }
	//void UMovementComponent(const FObjectInitializer* ObjectInitializer) { NativeCall<void, const FObjectInitializer*>(this, "UMovementComponent.UMovementComponent(FObjectInitializer&)", ObjectInitializer); }
	void SetUpdatedComponent(USceneComponent* NewUpdatedComponent) { NativeCall<void, USceneComponent*>(this, "UMovementComponent.SetUpdatedComponent(USceneComponent*)", NewUpdatedComponent); }
	void InitializeComponent() { NativeCall<void>(this, "UMovementComponent.InitializeComponent()"); }
	void OnRegister() { NativeCall<void>(this, "UMovementComponent.OnRegister()"); }
	void RegisterComponentTickFunctions(bool bRegister, bool bSaveAndRestoreComponentTickState) { NativeCall<void, bool, bool>(this, "UMovementComponent.RegisterComponentTickFunctions(bool,bool)", bRegister, bSaveAndRestoreComponentTickState); }
	//void UpdateTickRegistration(_BOOL8 a2) { NativeCall<void, _BOOL8>(this, "UMovementComponent.UpdateTickRegistration()", a2); }
	void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) { NativeCall<void, float, ELevelTick, FActorComponentTickFunction*>(this, "UMovementComponent.TickComponent(float,ELevelTick,FActorComponentTickFunction*)", DeltaTime, TickType, ThisTickFunction); }
	void Serialize(FArchive* Ar) { NativeCall<void, FArchive*>(this, "UMovementComponent.Serialize(FArchive&)", Ar); }
	void PostLoad() { NativeCall<void>(this, "UMovementComponent.PostLoad()"); }
	void Deactivate() { NativeCall<void>(this, "UMovementComponent.Deactivate()"); }
	bool IsInWater() { return NativeCall<bool>(this, "UMovementComponent.IsInWater()"); }
	bool ShouldSkipUpdate(float DeltaTime) { return NativeCall<bool, float>(this, "UMovementComponent.ShouldSkipUpdate(float)", DeltaTime); }
	float GetGravityZ() { return NativeCall<float>(this, "UMovementComponent.GetGravityZ()"); }
	void UpdateComponentVelocity() { NativeCall<void>(this, "UMovementComponent.UpdateComponentVelocity()"); }
	void InitCollisionParams(FCollisionQueryParams* OutParams, FCollisionResponseParams* OutResponseParam) { NativeCall<void, FCollisionQueryParams*, FCollisionResponseParams*>(this, "UMovementComponent.InitCollisionParams(FCollisionQueryParams&,FCollisionResponseParams&)", OutParams, OutResponseParam); }
	bool OverlapTest(const UE::Math::TVector<double>* Location, const UE::Math::TQuat<double>* RotationQuat, const ECollisionChannel CollisionChannel, const FCollisionShape* CollisionShape, const AActor* IgnoreActor) { return NativeCall<bool, const UE::Math::TVector<double>*, const UE::Math::TQuat<double>*, const ECollisionChannel, const FCollisionShape*, const AActor*>(this, "UMovementComponent.OverlapTest(UE::Math::TVector<double>&,UE::Math::TQuat<double>&,ECollisionChannel,FCollisionShape&,AActor*)", Location, RotationQuat, CollisionChannel, CollisionShape, IgnoreActor); }
	bool IsExceedingMaxSpeed(float MaxSpeed) { return NativeCall<bool, float>(this, "UMovementComponent.IsExceedingMaxSpeed(float)", MaxSpeed); }
	void SetPlaneConstraintAxisSetting(EPlaneConstraintAxisSetting NewAxisSetting) { NativeCall<void, EPlaneConstraintAxisSetting>(this, "UMovementComponent.SetPlaneConstraintAxisSetting(EPlaneConstraintAxisSetting)", NewAxisSetting); }
	void SetPlaneConstraintNormal(UE::Math::TVector<double>* PlaneNormal) { NativeCall<void, UE::Math::TVector<double>*>(this, "UMovementComponent.SetPlaneConstraintNormal(UE::Math::TVector<double>)", PlaneNormal); }
	void SetPlaneConstraintFromVectors(UE::Math::TVector<double>* Forward, UE::Math::TVector<double>* Up) { NativeCall<void, UE::Math::TVector<double>*, UE::Math::TVector<double>*>(this, "UMovementComponent.SetPlaneConstraintFromVectors(UE::Math::TVector<double>,UE::Math::TVector<double>)", Forward, Up); }
	void SetPlaneConstraintOrigin(UE::Math::TVector<double>* PlaneOrigin) { NativeCall<void, UE::Math::TVector<double>*>(this, "UMovementComponent.SetPlaneConstraintOrigin(UE::Math::TVector<double>)", PlaneOrigin); }
	void SetPlaneConstraintEnabled(bool bEnabled) { NativeCall<void, bool>(this, "UMovementComponent.SetPlaneConstraintEnabled(bool)", bEnabled); }
	void SnapUpdatedComponentToPlane() { NativeCall<void>(this, "UMovementComponent.SnapUpdatedComponentToPlane()"); }
	bool MoveUpdatedComponentImpl(const UE::Math::TVector<double>* Delta, const UE::Math::TQuat<double>* NewRotation, bool bSweep, FHitResult* OutHit, ETeleportType Teleport) { return NativeCall<bool, const UE::Math::TVector<double>*, const UE::Math::TQuat<double>*, bool, FHitResult*, ETeleportType>(this, "UMovementComponent.MoveUpdatedComponentImpl(UE::Math::TVector<double>&,UE::Math::TQuat<double>&,bool,FHitResult*,ETeleportType)", Delta, NewRotation, bSweep, OutHit, Teleport); }
	bool SafeMoveUpdatedComponent(const UE::Math::TVector<double>* Delta, const UE::Math::TQuat<double>* NewRotation, bool bSweep, FHitResult* OutHit, ETeleportType Teleport) { return NativeCall<bool, const UE::Math::TVector<double>*, const UE::Math::TQuat<double>*, bool, FHitResult*, ETeleportType>(this, "UMovementComponent.SafeMoveUpdatedComponent(UE::Math::TVector<double>&,UE::Math::TQuat<double>&,bool,FHitResult&,ETeleportType)", Delta, NewRotation, bSweep, OutHit, Teleport); }
	bool ResolvePenetrationImpl(const UE::Math::TVector<double>* ProposedAdjustment, const FHitResult* Hit, const UE::Math::TQuat<double>* NewRotationQuat) { return NativeCall<bool, const UE::Math::TVector<double>*, const FHitResult*, const UE::Math::TQuat<double>*>(this, "UMovementComponent.ResolvePenetrationImpl(UE::Math::TVector<double>&,FHitResult&,UE::Math::TQuat<double>&)", ProposedAdjustment, Hit, NewRotationQuat); }
	float SlideAlongSurface(const UE::Math::TVector<double>* Delta, float Time, const UE::Math::TVector<double>* Normal, FHitResult* Hit, bool bHandleImpact) { return NativeCall<float, const UE::Math::TVector<double>*, float, const UE::Math::TVector<double>*, FHitResult*, bool>(this, "UMovementComponent.SlideAlongSurface(UE::Math::TVector<double>&,float,UE::Math::TVector<double>&,FHitResult&,bool)", Delta, Time, Normal, Hit, bHandleImpact); }
	void TwoWallAdjust(UE::Math::TVector<double>* OutDelta, const FHitResult* Hit, const UE::Math::TVector<double>* OldHitNormal) { NativeCall<void, UE::Math::TVector<double>*, const FHitResult*, const UE::Math::TVector<double>*>(this, "UMovementComponent.TwoWallAdjust(UE::Math::TVector<double>&,FHitResult&,UE::Math::TVector<double>&)", OutDelta, Hit, OldHitNormal); }

	static UClass* StaticClass() { return AsaApi::ResolveClass("UMovementComponent"); }

	UE::Math::TVector<double>* ComputeSlideVector(UE::Math::TVector<double>* result, const UE::Math::TVector<double>& Delta, float Time, const UE::Math::TVector<double>& Normal, const FHitResult& Hit) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*, const UE::Math::TVector<double>&, float, const UE::Math::TVector<double>&, const FHitResult&>(this, "UMovementComponent.ComputeSlideVector(UE::Math::TVector<double>&,float,UE::Math::TVector<double>&,FHitResult&)", result, Delta, Time, Normal, Hit); }
	void PhysicsVolumeChanged(APhysicsVolume* NewVolume) { NativeCall<void, APhysicsVolume*>(this, "UMovementComponent.PhysicsVolumeChanged(APhysicsVolume*)", NewVolume); }
	void OnTeleported() { NativeCall<void>(this, "UMovementComponent.OnTeleported()"); }
	float GetMaxSpeed() { return NativeCall<float>(this, "UMovementComponent.GetMaxSpeed()"); }
	void AddRadialForce(const UE::Math::TVector<double>& Origin, float Radius, float Strength, ERadialImpulseFalloff Falloff) { NativeCall<void, const UE::Math::TVector<double>&, float, float, ERadialImpulseFalloff>(this, "UMovementComponent.AddRadialForce(UE::Math::TVector<double>&,float,float,ERadialImpulseFalloff)", Origin, Radius, Strength, Falloff); }
	bool TryDeferEndScopedMovementUpdate(USceneComponent* pSceneComponent, FScopedMovementUpdate* pScopedMovementUpdate) { return NativeCall<bool, USceneComponent*, FScopedMovementUpdate*>(this, "UMovementComponent.TryDeferEndScopedMovementUpdate(USceneComponent*,FScopedMovementUpdate*)", pSceneComponent, pScopedMovementUpdate); }
	APhysicsVolume* GetPhysicsVolume() { return NativeCall<APhysicsVolume*>(this, "UMovementComponent.GetPhysicsVolume()"); }
	void AddRadialImpulse(const UE::Math::TVector<double>& Origin, float Radius, float Strength, ERadialImpulseFalloff Falloff, bool bVelChange) { NativeCall<void, const UE::Math::TVector<double>&, float, float, ERadialImpulseFalloff, bool>(this, "UMovementComponent.AddRadialImpulse(UE::Math::TVector<double>&,float,float,ERadialImpulseFalloff,bool)", Origin, Radius, Strength, Falloff, bVelChange); }
	void UpdateTickRegistration() { NativeCall<void>(this, "UMovementComponent.UpdateTickRegistration()"); }
	void HandleImpact(const FHitResult& Hit, float TimeSlice, const UE::Math::TVector<double>& MoveDelta) { NativeCall<void, const FHitResult&, float, const UE::Math::TVector<double>&>(this, "UMovementComponent.HandleImpact(FHitResult&,float,UE::Math::TVector<double>&)", Hit, TimeSlice, MoveDelta); }
	UE::Math::TVector<double>* GetPenetrationAdjustment(UE::Math::TVector<double>* result, const FHitResult& Hit) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*, const FHitResult&>(this, "UMovementComponent.GetPenetrationAdjustment(FHitResult&)", result, Hit); }
	UE::Math::TVector<double>* GetPlaneConstraintNormalFromAxisSetting(UE::Math::TVector<double>* result, EPlaneConstraintAxisSetting AxisSetting) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*, EPlaneConstraintAxisSetting>(this, "UMovementComponent.GetPlaneConstraintNormalFromAxisSetting(EPlaneConstraintAxisSetting)", result, AxisSetting); }
	bool IsMeshed(const UE::Math::TVector<double>& prevLocation) { return NativeCall<bool, const UE::Math::TVector<double>&>(this, "UMovementComponent.IsMeshed(UE::Math::TVector<double>&)", prevLocation); }
};