#pragma once
#include "UEValueForward.h"
#include "UEObjectForward.h"
#include <cstddef>
#include <type_traits>

class FSlateRect
{
public:
    float Left;
    float Top;
    float Right;
    float Bottom;
    explicit FSlateRect( float InLeft = -1, float InTop = -1, float InRight = -1, float InBottom = -1 ) { NativeCall<void, float, float, float, float>(this, "FSlateRect.FSlateRect(float,float,float,float)", InLeft, InTop, InRight, InBottom); }
    float& LeftField() { return *GetNativePointerField<float*>(this, "FSlateRect.Left"); }
    float& TopField() { return *GetNativePointerField<float*>(this, "FSlateRect.Top"); }
    float& RightField() { return *GetNativePointerField<float*>(this, "FSlateRect.Right"); }
    float& BottomField() { return *GetNativePointerField<float*>(this, "FSlateRect.Bottom"); }
};
static_assert(sizeof(FSlateRect) == 16);
static_assert(offsetof(FSlateRect, Left) == 0);
static_assert(offsetof(FSlateRect, Top) == 4);
static_assert(offsetof(FSlateRect, Right) == 8);
static_assert(offsetof(FSlateRect, Bottom) == 12);
static_assert(sizeof(((FSlateRect*)nullptr)->Left) == 4);
static_assert(sizeof(((FSlateRect*)nullptr)->Top) == 4);
static_assert(sizeof(((FSlateRect*)nullptr)->Right) == 4);
static_assert(sizeof(((FSlateRect*)nullptr)->Bottom) == 4);
static_assert(std::is_trivially_copyable_v<FSlateRect>);
