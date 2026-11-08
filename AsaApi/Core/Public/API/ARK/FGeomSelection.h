#pragma once
#include "UEValueForward.h"
#include "UEObjectForward.h"
#include <cstddef>
#include <type_traits>

struct FGeomSelection
{
public:
    int Type;
    int Index;
    int SelectionIndex;
    FGeomSelection()
		: Type(0)
		, Index(0)
		, SelectionIndex(0)
	{ }
    int& TypeField() { return *GetNativePointerField<int*>(this, "FGeomSelection.Type"); }
    int& IndexField() { return *GetNativePointerField<int*>(this, "FGeomSelection.Index"); }
    int& SelectionIndexField() { return *GetNativePointerField<int*>(this, "FGeomSelection.SelectionIndex"); }
};
static_assert(sizeof(FGeomSelection) == 12);
static_assert(offsetof(FGeomSelection, Type) == 0);
static_assert(offsetof(FGeomSelection, Index) == 4);
static_assert(offsetof(FGeomSelection, SelectionIndex) == 8);
static_assert(sizeof(((FGeomSelection*)nullptr)->Type) == 4);
static_assert(sizeof(((FGeomSelection*)nullptr)->Index) == 4);
static_assert(sizeof(((FGeomSelection*)nullptr)->SelectionIndex) == 4);
static_assert(std::is_trivially_copyable_v<FGeomSelection>);
