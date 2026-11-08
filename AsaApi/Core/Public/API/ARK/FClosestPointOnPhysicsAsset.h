#pragma once
#include "UEValueForward.h"
#include "UEObjectForward.h"
#include <cstddef>
#include <type_traits>

struct FClosestPointOnPhysicsAsset
{
public:
    UE :: Math :: TVector < double > ClosestWorldPosition;
    UE :: Math :: TVector < double > Normal;
    FName BoneName;
    float Distance;
    FClosestPointOnPhysicsAsset()
		: ClosestWorldPosition(FVector::ZeroVector)
		, Normal(FVector::ZeroVector)
		, BoneName(NAME_None)
		, Distance(-1.f)
	{
	}
    UE::Math::TVector<double>& ClosestWorldPositionField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "FClosestPointOnPhysicsAsset.ClosestWorldPosition"); }
    UE::Math::TVector<double>& NormalField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "FClosestPointOnPhysicsAsset.Normal"); }
    FName& BoneNameField() { return *GetNativePointerField<FName*>(this, "FClosestPointOnPhysicsAsset.BoneName"); }
    float& DistanceField() { return *GetNativePointerField<float*>(this, "FClosestPointOnPhysicsAsset.Distance"); }
};
static_assert(sizeof(FClosestPointOnPhysicsAsset) == 64);
static_assert(offsetof(FClosestPointOnPhysicsAsset, ClosestWorldPosition) == 0);
static_assert(offsetof(FClosestPointOnPhysicsAsset, Normal) == 24);
static_assert(offsetof(FClosestPointOnPhysicsAsset, BoneName) == 48);
static_assert(offsetof(FClosestPointOnPhysicsAsset, Distance) == 56);
static_assert(sizeof(((FClosestPointOnPhysicsAsset*)nullptr)->ClosestWorldPosition) == 24);
static_assert(sizeof(((FClosestPointOnPhysicsAsset*)nullptr)->Normal) == 24);
static_assert(sizeof(((FClosestPointOnPhysicsAsset*)nullptr)->BoneName) == 8);
static_assert(sizeof(((FClosestPointOnPhysicsAsset*)nullptr)->Distance) == 4);
static_assert(std::is_trivially_copyable_v<FClosestPointOnPhysicsAsset>);
