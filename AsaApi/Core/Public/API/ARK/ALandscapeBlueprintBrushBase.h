#pragma once
#include "BulkForward.h"
#include "AActor.h"

struct ALandscapeBlueprintBrushBase : public AActor
{
public:
	ALandscapeBlueprintBrushBase() = delete;
	~ALandscapeBlueprintBrushBase() = delete;
	ALandscapeBlueprintBrushBase(const ALandscapeBlueprintBrushBase&) = delete;
	ALandscapeBlueprintBrushBase& operator=(const ALandscapeBlueprintBrushBase&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("ALandscapeBlueprintBrushBase"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("ALandscapeBlueprintBrushBase"); }

	bool& UpdateOnPropertyChangeField() { return *GetNativePointerField<bool*>(this, "ALandscapeBlueprintBrushBase.UpdateOnPropertyChange"); }
	bool& AffectHeightmapField() { return *GetNativePointerField<bool*>(this, "ALandscapeBlueprintBrushBase.AffectHeightmap"); }
	bool& AffectWeightmapField() { return *GetNativePointerField<bool*>(this, "ALandscapeBlueprintBrushBase.AffectWeightmap"); }
	bool& AffectVisibilityLayerField() { return *GetNativePointerField<bool*>(this, "ALandscapeBlueprintBrushBase.AffectVisibilityLayer"); }
	TArray<FName, TSizedDefaultAllocator<32> >& AffectedWeightmapLayersField() { return *GetNativePointerField<TArray<FName, TSizedDefaultAllocator<32> >*>(this, "ALandscapeBlueprintBrushBase.AffectedWeightmapLayers"); }
	bool& bUsePowerOfTwoRenderTargetField() { return *GetNativePointerField<bool*>(this, "ALandscapeBlueprintBrushBase.bUsePowerOfTwoRenderTarget"); }
	UTextureRenderTarget2D* RenderLayer_Native(const FLandscapeBrushParameters& InParameters) { return NativeCall<UTextureRenderTarget2D*, const FLandscapeBrushParameters&>(this, "ALandscapeBlueprintBrushBase.RenderLayer_Native(FLandscapeBrushParameters&)", InParameters); }
	UTextureRenderTarget2D* Render_Implementation(bool InIsHeightmap, UTextureRenderTarget2D* InCombinedResult, const FName& InWeightmapLayerName) { return NativeCall<UTextureRenderTarget2D*, bool, UTextureRenderTarget2D*, const FName&>(this, "ALandscapeBlueprintBrushBase.Render_Implementation(bool,UTextureRenderTarget2D*,FName&)", InIsHeightmap, InCombinedResult, InWeightmapLayerName); }
	static void SetAffectWeightmap_WrapperImpl(void* Object, const void* InValue) { NativeCall<void, void*, const void*>(nullptr, "ALandscapeBlueprintBrushBase.SetAffectWeightmap_WrapperImpl(void*,void*)", Object, InValue); }
	static void SetAffectHeightmap_WrapperImpl(void* Object, const void* InValue) { NativeCall<void, void*, const void*>(nullptr, "ALandscapeBlueprintBrushBase.SetAffectHeightmap_WrapperImpl(void*,void*)", Object, InValue); }
	static void SetbUsePowerOfTwoRenderTarget_WrapperImpl(void* Object, const void* InValue) { NativeCall<void, void*, const void*>(nullptr, "ALandscapeBlueprintBrushBase.SetbUsePowerOfTwoRenderTarget_WrapperImpl(void*,void*)", Object, InValue); }
	static void SetAffectVisibilityLayer_WrapperImpl(void* Object, const void* InValue) { NativeCall<void, void*, const void*>(nullptr, "ALandscapeBlueprintBrushBase.SetAffectVisibilityLayer_WrapperImpl(void*,void*)", Object, InValue); }
	UTextureRenderTarget2D* RenderLayer_Implementation(const FLandscapeBrushParameters& InParameters) { return NativeCall<UTextureRenderTarget2D*, const FLandscapeBrushParameters&>(this, "ALandscapeBlueprintBrushBase.RenderLayer_Implementation(FLandscapeBrushParameters&)", InParameters); }
};
