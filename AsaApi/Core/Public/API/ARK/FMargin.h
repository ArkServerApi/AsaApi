#pragma once
#include "UEValueForward.h"
#include "UEObjectForward.h"
#include <cstddef>
#include <type_traits>

struct FMargin
{
public:
    float Left;
    float Top;
    float Right;
    float Bottom;
    FMargin(float UniformMargin) { NativeCall<void, float>(this, "FMargin.FMargin(float)", UniformMargin); }
    FMargin(float Horizontal, float Vertical) { NativeCall<void, float, float>(this, "FMargin.FMargin(float,float)", Horizontal, Vertical); }
    FMargin(double InLeft, double InTop, double InRight, double InBottom) { NativeCall<void, double, double, double, double>(this, "FMargin.FMargin(double,double,double,double)", InLeft, InTop, InRight, InBottom); }
    FMargin( )
		: Left(0.0f)
		, Top(0.0f)
		, Right(0.0f)
		, Bottom(0.0f)
	{ }
    float& LeftField() { return *GetNativePointerField<float*>(this, "FMargin.Left"); }
    float& TopField() { return *GetNativePointerField<float*>(this, "FMargin.Top"); }
    float& RightField() { return *GetNativePointerField<float*>(this, "FMargin.Right"); }
    float& BottomField() { return *GetNativePointerField<float*>(this, "FMargin.Bottom"); }
};
static_assert(sizeof(FMargin) == 16);
static_assert(offsetof(FMargin, Left) == 0);
static_assert(offsetof(FMargin, Top) == 4);
static_assert(offsetof(FMargin, Right) == 8);
static_assert(offsetof(FMargin, Bottom) == 12);
static_assert(sizeof(((FMargin*)nullptr)->Left) == 4);
static_assert(sizeof(((FMargin*)nullptr)->Top) == 4);
static_assert(sizeof(((FMargin*)nullptr)->Right) == 4);
static_assert(sizeof(((FMargin*)nullptr)->Bottom) == 4);
static_assert(std::is_trivially_copyable_v<FMargin>);
