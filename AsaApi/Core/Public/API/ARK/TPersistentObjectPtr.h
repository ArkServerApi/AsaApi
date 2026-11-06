#pragma once


template <typename FSoftObjectPath>
struct TPersistentObjectPtr
{
	FWeakObjectPtr WeakPtr;
	FSoftObjectPath ObjectID;
};