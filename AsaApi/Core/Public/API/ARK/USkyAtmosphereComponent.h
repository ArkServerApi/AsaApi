#pragma once
#include "BulkForward.h"
#include "USceneComponent.h"

struct USkyAtmosphereComponent : public USceneComponent
{
public:
	USkyAtmosphereComponent() = delete;
	~USkyAtmosphereComponent() = delete;
	USkyAtmosphereComponent(const USkyAtmosphereComponent&) = delete;
	USkyAtmosphereComponent& operator=(const USkyAtmosphereComponent&) = delete;
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("USkyAtmosphereComponent"); }

	ESkyAtmosphereTransformMode& TransformModeField() { return *GetNativePointerField<ESkyAtmosphereTransformMode*>(this, "USkyAtmosphereComponent.TransformMode"); }
	float& BottomRadiusField() { return *GetNativePointerField<float*>(this, "USkyAtmosphereComponent.BottomRadius"); }
	FColor& GroundAlbedoField() { return *GetNativePointerField<FColor*>(this, "USkyAtmosphereComponent.GroundAlbedo"); }
	float& AtmosphereHeightField() { return *GetNativePointerField<float*>(this, "USkyAtmosphereComponent.AtmosphereHeight"); }
	float& MultiScatteringFactorField() { return *GetNativePointerField<float*>(this, "USkyAtmosphereComponent.MultiScatteringFactor"); }
	float& TraceSampleCountScaleField() { return *GetNativePointerField<float*>(this, "USkyAtmosphereComponent.TraceSampleCountScale"); }
	float& RayleighScatteringScaleField() { return *GetNativePointerField<float*>(this, "USkyAtmosphereComponent.RayleighScatteringScale"); }
	bool& bSeparateRayleighScatteringScaleForGroundField() { return *GetNativePointerField<bool*>(this, "USkyAtmosphereComponent.bSeparateRayleighScatteringScaleForGround"); }
	float& RayleighScatteringScaleForGroundField() { return *GetNativePointerField<float*>(this, "USkyAtmosphereComponent.RayleighScatteringScaleForGround"); }
	FLinearColor& RayleighScatteringField() { return *GetNativePointerField<FLinearColor*>(this, "USkyAtmosphereComponent.RayleighScattering"); }
	float& RayleighExponentialDistributionField() { return *GetNativePointerField<float*>(this, "USkyAtmosphereComponent.RayleighExponentialDistribution"); }
	float& MieScatteringScaleField() { return *GetNativePointerField<float*>(this, "USkyAtmosphereComponent.MieScatteringScale"); }
	bool& bSeparateMieScatteringScaleForGroundField() { return *GetNativePointerField<bool*>(this, "USkyAtmosphereComponent.bSeparateMieScatteringScaleForGround"); }
	float& MieScatteringScaleForGroundField() { return *GetNativePointerField<float*>(this, "USkyAtmosphereComponent.MieScatteringScaleForGround"); }
	FLinearColor& MieScatteringField() { return *GetNativePointerField<FLinearColor*>(this, "USkyAtmosphereComponent.MieScattering"); }
	float& MieAbsorptionScaleField() { return *GetNativePointerField<float*>(this, "USkyAtmosphereComponent.MieAbsorptionScale"); }
	bool& bSeparateMieAbsorptionScaleForGroundField() { return *GetNativePointerField<bool*>(this, "USkyAtmosphereComponent.bSeparateMieAbsorptionScaleForGround"); }
	float& MieAbsorptionScaleForGroundField() { return *GetNativePointerField<float*>(this, "USkyAtmosphereComponent.MieAbsorptionScaleForGround"); }
	FLinearColor& MieAbsorptionField() { return *GetNativePointerField<FLinearColor*>(this, "USkyAtmosphereComponent.MieAbsorption"); }
	float& MieAnisotropyField() { return *GetNativePointerField<float*>(this, "USkyAtmosphereComponent.MieAnisotropy"); }
	float& MieExponentialDistributionField() { return *GetNativePointerField<float*>(this, "USkyAtmosphereComponent.MieExponentialDistribution"); }
	float& OtherAbsorptionScaleField() { return *GetNativePointerField<float*>(this, "USkyAtmosphereComponent.OtherAbsorptionScale"); }
	FLinearColor& OtherAbsorptionField() { return *GetNativePointerField<FLinearColor*>(this, "USkyAtmosphereComponent.OtherAbsorption"); }
	FTentDistribution& OtherTentDistributionField() { return *GetNativePointerField<FTentDistribution*>(this, "USkyAtmosphereComponent.OtherTentDistribution"); }
	FLinearColor& SkyLuminanceFactorField() { return *GetNativePointerField<FLinearColor*>(this, "USkyAtmosphereComponent.SkyLuminanceFactor"); }
	FLinearColor& SkyAndAerialPerspectiveLuminanceFactorField() { return *GetNativePointerField<FLinearColor*>(this, "USkyAtmosphereComponent.SkyAndAerialPerspectiveLuminanceFactor"); }
	float& AerialPespectiveViewDistanceScaleField() { return *GetNativePointerField<float*>(this, "USkyAtmosphereComponent.AerialPespectiveViewDistanceScale"); }
	float& HeightFogContributionField() { return *GetNativePointerField<float*>(this, "USkyAtmosphereComponent.HeightFogContribution"); }
	float& TransmittanceMinLightElevationAngleField() { return *GetNativePointerField<float*>(this, "USkyAtmosphereComponent.TransmittanceMinLightElevationAngle"); }
	float& AerialPerspectiveStartDepthField() { return *GetNativePointerField<float*>(this, "USkyAtmosphereComponent.AerialPerspectiveStartDepth"); }
	FSkyAtmosphereSceneProxy*& SkyAtmosphereSceneProxyField() { return *GetNativePointerField<FSkyAtmosphereSceneProxy**>(this, "USkyAtmosphereComponent.SkyAtmosphereSceneProxy"); }
	FGuid& bStaticLightingBuiltGUIDField() { return *GetNativePointerField<FGuid*>(this, "USkyAtmosphereComponent.bStaticLightingBuiltGUID"); }
	bool& bIsAtmosphericFogField() { return *GetNativePointerField<bool*>(this, "USkyAtmosphereComponent.bIsAtmosphericFog"); }
	BitFieldValue<bool, unsigned char> bHoldout() { return { this, "USkyAtmosphereComponent.bHoldout"}; }
	BitFieldValue<bool, unsigned char> bRenderInMainPass() { return { this, "USkyAtmosphereComponent.bRenderInMainPass"}; }
	static UClass* StaticClass() { return AsaApi::ResolveClass("USkyAtmosphereComponent"); }
	void SetDummyStaticLightingGUIDs() { NativeCall<void>(this, "USkyAtmosphereComponent.SetDummyStaticLightingGUIDs()"); }
	void SetAerialPespectiveViewDistanceScale(float NewValue) { NativeCall<void, float>(this, "USkyAtmosphereComponent.SetAerialPespectiveViewDistanceScale(float)", NewValue); }
	void SetRayleighExponentialDistribution(float NewValue) { NativeCall<void, float>(this, "USkyAtmosphereComponent.SetRayleighExponentialDistribution(float)", NewValue); }
	void CreateRenderState_Concurrent(FRegisterComponentContext* Context) { NativeCall<void, FRegisterComponentContext*>(this, "USkyAtmosphereComponent.CreateRenderState_Concurrent(FRegisterComponentContext*)", Context); }
	void DestroyRenderState_Concurrent() { NativeCall<void>(this, "USkyAtmosphereComponent.DestroyRenderState_Concurrent()"); }
	void SetMieExponentialDistribution(float NewValue) { NativeCall<void, float>(this, "USkyAtmosphereComponent.SetMieExponentialDistribution(float)", NewValue); }
	void SetPositionToMatchDeprecatedAtmosphericFog() { NativeCall<void>(this, "USkyAtmosphereComponent.SetPositionToMatchDeprecatedAtmosphericFog()"); }
	void SetRayleighScatteringScale(float NewValue) { NativeCall<void, float>(this, "USkyAtmosphereComponent.SetRayleighScatteringScale(float)", NewValue); }
	void SetMieScatteringScale(float NewValue) { NativeCall<void, float>(this, "USkyAtmosphereComponent.SetMieScatteringScale(float)", NewValue); }
	void SetHoldout(bool bNewHoldout) { NativeCall<void, bool>(this, "USkyAtmosphereComponent.SetHoldout(bool)", bNewHoldout); }
	void SetOtherAbsorptionScale(float NewValue) { NativeCall<void, float>(this, "USkyAtmosphereComponent.SetOtherAbsorptionScale(float)", NewValue); }
	void SendRenderTransform_Concurrent() { NativeCall<void>(this, "USkyAtmosphereComponent.SendRenderTransform_Concurrent()"); }
	void SetRenderInMainPass(bool bValue) { NativeCall<void, bool>(this, "USkyAtmosphereComponent.SetRenderInMainPass(bool)", bValue); }
	void Serialize(FArchive& Ar) { NativeCall<void, FArchive&>(this, "USkyAtmosphereComponent.Serialize(FArchive&)", Ar); }
};
