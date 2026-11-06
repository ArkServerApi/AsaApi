#pragma once


struct FWeakObjectPtr
{
	int ObjectIndex;
	int ObjectSerialNumber;

	void operator=(UObject const* __that) { FObjectPtr ObjectPtr(const_cast<UObject*>(__that)); NativeCall<void, FObjectPtr*>(this, "FWeakObjectPtr.operator=(FObjectPtr)", &ObjectPtr); }
	UObject* Get(bool bEvenIfPendingKill = false) { return NativeCall<UObject*, bool>(this, "FWeakObjectPtr.Get(bool)", bEvenIfPendingKill); }
	bool IsValid() { return NativeCall<bool>(this, "FWeakObjectPtr.IsValid()"); }
};