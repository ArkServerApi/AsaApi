#pragma once
#include "UEObjectForward.h"
#include "BulkForward.h"
#include "UMaterialInterface.h"

struct UMaterial : public UMaterialInterface
{
public:
	UMaterial() = delete;
	~UMaterial() = delete;
	UMaterial(const UMaterial&) = delete;
	UMaterial& operator=(const UMaterial&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UMaterial"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UMaterial"); }
	FMaterialOverrideNanite& NaniteOverrideMaterialField() { return *GetNativePointerField<FMaterialOverrideNanite*>(this, "UMaterial.NaniteOverrideMaterial"); }
	FDisplacementScaling& DisplacementScalingField() { return *GetNativePointerField<FDisplacementScaling*>(this, "UMaterial.DisplacementScaling"); }
	FDisplacementFadeRange& DisplacementFadeRangeField() { return *GetNativePointerField<FDisplacementFadeRange*>(this, "UMaterial.DisplacementFadeRange"); }
	FMaterialShadingModelField& ShadingModelsField() { return *GetNativePointerField<FMaterialShadingModelField*>(this, "UMaterial.ShadingModels"); }
	float& OpacityMaskClipValueField() { return *GetNativePointerField<float*>(this, "UMaterial.OpacityMaskClipValue"); }
	int& NumCustomizedUVsField() { return *GetNativePointerField<int*>(this, "UMaterial.NumCustomizedUVs"); }
	float& TranslucencyDirectionalLightingIntensityField() { return *GetNativePointerField<float*>(this, "UMaterial.TranslucencyDirectionalLightingIntensity"); }
	float& TranslucentShadowDensityScaleField() { return *GetNativePointerField<float*>(this, "UMaterial.TranslucentShadowDensityScale"); }
	float& TranslucentSelfShadowDensityScaleField() { return *GetNativePointerField<float*>(this, "UMaterial.TranslucentSelfShadowDensityScale"); }
	float& TranslucentSelfShadowSecondDensityScaleField() { return *GetNativePointerField<float*>(this, "UMaterial.TranslucentSelfShadowSecondDensityScale"); }
	float& TranslucentSelfShadowSecondOpacityField() { return *GetNativePointerField<float*>(this, "UMaterial.TranslucentSelfShadowSecondOpacity"); }
	float& TranslucentBackscatteringExponentField() { return *GetNativePointerField<float*>(this, "UMaterial.TranslucentBackscatteringExponent"); }
	FLinearColor& TranslucentMultipleScatteringExtinctionField() { return *GetNativePointerField<FLinearColor*>(this, "UMaterial.TranslucentMultipleScatteringExtinction"); }
	float& TranslucentShadowStartOffsetField() { return *GetNativePointerField<float*>(this, "UMaterial.TranslucentShadowStartOffset"); }
	float& TranslucentLocalLightShadowQualityField() { return *GetNativePointerField<float*>(this, "UMaterial.TranslucentLocalLightShadowQuality"); }
	float& TranslucentDirectionalLightShadowQualityField() { return *GetNativePointerField<float*>(this, "UMaterial.TranslucentDirectionalLightShadowQuality"); }
	FName& UserSceneTextureField() { return *GetNativePointerField<FName*>(this, "UMaterial.UserSceneTexture"); }
	FName& ResolutionRelativeToInputField() { return *GetNativePointerField<FName*>(this, "UMaterial.ResolutionRelativeToInput"); }
	unsigned char& StencilRefValueField() { return *GetNativePointerField<unsigned char*>(this, "UMaterial.StencilRefValue"); }
	int& BlendablePriorityField() { return *GetNativePointerField<int*>(this, "UMaterial.BlendablePriority"); }
	unsigned short& PreshaderGapField() { return *GetNativePointerField<unsigned short*>(this, "UMaterial.PreshaderGap"); }
	float& RefractionDepthBiasField() { return *GetNativePointerField<float*>(this, "UMaterial.RefractionDepthBias"); }
	float& MaxWorldPositionOffsetDisplacementField() { return *GetNativePointerField<float*>(this, "UMaterial.MaxWorldPositionOffsetDisplacement"); }
	bool& bAlwaysEvaluateWorldPositionOffsetField() { return *GetNativePointerField<bool*>(this, "UMaterial.bAlwaysEvaluateWorldPositionOffset"); }
	FSubstrateCompilationConfig& SubstrateCompilationConfigField() { return *GetNativePointerField<FSubstrateCompilationConfig*>(this, "UMaterial.SubstrateCompilationConfig"); }
	FGuid& StateIdField() { return *GetNativePointerField<FGuid*>(this, "UMaterial.StateId"); }
	FDefaultMaterialInstance*& DefaultMaterialInstanceField() { return *GetNativePointerField<FDefaultMaterialInstance**>(this, "UMaterial.DefaultMaterialInstance"); }
	FThreadSafeBool& ReleasedByRTField() { return *GetNativePointerField<FThreadSafeBool*>(this, "UMaterial.ReleasedByRT"); }
	bool& bCachingUniformExpressionsField() { return *GetNativePointerField<bool*>(this, "UMaterial.bCachingUniformExpressions"); }
	int& SSRQualityField() { return *GetNativePointerField<int*>(this, "UMaterial.SSRQuality"); }
	FString& CustomMainCodeField() { return *GetNativePointerField<FString*>(this, "UMaterial.CustomMainCode"); }
	BitFieldValue<bool, unsigned char> bCastDynamicShadowAsMasked() { return { this, "UMaterial.bCastDynamicShadowAsMasked"}; }
	BitFieldValue<bool, unsigned char> bEnableSeparateTranslucency_DEPRECATED() { return { this, "UMaterial.bEnableSeparateTranslucency_DEPRECATED"}; }
	BitFieldValue<bool, unsigned char> bEnableResponsiveAA() { return { this, "UMaterial.bEnableResponsiveAA"}; }
	BitFieldValue<bool, unsigned char> bScreenSpaceReflections_DEPRECATED() { return { this, "UMaterial.bScreenSpaceReflections_DEPRECATED"}; }
	BitFieldValue<bool, unsigned char> bContactShadows() { return { this, "UMaterial.bContactShadows"}; }
	BitFieldValue<bool, unsigned char> TwoSided() { return { this, "UMaterial.TwoSided"}; }
	BitFieldValue<bool, unsigned char> bIsThinSurface() { return { this, "UMaterial.bIsThinSurface"}; }
	BitFieldValue<bool, unsigned __int32> bUsedWithCustomDepths() { return { this, "UMaterial.bUsedWithCustomDepths"}; }
	BitFieldValue<bool, unsigned char> DitheredLODTransition() { return { this, "UMaterial.DitheredLODTransition"}; }
	BitFieldValue<bool, unsigned char> DitherOpacityMask() { return { this, "UMaterial.DitherOpacityMask"}; }
	BitFieldValue<bool, unsigned char> bAllowNegativeEmissiveColor() { return { this, "UMaterial.bAllowNegativeEmissiveColor"}; }
	BitFieldValue<bool, unsigned char> bHasPixelAnimation() { return { this, "UMaterial.bHasPixelAnimation"}; }
	BitFieldValue<bool, unsigned char> bEnableTessellation() { return { this, "UMaterial.bEnableTessellation"}; }
	BitFieldValue<bool, unsigned char> bEnableDisplacementFade() { return { this, "UMaterial.bEnableDisplacementFade"}; }
	BitFieldValue<bool, unsigned char> bToonOutlineWidthInWorldUnits() { return { this, "UMaterial.bToonOutlineWidthInWorldUnits"}; }
	BitFieldValue<bool, unsigned char> bEnableMobileSeparateTranslucency() { return { this, "UMaterial.bEnableMobileSeparateTranslucency"}; }
	BitFieldValue<bool, unsigned char> bAllowAdditionalSkyLightMultiplier() { return { this, "UMaterial.bAllowAdditionalSkyLightMultiplier"}; }
	BitFieldValue<bool, unsigned char> bAllowFullSceneColorTranslucentPath() { return { this, "UMaterial.bAllowFullSceneColorTranslucentPath"}; }
	BitFieldValue<bool, unsigned char> bDisableDepthTest() { return { this, "UMaterial.bDisableDepthTest"}; }
	BitFieldValue<bool, unsigned char> bWriteOnlyAlpha() { return { this, "UMaterial.bWriteOnlyAlpha"}; }
	BitFieldValue<bool, unsigned char> bGenerateSphericalParticleNormals() { return { this, "UMaterial.bGenerateSphericalParticleNormals"}; }
	BitFieldValue<bool, unsigned char> bTangentSpaceNormal() { return { this, "UMaterial.bTangentSpaceNormal"}; }
	BitFieldValue<bool, unsigned char> bUseEmissiveForDynamicAreaLighting() { return { this, "UMaterial.bUseEmissiveForDynamicAreaLighting"}; }
	BitFieldValue<bool, unsigned char> bUsedAsSpecialEngineMaterial() { return { this, "UMaterial.bUsedAsSpecialEngineMaterial"}; }
	BitFieldValue<bool, unsigned char> bSubstrateRoughnessTracking() { return { this, "UMaterial.bSubstrateRoughnessTracking"}; }
	BitFieldValue<bool, unsigned char> bUsedWithSkeletalMesh() { return { this, "UMaterial.bUsedWithSkeletalMesh"}; }
	BitFieldValue<bool, unsigned char> bUsedWithMeshDeformer() { return { this, "UMaterial.bUsedWithMeshDeformer"}; }
	BitFieldValue<bool, unsigned char> bUsedWithEditorCompositing() { return { this, "UMaterial.bUsedWithEditorCompositing"}; }
	BitFieldValue<bool, unsigned char> bUsedWithParticleSprites() { return { this, "UMaterial.bUsedWithParticleSprites"}; }
	BitFieldValue<bool, unsigned char> bUsedWithBeamTrails() { return { this, "UMaterial.bUsedWithBeamTrails"}; }
	BitFieldValue<bool, unsigned char> bUsedWithMeshParticles() { return { this, "UMaterial.bUsedWithMeshParticles"}; }
	BitFieldValue<bool, unsigned char> bUsedWithNiagaraSprites() { return { this, "UMaterial.bUsedWithNiagaraSprites"}; }
	BitFieldValue<bool, unsigned char> bUsedWithNiagaraRibbons() { return { this, "UMaterial.bUsedWithNiagaraRibbons"}; }
	BitFieldValue<bool, unsigned char> bUsedWithNiagaraMeshParticles() { return { this, "UMaterial.bUsedWithNiagaraMeshParticles"}; }
	BitFieldValue<bool, unsigned char> bUsedWithGeometryCache() { return { this, "UMaterial.bUsedWithGeometryCache"}; }
	BitFieldValue<bool, unsigned char> bUsedWithStaticLighting() { return { this, "UMaterial.bUsedWithStaticLighting"}; }
	BitFieldValue<bool, unsigned char> bUsedWithMorphTargets() { return { this, "UMaterial.bUsedWithMorphTargets"}; }
	BitFieldValue<bool, unsigned char> bUsedWithSplineMeshes() { return { this, "UMaterial.bUsedWithSplineMeshes"}; }
	BitFieldValue<bool, unsigned char> bUsedWithInstancedStaticMeshes() { return { this, "UMaterial.bUsedWithInstancedStaticMeshes"}; }
	BitFieldValue<bool, unsigned char> bUsedWithGeometryCollections() { return { this, "UMaterial.bUsedWithGeometryCollections"}; }
	BitFieldValue<bool, unsigned char> bUsesDistortion() { return { this, "UMaterial.bUsesDistortion"}; }
	BitFieldValue<bool, unsigned char> bRootNodeOverridesDefaultDistortion_DEPRECATED() { return { this, "UMaterial.bRootNodeOverridesDefaultDistortion_DEPRECATED"}; }
	BitFieldValue<bool, unsigned char> bUsedWithClothing() { return { this, "UMaterial.bUsedWithClothing"}; }
	BitFieldValue<bool, unsigned __int32> bUsedWithWater() { return { this, "UMaterial.bUsedWithWater"}; }
	BitFieldValue<bool, unsigned __int32> bUsedWithHairStrands() { return { this, "UMaterial.bUsedWithHairStrands"}; }
	BitFieldValue<bool, unsigned __int32> bUsedWithLidarPointCloud() { return { this, "UMaterial.bUsedWithLidarPointCloud"}; }
	BitFieldValue<bool, unsigned __int32> bUsedWithVirtualHeightfieldMesh() { return { this, "UMaterial.bUsedWithVirtualHeightfieldMesh"}; }
	BitFieldValue<bool, unsigned __int32> bUsedWithNanite() { return { this, "UMaterial.bUsedWithNanite"}; }
	BitFieldValue<bool, unsigned char> bUsedWithVoxels() { return { this, "UMaterial.bUsedWithVoxels"}; }
	BitFieldValue<bool, unsigned char> bUsedWithCurves() { return { this, "UMaterial.bUsedWithCurves"}; }
	BitFieldValue<bool, unsigned __int32> bUsedWithVolumetricCloud() { return { this, "UMaterial.bUsedWithVolumetricCloud"}; }
	BitFieldValue<bool, unsigned __int32> bUsedWithHeterogeneousVolumes() { return { this, "UMaterial.bUsedWithHeterogeneousVolumes"}; }
	BitFieldValue<bool, unsigned __int32> bUsedWithInstancedSkinnedMesh() { return { this, "UMaterial.bUsedWithInstancedSkinnedMesh"}; }
	BitFieldValue<bool, unsigned __int32> bUsedWithStaticMesh() { return { this, "UMaterial.bUsedWithStaticMesh"}; }
	BitFieldValue<bool, unsigned char> bUsedWithUI_DEPRECATED() { return { this, "UMaterial.bUsedWithUI_DEPRECATED"}; }
	BitFieldValue<bool, unsigned char> bForceCompatibleWithLightFunctionAtlas() { return { this, "UMaterial.bForceCompatibleWithLightFunctionAtlas"}; }
	BitFieldValue<bool, unsigned char> bAutomaticallySetUsageInEditor() { return { this, "UMaterial.bAutomaticallySetUsageInEditor"}; }
	BitFieldValue<bool, unsigned char> bFullyRough() { return { this, "UMaterial.bFullyRough"}; }
	BitFieldValue<bool, unsigned char> bUseFullPrecision_DEPRECATED() { return { this, "UMaterial.bUseFullPrecision_DEPRECATED"}; }
	BitFieldValue<bool, unsigned char> bUseLightmapDirectionality() { return { this, "UMaterial.bUseLightmapDirectionality"}; }
	BitFieldValue<bool, unsigned char> bUseAlphaToCoverage() { return { this, "UMaterial.bUseAlphaToCoverage"}; }
	BitFieldValue<bool, unsigned __int32> bForwardRenderUsePreintegratedGFForSimpleIBL() { return { this, "UMaterial.bForwardRenderUsePreintegratedGFForSimpleIBL"}; }
	BitFieldValue<bool, unsigned char> bUseHQForwardReflections() { return { this, "UMaterial.bUseHQForwardReflections"}; }
	BitFieldValue<bool, unsigned char> bForwardBlendsSkyLightCubemaps() { return { this, "UMaterial.bForwardBlendsSkyLightCubemaps"}; }
	BitFieldValue<bool, unsigned char> bUsePlanarForwardReflections() { return { this, "UMaterial.bUsePlanarForwardReflections"}; }
	BitFieldValue<bool, unsigned char> bNormalCurvatureToRoughness() { return { this, "UMaterial.bNormalCurvatureToRoughness"}; }
	BitFieldValue<bool, unsigned char> AllowTranslucentCustomDepthWrites() { return { this, "UMaterial.AllowTranslucentCustomDepthWrites"}; }
	BitFieldValue<bool, unsigned char> bAllowFrontLayerTranslucency() { return { this, "UMaterial.bAllowFrontLayerTranslucency"}; }
	BitFieldValue<bool, unsigned char> bCompatibleWithLumenCardSharing() { return { this, "UMaterial.bCompatibleWithLumenCardSharing"}; }
	BitFieldValue<bool, unsigned char> Wireframe() { return { this, "UMaterial.Wireframe"}; }
	BitFieldValue<bool, unsigned char> bAllowTranslucentLocalLightShadow() { return { this, "UMaterial.bAllowTranslucentLocalLightShadow"}; }
	BitFieldValue<bool, unsigned char> bAllowVariableRateShading() { return { this, "UMaterial.bAllowVariableRateShading"}; }
	BitFieldValue<bool, unsigned char> bCanMaskedBeAssumedOpaque() { return { this, "UMaterial.bCanMaskedBeAssumedOpaque"}; }
	BitFieldValue<bool, unsigned char> bIsMasked_DEPRECATED() { return { this, "UMaterial.bIsMasked_DEPRECATED"}; }
	BitFieldValue<bool, unsigned char> bIsPreviewMaterial() { return { this, "UMaterial.bIsPreviewMaterial"}; }
	BitFieldValue<bool, unsigned char> bIsFunctionPreviewMaterial() { return { this, "UMaterial.bIsFunctionPreviewMaterial"}; }
	BitFieldValue<bool, unsigned char> bUseMaterialAttributes() { return { this, "UMaterial.bUseMaterialAttributes"}; }
	BitFieldValue<bool, unsigned char> bEnableExecWire() { return { this, "UMaterial.bEnableExecWire"}; }
	BitFieldValue<bool, unsigned char> bEnableNewHLSLGenerator() { return { this, "UMaterial.bEnableNewHLSLGenerator"}; }
	BitFieldValue<bool, unsigned char> bCastRayTracedShadows() { return { this, "UMaterial.bCastRayTracedShadows"}; }
	BitFieldValue<bool, unsigned char> bUseTranslucencyVertexFog() { return { this, "UMaterial.bUseTranslucencyVertexFog"}; }
	BitFieldValue<bool, unsigned char> bApplyCloudFogging() { return { this, "UMaterial.bApplyCloudFogging"}; }
	BitFieldValue<bool, unsigned char> bIsSky() { return { this, "UMaterial.bIsSky"}; }
	BitFieldValue<bool, unsigned char> bComputeFogPerPixel() { return { this, "UMaterial.bComputeFogPerPixel"}; }
	BitFieldValue<bool, unsigned char> bOutputTranslucentVelocity() { return { this, "UMaterial.bOutputTranslucentVelocity"}; }
	BitFieldValue<bool, unsigned char> bIsTranslucencyVelocityFromDepth() { return { this, "UMaterial.bIsTranslucencyVelocityFromDepth"}; }
	BitFieldValue<bool, unsigned char> bAllowDevelopmentShaderCompile() { return { this, "UMaterial.bAllowDevelopmentShaderCompile"}; }
	BitFieldValue<bool, unsigned char> bIsMaterialEditorStatsMaterial() { return { this, "UMaterial.bIsMaterialEditorStatsMaterial"}; }
	BitFieldValue<bool, unsigned char> bRelaxRuntimeVirtualTextureRestrictions() { return { this, "UMaterial.bRelaxRuntimeVirtualTextureRestrictions"}; }
	BitFieldValue<bool, unsigned char> bRelaxRuntimeVirtualTextureRestrictionsForOldContent() { return { this, "UMaterial.bRelaxRuntimeVirtualTextureRestrictionsForOldContent"}; }
	BitFieldValue<bool, unsigned char> BlendableOutputAlpha() { return { this, "UMaterial.BlendableOutputAlpha"}; }
	BitFieldValue<bool, unsigned char> bDisablePreExposureScale() { return { this, "UMaterial.bDisablePreExposureScale"}; }
	BitFieldValue<bool, unsigned char> bUsedWithNeuralNetworks() { return { this, "UMaterial.bUsedWithNeuralNetworks"}; }
	BitFieldValue<bool, unsigned char> bEnableStencilTest() { return { this, "UMaterial.bEnableStencilTest"}; }
	BitFieldValue<bool, unsigned char> bIsBlendable() { return { this, "UMaterial.bIsBlendable"}; }
	bool HasCustomizedUVs() { return NativeCall<bool>(this, "UMaterial.HasCustomizedUVs()"); }
	bool CanBeClusterRoot() { return NativeCall<bool>(this, "UMaterial.CanBeClusterRoot()"); }
	bool IsCompatibleWithLumenCardSharing() { return NativeCall<bool>(this, "UMaterial.IsCompatibleWithLumenCardSharing()"); }
	void PostDuplicate(bool bDuplicateForPIE) { NativeCall<void, bool>(this, "UMaterial.PostDuplicate(bool)", bDuplicateForPIE); }
	void BeginDestroy() { NativeCall<void>(this, "UMaterial.BeginDestroy()"); }
	unsigned int NumToonProfile_Internal() { return NativeCall<unsigned int>(this, "UMaterial.NumToonProfile_Internal()"); }
	bool IsMasked() { return NativeCall<bool>(this, "UMaterial.IsMasked()"); }
	bool CastsRayTracedShadows() { return NativeCall<bool>(this, "UMaterial.CastsRayTracedShadows()"); }
	float GetOpacityMaskClipValue() { return NativeCall<float>(this, "UMaterial.GetOpacityMaskClipValue()"); }
	bool GetRefractionSettings(float& OutBiasValue) { return NativeCall<bool, float&>(this, "UMaterial.GetRefractionSettings(float&)", OutBiasValue); }
	bool HasSubstrateRoughnessTracking() { return NativeCall<bool>(this, "UMaterial.HasSubstrateRoughnessTracking()"); }
	FMaterialRenderProxy* GetRenderProxy() { return NativeCall<FMaterialRenderProxy*>(this, "UMaterial.GetRenderProxy()"); }
	USubsurfaceProfile* GetSubsurfaceProfile_Internal() { return NativeCall<USubsurfaceProfile*>(this, "UMaterial.GetSubsurfaceProfile_Internal()"); }
	UPhysicalMaterial* GetPhysicalMaterial() { return NativeCall<UPhysicalMaterial*>(this, "UMaterial.GetPhysicalMaterial()"); }
	UToonProfile* GetToonProfile_Internal(unsigned int Index) { return NativeCall<UToonProfile*, unsigned int>(this, "UMaterial.GetToonProfile_Internal(unsignedint)", Index); }
	bool HasMeshPaintTexture() { return NativeCall<bool>(this, "UMaterial.HasMeshPaintTexture()"); }
	void Serialize(FArchive& Ar) { NativeCall<void, FArchive&>(this, "UMaterial.Serialize(FArchive&)", Ar); }
	bool IsComplete() { return NativeCall<bool>(this, "UMaterial.IsComplete()"); }
	bool IsUIMaterial() { return NativeCall<bool>(this, "UMaterial.IsUIMaterial()"); }
	bool IsComputeMaterial() { return NativeCall<bool>(this, "UMaterial.IsComputeMaterial()"); }
	unsigned int NumSpecularProfile_Internal() { return NativeCall<unsigned int>(this, "UMaterial.NumSpecularProfile_Internal()"); }
	bool HasMetallicConnected() { return NativeCall<bool>(this, "UMaterial.HasMetallicConnected()"); }
	UNeuralProfile* GetNeuralProfile_Internal() { return NativeCall<UNeuralProfile*>(this, "UMaterial.GetNeuralProfile_Internal()"); }
	bool HasRoughnessConnected() { return NativeCall<bool>(this, "UMaterial.HasRoughnessConnected()"); }
	bool WritesToRuntimeVirtualTexture() { return NativeCall<bool>(this, "UMaterial.WritesToRuntimeVirtualTexture()"); }
	void PostLoad() { NativeCall<void>(this, "UMaterial.PostLoad()"); }
	bool IsTranslucencyWritingCustomDepth() { return NativeCall<bool>(this, "UMaterial.IsTranslucencyWritingCustomDepth()"); }
	UPhysicalMaterialMask* GetPhysicalMaterialMask() { return NativeCall<UPhysicalMaterialMask*>(this, "UMaterial.GetPhysicalMaterialMask()"); }
	bool IsMobileSeparateTranslucencyEnabled() { return NativeCall<bool>(this, "UMaterial.IsMobileSeparateTranslucencyEnabled()"); }
	void DumpDebugInfo(FOutputDevice& OutputDevice) { NativeCall<void, FOutputDevice&>(this, "UMaterial.DumpDebugInfo(FOutputDevice&)", OutputDevice); }
	float GetMaxWorldPositionOffsetDisplacement() { return NativeCall<float>(this, "UMaterial.GetMaxWorldPositionOffsetDisplacement()"); }
	FMaterialResource* AllocateResource() { return NativeCall<FMaterialResource*>(this, "UMaterial.AllocateResource()"); }
	bool IsShadingModelFromMaterialExpression() { return NativeCall<bool>(this, "UMaterial.IsShadingModelFromMaterialExpression()"); }
	unsigned int NumSubsurfaceProfileRoot_Internal() { return NativeCall<unsigned int>(this, "UMaterial.NumSubsurfaceProfileRoot_Internal()"); }
	static void AddReferencedObjects(UObject* InThis, FReferenceCollector& Collector) { NativeCall<void, UObject*, FReferenceCollector&>(nullptr, "UMaterial.AddReferencedObjects(UObject*,FReferenceCollector&)", InThis, Collector); }
	USubsurfaceProfile* GetSubsurfaceProfileRoot_Internal(unsigned int Index) { return NativeCall<USubsurfaceProfile*, unsigned int>(this, "UMaterial.GetSubsurfaceProfileRoot_Internal(unsignedint)", Index); }
	static void AllMaterialsCacheResourceShadersForRendering(bool bUpdateProgressDialog, bool bCacheAllRemainingShaders) { NativeCall<void, bool, bool>(nullptr, "UMaterial.AllMaterialsCacheResourceShadersForRendering(bool,bool)", bUpdateProgressDialog, bCacheAllRemainingShaders); }
	bool GetCastDynamicShadowAsMasked() { return NativeCall<bool>(this, "UMaterial.GetCastDynamicShadowAsMasked()"); }
	int GetBlendablePriority(const UMaterial* Base) { return NativeCall<int, const UMaterial*>(this, "UMaterial.GetBlendablePriority(UMaterial*)", Base); }
	bool HasSpecularConnected() { return NativeCall<bool>(this, "UMaterial.HasSpecularConnected()"); }
	bool HasCustomPrimitiveData() { return NativeCall<bool>(this, "UMaterial.HasCustomPrimitiveData()"); }
	bool HasEmissiveColorConnected() { return NativeCall<bool>(this, "UMaterial.HasEmissiveColorConnected()"); }
	bool UpdateLightmassTextureTracking() { return NativeCall<bool>(this, "UMaterial.UpdateLightmassTextureTracking()"); }
	bool HasNormalConnected() { return NativeCall<bool>(this, "UMaterial.HasNormalConnected()"); }
	USpecularProfile* GetSpecularProfile_Internal(unsigned int Index) { return NativeCall<USpecularProfile*, unsigned int>(this, "UMaterial.GetSpecularProfile_Internal(unsignedint)", Index); }
	bool IsReadyForFinishDestroy() { return NativeCall<bool>(this, "UMaterial.IsReadyForFinishDestroy()"); }
	USubsurfaceProfile* GetSubsurfaceProfileRoot_Internal() { return NativeCall<USubsurfaceProfile*>(this, "UMaterial.GetSubsurfaceProfileRoot_Internal()"); }
	bool IsTranslucencyWritingFrontLayerTransparency() { return NativeCall<bool>(this, "UMaterial.IsTranslucencyWritingFrontLayerTransparency()"); }
	void RecacheUniformExpressions(bool bRecreateUniformBuffer) { NativeCall<void, bool>(this, "UMaterial.RecacheUniformExpressions(bool)", bRecreateUniformBuffer); }
	bool ShouldAlwaysEvaluateWorldPositionOffset() { return NativeCall<bool>(this, "UMaterial.ShouldAlwaysEvaluateWorldPositionOffset()"); }
	void GetMaterialInheritanceChain(FMaterialInheritanceChain& OutChain) { NativeCall<void, FMaterialInheritanceChain&>(this, "UMaterial.GetMaterialInheritanceChain(FMaterialInheritanceChain&)", OutChain); }
	bool IsLightFunctionMaterial() { return NativeCall<bool>(this, "UMaterial.IsLightFunctionMaterial()"); }
	void FinishDestroy() { NativeCall<void>(this, "UMaterial.FinishDestroy()"); }
	void GetLightingGuidChain(bool bIncludeTextures, TArray<FGuid, TSizedDefaultAllocator<32> >& OutGuids) { NativeCall<void, bool, TArray<FGuid, TSizedDefaultAllocator<32> >&>(this, "UMaterial.GetLightingGuidChain(bool,TArray<FGuid,TSizedDefaultAllocator<32>>&)", bIncludeTextures, OutGuids); }
	bool IsPostProcessMaterialOutputingAlpha() { return NativeCall<bool>(this, "UMaterial.IsPostProcessMaterialOutputingAlpha()"); }
	bool HasPixelDepthOffsetConnected() { return NativeCall<bool>(this, "UMaterial.HasPixelDepthOffsetConnected()"); }
	bool HasBaseColorConnected() { return NativeCall<bool>(this, "UMaterial.HasBaseColorConnected()"); }
	bool IsTwoSided() { return NativeCall<bool>(this, "UMaterial.IsTwoSided()"); }
	void ReleaseResourcesAndMutateDDCKey(const FGuid& TransformationId) { NativeCall<void, const FGuid&>(this, "UMaterial.ReleaseResourcesAndMutateDDCKey(FGuid&)", TransformationId); }
	bool IsTranslucencyWritingVelocity() { return NativeCall<bool>(this, "UMaterial.IsTranslucencyWritingVelocity()"); }
	bool HasVertexPositionOffsetConnected() { return NativeCall<bool>(this, "UMaterial.HasVertexPositionOffsetConnected()"); }
	unsigned int GetUsageFlags() { return NativeCall<unsigned int>(this, "UMaterial.GetUsageFlags()"); }
	bool IsDisplacementFadeEnabled() { return NativeCall<bool>(this, "UMaterial.IsDisplacementFadeEnabled()"); }
	bool IsDeferredDecal() { return NativeCall<bool>(this, "UMaterial.IsDeferredDecal()"); }
	bool IsTranslucencyVelocityFromDepth() { return NativeCall<bool>(this, "UMaterial.IsTranslucencyVelocityFromDepth()"); }
	bool HasAmbientOcclusionConnected() { return NativeCall<bool>(this, "UMaterial.HasAmbientOcclusionConnected()"); }
	bool IsThinSurface() { return NativeCall<bool>(this, "UMaterial.IsThinSurface()"); }
	bool HasPixelAnimation() { return NativeCall<bool>(this, "UMaterial.HasPixelAnimation()"); }
	void SetInitialValues() { NativeCall<void>(this, "UMaterial.SetInitialValues()"); }
	void PostInitProperties() { NativeCall<void>(this, "UMaterial.PostInitProperties()"); }
	bool IsDitheredLODTransition() { return NativeCall<bool>(this, "UMaterial.IsDitheredLODTransition()"); }
	void SaveShaderStableKeysInner(const ITargetPlatform* TP, const FStableShaderKeyAndValue& InSaveKeyVal) { NativeCall<void, const ITargetPlatform*, const FStableShaderKeyAndValue&>(this, "UMaterial.SaveShaderStableKeysInner(ITargetPlatform*,FStableShaderKeyAndValue&)", TP, InSaveKeyVal); }
	bool HasAnisotropyConnected() { return NativeCall<bool>(this, "UMaterial.HasAnisotropyConnected()"); }
	bool HasVertexInterpolator() { return NativeCall<bool>(this, "UMaterial.HasVertexInterpolator()"); }
	void OverrideTexture(const UTexture* InTextureToOverride, UTexture* OverrideTexture, ERHIFeatureLevel::Type InFeatureLevel) { NativeCall<void, const UTexture*, UTexture*, ERHIFeatureLevel::Type>(this, "UMaterial.OverrideTexture(UTexture*,UTexture*,ERHIFeatureLevel::Type)", InTextureToOverride, OverrideTexture, InFeatureLevel); }
	void GetResourceSizeEx(FResourceSizeEx& CumulativeResourceSize) { NativeCall<void, FResourceSizeEx&>(this, "UMaterial.GetResourceSizeEx(FResourceSizeEx&)", CumulativeResourceSize); }
	bool IsDefaultMaterial() { return NativeCall<bool>(this, "UMaterial.IsDefaultMaterial()"); }
	USubsurfaceProfile* GetSubsurfaceProfileOverride_Internal() { return NativeCall<USubsurfaceProfile*>(this, "UMaterial.GetSubsurfaceProfileOverride_Internal()"); }
	bool IsUsedWithVolumetricCloud() { return NativeCall<bool>(this, "UMaterial.IsUsedWithVolumetricCloud()"); }
	bool IsTessellationEnabled() { return NativeCall<bool>(this, "UMaterial.IsTessellationEnabled()"); }
	bool IsPostProcessMaterial() { return NativeCall<bool>(this, "UMaterial.IsPostProcessMaterial()"); }
	UPhysicalMaterial* GetPhysicalMaterialFromMap(int Index) { return NativeCall<UPhysicalMaterial*, int>(this, "UMaterial.GetPhysicalMaterialFromMap(int)", Index); }
};
