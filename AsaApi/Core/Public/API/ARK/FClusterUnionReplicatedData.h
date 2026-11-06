#pragma once
#include "UEValueForward.h"
#include "UEObjectForward.h"
#include <cstddef>
#include <type_traits>

struct FClusterUnionReplicatedData
{
public:
    unsigned char ObjectState = 0;
    bool bIsAnchored = true;
    FClusterUnionReplicatedData() = default;
    unsigned char& ObjectStateField() { return *GetNativePointerField<unsigned char*>(this, "FClusterUnionReplicatedData.ObjectState"); }
    bool& bIsAnchoredField() { return *GetNativePointerField<bool*>(this, "FClusterUnionReplicatedData.bIsAnchored"); }
};
static_assert(sizeof(FClusterUnionReplicatedData) == 2);
static_assert(offsetof(FClusterUnionReplicatedData, ObjectState) == 0);
static_assert(offsetof(FClusterUnionReplicatedData, bIsAnchored) == 1);
static_assert(sizeof(((FClusterUnionReplicatedData*)nullptr)->ObjectState) == 1);
static_assert(sizeof(((FClusterUnionReplicatedData*)nullptr)->bIsAnchored) == 1);
static_assert(std::is_trivially_copyable_v<FClusterUnionReplicatedData>);
