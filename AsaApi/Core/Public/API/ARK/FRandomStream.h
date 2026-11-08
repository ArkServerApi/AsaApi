#pragma once
#include "UEValueForward.h"
#include "UEObjectForward.h"
#include <cstddef>
#include <type_traits>

struct FRandomStream
{
public:
    int InitialSeed;
    mutable unsigned int Seed;
    FRandomStream()
		: InitialSeed(0)
		, Seed(0)
	{ }
    int& InitialSeedField() { return *GetNativePointerField<int*>(this, "FRandomStream.InitialSeed"); }
    unsigned int& SeedField() { return *GetNativePointerField<unsigned int*>(this, "FRandomStream.Seed"); }
    UE::Math::TVector<double>* GetUnitVector(UE::Math::TVector<double>* result) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*>(this, "FRandomStream.GetUnitVector()", result); }
    void Initialize(FName InName) { NativeCall<void, FName>(this, "FRandomStream.Initialize(FName)", InName); }
    UE::Math::TVector<double>* VRandCone(UE::Math::TVector<double>* result, const UE::Math::TVector<double>& Dir, float HorizontalConeHalfAngleRad, float VerticalConeHalfAngleRad) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*, const UE::Math::TVector<double>&, float, float>(this, "FRandomStream.VRandCone(UE::Math::TVector<double>&,float,float)", result, Dir, HorizontalConeHalfAngleRad, VerticalConeHalfAngleRad); }
    UE::Math::TVector<double>* VRandCone(UE::Math::TVector<double>* result, const UE::Math::TVector<double>& Dir, float ConeHalfAngleRad) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*, const UE::Math::TVector<double>&, float>(this, "FRandomStream.VRandCone(UE::Math::TVector<double>&,float)", result, Dir, ConeHalfAngleRad); }
};
static_assert(sizeof(FRandomStream) == 8);
static_assert(offsetof(FRandomStream, InitialSeed) == 0);
static_assert(offsetof(FRandomStream, Seed) == 4);
static_assert(sizeof(((FRandomStream*)nullptr)->InitialSeed) == 4);
static_assert(sizeof(((FRandomStream*)nullptr)->Seed) == 4);
static_assert(std::is_trivially_copyable_v<FRandomStream>);
