#pragma once
#include "BulkForward.h"
#include "UActorComponent.h"

struct UPhysicsHandleComponent : public UActorComponent
{
public:
	UPhysicsHandleComponent() = delete;
	~UPhysicsHandleComponent() = delete;
	UPhysicsHandleComponent(const UPhysicsHandleComponent&) = delete;
	UPhysicsHandleComponent& operator=(const UPhysicsHandleComponent&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UPhysicsHandleComponent"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UPhysicsHandleComponent"); }

	FName& GrabbedBoneNameField() { return *GetNativePointerField<FName*>(this, "UPhysicsHandleComponent.GrabbedBoneName"); }
	float& LinearDampingField() { return *GetNativePointerField<float*>(this, "UPhysicsHandleComponent.LinearDamping"); }
	float& LinearStiffnessField() { return *GetNativePointerField<float*>(this, "UPhysicsHandleComponent.LinearStiffness"); }
	float& AngularDampingField() { return *GetNativePointerField<float*>(this, "UPhysicsHandleComponent.AngularDamping"); }
	float& AngularStiffnessField() { return *GetNativePointerField<float*>(this, "UPhysicsHandleComponent.AngularStiffness"); }
	float& InterpolationSpeedField() { return *GetNativePointerField<float*>(this, "UPhysicsHandleComponent.InterpolationSpeed"); }
	bool& bPendingConstraintField() { return *GetNativePointerField<bool*>(this, "UPhysicsHandleComponent.bPendingConstraint"); }
	FPhysicsUserData_Chaos& PhysicsUserDataField() { return *GetNativePointerField<FPhysicsUserData_Chaos*>(this, "UPhysicsHandleComponent.PhysicsUserData"); }
	FConstraintInstance& ConstraintInstanceField() { return *GetNativePointerField<FConstraintInstance*>(this, "UPhysicsHandleComponent.ConstraintInstance"); }
	FPhysicsConstraintReference_Chaos& ConstraintHandleField() { return *GetNativePointerField<FPhysicsConstraintReference_Chaos*>(this, "UPhysicsHandleComponent.ConstraintHandle"); }
	UE::Math::TVector<double>& ConstraintLocalPositionField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "UPhysicsHandleComponent.ConstraintLocalPosition"); }
	UE::Math::TRotator<double>& ConstraintLocalRotationField() { return *GetNativePointerField<UE::Math::TRotator<double>*>(this, "UPhysicsHandleComponent.ConstraintLocalRotation"); }
	BitFieldValue<bool, unsigned __int32> bRotationConstrained() { return { this, "UPhysicsHandleComponent.bRotationConstrained"}; }
	BitFieldValue<bool, unsigned __int32> bSoftAngularConstraint() { return { this, "UPhysicsHandleComponent.bSoftAngularConstraint"}; }
	BitFieldValue<bool, unsigned __int32> bSoftLinearConstraint() { return { this, "UPhysicsHandleComponent.bSoftLinearConstraint"}; }
	BitFieldValue<bool, unsigned __int32> bInterpolateTarget() { return { this, "UPhysicsHandleComponent.bInterpolateTarget"}; }
	void OnUnregister() { NativeCall<void>(this, "UPhysicsHandleComponent.OnUnregister()"); }
	void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) { NativeCall<void, float, ELevelTick, FActorComponentTickFunction*>(this, "UPhysicsHandleComponent.TickComponent(float,ELevelTick,FActorComponentTickFunction*)", DeltaTime, TickType, ThisTickFunction); }
	void GrabComponentImp(UPrimitiveComponent* InComponent, FName InBoneName, const UE::Math::TVector<double>& Location, const UE::Math::TRotator<double>& Rotation, bool bInConstrainRotation) { NativeCall<void, UPrimitiveComponent*, FName, const UE::Math::TVector<double>&, const UE::Math::TRotator<double>&, bool>(this, "UPhysicsHandleComponent.GrabComponentImp(UPrimitiveComponent*,FName,UE::Math::TVector<double>&,UE::Math::TRotator<double>&,bool)", InComponent, InBoneName, Location, Rotation, bInConstrainRotation); }
	void ReleaseComponent() { NativeCall<void>(this, "UPhysicsHandleComponent.ReleaseComponent()"); }
	void UpdateDriveSettings() { NativeCall<void>(this, "UPhysicsHandleComponent.UpdateDriveSettings()"); }
	void GrabComponent(UPrimitiveComponent* InComponent, FName InBoneName, UE::Math::TVector<double>* GrabLocation, bool bInConstrainRotation) { if (!GrabLocation) throw std::invalid_argument("Null native value parameter"); return NativeCall<void, UPrimitiveComponent *, FName, UE :: Math :: TVector < double >, bool>(this, "UPhysicsHandleComponent.GrabComponent(UPrimitiveComponent*,FName,UE::Math::TVector<double>,bool)", InComponent, InBoneName, *GrabLocation, bInConstrainRotation); }
};
