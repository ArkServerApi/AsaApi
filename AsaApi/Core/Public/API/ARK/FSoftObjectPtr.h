#pragma once

struct FSoftObjectPtr : TPersistentObjectPtr<FSoftObjectPath>
{
    FSoftObjectPtr() : TPersistentObjectPtr<FSoftObjectPath>{} {}
    explicit FSoftObjectPtr(const FSoftObjectPath& Path) : TPersistentObjectPtr<FSoftObjectPath>{ {}, Path } {}
    explicit FSoftObjectPtr(const UObject* Object) : FSoftObjectPtr() { ObjectID.SetPath(Object); }
    UObject* Get() const { return NativeCall<UObject*>(this, "TPersistentObjectPtr<FSoftObjectPath>.Get()"); }
    UObject* LoadSynchronous(ELoadFlags Flags = ELoadFlags::LOAD_None) const { return NativeCall<UObject*, ELoadFlags>(this, "FSoftObjectPtr.LoadSynchronous(ELoadFlags)", Flags); }
    const FSoftObjectPath& ToSoftObjectPath() const { return ObjectID; }
};
