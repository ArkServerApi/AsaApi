#pragma once
#include "UEValueForward.h"
#include "UEObjectForward.h"
#include <cstddef>
#include <type_traits>

struct FNavLocation
{
public:
    using NavNodeRef = unsigned __int64;
    UE :: Math :: TVector < double > Location;
    unsigned __int64 NodeRef;
    FNavLocation() : Location(FVector::ZeroVector), NodeRef(NavNodeRef(0)) {}
    explicit FNavLocation(const FVector& InLocation, NavNodeRef InNodeRef = NavNodeRef(0)) 
		: Location(InLocation), NodeRef(InNodeRef) {}
    UE::Math::TVector<double>& LocationField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "FNavLocation.Location"); }
    unsigned __int64& NodeRefField() { return *GetNativePointerField<unsigned __int64*>(this, "FNavLocation.NodeRef"); }
};
static_assert(sizeof(FNavLocation) == 32);
static_assert(offsetof(FNavLocation, Location) == 0);
static_assert(offsetof(FNavLocation, NodeRef) == 24);
static_assert(sizeof(((FNavLocation*)nullptr)->Location) == 24);
static_assert(sizeof(((FNavLocation*)nullptr)->NodeRef) == 8);
static_assert(std::is_trivially_copyable_v<FNavLocation>);
