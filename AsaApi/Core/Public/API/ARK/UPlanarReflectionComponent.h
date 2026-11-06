#pragma once
#include "BulkForward.h"
#include "USceneCaptureComponent.h"

struct UPlanarReflectionComponent : public USceneCaptureComponent
{
public:
	UPlanarReflectionComponent() = delete;
	~UPlanarReflectionComponent() = delete;
	UPlanarReflectionComponent(const UPlanarReflectionComponent&) = delete;
	UPlanarReflectionComponent& operator=(const UPlanarReflectionComponent&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UPlanarReflectionComponent"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UPlanarReflectionComponent"); }

	float& NormalDistortionStrengthField() { return *GetNativePointerField<float*>(this, "UPlanarReflectionComponent.NormalDistortionStrength"); }
	float& PrefilterRoughnessField() { return *GetNativePointerField<float*>(this, "UPlanarReflectionComponent.PrefilterRoughness"); }
	float& PrefilterRoughnessDistanceField() { return *GetNativePointerField<float*>(this, "UPlanarReflectionComponent.PrefilterRoughnessDistance"); }
	int& ScreenPercentageField() { return *GetNativePointerField<int*>(this, "UPlanarReflectionComponent.ScreenPercentage"); }
	float& ExtraFOVField() { return *GetNativePointerField<float*>(this, "UPlanarReflectionComponent.ExtraFOV"); }
	float& DistanceFromPlaneFadeStart_DEPRECATEDField() { return *GetNativePointerField<float*>(this, "UPlanarReflectionComponent.DistanceFromPlaneFadeStart_DEPRECATED"); }
	float& DistanceFromPlaneFadeEnd_DEPRECATEDField() { return *GetNativePointerField<float*>(this, "UPlanarReflectionComponent.DistanceFromPlaneFadeEnd_DEPRECATED"); }
	float& DistanceFromPlaneFadeoutStartField() { return *GetNativePointerField<float*>(this, "UPlanarReflectionComponent.DistanceFromPlaneFadeoutStart"); }
	float& DistanceFromPlaneFadeoutEndField() { return *GetNativePointerField<float*>(this, "UPlanarReflectionComponent.DistanceFromPlaneFadeoutEnd"); }
	float& AngleFromPlaneFadeStartField() { return *GetNativePointerField<float*>(this, "UPlanarReflectionComponent.AngleFromPlaneFadeStart"); }
	float& AngleFromPlaneFadeEndField() { return *GetNativePointerField<float*>(this, "UPlanarReflectionComponent.AngleFromPlaneFadeEnd"); }
	bool& bShowPreviewPlaneField() { return *GetNativePointerField<bool*>(this, "UPlanarReflectionComponent.bShowPreviewPlane"); }
	bool& bRenderSceneTwoSidedField() { return *GetNativePointerField<bool*>(this, "UPlanarReflectionComponent.bRenderSceneTwoSided"); }
	FRenderCommandFence& ReleaseResourcesFenceField() { return *GetNativePointerField<FRenderCommandFence*>(this, "UPlanarReflectionComponent.ReleaseResourcesFence"); }
	FPlanarReflectionSceneProxy*& SceneProxyField() { return *GetNativePointerField<FPlanarReflectionSceneProxy**>(this, "UPlanarReflectionComponent.SceneProxy"); }
	FPlanarReflectionRenderTarget*& RenderTargetField() { return *GetNativePointerField<FPlanarReflectionRenderTarget**>(this, "UPlanarReflectionComponent.RenderTarget"); }
	int& PlanarReflectionIdField() { return *GetNativePointerField<int*>(this, "UPlanarReflectionComponent.PlanarReflectionId"); }
	void OnRegister() { NativeCall<void>(this, "UPlanarReflectionComponent.OnRegister()"); }
	void SendRenderTransform_Concurrent() { NativeCall<void>(this, "UPlanarReflectionComponent.SendRenderTransform_Concurrent()"); }
	void CreateRenderState_Concurrent(FRegisterComponentContext* Context) { NativeCall<void, FRegisterComponentContext*>(this, "UPlanarReflectionComponent.CreateRenderState_Concurrent(FRegisterComponentContext*)", Context); }
	bool IsReadyForFinishDestroy() { return NativeCall<bool>(this, "UPlanarReflectionComponent.IsReadyForFinishDestroy()"); }
	void DestroyRenderState_Concurrent() { NativeCall<void>(this, "UPlanarReflectionComponent.DestroyRenderState_Concurrent()"); }
	void FinishDestroy() { NativeCall<void>(this, "UPlanarReflectionComponent.FinishDestroy()"); }
	void Serialize(FArchive& Ar) { NativeCall<void, FArchive&>(this, "UPlanarReflectionComponent.Serialize(FArchive&)", Ar); }
	void BeginDestroy() { NativeCall<void>(this, "UPlanarReflectionComponent.BeginDestroy()"); }
};
