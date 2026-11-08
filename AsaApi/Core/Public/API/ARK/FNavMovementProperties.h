#pragma once
#include "UEValueForward.h"
#include "UEObjectForward.h"
#include <cstddef>
#include <type_traits>

struct FNavMovementProperties
{
public:
    float FixedPathBrakingDistance = 0;
    bool bUpdateNavAgentWithOwnersCollision = true;
    bool bUseAccelerationForPaths = false;
    bool bUseFixedBrakingDistanceForPaths = false;
    bool bStopMovementAbortPaths = true;
    FNavMovementProperties() = default;
    float& FixedPathBrakingDistanceField() { return *GetNativePointerField<float*>(this, "FNavMovementProperties.FixedPathBrakingDistance"); }
    bool& bUpdateNavAgentWithOwnersCollisionField() { return *GetNativePointerField<bool*>(this, "FNavMovementProperties.bUpdateNavAgentWithOwnersCollision"); }
    bool& bUseAccelerationForPathsField() { return *GetNativePointerField<bool*>(this, "FNavMovementProperties.bUseAccelerationForPaths"); }
    bool& bUseFixedBrakingDistanceForPathsField() { return *GetNativePointerField<bool*>(this, "FNavMovementProperties.bUseFixedBrakingDistanceForPaths"); }
    bool& bStopMovementAbortPathsField() { return *GetNativePointerField<bool*>(this, "FNavMovementProperties.bStopMovementAbortPaths"); }
};
static_assert(sizeof(FNavMovementProperties) == 8);
static_assert(offsetof(FNavMovementProperties, FixedPathBrakingDistance) == 0);
static_assert(offsetof(FNavMovementProperties, bUpdateNavAgentWithOwnersCollision) == 4);
static_assert(offsetof(FNavMovementProperties, bUseAccelerationForPaths) == 5);
static_assert(offsetof(FNavMovementProperties, bUseFixedBrakingDistanceForPaths) == 6);
static_assert(offsetof(FNavMovementProperties, bStopMovementAbortPaths) == 7);
static_assert(sizeof(((FNavMovementProperties*)nullptr)->FixedPathBrakingDistance) == 4);
static_assert(sizeof(((FNavMovementProperties*)nullptr)->bUpdateNavAgentWithOwnersCollision) == 1);
static_assert(sizeof(((FNavMovementProperties*)nullptr)->bUseAccelerationForPaths) == 1);
static_assert(sizeof(((FNavMovementProperties*)nullptr)->bUseFixedBrakingDistanceForPaths) == 1);
static_assert(sizeof(((FNavMovementProperties*)nullptr)->bStopMovementAbortPaths) == 1);
static_assert(std::is_trivially_copyable_v<FNavMovementProperties>);
