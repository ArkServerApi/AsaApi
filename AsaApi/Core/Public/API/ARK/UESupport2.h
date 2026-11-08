#pragma once


template <typename T>
TWeakObjectPtr<T> GetWeakReference(T* object)
{
	FWeakObjectPtr tempWeak;
	tempWeak.operator=(object);
	TWeakObjectPtr<T> tempTWeak(tempWeak.ObjectIndex, tempWeak.ObjectSerialNumber);
	return tempTWeak;
}
template <typename T>
using TAutoWeakObjectPtr = TWeakObjectPtr<T>;