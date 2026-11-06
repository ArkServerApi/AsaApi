#pragma once
#include "SoftPointerSupport.h"

template<typename T>
struct TSoftObjectPtr
{
private:
    FSoftObjectPtr SoftObjectPtr{};
public:
    using ElementType = T;
    TSoftObjectPtr() = default;
    explicit TSoftObjectPtr(T* Object) : SoftObjectPtr(static_cast<const UObject*>(Object)) {}
    explicit TSoftObjectPtr(const FSoftObjectPath& Path) : SoftObjectPtr(Path) {}
    explicit TSoftObjectPtr(const FString& Path) { SoftObjectPtr.ObjectID = Path; }
    explicit TSoftObjectPtr(const wchar_t* Path) : TSoftObjectPtr(FString(Path)) {}
    T* Get() const { return AsaSoftObjectCast<T>(SoftObjectPtr.Get()); }
    T* LoadSynchronous(ELoadFlags Flags = ELoadFlags::LOAD_None) const { return AsaSoftObjectCast<T>(SoftObjectPtr.LoadSynchronous(Flags)); }
    const FSoftObjectPath& ToSoftObjectPath() const { return SoftObjectPtr.ToSoftObjectPath(); }
    T* operator->() const { return Get(); }
    T& operator*() const { return *Get(); }
    explicit operator bool() const { return Get() != nullptr; }
    operator T*() const { return Get(); }
};
