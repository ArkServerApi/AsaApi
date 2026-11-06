#pragma once
#include <type_traits>

template<class T, class ObjectType>
T* AsaSoftObjectCast(ObjectType* Object)
{
    if (!Object) return nullptr;
    if constexpr (std::is_same_v<T, ObjectType>) return Object;
    else return Object->ClassField()->IsChildOf(T::StaticClass()) ? static_cast<T*>(Object) : nullptr;
}

template<class T, class ClassType = UClass, class ObjectType>
ClassType* AsaSoftClassCast(ObjectType* Object)
{
    ClassType* Class = AsaSoftObjectCast<ClassType>(Object);
    return Class && Class->IsChildOf(T::StaticClass()) ? Class : nullptr;
}
