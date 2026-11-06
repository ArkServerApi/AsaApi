#pragma once
#include "UEValueForward.h"
#include "UEObjectForward.h"
#include <cstddef>
#include <type_traits>

struct FObjectKey
{
public:
    int ObjectIndex;
    int ObjectSerialNumber;
    FObjectKey(const UObject* Object) { NativeCall<void, const UObject *>(this, "FObjectKey.FObjectKey(UObject*)", Object); }
    FObjectKey() : FObjectKey(static_cast<const UObject*>(nullptr)) {}
    FObjectKey(int32 Index, int32 Serial)
		: ObjectIndex(Index)
		, ObjectSerialNumber(Serial)
	{
	}
    int& ObjectIndexField() { return *GetNativePointerField<int*>(this, "FObjectKey.ObjectIndex"); }
    int& ObjectSerialNumberField() { return *GetNativePointerField<int*>(this, "FObjectKey.ObjectSerialNumber"); }
};
static_assert(sizeof(FObjectKey) == 8);
static_assert(offsetof(FObjectKey, ObjectIndex) == 0);
static_assert(offsetof(FObjectKey, ObjectSerialNumber) == 4);
static_assert(sizeof(((FObjectKey*)nullptr)->ObjectIndex) == 4);
static_assert(sizeof(((FObjectKey*)nullptr)->ObjectSerialNumber) == 4);
static_assert(std::is_trivially_copyable_v<FObjectKey>);
