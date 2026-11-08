#pragma once
#include "BulkForward.h"


struct UPrimalAssets : UPrimalAssetsBase
{
	// Fields

	FStreamableManager& StreamableManagerField() { return *GetNativePointerField<FStreamableManager*>(this, "UPrimalAssets.StreamableManager"); }
	TSet<FSoftObjectPath, DefaultKeyFuncs<FSoftObjectPath, 0>, FDefaultSetAllocator>& CurrentAsyncField() { return *GetNativePointerField<TSet<FSoftObjectPath, DefaultKeyFuncs<FSoftObjectPath, 0>, FDefaultSetAllocator>*>(this, "UPrimalAssets.CurrentAsync"); }
	//TMap<UObject*, FAssetRetainer, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<UObject*, FAssetRetainer, 0> >& RetainedObjectsField() { return *GetNativePointerField<TMap<UObject*, FAssetRetainer, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<UObject*, FAssetRetainer, 0> >*>(this, "UPrimalAssets.RetainedObjects"); }

	// Bitfields

	// Functions

	static UClass* ClassAssetResolve(TSoftClassPtr<UObject>* Ptr) { return NativeCall<UClass*, TSoftClassPtr<UObject>*>(nullptr, "UPrimalAssets.ClassAssetResolve(TSoftClassPtr<UObject>)", Ptr); }

	static UClass* StaticClass() { return AsaApi::ResolveClass("UPrimalAssets"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UPrimalAssets"); }

	void RetainObject(UObject* obj) { NativeCall<void, UObject*>(this, "UPrimalAssets.RetainObject(UObject*)", obj); }
	static UObject* Static_SyncResolveReference(const FSoftObjectPath& ref) { return NativeCall<UObject*, const FSoftObjectPath&>(nullptr, "UPrimalAssets.Static_SyncResolveReference(FSoftObjectPath&)", ref); }
	bool AsyncRequestReference(const FSoftObjectPath& ref, int priority) { return NativeCall<bool, const FSoftObjectPath&, int>(this, "UPrimalAssets.AsyncRequestReference(FSoftObjectPath&,int)", ref, priority); }
	UObject* SyncResolveReference(const FSoftObjectPath& ref) { return NativeCall<UObject*, const FSoftObjectPath&>(this, "UPrimalAssets.SyncResolveReference(FSoftObjectPath&)", ref); }
	void Tick(float DeltaSeconds) { NativeCall<void, float>(this, "UPrimalAssets.Tick(float)", DeltaSeconds); }
};