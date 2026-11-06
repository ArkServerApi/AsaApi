#pragma once
#include <API/Fields.h>
#include <type_traits>

struct UWorld;

class UWorldProxy
{
public:
    UWorldProxy() : World(nullptr) {}
    UWorld* operator->() { return GetReference(); }
    const UWorld* operator->() const { return static_cast<UWorld*>(*this); }
    UWorld& operator*() { return *GetReference(); }
    const UWorld& operator*() const { return *static_cast<UWorld*>(*this); }
    UWorldProxy& operator=(UWorld* InWorld) { WorldField() = InWorld; return *this; }
    UWorldProxy& operator=(const UWorldProxy& Other) { WorldField() = Other.WorldField(); return *this; }
    bool operator==(const UWorldProxy& Other) const { return WorldField() == Other.WorldField(); }
    operator UWorld*() const
    {
        checkSlow(NativeCall<bool>(nullptr, "Global.IsInGameThread()"));
        return WorldField();
    }
    UWorld* GetReference()
    {
        checkSlow(NativeCall<bool>(nullptr, "Global.IsInGameThread()"));
        return WorldField();
    }
    UWorld*& WorldField() { return *GetNativePointerField<UWorld**>(this, "UWorldProxy.World"); }
    UWorld* const& WorldField() const { return *GetNativePointerField<UWorld* const*>(this, "UWorldProxy.World"); }
private:
    UWorld* World;
};
static_assert(sizeof(UWorldProxy) == 8);
static_assert(alignof(UWorldProxy) == 8);
static_assert(std::is_standard_layout_v<UWorldProxy>);
