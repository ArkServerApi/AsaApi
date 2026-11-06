#pragma once
#include "UEValueForward.h"
#include "UEObjectForward.h"
#include <cstddef>
#include <type_traits>

struct FNetLevelVisibilityTransactionId
{
public:
    unsigned int Data;
    FNetLevelVisibilityTransactionId() = delete;
    unsigned int& DataField() { return *GetNativePointerField<unsigned int*>(this, "FNetLevelVisibilityTransactionId.Data"); }
    bool NetSerialize(FArchive& Ar, UPackageMap* PackageMap, bool& bOutSuccess) { return NativeCall<bool, FArchive&, UPackageMap*, bool&>(this, "FNetLevelVisibilityTransactionId.NetSerialize(FArchive&,UPackageMap*,bool&)", Ar, PackageMap, bOutSuccess); }
};
static_assert(sizeof(FNetLevelVisibilityTransactionId) == 4);
static_assert(offsetof(FNetLevelVisibilityTransactionId, Data) == 0);
static_assert(sizeof(((FNetLevelVisibilityTransactionId*)nullptr)->Data) == 4);
static_assert(std::is_trivially_copyable_v<FNetLevelVisibilityTransactionId>);
