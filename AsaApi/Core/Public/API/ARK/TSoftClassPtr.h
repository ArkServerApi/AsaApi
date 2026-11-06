#pragma once


template <typename T>
struct TSoftClassPtr
{
private:
	FSoftObjectPtr SoftObjectPtr;
public:
	TSoftClassPtr(UClass* InClass = nullptr)
	{
		if (InClass)
		{
			SoftObjectPtr.ObjectID = FSoftObjectPath::GetOrCreateIDForObject(InClass);
			SoftObjectPtr.WeakPtr = GetWeakReference(InClass);
		}
	}

	TSoftClassPtr(const FString& Path)
	{
		TSubclassOf<UObject> result;
		NativeCall<TSubclassOf<UObject>*, TSubclassOf<UObject>*, const FString*>(nullptr, "UVictoryCore.StringReferenceToClass(FString&)", &result, &Path);

		SoftObjectPtr.ObjectID = FSoftObjectPath::GetOrCreateIDForObject(result.uClass);
		SoftObjectPtr.WeakPtr = GetWeakReference(result.uClass);
	}

	FORCEINLINE UClass* Get() { return NativeCall<UClass*, TSoftClassPtr<T>*>(nullptr, "UPrimalAssets.ClassAssetResolve(TSoftClassPtr<UObject>)", this); }
	FORCEINLINE UClass* operator->() const { return Get(); }
	FORCEINLINE UClass& operator*() const { return *Get(); }
	FORCEINLINE operator bool() const { return Get() != nullptr; }
	FORCEINLINE operator UClass* () const { return Get(); }
};