#pragma once
#include "UEObjectForward.h"
#include "BulkForward.h"
#include "UObject.h"

class ULevelStreaming : public UObject
{
public:
	ULevelStreaming() = delete;
	~ULevelStreaming() = delete;
	ULevelStreaming(const ULevelStreaming&) = delete;
	ULevelStreaming& operator=(const ULevelStreaming&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("ULevelStreaming"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("ULevelStreaming"); }
	int& StreamingPriorityField() { return *GetNativePointerField<int*>(this, "ULevelStreaming.StreamingPriority"); }
	FName& PackageNameToLoadField() { return *GetNativePointerField<FName*>(this, "ULevelStreaming.PackageNameToLoad"); }
	TArray<FName, TSizedDefaultAllocator<32> >& LODPackageNamesField() { return *GetNativePointerField<TArray<FName, TSizedDefaultAllocator<32> >*>(this, "ULevelStreaming.LODPackageNames"); }
	TArray<FName, TSizedDefaultAllocator<32> >& LODPackageNamesToLoadField() { return *GetNativePointerField<TArray<FName, TSizedDefaultAllocator<32> >*>(this, "ULevelStreaming.LODPackageNamesToLoad"); }
	bool& bClientOnlyVisibleField() { return *GetNativePointerField<bool*>(this, "ULevelStreaming.bClientOnlyVisible"); }
	int& LevelLODIndexField() { return *GetNativePointerField<int*>(this, "ULevelStreaming.LevelLODIndex"); }
	FPackagePath& LastAsyncLoadPackagePathField() { return *GetNativePointerField<FPackagePath*>(this, "ULevelStreaming.LastAsyncLoadPackagePath"); }
	TArray<int, TSizedDefaultAllocator<32> >& AsyncRequestIDsField() { return *GetNativePointerField<TArray<int, TSizedDefaultAllocator<32> >*>(this, "ULevelStreaming.AsyncRequestIDs"); }
	FLinearColor& LevelColorField() { return *GetNativePointerField<FLinearColor*>(this, "ULevelStreaming.LevelColor"); }
	float& MinTimeBetweenVolumeUnloadRequestsField() { return *GetNativePointerField<float*>(this, "ULevelStreaming.MinTimeBetweenVolumeUnloadRequests"); }
	double& LastVolumeUnloadRequestTimeField() { return *GetNativePointerField<double*>(this, "ULevelStreaming.LastVolumeUnloadRequestTime"); }
	FLevelStreamingLoadedStatus& OnLevelLoadedField() { return *GetNativePointerField<FLevelStreamingLoadedStatus*>(this, "ULevelStreaming.OnLevelLoaded"); }
	FLevelStreamingLoadedStatus& OnLevelUnloadedField() { return *GetNativePointerField<FLevelStreamingLoadedStatus*>(this, "ULevelStreaming.OnLevelUnloaded"); }
	FLevelStreamingVisibilityStatus& OnLevelShownField() { return *GetNativePointerField<FLevelStreamingVisibilityStatus*>(this, "ULevelStreaming.OnLevelShown"); }
	FLevelStreamingVisibilityStatus& OnLevelHiddenField() { return *GetNativePointerField<FLevelStreamingVisibilityStatus*>(this, "ULevelStreaming.OnLevelHidden"); }
	bool& bEnableTileStreamingField() { return *GetNativePointerField<bool*>(this, "ULevelStreaming.bEnableTileStreaming"); }
	FName& CachedWorldAssetPackageFNameField() { return *GetNativePointerField<FName*>(this, "ULevelStreaming.CachedWorldAssetPackageFName"); }
	FName& CachedLoadedLevelPackageNameField() { return *GetNativePointerField<FName*>(this, "ULevelStreaming.CachedLoadedLevelPackageName"); }
	FNetLevelVisibilityState& NetVisibilityStateField() { return *GetNativePointerField<FNetLevelVisibilityState*>(this, "ULevelStreaming.NetVisibilityState"); }
	bool& bHasHadMapActorsDestroyedByActorChannelField() { return *GetNativePointerField<bool*>(this, "ULevelStreaming.bHasHadMapActorsDestroyedByActorChannel"); }
	BitFieldValue<bool, unsigned __int32> bLevelStreamingVisibilityOnly() { return { this, "ULevelStreaming.bLevelStreamingVisibilityOnly"}; }
	BitFieldValue<bool, unsigned __int32> bLevelStreamingDesiredVisibility() { return { this, "ULevelStreaming.bLevelStreamingDesiredVisibility"}; }
	BitFieldValue<bool, unsigned __int32> bHasLoadRequestPending() { return { this, "ULevelStreaming.bHasLoadRequestPending"}; }
	BitFieldValue<bool, unsigned char> bIsRequestingUnloadAndRemoval() { return { this, "ULevelStreaming.bIsRequestingUnloadAndRemoval"}; }
	BitFieldValue<bool, unsigned char> bHasCachedWorldAssetPackageFName() { return { this, "ULevelStreaming.bHasCachedWorldAssetPackageFName"}; }
	BitFieldValue<bool, unsigned char> bHasCachedLoadedLevelPackageName() { return { this, "ULevelStreaming.bHasCachedLoadedLevelPackageName"}; }
	BitFieldValue<bool, unsigned char> bShouldBeVisible() { return { this, "ULevelStreaming.bShouldBeVisible"}; }
	BitFieldValue<bool, unsigned char> bShouldBeLoaded() { return { this, "ULevelStreaming.bShouldBeLoaded"}; }
	BitFieldValue<bool, unsigned char> bSkipClientUseMakingInvisibleTransactionRequest() { return { this, "ULevelStreaming.bSkipClientUseMakingInvisibleTransactionRequest"}; }
	BitFieldValue<bool, unsigned char> bSkipClientUseMakingVisibleTransactionRequest() { return { this, "ULevelStreaming.bSkipClientUseMakingVisibleTransactionRequest"}; }
	BitFieldValue<bool, unsigned char> bLocked() { return { this, "ULevelStreaming.bLocked"}; }
	BitFieldValue<bool, unsigned char> bIsStatic() { return { this, "ULevelStreaming.bIsStatic"}; }
	BitFieldValue<bool, unsigned char> bShouldBlockOnLoad() { return { this, "ULevelStreaming.bShouldBlockOnLoad"}; }
	BitFieldValue<bool, unsigned char> bShouldBlockOnUnload() { return { this, "ULevelStreaming.bShouldBlockOnUnload"}; }
	BitFieldValue<bool, unsigned char> bDisableDistanceStreaming() { return { this, "ULevelStreaming.bDisableDistanceStreaming"}; }
	BitFieldValue<bool, unsigned char> bDrawOnLevelStatusMap() { return { this, "ULevelStreaming.bDrawOnLevelStatusMap"}; }
	BitFieldValue<bool, unsigned char> bGarbageCollectionClusteringEnabled() { return { this, "ULevelStreaming.bGarbageCollectionClusteringEnabled"}; }
	bool ShouldRequireFullVisibilityToRender() { return NativeCall<bool>(this, "ULevelStreaming.ShouldRequireFullVisibilityToRender()"); }
	ULevelStreaming* CreateInstance(const FString& InstanceUniqueName) { return NativeCall<ULevelStreaming*, const FString&>(this, "ULevelStreaming.CreateInstance(FString&)", InstanceUniqueName); }
	const IWorldPartitionCell* GetWorldPartitionCell() { return NativeCall<const IWorldPartitionCell*>(this, "ULevelStreaming.GetWorldPartitionCell()"); }
	bool ShouldClientUseMakingInvisibleTransactionRequest() { return NativeCall<bool>(this, "ULevelStreaming.ShouldClientUseMakingInvisibleTransactionRequest()"); }
	void Serialize(FArchive& Ar) { NativeCall<void, FArchive&>(this, "ULevelStreaming.Serialize(FArchive&)", Ar); }
	void SetLevelVisibility(bool bVisible, bool bIsLowMemory) { NativeCall<void, bool, bool>(this, "ULevelStreaming.SetLevelVisibility(bool,bool)", bVisible, bIsLowMemory); }
	static bool AllowIncrementalRemovalWhilePendingVisibility() { return NativeCall<bool>(nullptr, "ULevelStreaming.AllowIncrementalRemovalWhilePendingVisibility()"); }
	static bool DefaultAllowClientUseMakingInvisibleTransactionRequests() { return NativeCall<bool>(nullptr, "ULevelStreaming.DefaultAllowClientUseMakingInvisibleTransactionRequests()"); }
	bool CanReplicateStreamingStatus() { return NativeCall<bool>(this, "ULevelStreaming.CanReplicateStreamingStatus()"); }
	bool RequestVisibilityChange(bool bVisible) { return NativeCall<bool, bool>(this, "ULevelStreaming.RequestVisibilityChange(bool)", bVisible); }
	bool UpdateTargetState() { return NativeCall<bool>(this, "ULevelStreaming.UpdateTargetState()"); }
	void SetPriorityOverride(int PriorityOverride) { NativeCall<void, int>(this, "ULevelStreaming.SetPriorityOverride(int)", PriorityOverride); }
	void DiscardPendingUnloadLevel(UWorld* PersistentWorld) { NativeCall<void, UWorld*>(this, "ULevelStreaming.DiscardPendingUnloadLevel(UWorld*)", PersistentWorld); }
	static void BroadcastLevelVisibleStatus(UWorld* PersistentWorld, FName LevelPackageName, bool bVisible) { NativeCall<void, UWorld*, FName, bool>(nullptr, "ULevelStreaming.BroadcastLevelVisibleStatus(UWorld*,FName,bool)", PersistentWorld, LevelPackageName, bVisible); }
	void SetIsRequestingUnloadAndRemoval(bool bInIsRequestingUnloadAndRemoval) { NativeCall<void, bool>(this, "ULevelStreaming.SetIsRequestingUnloadAndRemoval(bool)", bInIsRequestingUnloadAndRemoval); }
	FName GetWorldAssetPackageFName() { using AsaReturnType = FName; alignas(AsaReturnType) unsigned char AsaReturnBytes[sizeof(AsaReturnType)]; auto* AsaReturnPointer = reinterpret_cast<AsaReturnType*>(AsaReturnBytes); auto* AsaReturnedPointer = NativeCall<AsaReturnType*, AsaReturnType*>(this, "ULevelStreaming.GetWorldAssetPackageFName()", AsaReturnPointer); if (AsaReturnedPointer != AsaReturnPointer) throw std::runtime_error("Unexpected native result buffer"); std::unique_ptr<AsaReturnType, void(*)(AsaReturnType*)> AsaReturnOwner(std::launder(AsaReturnPointer), [](AsaReturnType* value) { value->~AsaReturnType(); }); return MoveTemp(*AsaReturnOwner); }
	static ULevelStreaming* FindStreamingLevel(const ULevel* Level) { return NativeCall<ULevelStreaming*, const ULevel*>(nullptr, "ULevelStreaming.FindStreamingLevel(ULevel*)", Level); }
	void SetWorldAssetByPackageName(FName InPackageName) { NativeCall<void, FName>(this, "ULevelStreaming.SetWorldAssetByPackageName(FName)", InPackageName); }
	FString* GetWorldAssetPackageName(FString* result) { return NativeCall<FString*, FString*>(this, "ULevelStreaming.GetWorldAssetPackageName()", result); }
	ALevelScriptActor* GetLevelScriptActor() { return NativeCall<ALevelScriptActor*>(this, "ULevelStreaming.GetLevelScriptActor()"); }
	void ResetPriorityOverride() { NativeCall<void>(this, "ULevelStreaming.ResetPriorityOverride()"); }
	bool ShouldClientUseMakingVisibleTransactionRequest() { return NativeCall<bool>(this, "ULevelStreaming.ShouldClientUseMakingVisibleTransactionRequest()"); }
	bool IsDesiredLevelLoaded() { return NativeCall<bool>(this, "ULevelStreaming.IsDesiredLevelLoaded()"); }
	bool IsLevelVisible() { return NativeCall<bool>(this, "ULevelStreaming.IsLevelVisible()"); }
	void OnLevelLoadedChanged(ULevel* Level) { NativeCall<void, ULevel*>(this, "ULevelStreaming.OnLevelLoadedChanged(ULevel*)", Level); }
	static bool ShouldServerUseMakingVisibleTransactionRequest() { return NativeCall<bool>(nullptr, "ULevelStreaming.ShouldServerUseMakingVisibleTransactionRequest()"); }
	static bool DefaultAllowClientUseMakingVisibleTransactionRequests() { return NativeCall<bool>(nullptr, "ULevelStreaming.DefaultAllowClientUseMakingVisibleTransactionRequests()"); }
	void PostLoad() { NativeCall<void>(this, "ULevelStreaming.PostLoad()"); }
	void SetShouldBeLoaded(bool bInShouldBeLoaded) { NativeCall<void, bool>(this, "ULevelStreaming.SetShouldBeLoaded(bool)", bInShouldBeLoaded); }
	void OnLevelRemoved() { NativeCall<void>(this, "ULevelStreaming.OnLevelRemoved()"); }
	void SetShouldBeVisible(bool bInShouldBeVisible) { NativeCall<void, bool>(this, "ULevelStreaming.SetShouldBeVisible(bool)", bInShouldBeVisible); }
	void BeginClientNetVisibilityRequest(bool bInShouldBeVisible) { NativeCall<void, bool>(this, "ULevelStreaming.BeginClientNetVisibilityRequest(bool)", bInShouldBeVisible); }
	void PrepareLoadedLevel(ULevel* InLevel, UPackage* InLevelPackage, int InPIEInstanceID) { NativeCall<void, ULevel*, UPackage*, int>(this, "ULevelStreaming.PrepareLoadedLevel(ULevel*,UPackage*,int)", InLevel, InLevelPackage, InPIEInstanceID); }
	bool IsStreamingStatePending() { return NativeCall<bool>(this, "ULevelStreaming.IsStreamingStatePending()"); }
	bool ShouldBeAlwaysLoaded() { return NativeCall<bool>(this, "ULevelStreaming.ShouldBeAlwaysLoaded()"); }
	static void RemoveLevelAnnotation(const ULevel* Level) { NativeCall<void, const ULevel*>(nullptr, "ULevelStreaming.RemoveLevelAnnotation(ULevel*)", Level); }
	static bool ShouldReuseUnloadedButStillAroundLevels(const ULevel* InLevel) { return NativeCall<bool, const ULevel*>(nullptr, "ULevelStreaming.ShouldReuseUnloadedButStillAroundLevels(ULevel*)", InLevel); }
	void SetLoadedLevel(ULevel* Level) { NativeCall<void, ULevel*>(this, "ULevelStreaming.SetLoadedLevel(ULevel*)", Level); }
	bool ShouldBeVisible() { return NativeCall<bool>(this, "ULevelStreaming.ShouldBeVisible()"); }
	void OnLevelAdded() { NativeCall<void>(this, "ULevelStreaming.OnLevelAdded()"); }
	UWorld* GetStreamingWorld() { return NativeCall<UWorld*>(this, "ULevelStreaming.GetStreamingWorld()"); }
	bool ShouldBeLoaded() { return NativeCall<bool>(this, "ULevelStreaming.ShouldBeLoaded()"); }
	UWorld* GetWorld() { return NativeCall<UWorld*>(this, "ULevelStreaming.GetWorld()"); }
	void RenameForPIE(int PIEInstanceID, bool bKeepWorldAssetName) { NativeCall<void, int, bool>(this, "ULevelStreaming.RenameForPIE(int,bool)", PIEInstanceID, bKeepWorldAssetName); }
	bool ShouldBlockOnUnload() { return NativeCall<bool>(this, "ULevelStreaming.ShouldBlockOnUnload()"); }
	void SetLevelLODIndex(int LODIndex) { NativeCall<void, int>(this, "ULevelStreaming.SetLevelLODIndex(int)", LODIndex); }
};
