#pragma once
#include "UEObjectForward.h"
#include "BulkForward.h"
#include <API/UE/Math/BoxSphereBounds.h>
#include "UStreamableRenderAsset.h"

class USkinnedAsset : public UStreamableRenderAsset
{
public:
	USkinnedAsset() = delete;
	~USkinnedAsset() = delete;
	USkinnedAsset(const USkinnedAsset&) = delete;
	USkinnedAsset& operator=(const USkinnedAsset&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("USkinnedAsset"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("USkinnedAsset"); }
	UE::Math::TRotator<double>& RotOffsetField() { return *GetNativePointerField<UE::Math::TRotator<double>*>(this, "USkinnedAsset.RotOffset"); }
	UE::Math::TRotator<double>& ItemSlotAttachmentRotOffsetField() { return *GetNativePointerField<UE::Math::TRotator<double>*>(this, "USkinnedAsset.ItemSlotAttachmentRotOffset"); }
	UE::Math::TVector<double>& LocOffsetField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "USkinnedAsset.LocOffset"); }
	UE::Math::TVector<double>& ScaleMultiplierField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "USkinnedAsset.ScaleMultiplier"); }
	UE::Math::TVector<double>& ItemSlotAttachmentLocOffsetField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "USkinnedAsset.ItemSlotAttachmentLocOffset"); }
	void ExecutePostLoadInternal(FSkinnedAssetPostLoadContext& Context) { NativeCall<void, FSkinnedAssetPostLoadContext&>(this, "USkinnedAsset.ExecutePostLoadInternal(FSkinnedAssetPostLoadContext&)", Context); }
	UE::Math::TBoxSphereBounds<double, double>* GetBounds(UE::Math::TBoxSphereBounds<double, double>* result) { return NativeCall<UE::Math::TBoxSphereBounds<double, double>*, UE::Math::TBoxSphereBounds<double, double>*>(this, "USkinnedAsset.GetBounds()", result); }
	void SetSkinWeightProfilesData(int LODIndex, FSkinWeightProfilesData& SkinWeightProfilesData) { NativeCall<void, int, FSkinWeightProfilesData&>(this, "USkinnedAsset.SetSkinWeightProfilesData(int,FSkinWeightProfilesData&)", LODIndex, SkinWeightProfilesData); }
	FSkeletalMeshRenderData* GetResourceForRendering() { return NativeCall<FSkeletalMeshRenderData*>(this, "USkinnedAsset.GetResourceForRendering()"); }
	FString* GetAsyncPropertyName(FString* result, unsigned __int64 Property) { return NativeCall<FString*, FString*, unsigned __int64>(this, "USkinnedAsset.GetAsyncPropertyName(unsigned__int64)", result, Property); }
	int GetMinLodIdx(bool bForceLowestLODIdx) { return NativeCall<int, bool>(this, "USkinnedAsset.GetMinLodIdx(bool)", bForceLowestLODIdx); }
	UMeshDeformerCollection* GetTargetMeshDeformers() { return NativeCall<UMeshDeformerCollection*>(this, "USkinnedAsset.GetTargetMeshDeformers()"); }
	bool GetHasVertexColors() { return NativeCall<bool>(this, "USkinnedAsset.GetHasVertexColors()"); }
	void FinishPostLoadInternal(FSkinnedAssetPostLoadContext& Context) { NativeCall<void, FSkinnedAssetPostLoadContext&>(this, "USkinnedAsset.FinishPostLoadInternal(FSkinnedAssetPostLoadContext&)", Context); }
	bool GetSupportRayTracing() { return NativeCall<bool>(this, "USkinnedAsset.GetSupportRayTracing()"); }
	UPhysicsAsset* GetShadowPhysicsAsset() { return NativeCall<UPhysicsAsset*>(this, "USkinnedAsset.GetShadowPhysicsAsset()"); }
	const FPerPlatformInt& GetMinLod() { return NativeCall<const FPerPlatformInt&>(this, "USkinnedAsset.GetMinLod()"); }
	void SetSkeleton(USkeleton* InSkeleton) { NativeCall<void, USkeleton*>(this, "USkinnedAsset.SetSkeleton(USkeleton*)", InSkeleton); }
	void UpdateUVChannelData(bool bRebuildAll) { NativeCall<void, bool>(this, "USkinnedAsset.UpdateUVChannelData(bool)", bRebuildAll); }
	void PostLoad() { NativeCall<void>(this, "USkinnedAsset.PostLoad()"); }
	UPhysicsAsset* GetPhysicsAsset() { return NativeCall<UPhysicsAsset*>(this, "USkinnedAsset.GetPhysicsAsset()"); }
	UMorphTarget* FindMorphTarget(FName MorphTargetName) { return NativeCall<UMorphTarget*, FName>(this, "USkinnedAsset.FindMorphTarget(FName)", MorphTargetName); }
	bool IsValidLODIndex(int Index) { return NativeCall<bool, int>(this, "USkinnedAsset.IsValidLODIndex(int)", Index); }
	const FPerPlatformBool& GetDisableBelowMinLodStripping() { return NativeCall<const FPerPlatformBool&>(this, "USkinnedAsset.GetDisableBelowMinLodStripping()"); }
	int GetNumMaterials() { return NativeCall<int>(this, "USkinnedAsset.GetNumMaterials()"); }
	bool IsMaterialUsed(int MaterialIndex) { return NativeCall<bool, int>(this, "USkinnedAsset.IsMaterialUsed(int)", MaterialIndex); }
	int GetRayTracingMinLOD() { return NativeCall<int>(this, "USkinnedAsset.GetRayTracingMinLOD()"); }
	bool IsValidMaterialIndex(int Index) { return NativeCall<bool, int>(this, "USkinnedAsset.IsValidMaterialIndex(int)", Index); }
	int GetDefaultMinLod() { return NativeCall<int>(this, "USkinnedAsset.GetDefaultMinLod()"); }
	void BeginPostLoadInternal(FSkinnedAssetPostLoadContext& Context) { NativeCall<void, FSkinnedAssetPostLoadContext&>(this, "USkinnedAsset.BeginPostLoadInternal(FSkinnedAssetPostLoadContext&)", Context); }
	float GetOverlayMaterialMaxDrawDistance() { return NativeCall<float>(this, "USkinnedAsset.GetOverlayMaterialMaxDrawDistance()"); }
	FSkinWeightProfilesData* GetSkinWeightProfilesData(int LODIndex) { return NativeCall<FSkinWeightProfilesData*, int>(this, "USkinnedAsset.GetSkinWeightProfilesData(int)", LODIndex); }
	bool IsMinLodQualityLevelEnable() { return NativeCall<bool>(this, "USkinnedAsset.IsMinLodQualityLevelEnable()"); }
	bool NeedCPUData(int LODIndex) { return NativeCall<bool, int>(this, "USkinnedAsset.NeedCPUData(int)", LODIndex); }
	UMeshDeformer* GetDefaultMeshDeformer() { return NativeCall<UMeshDeformer*>(this, "USkinnedAsset.GetDefaultMeshDeformer()"); }
	FString* GetDetailedInfoInternal(FString* result) { return NativeCall<FString*, FString*>(this, "USkinnedAsset.GetDetailedInfoInternal()", result); }
	USkeletalMeshSocket* FindSocket(FName InSocketName) { return NativeCall<USkeletalMeshSocket*, FName>(this, "USkinnedAsset.FindSocket(FName)", InSocketName); }
	int GetLODNum() { return NativeCall<int>(this, "USkinnedAsset.GetLODNum()"); }
	UMaterialInterface* GetOverlayMaterial() { return NativeCall<UMaterialInterface*>(this, "USkinnedAsset.GetOverlayMaterial()"); }
	const FMeshUVChannelInfo* GetUVChannelData(int MaterialIndex) { return NativeCall<const FMeshUVChannelInfo*, int>(this, "USkinnedAsset.GetUVChannelData(int)", MaterialIndex); }
	bool HasHalfEdgeBuffer(int LODIndex) { return NativeCall<bool, int>(this, "USkinnedAsset.HasHalfEdgeBuffer(int)", LODIndex); }
	int GetPlatformMinLODIdx(const ITargetPlatform* TargetPlatform) { return NativeCall<int, const ITargetPlatform*>(this, "USkinnedAsset.GetPlatformMinLODIdx(ITargetPlatform*)", TargetPlatform); }
};
