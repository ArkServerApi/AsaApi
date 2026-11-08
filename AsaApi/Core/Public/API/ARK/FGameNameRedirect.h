#pragma once
#include "UEValueForward.h"
#include "UEObjectForward.h"
#include <cstddef>
#include <type_traits>

struct FGameNameRedirect
{
public:
    FName OldGameName;
    FName NewGameName;
    FGameNameRedirect() = default;
    FName& OldGameNameField() { return *GetNativePointerField<FName*>(this, "FGameNameRedirect.OldGameName"); }
    FName& NewGameNameField() { return *GetNativePointerField<FName*>(this, "FGameNameRedirect.NewGameName"); }
};
static_assert(sizeof(FGameNameRedirect) == 16);
static_assert(offsetof(FGameNameRedirect, OldGameName) == 0);
static_assert(offsetof(FGameNameRedirect, NewGameName) == 8);
static_assert(sizeof(((FGameNameRedirect*)nullptr)->OldGameName) == 8);
static_assert(sizeof(((FGameNameRedirect*)nullptr)->NewGameName) == 8);
static_assert(std::is_trivially_copyable_v<FGameNameRedirect>);
