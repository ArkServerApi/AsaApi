#pragma once
#include "UEObjectForward.h"
#include "BulkForward.h"
#include "UObject.h"

class UWorldPartitionRuntimeHash : public UObject
{
public:
	UWorldPartitionRuntimeHash() = delete;
	~UWorldPartitionRuntimeHash() = delete;
	UWorldPartitionRuntimeHash(const UWorldPartitionRuntimeHash&) = delete;
	UWorldPartitionRuntimeHash& operator=(const UWorldPartitionRuntimeHash&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UWorldPartitionRuntimeHash"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UWorldPartitionRuntimeHash"); }
	bool& bQueryNonSpatialCellsField() { return *GetNativePointerField<bool*>(this, "UWorldPartitionRuntimeHash.bQueryNonSpatialCells"); }
	bool UnregisterWorldAssetStreaming(const FGuid& InWorldAssetStreamingGuid) { return NativeCall<bool, const FGuid&>(this, "UWorldPartitionRuntimeHash.UnregisterWorldAssetStreaming(FGuid&)", InWorldAssetStreamingGuid); }
	unsigned int ComputeUpdateStreamingHash() { return NativeCall<unsigned int>(this, "UWorldPartitionRuntimeHash.ComputeUpdateStreamingHash()"); }
	bool Draw2D(FWorldPartitionDraw2DContext& DrawContext) { return NativeCall<bool, FWorldPartitionDraw2DContext&>(this, "UWorldPartitionRuntimeHash.Draw2D(FWorldPartitionDraw2DContext&)", DrawContext); }
	const FGuid* GetCustomHLODActorSourceCellOverride(const FGuid& InActorGuid) { return NativeCall<const FGuid*, const FGuid&>(this, "UWorldPartitionRuntimeHash.GetCustomHLODActorSourceCellOverride(FGuid&)", InActorGuid); }
	const FGuid* GetStandaloneHLODActorSourceCellOverride(const FGuid& InActorGuid) { return NativeCall<const FGuid*, const FGuid&>(this, "UWorldPartitionRuntimeHash.GetStandaloneHLODActorSourceCellOverride(FGuid&)", InActorGuid); }
	bool IsStreaming3D() { return NativeCall<bool>(this, "UWorldPartitionRuntimeHash.IsStreaming3D()"); }
	bool IsExternalStreamingObjectInjected(URuntimeHashExternalStreamingObjectBase* InExternalStreamingObject) { return NativeCall<bool, URuntimeHashExternalStreamingObjectBase*>(this, "UWorldPartitionRuntimeHash.IsExternalStreamingObjectInjected(URuntimeHashExternalStreamingObjectBase*)", InExternalStreamingObject); }
	bool GetShouldMergeStreamingSourceInfo() { return NativeCall<bool>(this, "UWorldPartitionRuntimeHash.GetShouldMergeStreamingSourceInfo()"); }
	bool InjectExternalStreamingObject(URuntimeHashExternalStreamingObjectBase* InExternalStreamingObject) { return NativeCall<bool, URuntimeHashExternalStreamingObjectBase*>(this, "UWorldPartitionRuntimeHash.InjectExternalStreamingObject(URuntimeHashExternalStreamingObjectBase*)", InExternalStreamingObject); }
	bool RemoveExternalStreamingObject(URuntimeHashExternalStreamingObjectBase* InExternalStreamingObject) { return NativeCall<bool, URuntimeHashExternalStreamingObjectBase*>(this, "UWorldPartitionRuntimeHash.RemoveExternalStreamingObject(URuntimeHashExternalStreamingObjectBase*)", InExternalStreamingObject); }
	void OnBeginPlay() { NativeCall<void>(this, "UWorldPartitionRuntimeHash.OnBeginPlay()"); }
	bool SupportsWorldAssetStreaming(const FName& InTargetGrid) { return NativeCall<bool, const FName&>(this, "UWorldPartitionRuntimeHash.SupportsWorldAssetStreaming(FName&)", InTargetGrid); }
	bool IsCellRelevantFor(bool bClientOnlyVisible) { return NativeCall<bool, bool>(this, "UWorldPartitionRuntimeHash.IsCellRelevantFor(bool)", bClientOnlyVisible); }
	bool ContainsRuntimeHash(const FString& Name) { return NativeCall<bool, const FString&>(this, "UWorldPartitionRuntimeHash.ContainsRuntimeHash(FString&)", Name); }
	UWorldPartitionRuntimeCell* CreateRuntimeCell(UClass* CellClass, UClass* CellDataClass, const FString& CellName, const FString& CellInstanceSuffix, UObject* InOuter) { return NativeCall<UWorldPartitionRuntimeCell*, UClass*, UClass*, const FString&, const FString&, UObject*>(this, "UWorldPartitionRuntimeHash.CreateRuntimeCell(UClass*,UClass*,FString&,FString&,UObject*)", CellClass, CellDataClass, CellName, CellInstanceSuffix, InOuter); }
};
