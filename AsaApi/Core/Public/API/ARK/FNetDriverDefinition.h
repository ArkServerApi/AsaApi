#pragma once
#include "UEValueForward.h"
#include "UEObjectForward.h"
#include <cstddef>
#include <type_traits>

struct FNetDriverDefinition
{
public:
    FName DefName;
    FName DriverClassName;
    FName DriverClassNameFallback;
    int MaxChannelsOverride;
    bool bRunParallelConnectionTick;
    FNetDriverDefinition() :
		DefName(NAME_None),
		DriverClassName(NAME_None),
		DriverClassNameFallback(NAME_None),
		MaxChannelsOverride(INDEX_NONE),
		bRunParallelConnectionTick(false)
	{
	}
    FName& DefNameField() { return *GetNativePointerField<FName*>(this, "FNetDriverDefinition.DefName"); }
    FName& DriverClassNameField() { return *GetNativePointerField<FName*>(this, "FNetDriverDefinition.DriverClassName"); }
    FName& DriverClassNameFallbackField() { return *GetNativePointerField<FName*>(this, "FNetDriverDefinition.DriverClassNameFallback"); }
    int& MaxChannelsOverrideField() { return *GetNativePointerField<int*>(this, "FNetDriverDefinition.MaxChannelsOverride"); }
    bool& bRunParallelConnectionTickField() { return *GetNativePointerField<bool*>(this, "FNetDriverDefinition.bRunParallelConnectionTick"); }
};
static_assert(sizeof(FNetDriverDefinition) == 32);
static_assert(offsetof(FNetDriverDefinition, DefName) == 0);
static_assert(offsetof(FNetDriverDefinition, DriverClassName) == 8);
static_assert(offsetof(FNetDriverDefinition, DriverClassNameFallback) == 16);
static_assert(offsetof(FNetDriverDefinition, MaxChannelsOverride) == 24);
static_assert(offsetof(FNetDriverDefinition, bRunParallelConnectionTick) == 28);
static_assert(sizeof(((FNetDriverDefinition*)nullptr)->DefName) == 8);
static_assert(sizeof(((FNetDriverDefinition*)nullptr)->DriverClassName) == 8);
static_assert(sizeof(((FNetDriverDefinition*)nullptr)->DriverClassNameFallback) == 8);
static_assert(sizeof(((FNetDriverDefinition*)nullptr)->MaxChannelsOverride) == 4);
static_assert(sizeof(((FNetDriverDefinition*)nullptr)->bRunParallelConnectionTick) == 1);
static_assert(std::is_trivially_copyable_v<FNetDriverDefinition>);
