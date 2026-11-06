#pragma once
#include "UEValueForward.h"
#include "UEObjectForward.h"
#include <cstddef>
#include <type_traits>

struct FClusterNode
{
public:
    UE :: Math :: TVector < float > BoundMin;
    int FirstChild;
    UE :: Math :: TVector < float > BoundMax;
    int LastChild;
    int FirstInstance;
    int LastInstance;
    UE :: Math :: TVector < float > MinInstanceScale;
    UE :: Math :: TVector < float > MaxInstanceScale;
    FClusterNode()
		: BoundMin(MAX_flt, MAX_flt, MAX_flt)
		, FirstChild(-1)
		, BoundMax(-MAX_flt, -MAX_flt, -MAX_flt)
		, LastChild(-1)
		, FirstInstance(-1)
		, LastInstance(-1)
		, MinInstanceScale(MAX_flt)
		, MaxInstanceScale(-MAX_flt)
	{
	}
    UE::Math::TVector<float>& BoundMinField() { return *GetNativePointerField<UE::Math::TVector<float>*>(this, "FClusterNode.BoundMin"); }
    int& FirstChildField() { return *GetNativePointerField<int*>(this, "FClusterNode.FirstChild"); }
    UE::Math::TVector<float>& BoundMaxField() { return *GetNativePointerField<UE::Math::TVector<float>*>(this, "FClusterNode.BoundMax"); }
    int& LastChildField() { return *GetNativePointerField<int*>(this, "FClusterNode.LastChild"); }
    int& FirstInstanceField() { return *GetNativePointerField<int*>(this, "FClusterNode.FirstInstance"); }
    int& LastInstanceField() { return *GetNativePointerField<int*>(this, "FClusterNode.LastInstance"); }
    UE::Math::TVector<float>& MinInstanceScaleField() { return *GetNativePointerField<UE::Math::TVector<float>*>(this, "FClusterNode.MinInstanceScale"); }
    UE::Math::TVector<float>& MaxInstanceScaleField() { return *GetNativePointerField<UE::Math::TVector<float>*>(this, "FClusterNode.MaxInstanceScale"); }
};
static_assert(sizeof(FClusterNode) == 64);
static_assert(offsetof(FClusterNode, BoundMin) == 0);
static_assert(offsetof(FClusterNode, FirstChild) == 12);
static_assert(offsetof(FClusterNode, BoundMax) == 16);
static_assert(offsetof(FClusterNode, LastChild) == 28);
static_assert(offsetof(FClusterNode, FirstInstance) == 32);
static_assert(offsetof(FClusterNode, LastInstance) == 36);
static_assert(offsetof(FClusterNode, MinInstanceScale) == 40);
static_assert(offsetof(FClusterNode, MaxInstanceScale) == 52);
static_assert(sizeof(((FClusterNode*)nullptr)->BoundMin) == 12);
static_assert(sizeof(((FClusterNode*)nullptr)->FirstChild) == 4);
static_assert(sizeof(((FClusterNode*)nullptr)->BoundMax) == 12);
static_assert(sizeof(((FClusterNode*)nullptr)->LastChild) == 4);
static_assert(sizeof(((FClusterNode*)nullptr)->FirstInstance) == 4);
static_assert(sizeof(((FClusterNode*)nullptr)->LastInstance) == 4);
static_assert(sizeof(((FClusterNode*)nullptr)->MinInstanceScale) == 12);
static_assert(sizeof(((FClusterNode*)nullptr)->MaxInstanceScale) == 12);
static_assert(std::is_trivially_copyable_v<FClusterNode>);
