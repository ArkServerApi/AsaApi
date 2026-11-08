#pragma once
#include "BulkForward.h"
#include "USceneComponent.h"

struct ULocalFogVolumeComponent : public USceneComponent
{
public:
	ULocalFogVolumeComponent() = delete;
	~ULocalFogVolumeComponent() = delete;
	ULocalFogVolumeComponent(const ULocalFogVolumeComponent&) = delete;
	ULocalFogVolumeComponent& operator=(const ULocalFogVolumeComponent&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("ULocalFogVolumeComponent"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("ULocalFogVolumeComponent"); }

	float& RadialFogExtinctionField() { return *GetNativePointerField<float*>(this, "ULocalFogVolumeComponent.RadialFogExtinction"); }
	float& HeightFogExtinctionField() { return *GetNativePointerField<float*>(this, "ULocalFogVolumeComponent.HeightFogExtinction"); }
	float& HeightFogFalloffField() { return *GetNativePointerField<float*>(this, "ULocalFogVolumeComponent.HeightFogFalloff"); }
	float& HeightFogOffsetField() { return *GetNativePointerField<float*>(this, "ULocalFogVolumeComponent.HeightFogOffset"); }
	float& FogPhaseGField() { return *GetNativePointerField<float*>(this, "ULocalFogVolumeComponent.FogPhaseG"); }
	FLinearColor& FogAlbedoField() { return *GetNativePointerField<FLinearColor*>(this, "ULocalFogVolumeComponent.FogAlbedo"); }
	FLinearColor& FogEmissiveField() { return *GetNativePointerField<FLinearColor*>(this, "ULocalFogVolumeComponent.FogEmissive"); }
	float& FogStartDistanceField() { return *GetNativePointerField<float*>(this, "ULocalFogVolumeComponent.FogStartDistance"); }
	int& FogSortPriorityField() { return *GetNativePointerField<int*>(this, "ULocalFogVolumeComponent.FogSortPriority"); }
	FLocalFogVolumeSceneProxy*& LocalFogVolumeSceneProxyField() { return *GetNativePointerField<FLocalFogVolumeSceneProxy**>(this, "ULocalFogVolumeComponent.LocalFogVolumeSceneProxy"); }
	void CreateRenderState_Concurrent(FRegisterComponentContext* Context) { NativeCall<void, FRegisterComponentContext*>(this, "ULocalFogVolumeComponent.CreateRenderState_Concurrent(FRegisterComponentContext*)", Context); }
	void SetRadialFogExtinction(float NewValue) { NativeCall<void, float>(this, "ULocalFogVolumeComponent.SetRadialFogExtinction(float)", NewValue); }
	void DestroyRenderState_Concurrent() { NativeCall<void>(this, "ULocalFogVolumeComponent.DestroyRenderState_Concurrent()"); }
	void SendRenderTransform_Concurrent() { NativeCall<void>(this, "ULocalFogVolumeComponent.SendRenderTransform_Concurrent()"); }
};
