#pragma once
#include "BulkForward.h"
#include "USceneComponent.h"

struct UPhysicsSpringComponent : public USceneComponent
{
public:
	UPhysicsSpringComponent() = delete;
	~UPhysicsSpringComponent() = delete;
	UPhysicsSpringComponent(const UPhysicsSpringComponent&) = delete;
	UPhysicsSpringComponent& operator=(const UPhysicsSpringComponent&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UPhysicsSpringComponent"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UPhysicsSpringComponent"); }

	float& SpringStiffnessField() { return *GetNativePointerField<float*>(this, "UPhysicsSpringComponent.SpringStiffness"); }
	float& SpringDampingField() { return *GetNativePointerField<float*>(this, "UPhysicsSpringComponent.SpringDamping"); }
	float& SpringLengthAtRestField() { return *GetNativePointerField<float*>(this, "UPhysicsSpringComponent.SpringLengthAtRest"); }
	float& SpringRadiusField() { return *GetNativePointerField<float*>(this, "UPhysicsSpringComponent.SpringRadius"); }
	bool& bIgnoreSelfField() { return *GetNativePointerField<bool*>(this, "UPhysicsSpringComponent.bIgnoreSelf"); }
	float& SpringCompressionField() { return *GetNativePointerField<float*>(this, "UPhysicsSpringComponent.SpringCompression"); }
	UE::Math::TVector<double>& CurrentEndPointField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "UPhysicsSpringComponent.CurrentEndPoint"); }
	UE::Math::TVector<double>* GetSpringRestingPoint(UE::Math::TVector<double>* result) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*>(this, "UPhysicsSpringComponent.GetSpringRestingPoint()", result); }
	UE::Math::TVector<double>* GetSpringCurrentEndPoint(UE::Math::TVector<double>* result) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*>(this, "UPhysicsSpringComponent.GetSpringCurrentEndPoint()", result); }
	void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) { NativeCall<void, float, ELevelTick, FActorComponentTickFunction*>(this, "UPhysicsSpringComponent.TickComponent(float,ELevelTick,FActorComponentTickFunction*)", DeltaTime, TickType, ThisTickFunction); }
	UPrimitiveComponent* GetSpringCollision(const UE::Math::TVector<double>& Start, const UE::Math::TVector<double>& End, float& Time) { return NativeCall<UPrimitiveComponent*, const UE::Math::TVector<double>&, const UE::Math::TVector<double>&, float&>(this, "UPhysicsSpringComponent.GetSpringCollision(UE::Math::TVector<double>&,UE::Math::TVector<double>&,float&)", Start, End, Time); }
	UE::Math::TVector<double>* ComputeNewSpringCompressionAndForce(UE::Math::TVector<double>* result, const UE::Math::TVector<double>& End, float DeltaTime, float& NewSpringCompression) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*, const UE::Math::TVector<double>&, float, float&>(this, "UPhysicsSpringComponent.ComputeNewSpringCompressionAndForce(UE::Math::TVector<double>&,float,float&)", result, End, DeltaTime, NewSpringCompression); }
	float GetNormalizedCompressionScalar() { return NativeCall<float>(this, "UPhysicsSpringComponent.GetNormalizedCompressionScalar()"); }
	UE::Math::TVector<double>* GetSpringDirection(UE::Math::TVector<double>* result) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*>(this, "UPhysicsSpringComponent.GetSpringDirection()", result); }
	UE::Math::TVector<double>* SpringPositionFromLength(UE::Math::TVector<double>* result, float Length) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*, float>(this, "UPhysicsSpringComponent.SpringPositionFromLength(float)", result, Length); }
};
