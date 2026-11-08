#pragma once

template<typename TObjectID>
struct TPersistentObjectPtr
{
    mutable FWeakObjectPtr WeakPtr;
    TObjectID ObjectID;
};
