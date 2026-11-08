#pragma once
#include "BulkForward.h"
#include "GameplayForward.h"
#include "UObject.h"

struct UPrimalBuffPersistentData : UObject
{
public:
	UPrimalBuffPersistentData() = delete;
	~UPrimalBuffPersistentData() = delete;
	UPrimalBuffPersistentData(const UPrimalBuffPersistentData&) = delete;
	UPrimalBuffPersistentData& operator=(const UPrimalBuffPersistentData&) = delete;
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UPrimalBuffPersistentData"); }

	bool& bPermanentlyPersistField() { return *GetNativePointerField<bool*>(this, "UPrimalBuffPersistentData.bPermanentlyPersist"); }
	bool& bSerializeAndStopRefreshingIfDeadField() { return *GetNativePointerField<bool*>(this, "UPrimalBuffPersistentData.bSerializeAndStopRefreshingIfDead"); }
	bool& bSaveAndStopRefreshingOnDisconnectField() { return *GetNativePointerField<bool*>(this, "UPrimalBuffPersistentData.bSaveAndStopRefreshingOnDisconnect"); }

	static UClass* StaticClass() { return AsaApi::ResolveClass("UPrimalBuffPersistentData"); }

	FString& ForPrimalBuffClassStringField() { return *GetNativePointerField<FString*>(this, "UPrimalBuffPersistentData.ForPrimalBuffClassString"); }
	TArray<UObject*, TSizedDefaultAllocator<32> >* GetObjectsToSkipDuringSeralization_Implementation(TArray<UObject*, TSizedDefaultAllocator<32> >* result) { return NativeCall<TArray<UObject*, TSizedDefaultAllocator<32> >*, TArray<UObject*, TSizedDefaultAllocator<32> >*>(this, "UPrimalBuffPersistentData.GetObjectsToSkipDuringSeralization_Implementation()", result); }
	TArray<UObject*, TSizedDefaultAllocator<32> >* GetObjectsToSkipDuringSeralization(TArray<UObject*, TSizedDefaultAllocator<32> >* result) { return NativeCall<TArray<UObject*, TSizedDefaultAllocator<32> >*, TArray<UObject*, TSizedDefaultAllocator<32> >*>(this, "UPrimalBuffPersistentData.GetObjectsToSkipDuringSeralization()", result); }
};
