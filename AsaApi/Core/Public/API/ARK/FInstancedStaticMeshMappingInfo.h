#pragma once
#include "UEValueForward.h"
#include "UEObjectForward.h"
#include <cstddef>
#include <type_traits>

struct FInstancedStaticMeshMappingInfo
{
public:
    FStaticLightingTextureMapping_InstancedStaticMesh * Mapping;
    FInstancedStaticMeshMappingInfo()
		: Mapping(nullptr)
	{
	}
    FStaticLightingTextureMapping_InstancedStaticMesh*& MappingField() { return *GetNativePointerField<FStaticLightingTextureMapping_InstancedStaticMesh**>(this, "FInstancedStaticMeshMappingInfo.Mapping"); }
};
static_assert(sizeof(FInstancedStaticMeshMappingInfo) == 8);
static_assert(offsetof(FInstancedStaticMeshMappingInfo, Mapping) == 0);
static_assert(sizeof(((FInstancedStaticMeshMappingInfo*)nullptr)->Mapping) == 8);
static_assert(std::is_trivially_copyable_v<FInstancedStaticMeshMappingInfo>);
