#pragma once
#include "BulkForward.h"
#include "AActor.h"

struct ANavigationData : public AActor
{
public:
	ANavigationData() = delete;
	~ANavigationData() = delete;
	ANavigationData(const ANavigationData&) = delete;
	ANavigationData& operator=(const ANavigationData&) = delete;
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("ANavigationData"); }

	FNavDataConfig& NavDataConfigField() { return *GetNativePointerField<FNavDataConfig*>(this, "ANavigationData.NavDataConfig"); }
	ERuntimeGenerationType& RuntimeGenerationField() { return *GetNativePointerField<ERuntimeGenerationType*>(this, "ANavigationData.RuntimeGeneration"); }
	float& ObservedPathsTickIntervalField() { return *GetNativePointerField<float*>(this, "ANavigationData.ObservedPathsTickInterval"); }
	unsigned int& DataVersionField() { return *GetNativePointerField<unsigned int*>(this, "ANavigationData.DataVersion"); }
	float& NextObservedPathsTickInSecondsField() { return *GetNativePointerField<float*>(this, "ANavigationData.NextObservedPathsTickInSeconds"); }
	unsigned short& NavDataUniqueIDField() { return *GetNativePointerField<unsigned short*>(this, "ANavigationData.NavDataUniqueID"); }
	FNavAgentProperties& NavAgentPropertiesField() { return *GetNativePointerField<FNavAgentProperties*>(this, "ANavigationData.NavAgentProperties"); }
	BitFieldValue<bool, unsigned __int32> bEnableDrawing() { return { this, "ANavigationData.bEnableDrawing"}; }
	BitFieldValue<bool, unsigned __int32> bForceRebuildOnLoad() { return { this, "ANavigationData.bForceRebuildOnLoad"}; }
	BitFieldValue<bool, unsigned __int32> bAutoDestroyWhenNoNavigation() { return { this, "ANavigationData.bAutoDestroyWhenNoNavigation"}; }
	BitFieldValue<bool, unsigned __int32> bCanBeMainNavData() { return { this, "ANavigationData.bCanBeMainNavData"}; }
	BitFieldValue<bool, unsigned __int32> bCanSpawnOnRebuild() { return { this, "ANavigationData.bCanSpawnOnRebuild"}; }
	BitFieldValue<bool, unsigned __int32> bRebuildAtRuntime_DEPRECATED() { return { this, "ANavigationData.bRebuildAtRuntime_DEPRECATED"}; }
	BitFieldValue<bool, unsigned __int32> bRequiresInitialRebuild() { return { this, "ANavigationData.bRequiresInitialRebuild"}; }
	BitFieldValue<bool, unsigned __int32> bRegistered() { return { this, "ANavigationData.bRegistered"}; }
	BitFieldValue<bool, unsigned __int32> bSupportsDefaultAgent() { return { this, "ANavigationData.bSupportsDefaultAgent"}; }
	BitFieldValue<bool, unsigned __int32> bRebuildingSuspended() { return { this, "ANavigationData.bRebuildingSuspended"}; }
	BitFieldValue<bool, unsigned __int32> bReachedSuspendedAreasMaxCount() { return { this, "ANavigationData.bReachedSuspendedAreasMaxCount"}; }
	void CleanUpAndMarkPendingKill() { NativeCall<void>(this, "ANavigationData.CleanUpAndMarkPendingKill()"); }
	int GetNumSuspendedDirtyAreas() { return NativeCall<int>(this, "ANavigationData.GetNumSuspendedDirtyAreas()"); }
	void OnStreamingLevelAdded(ULevel* InLevel, UWorld* InWorld) { NativeCall<void, ULevel*, UWorld*>(this, "ANavigationData.OnStreamingLevelAdded(ULevel*,UWorld*)", InLevel, InWorld); }
	void Destroyed() { NativeCall<void>(this, "ANavigationData.Destroyed()"); }
	void UpdateCustomLink(const INavLinkCustomInterface* CustomLink) { NativeCall<void, const INavLinkCustomInterface*>(this, "ANavigationData.UpdateCustomLink(INavLinkCustomInterface*)", CustomLink); }
	bool DoesSupportAgent(const FNavAgentProperties& AgentProps) { return NativeCall<bool, const FNavAgentProperties&>(this, "ANavigationData.DoesSupportAgent(FNavAgentProperties&)", AgentProps); }
	void CleanUp() { NativeCall<void>(this, "ANavigationData.CleanUp()"); }
	void OnRegistered() { NativeCall<void>(this, "ANavigationData.OnRegistered()"); }
	void TickActor(float DeltaTime, ELevelTick TickType, FActorTickFunction& ThisTickFunction) { NativeCall<void, float, ELevelTick, FActorTickFunction&>(this, "ANavigationData.TickActor(float,ELevelTick,FActorTickFunction&)", DeltaTime, TickType, ThisTickFunction); }
	void LoadBeforeGeneratorRebuild() { NativeCall<void>(this, "ANavigationData.LoadBeforeGeneratorRebuild()"); }
	void OnNavigationBoundsChanged() { NativeCall<void>(this, "ANavigationData.OnNavigationBoundsChanged()"); }
	void OnNavAreaRemoved(const UClass* NavAreaClass) { NativeCall<void, const UClass*>(this, "ANavigationData.OnNavAreaRemoved(UClass*)", NavAreaClass); }
	void RebuildAll() { NativeCall<void>(this, "ANavigationData.RebuildAll()"); }
	double GetWorldTimeStamp() { return NativeCall<double>(this, "ANavigationData.GetWorldTimeStamp()"); }
	void SetSupportsDefaultAgent(bool bIsDefault) { NativeCall<void, bool>(this, "ANavigationData.SetSupportsDefaultAgent(bool)", bIsDefault); }
	void SetConfig(const FNavDataConfig& Src) { NativeCall<void, const FNavDataConfig&>(this, "ANavigationData.SetConfig(FNavDataConfig&)", Src); }
	void PostInitProperties() { NativeCall<void>(this, "ANavigationData.PostInitProperties()"); }
	bool SupportsRuntimeGeneration() { return NativeCall<bool>(this, "ANavigationData.SupportsRuntimeGeneration()"); }
	bool NeedsRebuild() { return NativeCall<bool>(this, "ANavigationData.NeedsRebuild()"); }
	void ConditionalConstructGenerator() { NativeCall<void>(this, "ANavigationData.ConditionalConstructGenerator()"); }
	void CancelBuild() { NativeCall<void>(this, "ANavigationData.CancelBuild()"); }
	void PostInitializeComponents() { NativeCall<void>(this, "ANavigationData.PostInitializeComponents()"); }
	void FillConfig(FNavDataConfig& Dest) { NativeCall<void, FNavDataConfig&>(this, "ANavigationData.FillConfig(FNavDataConfig&)", Dest); }
	UPrimitiveComponent* ConstructRenderingComponent() { return NativeCall<UPrimitiveComponent*>(this, "ANavigationData.ConstructRenderingComponent()"); }
	void OnStreamingNavDataRemoved(ANavigationDataChunkActor& InActor) { NativeCall<void, ANavigationDataChunkActor&>(this, "ANavigationData.OnStreamingNavDataRemoved(ANavigationDataChunkActor&)", InActor); }
	void PostLoad() { NativeCall<void>(this, "ANavigationData.PostLoad()"); }
	void TickAsyncBuild(float DeltaSeconds) { NativeCall<void, float>(this, "ANavigationData.TickAsyncBuild(float)", DeltaSeconds); }
	void OnStreamingLevelRemoved(ULevel* InLevel, UWorld* InWorld) { NativeCall<void, ULevel*, UWorld*>(this, "ANavigationData.OnStreamingLevelRemoved(ULevel*,UWorld*)", InLevel, InWorld); }
	const UClass* GetAreaClass(int AreaID) { return NativeCall<const UClass*, int>(this, "ANavigationData.GetAreaClass(int)", AreaID); }
	void SetRebuildingSuspended(bool bNewSuspend) { NativeCall<void, bool>(this, "ANavigationData.SetRebuildingSuspended(bool)", bNewSuspend); }
	unsigned int LogMemUsed() { return NativeCall<unsigned int>(this, "ANavigationData.LogMemUsed()"); }
	void EnsureBuildCompletion() { NativeCall<void>(this, "ANavigationData.EnsureBuildCompletion()"); }
	void OnNavAreaAdded(const UClass* NavAreaClass, int AgentIndex) { NativeCall<void, const UClass*, int>(this, "ANavigationData.OnNavAreaAdded(UClass*,int)", NavAreaClass, AgentIndex); }
	void OnStreamingNavDataAdded(ANavigationDataChunkActor& InActor) { NativeCall<void, ANavigationDataChunkActor&>(this, "ANavigationData.OnStreamingNavDataAdded(ANavigationDataChunkActor&)", InActor); }
	bool DoesNodeContainLocation(unsigned __int64 NodeRef, const UE::Math::TVector<double>& WorldSpaceLocation) { return NativeCall<bool, unsigned __int64, const UE::Math::TVector<double>&>(this, "ANavigationData.DoesNodeContainLocation(unsigned__int64,UE::Math::TVector<double>&)", NodeRef, WorldSpaceLocation); }
	void FinishBatchQuery() { NativeCall<void>(this, "ANavigationData.FinishBatchQuery()"); }
	static UClass* StaticClass() { return AsaApi::ResolveClass("ANavigationData"); }
	int GetNewAreaID(const UClass* AreaClass) { return NativeCall<int, const UClass*>(this, "ANavigationData.GetNewAreaID(UClass*)", AreaClass); }
	void UnregisterAndCleanUp() { NativeCall<void>(this, "ANavigationData.UnregisterAndCleanUp()"); }
	void BeginBatchQuery() { NativeCall<void>(this, "ANavigationData.BeginBatchQuery()"); }
	void OnUnregistered() { NativeCall<void>(this, "ANavigationData.OnUnregistered()"); }
	void RestrictBuildingToActiveTiles(bool InRestrictBuildingToActiveTiles) { NativeCall<void, bool>(this, "ANavigationData.RestrictBuildingToActiveTiles(bool)", InRestrictBuildingToActiveTiles); }
	void OnNavAreaChanged() { NativeCall<void>(this, "ANavigationData.OnNavAreaChanged()"); }
	void RequestRegistration() { NativeCall<void>(this, "ANavigationData.RequestRegistration()"); }
	bool SupportsStreaming() { return NativeCall<bool>(this, "ANavigationData.SupportsStreaming()"); }
	void EndPlay(EEndPlayReason::Type EndPlayReason) { NativeCall<void, EEndPlayReason::Type>(this, "ANavigationData.EndPlay(EEndPlayReason::Type)", EndPlayReason); }
	bool IsRebuildingSuspended() { return NativeCall<bool>(this, "ANavigationData.IsRebuildingSuspended()"); }
	void PostLoadPreRebuild() { NativeCall<void>(this, "ANavigationData.PostLoadPreRebuild()"); }
	UObject* _getUObject() { return NativeCall<UObject*>(this, "ANavigationData._getUObject()"); }
	void ApplyWorldOffset(const UE::Math::TVector<double>& InOffset, bool bWorldShift) { NativeCall<void, const UE::Math::TVector<double>&, bool>(this, "ANavigationData.ApplyWorldOffset(UE::Math::TVector<double>&,bool)", InOffset, bWorldShift); }
	int GetMaxSupportedAreas() { return NativeCall<int>(this, "ANavigationData.GetMaxSupportedAreas()"); }
	int GetAreaID(const UClass* AreaClass) { return NativeCall<int, const UClass*>(this, "ANavigationData.GetAreaID(UClass*)", AreaClass); }
};
