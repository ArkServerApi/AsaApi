#pragma once
#include "UEValueForward.h"
#include "UEObjectForward.h"
#include <cstddef>
#include <type_traits>

struct FTwoVectors
{
public:
    UE :: Math :: TVector < double > v1;
    UE :: Math :: TVector < double > v2;
    FTwoVectors() = delete;
    UE::Math::TVector<double>& v1Field() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "FTwoVectors.v1"); }
    UE::Math::TVector<double>& v2Field() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "FTwoVectors.v2"); }
};
static_assert(sizeof(FTwoVectors) == 48);
static_assert(offsetof(FTwoVectors, v1) == 0);
static_assert(offsetof(FTwoVectors, v2) == 24);
static_assert(sizeof(((FTwoVectors*)nullptr)->v1) == 24);
static_assert(sizeof(((FTwoVectors*)nullptr)->v2) == 24);
static_assert(std::is_trivially_copyable_v<FTwoVectors>);
