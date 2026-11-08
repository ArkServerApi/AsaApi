#pragma once
#include "BulkForward.h"
#include "UPrimitiveComponent.h"

struct UTextRenderComponent : public UPrimitiveComponent
{
public:
	UTextRenderComponent() = delete;
	~UTextRenderComponent() = delete;
	UTextRenderComponent(const UTextRenderComponent&) = delete;
	UTextRenderComponent& operator=(const UTextRenderComponent&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UTextRenderComponent"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UTextRenderComponent"); }

	FText& TextField() { return *GetNativePointerField<FText*>(this, "UTextRenderComponent.Text"); }
	FColor& TextRenderColorField() { return *GetNativePointerField<FColor*>(this, "UTextRenderComponent.TextRenderColor"); }
	float& XScaleField() { return *GetNativePointerField<float*>(this, "UTextRenderComponent.XScale"); }
	float& YScaleField() { return *GetNativePointerField<float*>(this, "UTextRenderComponent.YScale"); }
	float& WorldSizeField() { return *GetNativePointerField<float*>(this, "UTextRenderComponent.WorldSize"); }
	float& InvDefaultSizeField() { return *GetNativePointerField<float*>(this, "UTextRenderComponent.InvDefaultSize"); }
	float& HorizSpacingAdjustField() { return *GetNativePointerField<float*>(this, "UTextRenderComponent.HorizSpacingAdjust"); }
	float& VertSpacingAdjustField() { return *GetNativePointerField<float*>(this, "UTextRenderComponent.VertSpacingAdjust"); }
	BitFieldValue<bool, unsigned __int32> bAlwaysRenderAsText() { return { this, "UTextRenderComponent.bAlwaysRenderAsText"}; }
	void SetXScale(float Value) { NativeCall<void, float>(this, "UTextRenderComponent.SetXScale(float)", Value); }
	UMaterialInterface* GetMaterial(int ElementIndex) { return NativeCall<UMaterialInterface*, int>(this, "UTextRenderComponent.GetMaterial(int)", ElementIndex); }
	static void ShutdownMIDCache() { NativeCall<void>(nullptr, "UTextRenderComponent.ShutdownMIDCache()"); }
	static void InitializeMIDCache() { NativeCall<void>(nullptr, "UTextRenderComponent.InitializeMIDCache()"); }
	void PrecachePSOs() { NativeCall<void>(this, "UTextRenderComponent.PrecachePSOs()"); }
	void PostLoad() { NativeCall<void>(this, "UTextRenderComponent.PostLoad()"); }
	int GetNumMaterials() { return NativeCall<int>(this, "UTextRenderComponent.GetNumMaterials()"); }
	void SetYScale(float Value) { NativeCall<void, float>(this, "UTextRenderComponent.SetYScale(float)", Value); }
	bool RequiresGameThreadEndOfFrameUpdates() { return NativeCall<bool>(this, "UTextRenderComponent.RequiresGameThreadEndOfFrameUpdates()"); }
	void SetWorldSize(float Value) { NativeCall<void, float>(this, "UTextRenderComponent.SetWorldSize(float)", Value); }
	void SetTextRenderColor(FColor Value) { NativeCall<void, FColor>(this, "UTextRenderComponent.SetTextRenderColor(FColor)", Value); }
	void SetMaterial(int ElementIndex, UMaterialInterface* InMaterial) { NativeCall<void, int, UMaterialInterface*>(this, "UTextRenderComponent.SetMaterial(int,UMaterialInterface*)", ElementIndex, InMaterial); }
	bool ShouldRecreateProxyOnUpdateTransform() { return NativeCall<bool>(this, "UTextRenderComponent.ShouldRecreateProxyOnUpdateTransform()"); }
	void SetText(const FString& Value) { NativeCall<void, const FString&>(this, "UTextRenderComponent.SetText(FString&)", Value); }
	void UpdateBounds() { NativeCall<void>(this, "UTextRenderComponent.UpdateBounds()"); }
	void K2_SetText(const FText& Value) { NativeCall<void, const FText&>(this, "UTextRenderComponent.K2_SetText(FText&)", Value); }
	void GetUsedMaterials(TArray<UMaterialInterface*, TSizedDefaultAllocator<32> >& OutMaterials, bool bGetDebugMaterials) { NativeCall<void, TArray<UMaterialInterface*, TSizedDefaultAllocator<32> >&, bool>(this, "UTextRenderComponent.GetUsedMaterials(TArray<UMaterialInterface*,TSizedDefaultAllocator<32>>&,bool)", OutMaterials, bGetDebugMaterials); }
	FPrimitiveSceneProxy* CreateSceneProxy() { return NativeCall<FPrimitiveSceneProxy*>(this, "UTextRenderComponent.CreateSceneProxy()"); }
};
