#pragma once
#include "BulkForward.h"
#include "APartitionActor.h"

struct ALandscapeProxy : public APartitionActor
{
public:
	ALandscapeProxy() = delete;
	~ALandscapeProxy() = delete;
	ALandscapeProxy(const ALandscapeProxy&) = delete;
	ALandscapeProxy& operator=(const ALandscapeProxy&) = delete;
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("ALandscapeProxy"); }

	FGuid& LandscapeGuidField() { return *GetNativePointerField<FGuid*>(this, "ALandscapeProxy.LandscapeGuid"); }
	FGuid& OriginalLandscapeGuidField() { return *GetNativePointerField<FGuid*>(this, "ALandscapeProxy.OriginalLandscapeGuid"); }
	bool& bEnableNaniteField() { return *GetNativePointerField<bool*>(this, "ALandscapeProxy.bEnableNanite"); }
	bool& bDisableRuntimeGrassMapGenerationField() { return *GetNativePointerField<bool*>(this, "ALandscapeProxy.bDisableRuntimeGrassMapGeneration"); }
	int& MaxLODLevelField() { return *GetNativePointerField<int*>(this, "ALandscapeProxy.MaxLODLevel"); }
	float& LOD0ScreenSizeField() { return *GetNativePointerField<float*>(this, "ALandscapeProxy.LOD0ScreenSize"); }
	unsigned int& LODGroupKeyField() { return *GetNativePointerField<unsigned int*>(this, "ALandscapeProxy.LODGroupKey"); }
	float& LOD0DistributionSettingField() { return *GetNativePointerField<float*>(this, "ALandscapeProxy.LOD0DistributionSetting"); }
	float& LODDistributionSettingField() { return *GetNativePointerField<float*>(this, "ALandscapeProxy.LODDistributionSetting"); }
	FPerQualityLevelFloat& ScalableLOD0ScreenSizeField() { return *GetNativePointerField<FPerQualityLevelFloat*>(this, "ALandscapeProxy.ScalableLOD0ScreenSize"); }
	FPerQualityLevelFloat& ScalableLOD0DistributionSettingField() { return *GetNativePointerField<FPerQualityLevelFloat*>(this, "ALandscapeProxy.ScalableLOD0DistributionSetting"); }
	FPerQualityLevelFloat& ScalableLODDistributionSettingField() { return *GetNativePointerField<FPerQualityLevelFloat*>(this, "ALandscapeProxy.ScalableLODDistributionSetting"); }
	bool& bUseScalableLODSettingsField() { return *GetNativePointerField<bool*>(this, "ALandscapeProxy.bUseScalableLODSettings"); }
	float& LODBlendRangeField() { return *GetNativePointerField<float*>(this, "ALandscapeProxy.LODBlendRange"); }
	int& StaticLightingLODField() { return *GetNativePointerField<int*>(this, "ALandscapeProxy.StaticLightingLOD"); }
	float& StreamingDistanceMultiplierField() { return *GetNativePointerField<float*>(this, "ALandscapeProxy.StreamingDistanceMultiplier"); }
	bool& bSetCreateRuntimeVirtualTextureVolumesField() { return *GetNativePointerField<bool*>(this, "ALandscapeProxy.bSetCreateRuntimeVirtualTextureVolumes"); }
	bool& bVirtualTextureRenderWithQuadField() { return *GetNativePointerField<bool*>(this, "ALandscapeProxy.bVirtualTextureRenderWithQuad"); }
	bool& bVirtualTextureRenderWithQuadHQField() { return *GetNativePointerField<bool*>(this, "ALandscapeProxy.bVirtualTextureRenderWithQuadHQ"); }
	int& VirtualTextureNumLodsField() { return *GetNativePointerField<int*>(this, "ALandscapeProxy.VirtualTextureNumLods"); }
	int& VirtualTextureLodBiasField() { return *GetNativePointerField<int*>(this, "ALandscapeProxy.VirtualTextureLodBias"); }
	ERuntimeVirtualTextureMainPassType& VirtualTextureRenderPassTypeField() { return *GetNativePointerField<ERuntimeVirtualTextureMainPassType*>(this, "ALandscapeProxy.VirtualTextureRenderPassType"); }
	float& NegativeZBoundsExtensionField() { return *GetNativePointerField<float*>(this, "ALandscapeProxy.NegativeZBoundsExtension"); }
	float& PositiveZBoundsExtensionField() { return *GetNativePointerField<float*>(this, "ALandscapeProxy.PositiveZBoundsExtension"); }
	FCachedLandscapeFoliage& FoliageCacheField() { return *GetNativePointerField<FCachedLandscapeFoliage*>(this, "ALandscapeProxy.FoliageCache"); }
	unsigned int& FrameOffsetForTickIntervalField() { return *GetNativePointerField<unsigned int*>(this, "ALandscapeProxy.FrameOffsetForTickInterval"); }
	float& GrassTypesMaxDiscardDistanceField() { return *GetNativePointerField<float*>(this, "ALandscapeProxy.GrassTypesMaxDiscardDistance"); }
	float& StaticLightingResolutionField() { return *GetNativePointerField<float*>(this, "ALandscapeProxy.StaticLightingResolution"); }
	EShadowCacheInvalidationBehavior& ShadowCacheInvalidationBehaviorField() { return *GetNativePointerField<EShadowCacheInvalidationBehavior*>(this, "ALandscapeProxy.ShadowCacheInvalidationBehavior"); }
	FLightingChannels& LightingChannelsField() { return *GetNativePointerField<FLightingChannels*>(this, "ALandscapeProxy.LightingChannels"); }
	float& NonNaniteVirtualShadowMapConstantDepthBiasField() { return *GetNativePointerField<float*>(this, "ALandscapeProxy.NonNaniteVirtualShadowMapConstantDepthBias"); }
	float& NonNaniteVirtualShadowMapInvalidationHeightErrorThresholdField() { return *GetNativePointerField<float*>(this, "ALandscapeProxy.NonNaniteVirtualShadowMapInvalidationHeightErrorThreshold"); }
	float& NonNaniteVirtualShadowMapInvalidationScreenSizeLimitField() { return *GetNativePointerField<float*>(this, "ALandscapeProxy.NonNaniteVirtualShadowMapInvalidationScreenSizeLimit"); }
	ERendererStencilMask& CustomDepthStencilWriteMaskField() { return *GetNativePointerField<ERendererStencilMask*>(this, "ALandscapeProxy.CustomDepthStencilWriteMask"); }
	int& CustomDepthStencilValueField() { return *GetNativePointerField<int*>(this, "ALandscapeProxy.CustomDepthStencilValue"); }
	float& LDMaxDrawDistanceField() { return *GetNativePointerField<float*>(this, "ALandscapeProxy.LDMaxDrawDistance"); }
	FLightmassPrimitiveSettings& LightmassSettingsField() { return *GetNativePointerField<FLightmassPrimitiveSettings*>(this, "ALandscapeProxy.LightmassSettings"); }
	int& CollisionMipLevelField() { return *GetNativePointerField<int*>(this, "ALandscapeProxy.CollisionMipLevel"); }
	int& SimpleCollisionMipLevelField() { return *GetNativePointerField<int*>(this, "ALandscapeProxy.SimpleCollisionMipLevel"); }
	FBodyInstance& BodyInstanceField() { return *GetNativePointerField<FBodyInstance*>(this, "ALandscapeProxy.BodyInstance"); }
	int& ComponentSizeQuadsField() { return *GetNativePointerField<int*>(this, "ALandscapeProxy.ComponentSizeQuads"); }
	int& SubsectionSizeQuadsField() { return *GetNativePointerField<int*>(this, "ALandscapeProxy.SubsectionSizeQuads"); }
	int& NumSubsectionsField() { return *GetNativePointerField<int*>(this, "ALandscapeProxy.NumSubsections"); }
	ENavDataGatheringMode& NavigationGeometryGatheringModeField() { return *GetNativePointerField<ENavDataGatheringMode*>(this, "ALandscapeProxy.NavigationGeometryGatheringMode"); }
	bool& bUseDynamicMaterialInstanceField() { return *GetNativePointerField<bool*>(this, "ALandscapeProxy.bUseDynamicMaterialInstance"); }
	int& MaxLandscapeGrassSliceCountField() { return *GetNativePointerField<int*>(this, "ALandscapeProxy.MaxLandscapeGrassSliceCount"); }
	bool& bAllowStaticMeshGrassField() { return *GetNativePointerField<bool*>(this, "ALandscapeProxy.bAllowStaticMeshGrass"); }
	bool& bAllowDownFacingGrassSlicesField() { return *GetNativePointerField<bool*>(this, "ALandscapeProxy.bAllowDownFacingGrassSlices"); }
	bool& bPerSliceAutoZOffsetField() { return *GetNativePointerField<bool*>(this, "ALandscapeProxy.bPerSliceAutoZOffset"); }
	bool& bPerSliceCompressionField() { return *GetNativePointerField<bool*>(this, "ALandscapeProxy.bPerSliceCompression"); }
	bool& bPerSliceRuntimeGrassComponentsField() { return *GetNativePointerField<bool*>(this, "ALandscapeProxy.bPerSliceRuntimeGrassComponents"); }
	bool& bIgnoreGrassZBoundsField() { return *GetNativePointerField<bool*>(this, "ALandscapeProxy.bIgnoreGrassZBounds"); }
	bool& bRestrictStaticMeshGrassTypesField() { return *GetNativePointerField<bool*>(this, "ALandscapeProxy.bRestrictStaticMeshGrassTypes"); }
	bool& bIncludeWPOInGrassHeightField() { return *GetNativePointerField<bool*>(this, "ALandscapeProxy.bIncludeWPOInGrassHeight"); }
	bool& bUseLandscapeForCullingInvisibleHLODVerticesField() { return *GetNativePointerField<bool*>(this, "ALandscapeProxy.bUseLandscapeForCullingInvisibleHLODVertices"); }
	bool& bHasLayersContent_DEPRECATEDField() { return *GetNativePointerField<bool*>(this, "ALandscapeProxy.bHasLayersContent_DEPRECATED"); }
	bool& bStripPhysicsWhenCookedClientField() { return *GetNativePointerField<bool*>(this, "ALandscapeProxy.bStripPhysicsWhenCookedClient"); }
	bool& bStripPhysicsWhenCookedServerField() { return *GetNativePointerField<bool*>(this, "ALandscapeProxy.bStripPhysicsWhenCookedServer"); }
	bool& bStripGrassWhenCookedClientField() { return *GetNativePointerField<bool*>(this, "ALandscapeProxy.bStripGrassWhenCookedClient"); }
	bool& bStripGrassWhenCookedServerField() { return *GetNativePointerField<bool*>(this, "ALandscapeProxy.bStripGrassWhenCookedServer"); }
	bool& bHasEditLayersOnLoadField() { return *GetNativePointerField<bool*>(this, "ALandscapeProxy.bHasEditLayersOnLoad"); }
	BitFieldValue<bool, unsigned char> CastShadow() { return { this, "ALandscapeProxy.CastShadow"}; }
	BitFieldValue<bool, unsigned char> bCastDynamicShadow() { return { this, "ALandscapeProxy.bCastDynamicShadow"}; }
	BitFieldValue<bool, unsigned char> bCastStaticShadow() { return { this, "ALandscapeProxy.bCastStaticShadow"}; }
	BitFieldValue<bool, unsigned char> bCastContactShadow() { return { this, "ALandscapeProxy.bCastContactShadow"}; }
	BitFieldValue<bool, unsigned __int32> bCastFarShadow() { return { this, "ALandscapeProxy.bCastFarShadow"}; }
	BitFieldValue<bool, unsigned char> bCastHiddenShadow() { return { this, "ALandscapeProxy.bCastHiddenShadow"}; }
	BitFieldValue<bool, unsigned __int32> bCastShadowAsTwoSided() { return { this, "ALandscapeProxy.bCastShadowAsTwoSided"}; }
	BitFieldValue<bool, unsigned char> bAffectDistanceFieldLighting() { return { this, "ALandscapeProxy.bAffectDistanceFieldLighting"}; }
	BitFieldValue<bool, unsigned char> bAffectDynamicIndirectLighting() { return { this, "ALandscapeProxy.bAffectDynamicIndirectLighting"}; }
	BitFieldValue<bool, unsigned char> bAffectIndirectLightingWhileHidden() { return { this, "ALandscapeProxy.bAffectIndirectLightingWhileHidden"}; }
	BitFieldValue<bool, unsigned __int32> bUseMaterialPositionOffsetInStaticLighting() { return { this, "ALandscapeProxy.bUseMaterialPositionOffsetInStaticLighting"}; }
	BitFieldValue<bool, unsigned char> bHoldout() { return { this, "ALandscapeProxy.bHoldout"}; }
	BitFieldValue<bool, unsigned __int32> bRenderCustomDepth() { return { this, "ALandscapeProxy.bRenderCustomDepth"}; }
	BitFieldValue<bool, unsigned __int32> bGenerateOverlapEvents() { return { this, "ALandscapeProxy.bGenerateOverlapEvents"}; }
	BitFieldValue<bool, unsigned __int32> bBakeMaterialPositionOffsetIntoCollision() { return { this, "ALandscapeProxy.bBakeMaterialPositionOffsetIntoCollision"}; }
	BitFieldValue<bool, unsigned char> bIsLandscapeActorRegisteredWithLandscapeInfo() { return { this, "ALandscapeProxy.bIsLandscapeActorRegisteredWithLandscapeInfo"}; }
	BitFieldValue<bool, unsigned char> bIsRegisteredWithSubsystem() { return { this, "ALandscapeProxy.bIsRegisteredWithSubsystem"}; }
	BitFieldValue<bool, unsigned __int32> bUsedForNavigation() { return { this, "ALandscapeProxy.bUsedForNavigation"}; }
	BitFieldValue<bool, unsigned __int32> bFillCollisionUnderLandscapeForNavmesh() { return { this, "ALandscapeProxy.bFillCollisionUnderLandscapeForNavmesh"}; }
	void UpdateSharedProperties(ULandscapeInfo* InLandscapeInfo) { NativeCall<void, ULandscapeInfo*>(this, "ALandscapeProxy.UpdateSharedProperties(ULandscapeInfo*)", InLandscapeInfo); }
	bool LandscapeExportHeightmapToRenderTarget(UTextureRenderTarget2D* InRenderTarget, bool bInExportHeightIntoRGChannel, bool InExportLandscapeProxies) { return NativeCall<bool, UTextureRenderTarget2D*, bool, bool>(this, "ALandscapeProxy.LandscapeExportHeightmapToRenderTarget(UTextureRenderTarget2D*,bool,bool)", InRenderTarget, bInExportHeightIntoRGChannel, InExportLandscapeProxies); }
	unsigned int ComputeLandscapeKey() { return NativeCall<unsigned int>(this, "ALandscapeProxy.ComputeLandscapeKey()"); }
	FGuid* GetLandscapeGuid(FGuid* result) { return NativeCall<FGuid*, FGuid*>(this, "ALandscapeProxy.GetLandscapeGuid()", result); }
	static unsigned int ComputeLandscapeKey(const UWorld* InWorld, unsigned int InLODGroupKey, FGuid* InLandscapeGuid) { if (!InLandscapeGuid) throw std::invalid_argument("Null native value parameter"); return NativeCall<unsigned int, const UWorld *, unsigned int, FGuid>(nullptr, "ALandscapeProxy.ComputeLandscapeKey(UWorld*,unsignedint,FGuid)", InWorld, InLODGroupKey, *InLandscapeGuid); }
	bool IsSplineOwnerValid() { return NativeCall<bool>(this, "ALandscapeProxy.IsSplineOwnerValid()"); }
	bool IsLevelBoundsRelevant() { return NativeCall<bool>(this, "ALandscapeProxy.IsLevelBoundsRelevant()"); }
	void UpdateGrass(const TArray<UE::Math::TVector<double>, TSizedDefaultAllocator<32> >& Cameras, int& InOutNumCompsCreated, int& InOutNumComponentsExclusionChecks, bool bForceSync, URuntimeVirtualTexture* ForRVT, float ForceDiscardDistance) { NativeCall<void, const TArray<UE::Math::TVector<double>, TSizedDefaultAllocator<32> >&, int&, int&, bool, URuntimeVirtualTexture*, float>(this, "ALandscapeProxy.UpdateGrass(TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>>&,int&,int&,bool,URuntimeVirtualTexture*,float)", Cameras, InOutNumCompsCreated, InOutNumComponentsExclusionChecks, bForceSync, ForRVT, ForceDiscardDistance); }
	bool ShouldGenerateGrass() { return NativeCall<bool>(this, "ALandscapeProxy.ShouldGenerateGrass()"); }
	void PostRegisterAllComponents() { NativeCall<void>(this, "ALandscapeProxy.PostRegisterAllComponents()"); }
	void UpdateRenderingMethod() { NativeCall<void>(this, "ALandscapeProxy.UpdateRenderingMethod()"); }
	void SetVirtualTextureRenderPassType(ERuntimeVirtualTextureMainPassType InType) { NativeCall<void, ERuntimeVirtualTextureMainPassType>(this, "ALandscapeProxy.SetVirtualTextureRenderPassType(ERuntimeVirtualTextureMainPassType)", InType); }
	void ChangeComponentScreenSizeToUseSubSections(float InComponentScreenSizeToUseSubSections) { NativeCall<void, float>(this, "ALandscapeProxy.ChangeComponentScreenSizeToUseSubSections(float)", InComponentScreenSizeToUseSubSections); }
	static UClass* StaticClass() { return AsaApi::ResolveClass("ALandscapeProxy"); }
	static void RemoveInvalidExclusionBoxes() { NativeCall<void>(nullptr, "ALandscapeProxy.RemoveInvalidExclusionBoxes()"); }
	void Serialize(FArchive& Ar) { NativeCall<void, FArchive&>(this, "ALandscapeProxy.Serialize(FArchive&)", Ar); }
	UObject* _getUObject() { return NativeCall<UObject*>(this, "ALandscapeProxy._getUObject()"); }
	ULandscapeSplinesComponent* GetSplinesComponent() { return NativeCall<ULandscapeSplinesComponent*>(this, "ALandscapeProxy.GetSplinesComponent()"); }
	void EditorApplySpline(USplineComponent* InSplineComponent, float StartWidth, float EndWidth, float StartSideFalloff, float EndSideFalloff, float StartRoll, float EndRoll, int NumSubdivisions, bool bRaiseHeights, bool bLowerHeights, ULandscapeLayerInfoObject* PaintLayer, FName EditLayerName) { NativeCall<void, USplineComponent*, float, float, float, float, float, float, int, bool, bool, ULandscapeLayerInfoObject*, FName>(this, "ALandscapeProxy.EditorApplySpline(USplineComponent*,float,float,float,float,float,float,int,bool,bool,ULandscapeLayerInfoObject*,FName)", InSplineComponent, StartWidth, EndWidth, StartSideFalloff, EndSideFalloff, StartRoll, EndRoll, NumSubdivisions, bRaiseHeights, bLowerHeights, PaintLayer, EditLayerName); }
	void SetLandscapeMaterialScalarParameterValue(FName ParameterName, float Value) { NativeCall<void, FName, float>(this, "ALandscapeProxy.SetLandscapeMaterialScalarParameterValue(FName,float)", ParameterName, Value); }
	static void DebugDrawExclusionBoxes(const UWorld* InWorld) { NativeCall<void, const UWorld*>(nullptr, "ALandscapeProxy.DebugDrawExclusionBoxes(UWorld*)", InWorld); }
	void UnregisterAllComponents(bool bForReregister) { NativeCall<void, bool>(this, "ALandscapeProxy.UnregisterAllComponents(bool)", bForReregister); }
	ULandscapeInfo* GetLandscapeInfo() { return NativeCall<ULandscapeInfo*>(this, "ALandscapeProxy.GetLandscapeInfo()"); }
	UE::Math::TTransform<double>* LandscapeActorToWorld(UE::Math::TTransform<double>* result) { return NativeCall<UE::Math::TTransform<double>*, UE::Math::TTransform<double>*>(this, "ALandscapeProxy.LandscapeActorToWorld()", result); }
	void PostInitProperties() { NativeCall<void>(this, "ALandscapeProxy.PostInitProperties()"); }
	void UpdateGrass(const TArray<UE::Math::TVector<double>, TSizedDefaultAllocator<32> >& Cameras, bool bForceSync, URuntimeVirtualTexture* ForRVT, float ForceDiscardDistance) { NativeCall<void, const TArray<UE::Math::TVector<double>, TSizedDefaultAllocator<32> >&, bool, URuntimeVirtualTexture*, float>(this, "ALandscapeProxy.UpdateGrass(TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>>&,bool,URuntimeVirtualTexture*,float)", Cameras, bForceSync, ForRVT, ForceDiscardDistance); }
	void EditorSetLandscapeMaterial(UMaterialInterface* NewLandscapeMaterial) { NativeCall<void, UMaterialInterface*>(this, "ALandscapeProxy.EditorSetLandscapeMaterial(UMaterialInterface*)", NewLandscapeMaterial); }
	static void TickExclusionBoxes(UWorld* World, ELevelTick TickType, float DeltaSeconds) { NativeCall<void, UWorld*, ELevelTick, float>(nullptr, "ALandscapeProxy.TickExclusionBoxes(UWorld*,ELevelTick,float)", World, TickType, DeltaSeconds); }
	void SetLandscapeMaterialTextureParameterValue(FName ParameterName, UTexture* Value) { NativeCall<void, FName, UTexture*>(this, "ALandscapeProxy.SetLandscapeMaterialTextureParameterValue(FName,UTexture*)", ParameterName, Value); }
	UMaterialInterface* GetLandscapeHoleMaterial() { return NativeCall<UMaterialInterface*>(this, "ALandscapeProxy.GetLandscapeHoleMaterial()"); }
	void ChangeLODDistanceFactor(float InLODDistanceFactor) { NativeCall<void, float>(this, "ALandscapeProxy.ChangeLODDistanceFactor(float)", InLODDistanceFactor); }
	static void AddReferencedObjects(UObject* InThis, FReferenceCollector& Collector) { NativeCall<void, UObject*, FReferenceCollector&>(nullptr, "ALandscapeProxy.AddReferencedObjects(UObject*,FReferenceCollector&)", InThis, Collector); }
	void UpdateGrassTypeSummary() { NativeCall<void>(this, "ALandscapeProxy.UpdateGrassTypeSummary()"); }
	void FinishDestroy() { NativeCall<void>(this, "ALandscapeProxy.FinishDestroy()"); }
	void PostLoad() { NativeCall<void>(this, "ALandscapeProxy.PostLoad()"); }
};
