#pragma once
#include "BulkForward.h"
#include <API/UE/Math/BoxSphereBounds.h>
#include "UMeshComponent.h"

struct USkinnedMeshComponent : public UMeshComponent
{
public:
	USkinnedMeshComponent() = delete;
	~USkinnedMeshComponent() = delete;
	USkinnedMeshComponent(const USkinnedMeshComponent&) = delete;
	USkinnedMeshComponent& operator=(const USkinnedMeshComponent&) = delete;
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("USkinnedMeshComponent"); }

	FActorSkinnedMeshComponentInterface& SkinnedMeshComponentInterfaceField() { return *GetNativePointerField<FActorSkinnedMeshComponentInterface*>(this, "USkinnedMeshComponent.SkinnedMeshComponentInterface"); }
	TWeakObjectPtr<USkinnedMeshComponent, FWeakObjectPtr>& LeaderPoseComponentField() { return *GetNativePointerField<TWeakObjectPtr<USkinnedMeshComponent, FWeakObjectPtr>*>(this, "USkinnedMeshComponent.LeaderPoseComponent"); }
	TArray<ESkinCacheUsage, TSizedDefaultAllocator<32> >& SkinCacheUsageField() { return *GetNativePointerField<TArray<ESkinCacheUsage, TSizedDefaultAllocator<32> >*>(this, "USkinnedMeshComponent.SkinCacheUsage"); }
	bool& bSetMeshDeformerField() { return *GetNativePointerField<bool*>(this, "USkinnedMeshComponent.bSetMeshDeformer"); }
	bool& bAlwaysUseMeshDeformerField() { return *GetNativePointerField<bool*>(this, "USkinnedMeshComponent.bAlwaysUseMeshDeformer"); }
	FMeshDeformerInstanceSet& MeshDeformerInstancesField() { return *GetNativePointerField<FMeshDeformerInstanceSet*>(this, "USkinnedMeshComponent.MeshDeformerInstances"); }
	TArray<unsigned char, TSizedDefaultAllocator<32> >& PreviousBoneVisibilityStatesField() { return *GetNativePointerField<TArray<unsigned char, TSizedDefaultAllocator<32> >*>(this, "USkinnedMeshComponent.PreviousBoneVisibilityStates"); }
	float& LastStreamerUpdateBoundsRadiusField() { return *GetNativePointerField<float*>(this, "USkinnedMeshComponent.LastStreamerUpdateBoundsRadius"); }
	int& CurrentEditableComponentTransformsField() { return *GetNativePointerField<int*>(this, "USkinnedMeshComponent.CurrentEditableComponentTransforms"); }
	int& CurrentReadComponentTransformsField() { return *GetNativePointerField<int*>(this, "USkinnedMeshComponent.CurrentReadComponentTransforms"); }
	unsigned int& PreviousBoneTransformRevisionNumberField() { return *GetNativePointerField<unsigned int*>(this, "USkinnedMeshComponent.PreviousBoneTransformRevisionNumber"); }
	unsigned int& CurrentBoneTransformRevisionNumberField() { return *GetNativePointerField<unsigned int*>(this, "USkinnedMeshComponent.CurrentBoneTransformRevisionNumber"); }
	unsigned int& CurrentBoneTransformFrameField() { return *GetNativePointerField<unsigned int*>(this, "USkinnedMeshComponent.CurrentBoneTransformFrame"); }
	int& LeaderBoneMapCacheCountField() { return *GetNativePointerField<int*>(this, "USkinnedMeshComponent.LeaderBoneMapCacheCount"); }
	TArray<TWeakObjectPtr<USkinnedMeshComponent, FWeakObjectPtr>, TSizedDefaultAllocator<32> >& FollowerPoseComponentsField() { return *GetNativePointerField<TArray<TWeakObjectPtr<USkinnedMeshComponent, FWeakObjectPtr>, TSizedDefaultAllocator<32> >*>(this, "USkinnedMeshComponent.FollowerPoseComponents"); }
	TArray<int, TSizedDefaultAllocator<32> >& LeaderBoneMapField() { return *GetNativePointerField<TArray<int, TSizedDefaultAllocator<32> >*>(this, "USkinnedMeshComponent.LeaderBoneMap"); }
	TArray<float, TSizedDefaultAllocator<32> >& MorphTargetWeightsField() { return *GetNativePointerField<TArray<float, TSizedDefaultAllocator<32> >*>(this, "USkinnedMeshComponent.MorphTargetWeights"); }
	int& ForcedLodModelField() { return *GetNativePointerField<int*>(this, "USkinnedMeshComponent.ForcedLodModel"); }
	int& ForceStreamedLodModelField() { return *GetNativePointerField<int*>(this, "USkinnedMeshComponent.ForceStreamedLodModel"); }
	int& MinLodModelField() { return *GetNativePointerField<int*>(this, "USkinnedMeshComponent.MinLodModel"); }
	int& PredictedLODLevelField() { return *GetNativePointerField<int*>(this, "USkinnedMeshComponent.PredictedLODLevel"); }
	float& MaxDistanceFactorField() { return *GetNativePointerField<float*>(this, "USkinnedMeshComponent.MaxDistanceFactor"); }
	float& StreamingDistanceMultiplierField() { return *GetNativePointerField<float*>(this, "USkinnedMeshComponent.StreamingDistanceMultiplier"); }
	float& NanitePixelProgrammableDistanceField() { return *GetNativePointerField<float*>(this, "USkinnedMeshComponent.NanitePixelProgrammableDistance"); }
	int& WorldPositionOffsetDisableDistanceField() { return *GetNativePointerField<int*>(this, "USkinnedMeshComponent.WorldPositionOffsetDisableDistance"); }
	float& ExternalInterpolationAlphaField() { return *GetNativePointerField<float*>(this, "USkinnedMeshComponent.ExternalInterpolationAlpha"); }
	float& ExternalDeltaTimeField() { return *GetNativePointerField<float*>(this, "USkinnedMeshComponent.ExternalDeltaTime"); }
	ERHIFeatureLevel::Type& CachedSceneFeatureLevelField() { return *GetNativePointerField<ERHIFeatureLevel::Type*>(this, "USkinnedMeshComponent.CachedSceneFeatureLevel"); }
	EVisibilityBasedAnimTickOption& VisibilityBasedAnimTickOptionField() { return *GetNativePointerField<EVisibilityBasedAnimTickOption*>(this, "USkinnedMeshComponent.VisibilityBasedAnimTickOption"); }
	unsigned char& ExternalTickRateField() { return *GetNativePointerField<unsigned char*>(this, "USkinnedMeshComponent.ExternalTickRate"); }
	unsigned char& MaxFirstLODIdxInAttachmentTreeField() { return *GetNativePointerField<unsigned char*>(this, "USkinnedMeshComponent.MaxFirstLODIdxInAttachmentTree"); }
	float& CapsuleIndirectShadowMinVisibilityField() { return *GetNativePointerField<float*>(this, "USkinnedMeshComponent.CapsuleIndirectShadowMinVisibility"); }
	FSkeletalMeshObject*& MeshObjectField() { return *GetNativePointerField<FSkeletalMeshObject**>(this, "USkinnedMeshComponent.MeshObject"); }
	void*& MeshObjectFactoryUserDataField() { return *GetNativePointerField<void**>(this, "USkinnedMeshComponent.MeshObjectFactoryUserData"); }
	FSkeletalMeshObject*& PreviousMeshObjectField() { return *GetNativePointerField<FSkeletalMeshObject**>(this, "USkinnedMeshComponent.PreviousMeshObject"); }
	UE::Math::TBoxSphereBounds<double, double>& CachedWorldOrLocalSpaceBoundsField() { return *GetNativePointerField<UE::Math::TBoxSphereBounds<double, double>*>(this, "USkinnedMeshComponent.CachedWorldOrLocalSpaceBounds"); }
	FAnimUpdateRateParameters*& AnimUpdateRateParamsField() { return *GetNativePointerField<FAnimUpdateRateParameters**>(this, "USkinnedMeshComponent.AnimUpdateRateParams"); }
	float& ForceTickPoseWithinRangeSquaredField() { return *GetNativePointerField<float*>(this, "USkinnedMeshComponent.ForceTickPoseWithinRangeSquared"); }
	float& ShadowedRecentlyRenderedBoundsScaleMultiplierField() { return *GetNativePointerField<float*>(this, "USkinnedMeshComponent.ShadowedRecentlyRenderedBoundsScaleMultiplier"); }
	BitFieldValue<bool, unsigned char> bEvaluateWorldPositionOffset() { return { this, "USkinnedMeshComponent.bEvaluateWorldPositionOffset"}; }
	BitFieldValue<bool, unsigned char> bDisallowNanite() { return { this, "USkinnedMeshComponent.bDisallowNanite"}; }
	BitFieldValue<bool, unsigned char> bForceDisableNanite() { return { this, "USkinnedMeshComponent.bForceDisableNanite"}; }
	BitFieldValue<bool, unsigned char> bHasValidBoneTransform() { return { this, "USkinnedMeshComponent.bHasValidBoneTransform"}; }
	BitFieldValue<bool, unsigned char> bValidMeshPoseTransformsUpToDate() { return { this, "USkinnedMeshComponent.bValidMeshPoseTransformsUpToDate"}; }
	BitFieldValue<bool, unsigned char> bSkinWeightProfileSet() { return { this, "USkinnedMeshComponent.bSkinWeightProfileSet"}; }
	BitFieldValue<bool, unsigned char> bSkinWeightProfilePending() { return { this, "USkinnedMeshComponent.bSkinWeightProfilePending"}; }
	BitFieldValue<bool, unsigned char> bSkinWeightProfileBufferOverridePending() { return { this, "USkinnedMeshComponent.bSkinWeightProfileBufferOverridePending"}; }
	BitFieldValue<bool, unsigned char> bSkinWeightProfileOnRenderThread() { return { this, "USkinnedMeshComponent.bSkinWeightProfileOnRenderThread"}; }
	BitFieldValue<bool, unsigned char> bOverrideMinLod() { return { this, "USkinnedMeshComponent.bOverrideMinLod"}; }
	BitFieldValue<bool, unsigned char> bUseBoundsFromLeaderPoseComponent() { return { this, "USkinnedMeshComponent.bUseBoundsFromLeaderPoseComponent"}; }
	BitFieldValue<bool, unsigned char> bIncludeComponentLocationIntoBounds() { return { this, "USkinnedMeshComponent.bIncludeComponentLocationIntoBounds"}; }
	BitFieldValue<bool, unsigned char> bForceWireframe() { return { this, "USkinnedMeshComponent.bForceWireframe"}; }
	BitFieldValue<bool, unsigned char> bDisableMorphTarget() { return { this, "USkinnedMeshComponent.bDisableMorphTarget"}; }
	BitFieldValue<bool, unsigned char> bHideSkin() { return { this, "USkinnedMeshComponent.bHideSkin"}; }
	BitFieldValue<bool, unsigned char> bPerBoneMotionBlur() { return { this, "USkinnedMeshComponent.bPerBoneMotionBlur"}; }
	BitFieldValue<bool, unsigned char> bComponentUseFixedSkelBounds() { return { this, "USkinnedMeshComponent.bComponentUseFixedSkelBounds"}; }
	BitFieldValue<bool, unsigned char> bConsiderAllBodiesForBounds() { return { this, "USkinnedMeshComponent.bConsiderAllBodiesForBounds"}; }
	BitFieldValue<bool, unsigned char> bSyncAttachParentLOD() { return { this, "USkinnedMeshComponent.bSyncAttachParentLOD"}; }
	BitFieldValue<bool, unsigned char> bCanHighlightSelectedSections() { return { this, "USkinnedMeshComponent.bCanHighlightSelectedSections"}; }
	BitFieldValue<bool, unsigned char> bRecentlyRendered() { return { this, "USkinnedMeshComponent.bRecentlyRendered"}; }
	BitFieldValue<bool, unsigned char> bCastCapsuleDirectShadow() { return { this, "USkinnedMeshComponent.bCastCapsuleDirectShadow"}; }
	BitFieldValue<bool, unsigned char> bCastCapsuleIndirectShadow() { return { this, "USkinnedMeshComponent.bCastCapsuleIndirectShadow"}; }
	BitFieldValue<bool, unsigned char> bCPUSkinning() { return { this, "USkinnedMeshComponent.bCPUSkinning"}; }
	BitFieldValue<bool, unsigned char> bUseScreenRenderStateForUpdate() { return { this, "USkinnedMeshComponent.bUseScreenRenderStateForUpdate"}; }
	BitFieldValue<bool, unsigned char> bEnableUpdateRateOptimizations() { return { this, "USkinnedMeshComponent.bEnableUpdateRateOptimizations"}; }
	BitFieldValue<bool, unsigned char> bDisplayDebugUpdateRateOptimizations() { return { this, "USkinnedMeshComponent.bDisplayDebugUpdateRateOptimizations"}; }
	BitFieldValue<bool, unsigned char> bRenderStatic() { return { this, "USkinnedMeshComponent.bRenderStatic"}; }
	BitFieldValue<bool, unsigned char> bIgnoreLeaderPoseComponentLOD() { return { this, "USkinnedMeshComponent.bIgnoreLeaderPoseComponentLOD"}; }
	BitFieldValue<bool, unsigned char> bSortTriangles() { return { this, "USkinnedMeshComponent.bSortTriangles"}; }
	BitFieldValue<bool, unsigned char> bDoubleBufferedComponentSpaceTransforms() { return { this, "USkinnedMeshComponent.bDoubleBufferedComponentSpaceTransforms"}; }
	BitFieldValue<bool, unsigned char> bNeedToFlipSpaceBaseBuffers() { return { this, "USkinnedMeshComponent.bNeedToFlipSpaceBaseBuffers"}; }
	BitFieldValue<bool, unsigned char> bCachedLocalBoundsUpToDate() { return { this, "USkinnedMeshComponent.bCachedLocalBoundsUpToDate"}; }
	BitFieldValue<bool, unsigned char> bCachedWorldSpaceBoundsUpToDate() { return { this, "USkinnedMeshComponent.bCachedWorldSpaceBoundsUpToDate"}; }
	BitFieldValue<bool, unsigned char> bBoneVisibilityDirty() { return { this, "USkinnedMeshComponent.bBoneVisibilityDirty"}; }
	BitFieldValue<bool, unsigned char> bForceMeshObjectUpdate() { return { this, "USkinnedMeshComponent.bForceMeshObjectUpdate"}; }
	BitFieldValue<bool, unsigned char> bExternalTickRateControlled() { return { this, "USkinnedMeshComponent.bExternalTickRateControlled"}; }
	BitFieldValue<bool, unsigned char> bExternalInterpolate() { return { this, "USkinnedMeshComponent.bExternalInterpolate"}; }
	BitFieldValue<bool, unsigned char> bExternalUpdate() { return { this, "USkinnedMeshComponent.bExternalUpdate"}; }
	BitFieldValue<bool, unsigned char> bExternalEvaluationRateLimited() { return { this, "USkinnedMeshComponent.bExternalEvaluationRateLimited"}; }
	BitFieldValue<bool, unsigned char> bMipLevelCallbackRegistered() { return { this, "USkinnedMeshComponent.bMipLevelCallbackRegistered"}; }
	BitFieldValue<bool, unsigned char> bFollowerShouldTickPose() { return { this, "USkinnedMeshComponent.bFollowerShouldTickPose"}; }
	BitFieldValue<bool, unsigned char> bHasSocketAttachments() { return { this, "USkinnedMeshComponent.bHasSocketAttachments"}; }
	BitFieldValue<bool, unsigned __int32> bForceUpdateKinematic() { return { this, "USkinnedMeshComponent.bForceUpdateKinematic"}; }
	BitFieldValue<bool, unsigned __int32> bChartDistanceFactor() { return { this, "USkinnedMeshComponent.bChartDistanceFactor"}; }
	BitFieldValue<bool, unsigned __int32> bFreeSpaceBasesOnUnregister() { return { this, "USkinnedMeshComponent.bFreeSpaceBasesOnUnregister"}; }
	BitFieldValue<bool, unsigned __int32> bForceTickPoseWithinRange() { return { this, "USkinnedMeshComponent.bForceTickPoseWithinRange"}; }
	BitFieldValue<bool, unsigned __int32> bAlwaysUpdateMeshForShadowRendering() { return { this, "USkinnedMeshComponent.bAlwaysUpdateMeshForShadowRendering"}; }
	BitFieldValue<bool, unsigned __int32> bAddAttachedParentBounds() { return { this, "USkinnedMeshComponent.bAddAttachedParentBounds"}; }
	BitFieldValue<bool, unsigned __int32> bBasedPawnsTriggerChildTick() { return { this, "USkinnedMeshComponent.bBasedPawnsTriggerChildTick"}; }
	BitFieldValue<bool, unsigned __int32> bHasCachedIdentityBoneTransforms() { return { this, "USkinnedMeshComponent.bHasCachedIdentityBoneTransforms"}; }
	UMorphTarget* FindMorphTarget(FName MorphTargetName) { return NativeCall<UMorphTarget*, FName>(this, "USkinnedMeshComponent.FindMorphTarget(FName)", MorphTargetName); }
	void SetForceStreamedLOD(int LODIndex) { NativeCall<void, int>(this, "USkinnedMeshComponent.SetForceStreamedLOD(int)", LODIndex); }
	void AddSlavePoseComponent(USkinnedMeshComponent* SkinnedMeshComponent) { NativeCall<void, USkinnedMeshComponent*>(this, "USkinnedMeshComponent.AddSlavePoseComponent(USkinnedMeshComponent*)", SkinnedMeshComponent); }
	static void GetSocketRequiredBones(const USkinnedAsset* SkinnedAsset, TArray<unsigned short, TSizedDefaultAllocator<32> >& OutRequiredBones, TArray<unsigned short, TSizedDefaultAllocator<32> >& NeededBonesForFillComponentSpaceTransforms) { NativeCall<void, const USkinnedAsset*, TArray<unsigned short, TSizedDefaultAllocator<32> >&, TArray<unsigned short, TSizedDefaultAllocator<32> >&>(nullptr, "USkinnedMeshComponent.GetSocketRequiredBones(USkinnedAsset*,TArray<unsignedshort,TSizedDefaultAllocator<32>>&,TArray<unsignedshort,TSizedDefaultAllocator<32>>&)", SkinnedAsset, OutRequiredBones, NeededBonesForFillComponentSpaceTransforms); }
	bool SetSkinWeightProfileStack(const FSkinWeightProfileStack& InProfileStack) { return NativeCall<bool, const FSkinWeightProfileStack&>(this, "USkinnedMeshComponent.SetSkinWeightProfileStack(FSkinWeightProfileStack&)", InProfileStack); }
	bool IsPlayingRootMotionFromEverything() { return NativeCall<bool>(this, "USkinnedMeshComponent.IsPlayingRootMotionFromEverything()"); }
	int GetForcedLOD() { return NativeCall<int>(this, "USkinnedMeshComponent.GetForcedLOD()"); }
	void UnHideBone(int BoneIndex) { NativeCall<void, int>(this, "USkinnedMeshComponent.UnHideBone(int)", BoneIndex); }
	void RemoveSlavePoseComponent(USkinnedMeshComponent* SkinnedMeshComponent) { NativeCall<void, USkinnedMeshComponent*>(this, "USkinnedMeshComponent.RemoveSlavePoseComponent(USkinnedMeshComponent*)", SkinnedMeshComponent); }
	void InitLODInfos() { NativeCall<void>(this, "USkinnedMeshComponent.InitLODInfos()"); }
	void UpdateVisualizeLODString(FString& DebugString) { NativeCall<void, FString&>(this, "USkinnedMeshComponent.UpdateVisualizeLODString(FString&)", DebugString); }
	static void MergeInBoneIndexArrays(TArray<unsigned short, TSizedDefaultAllocator<32> >& BaseArray, const TArray<unsigned short, TSizedDefaultAllocator<32> >& InsertArray) { NativeCall<void, TArray<unsigned short, TSizedDefaultAllocator<32> >&, const TArray<unsigned short, TSizedDefaultAllocator<32> >&>(nullptr, "USkinnedMeshComponent.MergeInBoneIndexArrays(TArray<unsignedshort,TSizedDefaultAllocator<32>>&,TArray<unsignedshort,TSizedDefaultAllocator<32>>&)", BaseArray, InsertArray); }
	void GetPreSkinnedLocalBounds(UE::Math::TBoxSphereBounds<double, double>& OutBounds) { NativeCall<void, UE::Math::TBoxSphereBounds<double, double>&>(this, "USkinnedMeshComponent.GetPreSkinnedLocalBounds(UE::Math::TBoxSphereBounds<double,double>&)", OutBounds); }
	bool AreBoneTransformsValid() { return NativeCall<bool>(this, "USkinnedMeshComponent.AreBoneTransformsValid()"); }
	void OnChildDetached(USceneComponent* ChildComponent) { NativeCall<void, USceneComponent*>(this, "USkinnedMeshComponent.OnChildDetached(USceneComponent*)", ChildComponent); }
	void UpdateBounds() { NativeCall<void>(this, "USkinnedMeshComponent.UpdateBounds()"); }
	float GetStreamingScale() { return NativeCall<float>(this, "USkinnedMeshComponent.GetStreamingScale()"); }
	int ComputeMinLOD() { return NativeCall<int>(this, "USkinnedMeshComponent.ComputeMinLOD()"); }
	int GetForceRenderedLOD() { return NativeCall<int>(this, "USkinnedMeshComponent.GetForceRenderedLOD()"); }
	void UpdateBoneTransformRevisionNumber() { NativeCall<void>(this, "USkinnedMeshComponent.UpdateBoneTransformRevisionNumber()"); }
	const USkeletalMeshSocket* GetSocketByName(FName InSocketName) { return NativeCall<const USkeletalMeshSocket*, FName>(this, "USkinnedMeshComponent.GetSocketByName(FName)", InSocketName); }
	bool AllocateTransformData() { return NativeCall<bool>(this, "USkinnedMeshComponent.AllocateTransformData()"); }
	void PostLoad() { NativeCall<void>(this, "USkinnedMeshComponent.PostLoad()"); }
	static void GetPhysicsRequiredBones(const USkinnedAsset* SkinnedAsset, const UPhysicsAsset* PhysicsAsset, TArray<unsigned short, TSizedDefaultAllocator<32> >& OutRequiredBones) { NativeCall<void, const USkinnedAsset*, const UPhysicsAsset*, TArray<unsigned short, TSizedDefaultAllocator<32> >&>(nullptr, "USkinnedMeshComponent.GetPhysicsRequiredBones(USkinnedAsset*,UPhysicsAsset*,TArray<unsignedshort,TSizedDefaultAllocator<32>>&)", SkinnedAsset, PhysicsAsset, OutRequiredBones); }
	void SetMeshDeformer(bool bInSetMeshDeformer, UMeshDeformer* InMeshDeformer) { NativeCall<void, bool, UMeshDeformer*>(this, "USkinnedMeshComponent.SetMeshDeformer(bool,UMeshDeformer*)", bInSetMeshDeformer, InMeshDeformer); }
	bool ShouldNaniteSkin() { return NativeCall<bool>(this, "USkinnedMeshComponent.ShouldNaniteSkin()"); }
	void SetSkinnedAssetAndUpdate(USkinnedAsset* InSkinnedAsset, bool __formal) { NativeCall<void, USkinnedAsset*, bool>(this, "USkinnedMeshComponent.SetSkinnedAssetAndUpdate(USkinnedAsset*,bool)", InSkinnedAsset, __formal); }
	int GetNumMaterials() { return NativeCall<int>(this, "USkinnedMeshComponent.GetNumMaterials()"); }
	void UpdateMorphMaterialUsageOnProxy() { NativeCall<void>(this, "USkinnedMeshComponent.UpdateMorphMaterialUsageOnProxy()"); }
	UPhysicsAsset* GetPhysicsAsset() { return NativeCall<UPhysicsAsset*>(this, "USkinnedMeshComponent.GetPhysicsAsset()"); }
	bool HasValidNaniteData() { return NativeCall<bool>(this, "USkinnedMeshComponent.HasValidNaniteData()"); }
	void PostApplyToComponent() { NativeCall<void>(this, "USkinnedMeshComponent.PostApplyToComponent()"); }
	bool IsPlayingRootMotion() { return NativeCall<bool>(this, "USkinnedMeshComponent.IsPlayingRootMotion()"); }
	void DeallocateTransformData() { NativeCall<void>(this, "USkinnedMeshComponent.DeallocateTransformData()"); }
	void ClearMotionVector() { NativeCall<void>(this, "USkinnedMeshComponent.ClearMotionVector()"); }
	FName GetParentBone(FName BoneName) { using AsaReturnType = FName; alignas(AsaReturnType) unsigned char AsaReturnBytes[sizeof(AsaReturnType)]; auto* AsaReturnPointer = reinterpret_cast<AsaReturnType*>(AsaReturnBytes); auto* AsaReturnedPointer = NativeCall<AsaReturnType*, AsaReturnType*, FName>(this, "USkinnedMeshComponent.GetParentBone(FName)", AsaReturnPointer, BoneName); if (AsaReturnedPointer != AsaReturnPointer) throw std::runtime_error("Unexpected native result buffer"); std::unique_ptr<AsaReturnType, void(*)(AsaReturnType*)> AsaReturnOwner(std::launder(AsaReturnPointer), [](AsaReturnType* value) { value->~AsaReturnType(); }); return MoveTemp(*AsaReturnOwner); }
	USkeletalMesh* GetSkeletalMesh_DEPRECATED() { return NativeCall<USkeletalMesh*>(this, "USkinnedMeshComponent.GetSkeletalMesh_DEPRECATED()"); }
	void SetForceRenderedLOD(int LODIndex) { NativeCall<void, int>(this, "USkinnedMeshComponent.SetForceRenderedLOD(int)", LODIndex); }
	UMaterialInterface* GetMaterial(int MaterialIndex) { return NativeCall<UMaterialInterface*, int>(this, "USkinnedMeshComponent.GetMaterial(int)", MaterialIndex); }
	void RefreshMorphTargets() { NativeCall<void>(this, "USkinnedMeshComponent.RefreshMorphTargets()"); }
	bool HasFollowersForEndOfFrameUpdate() { return NativeCall<bool>(this, "USkinnedMeshComponent.HasFollowersForEndOfFrameUpdate()"); }
	void DestroyRenderState_Concurrent() { NativeCall<void>(this, "USkinnedMeshComponent.DestroyRenderState_Concurrent()"); }
	bool DoesSocketExist(FName InSocketName) { return NativeCall<bool, FName>(this, "USkinnedMeshComponent.DoesSocketExist(FName)", InSocketName); }
	TArray<TWeakObjectPtr<USkinnedMeshComponent, FWeakObjectPtr>, TSizedDefaultAllocator<32> >* GetFollowersSkinnedMeshComponentsForEndOfFrameUpdate() { return NativeCall<TArray<TWeakObjectPtr<USkinnedMeshComponent, FWeakObjectPtr>, TSizedDefaultAllocator<32> >*>(this, "USkinnedMeshComponent.GetFollowersSkinnedMeshComponentsForEndOfFrameUpdate()"); }
	FPrimitiveSceneProxy* CreateSceneProxy() { return NativeCall<FPrimitiveSceneProxy*>(this, "USkinnedMeshComponent.CreateSceneProxy()"); }
	bool UpdateLODStatus() { return NativeCall<bool>(this, "USkinnedMeshComponent.UpdateLODStatus()"); }
	bool IsSkinCacheAllowed(int LodIdx) { return NativeCall<bool, int>(this, "USkinnedMeshComponent.IsSkinCacheAllowed(int)", LodIdx); }
	void GetUsedMaterials(TArray<UMaterialInterface*, TSizedDefaultAllocator<32> >& OutMaterials, bool bGetDebugMaterials) { NativeCall<void, TArray<UMaterialInterface*, TSizedDefaultAllocator<32> >&, bool>(this, "USkinnedMeshComponent.GetUsedMaterials(TArray<UMaterialInterface*,TSizedDefaultAllocator<32>>&,bool)", OutMaterials, bGetDebugMaterials); }
	UMaterialInterface* GetDefaultOverlayMaterial() { return NativeCall<UMaterialInterface*>(this, "USkinnedMeshComponent.GetDefaultOverlayMaterial()"); }
	void FlipEditableSpaceBases() { NativeCall<void>(this, "USkinnedMeshComponent.FlipEditableSpaceBases()"); }
	void SetAlwaysUseMeshDeformer(bool bShouldAlwaysUseMeshDeformer) { NativeCall<void, bool>(this, "USkinnedMeshComponent.SetAlwaysUseMeshDeformer(bool)", bShouldAlwaysUseMeshDeformer); }
	UE::Math::TTransform<double>* GetBoneTransform(UE::Math::TTransform<double>* result, int BoneIdx) { return NativeCall<UE::Math::TTransform<double>*, UE::Math::TTransform<double>*, int>(this, "USkinnedMeshComponent.GetBoneTransform(int)", result, BoneIdx); }
	void InvalidateCachedBounds() { NativeCall<void>(this, "USkinnedMeshComponent.InvalidateCachedBounds()"); }
	void SetForcedLOD(int InNewForcedLOD) { NativeCall<void, int>(this, "USkinnedMeshComponent.SetForcedLOD(int)", InNewForcedLOD); }
	void TickPose(float DeltaTime, bool bNeedsValidRootMotion) { NativeCall<void, float, bool>(this, "USkinnedMeshComponent.TickPose(float,bool)", DeltaTime, bNeedsValidRootMotion); }
	void FinalizeBoneTransform() { NativeCall<void>(this, "USkinnedMeshComponent.FinalizeBoneTransform()"); }
	UMeshDeformerInstance* GetMeshDeformerInstanceForLOD(int LODIndex) { return NativeCall<UMeshDeformerInstance*, int>(this, "USkinnedMeshComponent.GetMeshDeformerInstanceForLOD(int)", LODIndex); }
	void BeginDestroy() { NativeCall<void>(this, "USkinnedMeshComponent.BeginDestroy()"); }
	void GetAdditionalRequiredBonesForLeader(int LODIndex, TArray<unsigned short, TSizedDefaultAllocator<32> >& InOutRequiredBones) { NativeCall<void, int, TArray<unsigned short, TSizedDefaultAllocator<32> >&>(this, "USkinnedMeshComponent.GetAdditionalRequiredBonesForLeader(int,TArray<unsignedshort,TSizedDefaultAllocator<32>>&)", LODIndex, InOutRequiredBones); }
	FColor GetVertexColor(int VertexIndex) { using AsaReturnType = FColor; alignas(AsaReturnType) unsigned char AsaReturnBytes[sizeof(AsaReturnType)]; auto* AsaReturnPointer = reinterpret_cast<AsaReturnType*>(AsaReturnBytes); auto* AsaReturnedPointer = NativeCall<AsaReturnType*, AsaReturnType*, int>(this, "USkinnedMeshComponent.GetVertexColor(int)", AsaReturnPointer, VertexIndex); if (AsaReturnedPointer != AsaReturnPointer) throw std::runtime_error("Unexpected native result buffer"); std::unique_ptr<AsaReturnType, void(*)(AsaReturnType*)> AsaReturnOwner(std::launder(AsaReturnPointer), [](AsaReturnType* value) { value->~AsaReturnType(); }); return MoveTemp(*AsaReturnOwner); }
	void DispatchParallelTickPose(FActorComponentTickFunction* TickFunction) { NativeCall<void, FActorComponentTickFunction*>(this, "USkinnedMeshComponent.DispatchParallelTickPose(FActorComponentTickFunction*)", TickFunction); }
	void InitializeBeforeRegister() { NativeCall<void>(this, "USkinnedMeshComponent.InitializeBeforeRegister()"); }
	FSkeletalMeshRenderData* GetSkeletalMeshRenderData() { return NativeCall<FSkeletalMeshRenderData*>(this, "USkinnedMeshComponent.GetSkeletalMeshRenderData()"); }
	void OnChildAttached(USceneComponent* ChildComponent) { NativeCall<void, USceneComponent*>(this, "USkinnedMeshComponent.OnChildAttached(USceneComponent*)", ChildComponent); }
	void SetPhysicsAsset(UPhysicsAsset* InPhysicsAsset, bool bForceReInit) { NativeCall<void, UPhysicsAsset*, bool>(this, "USkinnedMeshComponent.SetPhysicsAsset(UPhysicsAsset*,bool)", InPhysicsAsset, bForceReInit); }
	void ResizeExternalMorphTargetSets() { NativeCall<void>(this, "USkinnedMeshComponent.ResizeExternalMorphTargetSets()"); }
	void OnRenderAssetFirstLodChange(const UStreamableRenderAsset* RenderAsset, int FirstLodIndex) { NativeCall<void, const UStreamableRenderAsset*, int>(this, "USkinnedMeshComponent.OnRenderAssetFirstLodChange(UStreamableRenderAsset*,int)", RenderAsset, FirstLodIndex); }
	UMeshDeformerInstance* GetMeshDeformerInstance() { return NativeCall<UMeshDeformerInstance*>(this, "USkinnedMeshComponent.GetMeshDeformerInstance()"); }
	void TransformToBoneSpace(FName BoneName, UE::Math::TVector<double>* InPosition, UE::Math::TRotator<double>* InRotation, UE::Math::TVector<double>& OutPosition, UE::Math::TRotator<double>& OutRotation) { if (!InPosition) throw std::invalid_argument("Null native value parameter"); if (!InRotation) throw std::invalid_argument("Null native value parameter"); return NativeCall<void, FName, UE :: Math :: TVector < double >, UE :: Math :: TRotator < double >, UE :: Math :: TVector < double > &, UE :: Math :: TRotator < double > &>(this, "USkinnedMeshComponent.TransformToBoneSpace(FName,UE::Math::TVector<double>,UE::Math::TRotator<double>,UE::Math::TVector<double>&,UE::Math::TRotator<double>&)", BoneName, *InPosition, *InRotation, OutPosition, OutRotation); }
	bool ShouldUpdateTransform(bool bLODHasChanged) { return NativeCall<bool, bool>(this, "USkinnedMeshComponent.ShouldUpdateTransform(bool)", bLODHasChanged); }
	void ShowMaterialSection(int MaterialID, int SectionIndex, bool bShow, int LODIndex) { NativeCall<void, int, int, bool, int>(this, "USkinnedMeshComponent.ShowMaterialSection(int,int,bool,int)", MaterialID, SectionIndex, bShow, LODIndex); }
	FSkinWeightVertexBuffer* GetSkinWeightBuffer(int LODIndex) { return NativeCall<FSkinWeightVertexBuffer*, int>(this, "USkinnedMeshComponent.GetSkinWeightBuffer(int)", LODIndex); }
	bool ShouldCPUSkin() { return NativeCall<bool>(this, "USkinnedMeshComponent.ShouldCPUSkin()"); }
	void SetSkeletalMesh_DEPRECATED(USkeletalMesh* NewMesh) { NativeCall<void, USkeletalMesh*>(this, "USkinnedMeshComponent.SetSkeletalMesh_DEPRECATED(USkeletalMesh*)", NewMesh); }
	void SkippedTickPose() { NativeCall<void>(this, "USkinnedMeshComponent.SkippedTickPose()"); }
	static void SetSkeletalMesh_WrapperImpl(void* Object, const void* InValue) { NativeCall<void, void*, const void*>(nullptr, "USkinnedMeshComponent.SetSkeletalMesh_WrapperImpl(void*,void*)", Object, InValue); }
	bool IsSkinCacheAllowed(int LodIdx, ERHIFeatureLevel::Type FeatureLevel) { return NativeCall<bool, int, ERHIFeatureLevel::Type>(this, "USkinnedMeshComponent.IsSkinCacheAllowed(int,ERHIFeatureLevel::Type)", LodIdx, FeatureLevel); }
	TArray<FName, TSizedDefaultAllocator<32> >* GetMaterialSlotNames(TArray<FName, TSizedDefaultAllocator<32> >* result) { return NativeCall<TArray<FName, TSizedDefaultAllocator<32> >*, TArray<FName, TSizedDefaultAllocator<32> >*>(this, "USkinnedMeshComponent.GetMaterialSlotNames()", result); }
	int GetMaterialIndex(FName MaterialSlotName) { return NativeCall<int, FName>(this, "USkinnedMeshComponent.GetMaterialIndex(FName)", MaterialSlotName); }
	void CreateMeshDeformerInstances(const FMeshDeformerSet& DeformerSet) { NativeCall<void, const FMeshDeformerSet&>(this, "USkinnedMeshComponent.CreateMeshDeformerInstances(FMeshDeformerSet&)", DeformerSet); }
	const TArray<TWeakObjectPtr<USkinnedMeshComponent, FWeakObjectPtr>, TSizedDefaultAllocator<32> >& GetFollowerPoseComponents() { return NativeCall<const TArray<TWeakObjectPtr<USkinnedMeshComponent, FWeakObjectPtr>, TSizedDefaultAllocator<32> >&>(this, "USkinnedMeshComponent.GetFollowerPoseComponents()"); }
	FName GetBoneName(int BoneIndex) { using AsaReturnType = FName; alignas(AsaReturnType) unsigned char AsaReturnBytes[sizeof(AsaReturnType)]; auto* AsaReturnPointer = reinterpret_cast<AsaReturnType*>(AsaReturnBytes); auto* AsaReturnedPointer = NativeCall<AsaReturnType*, AsaReturnType*, int>(this, "USkinnedMeshComponent.GetBoneName(int)", AsaReturnPointer, BoneIndex); if (AsaReturnedPointer != AsaReturnPointer) throw std::runtime_error("Unexpected native result buffer"); std::unique_ptr<AsaReturnType, void(*)(AsaReturnType*)> AsaReturnOwner(std::launder(AsaReturnPointer), [](AsaReturnType* value) { value->~AsaReturnType(); }); return MoveTemp(*AsaReturnOwner); }
	int GetBoneIndex(FName BoneName) { return NativeCall<int, FName>(this, "USkinnedMeshComponent.GetBoneIndex(FName)", BoneName); }
	void RefreshFollowerComponents() { NativeCall<void>(this, "USkinnedMeshComponent.RefreshFollowerComponents()"); }
	void ForceMotionVector() { NativeCall<void>(this, "USkinnedMeshComponent.ForceMotionVector()"); }
	void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) { NativeCall<void, float, ELevelTick, FActorComponentTickFunction*>(this, "USkinnedMeshComponent.TickComponent(float,ELevelTick,FActorComponentTickFunction*)", DeltaTime, TickType, ThisTickFunction); }
	void RefreshBoneTransforms(FActorComponentTickFunction* TickFunction) { NativeCall<void, FActorComponentTickFunction*>(this, "USkinnedMeshComponent.RefreshBoneTransforms(FActorComponentTickFunction*)", TickFunction); }
	void RefreshBonesAndUpdateBounds(FActorComponentTickFunction* TickFunction) { NativeCall<void, FActorComponentTickFunction*>(this, "USkinnedMeshComponent.RefreshBonesAndUpdateBounds(FActorComponentTickFunction*)", TickFunction); }
	bool IsMaterialSectionShown(int MaterialID, int LODIndex) { return NativeCall<bool, int, int>(this, "USkinnedMeshComponent.IsMaterialSectionShown(int,int)", MaterialID, LODIndex); }
	int GetForceStreamedLOD() { return NativeCall<int>(this, "USkinnedMeshComponent.GetForceStreamedLOD()"); }
	void RefreshExternalMorphTargetWeights(bool bZeroOldWeights) { NativeCall<void, bool>(this, "USkinnedMeshComponent.RefreshExternalMorphTargetWeights(bool)", bZeroOldWeights); }
	void SetPredictedLODLevel(int InPredictedLODLevel) { NativeCall<void, int>(this, "USkinnedMeshComponent.SetPredictedLODLevel(int)", InPredictedLODLevel); }
	UE::Math::TQuat<double>* GetBoneQuaternion(UE::Math::TQuat<double>* result, FName BoneName, EBoneSpaces::Type Space) { return NativeCall<UE::Math::TQuat<double>*, UE::Math::TQuat<double>*, FName, EBoneSpaces::Type>(this, "USkinnedMeshComponent.GetBoneQuaternion(FName,EBoneSpaces::Type)", result, BoneName, Space); }
	void UpdateSlaveComponent() { NativeCall<void>(this, "USkinnedMeshComponent.UpdateSlaveComponent()"); }
	void UpdateSkinWeightOverrideBuffer() { NativeCall<void>(this, "USkinnedMeshComponent.UpdateSkinWeightOverrideBuffer()"); }
	float GetDefaultOverlayMaterialMaxDrawDistance() { return NativeCall<float>(this, "USkinnedMeshComponent.GetDefaultOverlayMaterialMaxDrawDistance()"); }
	UE::Math::TTransform<double>* GetDeltaTransformFromRefPose(UE::Math::TTransform<double>* result, FName BoneName, FName BaseName) { return NativeCall<UE::Math::TTransform<double>*, UE::Math::TTransform<double>*, FName, FName>(this, "USkinnedMeshComponent.GetDeltaTransformFromRefPose(FName,FName)", result, BoneName, BaseName); }
	bool GetTwistAndSwingAngleOfDeltaRotationFromRefPose(FName BoneName, float& OutTwistAngle, float& OutSwingAngle) { return NativeCall<bool, FName, float&, float&>(this, "USkinnedMeshComponent.GetTwistAndSwingAngleOfDeltaRotationFromRefPose(FName,float&,float&)", BoneName, OutTwistAngle, OutSwingAngle); }
	void AddFollowerPoseComponent(USkinnedMeshComponent* SkinnedMeshComponent) { NativeCall<void, USkinnedMeshComponent*>(this, "USkinnedMeshComponent.AddFollowerPoseComponent(USkinnedMeshComponent*)", SkinnedMeshComponent); }
	FString* GetDetailedInfoInternal(FString* result) { return NativeCall<FString*, FString*>(this, "USkinnedMeshComponent.GetDetailedInfoInternal()", result); }
	USkinnedAsset* GetSkinnedAsset() { return NativeCall<USkinnedAsset*>(this, "USkinnedMeshComponent.GetSkinnedAsset()"); }
	void InitializeComponent() { NativeCall<void>(this, "USkinnedMeshComponent.InitializeComponent()"); }
	bool IsBoneHidden(int BoneIndex) { return NativeCall<bool, int>(this, "USkinnedMeshComponent.IsBoneHidden(int)", BoneIndex); }
	void ClearRefPoseOverride() { NativeCall<void>(this, "USkinnedMeshComponent.ClearRefPoseOverride()"); }
	void RebuildVisibilityArray() { NativeCall<void>(this, "USkinnedMeshComponent.RebuildVisibilityArray()"); }
	FName GetSocketBoneName(FName InSocketName) { using AsaReturnType = FName; alignas(AsaReturnType) unsigned char AsaReturnBytes[sizeof(AsaReturnType)]; auto* AsaReturnPointer = reinterpret_cast<AsaReturnType*>(AsaReturnBytes); auto* AsaReturnedPointer = NativeCall<AsaReturnType*, AsaReturnType*, FName>(this, "USkinnedMeshComponent.GetSocketBoneName(FName)", AsaReturnPointer, InSocketName); if (AsaReturnedPointer != AsaReturnPointer) throw std::runtime_error("Unexpected native result buffer"); std::unique_ptr<AsaReturnType, void(*)(AsaReturnType*)> AsaReturnOwner(std::launder(AsaReturnPointer), [](AsaReturnType* value) { value->~AsaReturnType(); }); return MoveTemp(*AsaReturnOwner); }
	bool HasMeshDeformer(int LodIdx) { return NativeCall<bool, int>(this, "USkinnedMeshComponent.HasMeshDeformer(int)", LodIdx); }
	bool IsPlayingNetworkedRootMotionMontage() { return NativeCall<bool>(this, "USkinnedMeshComponent.IsPlayingNetworkedRootMotionMontage()"); }
	UObject* _getUObject() { return NativeCall<UObject*>(this, "USkinnedMeshComponent._getUObject()"); }
	void UnregisterOnBoneTransformsFinalizedDelegate(const FDelegateHandle& __formal) { NativeCall<void, const FDelegateHandle&>(this, "USkinnedMeshComponent.UnregisterOnBoneTransformsFinalizedDelegate(FDelegateHandle&)", __formal); }
	void UnHideBoneByName(FName BoneName) { NativeCall<void, FName>(this, "USkinnedMeshComponent.UnHideBoneByName(FName)", BoneName); }
	void SendRenderDynamicData_Concurrent() { NativeCall<void>(this, "USkinnedMeshComponent.SendRenderDynamicData_Concurrent()"); }
	void BeginPlay() { NativeCall<void>(this, "USkinnedMeshComponent.BeginPlay()"); }
	int GetDesiredSyncLOD() { return NativeCall<int>(this, "USkinnedMeshComponent.GetDesiredSyncLOD()"); }
	unsigned char ComputeMaxFirstLODIdxInAttachmentTree() { return NativeCall<unsigned char>(this, "USkinnedMeshComponent.ComputeMaxFirstLODIdxInAttachmentTree()"); }
	bool ShouldUseUpdateRateOptimizations() { return NativeCall<bool>(this, "USkinnedMeshComponent.ShouldUseUpdateRateOptimizations()"); }
	void SetSkeletalMesh(USkeletalMesh* NewMesh, bool bReinitPose) { NativeCall<void, USkeletalMesh*, bool>(this, "USkinnedMeshComponent.SetSkeletalMesh(USkeletalMesh*,bool)", NewMesh, bReinitPose); }
	void UpdateLeaderBoneMap() { NativeCall<void>(this, "USkinnedMeshComponent.UpdateLeaderBoneMap()"); }
	int GetNumSyncLODs() { return NativeCall<int>(this, "USkinnedMeshComponent.GetNumSyncLODs()"); }
	UE::Math::TVector2<double>* GetVertexUV(UE::Math::TVector2<double>* result, int VertexIndex, unsigned int UVChannel) { return NativeCall<UE::Math::TVector2<double>*, UE::Math::TVector2<double>*, int, unsigned int>(this, "USkinnedMeshComponent.GetVertexUV(int,unsignedint)", result, VertexIndex, UVChannel); }
	bool ShouldTickPose() { return NativeCall<bool>(this, "USkinnedMeshComponent.ShouldTickPose()"); }
	void GetPrimitiveStats(FPrimitiveStats& PrimitiveStats) { NativeCall<void, FPrimitiveStats&>(this, "USkinnedMeshComponent.GetPrimitiveStats(FPrimitiveStats&)", PrimitiveStats); }
	void OnRegister() { NativeCall<void>(this, "USkinnedMeshComponent.OnRegister()"); }
	void Serialize(FArchive& Ar) { NativeCall<void, FArchive&>(this, "USkinnedMeshComponent.Serialize(FArchive&)", Ar); }
	int GetNumLODs() { return NativeCall<int>(this, "USkinnedMeshComponent.GetNumLODs()"); }
	void UpdateFollowerComponent() { NativeCall<void>(this, "USkinnedMeshComponent.UpdateFollowerComponent()"); }
	static bool ShouldRenderNaniteSkinnedMeshes() { return NativeCall<bool>(nullptr, "USkinnedMeshComponent.ShouldRenderNaniteSkinnedMeshes()"); }
	void OnUnregister() { NativeCall<void>(this, "USkinnedMeshComponent.OnUnregister()"); }
	TArray<FName, TSizedDefaultAllocator<32> >* GetCurrentSkinWeightProfileLayerNames(TArray<FName, TSizedDefaultAllocator<32> >* result) { return NativeCall<TArray<FName, TSizedDefaultAllocator<32> >*, TArray<FName, TSizedDefaultAllocator<32> >*>(this, "USkinnedMeshComponent.GetCurrentSkinWeightProfileLayerNames()", result); }
	void SetLeaderPoseComponent(USkinnedMeshComponent* NewLeaderBoneComponent, bool bForceUpdate, bool bInFollowerShouldTickPose) { NativeCall<void, USkinnedMeshComponent*, bool, bool>(this, "USkinnedMeshComponent.SetLeaderPoseComponent(USkinnedMeshComponent*,bool,bool)", NewLeaderBoneComponent, bForceUpdate, bInFollowerShouldTickPose); }
	bool RequiresGameThreadEndOfFrameRecreate() { return NativeCall<bool>(this, "USkinnedMeshComponent.RequiresGameThreadEndOfFrameRecreate()"); }
	const UObject* AdditionalStatObject() { return NativeCall<const UObject*>(this, "USkinnedMeshComponent.AdditionalStatObject()"); }
	int GetMeshDeformerMaxLOD() { return NativeCall<int>(this, "USkinnedMeshComponent.GetMeshDeformerMaxLOD()"); }
	int GetBestAvailableLOD() { return NativeCall<int>(this, "USkinnedMeshComponent.GetBestAvailableLOD()"); }
	int GetNumBones() { return NativeCall<int>(this, "USkinnedMeshComponent.GetNumBones()"); }
	void HideBoneByName(FName BoneName, EPhysBodyOp PhysBodyOption) { NativeCall<void, FName, EPhysBodyOp>(this, "USkinnedMeshComponent.HideBoneByName(FName,EPhysBodyOp)", BoneName, PhysBodyOption); }
	void RemoveFollowerPoseComponent(USkinnedMeshComponent* SkinnedMeshComponent) { NativeCall<void, USkinnedMeshComponent*>(this, "USkinnedMeshComponent.RemoveFollowerPoseComponent(USkinnedMeshComponent*)", SkinnedMeshComponent); }
	bool GetMaterialStreamingData(int MaterialIndex, FPrimitiveMaterialInfo& MaterialData) { return NativeCall<bool, int, FPrimitiveMaterialInfo&>(this, "USkinnedMeshComponent.GetMaterialStreamingData(int,FPrimitiveMaterialInfo&)", MaterialIndex, MaterialData); }
	void PostReinitProperties() { NativeCall<void>(this, "USkinnedMeshComponent.PostReinitProperties()"); }
	static UClass* StaticClass() { return AsaApi::ResolveClass("USkinnedMeshComponent"); }
	void HideBone(int BoneIndex, EPhysBodyOp PhysBodyOption) { NativeCall<void, int, EPhysBodyOp>(this, "USkinnedMeshComponent.HideBone(int,EPhysBodyOp)", BoneIndex, PhysBodyOption); }
	bool PrestreamMeshLODs(float Seconds) { return NativeCall<bool, float>(this, "USkinnedMeshComponent.PrestreamMeshLODs(float)", Seconds); }
	void SetSkinnedAsset(USkinnedAsset* InSkinnedAsset) { NativeCall<void, USkinnedAsset*>(this, "USkinnedMeshComponent.SetSkinnedAsset(USkinnedAsset*)", InSkinnedAsset); }
	void CreateRenderState_Concurrent(FRegisterComponentContext* Context) { NativeCall<void, FRegisterComponentContext*>(this, "USkinnedMeshComponent.CreateRenderState_Concurrent(FRegisterComponentContext*)", Context); }
	bool HasMeshDeformer() { return NativeCall<bool>(this, "USkinnedMeshComponent.HasMeshDeformer()"); }
	void GetResourceSizeEx(FResourceSizeEx& CumulativeResourceSize) { NativeCall<void, FResourceSizeEx&>(this, "USkinnedMeshComponent.GetResourceSizeEx(FResourceSizeEx&)", CumulativeResourceSize); }
	bool HasAnySockets() { return NativeCall<bool>(this, "USkinnedMeshComponent.HasAnySockets()"); }
	void SetCPUSkinningEnabled(bool bEnable, bool bRecreateRenderStateImmediately) { NativeCall<void, bool, bool>(this, "USkinnedMeshComponent.SetCPUSkinningEnabled(bool,bool)", bEnable, bRecreateRenderStateImmediately); }
	UE::Math::TTransform<double>* GetSocketTransform(UE::Math::TTransform<double>* result, FName InSocketName, ERelativeTransformSpace TransformSpace) { return NativeCall<UE::Math::TTransform<double>*, UE::Math::TTransform<double>*, FName, ERelativeTransformSpace>(this, "USkinnedMeshComponent.GetSocketTransform(FName,ERelativeTransformSpace)", result, InSocketName, TransformSpace); }
	UE::Math::TVector<double>* GetBoneLocation(UE::Math::TVector<double>* result, FName BoneName, EBoneSpaces::Type Space) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*, FName, EBoneSpaces::Type>(this, "USkinnedMeshComponent.GetBoneLocation(FName,EBoneSpaces::Type)", result, BoneName, Space); }
	void PostInitProperties() { NativeCall<void>(this, "USkinnedMeshComponent.PostInitProperties()"); }
	bool UpdateLODStatus_Internal(int InLeaderPoseComponentPredictedLODLevel, bool bRequestedByLeaderPoseComponent) { return NativeCall<bool, int, bool>(this, "USkinnedMeshComponent.UpdateLODStatus_Internal(int,bool)", InLeaderPoseComponentPredictedLODLevel, bRequestedByLeaderPoseComponent); }
	bool HasLeaderForEndOfFrameUpdate() { return NativeCall<bool>(this, "USkinnedMeshComponent.HasLeaderForEndOfFrameUpdate()"); }
	void PostInitMeshObject(FSkeletalMeshObject* __formal) { NativeCall<void, FSkeletalMeshObject*>(this, "USkinnedMeshComponent.PostInitMeshObject(FSkeletalMeshObject*)", __formal); }
	bool IsMaterialSlotNameValid(FName MaterialSlotName) { return NativeCall<bool, FName>(this, "USkinnedMeshComponent.IsMaterialSlotNameValid(FName)", MaterialSlotName); }
	void OnPreRegister() { NativeCall<void>(this, "USkinnedMeshComponent.OnPreRegister()"); }
};
