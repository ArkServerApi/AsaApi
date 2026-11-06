#pragma once
#include "BulkForward.h"
#include "UMeshComponent.h"

struct UHeterogeneousVolumeComponent : public UMeshComponent
{
public:
	UHeterogeneousVolumeComponent() = delete;
	~UHeterogeneousVolumeComponent() = delete;
	UHeterogeneousVolumeComponent(const UHeterogeneousVolumeComponent&) = delete;
	UHeterogeneousVolumeComponent& operator=(const UHeterogeneousVolumeComponent&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UHeterogeneousVolumeComponent"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UHeterogeneousVolumeComponent"); }

	float& FrameField() { return *GetNativePointerField<float*>(this, "UHeterogeneousVolumeComponent.Frame"); }
	float& FrameRateField() { return *GetNativePointerField<float*>(this, "UHeterogeneousVolumeComponent.FrameRate"); }
	float& StartFrameField() { return *GetNativePointerField<float*>(this, "UHeterogeneousVolumeComponent.StartFrame"); }
	float& EndFrameField() { return *GetNativePointerField<float*>(this, "UHeterogeneousVolumeComponent.EndFrame"); }
	float& StreamingMipBiasField() { return *GetNativePointerField<float*>(this, "UHeterogeneousVolumeComponent.StreamingMipBias"); }
	float& StepFactorField() { return *GetNativePointerField<float*>(this, "UHeterogeneousVolumeComponent.StepFactor"); }
	float& ShadowStepFactorField() { return *GetNativePointerField<float*>(this, "UHeterogeneousVolumeComponent.ShadowStepFactor"); }
	float& ShadowBiasFactorField() { return *GetNativePointerField<float*>(this, "UHeterogeneousVolumeComponent.ShadowBiasFactor"); }
	float& LightingDownsampleFactorField() { return *GetNativePointerField<float*>(this, "UHeterogeneousVolumeComponent.LightingDownsampleFactor"); }
	const USparseVolumeTexture*& PreviousSVTField() { return *GetNativePointerField<const USparseVolumeTexture**>(this, "UHeterogeneousVolumeComponent.PreviousSVT"); }
	BitFieldValue<bool, unsigned __int32> bPlaying() { return { this, "UHeterogeneousVolumeComponent.bPlaying"}; }
	BitFieldValue<bool, unsigned __int32> bLooping() { return { this, "UHeterogeneousVolumeComponent.bLooping"}; }
	BitFieldValue<bool, unsigned __int32> bIssueBlockingRequests() { return { this, "UHeterogeneousVolumeComponent.bIssueBlockingRequests"}; }
	BitFieldValue<bool, unsigned __int32> bPivotAtCentroid() { return { this, "UHeterogeneousVolumeComponent.bPivotAtCentroid"}; }
	void SetMaterial(int ElementIndex, UMaterialInterface* Material) { NativeCall<void, int, UMaterialInterface*>(this, "UHeterogeneousVolumeComponent.SetMaterial(int,UMaterialInterface*)", ElementIndex, Material); }
	FPrimitiveSceneProxy* CreateSceneProxy() { return NativeCall<FPrimitiveSceneProxy*>(this, "UHeterogeneousVolumeComponent.CreateSceneProxy()"); }
	void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) { NativeCall<void, float, ELevelTick, FActorComponentTickFunction*>(this, "UHeterogeneousVolumeComponent.TickComponent(float,ELevelTick,FActorComponentTickFunction*)", DeltaTime, TickType, ThisTickFunction); }
	UMaterialInterface* GetHeterogeneousVolumeMaterial() { return NativeCall<UMaterialInterface*>(this, "UHeterogeneousVolumeComponent.GetHeterogeneousVolumeMaterial()"); }
	void GetUsedMaterials(TArray<UMaterialInterface*, TSizedDefaultAllocator<32> >& OutMaterials, bool bGetDebugMaterials) { NativeCall<void, TArray<UMaterialInterface*, TSizedDefaultAllocator<32> >&, bool>(this, "UHeterogeneousVolumeComponent.GetUsedMaterials(TArray<UMaterialInterface*,TSizedDefaultAllocator<32>>&,bool)", OutMaterials, bGetDebugMaterials); }
	void PostReinitProperties() { NativeCall<void>(this, "UHeterogeneousVolumeComponent.PostReinitProperties()"); }
	bool IsMaterialSlotNameValid(FName MaterialSlotName) { return NativeCall<bool, FName>(this, "UHeterogeneousVolumeComponent.IsMaterialSlotNameValid(FName)", MaterialSlotName); }
	void PostInitProperties() { NativeCall<void>(this, "UHeterogeneousVolumeComponent.PostInitProperties()"); }
	void PostLoad() { NativeCall<void>(this, "UHeterogeneousVolumeComponent.PostLoad()"); }
	int GetNumMaterials() { return NativeCall<int>(this, "UHeterogeneousVolumeComponent.GetNumMaterials()"); }
	static UMaterialInstanceDynamic* CreateOrCastToMID(UMaterialInterface* MaterialInterface) { return NativeCall<UMaterialInstanceDynamic*, UMaterialInterface*>(nullptr, "UHeterogeneousVolumeComponent.CreateOrCastToMID(UMaterialInterface*)", MaterialInterface); }
	static USparseVolumeTexture* GetSparseVolumeTexture(UMaterialInterface* MaterialInterface, int ParameterIndex, FName* OutParamName) { return NativeCall<USparseVolumeTexture*, UMaterialInterface*, int, FName*>(nullptr, "UHeterogeneousVolumeComponent.GetSparseVolumeTexture(UMaterialInterface*,int,FName*)", MaterialInterface, ParameterIndex, OutParamName); }
	bool ShouldRenderSelected() { return NativeCall<bool>(this, "UHeterogeneousVolumeComponent.ShouldRenderSelected()"); }
	int GetMaterialIndex(FName MaterialSlotName) { return NativeCall<int, FName>(this, "UHeterogeneousVolumeComponent.GetMaterialIndex(FName)", MaterialSlotName); }
};
