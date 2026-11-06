#pragma once
#include "UEValueForward.h"
#include "UEObjectForward.h"
#include <cstddef>
#include <type_traits>

struct FInstancedStaticMeshRandomSeed
{
public:
    int StartInstanceIndex = 0;
    int RandomSeed = 0;
    FInstancedStaticMeshRandomSeed() = default;
    int& StartInstanceIndexField() { return *GetNativePointerField<int*>(this, "FInstancedStaticMeshRandomSeed.StartInstanceIndex"); }
    int& RandomSeedField() { return *GetNativePointerField<int*>(this, "FInstancedStaticMeshRandomSeed.RandomSeed"); }
};
static_assert(sizeof(FInstancedStaticMeshRandomSeed) == 8);
static_assert(offsetof(FInstancedStaticMeshRandomSeed, StartInstanceIndex) == 0);
static_assert(offsetof(FInstancedStaticMeshRandomSeed, RandomSeed) == 4);
static_assert(sizeof(((FInstancedStaticMeshRandomSeed*)nullptr)->StartInstanceIndex) == 4);
static_assert(sizeof(((FInstancedStaticMeshRandomSeed*)nullptr)->RandomSeed) == 4);
static_assert(std::is_trivially_copyable_v<FInstancedStaticMeshRandomSeed>);
