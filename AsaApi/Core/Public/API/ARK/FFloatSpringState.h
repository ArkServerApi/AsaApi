#pragma once
#include "UEValueForward.h"
#include "UEObjectForward.h"
#include <cstddef>
#include <type_traits>

struct FFloatSpringState
{
public:
    float PrevTarget;
    float Velocity;
    bool bPrevTargetValid;
    FFloatSpringState()
	: PrevTarget(0.f)
	, Velocity(0.f)
	, bPrevTargetValid(false)
	{
	}
    float& PrevTargetField() { return *GetNativePointerField<float*>(this, "FFloatSpringState.PrevTarget"); }
    float& VelocityField() { return *GetNativePointerField<float*>(this, "FFloatSpringState.Velocity"); }
    bool& bPrevTargetValidField() { return *GetNativePointerField<bool*>(this, "FFloatSpringState.bPrevTargetValid"); }
};
static_assert(sizeof(FFloatSpringState) == 12);
static_assert(offsetof(FFloatSpringState, PrevTarget) == 0);
static_assert(offsetof(FFloatSpringState, Velocity) == 4);
static_assert(offsetof(FFloatSpringState, bPrevTargetValid) == 8);
static_assert(sizeof(((FFloatSpringState*)nullptr)->PrevTarget) == 4);
static_assert(sizeof(((FFloatSpringState*)nullptr)->Velocity) == 4);
static_assert(sizeof(((FFloatSpringState*)nullptr)->bPrevTargetValid) == 1);
static_assert(std::is_trivially_copyable_v<FFloatSpringState>);
