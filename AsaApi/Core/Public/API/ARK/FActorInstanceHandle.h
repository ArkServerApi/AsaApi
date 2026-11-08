#if !defined(ASAAPI_ARK_HEADER_EXPANSION)
#include "Ark.h"
#else
#pragma once

#include <API/Fields.h>
#include "TWeakInterfacePtr.h"
#include <cstddef>
#include <type_traits>

struct FActorInstanceHandle
{
    enum class EResolutionStatus : unsigned char
    {
        Invalid = 0,
        Resolved = 1,
        NeedsResolving = 2
    };

    using FManagerInterface = TWeakInterfacePtr<IActorInstanceManagerInterface>;

    mutable TWeakObjectPtr<UObject> ReferenceObject;
    FManagerInterface ManagerInterface;
    int InstanceIndex = -1;
    EResolutionStatus ResolutionStatus = EResolutionStatus::Invalid;

    FActorInstanceHandle() = default;
    explicit FActorInstanceHandle(AActor* Actor)
    {
        NativeCall<void, AActor*>(this,
            "FActorInstanceHandle.FActorInstanceHandle(AActor*)", Actor);
    }
    FActorInstanceHandle(AActor* Actor, const UPrimitiveComponent* Component, int Index)
    {
        NativeCall<void, AActor*, const UPrimitiveComponent*, int>(this,
            "FActorInstanceHandle.FActorInstanceHandle(AActor*,UPrimitiveComponent*,int)",
            Actor, Component, Index);
    }
    FActorInstanceHandle(const UPrimitiveComponent* Component, int Index)
        : FActorInstanceHandle(nullptr, Component, Index) {}
    FActorInstanceHandle(FManagerInterface Manager, int Index)
    {
        NativeCall<void, FManagerInterface, int>(this,
            "FActorInstanceHandle.FActorInstanceHandle(TWeakInterfacePtr<IActorInstanceManagerInterface>,int)",
            Manager, Index);
    }
    FActorInstanceHandle(const FActorInstanceHandle& Other)
    {
        NativeCall<void, const FActorInstanceHandle&>(this,
            "FActorInstanceHandle.FActorInstanceHandle(FActorInstanceHandle&)", Other);
    }

    FActorInstanceHandle& operator=(const FActorInstanceHandle&) = default;
    FActorInstanceHandle& operator=(FActorInstanceHandle&&) = default;
    FActorInstanceHandle& operator=(AActor* Actor)
    {
        return NativeCall<FActorInstanceHandle&, AActor*>(this,
            "FActorInstanceHandle.operator=(AActor*)", Actor);
    }

    static FActorInstanceHandle MakeDehydratedActorHandle(UObject& Manager, int Index)
    {
        return NativeCall<FActorInstanceHandle, UObject&, int>(nullptr,
            "FActorInstanceHandle.MakeDehydratedActorHandle(UObject&,int)", Manager, Index);
    }
    static FActorInstanceHandle MakeActorHandleToResolve(
        const TWeakObjectPtr<UPrimitiveComponent>& Component, int Index)
    {
        return NativeCall<FActorInstanceHandle, const TWeakObjectPtr<UPrimitiveComponent>&, int>(nullptr,
            "FActorInstanceHandle.MakeActorHandleToResolve(TWeakObjectPtr<UPrimitiveComponent,FWeakObjectPtr>&,int)",
            Component, Index);
    }

    AActor* FetchActor() const
    {
        return NativeCall<AActor*>(this, "FActorInstanceHandle.FetchActor()");
    }
    template<class T> T* FetchActor() const
    {
        if constexpr (std::is_same_v<T, APawn>)
            return NativeCall<T*>(this, "FActorInstanceHandle.FetchActor<APawn>()");
        else if constexpr (std::is_same_v<T, AWaterBody>)
            return NativeCall<T*>(this, "FActorInstanceHandle.FetchActor<AWaterBody>()");
        else
        {
            static_assert(std::is_base_of_v<AActor, T>, "T must derive from AActor");
            return DoesRepresentClass(T::StaticClass()) ? static_cast<T*>(FetchActor()) : nullptr;
        }
    }
    AActor* GetManagingActor() const
    {
        return NativeCall<AActor*>(this, "FActorInstanceHandle.GetManagingActor()");
    }
    AActor* GetCachedActor() const
    {
        return NativeCall<AActor*>(this, "FActorInstanceHandle.GetCachedActor()");
    }
    void SetCachedActor(AActor* Actor) const
    {
        NativeCall<void, AActor*>(this, "FActorInstanceHandle.SetCachedActor(AActor*)", Actor);
    }
    UClass* GetRepresentedClass() const
    {
        return NativeCall<UClass*>(this, "FActorInstanceHandle.GetRepresentedClass()");
    }
    bool DoesRepresentClass(const UClass* Class) const
    {
        return NativeCall<bool, const UClass*>(this,
            "FActorInstanceHandle.DoesRepresentClass(UClass*)", Class);
    }
    FVector GetLocation() const
    {
        FVector Result;
        GetLocation(&Result);
        return Result;
    }
    FVector* GetLocation(FVector* Result) const
    {
        return NativeCall<FVector*, FVector*>(this,
            "FActorInstanceHandle.GetLocation()", Result);
    }
    bool IsValid() const
    {
        return NativeCall<bool>(this, "FActorInstanceHandle.IsValid()");
    }
    void ResolveHandle() const
    {
        NativeCall<void>(this, "FActorInstanceHandle.ResolveHandle()");
    }
    int GetInstanceIndex() const { return InstanceIndex; }
    FManagerInterface GetManagerInterface() const { return ManagerInterface; }
    explicit operator bool() const { return IsValid(); }
    bool operator==(const AActor* Actor) const
    {
        return NativeCall<bool, const AActor*>(this,
            "FActorInstanceHandle.operator==(AActor*)", Actor);
    }
    bool operator!=(const AActor* Actor) const { return !(*this == Actor); }

    TWeakObjectPtr<UObject>& ReferenceObjectField() { return ReferenceObject; }
    const TWeakObjectPtr<UObject>& ReferenceObjectField() const { return ReferenceObject; }
    FManagerInterface& ManagerInterfaceField() { return ManagerInterface; }
    const FManagerInterface& ManagerInterfaceField() const { return ManagerInterface; }
    int& InstanceIndexField() { return InstanceIndex; }
    const int& InstanceIndexField() const { return InstanceIndex; }
    EResolutionStatus& ResolutionStatusField() { return ResolutionStatus; }
    const EResolutionStatus& ResolutionStatusField() const { return ResolutionStatus; }

    friend unsigned int GetTypeHash(const FActorInstanceHandle& Handle)
    {
        return NativeCall<unsigned int, const FActorInstanceHandle&>(nullptr,
            "Global.GetTypeHash(FActorInstanceHandle&)", Handle);
    }
    friend FArchive& operator<<(FArchive& Ar, FActorInstanceHandle& Handle)
    {
        return NativeCall<FArchive&, FArchive&, FActorInstanceHandle&>(nullptr,
            "Global.operator<<(FArchive&,FActorInstanceHandle&)", Ar, Handle);
    }
};

static_assert(sizeof(FActorInstanceHandle) == 32);
static_assert(alignof(FActorInstanceHandle) == 8);
static_assert(offsetof(FActorInstanceHandle, ReferenceObject) == 0);
static_assert(offsetof(FActorInstanceHandle, ManagerInterface) == 8);
static_assert(offsetof(FActorInstanceHandle, InstanceIndex) == 24);
static_assert(offsetof(FActorInstanceHandle, ResolutionStatus) == 28);

#endif
