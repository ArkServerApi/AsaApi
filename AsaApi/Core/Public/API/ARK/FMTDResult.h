#pragma once
#include "UEValueForward.h"
#include "UEObjectForward.h"
#include <cstddef>
#include <type_traits>

struct FMTDResult
{
public:
    UE :: Math :: TVector < double > Direction;
    float Distance;
    FMTDResult() = delete;
    UE::Math::TVector<double>& DirectionField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "FMTDResult.Direction"); }
    float& DistanceField() { return *GetNativePointerField<float*>(this, "FMTDResult.Distance"); }
};
static_assert(sizeof(FMTDResult) == 32);
static_assert(offsetof(FMTDResult, Direction) == 0);
static_assert(offsetof(FMTDResult, Distance) == 24);
static_assert(sizeof(((FMTDResult*)nullptr)->Direction) == 24);
static_assert(sizeof(((FMTDResult*)nullptr)->Distance) == 4);
static_assert(std::is_trivially_copyable_v<FMTDResult>);
