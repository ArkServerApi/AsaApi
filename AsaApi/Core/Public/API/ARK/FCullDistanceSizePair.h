#pragma once
#include "UEValueForward.h"
#include "UEObjectForward.h"
#include <cstddef>
#include <type_traits>

struct FCullDistanceSizePair
{
public:
    float Size;
    float CullDistance;
    FCullDistanceSizePair()
		: Size(0)
		, CullDistance(0)
	{ }
    FCullDistanceSizePair(float InSize, float InCullDistance)
		: Size(InSize)
		, CullDistance(InCullDistance)
	{ }
    float& SizeField() { return *GetNativePointerField<float*>(this, "FCullDistanceSizePair.Size"); }
    float& CullDistanceField() { return *GetNativePointerField<float*>(this, "FCullDistanceSizePair.CullDistance"); }
};
static_assert(sizeof(FCullDistanceSizePair) == 8);
static_assert(offsetof(FCullDistanceSizePair, Size) == 0);
static_assert(offsetof(FCullDistanceSizePair, CullDistance) == 4);
static_assert(sizeof(((FCullDistanceSizePair*)nullptr)->Size) == 4);
static_assert(sizeof(((FCullDistanceSizePair*)nullptr)->CullDistance) == 4);
static_assert(std::is_trivially_copyable_v<FCullDistanceSizePair>);
