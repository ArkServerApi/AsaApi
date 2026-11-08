#pragma once
#include "UEValueForward.h"
#include "UEObjectForward.h"
#include <cstddef>
#include <type_traits>

struct FInterpControlPoint
{
public:
    UE :: Math :: TVector < double > PositionControlPoint;
    bool bPositionIsRelative;
    float StartTime;
    float DistanceToNext;
    float Percentage;
    FInterpControlPoint() = delete;
    UE::Math::TVector<double>& PositionControlPointField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "FInterpControlPoint.PositionControlPoint"); }
    bool& bPositionIsRelativeField() { return *GetNativePointerField<bool*>(this, "FInterpControlPoint.bPositionIsRelative"); }
    float& StartTimeField() { return *GetNativePointerField<float*>(this, "FInterpControlPoint.StartTime"); }
    float& DistanceToNextField() { return *GetNativePointerField<float*>(this, "FInterpControlPoint.DistanceToNext"); }
    float& PercentageField() { return *GetNativePointerField<float*>(this, "FInterpControlPoint.Percentage"); }
};
static_assert(sizeof(FInterpControlPoint) == 40);
static_assert(offsetof(FInterpControlPoint, PositionControlPoint) == 0);
static_assert(offsetof(FInterpControlPoint, bPositionIsRelative) == 24);
static_assert(offsetof(FInterpControlPoint, StartTime) == 28);
static_assert(offsetof(FInterpControlPoint, DistanceToNext) == 32);
static_assert(offsetof(FInterpControlPoint, Percentage) == 36);
static_assert(sizeof(((FInterpControlPoint*)nullptr)->PositionControlPoint) == 24);
static_assert(sizeof(((FInterpControlPoint*)nullptr)->bPositionIsRelative) == 1);
static_assert(sizeof(((FInterpControlPoint*)nullptr)->StartTime) == 4);
static_assert(sizeof(((FInterpControlPoint*)nullptr)->DistanceToNext) == 4);
static_assert(sizeof(((FInterpControlPoint*)nullptr)->Percentage) == 4);
static_assert(std::is_trivially_copyable_v<FInterpControlPoint>);
