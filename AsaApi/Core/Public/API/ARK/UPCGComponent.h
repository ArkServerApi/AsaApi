#pragma once
#include "BulkForward.h"
#include "UActorComponent.h"

struct UPCGComponent : public UActorComponent
{
public:
	UPCGComponent() = delete;
	~UPCGComponent() = delete;
	UPCGComponent(const UPCGComponent&) = delete;
	UPCGComponent& operator=(const UPCGComponent&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UPCGComponent"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UPCGComponent"); }

	int& SeedField() { return *GetNativePointerField<int*>(this, "UPCGComponent.Seed"); }
	bool& bActivatedField() { return *GetNativePointerField<bool*>(this, "UPCGComponent.bActivated"); }
	bool& bIsComponentPartitionedField() { return *GetNativePointerField<bool*>(this, "UPCGComponent.bIsComponentPartitioned"); }
	EPCGComponentGenerationTrigger& GenerationTriggerField() { return *GetNativePointerField<EPCGComponentGenerationTrigger*>(this, "UPCGComponent.GenerationTrigger"); }
	bool& bGenerateOnDropWhenTriggerOnDemandField() { return *GetNativePointerField<bool*>(this, "UPCGComponent.bGenerateOnDropWhenTriggerOnDemand"); }
	bool& bOverrideGenerationRadiiField() { return *GetNativePointerField<bool*>(this, "UPCGComponent.bOverrideGenerationRadii"); }
	FPCGRuntimeGenerationRadii& GenerationRadiiField() { return *GetNativePointerField<FPCGRuntimeGenerationRadii*>(this, "UPCGComponent.GenerationRadii"); }
	FPCGInteractiveToolDataContainer& ToolDataContainerField() { return *GetNativePointerField<FPCGInteractiveToolDataContainer*>(this, "UPCGComponent.ToolDataContainer"); }
	FOnPCGGraphStartGeneratingExternal& OnPCGGraphStartGeneratingExternalField() { return *GetNativePointerField<FOnPCGGraphStartGeneratingExternal*>(this, "UPCGComponent.OnPCGGraphStartGeneratingExternal"); }
	FOnPCGGraphCancelledExternal& OnPCGGraphCancelledExternalField() { return *GetNativePointerField<FOnPCGGraphCancelledExternal*>(this, "UPCGComponent.OnPCGGraphCancelledExternal"); }
	FOnPCGGraphGeneratedExternal& OnPCGGraphGeneratedExternalField() { return *GetNativePointerField<FOnPCGGraphGeneratedExternal*>(this, "UPCGComponent.OnPCGGraphGeneratedExternal"); }
	FOnPCGGraphCleanedExternal& OnPCGGraphCleanedExternalField() { return *GetNativePointerField<FOnPCGGraphCleanedExternal*>(this, "UPCGComponent.OnPCGGraphCleanedExternal"); }
	FOnPCGLinkClearedExternal& OnPCGLinkClearedExternalField() { return *GetNativePointerField<FOnPCGLinkClearedExternal*>(this, "UPCGComponent.OnPCGLinkClearedExternal"); }
	bool& bGeneratedField() { return *GetNativePointerField<bool*>(this, "UPCGComponent.bGenerated"); }
	bool& bRuntimeGeneratedField() { return *GetNativePointerField<bool*>(this, "UPCGComponent.bRuntimeGenerated"); }
	TArray<FName, TSizedDefaultAllocator<32> >& PostGenerateFunctionNamesField() { return *GetNativePointerField<TArray<FName, TSizedDefaultAllocator<32> >*>(this, "UPCGComponent.PostGenerateFunctionNames"); }
	unsigned int& GenerationGridSizeField() { return *GetNativePointerField<unsigned int*>(this, "UPCGComponent.GenerationGridSize"); }
	EPCGComponentInput& InputTypeField() { return *GetNativePointerField<EPCGComponentInput*>(this, "UPCGComponent.InputType"); }
	bool& bParseActorComponentsField() { return *GetNativePointerField<bool*>(this, "UPCGComponent.bParseActorComponents"); }
	unsigned int& RuntimeGridDescriptorHashField() { return *GetNativePointerField<unsigned int*>(this, "UPCGComponent.RuntimeGridDescriptorHash"); }
	FPCGManagedResourceContainer& ManagedResourceContainerField() { return *GetNativePointerField<FPCGManagedResourceContainer*>(this, "UPCGComponent.ManagedResourceContainer"); }
	bool& bGeneratedOfflineField() { return *GetNativePointerField<bool*>(this, "UPCGComponent.bGeneratedOffline"); }
	FPCGDataCollection& GeneratedGraphOutputField() { return *GetNativePointerField<FPCGDataCollection*>(this, "UPCGComponent.GeneratedGraphOutput"); }
	unsigned __int64& CurrentGenerationTaskField() { return *GetNativePointerField<unsigned __int64*>(this, "UPCGComponent.CurrentGenerationTask"); }
	unsigned __int64& CurrentCleanupTaskField() { return *GetNativePointerField<unsigned __int64*>(this, "UPCGComponent.CurrentCleanupTask"); }
	bool& bIsComponentLocalField() { return *GetNativePointerField<bool*>(this, "UPCGComponent.bIsComponentLocal"); }
	bool& bProceduralInstancesInUseField() { return *GetNativePointerField<bool*>(this, "UPCGComponent.bProceduralInstancesInUse"); }
	bool& bOverrideUseActorComponentlessGenerationField() { return *GetNativePointerField<bool*>(this, "UPCGComponent.bOverrideUseActorComponentlessGeneration"); }
	bool& bUseActorComponentlessGenerationField() { return *GetNativePointerField<bool*>(this, "UPCGComponent.bUseActorComponentlessGeneration"); }
	FPCGSourceDataContainer& SourceDataContainerField() { return *GetNativePointerField<FPCGSourceDataContainer*>(this, "UPCGComponent.SourceDataContainer"); }
	FPCGComponentExecutionState& ExecutionStateField() { return *GetNativePointerField<FPCGComponentExecutionState*>(this, "UPCGComponent.ExecutionState"); }
	bool IsPartitioned() { return NativeCall<bool>(this, "UPCGComponent.IsPartitioned()"); }
	void ClearPerPinGeneratedOutput() { NativeCall<void>(this, "UPCGComponent.ClearPerPinGeneratedOutput()"); }
	void PostInitProperties() { NativeCall<void>(this, "UPCGComponent.PostInitProperties()"); }
	void Generate_Implementation(bool bForce) { NativeCall<void, bool>(this, "UPCGComponent.Generate_Implementation(bool)", bForce); }
	void ClearGraphGeneratedOutput(bool bClearLoadedPreviewData) { NativeCall<void, bool>(this, "UPCGComponent.ClearGraphGeneratedOutput(bool)", bClearLoadedPreviewData); }
	unsigned __int64 GenerateLocalGetTaskId(EPCGComponentGenerationTrigger RequestedGenerationTrigger, bool bForce, unsigned int Grid) { return NativeCall<unsigned __int64, EPCGComponentGenerationTrigger, bool, unsigned int>(this, "UPCGComponent.GenerateLocalGetTaskId(EPCGComponentGenerationTrigger,bool,unsignedint)", RequestedGenerationTrigger, bForce, Grid); }
	UPCGData* GetActorPCGData() { return NativeCall<UPCGData*>(this, "UPCGComponent.GetActorPCGData()"); }
	unsigned __int64 GenerateLocalGetTaskId(bool bForce) { return NativeCall<unsigned __int64, bool>(this, "UPCGComponent.GenerateLocalGetTaskId(bool)", bForce); }
	UPCGData* CreateLandscapePCGData(bool bHeightOnly) { return NativeCall<UPCGData*, bool>(this, "UPCGComponent.CreateLandscapePCGData(bool)", bHeightOnly); }
	UObject* _getUObject() { return NativeCall<UObject*>(this, "UPCGComponent._getUObject()"); }
	void Serialize(FArchive& Ar) { NativeCall<void, FArchive&>(this, "UPCGComponent.Serialize(FArchive&)", Ar); }
	void OnRegister() { NativeCall<void>(this, "UPCGComponent.OnRegister()"); }
	void CancelGeneration() { NativeCall<void>(this, "UPCGComponent.CancelGeneration()"); }
	UPCGData* GetInputPCGData() { return NativeCall<UPCGData*>(this, "UPCGComponent.GetInputPCGData()"); }
	void EndPlay(EEndPlayReason::Type EndPlayReason) { NativeCall<void, EEndPlayReason::Type>(this, "UPCGComponent.EndPlay(EEndPlayReason::Type)", EndPlayReason); }
	void BeginPlay() { NativeCall<void>(this, "UPCGComponent.BeginPlay()"); }
	UPCGGraph* GetGraph() { return NativeCall<UPCGGraph*>(this, "UPCGComponent.GetGraph()"); }
	void AddComponentsToManagedResources(const TArray<UActorComponent*, TSizedDefaultAllocator<32> >& InComponents) { NativeCall<void, const TArray<UActorComponent*, TSizedDefaultAllocator<32> >&>(this, "UPCGComponent.AddComponentsToManagedResources(TArray<UActorComponent*,TSizedDefaultAllocator<32>>&)", InComponents); }
	unsigned __int64 CreateGenerateTask(bool bForce, const TArray<unsigned __int64, TSizedDefaultAllocator<32> >& Dependencies) { return NativeCall<unsigned __int64, bool, const TArray<unsigned __int64, TSizedDefaultAllocator<32> >&>(this, "UPCGComponent.CreateGenerateTask(bool,TArray<unsigned__int64,TSizedDefaultAllocator<32>>&)", bForce, Dependencies); }
	UPCGData* CreateInputPCGData() { return NativeCall<UPCGData*>(this, "UPCGComponent.CreateInputPCGData()"); }
	void PostLoad() { NativeCall<void>(this, "UPCGComponent.PostLoad()"); }
	UPCGData* GetLandscapeHeightPCGData() { return NativeCall<UPCGData*>(this, "UPCGComponent.GetLandscapeHeightPCGData()"); }
	bool NeedsLoadForTargetPlatform(const ITargetPlatform* TargetPlatform) { return NativeCall<bool, const ITargetPlatform*>(this, "UPCGComponent.NeedsLoadForTargetPlatform(ITargetPlatform*)", TargetPlatform); }
	bool IsEditorOnly() { return NativeCall<bool>(this, "UPCGComponent.IsEditorOnly()"); }
	void CleanupLocalImmediate(bool bRemoveComponents, bool bCleanupLocalComponents) { NativeCall<void, bool, bool>(this, "UPCGComponent.CleanupLocalImmediate(bool,bool)", bRemoveComponents, bCleanupLocalComponents); }
	bool Use2DGrid() { return NativeCall<bool>(this, "UPCGComponent.Use2DGrid()"); }
	void SetGraphInterfaceLocal(UPCGGraphInterface* InGraphInterface) { NativeCall<void, UPCGGraphInterface*>(this, "UPCGComponent.SetGraphInterfaceLocal(UPCGGraphInterface*)", InGraphInterface); }
	UPCGData* GetLandscapePCGData() { return NativeCall<UPCGData*>(this, "UPCGComponent.GetLandscapePCGData()"); }
	void AddToManagedResources(UPCGManagedResource* InResource) { NativeCall<void, UPCGManagedResource*>(this, "UPCGComponent.AddToManagedResources(UPCGManagedResource*)", InResource); }
	void OnUnregister() { NativeCall<void>(this, "UPCGComponent.OnUnregister()"); }
	AActor* ClearPCGLink(const FPCGMoveResourceParams& InParams) { return NativeCall<AActor*, const FPCGMoveResourceParams&>(this, "UPCGComponent.ClearPCGLink(FPCGMoveResourceParams&)", InParams); }
	void OnComponentDestroyed(bool bDestroyingHierarchy) { NativeCall<void, bool>(this, "UPCGComponent.OnComponentDestroyed(bool)", bDestroyingHierarchy); }
	unsigned __int64 GenerateInternal(bool bForce, unsigned int Grid, EPCGComponentGenerationTrigger RequestedGenerationTrigger, const TArray<unsigned __int64, TSizedDefaultAllocator<32> >& Dependencies) { return NativeCall<unsigned __int64, bool, unsigned int, EPCGComponentGenerationTrigger, const TArray<unsigned __int64, TSizedDefaultAllocator<32> >&>(this, "UPCGComponent.GenerateInternal(bool,unsignedint,EPCGComponentGenerationTrigger,TArray<unsigned__int64,TSizedDefaultAllocator<32>>&)", bForce, Grid, RequestedGenerationTrigger, Dependencies); }
	void SetPropertiesFromOriginal(const UPCGComponent* Original) { NativeCall<void, const UPCGComponent*>(this, "UPCGComponent.SetPropertiesFromOriginal(UPCGComponent*)", Original); }
	UPCGComponent* GetOriginalComponent() { return NativeCall<UPCGComponent*>(this, "UPCGComponent.GetOriginalComponent()"); }
	double GetGenerationRadiusFromGrid(unsigned int Grid) { return NativeCall<double, unsigned int>(this, "UPCGComponent.GetGenerationRadiusFromGrid(unsignedint)", Grid); }
	double GetCleanupRadiusFromGrid(unsigned int Grid) { return NativeCall<double, unsigned int>(this, "UPCGComponent.GetCleanupRadiusFromGrid(unsignedint)", Grid); }
	bool MoveResourcesToNewActor(const FPCGMoveResourceParams& Params, bool bCreateChild) { return NativeCall<bool, const FPCGMoveResourceParams&, bool>(this, "UPCGComponent.MoveResourcesToNewActor(FPCGMoveResourceParams&,bool)", Params, bCreateChild); }
	void ExecutePreGraph(FPCGContext* InContext) { NativeCall<void, FPCGContext*>(this, "UPCGComponent.ExecutePreGraph(FPCGContext*)", InContext); }
	void AddActorsToManagedResources(const TArray<AActor*, TSizedDefaultAllocator<32> >& InActors) { NativeCall<void, const TArray<AActor*, TSizedDefaultAllocator<32> >&>(this, "UPCGComponent.AddActorsToManagedResources(TArray<AActor*,TSizedDefaultAllocator<32>>&)", InActors); }
	void Cleanup_Implementation(bool bRemoveComponents) { NativeCall<void, bool>(this, "UPCGComponent.Cleanup_Implementation(bool)", bRemoveComponents); }
	unsigned __int64 CreateCleanupTask(bool bRemoveComponents, const TArray<unsigned __int64, TSizedDefaultAllocator<32> >& Dependencies) { return NativeCall<unsigned __int64, bool, const TArray<unsigned __int64, TSizedDefaultAllocator<32> >&>(this, "UPCGComponent.CreateCleanupTask(bool,TArray<unsigned__int64,TSizedDefaultAllocator<32>>&)", bRemoveComponents, Dependencies); }
	static UPCGData* CreateActorPCGData(AActor* Actor, const UPCGComponent* Component, bool bParseActor) { return NativeCall<UPCGData*, AActor*, const UPCGComponent*, bool>(nullptr, "UPCGComponent.CreateActorPCGData(AActor*,UPCGComponent*,bool)", Actor, Component, bParseActor); }
	void GenerateLocal(bool bForce) { NativeCall<void, bool>(this, "UPCGComponent.GenerateLocal(bool)", bForce); }
	bool UseActorComponentlessGeneration() { return NativeCall<bool>(this, "UPCGComponent.UseActorComponentlessGeneration()"); }
	UPCGData* GetPCGData() { return NativeCall<UPCGData*>(this, "UPCGComponent.GetPCGData()"); }
	UPCGData* GetOriginalActorPCGData() { return NativeCall<UPCGData*>(this, "UPCGComponent.GetOriginalActorPCGData()"); }
	void BeginDestroy() { NativeCall<void>(this, "UPCGComponent.BeginDestroy()"); }
	unsigned __int64 CleanupLocal(bool bRemoveComponents, const TArray<unsigned __int64, TSizedDefaultAllocator<32> >& Dependencies) { return NativeCall<unsigned __int64, bool, const TArray<unsigned __int64, TSizedDefaultAllocator<32> >&>(this, "UPCGComponent.CleanupLocal(bool,TArray<unsigned__int64,TSizedDefaultAllocator<32>>&)", bRemoveComponents, Dependencies); }
	void Generate(bool bForce) { NativeCall<void, bool>(this, "UPCGComponent.Generate(bool)", bForce); }
	void SetGraph_Implementation(UPCGGraphInterface* InGraph) { NativeCall<void, UPCGGraphInterface*>(this, "UPCGComponent.SetGraph_Implementation(UPCGGraphInterface*)", InGraph); }
	void OnProcessGraphAborted(bool bQuiet, bool bCleanupUnusedResources) { NativeCall<void, bool, bool>(this, "UPCGComponent.OnProcessGraphAborted(bool,bool)", bQuiet, bCleanupUnusedResources); }
	void PostCleanupGraph(bool bRemoveComponents) { NativeCall<void, bool>(this, "UPCGComponent.PostCleanupGraph(bool)", bRemoveComponents); }
	void RefreshSchedulingPolicy() { NativeCall<void>(this, "UPCGComponent.RefreshSchedulingPolicy()"); }
};
