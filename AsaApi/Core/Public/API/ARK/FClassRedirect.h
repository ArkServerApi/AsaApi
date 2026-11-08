#pragma once
#include "UEValueForward.h"
#include "UEObjectForward.h"
#include <cstddef>
#include <type_traits>

struct FClassRedirect
{
public:
    FName ObjectName;
    FName OldClassName;
    FName NewClassName;
    FName OldSubobjName;
    FName NewSubobjName;
    FName NewClassClass;
    FName NewClassPackage;
    bool InstanceOnly = false;
    FClassRedirect() = default;
    FName& ObjectNameField() { return *GetNativePointerField<FName*>(this, "FClassRedirect.ObjectName"); }
    FName& OldClassNameField() { return *GetNativePointerField<FName*>(this, "FClassRedirect.OldClassName"); }
    FName& NewClassNameField() { return *GetNativePointerField<FName*>(this, "FClassRedirect.NewClassName"); }
    FName& OldSubobjNameField() { return *GetNativePointerField<FName*>(this, "FClassRedirect.OldSubobjName"); }
    FName& NewSubobjNameField() { return *GetNativePointerField<FName*>(this, "FClassRedirect.NewSubobjName"); }
    FName& NewClassClassField() { return *GetNativePointerField<FName*>(this, "FClassRedirect.NewClassClass"); }
    FName& NewClassPackageField() { return *GetNativePointerField<FName*>(this, "FClassRedirect.NewClassPackage"); }
    bool& InstanceOnlyField() { return *GetNativePointerField<bool*>(this, "FClassRedirect.InstanceOnly"); }
};
static_assert(sizeof(FClassRedirect) == 60);
static_assert(offsetof(FClassRedirect, ObjectName) == 0);
static_assert(offsetof(FClassRedirect, OldClassName) == 8);
static_assert(offsetof(FClassRedirect, NewClassName) == 16);
static_assert(offsetof(FClassRedirect, OldSubobjName) == 24);
static_assert(offsetof(FClassRedirect, NewSubobjName) == 32);
static_assert(offsetof(FClassRedirect, NewClassClass) == 40);
static_assert(offsetof(FClassRedirect, NewClassPackage) == 48);
static_assert(offsetof(FClassRedirect, InstanceOnly) == 56);
static_assert(sizeof(((FClassRedirect*)nullptr)->ObjectName) == 8);
static_assert(sizeof(((FClassRedirect*)nullptr)->OldClassName) == 8);
static_assert(sizeof(((FClassRedirect*)nullptr)->NewClassName) == 8);
static_assert(sizeof(((FClassRedirect*)nullptr)->OldSubobjName) == 8);
static_assert(sizeof(((FClassRedirect*)nullptr)->NewSubobjName) == 8);
static_assert(sizeof(((FClassRedirect*)nullptr)->NewClassClass) == 8);
static_assert(sizeof(((FClassRedirect*)nullptr)->NewClassPackage) == 8);
static_assert(sizeof(((FClassRedirect*)nullptr)->InstanceOnly) == 1);
static_assert(std::is_trivially_copyable_v<FClassRedirect>);
