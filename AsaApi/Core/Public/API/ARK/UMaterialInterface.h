#pragma once
#include "UEObjectForward.h"
#include "BulkForward.h"
#include "UObject.h"

struct UMaterialInterface : public UObject
{
public:
	UMaterialInterface() = delete;
	~UMaterialInterface() = delete;
	UMaterialInterface(const UMaterialInterface&) = delete;
	UMaterialInterface& operator=(const UMaterialInterface&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UMaterialInterface"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UMaterialInterface"); }
	FRenderCommandFence& ParentRefFenceField() { return *GetNativePointerField<FRenderCommandFence*>(this, "UMaterialInterface.ParentRefFence"); }
	FLightmassMaterialInterfaceSettings& LightmassSettingsField() { return *GetNativePointerField<FLightmassMaterialInterfaceSettings*>(this, "UMaterialInterface.LightmassSettings"); }
	unsigned int& FeatureLevelsToForceCompileField() { return *GetNativePointerField<unsigned int*>(this, "UMaterialInterface.FeatureLevelsToForceCompile"); }
	bool& bLoadedCachedExpressionDataField() { return *GetNativePointerField<bool*>(this, "UMaterialInterface.bLoadedCachedExpressionData"); }
	unsigned int& UsageFlagWarningsField() { return *GetNativePointerField<unsigned int*>(this, "UMaterialInterface.UsageFlagWarnings"); }
	BitFieldValue<bool, unsigned char> bIncludedInBaseGame() { return { this, "UMaterialInterface.bIncludedInBaseGame"}; }
	unsigned int NumToonProfile_Internal() { return NativeCall<unsigned int>(this, "UMaterialInterface.NumToonProfile_Internal()"); }
	bool IsMasked() { return NativeCall<bool>(this, "UMaterialInterface.IsMasked()"); }
	void UpdateMaterialRenderProxy(FMaterialRenderProxy& Proxy) { NativeCall<void, FMaterialRenderProxy&>(this, "UMaterialInterface.UpdateMaterialRenderProxy(FMaterialRenderProxy&)", Proxy); }
	bool IsReadyForFinishDestroy() { return NativeCall<bool>(this, "UMaterialInterface.IsReadyForFinishDestroy()"); }
	static unsigned int GetFeatureLevelsToCompileForAllMaterials() { return NativeCall<unsigned int>(nullptr, "UMaterialInterface.GetFeatureLevelsToCompileForAllMaterials()"); }
	static void AssertDefaultMaterialsExist() { NativeCall<void>(nullptr, "UMaterialInterface.AssertDefaultMaterialsExist()"); }
	unsigned int NumSubsurfaceProfileRoot_Internal() { return NativeCall<unsigned int>(this, "UMaterialInterface.NumSubsurfaceProfileRoot_Internal()"); }
	bool IsShadingModelFromMaterialExpression() { return NativeCall<bool>(this, "UMaterialInterface.IsShadingModelFromMaterialExpression()"); }
	bool IsTranslucencyWritingCustomDepth() { return NativeCall<bool>(this, "UMaterialInterface.IsTranslucencyWritingCustomDepth()"); }
	bool HasPerInstanceDynamicCustomDataOutput() { return NativeCall<bool>(this, "UMaterialInterface.HasPerInstanceDynamicCustomDataOutput()"); }
	void FinishDestroy() { NativeCall<void>(this, "UMaterialInterface.FinishDestroy()"); }
	void OnRemovedAsOverride(const UObject* Owner) { NativeCall<void, const UObject*>(this, "UMaterialInterface.OnRemovedAsOverride(UObject*)", Owner); }
	bool IsDitheredLODTransition() { return NativeCall<bool>(this, "UMaterialInterface.IsDitheredLODTransition()"); }
	void GetLightingGuidChain(bool bIncludeTextures, TArray<FGuid, TSizedDefaultAllocator<32> >& OutGuids) { NativeCall<void, bool, TArray<FGuid, TSizedDefaultAllocator<32> >&>(this, "UMaterialInterface.GetLightingGuidChain(bool,TArray<FGuid,TSizedDefaultAllocator<32>>&)", bIncludeTextures, OutGuids); }
	float GetExportResolutionScale() { return NativeCall<float>(this, "UMaterialInterface.GetExportResolutionScale()"); }
	void BeginDestroy() { NativeCall<void>(this, "UMaterialInterface.BeginDestroy()"); }
	void OnAssignedAsOverride(const UObject* Owner) { NativeCall<void, const UObject*>(this, "UMaterialInterface.OnAssignedAsOverride(UObject*)", Owner); }
	void PostDuplicate(bool bDuplicateForPIE) { NativeCall<void, bool>(this, "UMaterialInterface.PostDuplicate(bool)", bDuplicateForPIE); }
	UMaterialInterface* GetFarDrawOverride() { return NativeCall<UMaterialInterface*>(this, "UMaterialInterface.GetFarDrawOverride()"); }
	bool IsThinSurface() { return NativeCall<bool>(this, "UMaterialInterface.IsThinSurface()"); }
	void RecacheUniformExpressions(bool bRecreateUniformBuffer) { NativeCall<void, bool>(this, "UMaterialInterface.RecacheUniformExpressions(bool)", bRecreateUniformBuffer); }
	bool GetCastDynamicShadowAsMasked() { return NativeCall<bool>(this, "UMaterialInterface.GetCastDynamicShadowAsMasked()"); }
	void Serialize(FArchive& Ar) { NativeCall<void, FArchive&>(this, "UMaterialInterface.Serialize(FArchive&)", Ar); }
	bool HasGrassOutput() { return NativeCall<bool>(this, "UMaterialInterface.HasGrassOutput()"); }
	bool IsComplete() { return NativeCall<bool>(this, "UMaterialInterface.IsComplete()"); }
	bool IsTessellationEnabled() { return NativeCall<bool>(this, "UMaterialInterface.IsTessellationEnabled()"); }
	bool GetUserSceneTextureOverride(FName& InOutName) { return NativeCall<bool, FName&>(this, "UMaterialInterface.GetUserSceneTextureOverride(FName&)", InOutName); }
	bool IsUsingTemporalResponsiveness_Concurrent(EShaderPlatform InShaderPlatform) { return NativeCall<bool, EShaderPlatform>(this, "UMaterialInterface.IsUsingTemporalResponsiveness_Concurrent(EShaderPlatform)", InShaderPlatform); }
	bool GetParameterCollectionParameterValue(const FMemoryImageMaterialParameterInfo& ParameterInfo, UMaterialParameterCollection*& OutValue, bool bOveriddenOnly) { return NativeCall<bool, const FMemoryImageMaterialParameterInfo&, UMaterialParameterCollection*&, bool>(this, "UMaterialInterface.GetParameterCollectionParameterValue(FMemoryImageMaterialParameterInfo&,UMaterialParameterCollection*&,bool)", ParameterInfo, OutValue, bOveriddenOnly); }
	bool HasPixelAnimation() { return NativeCall<bool>(this, "UMaterialInterface.HasPixelAnimation()"); }
	bool HasSubstrateRoughnessTracking() { return NativeCall<bool>(this, "UMaterialInterface.HasSubstrateRoughnessTracking()"); }
	bool CalculateTexturesSamplingInfo(UTexture* Texture, FTextureSamplingInfo& OutTextureSamplingInfo) { return NativeCall<bool, UTexture*, FTextureSamplingInfo&>(this, "UMaterialInterface.CalculateTexturesSamplingInfo(UTexture*,FTextureSamplingInfo&)", Texture, OutTextureSamplingInfo); }
	UPhysicalMaterialMask* GetPhysicalMaterialMask() { return NativeCall<UPhysicalMaterialMask*>(this, "UMaterialInterface.GetPhysicalMaterialMask()"); }
	UPhysicalMaterial* GetPhysicalMaterial() { return NativeCall<UPhysicalMaterial*>(this, "UMaterialInterface.GetPhysicalMaterial()"); }
	bool IsPostProcessMaterial() { return NativeCall<bool>(this, "UMaterialInterface.IsPostProcessMaterial()"); }
	void SetForceMipLevelsToBeResident(bool OverrideForceMiplevelsToBeResident, bool bForceMiplevelsToBeResidentValue, float ForceDuration, int CinematicTextureGroups, bool bFastResponse) { NativeCall<void, bool, bool, float, int, bool>(this, "UMaterialInterface.SetForceMipLevelsToBeResident(bool,bool,float,int,bool)", OverrideForceMiplevelsToBeResident, bForceMiplevelsToBeResidentValue, ForceDuration, CinematicTextureGroups, bFastResponse); }
	bool IsDependent(UMaterialInterface* TestDependency) { return NativeCall<bool, UMaterialInterface*>(this, "UMaterialInterface.IsDependent(UMaterialInterface*)", TestDependency); }
	bool GetVectorParameterValue(const FMemoryImageMaterialParameterInfo& ParameterInfo, FLinearColor& OutValue, bool bOveriddenOnly) { return NativeCall<bool, const FMemoryImageMaterialParameterInfo&, FLinearColor&, bool>(this, "UMaterialInterface.GetVectorParameterValue(FMemoryImageMaterialParameterInfo&,FLinearColor&,bool)", ParameterInfo, OutValue, bOveriddenOnly); }
	float GetTextureDensity(FName TextureName, const FMeshUVChannelInfo& UVChannelData) { return NativeCall<float, FName, const FMeshUVChannelInfo&>(this, "UMaterialInterface.GetTextureDensity(FName,FMeshUVChannelInfo&)", TextureName, UVChannelData); }
	USubsurfaceProfile* GetSubsurfaceProfileOverride_Internal() { return NativeCall<USubsurfaceProfile*>(this, "UMaterialInterface.GetSubsurfaceProfileOverride_Internal()"); }
	bool GetCastShadowAsMasked() { return NativeCall<bool>(this, "UMaterialInterface.GetCastShadowAsMasked()"); }
	bool GetSparseVolumeTextureParameterValue(const FMemoryImageMaterialParameterInfo& ParameterInfo, USparseVolumeTexture*& OutValue, bool bOveriddenOnly) { return NativeCall<bool, const FMemoryImageMaterialParameterInfo&, USparseVolumeTexture*&, bool>(this, "UMaterialInterface.GetSparseVolumeTextureParameterValue(FMemoryImageMaterialParameterInfo&,USparseVolumeTexture*&,bool)", ParameterInfo, OutValue, bOveriddenOnly); }
	bool IsTranslucencyWritingVelocity() { return NativeCall<bool>(this, "UMaterialInterface.IsTranslucencyWritingVelocity()"); }
	bool Rename(const wchar_t* NewName, UObject* NewOuter, unsigned int Flags) { return NativeCall<bool, const wchar_t*, UObject*, unsigned int>(this, "UMaterialInterface.Rename(wchar_t*,UObject*,unsignedint)", NewName, NewOuter, Flags); }
	USpecularProfile* GetSpecularProfile_Internal(unsigned int Index) { return NativeCall<USpecularProfile*, unsigned int>(this, "UMaterialInterface.GetSpecularProfile_Internal(unsignedint)", Index); }
	bool IsTranslucencyVelocityFromDepth() { return NativeCall<bool>(this, "UMaterialInterface.IsTranslucencyVelocityFromDepth()"); }
	bool GetTextureParameterValue(const FMemoryImageMaterialParameterInfo& ParameterInfo, UTexture*& OutValue, bool bOveriddenOnly) { return NativeCall<bool, const FMemoryImageMaterialParameterInfo&, UTexture*&, bool>(this, "UMaterialInterface.GetTextureParameterValue(FMemoryImageMaterialParameterInfo&,UTexture*&,bool)", ParameterInfo, OutValue, bOveriddenOnly); }
	bool CastsRayTracedShadows() { return NativeCall<bool>(this, "UMaterialInterface.CastsRayTracedShadows()"); }
	unsigned int NumSpecularProfile_Internal() { return NativeCall<unsigned int>(this, "UMaterialInterface.NumSpecularProfile_Internal()"); }
	static void PrecacheFallbackMaterialPSOs(UMaterialInterface* MaterialInterface) { NativeCall<void, UMaterialInterface*>(nullptr, "UMaterialInterface.PrecacheFallbackMaterialPSOs(UMaterialInterface*)", MaterialInterface); }
	void PostCDOContruct() { NativeCall<void>(this, "UMaterialInterface.PostCDOContruct()"); }
	bool GetRefractionSettings(float& OutBiasValue) { return NativeCall<bool, float&>(this, "UMaterialInterface.GetRefractionSettings(float&)", OutBiasValue); }
	bool HasCustomPrimitiveData() { return NativeCall<bool>(this, "UMaterialInterface.HasCustomPrimitiveData()"); }
	bool GetVectorParameterDefaultValue(const FMemoryImageMaterialParameterInfo& ParameterInfo, FLinearColor& OutValue) { return NativeCall<bool, const FMemoryImageMaterialParameterInfo&, FLinearColor&>(this, "UMaterialInterface.GetVectorParameterDefaultValue(FMemoryImageMaterialParameterInfo&,FLinearColor&)", ParameterInfo, OutValue); }
	bool IsDeferredDecal() { return NativeCall<bool>(this, "UMaterialInterface.IsDeferredDecal()"); }
	void EnsureIsComplete() { NativeCall<void>(this, "UMaterialInterface.EnsureIsComplete()"); }
	void PostInitProperties() { NativeCall<void>(this, "UMaterialInterface.PostInitProperties()"); }
	UPhysicalMaterial* GetPhysicalMaterialFromMap(int Index) { return NativeCall<UPhysicalMaterial*, int>(this, "UMaterialInterface.GetPhysicalMaterialFromMap(int)", Index); }
	UToonProfile* GetToonProfile_Internal(unsigned int Index) { return NativeCall<UToonProfile*, unsigned int>(this, "UMaterialInterface.GetToonProfile_Internal(unsignedint)", Index); }
	FName GetUserSceneTextureOutput(const UMaterial* Base) { using AsaReturnType = FName; alignas(AsaReturnType) unsigned char AsaReturnBytes[sizeof(AsaReturnType)]; auto* AsaReturnPointer = reinterpret_cast<AsaReturnType*>(AsaReturnBytes); auto* AsaReturnedPointer = NativeCall<AsaReturnType*, AsaReturnType*, const UMaterial *>(this, "UMaterialInterface.GetUserSceneTextureOutput(UMaterial*)", AsaReturnPointer, Base); if (AsaReturnedPointer != AsaReturnPointer) throw std::runtime_error("Unexpected native result buffer"); std::unique_ptr<AsaReturnType, void(*)(AsaReturnType*)> AsaReturnOwner(std::launder(AsaReturnPointer), [](AsaReturnType* value) { value->~AsaReturnType(); }); return MoveTemp(*AsaReturnOwner); }
	void CacheTexturesSamplingInfo() { NativeCall<void>(this, "UMaterialInterface.CacheTexturesSamplingInfo()"); }
	bool ShouldAlwaysEvaluateWorldPositionOffset() { return NativeCall<bool>(this, "UMaterialInterface.ShouldAlwaysEvaluateWorldPositionOffset()"); }
	UMaterial* GetBaseMaterial() { return NativeCall<UMaterial*>(this, "UMaterialInterface.GetBaseMaterial()"); }
	bool IsTwoSided() { return NativeCall<bool>(this, "UMaterialInterface.IsTwoSided()"); }
	bool GetTextureParameterDefaultValue(const FMemoryImageMaterialParameterInfo& ParameterInfo, UTexture*& OutValue) { return NativeCall<bool, const FMemoryImageMaterialParameterInfo&, UTexture*&>(this, "UMaterialInterface.GetTextureParameterDefaultValue(FMemoryImageMaterialParameterInfo&,UTexture*&)", ParameterInfo, OutValue); }
	bool IsDisplacementFadeEnabled() { return NativeCall<bool>(this, "UMaterialInterface.IsDisplacementFadeEnabled()"); }
	bool IsUsingMotionVectorWorldOffset_Concurrent(EShaderPlatform InShaderPlatform) { return NativeCall<bool, EShaderPlatform>(this, "UMaterialInterface.IsUsingMotionVectorWorldOffset_Concurrent(EShaderPlatform)", InShaderPlatform); }
	unsigned int GetUsageFlags() { return NativeCall<unsigned int>(this, "UMaterialInterface.GetUsageFlags()"); }
	static void AssertDefaultMaterialsPostLoaded() { NativeCall<void>(nullptr, "UMaterialInterface.AssertDefaultMaterialsPostLoaded()"); }
	int GetBlendablePriority(const UMaterial* Base) { return NativeCall<int, const UMaterial*>(this, "UMaterialInterface.GetBlendablePriority(UMaterial*)", Base); }
	bool HasCustomizedUVs() { return NativeCall<bool>(this, "UMaterialInterface.HasCustomizedUVs()"); }
	static void AddReferencedObjects(UObject* InThis, FReferenceCollector& Collector) { NativeCall<void, UObject*, FReferenceCollector&>(nullptr, "UMaterialInterface.AddReferencedObjects(UObject*,FReferenceCollector&)", InThis, Collector); }
	bool IsTranslucencyWritingFrontLayerTransparency() { return NativeCall<bool>(this, "UMaterialInterface.IsTranslucencyWritingFrontLayerTransparency()"); }
	float GetEmissiveBoost() { return NativeCall<float>(this, "UMaterialInterface.GetEmissiveBoost()"); }
	float GetMaxWorldPositionOffsetDisplacement() { return NativeCall<float>(this, "UMaterialInterface.GetMaxWorldPositionOffsetDisplacement()"); }
	void SaveShaderStableKeysInner(const ITargetPlatform* TP, const FStableShaderKeyAndValue& SaveKeyVal) { NativeCall<void, const ITargetPlatform*, const FStableShaderKeyAndValue&>(this, "UMaterialInterface.SaveShaderStableKeysInner(ITargetPlatform*,FStableShaderKeyAndValue&)", TP, SaveKeyVal); }
	bool HasVertexInterpolator() { return NativeCall<bool>(this, "UMaterialInterface.HasVertexInterpolator()"); }
	void OverrideTexture(const UTexture* InTextureToOverride, UTexture* OverrideTexture, ERHIFeatureLevel::Type InFeatureLevel) { NativeCall<void, const UTexture*, UTexture*, ERHIFeatureLevel::Type>(this, "UMaterialInterface.OverrideTexture(UTexture*,UTexture*,ERHIFeatureLevel::Type)", InTextureToOverride, OverrideTexture, InFeatureLevel); }
	void PostLoadDefaultMaterials() { NativeCall<void>(this, "UMaterialInterface.PostLoadDefaultMaterials()"); }
	bool WritesToRuntimeVirtualTexture() { return NativeCall<bool>(this, "UMaterialInterface.WritesToRuntimeVirtualTexture()"); }
	UToonProfile* GetToonProfileOverride_Internal() { return NativeCall<UToonProfile*>(this, "UMaterialInterface.GetToonProfileOverride_Internal()"); }
	bool IsUsedWithVolumetricCloud() { return NativeCall<bool>(this, "UMaterialInterface.IsUsedWithVolumetricCloud()"); }
	bool GetTextureCollectionParameterValue(const FMemoryImageMaterialParameterInfo& ParameterInfo, UTextureCollection*& OutValue, bool bOveriddenOnly) { return NativeCall<bool, const FMemoryImageMaterialParameterInfo&, UTextureCollection*&, bool>(this, "UMaterialInterface.GetTextureCollectionParameterValue(FMemoryImageMaterialParameterInfo&,UTextureCollection*&,bool)", ParameterInfo, OutValue, bOveriddenOnly); }
	bool HasMeshPaintTexture() { return NativeCall<bool>(this, "UMaterialInterface.HasMeshPaintTexture()"); }
	USubsurfaceProfile* GetSubsurfaceProfileRoot_Internal(unsigned int Index) { return NativeCall<USubsurfaceProfile*, unsigned int>(this, "UMaterialInterface.GetSubsurfaceProfileRoot_Internal(unsignedint)", Index); }
	USubsurfaceProfile* GetSubsurfaceProfileRoot_Internal() { return NativeCall<USubsurfaceProfile*>(this, "UMaterialInterface.GetSubsurfaceProfileRoot_Internal()"); }
	bool UpdateLightmassTextureTracking() { return NativeCall<bool>(this, "UMaterialInterface.UpdateLightmassTextureTracking()"); }
	float GetOpacityMaskClipValue() { return NativeCall<float>(this, "UMaterialInterface.GetOpacityMaskClipValue()"); }
	bool IsUsingWorldPositionOffset_Concurrent(EShaderPlatform InShaderPlatform) { return NativeCall<bool, EShaderPlatform>(this, "UMaterialInterface.IsUsingWorldPositionOffset_Concurrent(EShaderPlatform)", InShaderPlatform); }
	bool IsLightFunctionMaterial() { return NativeCall<bool>(this, "UMaterialInterface.IsLightFunctionMaterial()"); }
	float GetDiffuseBoost() { return NativeCall<float>(this, "UMaterialInterface.GetDiffuseBoost()"); }
	bool IsCompatibleWithLumenCardSharing() { return NativeCall<bool>(this, "UMaterialInterface.IsCompatibleWithLumenCardSharing()"); }
	static void InitDefaultMaterials() { NativeCall<void>(nullptr, "UMaterialInterface.InitDefaultMaterials()"); }
	UNeuralProfile* GetNeuralProfile_Internal() { return NativeCall<UNeuralProfile*>(this, "UMaterialInterface.GetNeuralProfile_Internal()"); }
	void GetMaterialInheritanceChain(FMaterialInheritanceChain& OutChain) { NativeCall<void, FMaterialInheritanceChain&>(this, "UMaterialInterface.GetMaterialInheritanceChain(FMaterialInheritanceChain&)", OutChain); }
	void GetUsedTextures(TArray<UTexture*, TSizedDefaultAllocator<32> >& OutTextures, EMaterialQualityLevel::Type QualityLevel, bool bAllQualityLevels, ERHIFeatureLevel::Type FeatureLevel, bool bAllFeatureLevels) { NativeCall<void, TArray<UTexture*, TSizedDefaultAllocator<32> >&, EMaterialQualityLevel::Type, bool, ERHIFeatureLevel::Type, bool>(this, "UMaterialInterface.GetUsedTextures(TArray<UTexture*,TSizedDefaultAllocator<32>>&,EMaterialQualityLevel::Type,bool,ERHIFeatureLevel::Type,bool)", OutTextures, QualityLevel, bAllQualityLevels, FeatureLevel, bAllFeatureLevels); }
	bool CanCacheTexturesSamplingInfo() { return NativeCall<bool>(this, "UMaterialInterface.CanCacheTexturesSamplingInfo()"); }
	bool GetScalarParameterDefaultValue(const FMemoryImageMaterialParameterInfo& ParameterInfo, float& OutValue) { return NativeCall<bool, const FMemoryImageMaterialParameterInfo&, float&>(this, "UMaterialInterface.GetScalarParameterDefaultValue(FMemoryImageMaterialParameterInfo&,float&)", ParameterInfo, OutValue); }
	static void FilterOutPlatformShadingModels(EShaderPlatform InPlatform, FMaterialShadingModelField& ShadingModels) { NativeCall<void, EShaderPlatform, FMaterialShadingModelField&>(nullptr, "UMaterialInterface.FilterOutPlatformShadingModels(EShaderPlatform,FMaterialShadingModelField&)", InPlatform, ShadingModels); }
	FMaterialRenderProxy* GetRenderProxy() { return NativeCall<FMaterialRenderProxy*>(this, "UMaterialInterface.GetRenderProxy()"); }
	USubsurfaceProfile* GetSubsurfaceProfile_Internal() { return NativeCall<USubsurfaceProfile*>(this, "UMaterialInterface.GetSubsurfaceProfile_Internal()"); }
	void PostLoad() { NativeCall<void>(this, "UMaterialInterface.PostLoad()"); }
	bool GetScalarParameterValue(const FMemoryImageMaterialParameterInfo& ParameterInfo, float& OutValue, bool bOveriddenOnly) { return NativeCall<bool, const FMemoryImageMaterialParameterInfo&, float&, bool>(this, "UMaterialInterface.GetScalarParameterValue(FMemoryImageMaterialParameterInfo&,float&,bool)", ParameterInfo, OutValue, bOveriddenOnly); }
	void DumpDebugInfo(FOutputDevice& OutputDevice) { NativeCall<void, FOutputDevice&>(this, "UMaterialInterface.DumpDebugInfo(FOutputDevice&)", OutputDevice); }
	USpecularProfile* GetSpecularProfileOverride_Internal() { return NativeCall<USpecularProfile*>(this, "UMaterialInterface.GetSpecularProfileOverride_Internal()"); }
	bool IsUIMaterial() { return NativeCall<bool>(this, "UMaterialInterface.IsUIMaterial()"); }
};
