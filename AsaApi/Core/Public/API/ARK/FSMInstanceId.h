#pragma once
#include "UEValueForward.h"
#include "UEObjectForward.h"
#include <cstddef>
#include <type_traits>

struct FSMInstanceId
{
public:
    UInstancedStaticMeshComponent * ISMComponent = nullptr;
    int InstanceIndex = INDEX_NONE;
    FSMInstanceId() = default;
    UInstancedStaticMeshComponent*& ISMComponentField() { return *GetNativePointerField<UInstancedStaticMeshComponent**>(this, "FSMInstanceId.ISMComponent"); }
    int& InstanceIndexField() { return *GetNativePointerField<int*>(this, "FSMInstanceId.InstanceIndex"); }
};
static_assert(sizeof(FSMInstanceId) == 16);
static_assert(offsetof(FSMInstanceId, ISMComponent) == 0);
static_assert(offsetof(FSMInstanceId, InstanceIndex) == 8);
static_assert(sizeof(((FSMInstanceId*)nullptr)->ISMComponent) == 8);
static_assert(sizeof(((FSMInstanceId*)nullptr)->InstanceIndex) == 4);
static_assert(std::is_trivially_copyable_v<FSMInstanceId>);
