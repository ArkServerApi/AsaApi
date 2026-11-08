#pragma once
#include "UEObjectForward.h"
#include "BulkForward.h"
#include "UMaterialInterface.h"

class UMaterialInstance : public UMaterialInterface
{
public:
	UMaterialInstance() = delete;
	~UMaterialInstance() = delete;
	UMaterialInstance(const UMaterialInstance&) = delete;
	UMaterialInstance& operator=(const UMaterialInstance&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UMaterialInstance"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UMaterialInstance"); }
	FMaterialOverrideNanite& NaniteOverrideMaterialField() { return *GetNativePointerField<FMaterialOverrideNanite*>(this, "UMaterialInstance.NaniteOverrideMaterial"); }
	int& BlendablePriorityOverrideField() { return *GetNativePointerField<int*>(this, "UMaterialInstance.BlendablePriorityOverride"); }
	FMaterialShadingModelField& ShadingModelsField() { return *GetNativePointerField<FMaterialShadingModelField*>(this, "UMaterialInstance.ShadingModels"); }
	bool& bResourceCreatedField() { return *GetNativePointerField<bool*>(this, "UMaterialInstance.bResourceCreated"); }
	bool& bCachingUniformExpressionsField() { return *GetNativePointerField<bool*>(this, "UMaterialInstance.bCachingUniformExpressions"); }
	float& OpacityMaskClipValueField() { return *GetNativePointerField<float*>(this, "UMaterialInstance.OpacityMaskClipValue"); }
	FDisplacementScaling& DisplacementScalingField() { return *GetNativePointerField<FDisplacementScaling*>(this, "UMaterialInstance.DisplacementScaling"); }
	FDisplacementFadeRange& DisplacementFadeRangeField() { return *GetNativePointerField<FDisplacementFadeRange*>(this, "UMaterialInstance.DisplacementFadeRange"); }
	float& MaxWorldPositionOffsetDisplacementField() { return *GetNativePointerField<float*>(this, "UMaterialInstance.MaxWorldPositionOffsetDisplacement"); }
	unsigned int& UsageFlagsField() { return *GetNativePointerField<unsigned int*>(this, "UMaterialInstance.UsageFlags"); }
	FMaterialInstanceBasePropertyOverrides& BasePropertyOverridesField() { return *GetNativePointerField<FMaterialInstanceBasePropertyOverrides*>(this, "UMaterialInstance.BasePropertyOverrides"); }
	FMaterialInstanceRenderProxy*& ResourceField() { return *GetNativePointerField<FMaterialInstanceRenderProxy**>(this, "UMaterialInstance.Resource"); }
	FStaticParameterSetRuntimeData& StaticParametersRuntimeField() { return *GetNativePointerField<FStaticParameterSetRuntimeData*>(this, "UMaterialInstance.StaticParametersRuntime"); }
	FMaterialInstanceRenderProxy*& RenderProxyField() { return *GetNativePointerField<FMaterialInstanceRenderProxy**>(this, "UMaterialInstance.RenderProxy"); }
	BitFieldValue<bool, unsigned char> bHasStaticPermutationResource() { return { this, "UMaterialInstance.bHasStaticPermutationResource"}; }
	BitFieldValue<bool, unsigned char> bOverrideSubsurfaceProfile() { return { this, "UMaterialInstance.bOverrideSubsurfaceProfile"}; }
	BitFieldValue<bool, unsigned char> bOverrideSpecularProfile() { return { this, "UMaterialInstance.bOverrideSpecularProfile"}; }
	BitFieldValue<bool, unsigned char> bOverrideToonProfile() { return { this, "UMaterialInstance.bOverrideToonProfile"}; }
	BitFieldValue<bool, unsigned char> bOverrideDynamicCustomDataOutput() { return { this, "UMaterialInstance.bOverrideDynamicCustomDataOutput"}; }
	BitFieldValue<bool, unsigned char> bOverrideBlendableLocation() { return { this, "UMaterialInstance.bOverrideBlendableLocation"}; }
	BitFieldValue<bool, unsigned char> bOverrideBlendablePriority() { return { this, "UMaterialInstance.bOverrideBlendablePriority"}; }
	BitFieldValue<bool, unsigned char> bOverridePhysMaterial() { return { this, "UMaterialInstance.bOverridePhysMaterial"}; }
	BitFieldValue<bool, unsigned char> TwoSided() { return { this, "UMaterialInstance.TwoSided"}; }
	BitFieldValue<bool, unsigned char> bIsThinSurface() { return { this, "UMaterialInstance.bIsThinSurface"}; }
	BitFieldValue<bool, unsigned char> DitheredLODTransition() { return { this, "UMaterialInstance.DitheredLODTransition"}; }
	BitFieldValue<bool, unsigned char> bCastDynamicShadowAsMasked() { return { this, "UMaterialInstance.bCastDynamicShadowAsMasked"}; }
	BitFieldValue<bool, unsigned char> bOutputTranslucentVelocity() { return { this, "UMaterialInstance.bOutputTranslucentVelocity"}; }
	BitFieldValue<bool, unsigned char> bIsShadingModelFromMaterialExpression() { return { this, "UMaterialInstance.bIsShadingModelFromMaterialExpression"}; }
	BitFieldValue<bool, unsigned char> bHasPixelAnimation() { return { this, "UMaterialInstance.bHasPixelAnimation"}; }
	BitFieldValue<bool, unsigned char> bEnableTessellation() { return { this, "UMaterialInstance.bEnableTessellation"}; }
	BitFieldValue<bool, unsigned char> bOverrideDynamicCustomDataOutputRowCountParam() { return { this, "UMaterialInstance.bOverrideDynamicCustomDataOutputRowCountParam"}; }
	BitFieldValue<bool, unsigned char> bEnableDisplacementFade() { return { this, "UMaterialInstance.bEnableDisplacementFade"}; }
	BitFieldValue<bool, unsigned char> bCompatibleWithLumenCardSharing() { return { this, "UMaterialInstance.bCompatibleWithLumenCardSharing"}; }
	BitFieldValue<bool, unsigned char> bUsedWithVolumetricCloud() { return { this, "UMaterialInstance.bUsedWithVolumetricCloud"}; }
	BitFieldValue<bool, unsigned char> bLoadedCachedData() { return { this, "UMaterialInstance.bLoadedCachedData"}; }
	bool IsComplete() { return NativeCall<bool>(this, "UMaterialInstance.IsComplete()"); }
	void Serialize(FArchive& Ar) { NativeCall<void, FArchive&>(this, "UMaterialInstance.Serialize(FArchive&)", Ar); }
	bool IsTwoSided() { return NativeCall<bool>(this, "UMaterialInstance.IsTwoSided()"); }
	void GetMaterialInheritanceChain(FMaterialInheritanceChain& OutChain) { NativeCall<void, FMaterialInheritanceChain&>(this, "UMaterialInstance.GetMaterialInheritanceChain(FMaterialInheritanceChain&)", OutChain); }
	bool IsTranslucencyVelocityFromDepth() { return NativeCall<bool>(this, "UMaterialInstance.IsTranslucencyVelocityFromDepth()"); }
	void SetRuntimeVirtualTextureParameterValueInternal(const FMaterialParameterInfo& ParameterInfo, URuntimeVirtualTexture* Value) { NativeCall<void, const FMaterialParameterInfo&, URuntimeVirtualTexture*>(this, "UMaterialInstance.SetRuntimeVirtualTextureParameterValueInternal(FMaterialParameterInfo&,URuntimeVirtualTexture*)", ParameterInfo, Value); }
	void BeginDestroy() { NativeCall<void>(this, "UMaterialInstance.BeginDestroy()"); }
	bool IsMasked() { return NativeCall<bool>(this, "UMaterialInstance.IsMasked()"); }
	void FinishDestroy() { NativeCall<void>(this, "UMaterialInstance.FinishDestroy()"); }
	void SaveShaderStableKeysInner(const ITargetPlatform* TP, const FStableShaderKeyAndValue& InSaveKeyVal) { NativeCall<void, const ITargetPlatform*, const FStableShaderKeyAndValue&>(this, "UMaterialInstance.SaveShaderStableKeysInner(ITargetPlatform*,FStableShaderKeyAndValue&)", TP, InSaveKeyVal); }
	bool IsLightFunctionMaterial() { return NativeCall<bool>(this, "UMaterialInstance.IsLightFunctionMaterial()"); }
	USpecularProfile* GetSpecularProfileOverride_Internal() { return NativeCall<USpecularProfile*>(this, "UMaterialInstance.GetSpecularProfileOverride_Internal()"); }
	UPhysicalMaterial* GetPhysicalMaterialFromMap(int Index) { return NativeCall<UPhysicalMaterial*, int>(this, "UMaterialInstance.GetPhysicalMaterialFromMap(int)", Index); }
	UMaterialInterface* GetFarDrawOverride() { return NativeCall<UMaterialInterface*>(this, "UMaterialInstance.GetFarDrawOverride()"); }
	bool SetParentInternal(UMaterialInterface* NewParent, bool RecacheShaders) { return NativeCall<bool, UMaterialInterface*, bool>(this, "UMaterialInstance.SetParentInternal(UMaterialInterface*,bool)", NewParent, RecacheShaders); }
	float GetExportResolutionScale() { return NativeCall<float>(this, "UMaterialInstance.GetExportResolutionScale()"); }
	bool HasOverridenBaseProperties() { return NativeCall<bool>(this, "UMaterialInstance.HasOverridenBaseProperties()"); }
	void GetLightingGuidChain(bool bIncludeTextures, TArray<FGuid, TSizedDefaultAllocator<32> >& OutGuids) { NativeCall<void, bool, TArray<FGuid, TSizedDefaultAllocator<32> >&>(this, "UMaterialInstance.GetLightingGuidChain(bool,TArray<FGuid,TSizedDefaultAllocator<32>>&)", bIncludeTextures, OutGuids); }
	bool HasVertexInterpolator() { return NativeCall<bool>(this, "UMaterialInstance.HasVertexInterpolator()"); }
	bool IsDitheredLODTransition() { return NativeCall<bool>(this, "UMaterialInstance.IsDitheredLODTransition()"); }
	void InitResources() { NativeCall<void>(this, "UMaterialInstance.InitResources()"); }
	bool IsTranslucencyWritingVelocity() { return NativeCall<bool>(this, "UMaterialInstance.IsTranslucencyWritingVelocity()"); }
	void SetSparseVolumeTextureParameterValueInternal(const FMaterialParameterInfo& ParameterInfo, USparseVolumeTexture* Value) { NativeCall<void, const FMaterialParameterInfo&, USparseVolumeTexture*>(this, "UMaterialInstance.SetSparseVolumeTextureParameterValueInternal(FMaterialParameterInfo&,USparseVolumeTexture*)", ParameterInfo, Value); }
	bool IsDisplacementFadeEnabled() { return NativeCall<bool>(this, "UMaterialInstance.IsDisplacementFadeEnabled()"); }
	unsigned int GetUsageFlags() { return NativeCall<unsigned int>(this, "UMaterialInstance.GetUsageFlags()"); }
	bool IsThinSurface() { return NativeCall<bool>(this, "UMaterialInstance.IsThinSurface()"); }
	bool IsDeferredDecal() { return NativeCall<bool>(this, "UMaterialInstance.IsDeferredDecal()"); }
	bool GetTextureCollectionParameterValue(const FMemoryImageMaterialParameterInfo& ParameterInfo, UTextureCollection*& OutValue, bool bOveriddenOnly) { return NativeCall<bool, const FMemoryImageMaterialParameterInfo&, UTextureCollection*&, bool>(this, "UMaterialInstance.GetTextureCollectionParameterValue(FMemoryImageMaterialParameterInfo&,UTextureCollection*&,bool)", ParameterInfo, OutValue, bOveriddenOnly); }
	bool IsUsedWithVolumetricCloud() { return NativeCall<bool>(this, "UMaterialInstance.IsUsedWithVolumetricCloud()"); }
	void UpdateOverridableBaseProperties() { NativeCall<void>(this, "UMaterialInstance.UpdateOverridableBaseProperties()"); }
	void SetTextureParameterValueInternal(const FMaterialParameterInfo& ParameterInfo, UTexture* Value) { NativeCall<void, const FMaterialParameterInfo&, UTexture*>(this, "UMaterialInstance.SetTextureParameterValueInternal(FMaterialParameterInfo&,UTexture*)", ParameterInfo, Value); }
	float GetDiffuseBoost() { return NativeCall<float>(this, "UMaterialInstance.GetDiffuseBoost()"); }
	bool IsRedundant() { return NativeCall<bool>(this, "UMaterialInstance.IsRedundant()"); }
	bool GetUserSceneTextureOverride(FName& InOutName) { return NativeCall<bool, FName&>(this, "UMaterialInstance.GetUserSceneTextureOverride(FName&)", InOutName); }
	UPhysicalMaterialMask* GetPhysicalMaterialMask() { return NativeCall<UPhysicalMaterialMask*>(this, "UMaterialInstance.GetPhysicalMaterialMask()"); }
	bool CalculateTexturesSamplingInfo(UTexture* Texture, FTextureSamplingInfo& OutTextureSamplingInfo) { return NativeCall<bool, UTexture*, FTextureSamplingInfo&>(this, "UMaterialInstance.CalculateTexturesSamplingInfo(UTexture*,FTextureSamplingInfo&)", Texture, OutTextureSamplingInfo); }
	bool HasPixelAnimation() { return NativeCall<bool>(this, "UMaterialInstance.HasPixelAnimation()"); }
	bool GetCastShadowAsMasked() { return NativeCall<bool>(this, "UMaterialInstance.GetCastShadowAsMasked()"); }
	float GetTextureDensity(FName TextureName, const FMeshUVChannelInfo& UVChannelData) { return NativeCall<float, FName, const FMeshUVChannelInfo&>(this, "UMaterialInstance.GetTextureDensity(FName,FMeshUVChannelInfo&)", TextureName, UVChannelData); }
	USubsurfaceProfile* GetSubsurfaceProfileOverride_Internal() { return NativeCall<USubsurfaceProfile*>(this, "UMaterialInstance.GetSubsurfaceProfileOverride_Internal()"); }
	void PostInitProperties() { NativeCall<void>(this, "UMaterialInstance.PostInitProperties()"); }
	void GetResourceSizeEx(FResourceSizeEx& CumulativeResourceSize) { NativeCall<void, FResourceSizeEx&>(this, "UMaterialInstance.GetResourceSizeEx(FResourceSizeEx&)", CumulativeResourceSize); }
	void OverrideTexture(const UTexture* InTextureToOverride, UTexture* OverrideTexture, ERHIFeatureLevel::Type InFeatureLevel) { NativeCall<void, const UTexture*, UTexture*, ERHIFeatureLevel::Type>(this, "UMaterialInstance.OverrideTexture(UTexture*,UTexture*,ERHIFeatureLevel::Type)", InTextureToOverride, OverrideTexture, InFeatureLevel); }
	bool IsTessellationEnabled() { return NativeCall<bool>(this, "UMaterialInstance.IsTessellationEnabled()"); }
	UToonProfile* GetToonProfileOverride_Internal() { return NativeCall<UToonProfile*>(this, "UMaterialInstance.GetToonProfileOverride_Internal()"); }
	bool IsPostProcessMaterial() { return NativeCall<bool>(this, "UMaterialInstance.IsPostProcessMaterial()"); }
	float GetOpacityMaskClipValue() { return NativeCall<float>(this, "UMaterialInstance.GetOpacityMaskClipValue()"); }
	bool IsCompatibleWithLumenCardSharing() { return NativeCall<bool>(this, "UMaterialInstance.IsCompatibleWithLumenCardSharing()"); }
	bool CastsRayTracedShadows() { return NativeCall<bool>(this, "UMaterialInstance.CastsRayTracedShadows()"); }
	bool HasCustomizedUVs() { return NativeCall<bool>(this, "UMaterialInstance.HasCustomizedUVs()"); }
	bool HasSubstrateRoughnessTracking() { return NativeCall<bool>(this, "UMaterialInstance.HasSubstrateRoughnessTracking()"); }
	USubsurfaceProfile* GetSubsurfaceProfile_Internal() { return NativeCall<USubsurfaceProfile*>(this, "UMaterialInstance.GetSubsurfaceProfile_Internal()"); }
	unsigned int NumToonProfile_Internal() { return NativeCall<unsigned int>(this, "UMaterialInstance.NumToonProfile_Internal()"); }
	UPhysicalMaterial* GetPhysicalMaterial() { return NativeCall<UPhysicalMaterial*>(this, "UMaterialInstance.GetPhysicalMaterial()"); }
	UToonProfile* GetToonProfile_Internal(unsigned int Index) { return NativeCall<UToonProfile*, unsigned int>(this, "UMaterialInstance.GetToonProfile_Internal(unsignedint)", Index); }
	FMaterialRenderProxy* GetRenderProxy() { return NativeCall<FMaterialRenderProxy*>(this, "UMaterialInstance.GetRenderProxy()"); }
	void ValidateTextureOverrides(EShaderPlatform InShaderPlatform) { NativeCall<void, EShaderPlatform>(this, "UMaterialInstance.ValidateTextureOverrides(EShaderPlatform)", InShaderPlatform); }
	bool HasMeshPaintTexture() { return NativeCall<bool>(this, "UMaterialInstance.HasMeshPaintTexture()"); }
	void SetTextureCollectionParameterValueInternal(const FMaterialParameterInfo& ParameterInfo, UTextureCollection* Value) { NativeCall<void, const FMaterialParameterInfo&, UTextureCollection*>(this, "UMaterialInstance.SetTextureCollectionParameterValueInternal(FMaterialParameterInfo&,UTextureCollection*)", ParameterInfo, Value); }
	bool GetTextureParameterValue(const FMemoryImageMaterialParameterInfo& ParameterInfo, UTexture*& OutValue, bool bOveriddenOnly) { return NativeCall<bool, const FMemoryImageMaterialParameterInfo&, UTexture*&, bool>(this, "UMaterialInstance.GetTextureParameterValue(FMemoryImageMaterialParameterInfo&,UTexture*&,bool)", ParameterInfo, OutValue, bOveriddenOnly); }
	bool IsUIMaterial() { return NativeCall<bool>(this, "UMaterialInstance.IsUIMaterial()"); }
	float GetEmissiveBoost() { return NativeCall<float>(this, "UMaterialInstance.GetEmissiveBoost()"); }
	bool WritesToRuntimeVirtualTexture() { return NativeCall<bool>(this, "UMaterialInstance.WritesToRuntimeVirtualTexture()"); }
	void PostLoad() { NativeCall<void>(this, "UMaterialInstance.PostLoad()"); }
	FMaterialResource* AllocatePermutationResource() { return NativeCall<FMaterialResource*>(this, "UMaterialInstance.AllocatePermutationResource()"); }
	float GetMaxWorldPositionOffsetDisplacement() { return NativeCall<float>(this, "UMaterialInstance.GetMaxWorldPositionOffsetDisplacement()"); }
	static void AddReferencedObjects(UObject* InThis, FReferenceCollector& Collector) { NativeCall<void, UObject*, FReferenceCollector&>(nullptr, "UMaterialInstance.AddReferencedObjects(UObject*,FReferenceCollector&)", InThis, Collector); }
	bool GetRefractionSettings(float& OutBiasValue) { return NativeCall<bool, float&>(this, "UMaterialInstance.GetRefractionSettings(float&)", OutBiasValue); }
	bool IsDependent(UMaterialInterface* TestDependency) { return NativeCall<bool, UMaterialInterface*>(this, "UMaterialInstance.IsDependent(UMaterialInterface*)", TestDependency); }
	unsigned int NumSubsurfaceProfileRoot_Internal() { return NativeCall<unsigned int>(this, "UMaterialInstance.NumSubsurfaceProfileRoot_Internal()"); }
	bool IsShadingModelFromMaterialExpression() { return NativeCall<bool>(this, "UMaterialInstance.IsShadingModelFromMaterialExpression()"); }
	bool GetCastDynamicShadowAsMasked() { return NativeCall<bool>(this, "UMaterialInstance.GetCastDynamicShadowAsMasked()"); }
	int GetBlendablePriority(const UMaterial* Base) { return NativeCall<int, const UMaterial*>(this, "UMaterialInstance.GetBlendablePriority(UMaterial*)", Base); }
	void SetFontParameterValueInternal(const FMaterialParameterInfo& ParameterInfo, UFont* FontValue, int FontPage) { NativeCall<void, const FMaterialParameterInfo&, UFont*, int>(this, "UMaterialInstance.SetFontParameterValueInternal(FMaterialParameterInfo&,UFont*,int)", ParameterInfo, FontValue, FontPage); }
	void PostDuplicate(bool bDuplicateForPIE) { NativeCall<void, bool>(this, "UMaterialInstance.PostDuplicate(bool)", bDuplicateForPIE); }
	bool HasCustomPrimitiveData() { return NativeCall<bool>(this, "UMaterialInstance.HasCustomPrimitiveData()"); }
	bool UpdateLightmassTextureTracking() { return NativeCall<bool>(this, "UMaterialInstance.UpdateLightmassTextureTracking()"); }
	USpecularProfile* GetSpecularProfile_Internal(unsigned int Index) { return NativeCall<USpecularProfile*, unsigned int>(this, "UMaterialInstance.GetSpecularProfile_Internal(unsignedint)", Index); }
	unsigned int NumSpecularProfile_Internal() { return NativeCall<unsigned int>(this, "UMaterialInstance.NumSpecularProfile_Internal()"); }
	static void AllMaterialsCacheResourceShadersForRendering(bool bUpdateProgressDialog, bool bCacheAllRemainingShaders) { NativeCall<void, bool, bool>(nullptr, "UMaterialInstance.AllMaterialsCacheResourceShadersForRendering(bool,bool)", bUpdateProgressDialog, bCacheAllRemainingShaders); }
	void DumpDebugInfo(FOutputDevice& OutputDevice) { NativeCall<void, FOutputDevice&>(this, "UMaterialInstance.DumpDebugInfo(FOutputDevice&)", OutputDevice); }
	bool IsReadyForFinishDestroy() { return NativeCall<bool>(this, "UMaterialInstance.IsReadyForFinishDestroy()"); }
	USubsurfaceProfile* GetSubsurfaceProfileRoot_Internal(unsigned int Index) { return NativeCall<USubsurfaceProfile*, unsigned int>(this, "UMaterialInstance.GetSubsurfaceProfileRoot_Internal(unsignedint)", Index); }
	USubsurfaceProfile* GetSubsurfaceProfileRoot_Internal() { return NativeCall<USubsurfaceProfile*>(this, "UMaterialInstance.GetSubsurfaceProfileRoot_Internal()"); }
	void RecacheUniformExpressions(bool bRecreateUniformBuffer) { NativeCall<void, bool>(this, "UMaterialInstance.RecacheUniformExpressions(bool)", bRecreateUniformBuffer); }
	bool IsChildOf(const UMaterialInterface* ParentMaterialInterface) { return NativeCall<bool, const UMaterialInterface*>(this, "UMaterialInstance.IsChildOf(UMaterialInterface*)", ParentMaterialInterface); }
	bool ShouldAlwaysEvaluateWorldPositionOffset() { return NativeCall<bool>(this, "UMaterialInstance.ShouldAlwaysEvaluateWorldPositionOffset()"); }
};
