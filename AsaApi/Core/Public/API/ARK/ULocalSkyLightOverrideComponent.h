#pragma once
#include "BulkForward.h"
#include "USceneComponent.h"

struct ULocalSkyLightOverrideComponent : public USceneComponent
{
public:
	ULocalSkyLightOverrideComponent() = delete;
	~ULocalSkyLightOverrideComponent() = delete;
	ULocalSkyLightOverrideComponent(const ULocalSkyLightOverrideComponent&) = delete;
	ULocalSkyLightOverrideComponent& operator=(const ULocalSkyLightOverrideComponent&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("ULocalSkyLightOverrideComponent"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("ULocalSkyLightOverrideComponent"); }

	bool& bUseBoxInfluenceShapeField() { return *GetNativePointerField<bool*>(this, "ULocalSkyLightOverrideComponent.bUseBoxInfluenceShape"); }
	float& BlendDistanceField() { return *GetNativePointerField<float*>(this, "ULocalSkyLightOverrideComponent.BlendDistance"); }
	UE::Math::TVector<double>& CaptureOffsetField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "ULocalSkyLightOverrideComponent.CaptureOffset"); }
	int& CubemapResolutionField() { return *GetNativePointerField<int*>(this, "ULocalSkyLightOverrideComponent.CubemapResolution"); }
	FLinearColor& CaptureColorField() { return *GetNativePointerField<FLinearColor*>(this, "ULocalSkyLightOverrideComponent.CaptureColor"); }
	float& CaptureColorIntensityField() { return *GetNativePointerField<float*>(this, "ULocalSkyLightOverrideComponent.CaptureColorIntensity"); }
	float& SkyDistanceThresholdField() { return *GetNativePointerField<float*>(this, "ULocalSkyLightOverrideComponent.SkyDistanceThreshold"); }
	bool& bCaptureEmissiveOnlyField() { return *GetNativePointerField<bool*>(this, "ULocalSkyLightOverrideComponent.bCaptureEmissiveOnly"); }
	bool& bLowerHemisphereIsBlackField() { return *GetNativePointerField<bool*>(this, "ULocalSkyLightOverrideComponent.bLowerHemisphereIsBlack"); }
	FLinearColor& LowerHemisphereColorField() { return *GetNativePointerField<FLinearColor*>(this, "ULocalSkyLightOverrideComponent.LowerHemisphereColor"); }
	bool& bOverrideLumenSkylightLeakingField() { return *GetNativePointerField<bool*>(this, "ULocalSkyLightOverrideComponent.bOverrideLumenSkylightLeaking"); }
	float& LumenSkylightLeakingOverrideValueField() { return *GetNativePointerField<float*>(this, "ULocalSkyLightOverrideComponent.LumenSkylightLeakingOverrideValue"); }
	FLocalSkyLightOverrideSceneProxy*& SceneProxyField() { return *GetNativePointerField<FLocalSkyLightOverrideSceneProxy**>(this, "ULocalSkyLightOverrideComponent.SceneProxy"); }
	float& AverageBrightnessField() { return *GetNativePointerField<float*>(this, "ULocalSkyLightOverrideComponent.AverageBrightness"); }
	FRenderCommandFence& ReleaseResourcesFenceField() { return *GetNativePointerField<FRenderCommandFence*>(this, "ULocalSkyLightOverrideComponent.ReleaseResourcesFence"); }
	void SendRenderTransform_Concurrent() { NativeCall<void>(this, "ULocalSkyLightOverrideComponent.SendRenderTransform_Concurrent()"); }
	void SetUseBoxShape(bool bNewUseBoxShape) { NativeCall<void, bool>(this, "ULocalSkyLightOverrideComponent.SetUseBoxShape(bool)", bNewUseBoxShape); }
	void PostLoad() { NativeCall<void>(this, "ULocalSkyLightOverrideComponent.PostLoad()"); }
	float GetInfluenceBoundingRadius() { return NativeCall<float>(this, "ULocalSkyLightOverrideComponent.GetInfluenceBoundingRadius()"); }
	void BeginDestroy() { NativeCall<void>(this, "ULocalSkyLightOverrideComponent.BeginDestroy()"); }
	void DestroyRenderState_Concurrent() { NativeCall<void>(this, "ULocalSkyLightOverrideComponent.DestroyRenderState_Concurrent()"); }
	bool IsReadyForFinishDestroy() { return NativeCall<bool>(this, "ULocalSkyLightOverrideComponent.IsReadyForFinishDestroy()"); }
	void SetTexture(UTextureCube* InTexture) { NativeCall<void, UTextureCube*>(this, "ULocalSkyLightOverrideComponent.SetTexture(UTextureCube*)", InTexture); }
	void SetBlendDistance(float NewBlendDistance) { NativeCall<void, float>(this, "ULocalSkyLightOverrideComponent.SetBlendDistance(float)", NewBlendDistance); }
	void CreateRenderState_Concurrent(FRegisterComponentContext* Context) { NativeCall<void, FRegisterComponentContext*>(this, "ULocalSkyLightOverrideComponent.CreateRenderState_Concurrent(FRegisterComponentContext*)", Context); }
};
