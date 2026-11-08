#pragma once
#include "BulkForward.h"
#include "AActor.h"

struct ANavigationObjectBase : public AActor
{
public:
	ANavigationObjectBase() = delete;
	~ANavigationObjectBase() = delete;
	ANavigationObjectBase(const ANavigationObjectBase&) = delete;
	ANavigationObjectBase& operator=(const ANavigationObjectBase&) = delete;
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("ANavigationObjectBase"); }

	BitFieldValue<bool, unsigned __int32> bIsPIEPlayerStart() { return { this, "ANavigationObjectBase.bIsPIEPlayerStart"}; }
	void GetMoveGoalReachTest(const AActor* MovingActor, const UE::Math::TVector<double>& MoveOffset, UE::Math::TVector<double>& GoalOffset, float& GoalRadius, float& GoalHalfHeight) { NativeCall<void, const AActor*, const UE::Math::TVector<double>&, UE::Math::TVector<double>&, float&, float&>(this, "ANavigationObjectBase.GetMoveGoalReachTest(AActor*,UE::Math::TVector<double>&,UE::Math::TVector<double>&,float&,float&)", MovingActor, MoveOffset, GoalOffset, GoalRadius, GoalHalfHeight); }
	void GetSimpleCollisionCylinder(float& CollisionRadius, float& CollisionHalfHeight) { NativeCall<void, float&, float&>(this, "ANavigationObjectBase.GetSimpleCollisionCylinder(float&,float&)", CollisionRadius, CollisionHalfHeight); }
	void Validate() { NativeCall<void>(this, "ANavigationObjectBase.Validate()"); }
	void FindBase() { NativeCall<void>(this, "ANavigationObjectBase.FindBase()"); }
	bool ShouldBeBased() { return NativeCall<bool>(this, "ANavigationObjectBase.ShouldBeBased()"); }
	UObject* _getUObject() { return NativeCall<UObject*>(this, "ANavigationObjectBase._getUObject()"); }
	UE::Math::TVector<double>* GetNavAgentLocation(UE::Math::TVector<double>* result) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*>(this, "ANavigationObjectBase.GetNavAgentLocation()", result); }
	static UClass* StaticClass() { return AsaApi::ResolveClass("ANavigationObjectBase"); }
};
