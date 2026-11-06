#pragma once
#include "UEObjectForward.h"
#include "BulkForward.h"
#include "UObject.h"

class UWorldPartitionRuntimeCellData : public UObject
{
public:
	UWorldPartitionRuntimeCellData() = delete;
	~UWorldPartitionRuntimeCellData() = delete;
	UWorldPartitionRuntimeCellData(const UWorldPartitionRuntimeCellData&) = delete;
	UWorldPartitionRuntimeCellData& operator=(const UWorldPartitionRuntimeCellData&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UWorldPartitionRuntimeCellData"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UWorldPartitionRuntimeCellData"); }
	unsigned char& CachedMinSourcePriorityField() { return *GetNativePointerField<unsigned char*>(this, "UWorldPartitionRuntimeCellData.CachedMinSourcePriority"); }
	bool& bCachedWasRequestedByBlockingSourceField() { return *GetNativePointerField<bool*>(this, "UWorldPartitionRuntimeCellData.bCachedWasRequestedByBlockingSource"); }
	double& CachedMinSquareDistanceToBlockingSourceField() { return *GetNativePointerField<double*>(this, "UWorldPartitionRuntimeCellData.CachedMinSquareDistanceToBlockingSource"); }
	float& CachedMinBlockOnSlowStreamingRatioField() { return *GetNativePointerField<float*>(this, "UWorldPartitionRuntimeCellData.CachedMinBlockOnSlowStreamingRatio"); }
	double& CachedMinSquareDistanceToSourceField() { return *GetNativePointerField<double*>(this, "UWorldPartitionRuntimeCellData.CachedMinSquareDistanceToSource"); }
	float& CachedMinSlowStreamingRatioField() { return *GetNativePointerField<float*>(this, "UWorldPartitionRuntimeCellData.CachedMinSlowStreamingRatio"); }
	double& CachedMinSpatialSortingPriorityField() { return *GetNativePointerField<double*>(this, "UWorldPartitionRuntimeCellData.CachedMinSpatialSortingPriority"); }
	int& CachedSourceInfoEpochField() { return *GetNativePointerField<int*>(this, "UWorldPartitionRuntimeCellData.CachedSourceInfoEpoch"); }
	FName& GridNameField() { return *GetNativePointerField<FName*>(this, "UWorldPartitionRuntimeCellData.GridName"); }
	int& PriorityField() { return *GetNativePointerField<int*>(this, "UWorldPartitionRuntimeCellData.Priority"); }
	int& HierarchicalLevelField() { return *GetNativePointerField<int*>(this, "UWorldPartitionRuntimeCellData.HierarchicalLevel"); }
	FString& Primal_HumanReadableNameField() { return *GetNativePointerField<FString*>(this, "UWorldPartitionRuntimeCellData.Primal_HumanReadableName"); }
	void AppendStreamingSourceInfo(const FWorldPartitionStreamingSource& Source, const FSphericalSector& SourceShape, const FWorldPartitionStreamingContext& Context, bool bBlockOnSlowLoading) { NativeCall<void, const FWorldPartitionStreamingSource&, const FSphericalSector&, const FWorldPartitionStreamingContext&, bool>(this, "UWorldPartitionRuntimeCellData.AppendStreamingSourceInfo(FWorldPartitionStreamingSource&,FSphericalSector&,FWorldPartitionStreamingContext&,bool)", Source, SourceShape, Context, bBlockOnSlowLoading); }
	void MergeStreamingSourceInfo() { NativeCall<void>(this, "UWorldPartitionRuntimeCellData.MergeStreamingSourceInfo()"); }
	void ResetStreamingSourceInfo(const FWorldPartitionStreamingContext& Context) { NativeCall<void, const FWorldPartitionStreamingContext&>(this, "UWorldPartitionRuntimeCellData.ResetStreamingSourceInfo(FWorldPartitionStreamingContext&)", Context); }
	bool IsDebugShown() { return NativeCall<bool>(this, "UWorldPartitionRuntimeCellData.IsDebugShown()"); }
	int SortCompare(const UWorldPartitionRuntimeCellData* InOther) { return NativeCall<int, const UWorldPartitionRuntimeCellData*>(this, "UWorldPartitionRuntimeCellData.SortCompare(UWorldPartitionRuntimeCellData*)", InOther); }
	FString* Primal_GetHumanReadableName(FString* result) { return NativeCall<FString*, FString*>(this, "UWorldPartitionRuntimeCellData.Primal_GetHumanReadableName()", result); }
	void Serialize(FArchive& Ar) { NativeCall<void, FArchive&>(this, "UWorldPartitionRuntimeCellData.Serialize(FArchive&)", Ar); }
};
