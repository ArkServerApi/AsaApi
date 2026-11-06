#pragma once
#include "UEValueForward.h"
#include "UEObjectForward.h"
#include <cstddef>
#include <type_traits>

struct FCollisionProfileName
{
public:
    FName Name;
    FCollisionProfileName()
		: Name(NAME_None)
	{}
    FCollisionProfileName(const FName InName)
		: Name(InName)
	{}
    FName& NameField() { return *GetNativePointerField<FName*>(this, "FCollisionProfileName.Name"); }
};
static_assert(sizeof(FCollisionProfileName) == 8);
static_assert(offsetof(FCollisionProfileName, Name) == 0);
static_assert(sizeof(((FCollisionProfileName*)nullptr)->Name) == 8);
static_assert(std::is_trivially_copyable_v<FCollisionProfileName>);
