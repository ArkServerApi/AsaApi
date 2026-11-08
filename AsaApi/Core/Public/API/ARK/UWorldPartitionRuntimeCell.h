#pragma once
#include "UEObjectForward.h"
#include "BulkForward.h"
#include "UObject.h"

class UWorldPartitionRuntimeCell : public UObject
{
public:
	UWorldPartitionRuntimeCell() = delete;
	~UWorldPartitionRuntimeCell() = delete;
	UWorldPartitionRuntimeCell(const UWorldPartitionRuntimeCell&) = delete;
	UWorldPartitionRuntimeCell& operator=(const UWorldPartitionRuntimeCell&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UWorldPartitionRuntimeCell"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UWorldPartitionRuntimeCell"); }
	bool& bIsAlwaysLoadedField() { return *GetNativePointerField<bool*>(this, "UWorldPartitionRuntimeCell.bIsAlwaysLoaded"); }
	bool& bIsSpatiallyLoadedField() { return *GetNativePointerField<bool*>(this, "UWorldPartitionRuntimeCell.bIsSpatiallyLoaded"); }
	FDataLayerInstanceNames& DataLayersField() { return *GetNativePointerField<FDataLayerInstanceNames*>(this, "UWorldPartitionRuntimeCell.DataLayers"); }
	bool& bClientOnlyVisibleField() { return *GetNativePointerField<bool*>(this, "UWorldPartitionRuntimeCell.bClientOnlyVisible"); }
	bool& bIsHLODField() { return *GetNativePointerField<bool*>(this, "UWorldPartitionRuntimeCell.bIsHLOD"); }
	bool& bIsCustomHLODPlaceholderCellField() { return *GetNativePointerField<bool*>(this, "UWorldPartitionRuntimeCell.bIsCustomHLODPlaceholderCell"); }
	bool& bBlockOnSlowLoadingField() { return *GetNativePointerField<bool*>(this, "UWorldPartitionRuntimeCell.bBlockOnSlowLoading"); }
	FGuid& ContentBundleIDField() { return *GetNativePointerField<FGuid*>(this, "UWorldPartitionRuntimeCell.ContentBundleID"); }
	FLinearColor& CellDebugColorField() { return *GetNativePointerField<FLinearColor*>(this, "UWorldPartitionRuntimeCell.CellDebugColor"); }
	FGuid& CellGuidField() { return *GetNativePointerField<FGuid*>(this, "UWorldPartitionRuntimeCell.CellGuid"); }
	FGuid& SourceCellGuidField() { return *GetNativePointerField<FGuid*>(this, "UWorldPartitionRuntimeCell.SourceCellGuid"); }
	EDataLayerRuntimeState& EffectiveWantedStateField() { return *GetNativePointerField<EDataLayerRuntimeState*>(this, "UWorldPartitionRuntimeCell.EffectiveWantedState"); }
	int& EffectiveWantedStateEpochField() { return *GetNativePointerField<int*>(this, "UWorldPartitionRuntimeCell.EffectiveWantedStateEpoch"); }
	void SetIsAlwaysLoaded(bool bInIsAlwaysLoaded) { NativeCall<void, bool>(this, "UWorldPartitionRuntimeCell.SetIsAlwaysLoaded(bool)", bInIsAlwaysLoaded); }
	bool IsSpatiallyLoaded() { return NativeCall<bool>(this, "UWorldPartitionRuntimeCell.IsSpatiallyLoaded()"); }
	void Deactivate() { NativeCall<void>(this, "UWorldPartitionRuntimeCell.Deactivate()"); }
	const FGuid& GetContentBundleID() { return NativeCall<const FGuid&>(this, "UWorldPartitionRuntimeCell.GetContentBundleID()"); }
	bool IsDebugShown() { return NativeCall<bool>(this, "UWorldPartitionRuntimeCell.IsDebugShown()"); }
	bool ShouldServerWaitForClientLevelVisibility() { return NativeCall<bool>(this, "UWorldPartitionRuntimeCell.ShouldServerWaitForClientLevelVisibility()"); }
	void Unload() { NativeCall<void>(this, "UWorldPartitionRuntimeCell.Unload()"); }
	bool CanUnload() { return NativeCall<bool>(this, "UWorldPartitionRuntimeCell.CanUnload()"); }
	bool IsAlwaysLoaded() { return NativeCall<bool>(this, "UWorldPartitionRuntimeCell.IsAlwaysLoaded()"); }
	void SetStreamingPriority(int InStreamingPriority) { NativeCall<void, int>(this, "UWorldPartitionRuntimeCell.SetStreamingPriority(int)", InStreamingPriority); }
	void Activate() { NativeCall<void>(this, "UWorldPartitionRuntimeCell.Activate()"); }
	bool IsVisible() { return NativeCall<bool>(this, "UWorldPartitionRuntimeCell.IsVisible()"); }
	void Load() { NativeCall<void>(this, "UWorldPartitionRuntimeCell.Load()"); }
	void SetIsSpatiallyLoaded(bool bInIsSpatiallyLoaded) { NativeCall<void, bool>(this, "UWorldPartitionRuntimeCell.SetIsSpatiallyLoaded(bool)", bInIsSpatiallyLoaded); }
	TArray<FName, TSizedDefaultAllocator<32> >* GetActors(TArray<FName, TSizedDefaultAllocator<32> >* result) { return NativeCall<TArray<FName, TSizedDefaultAllocator<32> >*, TArray<FName, TSizedDefaultAllocator<32> >*>(this, "UWorldPartitionRuntimeCell.GetActors()", result); }
	ULevel* GetLevel() { return NativeCall<ULevel*>(this, "UWorldPartitionRuntimeCell.GetLevel()"); }
	EDataLayerRuntimeState GetCellEffectiveWantedState(const FWorldPartitionStreamingContext& Context) { return NativeCall<EDataLayerRuntimeState, const FWorldPartitionStreamingContext&>(this, "UWorldPartitionRuntimeCell.GetCellEffectiveWantedState(FWorldPartitionStreamingContext&)", Context); }
};
