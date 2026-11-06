#pragma once
#include "UEValueForward.h"
#include "UEObjectForward.h"
#include <cstddef>
#include <type_traits>

struct FVirtualTextureBuildSettings
{
public:
    int TileSize = 0;
    int TileBorderSize = 0;
    FVirtualTextureBuildSettings() = default;
    int& TileSizeField() { return *GetNativePointerField<int*>(this, "FVirtualTextureBuildSettings.TileSize"); }
    int& TileBorderSizeField() { return *GetNativePointerField<int*>(this, "FVirtualTextureBuildSettings.TileBorderSize"); }
    void Init() { NativeCall<void>(this, "FVirtualTextureBuildSettings.Init()"); }
    static int ClampAndAlignTileBorderSize(int InTileBorderSize) { return NativeCall<int, int>(nullptr, "FVirtualTextureBuildSettings.ClampAndAlignTileBorderSize(int)", InTileBorderSize); }
    static int ClampAndAlignTileSize(int InTileSize) { return NativeCall<int, int>(nullptr, "FVirtualTextureBuildSettings.ClampAndAlignTileSize(int)", InTileSize); }
};
static_assert(sizeof(FVirtualTextureBuildSettings) == 8);
static_assert(offsetof(FVirtualTextureBuildSettings, TileSize) == 0);
static_assert(offsetof(FVirtualTextureBuildSettings, TileBorderSize) == 4);
static_assert(sizeof(((FVirtualTextureBuildSettings*)nullptr)->TileSize) == 4);
static_assert(sizeof(((FVirtualTextureBuildSettings*)nullptr)->TileBorderSize) == 4);
static_assert(std::is_trivially_copyable_v<FVirtualTextureBuildSettings>);
