#pragma once

#include <API/Fields.h>
#include <API/ClassResolver.h>
#include "FObjectPtr.h"
#include "TWeakObjectPtr.h"
#include <cstddef>
#include <type_traits>

struct IActorInstanceManagerInterface;
template<class T> class TScriptInterface;

template<class T>
struct TWeakInterfacePtr
{
    using ElementType = T;
    using UObjectType = std::conditional_t<std::is_const_v<T>, const UObject, UObject>;

    TWeakInterfacePtr() = default;
    TWeakInterfacePtr(std::nullptr_t) {}
    TWeakInterfacePtr(const TWeakInterfacePtr&) = default;
    TWeakInterfacePtr(TWeakInterfacePtr&&) = default;
    TWeakInterfacePtr& operator=(const TWeakInterfacePtr&) = default;
    TWeakInterfacePtr& operator=(TWeakInterfacePtr&&) = default;

    TWeakInterfacePtr(UObjectType* Object)
    {
        AssignObject(Object);
    }

    TWeakInterfacePtr(T* Interface)
    {
        if (Interface)
        {
            if (auto* Object = Interface->_getUObject())
            {
                AssignWeakObject(Object);
                InterfaceInstance = Interface;
            }
        }
    }

    TWeakInterfacePtr(const TScriptInterface<T>& Interface)
    {
        AssignWeakObject(Interface.GetObject());
        InterfaceInstance = Interface.GetInterface();
    }

    void Reset()
    {
        ObjectInstance.ObjectIndex = 0;
        ObjectInstance.ObjectSerialNumber = 0;
        InterfaceInstance = nullptr;
    }

    bool IsValid() const
    {
        return InterfaceInstance && NativeCall<bool>(
            &ObjectInstance, "FWeakObjectPtr.IsValid()");
    }

    bool IsValid(bool EvenIfPendingKill, bool ThreadsafeTest = false) const
    {
        return InterfaceInstance && NativeCall<bool, bool, bool>(
            &ObjectInstance, "FWeakObjectPtr.IsValid(bool,bool)",
            EvenIfPendingKill, ThreadsafeTest);
    }

    bool IsStale(bool EvenIfPendingKill = false, bool ThreadsafeTest = false) const
    {
        return InterfaceInstance && NativeCall<bool, bool, bool>(
            &ObjectInstance, "FWeakObjectPtr.IsStale(bool,bool)",
            EvenIfPendingKill, ThreadsafeTest);
    }

    T* Get() const { return IsValid() ? InterfaceInstance : nullptr; }

    UObjectType* GetObject() const
    {
        return NativeCall<UObject*, bool>(
            &ObjectInstance, "FWeakObjectPtr.Get(bool)", false);
    }

    T& operator*() const { check(IsValid()); return *InterfaceInstance; }
    T* operator->() const { check(IsValid()); return InterfaceInstance; }

    TWeakInterfacePtr& operator=(std::nullptr_t) { Reset(); return *this; }
    TWeakInterfacePtr& operator=(UObjectType* Object)
    {
        AssignObject(Object);
        return *this;
    }
    TWeakInterfacePtr& operator=(T* Interface)
    {
        *this = TWeakInterfacePtr(Interface);
        return *this;
    }
    TWeakInterfacePtr& operator=(const TScriptInterface<T>& Interface)
    {
        *this = TWeakInterfacePtr(Interface);
        return *this;
    }

    bool operator==(const TWeakInterfacePtr& Other) const
    {
        return InterfaceInstance == Other.InterfaceInstance;
    }
    bool operator!=(const TWeakInterfacePtr& Other) const { return !(*this == Other); }
    bool operator==(std::nullptr_t) const { return !IsValid(); }
    bool operator!=(std::nullptr_t) const { return IsValid(); }

    TWeakObjectPtr<UObjectType> GetWeakObjectPtr() const
    {
        return {ObjectInstance.ObjectIndex, ObjectInstance.ObjectSerialNumber};
    }

    TScriptInterface<T> ToScriptInterface() const
    {
        auto* Object = GetObject();
        return Object ? TScriptInterface<T>(Object) : TScriptInterface<T>();
    }

private:
    static UClass* InterfaceClass()
    {
        if constexpr (std::is_same_v<std::remove_cv_t<T>, IActorInstanceManagerInterface>)
            return AsaApi::ResolveClass("UActorInstanceManagerInterface");
        else
            return T::UClassType::StaticClass();
    }

    void AssignWeakObject(UObjectType* Object)
    {
        if (!Object)
        {
            ObjectInstance.ObjectIndex = 0;
            ObjectInstance.ObjectSerialNumber = 0;
            return;
        }
        FObjectPtr Pointer(const_cast<UObject*>(Object));
        NativeCall<void, FObjectPtr*>(&ObjectInstance,
            "FWeakObjectPtr.operator=(FObjectPtr)", &Pointer);
    }

    void AssignObject(UObjectType* Object)
    {
        Reset();
        if (!Object) return;
        auto* Class = InterfaceClass();
        if (!Class) return;
        auto* Interface = static_cast<T*>(NativeCall<void*, UClass*>(Object,
            "UObjectBaseUtility.GetNativeInterfaceAddress(UClass*)", Class));
        if (!Interface) return;
        AssignWeakObject(Object);
        InterfaceInstance = Interface;
    }

    TWeakObjectPtr<UObjectType> ObjectInstance;
    T* InterfaceInstance = nullptr;
};

static_assert(sizeof(TWeakInterfacePtr<IActorInstanceManagerInterface>) == 16);
static_assert(alignof(TWeakInterfacePtr<IActorInstanceManagerInterface>) == 8);
