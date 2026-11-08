#pragma once
#include "UEValueForward.h"
#include "UEObjectForward.h"
#include <cstddef>
#include <type_traits>

struct FOutParmRec
{
public:
    FProperty * Property;
    unsigned char * PropAddr;
    FOutParmRec * NextOutParm;
    FOutParmRec() = default;
    FProperty*& PropertyField() { return *GetNativePointerField<FProperty**>(this, "FOutParmRec.Property"); }
    unsigned char*& PropAddrField() { return *GetNativePointerField<unsigned char**>(this, "FOutParmRec.PropAddr"); }
    FOutParmRec*& NextOutParmField() { return *GetNativePointerField<FOutParmRec**>(this, "FOutParmRec.NextOutParm"); }
};
static_assert(sizeof(FOutParmRec) == 24);
static_assert(offsetof(FOutParmRec, Property) == 0);
static_assert(offsetof(FOutParmRec, PropAddr) == 8);
static_assert(offsetof(FOutParmRec, NextOutParm) == 16);
static_assert(sizeof(((FOutParmRec*)nullptr)->Property) == 8);
static_assert(sizeof(((FOutParmRec*)nullptr)->PropAddr) == 8);
static_assert(sizeof(((FOutParmRec*)nullptr)->NextOutParm) == 8);
static_assert(std::is_trivially_copyable_v<FOutParmRec>);
