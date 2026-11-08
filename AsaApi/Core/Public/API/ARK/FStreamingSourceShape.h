#pragma once
#include "UEValueForward.h"
#include "UEObjectForward.h"
#include <cstddef>
#include <type_traits>

struct FStreamingSourceShape
{
public:
    bool bUseGridLoadingRange;
    float LoadingRangeScale;
    float Radius;
    bool bIsSector;
    float SectorAngle;
    UE :: Math :: TVector < double > Location;
    UE :: Math :: TRotator < double > Rotation;
    FStreamingSourceShape()
	: bUseGridLoadingRange(true)
	, LoadingRangeScale(1.f)
	, Radius(10000.0f)
	, bIsSector(false)
	, SectorAngle(360.0f)
	, Location(ForceInitToZero)
	, Rotation(ForceInitToZero)
	{}
    bool& bUseGridLoadingRangeField() { return *GetNativePointerField<bool*>(this, "FStreamingSourceShape.bUseGridLoadingRange"); }
    float& LoadingRangeScaleField() { return *GetNativePointerField<float*>(this, "FStreamingSourceShape.LoadingRangeScale"); }
    float& RadiusField() { return *GetNativePointerField<float*>(this, "FStreamingSourceShape.Radius"); }
    bool& bIsSectorField() { return *GetNativePointerField<bool*>(this, "FStreamingSourceShape.bIsSector"); }
    float& SectorAngleField() { return *GetNativePointerField<float*>(this, "FStreamingSourceShape.SectorAngle"); }
    UE::Math::TVector<double>& LocationField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "FStreamingSourceShape.Location"); }
    UE::Math::TRotator<double>& RotationField() { return *GetNativePointerField<UE::Math::TRotator<double>*>(this, "FStreamingSourceShape.Rotation"); }
};
static_assert(sizeof(FStreamingSourceShape) == 72);
static_assert(offsetof(FStreamingSourceShape, bUseGridLoadingRange) == 0);
static_assert(offsetof(FStreamingSourceShape, LoadingRangeScale) == 4);
static_assert(offsetof(FStreamingSourceShape, Radius) == 8);
static_assert(offsetof(FStreamingSourceShape, bIsSector) == 12);
static_assert(offsetof(FStreamingSourceShape, SectorAngle) == 16);
static_assert(offsetof(FStreamingSourceShape, Location) == 24);
static_assert(offsetof(FStreamingSourceShape, Rotation) == 48);
static_assert(sizeof(((FStreamingSourceShape*)nullptr)->bUseGridLoadingRange) == 1);
static_assert(sizeof(((FStreamingSourceShape*)nullptr)->LoadingRangeScale) == 4);
static_assert(sizeof(((FStreamingSourceShape*)nullptr)->Radius) == 4);
static_assert(sizeof(((FStreamingSourceShape*)nullptr)->bIsSector) == 1);
static_assert(sizeof(((FStreamingSourceShape*)nullptr)->SectorAngle) == 4);
static_assert(sizeof(((FStreamingSourceShape*)nullptr)->Location) == 24);
static_assert(sizeof(((FStreamingSourceShape*)nullptr)->Rotation) == 24);
static_assert(std::is_trivially_copyable_v<FStreamingSourceShape>);
