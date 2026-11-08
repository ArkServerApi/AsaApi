#pragma once
#include "BulkForward.h"
#include "UShapeComponent.h"

struct UCapsuleComponent : public UShapeComponent
{
public:
	UCapsuleComponent() = delete;
	~UCapsuleComponent() = delete;
	UCapsuleComponent(const UCapsuleComponent&) = delete;
	UCapsuleComponent& operator=(const UCapsuleComponent&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UCapsuleComponent"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UCapsuleComponent"); }

	float& CapsuleHalfHeightField() { return *GetNativePointerField<float*>(this, "UCapsuleComponent.CapsuleHalfHeight"); }
	float& CapsuleRadiusField() { return *GetNativePointerField<float*>(this, "UCapsuleComponent.CapsuleRadius"); }
	FPrimitiveSceneProxy* CreateSceneProxy() { return NativeCall<FPrimitiveSceneProxy*>(this, "UCapsuleComponent.CreateSceneProxy()"); }
	void PostLoad() { NativeCall<void>(this, "UCapsuleComponent.PostLoad()"); }
	void SetCapsuleSize(float NewRadius, float NewHalfHeight, bool bUpdateOverlaps) { NativeCall<void, float, float, bool>(this, "UCapsuleComponent.SetCapsuleSize(float,float,bool)", NewRadius, NewHalfHeight, bUpdateOverlaps); }
	void CalcBoundingCylinder(float& CylinderRadius, float& CylinderHalfHeight) { NativeCall<void, float&, float&>(this, "UCapsuleComponent.CalcBoundingCylinder(float&,float&)", CylinderRadius, CylinderHalfHeight); }
	bool IsZeroExtent() { return NativeCall<bool>(this, "UCapsuleComponent.IsZeroExtent()"); }
	void UpdateBodySetup() { NativeCall<void>(this, "UCapsuleComponent.UpdateBodySetup()"); }
	bool IsSymmetricCollision() { return NativeCall<bool>(this, "UCapsuleComponent.IsSymmetricCollision()"); }
};
