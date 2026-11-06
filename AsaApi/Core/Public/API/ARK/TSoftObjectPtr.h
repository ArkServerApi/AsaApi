#pragma once


template <typename T>
struct TSoftObjectPtr
{
private:
	FSoftObjectPtr SoftObjectPtr{};

	FORCEINLINE UObject* RealGet() const
	{
		return NativeCall<UObject*, TSoftObjectPtr<T>*>(
			nullptr,
			"UPrimalAssets.AssetResolve(TSoftObjectPtr<UObject>)",
			const_cast<TSoftObjectPtr<T>*>(this));
	}

public:
	TSoftObjectPtr() = default;

	explicit TSoftObjectPtr(const FString& Path)
	{
		SoftObjectPtr.ObjectID = Path;
	}

	explicit TSoftObjectPtr(const wchar_t* Path)
		: TSoftObjectPtr(FString(Path))
	{
	}

	FORCEINLINE T* Get() const { return static_cast<T*>(RealGet()); }

	FORCEINLINE T* LoadSynchronous()
	{
		if (T* Object = Get())
			return Object;

		return static_cast<T*>(SoftObjectPtr.ObjectID.TryLoad(nullptr));
	}

	FORCEINLINE const FSoftObjectPath& ToSoftObjectPath() const
	{
		return SoftObjectPtr.ObjectID;
	}

	FORCEINLINE T* operator->() const { return Get(); }
	FORCEINLINE T& operator*() const { return *Get(); }
	FORCEINLINE operator bool() const { return Get() != nullptr; }
	FORCEINLINE operator T* () const { return Get(); }
};