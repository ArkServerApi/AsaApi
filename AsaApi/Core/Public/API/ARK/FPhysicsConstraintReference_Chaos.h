#pragma once
#include "UEValueForward.h"
#include "UEObjectForward.h"
#include <cstddef>
#include <type_traits>

class FPhysicsConstraintReference_Chaos
{
public:
    Chaos :: FConstraintBase * Constraint;
    FPhysicsConstraintReference_Chaos() = delete;
    bool IsValid() { return NativeCall<bool>(this, "FPhysicsConstraintReference_Chaos.IsValid()"); }
};
static_assert(sizeof(FPhysicsConstraintReference_Chaos) == 8);
static_assert(offsetof(FPhysicsConstraintReference_Chaos, Constraint) == 0);
static_assert(sizeof(((FPhysicsConstraintReference_Chaos*)nullptr)->Constraint) == 8);
static_assert(std::is_trivially_copyable_v<FPhysicsConstraintReference_Chaos>);
