#pragma once
#include "UEValueForward.h"
#include "UEObjectForward.h"
#include <cstddef>
#include <type_traits>

struct FConstrainComponentPropName
{
public:
    FName ComponentName;
    FConstrainComponentPropName() = default;
    FName& ComponentNameField() { return *GetNativePointerField<FName*>(this, "FConstrainComponentPropName.ComponentName"); }
};
static_assert(sizeof(FConstrainComponentPropName) == 8);
static_assert(offsetof(FConstrainComponentPropName, ComponentName) == 0);
static_assert(sizeof(((FConstrainComponentPropName*)nullptr)->ComponentName) == 8);
static_assert(std::is_trivially_copyable_v<FConstrainComponentPropName>);
