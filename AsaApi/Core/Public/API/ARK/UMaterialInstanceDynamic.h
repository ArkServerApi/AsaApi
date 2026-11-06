#pragma once
#include "UEObjectForward.h"
#include "BulkForward.h"
#include "UMaterialInstance.h"

struct UMaterialInstanceDynamic : public UMaterialInstance
{
public:
	UMaterialInstanceDynamic() = delete;
	~UMaterialInstanceDynamic() = delete;
	UMaterialInstanceDynamic(const UMaterialInstanceDynamic&) = delete;
	UMaterialInstanceDynamic& operator=(const UMaterialInstanceDynamic&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UMaterialInstanceDynamic"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UMaterialInstanceDynamic"); }
	static UMaterialInstanceDynamic* Create(UMaterialInterface* ParentMaterial, UObject* InOuter, FName Name) { return NativeCall<UMaterialInstanceDynamic*, UMaterialInterface*, UObject*, FName>(nullptr, "UMaterialInstanceDynamic.Create(UMaterialInterface*,UObject*,FName)", ParentMaterial, InOuter, Name); }
	void CopyScalarAndVectorParameters(const UMaterialInterface& SourceMaterialToCopyFrom, EShaderPlatform ShaderPlatform) { NativeCall<void, const UMaterialInterface&, EShaderPlatform>(this, "UMaterialInstanceDynamic.CopyScalarAndVectorParameters(UMaterialInterface&,EShaderPlatform)", SourceMaterialToCopyFrom, ShaderPlatform); }
	bool IsTranslucencyWritingVelocity() { return NativeCall<bool>(this, "UMaterialInstanceDynamic.IsTranslucencyWritingVelocity()"); }
	void ClearParameterValues() { NativeCall<void>(this, "UMaterialInstanceDynamic.ClearParameterValues()"); }
	void SetFontParameterValue(const FMaterialParameterInfo& ParameterInfo, UFont* FontValue, int FontPage) { NativeCall<void, const FMaterialParameterInfo&, UFont*, int>(this, "UMaterialInstanceDynamic.SetFontParameterValue(FMaterialParameterInfo&,UFont*,int)", ParameterInfo, FontValue, FontPage); }
	float GetOpacityMaskClipValue() { return NativeCall<float>(this, "UMaterialInstanceDynamic.GetOpacityMaskClipValue()"); }
	void SetScalarParameterValueByInfo(const FMaterialParameterInfo& ParameterInfo, float Value) { NativeCall<void, const FMaterialParameterInfo&, float>(this, "UMaterialInstanceDynamic.SetScalarParameterValueByInfo(FMaterialParameterInfo&,float)", ParameterInfo, Value); }
	void CopyParameterOverrides(UMaterialInstance* MaterialInstance) { NativeCall<void, UMaterialInstance*>(this, "UMaterialInstanceDynamic.CopyParameterOverrides(UMaterialInstance*)", MaterialInstance); }
	void SetScalarParameterValue(FName ParameterName, float Value) { NativeCall<void, FName, float>(this, "UMaterialInstanceDynamic.SetScalarParameterValue(FName,float)", ParameterName, Value); }
	UTextureCollection* K2_GetTextureCollectionParameterValueByInfo(const FMaterialParameterInfo& ParameterInfo) { return NativeCall<UTextureCollection*, const FMaterialParameterInfo&>(this, "UMaterialInstanceDynamic.K2_GetTextureCollectionParameterValueByInfo(FMaterialParameterInfo&)", ParameterInfo); }
	float K2_GetScalarParameterValue(FName ParameterName) { return NativeCall<float, FName>(this, "UMaterialInstanceDynamic.K2_GetScalarParameterValue(FName)", ParameterName); }
	bool IsMasked() { return NativeCall<bool>(this, "UMaterialInstanceDynamic.IsMasked()"); }
	void SetSparseVolumeTextureParameterValue(FName ParameterName, USparseVolumeTexture* Value) { NativeCall<void, FName, USparseVolumeTexture*>(this, "UMaterialInstanceDynamic.SetSparseVolumeTextureParameterValue(FName,USparseVolumeTexture*)", ParameterName, Value); }
	float GetTextureDensity(FName TextureName, const FMeshUVChannelInfo& UVChannelData) { return NativeCall<float, FName, const FMeshUVChannelInfo&>(this, "UMaterialInstanceDynamic.GetTextureDensity(FName,FMeshUVChannelInfo&)", TextureName, UVChannelData); }
	unsigned int GetUsageFlags() { return NativeCall<unsigned int>(this, "UMaterialInstanceDynamic.GetUsageFlags()"); }
	bool IsDisplacementFadeEnabled() { return NativeCall<bool>(this, "UMaterialInstanceDynamic.IsDisplacementFadeEnabled()"); }
	bool IsThinSurface() { return NativeCall<bool>(this, "UMaterialInstanceDynamic.IsThinSurface()"); }
	void UpdateCachedLayerData() { NativeCall<void>(this, "UMaterialInstanceDynamic.UpdateCachedLayerData()"); }
	bool IsTwoSided() { return NativeCall<bool>(this, "UMaterialInstanceDynamic.IsTwoSided()"); }
	bool GetCastDynamicShadowAsMasked() { return NativeCall<bool>(this, "UMaterialInstanceDynamic.GetCastDynamicShadowAsMasked()"); }
	void SetNaniteOverride(UMaterialInterface* InMaterial) { NativeCall<void, UMaterialInterface*>(this, "UMaterialInstanceDynamic.SetNaniteOverride(UMaterialInterface*)", InMaterial); }
	void K2_InterpolateMaterialInstanceParams(UMaterialInstance* SourceA, UMaterialInstance* SourceB, float Alpha) { NativeCall<void, UMaterialInstance*, UMaterialInstance*, float>(this, "UMaterialInstanceDynamic.K2_InterpolateMaterialInstanceParams(UMaterialInstance*,UMaterialInstance*,float)", SourceA, SourceB, Alpha); }
	bool IsShadingModelFromMaterialExpression() { return NativeCall<bool>(this, "UMaterialInstanceDynamic.IsShadingModelFromMaterialExpression()"); }
	void SetTextureParameterValueByInfo(const FMaterialParameterInfo& ParameterInfo, UTexture* Value) { NativeCall<void, const FMaterialParameterInfo&, UTexture*>(this, "UMaterialInstanceDynamic.SetTextureParameterValueByInfo(FMaterialParameterInfo&,UTexture*)", ParameterInfo, Value); }
	bool HasPixelAnimation() { return NativeCall<bool>(this, "UMaterialInstanceDynamic.HasPixelAnimation()"); }
	void SetTextureParameterValue(FName ParameterName, UTexture* Value) { NativeCall<void, FName, UTexture*>(this, "UMaterialInstanceDynamic.SetTextureParameterValue(FName,UTexture*)", ParameterName, Value); }
	float GetMaxWorldPositionOffsetDisplacement() { return NativeCall<float>(this, "UMaterialInstanceDynamic.GetMaxWorldPositionOffsetDisplacement()"); }
	void InitializeMID(UMaterialInterface* ParentMaterial) { NativeCall<void, UMaterialInterface*>(this, "UMaterialInstanceDynamic.InitializeMID(UMaterialInterface*)", ParentMaterial); }
	bool IsDitheredLODTransition() { return NativeCall<bool>(this, "UMaterialInstanceDynamic.IsDitheredLODTransition()"); }
	void CopyInterpParameters(UMaterialInstance* Source) { NativeCall<void, UMaterialInstance*>(this, "UMaterialInstanceDynamic.CopyInterpParameters(UMaterialInstance*)", Source); }
	bool HasOverridenBaseProperties() { return NativeCall<bool>(this, "UMaterialInstanceDynamic.HasOverridenBaseProperties()"); }
};
