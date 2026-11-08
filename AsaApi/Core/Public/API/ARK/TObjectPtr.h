#pragma once


template <typename T>
struct TObjectPtr
{
private:
	FObjectHandlePrivate Handle;
	FORCEINLINE UObject* RealGet() const { return reinterpret_cast<UObject*>(Handle.PointerOrRef); }
public:

	FORCEINLINE T* Get() const { return (T*)(RealGet()); }
	FORCEINLINE T* operator->() const { return Get(); }
	FORCEINLINE T& operator*() const { return *Get(); }
	FORCEINLINE operator bool() const { return Get() != nullptr; }
	FORCEINLINE operator T* () const { return Get(); }
};