#pragma once
#include "UEValueForward.h"
#include "UEObjectForward.h"
#include <cstddef>
#include <type_traits>

struct FTriMeshCollisionDataEstimates
{
public:
    __int64 VerticeCount = 0;
    FTriMeshCollisionDataEstimates() = default;
    __int64& VerticeCountField() { return *GetNativePointerField<__int64*>(this, "FTriMeshCollisionDataEstimates.VerticeCount"); }
};
static_assert(sizeof(FTriMeshCollisionDataEstimates) == 8);
static_assert(offsetof(FTriMeshCollisionDataEstimates, VerticeCount) == 0);
static_assert(sizeof(((FTriMeshCollisionDataEstimates*)nullptr)->VerticeCount) == 8);
static_assert(std::is_trivially_copyable_v<FTriMeshCollisionDataEstimates>);
