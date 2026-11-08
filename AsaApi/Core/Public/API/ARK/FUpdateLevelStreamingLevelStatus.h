#pragma once
#include "UEValueForward.h"
#include "UEObjectForward.h"
#include <cstddef>
#include <type_traits>

struct FUpdateLevelStreamingLevelStatus
{
public:
    FName PackageName;
    int LODIndex = 0;
    bool bNewShouldBeLoaded = false;
    bool bNewShouldBeVisible = false;
    bool bNewShouldBlockOnLoad = false;
    bool bNewShouldBlockOnUnload = false;
    FUpdateLevelStreamingLevelStatus() = default;
    FName& PackageNameField() { return *GetNativePointerField<FName*>(this, "FUpdateLevelStreamingLevelStatus.PackageName"); }
    int& LODIndexField() { return *GetNativePointerField<int*>(this, "FUpdateLevelStreamingLevelStatus.LODIndex"); }
    bool& bNewShouldBeLoadedField() { return *GetNativePointerField<bool*>(this, "FUpdateLevelStreamingLevelStatus.bNewShouldBeLoaded"); }
    bool& bNewShouldBeVisibleField() { return *GetNativePointerField<bool*>(this, "FUpdateLevelStreamingLevelStatus.bNewShouldBeVisible"); }
    bool& bNewShouldBlockOnLoadField() { return *GetNativePointerField<bool*>(this, "FUpdateLevelStreamingLevelStatus.bNewShouldBlockOnLoad"); }
    bool& bNewShouldBlockOnUnloadField() { return *GetNativePointerField<bool*>(this, "FUpdateLevelStreamingLevelStatus.bNewShouldBlockOnUnload"); }
};
static_assert(sizeof(FUpdateLevelStreamingLevelStatus) == 16);
static_assert(offsetof(FUpdateLevelStreamingLevelStatus, PackageName) == 0);
static_assert(offsetof(FUpdateLevelStreamingLevelStatus, LODIndex) == 8);
static_assert(offsetof(FUpdateLevelStreamingLevelStatus, bNewShouldBeLoaded) == 12);
static_assert(offsetof(FUpdateLevelStreamingLevelStatus, bNewShouldBeVisible) == 13);
static_assert(offsetof(FUpdateLevelStreamingLevelStatus, bNewShouldBlockOnLoad) == 14);
static_assert(offsetof(FUpdateLevelStreamingLevelStatus, bNewShouldBlockOnUnload) == 15);
static_assert(sizeof(((FUpdateLevelStreamingLevelStatus*)nullptr)->PackageName) == 8);
static_assert(sizeof(((FUpdateLevelStreamingLevelStatus*)nullptr)->LODIndex) == 4);
static_assert(sizeof(((FUpdateLevelStreamingLevelStatus*)nullptr)->bNewShouldBeLoaded) == 1);
static_assert(sizeof(((FUpdateLevelStreamingLevelStatus*)nullptr)->bNewShouldBeVisible) == 1);
static_assert(sizeof(((FUpdateLevelStreamingLevelStatus*)nullptr)->bNewShouldBlockOnLoad) == 1);
static_assert(sizeof(((FUpdateLevelStreamingLevelStatus*)nullptr)->bNewShouldBlockOnUnload) == 1);
static_assert(std::is_trivially_copyable_v<FUpdateLevelStreamingLevelStatus>);
