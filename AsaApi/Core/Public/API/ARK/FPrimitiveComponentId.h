#pragma once
#include "UEValueForward.h"
#include "UEObjectForward.h"
#include <cstddef>
#include <type_traits>

class FPrimitiveComponentId
{
public:
    unsigned int PrimIDValue;
    FPrimitiveComponentId() : PrimIDValue(0)
	{}
    unsigned int& PrimIDValueField() { return *GetNativePointerField<unsigned int*>(this, "FPrimitiveComponentId.PrimIDValue"); }
};
static_assert(sizeof(FPrimitiveComponentId) == 4);
static_assert(offsetof(FPrimitiveComponentId, PrimIDValue) == 0);
static_assert(sizeof(((FPrimitiveComponentId*)nullptr)->PrimIDValue) == 4);
static_assert(std::is_trivially_copyable_v<FPrimitiveComponentId>);
