#pragma once
#include "SoftPointerSupport.h"

template<typename T>
struct TSoftClassPtr
{
private:
    FSoftObjectPtr SoftObjectPtr{};
public:
    using ElementType = T;
    TSoftClassPtr() = default;
    template<class ClassType>
    explicit TSoftClassPtr(ClassType* Class) : SoftObjectPtr(static_cast<const UObject*>(Class))
    {
        static_assert(std::is_base_of_v<UClass, ClassType>);
    }
    explicit TSoftClassPtr(const FSoftObjectPath& Path) : SoftObjectPtr(Path) {}
    explicit TSoftClassPtr(const FString& Path) { SoftObjectPtr.ObjectID = Path; }
    explicit TSoftClassPtr(const wchar_t* Path) : TSoftClassPtr(FString(Path)) {}
    UClass* Get() const { return AsaSoftClassCast<T>(SoftObjectPtr.Get()); }
    UClass* LoadSynchronous(ELoadFlags Flags = ELoadFlags::LOAD_None) const { return AsaSoftClassCast<T>(SoftObjectPtr.LoadSynchronous(Flags)); }
    const FSoftObjectPath& ToSoftObjectPath() const { return SoftObjectPtr.ToSoftObjectPath(); }
    UClass* operator->() const { return Get(); }
    UClass& operator*() const { return *Get(); }
    explicit operator bool() const { return Get() != nullptr; }
    operator UClass*() const { return Get(); }
};
