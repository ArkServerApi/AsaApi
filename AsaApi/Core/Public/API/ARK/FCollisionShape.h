#pragma once


struct FCollisionShape
{
	// Fields

	ECollisionShape::Type& ShapeTypeField() { return *GetNativePointerField<ECollisionShape::Type*>(this, "FCollisionShape.ShapeType"); }
	//FCollisionShape::<unnamed - tag>::<unnamed - type - Box>&BoxField() { return *GetNativePointerField<FCollisionShape::<unnamed - tag>::<unnamed - type - Box>*>(this, "FCollisionShape.Box"); }
	//FCollisionShape::<unnamed - tag>::<unnamed - type - Sphere>&SphereField() { return *GetNativePointerField<FCollisionShape::<unnamed - tag>::<unnamed - type - Sphere>*>(this, "FCollisionShape.Sphere"); }
	//FCollisionShape::<unnamed - tag>::<unnamed - type - Capsule>&CapsuleField() { return *GetNativePointerField<FCollisionShape::<unnamed - tag>::<unnamed - type - Capsule>*>(this, "FCollisionShape.Capsule"); }

	// Bitfields

	// Functions

//     static FCollisionShape MakeCapsule(float CapsuleRadius, float CapsuleHalfHeight) { return NativeCall<FCollisionShape, float, float>(nullptr, "FCollisionShape.MakeCapsule(float,float)", CapsuleRadius, CapsuleHalfHeight); }
// FUNCTION MISSING: FCollisionShape.MakeCapsule(float,float)
//     static FCollisionShape MakeCapsule(const UE::Math::TVector<double>& Extent) { return NativeCall<FCollisionShape, const UE::Math::TVector<double>&>(nullptr, "FCollisionShape.MakeCapsule(UE::Math::TVector<double>&)", Extent); }
// FUNCTION MISSING: FCollisionShape.MakeCapsule(UE::Math::TVector<double>&)
	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// static FCollisionShape MakeSphere(float SphereRadius);
	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// static FCollisionShape MakeBox(const UE::Math::TVector<double>& BoxHalfExtent);
	//     bool IsNearlyZero()const { return NativeCall<bool>(this, "FCollisionShape.IsNearlyZero()"); }
	// FUNCTION MISSING: FCollisionShape.IsNearlyZero()
};