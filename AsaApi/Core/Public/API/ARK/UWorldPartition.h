#pragma once
#include "UEObjectForward.h"
#include "BulkForward.h"
#include "UObject.h"

struct UWorldPartition : public UObject
{
public:
	UWorldPartition() = delete;
	~UWorldPartition() = delete;
	UWorldPartition(const UWorldPartition&) = delete;
	UWorldPartition& operator=(const UWorldPartition&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UWorldPartition"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UWorldPartition"); }
	bool& bEnableStreamingField() { return *GetNativePointerField<bool*>(this, "UWorldPartition.bEnableStreaming"); }
	bool& bStreamingInEnabledField() { return *GetNativePointerField<bool*>(this, "UWorldPartition.bStreamingInEnabled"); }
	int& StreamingStateEpochField() { return *GetNativePointerField<int*>(this, "UWorldPartition.StreamingStateEpoch"); }
	AWorldPartitionReplay*& ReplayField() { return *GetNativePointerField<AWorldPartitionReplay**>(this, "UWorldPartition.Replay"); }
	bool& bHasHadNonZeroUpdateField() { return *GetNativePointerField<bool*>(this, "UWorldPartition.bHasHadNonZeroUpdate"); }
	UE::Math::TVector<double>& BigJumpLastLocationField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "UWorldPartition.BigJumpLastLocation"); }
	BitFieldValue<bool, unsigned char> bHasStandaloneHLOD() { return { this, "UWorldPartition.bHasStandaloneHLOD"}; }
	BitFieldValue<bool, unsigned char> bExternalizeHLODAssets() { return { this, "UWorldPartition.bExternalizeHLODAssets"}; }
	BitFieldValue<bool, unsigned char> bIsStandaloneHLODWorld() { return { this, "UWorldPartition.bIsStandaloneHLODWorld"}; }
	BitFieldValue<bool, unsigned char> bDisableContentBundles() { return { this, "UWorldPartition.bDisableContentBundles"}; }
	void OnStreamingStateUpdated() { NativeCall<void>(this, "UWorldPartition.OnStreamingStateUpdated()"); }
	void OnWorldPreBeginPlay() { NativeCall<void>(this, "UWorldPartition.OnWorldPreBeginPlay()"); }
	bool CanInitialize(UWorld* InWorld) { return NativeCall<bool, UWorld*>(this, "UWorldPartition.CanInitialize(UWorld*)", InWorld); }
	bool InjectExternalStreamingObject(URuntimeHashExternalStreamingObjectBase* InExternalStreamingObject) { return NativeCall<bool, URuntimeHashExternalStreamingObjectBase*>(this, "UWorldPartition.InjectExternalStreamingObject(URuntimeHashExternalStreamingObjectBase*)", InExternalStreamingObject); }
	bool CanStream() { return NativeCall<bool>(this, "UWorldPartition.CanStream()"); }
	void OnCellHidden(const UWorldPartitionRuntimeCell* InCell) { NativeCall<void, const UWorldPartitionRuntimeCell*>(this, "UWorldPartition.OnCellHidden(UWorldPartitionRuntimeCell*)", InCell); }
	UWorld* GetWorld() { return NativeCall<UWorld*>(this, "UWorldPartition.GetWorld()"); }
	bool ResolveSubobject(const wchar_t* SubObjectPath, UObject*& OutObject, bool bLoadIfExists) { return NativeCall<bool, const wchar_t*, UObject*&, bool>(this, "UWorldPartition.ResolveSubobject(wchar_t*,UObject*&,bool)", SubObjectPath, OutObject, bLoadIfExists); }
	bool IsInitialized() { return NativeCall<bool>(this, "UWorldPartition.IsInitialized()"); }
	bool CanAddCellToWorld(const IWorldPartitionCell* InCell) { return NativeCall<bool, const IWorldPartitionCell*>(this, "UWorldPartition.CanAddCellToWorld(IWorldPartitionCell*)", InCell); }
	void BeginDestroy() { NativeCall<void>(this, "UWorldPartition.BeginDestroy()"); }
	void Uninitialize() { NativeCall<void>(this, "UWorldPartition.Uninitialize()"); }
	bool IsServerStreamingOutEnabled() { return NativeCall<bool>(this, "UWorldPartition.IsServerStreamingOutEnabled()"); }
	bool UseMakingInvisibleTransactionRequests() { return NativeCall<bool>(this, "UWorldPartition.UseMakingInvisibleTransactionRequests()"); }
	bool RemoveExternalStreamingObject(URuntimeHashExternalStreamingObjectBase* InExternalStreamingObject) { return NativeCall<bool, URuntimeHashExternalStreamingObjectBase*>(this, "UWorldPartition.RemoveExternalStreamingObject(URuntimeHashExternalStreamingObjectBase*)", InExternalStreamingObject); }
	void DrawRuntimeCellsDetails(UCanvas* Canvas, UE::Math::TVector2<double>& Offset) { NativeCall<void, UCanvas*, UE::Math::TVector2<double>&>(this, "UWorldPartition.DrawRuntimeCellsDetails(UCanvas*,UE::Math::TVector2<double>&)", Canvas, Offset); }
	bool IsStreamingInEnabled() { return NativeCall<bool>(this, "UWorldPartition.IsStreamingInEnabled()"); }
	void DrawRuntimeHash3D() { NativeCall<void>(this, "UWorldPartition.DrawRuntimeHash3D()"); }
	bool DrawRuntimeHash2D(FWorldPartitionDraw2DContext& DrawContext) { return NativeCall<bool, FWorldPartitionDraw2DContext&>(this, "UWorldPartition.DrawRuntimeHash2D(FWorldPartitionDraw2DContext&)", DrawContext); }
	bool UseMakingVisibleTransactionRequests() { return NativeCall<bool>(this, "UWorldPartition.UseMakingVisibleTransactionRequests()"); }
	void UpdateTileVolumes() { NativeCall<void>(this, "UWorldPartition.UpdateTileVolumes()"); }
	void OnBeginPlay() { NativeCall<void>(this, "UWorldPartition.OnBeginPlay()"); }
	bool IsServerStreamingEnabled() { return NativeCall<bool>(this, "UWorldPartition.IsServerStreamingEnabled()"); }
	UDataLayerManager* GetDataLayerManager() { return NativeCall<UDataLayerManager*>(this, "UWorldPartition.GetDataLayerManager()"); }
	int GetUpdateStreamingStateEpoch() { return NativeCall<int>(this, "UWorldPartition.GetUpdateStreamingStateEpoch()"); }
	static void AddReferencedObjects(UObject* InThis, FReferenceCollector& Collector) { NativeCall<void, UObject*, FReferenceCollector&>(nullptr, "UWorldPartition.AddReferencedObjects(UObject*,FReferenceCollector&)", InThis, Collector); }
	static bool IsSimulating(bool bIncludeTestEnableSimulationStreamingSource) { return NativeCall<bool, bool>(nullptr, "UWorldPartition.IsSimulating(bool)", bIncludeTestEnableSimulationStreamingSource); }
	void OnCellShown(const UWorldPartitionRuntimeCell* InCell) { NativeCall<void, const UWorldPartitionRuntimeCell*>(this, "UWorldPartition.OnCellShown(UWorldPartitionRuntimeCell*)", InCell); }
	int GetStreamingStateEpoch() { return NativeCall<int>(this, "UWorldPartition.GetStreamingStateEpoch()"); }
	void InvalidateVisiblityTransactionRequestCachedVariables() { NativeCall<void>(this, "UWorldPartition.InvalidateVisiblityTransactionRequestCachedVariables()"); }
	void PostLoad() { NativeCall<void>(this, "UWorldPartition.PostLoad()"); }
	void Tick(float DeltaSeconds) { NativeCall<void, float>(this, "UWorldPartition.Tick(float)", DeltaSeconds); }
	bool IsServer() { return NativeCall<bool>(this, "UWorldPartition.IsServer()"); }
	bool IsExternalStreamingObjectInjected(URuntimeHashExternalStreamingObjectBase* InExternalStreamingObject) { return NativeCall<bool, URuntimeHashExternalStreamingObjectBase*>(this, "UWorldPartition.IsExternalStreamingObjectInjected(URuntimeHashExternalStreamingObjectBase*)", InExternalStreamingObject); }
	void Serialize(FArchive& Ar) { NativeCall<void, FArchive&>(this, "UWorldPartition.Serialize(FArchive&)", Ar); }
	void OnCleanupLevel() { NativeCall<void>(this, "UWorldPartition.OnCleanupLevel()"); }
	bool IsStreamingEnabled() { return NativeCall<bool>(this, "UWorldPartition.IsStreamingEnabled()"); }
	void OnWorldMatchStarting() { NativeCall<void>(this, "UWorldPartition.OnWorldMatchStarting()"); }
};
