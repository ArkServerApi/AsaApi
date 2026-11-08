#pragma once


template <typename T, typename K = FWeakObjectPtr>
struct TWeakObjectPtr
{
	int ObjectIndex = 0;
	int ObjectSerialNumber = 0;

	FORCEINLINE T& operator*()
	{
		return *Get();
	}

	FORCEINLINE T* operator->()
	{
		return Get();
	}

	T* Get(bool bEvenIfPendingKill = false)
	{
		return NativeCall<T*, bool>(this, "FWeakObjectPtr.Get(bool)", bEvenIfPendingKill);
	}

	FORCEINLINE operator bool()
	{
		return Get() != nullptr;
	}

	FORCEINLINE operator T* ()
	{
		return Get();
	}

	FORCEINLINE bool operator==(const TWeakObjectPtr<T>& __that) const
	{
		return this->ObjectIndex == __that.ObjectIndex
			&& this->ObjectSerialNumber == __that.ObjectSerialNumber;
	}

	TWeakObjectPtr()
	{
	}

	TWeakObjectPtr(int index, int serialnumber)
		:ObjectIndex(index),
		ObjectSerialNumber(serialnumber)
	{
	}
};