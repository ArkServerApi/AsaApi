#pragma once
#include "BulkForward.h"
#include "ANavigationData.h"

struct ARecastNavMesh : public ANavigationData
{
public:
	ARecastNavMesh() = delete;
	~ARecastNavMesh() = delete;
	ARecastNavMesh(const ARecastNavMesh&) = delete;
	ARecastNavMesh& operator=(const ARecastNavMesh&) = delete;
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("ARecastNavMesh"); }

	float& DrawOffsetField() { return *GetNativePointerField<float*>(this, "ARecastNavMesh.DrawOffset"); }
	FRecastNavMeshTileGenerationDebug& TileGenerationDebugField() { return *GetNativePointerField<FRecastNavMeshTileGenerationDebug*>(this, "ARecastNavMesh.TileGenerationDebug"); }
	int& TilePoolSizeField() { return *GetNativePointerField<int*>(this, "ARecastNavMesh.TilePoolSize"); }
	float& TileSizeUUField() { return *GetNativePointerField<float*>(this, "ARecastNavMesh.TileSizeUU"); }
	float& AverageLayersPerTileField() { return *GetNativePointerField<float*>(this, "ARecastNavMesh.AverageLayersPerTile"); }
	float& CellSizeField() { return *GetNativePointerField<float*>(this, "ARecastNavMesh.CellSize"); }
	float& CellHeightField() { return *GetNativePointerField<float*>(this, "ARecastNavMesh.CellHeight"); }
	float& AgentMaxStepHeightField() { return *GetNativePointerField<float*>(this, "ARecastNavMesh.AgentMaxStepHeight"); }
	float& AgentRadiusField() { return *GetNativePointerField<float*>(this, "ARecastNavMesh.AgentRadius"); }
	float& AgentHeightField() { return *GetNativePointerField<float*>(this, "ARecastNavMesh.AgentHeight"); }
	float& AgentMaxSlopeField() { return *GetNativePointerField<float*>(this, "ARecastNavMesh.AgentMaxSlope"); }
	float& MinRegionAreaField() { return *GetNativePointerField<float*>(this, "ARecastNavMesh.MinRegionArea"); }
	float& MergeRegionSizeField() { return *GetNativePointerField<float*>(this, "ARecastNavMesh.MergeRegionSize"); }
	int& MaxVerticalMergeErrorField() { return *GetNativePointerField<int*>(this, "ARecastNavMesh.MaxVerticalMergeError"); }
	float& MaxSimplificationErrorField() { return *GetNativePointerField<float*>(this, "ARecastNavMesh.MaxSimplificationError"); }
	float& SimplificationElevationRatioField() { return *GetNativePointerField<float*>(this, "ARecastNavMesh.SimplificationElevationRatio"); }
	int& MaxSimultaneousTileGenerationJobsCountField() { return *GetNativePointerField<int*>(this, "ARecastNavMesh.MaxSimultaneousTileGenerationJobsCount"); }
	int& TileNumberHardLimitField() { return *GetNativePointerField<int*>(this, "ARecastNavMesh.TileNumberHardLimit"); }
	int& ExpectedMaxLayersPerTileField() { return *GetNativePointerField<int*>(this, "ARecastNavMesh.ExpectedMaxLayersPerTile"); }
	int& PolyRefTileBitsField() { return *GetNativePointerField<int*>(this, "ARecastNavMesh.PolyRefTileBits"); }
	int& PolyRefNavPolyBitsField() { return *GetNativePointerField<int*>(this, "ARecastNavMesh.PolyRefNavPolyBits"); }
	int& PolyRefSaltBitsField() { return *GetNativePointerField<int*>(this, "ARecastNavMesh.PolyRefSaltBits"); }
	UE::Math::TVector<double>& NavMeshOriginOffsetField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "ARecastNavMesh.NavMeshOriginOffset"); }
	float& DefaultDrawDistanceField() { return *GetNativePointerField<float*>(this, "ARecastNavMesh.DefaultDrawDistance"); }
	float& DefaultMaxSearchNodesField() { return *GetNativePointerField<float*>(this, "ARecastNavMesh.DefaultMaxSearchNodes"); }
	float& DefaultMaxHierarchicalSearchNodesField() { return *GetNativePointerField<float*>(this, "ARecastNavMesh.DefaultMaxHierarchicalSearchNodes"); }
	TEnumAsByte<ERecastPartitioning::Type>& RegionPartitioningField() { return *GetNativePointerField<TEnumAsByte<ERecastPartitioning::Type>*>(this, "ARecastNavMesh.RegionPartitioning"); }
	TEnumAsByte<ERecastPartitioning::Type>& LayerPartitioningField() { return *GetNativePointerField<TEnumAsByte<ERecastPartitioning::Type>*>(this, "ARecastNavMesh.LayerPartitioning"); }
	int& RegionChunkSplitsField() { return *GetNativePointerField<int*>(this, "ARecastNavMesh.RegionChunkSplits"); }
	int& LayerChunkSplitsField() { return *GetNativePointerField<int*>(this, "ARecastNavMesh.LayerChunkSplits"); }
	int& TimeSliceFilterLedgeSpansMaxYProcessField() { return *GetNativePointerField<int*>(this, "ARecastNavMesh.TimeSliceFilterLedgeSpansMaxYProcess"); }
	double& TimeSliceLongDurationDebugField() { return *GetNativePointerField<double*>(this, "ARecastNavMesh.TimeSliceLongDurationDebug"); }
	unsigned int& InvokerTilePriorityBumpDistanceThresholdInTileUnitsField() { return *GetNativePointerField<unsigned int*>(this, "ARecastNavMesh.InvokerTilePriorityBumpDistanceThresholdInTileUnits"); }
	unsigned char& InvokerTilePriorityBumpIncreaseField() { return *GetNativePointerField<unsigned char*>(this, "ARecastNavMesh.InvokerTilePriorityBumpIncrease"); }
	float& TileSetUpdateIntervalField() { return *GetNativePointerField<float*>(this, "ARecastNavMesh.TileSetUpdateInterval"); }
	float& HeuristicScaleField() { return *GetNativePointerField<float*>(this, "ARecastNavMesh.HeuristicScale"); }
	float& VerticalDeviationFromGroundCompensationField() { return *GetNativePointerField<float*>(this, "ARecastNavMesh.VerticalDeviationFromGroundCompensation"); }
	unsigned int& NavMeshVersionField() { return *GetNativePointerField<unsigned int*>(this, "ARecastNavMesh.NavMeshVersion"); }
	FPImplRecastNavMesh*& RecastNavMeshImplField() { return *GetNativePointerField<FPImplRecastNavMesh**>(this, "ARecastNavMesh.RecastNavMeshImpl"); }
	int& BatchQueryCounterField() { return *GetNativePointerField<int*>(this, "ARecastNavMesh.BatchQueryCounter"); }
	BitFieldValue<bool, unsigned __int32> bDrawTriangleEdges() { return { this, "ARecastNavMesh.bDrawTriangleEdges"}; }
	BitFieldValue<bool, unsigned __int32> bDrawPolyEdges() { return { this, "ARecastNavMesh.bDrawPolyEdges"}; }
	BitFieldValue<bool, unsigned __int32> bDrawFilledPolys() { return { this, "ARecastNavMesh.bDrawFilledPolys"}; }
	BitFieldValue<bool, unsigned __int32> bDrawNavMeshEdges() { return { this, "ARecastNavMesh.bDrawNavMeshEdges"}; }
	BitFieldValue<bool, unsigned __int32> bDrawTileBounds() { return { this, "ARecastNavMesh.bDrawTileBounds"}; }
	BitFieldValue<bool, unsigned __int32> bDrawTileResolutions() { return { this, "ARecastNavMesh.bDrawTileResolutions"}; }
	BitFieldValue<bool, unsigned __int32> bDrawPathCollidingGeometry() { return { this, "ARecastNavMesh.bDrawPathCollidingGeometry"}; }
	BitFieldValue<bool, unsigned __int32> bDrawTileLabels() { return { this, "ARecastNavMesh.bDrawTileLabels"}; }
	BitFieldValue<bool, unsigned __int32> bDrawTileBuildTimes() { return { this, "ARecastNavMesh.bDrawTileBuildTimes"}; }
	BitFieldValue<bool, unsigned __int32> bDrawTileBuildTimesHeatMap() { return { this, "ARecastNavMesh.bDrawTileBuildTimesHeatMap"}; }
	BitFieldValue<bool, unsigned __int32> bDrawPolygonLabels() { return { this, "ARecastNavMesh.bDrawPolygonLabels"}; }
	BitFieldValue<bool, unsigned __int32> bDrawDefaultPolygonCost() { return { this, "ARecastNavMesh.bDrawDefaultPolygonCost"}; }
	BitFieldValue<bool, unsigned __int32> bDrawPolygonFlags() { return { this, "ARecastNavMesh.bDrawPolygonFlags"}; }
	BitFieldValue<bool, unsigned __int32> bDrawPolygonAreaIDs() { return { this, "ARecastNavMesh.bDrawPolygonAreaIDs"}; }
	BitFieldValue<bool, unsigned __int32> bDrawLabelsOnPathNodes() { return { this, "ARecastNavMesh.bDrawLabelsOnPathNodes"}; }
	BitFieldValue<bool, unsigned __int32> bDrawNavLinks() { return { this, "ARecastNavMesh.bDrawNavLinks"}; }
	BitFieldValue<bool, unsigned __int32> bDrawFailedNavLinks() { return { this, "ARecastNavMesh.bDrawFailedNavLinks"}; }
	BitFieldValue<bool, unsigned __int32> bDrawClusters() { return { this, "ARecastNavMesh.bDrawClusters"}; }
	BitFieldValue<bool, unsigned __int32> bDrawOctree() { return { this, "ARecastNavMesh.bDrawOctree"}; }
	BitFieldValue<bool, unsigned __int32> bDrawOctreeDetails() { return { this, "ARecastNavMesh.bDrawOctreeDetails"}; }
	BitFieldValue<bool, unsigned __int32> bDrawMarkedForbiddenPolys() { return { this, "ARecastNavMesh.bDrawMarkedForbiddenPolys"}; }
	BitFieldValue<bool, unsigned __int32> bDrawOnScreenInformation() { return { this, "ARecastNavMesh.bDrawOnScreenInformation"}; }
	BitFieldValue<bool, unsigned __int32> bDistinctlyDrawTilesBeingBuilt() { return { this, "ARecastNavMesh.bDistinctlyDrawTilesBeingBuilt"}; }
	BitFieldValue<bool, unsigned __int32> bFixedTilePoolSize() { return { this, "ARecastNavMesh.bFixedTilePoolSize"}; }
	BitFieldValue<bool, unsigned __int32> bMinimizeLinkPoolSize() { return { this, "ARecastNavMesh.bMinimizeLinkPoolSize"}; }
	BitFieldValue<bool, unsigned __int32> bSortNavigationAreasByCost() { return { this, "ARecastNavMesh.bSortNavigationAreasByCost"}; }
	BitFieldValue<bool, unsigned __int32> bIsWorldPartitioned() { return { this, "ARecastNavMesh.bIsWorldPartitioned"}; }
	BitFieldValue<bool, unsigned __int32> bGenerateNavLinks() { return { this, "ARecastNavMesh.bGenerateNavLinks"}; }
	BitFieldValue<bool, unsigned __int32> bPerformVoxelFiltering() { return { this, "ARecastNavMesh.bPerformVoxelFiltering"}; }
	BitFieldValue<bool, unsigned __int32> bMarkLowHeightAreas() { return { this, "ARecastNavMesh.bMarkLowHeightAreas"}; }
	BitFieldValue<bool, unsigned __int32> bUseExtraTopCellWhenMarkingAreas() { return { this, "ARecastNavMesh.bUseExtraTopCellWhenMarkingAreas"}; }
	BitFieldValue<bool, unsigned __int32> bFilterLowSpanSequences() { return { this, "ARecastNavMesh.bFilterLowSpanSequences"}; }
	BitFieldValue<bool, unsigned __int32> bFilterLowSpanFromTileCache() { return { this, "ARecastNavMesh.bFilterLowSpanFromTileCache"}; }
	BitFieldValue<bool, unsigned __int32> bDoFullyAsyncNavDataGathering() { return { this, "ARecastNavMesh.bDoFullyAsyncNavDataGathering"}; }
	BitFieldValue<bool, unsigned __int32> bUseBetterOffsetsFromCorners() { return { this, "ARecastNavMesh.bUseBetterOffsetsFromCorners"}; }
	BitFieldValue<bool, unsigned __int32> bStoreEmptyTileLayers() { return { this, "ARecastNavMesh.bStoreEmptyTileLayers"}; }
	BitFieldValue<bool, unsigned __int32> bUseVirtualFilters() { return { this, "ARecastNavMesh.bUseVirtualFilters"}; }
	BitFieldValue<bool, unsigned __int32> bUseVirtualGeometryFilteringAndDirtying() { return { this, "ARecastNavMesh.bUseVirtualGeometryFilteringAndDirtying"}; }
	BitFieldValue<bool, unsigned __int32> bAllowNavLinkAsPathEnd() { return { this, "ARecastNavMesh.bAllowNavLinkAsPathEnd"}; }
	BitFieldValue<bool, unsigned char> bHasNoTileData() { return { this, "ARecastNavMesh.bHasNoTileData"}; }
	BitFieldValue<bool, unsigned __int32> bUseVoxelCache() { return { this, "ARecastNavMesh.bUseVoxelCache"}; }
	void OnNavAreaAdded(const UClass* NavAreaClass, int AgentIndex) { NativeCall<void, const UClass*, int>(this, "ARecastNavMesh.OnNavAreaAdded(UClass*,int)", NavAreaClass, AgentIndex); }
	void OnNavMeshGenerationFinished() { NativeCall<void>(this, "ARecastNavMesh.OnNavMeshGenerationFinished()"); }
	void PostUnregisterAllComponents() { NativeCall<void>(this, "ARecastNavMesh.PostUnregisterAllComponents()"); }
	void OnStreamingLevelAdded(ULevel* InLevel, UWorld* InWorld) { NativeCall<void, ULevel*, UWorld*>(this, "ARecastNavMesh.OnStreamingLevelAdded(ULevel*,UWorld*)", InLevel, InWorld); }
	void RemoveTileCacheLayers(int TileX, int TileY) { NativeCall<void, int, int>(this, "ARecastNavMesh.RemoveTileCacheLayers(int,int)", TileX, TileY); }
	void CheckToDiscardSubLevelNavData(const UNavigationSystemBase& BaseNavSys) { NativeCall<void, const UNavigationSystemBase&>(this, "ARecastNavMesh.CheckToDiscardSubLevelNavData(UNavigationSystemBase&)", BaseNavSys); }
	int GetNewAreaID(const UClass* AreaClass) { return NativeCall<int, const UClass*>(this, "ARecastNavMesh.GetNewAreaID(UClass*)", AreaClass); }
	void CleanUp() { NativeCall<void>(this, "ARecastNavMesh.CleanUp()"); }
	void EnsureBuildCompletion() { NativeCall<void>(this, "ARecastNavMesh.EnsureBuildCompletion()"); }
	bool GetClosestPointOnPoly(unsigned __int64 PolyID, const UE::Math::TVector<double>& TestPt, UE::Math::TVector<double>& PointOnPoly) { return NativeCall<bool, unsigned __int64, const UE::Math::TVector<double>&, UE::Math::TVector<double>&>(this, "ARecastNavMesh.GetClosestPointOnPoly(unsigned__int64,UE::Math::TVector<double>&,UE::Math::TVector<double>&)", PolyID, TestPt, PointOnPoly); }
	void FinishBatchQuery() { NativeCall<void>(this, "ARecastNavMesh.FinishBatchQuery()"); }
	bool IsResizable() { return NativeCall<bool>(this, "ARecastNavMesh.IsResizable()"); }
	void SetConfig(const FNavDataConfig& Src) { NativeCall<void, const FNavDataConfig&>(this, "ARecastNavMesh.SetConfig(FNavDataConfig&)", Src); }
	dtNavMesh* GetRecastMesh() { return NativeCall<dtNavMesh*>(this, "ARecastNavMesh.GetRecastMesh()"); }
	void DestroyRecastPImpl() { NativeCall<void>(this, "ARecastNavMesh.DestroyRecastPImpl()"); }
	void PostLoad() { NativeCall<void>(this, "ARecastNavMesh.PostLoad()"); }
	void AttachNavMeshDataChunk(URecastNavMeshDataChunk& NavDataChunk) { NativeCall<void, URecastNavMeshDataChunk&>(this, "ARecastNavMesh.AttachNavMeshDataChunk(URecastNavMeshDataChunk&)", NavDataChunk); }
	bool IsGeneratingLinks() { return NativeCall<bool>(this, "ARecastNavMesh.IsGeneratingLinks()"); }
	void OnNavAreaRemoved(const UClass* NavAreaClass) { NativeCall<void, const UClass*>(this, "ARecastNavMesh.OnNavAreaRemoved(UClass*)", NavAreaClass); }
	bool SupportsRuntimeGeneration() { return NativeCall<bool>(this, "ARecastNavMesh.SupportsRuntimeGeneration()"); }
	bool NeedsRebuild() { return NativeCall<bool>(this, "ARecastNavMesh.NeedsRebuild()"); }
	bool GetLinkEndPoints(unsigned __int64 LinkPolyID, UE::Math::TVector<double>& PointA, UE::Math::TVector<double>& PointB) { return NativeCall<bool, unsigned __int64, UE::Math::TVector<double>&, UE::Math::TVector<double>&>(this, "ARecastNavMesh.GetLinkEndPoints(unsigned__int64,UE::Math::TVector<double>&,UE::Math::TVector<double>&)", LinkPolyID, PointA, PointB); }
	bool SupportsStreaming() { return NativeCall<bool>(this, "ARecastNavMesh.SupportsStreaming()"); }
	void SerializeRecastNavMesh(FArchive& Ar, FPImplRecastNavMesh*& NavMesh, int InNavMeshVersion) { NativeCall<void, FArchive&, FPImplRecastNavMesh*&, int>(this, "ARecastNavMesh.SerializeRecastNavMesh(FArchive&,FPImplRecastNavMesh*&,int)", Ar, NavMesh, InNavMeshVersion); }
	void LoadBeforeGeneratorRebuild() { NativeCall<void>(this, "ARecastNavMesh.LoadBeforeGeneratorRebuild()"); }
	bool IsUsingActiveTilesGeneration(const UNavigationSystemV1& NavSys) { return NativeCall<bool, const UNavigationSystemV1&>(this, "ARecastNavMesh.IsUsingActiveTilesGeneration(UNavigationSystemV1&)", NavSys); }
	void RegisterGeneratedLinksProxy(FNavLinkGenerationJumpConfig& InOutNavLinkJumpConfig) { NativeCall<void, FNavLinkGenerationJumpConfig&>(this, "ARecastNavMesh.RegisterGeneratedLinksProxy(FNavLinkGenerationJumpConfig&)", InOutNavLinkJumpConfig); }
	UPrimitiveComponent* ConstructRenderingComponent() { return NativeCall<UPrimitiveComponent*>(this, "ARecastNavMesh.ConstructRenderingComponent()"); }
	void DetachNavMeshDataChunk(URecastNavMeshDataChunk& NavDataChunk) { NativeCall<void, URecastNavMeshDataChunk&>(this, "ARecastNavMesh.DetachNavMeshDataChunk(URecastNavMeshDataChunk&)", NavDataChunk); }
	void OnUnregistered() { NativeCall<void>(this, "ARecastNavMesh.OnUnregistered()"); }
	URecastNavMeshDataChunk* GetNavigationDataChunk(const TArray<UNavigationDataChunk*, TSizedDefaultAllocator<32> >& InChunks) { return NativeCall<URecastNavMeshDataChunk*, const TArray<UNavigationDataChunk*, TSizedDefaultAllocator<32> >&>(this, "ARecastNavMesh.GetNavigationDataChunk(TArray<UNavigationDataChunk*,TSizedDefaultAllocator<32>>&)", InChunks); }
	static UClass* StaticClass() { return AsaApi::ResolveClass("ARecastNavMesh"); }
	bool IsNodeRefValid(unsigned __int64 NodeRef) { return NativeCall<bool, unsigned __int64>(this, "ARecastNavMesh.IsNodeRefValid(unsigned__int64)", NodeRef); }
	void OnNavAreaChanged() { NativeCall<void>(this, "ARecastNavMesh.OnNavAreaChanged()"); }
	static bool IsVoxelCacheEnabled() { return NativeCall<bool>(nullptr, "ARecastNavMesh.IsVoxelCacheEnabled()"); }
	void OnRegistered() { NativeCall<void>(this, "ARecastNavMesh.OnRegistered()"); }
	static const FRecastQueryFilter* GetNamedFilter(ERecastNamedFilter::Type FilterType) { return NativeCall<const FRecastQueryFilter*, ERecastNamedFilter::Type>(nullptr, "ARecastNavMesh.GetNamedFilter(ERecastNamedFilter::Type)", FilterType); }
	void RequestDrawingUpdate(bool bForce) { NativeCall<void, bool>(this, "ARecastNavMesh.RequestDrawingUpdate(bool)", bForce); }
	static bool TestPath(const FNavAgentProperties& AgentProperties, const FPathFindingQuery& Query, int* NumVisitedNodes) { return NativeCall<bool, const FNavAgentProperties&, const FPathFindingQuery&, int*>(nullptr, "ARecastNavMesh.TestPath(FNavAgentProperties&,FPathFindingQuery&,int*)", AgentProperties, Query, NumVisitedNodes); }
	void UpdateNavVersion() { NativeCall<void>(this, "ARecastNavMesh.UpdateNavVersion()"); }
	bool HasValidNavmesh() { return NativeCall<bool>(this, "ARecastNavMesh.HasValidNavmesh()"); }
	void OnStreamingNavDataAdded(ANavigationDataChunkActor& InActor) { NativeCall<void, ANavigationDataChunkActor&>(this, "ARecastNavMesh.OnStreamingNavDataAdded(ANavigationDataChunkActor&)", InActor); }
	bool DoesNodeContainLocation(unsigned __int64 NodeRef, const UE::Math::TVector<double>& WorldSpaceLocation) { return NativeCall<bool, unsigned __int64, const UE::Math::TVector<double>&>(this, "ARecastNavMesh.DoesNodeContainLocation(unsigned__int64,UE::Math::TVector<double>&)", NodeRef, WorldSpaceLocation); }
	void BeginDestroy() { NativeCall<void>(this, "ARecastNavMesh.BeginDestroy()"); }
	void OnStreamingNavDataRemoved(ANavigationDataChunkActor& InActor) { NativeCall<void, ANavigationDataChunkActor&>(this, "ARecastNavMesh.OnStreamingNavDataRemoved(ANavigationDataChunkActor&)", InActor); }
	void Serialize(FArchive& Ar) { NativeCall<void, FArchive&>(this, "ARecastNavMesh.Serialize(FArchive&)", Ar); }
	void MarkEmptyTileCacheLayers(int TileX, int TileY) { NativeCall<void, int, int>(this, "ARecastNavMesh.MarkEmptyTileCacheLayers(int,int)", TileX, TileY); }
	void FillConfig(FNavDataConfig& Dest) { NativeCall<void, FNavDataConfig&>(this, "ARecastNavMesh.FillConfig(FNavDataConfig&)", Dest); }
	bool CheckTileIndicesInValidRange(const UE::Math::TVector<double>& Point, bool& bOutInRange) { return NativeCall<bool, const UE::Math::TVector<double>&, bool&>(this, "ARecastNavMesh.CheckTileIndicesInValidRange(UE::Math::TVector<double>&,bool&)", Point, bOutInRange); }
	void PostInitProperties() { NativeCall<void>(this, "ARecastNavMesh.PostInitProperties()"); }
	void UpdateCustomLink(const INavLinkCustomInterface* CustomLink) { NativeCall<void, const INavLinkCustomInterface*>(this, "ARecastNavMesh.UpdateCustomLink(INavLinkCustomInterface*)", CustomLink); }
	FRecastNavMeshGenerator* CreateGeneratorInstance() { return NativeCall<FRecastNavMeshGenerator*>(this, "ARecastNavMesh.CreateGeneratorInstance()"); }
	void UpdateNavMeshDrawing() { NativeCall<void>(this, "ARecastNavMesh.UpdateNavMeshDrawing()"); }
	bool GetPolyCenter(unsigned __int64 PolyID, UE::Math::TVector<double>& OutCenter) { return NativeCall<bool, unsigned __int64, UE::Math::TVector<double>&>(this, "ARecastNavMesh.GetPolyCenter(unsigned__int64,UE::Math::TVector<double>&)", PolyID, OutCenter); }
	unsigned int GetPolyAreaID(unsigned __int64 PolyID) { return NativeCall<unsigned int, unsigned __int64>(this, "ARecastNavMesh.GetPolyAreaID(unsigned__int64)", PolyID); }
	void PostRegisterAllComponents() { NativeCall<void>(this, "ARecastNavMesh.PostRegisterAllComponents()"); }
	int GetMaxSupportedAreas() { return NativeCall<int>(this, "ARecastNavMesh.GetMaxSupportedAreas()"); }
	void LogRecastTile(const wchar_t* Caller, const FName& Prefix, const FName& OperationName, const dtNavMesh& DetourMesh, int TileX, int TileY, int LayerIndex, unsigned __int64 TileRef) { NativeCall<void, const wchar_t*, const FName&, const FName&, const dtNavMesh&, int, int, int, unsigned __int64>(this, "ARecastNavMesh.LogRecastTile(wchar_t*,FName&,FName&,dtNavMesh&,int,int,int,unsigned__int64)", Caller, Prefix, OperationName, DetourMesh, TileX, TileY, LayerIndex, TileRef); }
	void SetMaxSimultaneousTileGenerationJobsCount(int NewJobsCountLimit) { NativeCall<void, int>(this, "ARecastNavMesh.SetMaxSimultaneousTileGenerationJobsCount(int)", NewJobsCountLimit); }
	void BeginBatchQuery() { NativeCall<void>(this, "ARecastNavMesh.BeginBatchQuery()"); }
	void PostLoadPreRebuild() { NativeCall<void>(this, "ARecastNavMesh.PostLoadPreRebuild()"); }
	void ConditionalConstructGenerator() { NativeCall<void>(this, "ARecastNavMesh.ConditionalConstructGenerator()"); }
	bool IsWorldPartitionedDynamicNavmesh() { return NativeCall<bool>(this, "ARecastNavMesh.IsWorldPartitionedDynamicNavmesh()"); }
	void ApplyWorldOffset(const UE::Math::TVector<double>& InOffset, bool bWorldShift) { NativeCall<void, const UE::Math::TVector<double>&, bool>(this, "ARecastNavMesh.ApplyWorldOffset(UE::Math::TVector<double>&,bool)", InOffset, bWorldShift); }
	void OnStreamingLevelRemoved(ULevel* InLevel, UWorld* InWorld) { NativeCall<void, ULevel*, UWorld*>(this, "ARecastNavMesh.OnStreamingLevelRemoved(ULevel*,UWorld*)", InLevel, InWorld); }
	void RestrictBuildingToActiveTiles(bool InRestrictBuildingToActiveTiles) { NativeCall<void, bool>(this, "ARecastNavMesh.RestrictBuildingToActiveTiles(bool)", InRestrictBuildingToActiveTiles); }
	static bool TestHierarchicalPath(const FNavAgentProperties& AgentProperties, const FPathFindingQuery& Query, int* NumVisitedNodes) { return NativeCall<bool, const FNavAgentProperties&, const FPathFindingQuery&, int*>(nullptr, "ARecastNavMesh.TestHierarchicalPath(FNavAgentProperties&,FPathFindingQuery&,int*)", AgentProperties, Query, NumVisitedNodes); }
	void RecreateDefaultFilter() { NativeCall<void>(this, "ARecastNavMesh.RecreateDefaultFilter()"); }
};
