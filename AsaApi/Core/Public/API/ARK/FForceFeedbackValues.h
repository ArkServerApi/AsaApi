#pragma once
#include "UEValueForward.h"
#include "UEObjectForward.h"
#include <cstddef>
#include <type_traits>

struct FForceFeedbackValues
{
public:
    float LeftLarge;
    float LeftSmall;
    float RightLarge;
    float RightSmall;
    FForceFeedbackValues()
		: LeftLarge(0.f)
		, LeftSmall(0.f)
		, RightLarge(0.f)
		, RightSmall(0.f)
	{ }
    float& LeftLargeField() { return *GetNativePointerField<float*>(this, "FForceFeedbackValues.LeftLarge"); }
    float& LeftSmallField() { return *GetNativePointerField<float*>(this, "FForceFeedbackValues.LeftSmall"); }
    float& RightLargeField() { return *GetNativePointerField<float*>(this, "FForceFeedbackValues.RightLarge"); }
    float& RightSmallField() { return *GetNativePointerField<float*>(this, "FForceFeedbackValues.RightSmall"); }
};
static_assert(sizeof(FForceFeedbackValues) == 16);
static_assert(offsetof(FForceFeedbackValues, LeftLarge) == 0);
static_assert(offsetof(FForceFeedbackValues, LeftSmall) == 4);
static_assert(offsetof(FForceFeedbackValues, RightLarge) == 8);
static_assert(offsetof(FForceFeedbackValues, RightSmall) == 12);
static_assert(sizeof(((FForceFeedbackValues*)nullptr)->LeftLarge) == 4);
static_assert(sizeof(((FForceFeedbackValues*)nullptr)->LeftSmall) == 4);
static_assert(sizeof(((FForceFeedbackValues*)nullptr)->RightLarge) == 4);
static_assert(sizeof(((FForceFeedbackValues*)nullptr)->RightSmall) == 4);
static_assert(std::is_trivially_copyable_v<FForceFeedbackValues>);
