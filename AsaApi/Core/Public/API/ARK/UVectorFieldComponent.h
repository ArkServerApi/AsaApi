#pragma once
#include "BulkForward.h"
#include "UPrimitiveComponent.h"

struct UVectorFieldComponent : public UPrimitiveComponent
{
public:
	UVectorFieldComponent() = delete;
	~UVectorFieldComponent() = delete;
	UVectorFieldComponent(const UVectorFieldComponent&) = delete;
	UVectorFieldComponent& operator=(const UVectorFieldComponent&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UVectorFieldComponent"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UVectorFieldComponent"); }

	float& IntensityField() { return *GetNativePointerField<float*>(this, "UVectorFieldComponent.Intensity"); }
	float& TightnessField() { return *GetNativePointerField<float*>(this, "UVectorFieldComponent.Tightness"); }
	FFXSystemInterface*& FXSystemField() { return *GetNativePointerField<FFXSystemInterface**>(this, "UVectorFieldComponent.FXSystem"); }
	FVectorFieldInstance*& VectorFieldInstanceField() { return *GetNativePointerField<FVectorFieldInstance**>(this, "UVectorFieldComponent.VectorFieldInstance"); }
	BitFieldValue<bool, unsigned __int32> bPreviewVectorField() { return { this, "UVectorFieldComponent.bPreviewVectorField"}; }
	FPrimitiveSceneProxy* CreateSceneProxy() { return NativeCall<FPrimitiveSceneProxy*>(this, "UVectorFieldComponent.CreateSceneProxy()"); }
	void SetIntensity(float NewIntensity) { NativeCall<void, float>(this, "UVectorFieldComponent.SetIntensity(float)", NewIntensity); }
	void SendRenderTransform_Concurrent() { NativeCall<void>(this, "UVectorFieldComponent.SendRenderTransform_Concurrent()"); }
	void OnRegister() { NativeCall<void>(this, "UVectorFieldComponent.OnRegister()"); }
	void GetUsedMaterials(TArray<UMaterialInterface*, TSizedDefaultAllocator<32> >& OutMaterials, bool bGetDebugMaterials) { NativeCall<void, TArray<UMaterialInterface*, TSizedDefaultAllocator<32> >&, bool>(this, "UVectorFieldComponent.GetUsedMaterials(TArray<UMaterialInterface*,TSizedDefaultAllocator<32>>&,bool)", OutMaterials, bGetDebugMaterials); }
	void OnUnregister() { NativeCall<void>(this, "UVectorFieldComponent.OnUnregister()"); }
};
