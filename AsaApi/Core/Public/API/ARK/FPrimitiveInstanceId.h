#pragma once
#include "UEValueForward.h"
#include "UEObjectForward.h"
#include <cstddef>
#include <type_traits>

struct FPrimitiveInstanceId
{
public:
    int Id = INDEX_NONE;
    FPrimitiveInstanceId() = default;
    int& IdField() { return *GetNativePointerField<int*>(this, "FPrimitiveInstanceId.Id"); }
};
static_assert(sizeof(FPrimitiveInstanceId) == 4);
static_assert(offsetof(FPrimitiveInstanceId, Id) == 0);
static_assert(sizeof(((FPrimitiveInstanceId*)nullptr)->Id) == 4);
static_assert(std::is_trivially_copyable_v<FPrimitiveInstanceId>);
