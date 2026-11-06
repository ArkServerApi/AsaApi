#pragma once
#include "UEValueForward.h"
#include "UEObjectForward.h"
#include <cstddef>
#include <type_traits>

struct FLandscapeGrassName
{
public:
    FName Name;
    FLandscapeGrassName() = default;
    FLandscapeGrassName(const FName& InName)
		: Name(InName)
	{}
    FName& NameField() { return *GetNativePointerField<FName*>(this, "FLandscapeGrassName.Name"); }
};
static_assert(sizeof(FLandscapeGrassName) == 8);
static_assert(offsetof(FLandscapeGrassName, Name) == 0);
static_assert(sizeof(((FLandscapeGrassName*)nullptr)->Name) == 8);
static_assert(std::is_trivially_copyable_v<FLandscapeGrassName>);
