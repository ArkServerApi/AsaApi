#pragma once
#include "UEObjectForward.h"
#include "BulkForward.h"
#include "UObject.h"

class UWorldPartitionStreamingPolicy : public UObject
{
public:
	UWorldPartitionStreamingPolicy() = delete;
	~UWorldPartitionStreamingPolicy() = delete;
	UWorldPartitionStreamingPolicy(const UWorldPartitionStreamingPolicy&) = delete;
	UWorldPartitionStreamingPolicy& operator=(const UWorldPartitionStreamingPolicy&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UWorldPartitionStreamingPolicy"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UWorldPartitionStreamingPolicy"); }
	const UWorldPartition*& WorldPartitionField() { return *GetNativePointerField<const UWorldPartition**>(this, "UWorldPartitionStreamingPolicy.WorldPartition"); }
	bool& bShouldMergeStreamingSourceInfoField() { return *GetNativePointerField<bool*>(this, "UWorldPartitionStreamingPolicy.bShouldMergeStreamingSourceInfo"); }
	const FWorldPartitionUpdateStreamingCurrentState& CurrentStateField() { return *GetNativePointerField<const FWorldPartitionUpdateStreamingCurrentState*>(this, "UWorldPartitionStreamingPolicy.CurrentState"); }
	bool& bCurrentBlockOnSlowStreamingField() { return *GetNativePointerField<bool*>(this, "UWorldPartitionStreamingPolicy.bCurrentBlockOnSlowStreaming"); }
	FWorldPartitionUpdateStreamingTargetState& TargetStateField() { return *GetNativePointerField<FWorldPartitionUpdateStreamingTargetState*>(this, "UWorldPartitionStreamingPolicy.TargetState"); }
	FWorldPartitionUpdateStreamingCurrentState& AsyncTaskCurrentStateField() { return *GetNativePointerField<FWorldPartitionUpdateStreamingCurrentState*>(this, "UWorldPartitionStreamingPolicy.AsyncTaskCurrentState"); }
	FWorldPartitionUpdateStreamingTargetState& AsyncTaskTargetStateField() { return *GetNativePointerField<FWorldPartitionUpdateStreamingTargetState*>(this, "UWorldPartitionStreamingPolicy.AsyncTaskTargetState"); }
	bool& bCriticalPerformanceRequestedBlockTillOnWorldField() { return *GetNativePointerField<bool*>(this, "UWorldPartitionStreamingPolicy.bCriticalPerformanceRequestedBlockTillOnWorld"); }
	int& CriticalPerformanceBlockTillLevelStreamingCompletedEpochField() { return *GetNativePointerField<int*>(this, "UWorldPartitionStreamingPolicy.CriticalPerformanceBlockTillLevelStreamingCompletedEpoch"); }
	int& ProcessedToLoadCellsField() { return *GetNativePointerField<int*>(this, "UWorldPartitionStreamingPolicy.ProcessedToLoadCells"); }
	int& ProcessedToActivateCellsField() { return *GetNativePointerField<int*>(this, "UWorldPartitionStreamingPolicy.ProcessedToActivateCells"); }
	int& ServerStreamingStateEpochField() { return *GetNativePointerField<int*>(this, "UWorldPartitionStreamingPolicy.ServerStreamingStateEpoch"); }
	int& ServerStreamingEnabledEpochField() { return *GetNativePointerField<int*>(this, "UWorldPartitionStreamingPolicy.ServerStreamingEnabledEpoch"); }
	unsigned int& UpdateStreamingHashField() { return *GetNativePointerField<unsigned int*>(this, "UWorldPartitionStreamingPolicy.UpdateStreamingHash"); }
	unsigned int& UpdateStreamingSourcesHashField() { return *GetNativePointerField<unsigned int*>(this, "UWorldPartitionStreamingPolicy.UpdateStreamingSourcesHash"); }
	unsigned int& UpdateStreamingStateCounterField() { return *GetNativePointerField<unsigned int*>(this, "UWorldPartitionStreamingPolicy.UpdateStreamingStateCounter"); }
	int& AsyncShouldSkipUpdateCounterField() { return *GetNativePointerField<int*>(this, "UWorldPartitionStreamingPolicy.AsyncShouldSkipUpdateCounter"); }
	void UpdateStreamingSources(bool bCanOptimizeUpdate) { NativeCall<void, bool>(this, "UWorldPartitionStreamingPolicy.UpdateStreamingSources(bool)", bCanOptimizeUpdate); }
	bool ConvertEditorPathToRuntimePath(const FSoftObjectPath& InPath, FSoftObjectPath& OutPath) { return NativeCall<bool, const FSoftObjectPath&, FSoftObjectPath&>(this, "UWorldPartitionStreamingPolicy.ConvertEditorPathToRuntimePath(FSoftObjectPath&,FSoftObjectPath&)", InPath, OutPath); }
	void UpdateStreamingState() { NativeCall<void>(this, "UWorldPartitionStreamingPolicy.UpdateStreamingState()"); }
	bool RemoveExternalStreamingObject(URuntimeHashExternalStreamingObjectBase* ExternalStreamingObject) { return NativeCall<bool, URuntimeHashExternalStreamingObjectBase*>(this, "UWorldPartitionStreamingPolicy.RemoveExternalStreamingObject(URuntimeHashExternalStreamingObjectBase*)", ExternalStreamingObject); }
	unsigned int ComputeUpdateStreamingHash(bool bCanOptimizeUpdate) { return NativeCall<unsigned int, bool>(this, "UWorldPartitionStreamingPolicy.ComputeUpdateStreamingHash(bool)", bCanOptimizeUpdate); }
	void OnCellShown(const UWorldPartitionRuntimeCell* InCell) { NativeCall<void, const UWorldPartitionRuntimeCell*>(this, "UWorldPartitionStreamingPolicy.OnCellShown(UWorldPartitionRuntimeCell*)", InCell); }
	void OnStreamingStateUpdated() { NativeCall<void>(this, "UWorldPartitionStreamingPolicy.OnStreamingStateUpdated()"); }
	void OnPreChangeStreamingContent() { NativeCall<void>(this, "UWorldPartitionStreamingPolicy.OnPreChangeStreamingContent()"); }
	UObject* GetSubObject(const wchar_t* SubObjectPath) { return NativeCall<UObject*, const wchar_t*>(this, "UWorldPartitionStreamingPolicy.GetSubObject(wchar_t*)", SubObjectPath); }
	bool InjectExternalStreamingObject(URuntimeHashExternalStreamingObjectBase* ExternalStreamingObject) { return NativeCall<bool, URuntimeHashExternalStreamingObjectBase*>(this, "UWorldPartitionStreamingPolicy.InjectExternalStreamingObject(URuntimeHashExternalStreamingObjectBase*)", ExternalStreamingObject); }
	void OnCellHidden(const UWorldPartitionRuntimeCell* InCell) { NativeCall<void, const UWorldPartitionRuntimeCell*>(this, "UWorldPartitionStreamingPolicy.OnCellHidden(UWorldPartitionRuntimeCell*)", InCell); }
	void PostUpdateStreamingStateInternal_GameThread(FWorldPartitionUpdateStreamingTargetState& InOutTargetState) { NativeCall<void, FWorldPartitionUpdateStreamingTargetState&>(this, "UWorldPartitionStreamingPolicy.PostUpdateStreamingStateInternal_GameThread(FWorldPartitionUpdateStreamingTargetState&)", InOutTargetState); }
	void DrawRuntimeHash3D() { NativeCall<void>(this, "UWorldPartitionStreamingPolicy.DrawRuntimeHash3D()"); }
	bool CanAddCellToWorld(const UWorldPartitionRuntimeCell* InCell) { return NativeCall<bool, const UWorldPartitionRuntimeCell*>(this, "UWorldPartitionStreamingPolicy.CanAddCellToWorld(UWorldPartitionRuntimeCell*)", InCell); }
	bool DrawRuntimeHash2D(FWorldPartitionDraw2DContext& DrawContext) { return NativeCall<bool, FWorldPartitionDraw2DContext&>(this, "UWorldPartitionStreamingPolicy.DrawRuntimeHash2D(FWorldPartitionDraw2DContext&)", DrawContext); }
	void SetCellStateToLoaded(const UWorldPartitionRuntimeCell* InCell, int& InOutMaxCellsToLoad) { NativeCall<void, const UWorldPartitionRuntimeCell*, int&>(this, "UWorldPartitionStreamingPolicy.SetCellStateToLoaded(UWorldPartitionRuntimeCell*,int&)", InCell, InOutMaxCellsToLoad); }
	void SetShouldMergeStreamingSourceInfo(bool bInShouldMergeStreamingSourceInfo) { NativeCall<void, bool>(this, "UWorldPartitionStreamingPolicy.SetShouldMergeStreamingSourceInfo(bool)", bInShouldMergeStreamingSourceInfo); }
	void SetCellStateToActivated(const UWorldPartitionRuntimeCell* InCell, int& InOutMaxCellsToLoad) { NativeCall<void, const UWorldPartitionRuntimeCell*, int&>(this, "UWorldPartitionStreamingPolicy.SetCellStateToActivated(UWorldPartitionRuntimeCell*,int&)", InCell, InOutMaxCellsToLoad); }
	void DrawRuntimeCellsDetails(UCanvas* Canvas, UE::Math::TVector2<double>& Offset) { NativeCall<void, UCanvas*, UE::Math::TVector2<double>&>(this, "UWorldPartitionStreamingPolicy.DrawRuntimeCellsDetails(UCanvas*,UE::Math::TVector2<double>&)", Canvas, Offset); }
};
