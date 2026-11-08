#pragma once
#include "BulkForward.h"


struct USphereComponent : UShapeComponent
{
	// Fields

	float& SphereRadiusField() { return *GetNativePointerField<float*>(this, "USphereComponent.SphereRadius"); }

	// Bitfields

	// Functions

	static UClass* StaticClass() { return AsaApi::ResolveClass("USphereComponent"); }
	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// static void StaticRegisterNativesUSphereComponent();
	bool IsSymmetricCollision() { return NativeCall<bool>(this, "USphereComponent.IsSymmetricCollision()"); }
	void CalcBoundingCylinder(float& CylinderRadius, float& CylinderHalfHeight) const { NativeCall<void, float&, float&>(this, "USphereComponent.CalcBoundingCylinder(float&,float&)", CylinderRadius, CylinderHalfHeight); }
	void UpdateBodySetup() { NativeCall<void>(this, "USphereComponent.UpdateBodySetup()"); }
	void SetSphereRadius(float InSphereRadius, bool bUpdateOverlaps) { NativeCall<void, float, bool>(this, "USphereComponent.SetSphereRadius(float,bool)", InSphereRadius, bUpdateOverlaps); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("USphereComponent"); }
	FCollisionShape* GetCollisionShape(FCollisionShape* result, float Inflation) { return NativeCall<FCollisionShape*, FCollisionShape*, float>(this, "USphereComponent.GetCollisionShape(float)", result, Inflation); }
	//FPrimitiveSceneProxy* CreateSceneProxy() { return NativeCall<FPrimitiveSceneProxy*>(this, "USphereComponent.CreateSceneProxy()"); }
	bool AreSymmetricRotations(const UE::Math::TQuat<double>& A, const UE::Math::TQuat<double>& B, const UE::Math::TVector<double>& Scale3D) const { return NativeCall<bool, const UE::Math::TQuat<double>&, const UE::Math::TQuat<double>&, const UE::Math::TVector<double>&>(this, "USphereComponent.AreSymmetricRotations(UE::Math::TQuat<double>&,UE::Math::TQuat<double>&,UE::Math::TVector<double>&)", A, B, Scale3D); }
	//UE::Math::TBoxSphereBounds<double, double> CalcBounds(const UE::Math::TTransform<double>* LocalToWorld) const { return NativeCall<UE::Math::TBoxSphereBounds<double, double>, const UE::Math::TTransform<double>*>(this, "USphereComponent.CalcBounds(UE::Math::TTransform<double>&)", LocalToWorld); }
	bool IsZeroExtent()const { return NativeCall<bool>(this, "USphereComponent.IsZeroExtent()"); }

	FPrimitiveSceneProxy* CreateSceneProxy() { return NativeCall<FPrimitiveSceneProxy*>(this, "USphereComponent.CreateSceneProxy()"); }
};