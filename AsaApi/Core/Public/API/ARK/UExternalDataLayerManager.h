#pragma once
#include "UEObjectForward.h"
#include "BulkForward.h"
#include "UObject.h"

class UExternalDataLayerManager : public UObject
{
public:
	UExternalDataLayerManager() = delete;
	~UExternalDataLayerManager() = delete;
	UExternalDataLayerManager(const UExternalDataLayerManager&) = delete;
	UExternalDataLayerManager& operator=(const UExternalDataLayerManager&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UExternalDataLayerManager"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UExternalDataLayerManager"); }
	bool& bIsInitializedField() { return *GetNativePointerField<bool*>(this, "UExternalDataLayerManager.bIsInitialized"); }
	bool& bIsRunningGameOrInstancedWorldPartitionField() { return *GetNativePointerField<bool*>(this, "UExternalDataLayerManager.bIsRunningGameOrInstancedWorldPartition"); }
	void Serialize(FArchive& Ar) { NativeCall<void, FArchive&>(this, "UExternalDataLayerManager.Serialize(FArchive&)", Ar); }
	void DeInitialize() { NativeCall<void>(this, "UExternalDataLayerManager.DeInitialize()"); }
	void UpdateExternalDataLayerInjectionState(const UExternalDataLayerAsset* InExternalDataLayerAsset) { NativeCall<void, const UExternalDataLayerAsset*>(this, "UExternalDataLayerManager.UpdateExternalDataLayerInjectionState(UExternalDataLayerAsset*)", InExternalDataLayerAsset); }
	FString* GetExternalStreamingObjectPackagePath(FString* result, const UExternalDataLayerAsset* InExternalDataLayerAsset) { return NativeCall<FString*, FString*, const UExternalDataLayerAsset*>(this, "UExternalDataLayerManager.GetExternalStreamingObjectPackagePath(UExternalDataLayerAsset*)", result, InExternalDataLayerAsset); }
	void Initialize() { NativeCall<void>(this, "UExternalDataLayerManager.Initialize()"); }
	bool RegisterExternalStreamingObjectForGameWorld(const UExternalDataLayerAsset* InExternalDataLayerAsset) { return NativeCall<bool, const UExternalDataLayerAsset*>(this, "UExternalDataLayerManager.RegisterExternalStreamingObjectForGameWorld(UExternalDataLayerAsset*)", InExternalDataLayerAsset); }
	bool RemoveExternalDataLayer(const UExternalDataLayerAsset* InExternalDataLayerAsset) { return NativeCall<bool, const UExternalDataLayerAsset*>(this, "UExternalDataLayerManager.RemoveExternalDataLayer(UExternalDataLayerAsset*)", InExternalDataLayerAsset); }
	bool IsExternalDataLayerInjected(const UExternalDataLayerAsset* InExternalDataLayerAsset) { return NativeCall<bool, const UExternalDataLayerAsset*>(this, "UExternalDataLayerManager.IsExternalDataLayerInjected(UExternalDataLayerAsset*)", InExternalDataLayerAsset); }
	UExternalDataLayerInstance* GetExternalDataLayerInstance(const UExternalDataLayerAsset* InExternalDataLayerAsset) { return NativeCall<UExternalDataLayerInstance*, const UExternalDataLayerAsset*>(this, "UExternalDataLayerManager.GetExternalDataLayerInstance(UExternalDataLayerAsset*)", InExternalDataLayerAsset); }
};
