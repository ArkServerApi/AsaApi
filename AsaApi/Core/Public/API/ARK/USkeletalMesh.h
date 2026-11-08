#pragma once
#include "UEObjectForward.h"
#include "BulkForward.h"
#include <API/UE/Math/BoxSphereBounds.h>
#include "USkinnedAsset.h"

struct USkeletalMesh : public USkinnedAsset
{
public:
	USkeletalMesh() = delete;
	~USkeletalMesh() = delete;
	USkeletalMesh(const USkeletalMesh&) = delete;
	USkeletalMesh& operator=(const USkeletalMesh&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("USkeletalMesh"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("USkeletalMesh"); }
	UE::Math::TBoxSphereBounds<double, double>& ImportedBoundsField() { return *GetNativePointerField<UE::Math::TBoxSphereBounds<double, double>*>(this, "USkeletalMesh.ImportedBounds"); }
	UE::Math::TBoxSphereBounds<double, double>& ExtendedBoundsField() { return *GetNativePointerField<UE::Math::TBoxSphereBounds<double, double>*>(this, "USkeletalMesh.ExtendedBounds"); }
	UE::Math::TVector<double>& PositiveBoundsExtensionField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "USkeletalMesh.PositiveBoundsExtension"); }
	UE::Math::TVector<double>& NegativeBoundsExtensionField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "USkeletalMesh.NegativeBoundsExtension"); }
	FPerQualityLevelInt& MinQualityLevelLODField() { return *GetNativePointerField<FPerQualityLevelInt*>(this, "USkeletalMesh.MinQualityLevelLOD"); }
	FPerPlatformInt& MinLodField() { return *GetNativePointerField<FPerPlatformInt*>(this, "USkeletalMesh.MinLod"); }
	FPerPlatformBool& DisableBelowMinLodStrippingField() { return *GetNativePointerField<FPerPlatformBool*>(this, "USkeletalMesh.DisableBelowMinLodStripping"); }
	int& RayTracingMinLODField() { return *GetNativePointerField<int*>(this, "USkeletalMesh.RayTracingMinLOD"); }
	FRenderCommandFence& ReleaseResourcesFenceField() { return *GetNativePointerField<FRenderCommandFence*>(this, "USkeletalMesh.ReleaseResourcesFence"); }
	FReferenceSkeleton& RefSkeletonField() { return *GetNativePointerField<FReferenceSkeleton*>(this, "USkeletalMesh.RefSkeleton"); }
	int& PostProcessAnimBPLODThresholdField() { return *GetNativePointerField<int*>(this, "USkeletalMesh.PostProcessAnimBPLODThreshold"); }
	FSkeletalMeshSamplingInfo& SamplingInfoField() { return *GetNativePointerField<FSkeletalMeshSamplingInfo*>(this, "USkeletalMesh.SamplingInfo"); }
	float& OverlayMaterialMaxDrawDistanceField() { return *GetNativePointerField<float*>(this, "USkeletalMesh.OverlayMaterialMaxDrawDistance"); }
	UE::Math::TVector<double>& ItemSlotAttachmentScaleMultiplierField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "USkeletalMesh.ItemSlotAttachmentScaleMultiplier"); }
	FName& CloseToGroundBoneNameField() { return *GetNativePointerField<FName*>(this, "USkeletalMesh.CloseToGroundBoneName"); }
	FName& CloseToGroundOppositeBoneNameField() { return *GetNativePointerField<FName*>(this, "USkeletalMesh.CloseToGroundOppositeBoneName"); }
	float& DefaultTraceLengthField() { return *GetNativePointerField<float*>(this, "USkeletalMesh.DefaultTraceLength"); }
	float& TraceStartOffsetField() { return *GetNativePointerField<float*>(this, "USkeletalMesh.TraceStartOffset"); }
	float& InterpolationSpeedField() { return *GetNativePointerField<float*>(this, "USkeletalMesh.InterpolationSpeed"); }
	float& InterpolationSpeedUpwardField() { return *GetNativePointerField<float*>(this, "USkeletalMesh.InterpolationSpeedUpward"); }
	float& CachedInitialSphereRadiusBoundsField() { return *GetNativePointerField<float*>(this, "USkeletalMesh.CachedInitialSphereRadiusBounds"); }
	int& ConsoleDropLODNewTriangleCountField() { return *GetNativePointerField<int*>(this, "USkeletalMesh.ConsoleDropLODNewTriangleCount"); }
	FPerPlatformBool& bRemovingLOD0FromCookField() { return *GetNativePointerField<FPerPlatformBool*>(this, "USkeletalMesh.bRemovingLOD0FromCook"); }
	BitFieldValue<bool, unsigned char> bUseFullPrecisionUVs_DEPRECATED() { return { this, "USkeletalMesh.bUseFullPrecisionUVs_DEPRECATED"}; }
	BitFieldValue<bool, unsigned char> bUseHighPrecisionTangentBasis_DEPRECATED() { return { this, "USkeletalMesh.bUseHighPrecisionTangentBasis_DEPRECATED"}; }
	BitFieldValue<bool, unsigned char> bHasVertexColors() { return { this, "USkeletalMesh.bHasVertexColors"}; }
	BitFieldValue<bool, unsigned char> bHasActiveClothingAssets() { return { this, "USkeletalMesh.bHasActiveClothingAssets"}; }
	BitFieldValue<bool, unsigned char> bEnablePerPolyCollision() { return { this, "USkeletalMesh.bEnablePerPolyCollision"}; }
	BitFieldValue<bool, unsigned char> bForceAllowCPUAcccess() { return { this, "USkeletalMesh.bForceAllowCPUAcccess"}; }
	BitFieldValue<bool, unsigned char> bSupportRayTracing() { return { this, "USkeletalMesh.bSupportRayTracing"}; }
	BitFieldValue<bool, unsigned __int32> bIgnoreMasterPoseLODs() { return { this, "USkeletalMesh.bIgnoreMasterPoseLODs"}; }
	BitFieldValue<bool, unsigned __int32> bAllowParallelAnimations() { return { this, "USkeletalMesh.bAllowParallelAnimations"}; }
	BitFieldValue<bool, unsigned __int32> bAllowLODStreaming() { return { this, "USkeletalMesh.bAllowLODStreaming"}; }
	BitFieldValue<bool, unsigned __int32> bFullLODStreaming() { return { this, "USkeletalMesh.bFullLODStreaming"}; }
	BitFieldValue<bool, unsigned __int32> bCookRemoveLOD0() { return { this, "USkeletalMesh.bCookRemoveLOD0"}; }
	BitFieldValue<bool, unsigned __int32> bPreventLODStreamingOnWindows() { return { this, "USkeletalMesh.bPreventLODStreamingOnWindows"}; }
	bool HasActiveClothingAssets() { return NativeCall<bool>(this, "USkeletalMesh.HasActiveClothingAssets()"); }
	void PostInitProperties() { NativeCall<void>(this, "USkeletalMesh.PostInitProperties()"); }
	bool IsMinLodQualityLevelEnable() { return NativeCall<bool>(this, "USkeletalMesh.IsMinLodQualityLevelEnable()"); }
	USkeletalMeshSocket* GetSocketByIndex(int Index) { return NativeCall<USkeletalMeshSocket*, int>(this, "USkeletalMesh.GetSocketByIndex(int)", Index); }
	void GetPreloadDependencies(TArray<UObject*, TSizedDefaultAllocator<32> >& OutDeps) { NativeCall<void, TArray<UObject*, TSizedDefaultAllocator<32> >&>(this, "USkeletalMesh.GetPreloadDependencies(TArray<UObject*,TSizedDefaultAllocator<32>>&)", OutDeps); }
	void AllocateResourceForRendering() { NativeCall<void>(this, "USkeletalMesh.AllocateResourceForRendering()"); }
	void CalculateExtendedBounds() { NativeCall<void>(this, "USkeletalMesh.CalculateExtendedBounds()"); }
	int GetDefaultMinLod() { return NativeCall<int>(this, "USkeletalMesh.GetDefaultMinLod()"); }
	float GetOverlayMaterialMaxDrawDistance() { return NativeCall<float>(this, "USkeletalMesh.GetOverlayMaterialMaxDrawDistance()"); }
	void BeginPostLoadInternal(FSkinnedAssetPostLoadContext& Context) { NativeCall<void, FSkinnedAssetPostLoadContext&>(this, "USkeletalMesh.BeginPostLoadInternal(FSkinnedAssetPostLoadContext&)", Context); }
	bool NeedCPUData(int LODIndex) { return NativeCall<bool, int>(this, "USkeletalMesh.NeedCPUData(int)", LODIndex); }
	UMeshDeformer* GetDefaultMeshDeformer() { return NativeCall<UMeshDeformer*>(this, "USkeletalMesh.GetDefaultMeshDeformer()"); }
	void Serialize(FArchive& Ar) { NativeCall<void, FArchive&>(this, "USkeletalMesh.Serialize(FArchive&)", Ar); }
	bool DoesMipDataExist(int MipIndex) { return NativeCall<bool, int>(this, "USkeletalMesh.DoesMipDataExist(int)", MipIndex); }
	int GetRayTracingMinLOD() { return NativeCall<int>(this, "USkeletalMesh.GetRayTracingMinLOD()"); }
	void GetResourceSizeEx(FResourceSizeEx& CumulativeResourceSize) { NativeCall<void, FResourceSizeEx&>(this, "USkeletalMesh.GetResourceSizeEx(FResourceSizeEx&)", CumulativeResourceSize); }
	bool IsMaterialUsed(int MaterialIndex) { return NativeCall<bool, int>(this, "USkeletalMesh.IsMaterialUsed(int)", MaterialIndex); }
	void InitMorphTargets(bool bInKeepEmptyMorphTargets) { NativeCall<void, bool>(this, "USkeletalMesh.InitMorphTargets(bool)", bInKeepEmptyMorphTargets); }
	void SetSkeleton(USkeleton* InSkeleton) { NativeCall<void, USkeleton*>(this, "USkeletalMesh.SetSkeleton(USkeleton*)", InSkeleton); }
	int GetClothingAssetIndex(const FGuid& InAssetGuid) { return NativeCall<int, const FGuid&>(this, "USkeletalMesh.GetClothingAssetIndex(FGuid&)", InAssetGuid); }
	int CalcCumulativeLODSize(int NumLODs) { return NativeCall<int, int>(this, "USkeletalMesh.CalcCumulativeLODSize(int)", NumLODs); }
	FSkinWeightProfilesData* GetSkinWeightProfilesData(int LODIndex) { return NativeCall<FSkinWeightProfilesData*, int>(this, "USkeletalMesh.GetSkinWeightProfilesData(int)", LODIndex); }
	bool StreamOut(int NewMipCount) { return NativeCall<bool, int>(this, "USkeletalMesh.StreamOut(int)", NewMipCount); }
	FString* GetAsyncPropertyName(FString* result, unsigned __int64 Property) { return NativeCall<FString*, FString*, unsigned __int64>(this, "USkeletalMesh.GetAsyncPropertyName(unsigned__int64)", result, Property); }
	void SetSkinWeightProfilesData(int LODIndex, FSkinWeightProfilesData& SkinWeightProfilesData) { NativeCall<void, int, FSkinWeightProfilesData&>(this, "USkeletalMesh.SetSkinWeightProfilesData(int,FSkinWeightProfilesData&)", LODIndex, SkinWeightProfilesData); }
	FSkeletalMeshRenderData* GetResourceForRendering() { return NativeCall<FSkeletalMeshRenderData*>(this, "USkeletalMesh.GetResourceForRendering()"); }
	UMorphTarget* FindMorphTargetAndIndex(FName MorphTargetName, int& OutIndex) { return NativeCall<UMorphTarget*, FName, int&>(this, "USkeletalMesh.FindMorphTargetAndIndex(FName,int&)", MorphTargetName, OutIndex); }
	bool ShouldEvaluatePostProcessAnimGraph(int LODLevel) { return NativeCall<bool, int>(this, "USkeletalMesh.ShouldEvaluatePostProcessAnimGraph(int)", LODLevel); }
	int GetPlatformMinLODIdx(const ITargetPlatform* TargetPlatform) { return NativeCall<int, const ITargetPlatform*>(this, "USkeletalMesh.GetPlatformMinLODIdx(ITargetPlatform*)", TargetPlatform); }
	void SetNumSourceModels(int InNumSourceModels) { NativeCall<void, int>(this, "USkeletalMesh.SetNumSourceModels(int)", InNumSourceModels); }
	void ReleaseResources() { NativeCall<void>(this, "USkeletalMesh.ReleaseResources()"); }
	bool GetSupportRayTracing() { return NativeCall<bool>(this, "USkeletalMesh.GetSupportRayTracing()"); }
	void InitResources() { NativeCall<void>(this, "USkeletalMesh.InitResources()"); }
	void CalculateInvRefMatrices() { NativeCall<void>(this, "USkeletalMesh.CalculateInvRefMatrices()"); }
	int GetPostProcessAnimGraphLODThreshold() { return NativeCall<int>(this, "USkeletalMesh.GetPostProcessAnimGraphLODThreshold()"); }
	unsigned int GetMipIoFilenameHash(int MipIndex) { return NativeCall<unsigned int, int>(this, "USkeletalMesh.GetMipIoFilenameHash(int)", MipIndex); }
	const FPerPlatformInt& GetMinLod() { return NativeCall<const FPerPlatformInt&>(this, "USkeletalMesh.GetMinLod()"); }
	UPhysicsAsset* GetShadowPhysicsAsset() { return NativeCall<UPhysicsAsset*>(this, "USkeletalMesh.GetShadowPhysicsAsset()"); }
	int GetLODNum() { return NativeCall<int>(this, "USkeletalMesh.GetLODNum()"); }
	USkeletalMeshSocket* FindSocket(FName InSocketName) { return NativeCall<USkeletalMeshSocket*, FName>(this, "USkeletalMesh.FindSocket(FName)", InSocketName); }
	bool HasHalfEdgeBuffer(int LODIndex) { return NativeCall<bool, int>(this, "USkeletalMesh.HasHalfEdgeBuffer(int)", LODIndex); }
	const FMeshUVChannelInfo* GetUVChannelData(int MaterialIndex) { return NativeCall<const FMeshUVChannelInfo*, int>(this, "USkeletalMesh.GetUVChannelData(int)", MaterialIndex); }
	void FinishPostLoadInternal(FSkinnedAssetPostLoadContext& Context) { NativeCall<void, FSkinnedAssetPostLoadContext&>(this, "USkeletalMesh.FinishPostLoadInternal(FSkinnedAssetPostLoadContext&)", Context); }
	bool GetHasVertexColors() { return NativeCall<bool>(this, "USkeletalMesh.GetHasVertexColors()"); }
	UMaterialInterface* GetOverlayMaterial() { return NativeCall<UMaterialInterface*>(this, "USkeletalMesh.GetOverlayMaterial()"); }
	FString* GetDesc(FString* result) { return NativeCall<FString*, FString*>(this, "USkeletalMesh.GetDesc()", result); }
	FSkeletalMeshSourceModel& AddSourceModel(bool bAutoGenerated) { return NativeCall<FSkeletalMeshSourceModel&, bool>(this, "USkeletalMesh.AddSourceModel(bool)", bAutoGenerated); }
	UE::Math::TBoxSphereBounds<double, double>* GetImportedBounds(UE::Math::TBoxSphereBounds<double, double>* result) { return NativeCall<UE::Math::TBoxSphereBounds<double, double>*, UE::Math::TBoxSphereBounds<double, double>*>(this, "USkeletalMesh.GetImportedBounds()", result); }
	UMeshDeformerCollection* GetTargetMeshDeformers() { return NativeCall<UMeshDeformerCollection*>(this, "USkeletalMesh.GetTargetMeshDeformers()"); }
	UE::Math::TBoxSphereBounds<double, double>* GetBounds(UE::Math::TBoxSphereBounds<double, double>* result) { return NativeCall<UE::Math::TBoxSphereBounds<double, double>*, UE::Math::TBoxSphereBounds<double, double>*>(this, "USkeletalMesh.GetBounds()", result); }
	void ExecutePostLoadInternal(FSkinnedAssetPostLoadContext& Context) { NativeCall<void, FSkinnedAssetPostLoadContext&>(this, "USkeletalMesh.ExecutePostLoadInternal(FSkinnedAssetPostLoadContext&)", Context); }
	void RebuildSocketMap() { NativeCall<void>(this, "USkeletalMesh.RebuildSocketMap()"); }
	int NumSockets() { return NativeCall<int>(this, "USkeletalMesh.NumSockets()"); }
	bool IsReadyForFinishDestroy() { return NativeCall<bool>(this, "USkeletalMesh.IsReadyForFinishDestroy()"); }
	bool StreamIn(int NewMipCount, bool bHighPrio) { return NativeCall<bool, int, bool>(this, "USkeletalMesh.StreamIn(int,bool)", NewMipCount, bHighPrio); }
	int GetMinLodIdx(bool bForceLowestLODIdx) { return NativeCall<int, bool>(this, "USkeletalMesh.GetMinLodIdx(bool)", bForceLowestLODIdx); }
	void BeginDestroy() { NativeCall<void>(this, "USkeletalMesh.BeginDestroy()"); }
	int GetNumSourceModels() { return NativeCall<int>(this, "USkeletalMesh.GetNumSourceModels()"); }
	const FPerPlatformBool& GetDisableBelowMinLodStripping() { return NativeCall<const FPerPlatformBool&>(this, "USkeletalMesh.GetDisableBelowMinLodStripping()"); }
	void SetRefSkeleton(const FReferenceSkeleton& InRefSkeleton) { NativeCall<void, const FReferenceSkeleton&>(this, "USkeletalMesh.SetRefSkeleton(FReferenceSkeleton&)", InRefSkeleton); }
	bool HasPendingRenderResourceInitialization() { return NativeCall<bool>(this, "USkeletalMesh.HasPendingRenderResourceInitialization()"); }
	UPhysicsAsset* GetPhysicsAsset() { return NativeCall<UPhysicsAsset*>(this, "USkeletalMesh.GetPhysicsAsset()"); }
	static void OnLodStrippingQualityLevelChanged(IConsoleVariable* Variable) { NativeCall<void, IConsoleVariable*>(nullptr, "USkeletalMesh.OnLodStrippingQualityLevelChanged(IConsoleVariable*)", Variable); }
	void PostLoad() { NativeCall<void>(this, "USkeletalMesh.PostLoad()"); }
	bool IsPostLoadThreadSafe() { return NativeCall<bool>(this, "USkeletalMesh.IsPostLoadThreadSafe()"); }
	void SetImportedBounds(const UE::Math::TBoxSphereBounds<double, double>& InBounds) { NativeCall<void, const UE::Math::TBoxSphereBounds<double, double>&>(this, "USkeletalMesh.SetImportedBounds(UE::Math::TBoxSphereBounds<double,double>&)", InBounds); }
	FSkeletalMeshLODInfo& AddLODInfo() { return NativeCall<FSkeletalMeshLODInfo&>(this, "USkeletalMesh.AddLODInfo()"); }
	bool IsValidLODIndex(int Index) { return NativeCall<bool, int>(this, "USkeletalMesh.IsValidLODIndex(int)", Index); }
	UMorphTarget* FindMorphTarget(FName MorphTargetName) { return NativeCall<UMorphTarget*, FName>(this, "USkeletalMesh.FindMorphTarget(FName)", MorphTargetName); }
};
