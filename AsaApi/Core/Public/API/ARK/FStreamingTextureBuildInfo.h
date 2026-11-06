#pragma once
#include "UEValueForward.h"
#include "UEObjectForward.h"
#include <cstddef>
#include <type_traits>

struct FStreamingTextureBuildInfo
{
public:
    unsigned int PackedRelativeBox;
    int TextureLevelIndex;
    float TexelFactor;
    FStreamingTextureBuildInfo() : 
		PackedRelativeBox(0), 
		TextureLevelIndex(0), 
		TexelFactor(0) 
	{
	}
    unsigned int& PackedRelativeBoxField() { return *GetNativePointerField<unsigned int*>(this, "FStreamingTextureBuildInfo.PackedRelativeBox"); }
    int& TextureLevelIndexField() { return *GetNativePointerField<int*>(this, "FStreamingTextureBuildInfo.TextureLevelIndex"); }
    float& TexelFactorField() { return *GetNativePointerField<float*>(this, "FStreamingTextureBuildInfo.TexelFactor"); }
};
static_assert(sizeof(FStreamingTextureBuildInfo) == 12);
static_assert(offsetof(FStreamingTextureBuildInfo, PackedRelativeBox) == 0);
static_assert(offsetof(FStreamingTextureBuildInfo, TextureLevelIndex) == 4);
static_assert(offsetof(FStreamingTextureBuildInfo, TexelFactor) == 8);
static_assert(sizeof(((FStreamingTextureBuildInfo*)nullptr)->PackedRelativeBox) == 4);
static_assert(sizeof(((FStreamingTextureBuildInfo*)nullptr)->TextureLevelIndex) == 4);
static_assert(sizeof(((FStreamingTextureBuildInfo*)nullptr)->TexelFactor) == 4);
static_assert(std::is_trivially_copyable_v<FStreamingTextureBuildInfo>);
