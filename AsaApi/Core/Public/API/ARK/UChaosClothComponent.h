#pragma once
#include "BulkForward.h"
#include "USkinnedMeshComponent.h"

struct UChaosClothComponent : public USkinnedMeshComponent
{
public:
	UChaosClothComponent() = delete;
	~UChaosClothComponent() = delete;
	UChaosClothComponent(const UChaosClothComponent&) = delete;
	UChaosClothComponent& operator=(const UChaosClothComponent&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UChaosClothComponent"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UChaosClothComponent"); }

	FChaosClothComponentEndTickFunction& EndTickFunctionField() { return *GetNativePointerField<FChaosClothComponentEndTickFunction*>(this, "UChaosClothComponent.EndTickFunction"); }
	FDataflowSimulationAsset& SimulationAssetField() { return *GetNativePointerField<FDataflowSimulationAsset*>(this, "UChaosClothComponent.SimulationAsset"); }
	float& BlendWeightField() { return *GetNativePointerField<float*>(this, "UChaosClothComponent.BlendWeight"); }
	float& ClothGeometryScaleField() { return *GetNativePointerField<float*>(this, "UChaosClothComponent.ClothGeometryScale"); }
	TWeakObjectPtr<UChaosClothComponent, FWeakObjectPtr>& LeaderClothComponentField() { return *GetNativePointerField<TWeakObjectPtr<UChaosClothComponent, FWeakObjectPtr>*>(this, "UChaosClothComponent.LeaderClothComponent"); }
	float& TeleportDistanceThresholdField() { return *GetNativePointerField<float*>(this, "UChaosClothComponent.TeleportDistanceThreshold"); }
	float& TeleportRotationThresholdField() { return *GetNativePointerField<float*>(this, "UChaosClothComponent.TeleportRotationThreshold"); }
	float& ClothTeleportDistThresholdSquaredField() { return *GetNativePointerField<float*>(this, "UChaosClothComponent.ClothTeleportDistThresholdSquared"); }
	float& ClothTeleportCosineThresholdInRadField() { return *GetNativePointerField<float*>(this, "UChaosClothComponent.ClothTeleportCosineThresholdInRad"); }
	EClothingTeleportMode& ClothTeleportModeField() { return *GetNativePointerField<EClothingTeleportMode*>(this, "UChaosClothComponent.ClothTeleportMode"); }
	bool& bTeleportOnceField() { return *GetNativePointerField<bool*>(this, "UChaosClothComponent.bTeleportOnce"); }
	bool& bResetOnceField() { return *GetNativePointerField<bool*>(this, "UChaosClothComponent.bResetOnce"); }
	bool& bHasValidRenderDataForVisibilityField() { return *GetNativePointerField<bool*>(this, "UChaosClothComponent.bHasValidRenderDataForVisibility"); }
	bool& bResetRestLengthsFromMorphTargetField() { return *GetNativePointerField<bool*>(this, "UChaosClothComponent.bResetRestLengthsFromMorphTarget"); }
	FString& ResetRestLengthsMorphTargetNameField() { return *GetNativePointerField<FString*>(this, "UChaosClothComponent.ResetRestLengthsMorphTargetName"); }
	BitFieldValue<bool, unsigned char> bUseAttachedParentAsPoseComponent() { return { this, "UChaosClothComponent.bUseAttachedParentAsPoseComponent"}; }
	BitFieldValue<bool, unsigned char> bWaitForParallelTask() { return { this, "UChaosClothComponent.bWaitForParallelTask"}; }
	BitFieldValue<bool, unsigned char> bEnableSimulation() { return { this, "UChaosClothComponent.bEnableSimulation"}; }
	BitFieldValue<bool, unsigned char> bSuspendSimulation() { return { this, "UChaosClothComponent.bSuspendSimulation"}; }
	BitFieldValue<bool, unsigned char> bBindToLeaderComponent() { return { this, "UChaosClothComponent.bBindToLeaderComponent"}; }
	BitFieldValue<bool, unsigned char> bTeleport() { return { this, "UChaosClothComponent.bTeleport"}; }
	BitFieldValue<bool, unsigned char> bReset() { return { this, "UChaosClothComponent.bReset"}; }
	BitFieldValue<bool, unsigned char> bCollideWithEnvironment() { return { this, "UChaosClothComponent.bCollideWithEnvironment"}; }
	void HandleExistingParallelSimulation() { NativeCall<void>(this, "UChaosClothComponent.HandleExistingParallelSimulation()"); }
	int GetSimulationGroupId(const UChaosClothAssetBase* InAsset, int ModelIndex) { return NativeCall<int, const UChaosClothAssetBase*, int>(this, "UChaosClothComponent.GetSimulationGroupId(UChaosClothAssetBase*,int)", InAsset, ModelIndex); }
	UObject* _getUObject() { return NativeCall<UObject*>(this, "UChaosClothComponent._getUObject()"); }
	TArray<UChaosClothAssetBase const*, TSizedDefaultAllocator<32> >* GetAssets(TArray<UChaosClothAssetBase const*, TSizedDefaultAllocator<32> >* result) { return NativeCall<TArray<UChaosClothAssetBase const*, TSizedDefaultAllocator<32> >*, TArray<UChaosClothAssetBase const*, TSizedDefaultAllocator<32> >*>(this, "UChaosClothComponent.GetAssets()", result); }
	bool HasAnySimulationMeshData(int LODIndex) { return NativeCall<bool, int>(this, "UChaosClothComponent.HasAnySimulationMeshData(int)", LODIndex); }
	void OnRegister() { NativeCall<void>(this, "UChaosClothComponent.OnRegister()"); }
	const USkinnedMeshComponent& GetOwnerComponent() { return NativeCall<const USkinnedMeshComponent&>(this, "UChaosClothComponent.GetOwnerComponent()"); }
	void SetComponentTickEnabled(bool bEnabled) { NativeCall<void, bool>(this, "UChaosClothComponent.SetComponentTickEnabled(bool)", bEnabled); }
	bool IsVisible() { return NativeCall<bool>(this, "UChaosClothComponent.IsVisible()"); }
	void UnregisterOnBoneTransformsFinalizedDelegate(const FDelegateHandle& DelegateHandle) { NativeCall<void, const FDelegateHandle&>(this, "UChaosClothComponent.UnregisterOnBoneTransformsFinalizedDelegate(FDelegateHandle&)", DelegateHandle); }
	bool ShouldWaitForParallelSimulationInTickComponent() { return NativeCall<bool>(this, "UChaosClothComponent.ShouldWaitForParallelSimulationInTickComponent()"); }
	bool RequiresPreEndOfFrameSync() { return NativeCall<bool>(this, "UChaosClothComponent.RequiresPreEndOfFrameSync()"); }
	void BuildSimulationProxy() { NativeCall<void>(this, "UChaosClothComponent.BuildSimulationProxy()"); }
	void PostDuplicate(bool bDuplicateForPIE) { NativeCall<void, bool>(this, "UChaosClothComponent.PostDuplicate(bool)", bDuplicateForPIE); }
	void UpdateVisibility() { NativeCall<void>(this, "UChaosClothComponent.UpdateVisibility()"); }
	void RecreateClothSimulationProxy() { NativeCall<void>(this, "UChaosClothComponent.RecreateClothSimulationProxy()"); }
	void FinalizeBoneTransform() { NativeCall<void>(this, "UChaosClothComponent.FinalizeBoneTransform()"); }
	bool IsSimulationSuspended() { return NativeCall<bool>(this, "UChaosClothComponent.IsSimulationSuspended()"); }
	void ResetConfigProperties() { NativeCall<void>(this, "UChaosClothComponent.ResetConfigProperties()"); }
	const FReferenceSkeleton* GetReferenceSkeleton() { return NativeCall<const FReferenceSkeleton*>(this, "UChaosClothComponent.GetReferenceSkeleton()"); }
	UChaosClothAssetInteractor* GetClothOutfitInteractor(int ModelIndex, FName ClothSimulationModelName) { return NativeCall<UChaosClothAssetInteractor*, int, FName>(this, "UChaosClothComponent.GetClothOutfitInteractor(int,FName)", ModelIndex, ClothSimulationModelName); }
	FString* GetSimulationName(FString* result) { return NativeCall<FString*, FString*>(this, "UChaosClothComponent.GetSimulationName()", result); }
	bool IsSimulationEnabled() { return NativeCall<bool>(this, "UChaosClothComponent.IsSimulationEnabled()"); }
	void PreProcessSimulation(float DeltaTime) { NativeCall<void, float>(this, "UChaosClothComponent.PreProcessSimulation(float)", DeltaTime); }
	void WriteToSimulation(float DeltaTime, bool bAsyncTask) { NativeCall<void, float, bool>(this, "UChaosClothComponent.WriteToSimulation(float,bool)", DeltaTime, bAsyncTask); }
	void RefreshBoneTransforms(FActorComponentTickFunction* __formal) { NativeCall<void, FActorComponentTickFunction*>(this, "UChaosClothComponent.RefreshBoneTransforms(FActorComponentTickFunction*)", __formal); }
	EClothingTeleportMode GetClothTeleportMode() { return NativeCall<EClothingTeleportMode>(this, "UChaosClothComponent.GetClothTeleportMode()"); }
	const FString& GetRestLengthsMorphTargetName() { return NativeCall<const FString&>(this, "UChaosClothComponent.GetRestLengthsMorphTargetName()"); }
	void PostProcessSimulation(float __formal) { NativeCall<void, float>(this, "UChaosClothComponent.PostProcessSimulation(float)", __formal); }
	void OnAttachmentChanged() { NativeCall<void>(this, "UChaosClothComponent.OnAttachmentChanged()"); }
	void GetAdditionalRequiredBonesForLeader(int LeaderLODIndex, TArray<unsigned short, TSizedDefaultAllocator<32> >& InOutRequiredBones) { NativeCall<void, int, TArray<unsigned short, TSizedDefaultAllocator<32> >&>(this, "UChaosClothComponent.GetAdditionalRequiredBonesForLeader(int,TArray<unsignedshort,TSizedDefaultAllocator<32>>&)", LeaderLODIndex, InOutRequiredBones); }
	void OnUnregister() { NativeCall<void>(this, "UChaosClothComponent.OnUnregister()"); }
	void UpdateComponentSpaceTransforms() { NativeCall<void>(this, "UChaosClothComponent.UpdateComponentSpaceTransforms()"); }
	void ResetSimulationProxy() { NativeCall<void>(this, "UChaosClothComponent.ResetSimulationProxy()"); }
	void SetSkinnedAssetAndUpdate(USkinnedAsset* InSkinnedAsset, bool bReinitPose) { NativeCall<void, USkinnedAsset*, bool>(this, "UChaosClothComponent.SetSkinnedAssetAndUpdate(USkinnedAsset*,bool)", InSkinnedAsset, bReinitPose); }
	void ClearPropertyCollectionsDirtyFlags(int LODIndex) { NativeCall<void, int>(this, "UChaosClothComponent.ClearPropertyCollectionsDirtyFlags(int)", LODIndex); }
	void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) { NativeCall<void, float, ELevelTick, FActorComponentTickFunction*>(this, "UChaosClothComponent.TickComponent(float,ELevelTick,FActorComponentTickFunction*)", DeltaTime, TickType, ThisTickFunction); }
	bool NeedsResetRestLengths() { return NativeCall<bool>(this, "UChaosClothComponent.NeedsResetRestLengths()"); }
	bool IsComponentTickEnabled() { return NativeCall<bool>(this, "UChaosClothComponent.IsComponentTickEnabled()"); }
	bool ShouldUseEndTickWait() { return NativeCall<bool>(this, "UChaosClothComponent.ShouldUseEndTickWait()"); }
	UChaosClothAssetBase* GetAsset() { return NativeCall<UChaosClothAssetBase*>(this, "UChaosClothComponent.GetAsset()"); }
	float GetClothGeometryScale() { return NativeCall<float>(this, "UChaosClothComponent.GetClothGeometryScale()"); }
	void RegisterEndTick(bool bRegister) { NativeCall<void, bool>(this, "UChaosClothComponent.RegisterEndTick(bool)", bRegister); }
	void OnPreEndOfFrameSync() { NativeCall<void>(this, "UChaosClothComponent.OnPreEndOfFrameSync()"); }
	void PostLoad() { NativeCall<void>(this, "UChaosClothComponent.PostLoad()"); }
};
