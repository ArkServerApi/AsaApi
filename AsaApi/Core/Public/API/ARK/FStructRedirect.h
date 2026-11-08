#pragma once
#include "UEValueForward.h"
#include "UEObjectForward.h"
#include <cstddef>
#include <type_traits>

struct FStructRedirect
{
public:
    FName OldStructName;
    FName NewStructName;
    FStructRedirect() = default;
    FName& OldStructNameField() { return *GetNativePointerField<FName*>(this, "FStructRedirect.OldStructName"); }
    FName& NewStructNameField() { return *GetNativePointerField<FName*>(this, "FStructRedirect.NewStructName"); }
};
static_assert(sizeof(FStructRedirect) == 16);
static_assert(offsetof(FStructRedirect, OldStructName) == 0);
static_assert(offsetof(FStructRedirect, NewStructName) == 8);
static_assert(sizeof(((FStructRedirect*)nullptr)->OldStructName) == 8);
static_assert(sizeof(((FStructRedirect*)nullptr)->NewStructName) == 8);
static_assert(std::is_trivially_copyable_v<FStructRedirect>);
