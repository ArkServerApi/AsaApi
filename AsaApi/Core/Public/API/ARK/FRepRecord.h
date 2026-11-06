#pragma once
#include "UEValueForward.h"
#include "UEObjectForward.h"
#include <cstddef>
#include <type_traits>

struct FRepRecord
{
public:
    FProperty * Property;
    int Index;
    FRepRecord() = delete;
    FRepRecord(FProperty* InProperty,int32 InIndex)
	: Property(InProperty), Index(InIndex)
	{}
    FProperty*& PropertyField() { return *GetNativePointerField<FProperty**>(this, "FRepRecord.Property"); }
    int& IndexField() { return *GetNativePointerField<int*>(this, "FRepRecord.Index"); }
};
static_assert(sizeof(FRepRecord) == 16);
static_assert(offsetof(FRepRecord, Property) == 0);
static_assert(offsetof(FRepRecord, Index) == 8);
static_assert(sizeof(((FRepRecord*)nullptr)->Property) == 8);
static_assert(sizeof(((FRepRecord*)nullptr)->Index) == 4);
static_assert(std::is_trivially_copyable_v<FRepRecord>);
