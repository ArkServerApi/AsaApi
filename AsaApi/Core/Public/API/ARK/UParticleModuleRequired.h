#pragma once
#include "UEObjectForward.h"
#include "BulkForward.h"
#include "UParticleModule.h"

class UParticleModuleRequired : public UParticleModule
{
public:
	UParticleModuleRequired() = delete;
	~UParticleModuleRequired() = delete;
	UParticleModuleRequired(const UParticleModuleRequired&) = delete;
	UParticleModuleRequired& operator=(const UParticleModuleRequired&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UParticleModuleRequired"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UParticleModuleRequired"); }
	float& MinFacingCameraBlendDistanceField() { return *GetNativePointerField<float*>(this, "UParticleModuleRequired.MinFacingCameraBlendDistance"); }
	float& MaxFacingCameraBlendDistanceField() { return *GetNativePointerField<float*>(this, "UParticleModuleRequired.MaxFacingCameraBlendDistance"); }
	UE::Math::TVector<double>& EmitterOriginField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "UParticleModuleRequired.EmitterOrigin"); }
	UE::Math::TRotator<double>& EmitterRotationField() { return *GetNativePointerField<UE::Math::TRotator<double>*>(this, "UParticleModuleRequired.EmitterRotation"); }
	float& EmitterDurationField() { return *GetNativePointerField<float*>(this, "UParticleModuleRequired.EmitterDuration"); }
	FRawDistributionFloat& SpawnRateField() { return *GetNativePointerField<FRawDistributionFloat*>(this, "UParticleModuleRequired.SpawnRate"); }
	float& EmitterDelayField() { return *GetNativePointerField<float*>(this, "UParticleModuleRequired.EmitterDelay"); }
	float& EmitterDelayLowField() { return *GetNativePointerField<float*>(this, "UParticleModuleRequired.EmitterDelayLow"); }
	int& SubImages_HorizontalField() { return *GetNativePointerField<int*>(this, "UParticleModuleRequired.SubImages_Horizontal"); }
	int& SubImages_VerticalField() { return *GetNativePointerField<int*>(this, "UParticleModuleRequired.SubImages_Vertical"); }
	float& RandomImageTimeField() { return *GetNativePointerField<float*>(this, "UParticleModuleRequired.RandomImageTime"); }
	int& RandomImageChangesField() { return *GetNativePointerField<int*>(this, "UParticleModuleRequired.RandomImageChanges"); }
	UE::Math::TVector<double>& MacroUVPositionField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "UParticleModuleRequired.MacroUVPosition"); }
	float& MacroUVRadiusField() { return *GetNativePointerField<float*>(this, "UParticleModuleRequired.MacroUVRadius"); }
	UE::Math::TVector<double>& NormalsSphereCenterField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "UParticleModuleRequired.NormalsSphereCenter"); }
	float& AlphaThresholdField() { return *GetNativePointerField<float*>(this, "UParticleModuleRequired.AlphaThreshold"); }
	int& EmitterLoopsField() { return *GetNativePointerField<int*>(this, "UParticleModuleRequired.EmitterLoops"); }
	int& MaxDrawCountField() { return *GetNativePointerField<int*>(this, "UParticleModuleRequired.MaxDrawCount"); }
	float& EmitterDurationLowField() { return *GetNativePointerField<float*>(this, "UParticleModuleRequired.EmitterDurationLow"); }
	UE::Math::TVector<double>& NormalsCylinderDirectionField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "UParticleModuleRequired.NormalsCylinderDirection"); }
	TArray<FName, TSizedDefaultAllocator<32> >& NamedMaterialOverridesField() { return *GetNativePointerField<TArray<FName, TSizedDefaultAllocator<32> >*>(this, "UParticleModuleRequired.NamedMaterialOverrides"); }
	FSubUVDerivedData& DerivedDataField() { return *GetNativePointerField<FSubUVDerivedData*>(this, "UParticleModuleRequired.DerivedData"); }
	FRenderCommandFence& ReleaseFenceField() { return *GetNativePointerField<FRenderCommandFence*>(this, "UParticleModuleRequired.ReleaseFence"); }
	FSubUVBoundingGeometryBuffer*& BoundingGeometryBufferField() { return *GetNativePointerField<FSubUVBoundingGeometryBuffer**>(this, "UParticleModuleRequired.BoundingGeometryBuffer"); }
	BitFieldValue<bool, unsigned char> bUseLocalSpace() { return { this, "UParticleModuleRequired.bUseLocalSpace"}; }
	BitFieldValue<bool, unsigned char> bKillOnDeactivate() { return { this, "UParticleModuleRequired.bKillOnDeactivate"}; }
	BitFieldValue<bool, unsigned char> bKillOnCompleted() { return { this, "UParticleModuleRequired.bKillOnCompleted"}; }
	BitFieldValue<bool, unsigned char> bUseLegacyEmitterTime() { return { this, "UParticleModuleRequired.bUseLegacyEmitterTime"}; }
	BitFieldValue<bool, unsigned char> bRemoveHMDRoll() { return { this, "UParticleModuleRequired.bRemoveHMDRoll"}; }
	BitFieldValue<bool, unsigned char> bSupportLargeWorldCoordinates() { return { this, "UParticleModuleRequired.bSupportLargeWorldCoordinates"}; }
	BitFieldValue<bool, unsigned char> bEmitterDurationUseRange() { return { this, "UParticleModuleRequired.bEmitterDurationUseRange"}; }
	BitFieldValue<bool, unsigned char> bOverrideUseVelocityForMotionBlur() { return { this, "UParticleModuleRequired.bOverrideUseVelocityForMotionBlur"}; }
	BitFieldValue<bool, unsigned char> bUseVelocityForMotionBlur() { return { this, "UParticleModuleRequired.bUseVelocityForMotionBlur"}; }
	BitFieldValue<bool, unsigned char> bDelayFirstLoopOnly() { return { this, "UParticleModuleRequired.bDelayFirstLoopOnly"}; }
	BitFieldValue<bool, unsigned char> bScaleUV() { return { this, "UParticleModuleRequired.bScaleUV"}; }
	BitFieldValue<bool, unsigned char> bEmitterDelayUseRange() { return { this, "UParticleModuleRequired.bEmitterDelayUseRange"}; }
	BitFieldValue<bool, unsigned char> bOverrideSystemMacroUV() { return { this, "UParticleModuleRequired.bOverrideSystemMacroUV"}; }
	BitFieldValue<bool, unsigned char> bUseMaxDrawCount() { return { this, "UParticleModuleRequired.bUseMaxDrawCount"}; }
	BitFieldValue<bool, unsigned char> bOrbitModuleAffectsVelocityAlignment() { return { this, "UParticleModuleRequired.bOrbitModuleAffectsVelocityAlignment"}; }
	BitFieldValue<bool, unsigned char> bDurationRecalcEachLoop() { return { this, "UParticleModuleRequired.bDurationRecalcEachLoop"}; }
	void PostInitProperties() { NativeCall<void>(this, "UParticleModuleRequired.PostInitProperties()"); }
	void SetToSensibleDefaults(UParticleEmitter* Owner) { NativeCall<void, UParticleEmitter*>(this, "UParticleModuleRequired.SetToSensibleDefaults(UParticleEmitter*)", Owner); }
	bool GenerateLODModuleValues(UParticleModule* SourceModule, float Percentage, UParticleLODLevel* LODLevel) { return NativeCall<bool, UParticleModule*, float, UParticleLODLevel*>(this, "UParticleModuleRequired.GenerateLODModuleValues(UParticleModule*,float,UParticleLODLevel*)", SourceModule, Percentage, LODLevel); }
	bool IsReadyForFinishDestroy() { return NativeCall<bool>(this, "UParticleModuleRequired.IsReadyForFinishDestroy()"); }
	void Serialize(FArchive& Ar) { NativeCall<void, FArchive&>(this, "UParticleModuleRequired.Serialize(FArchive&)", Ar); }
	void FinishDestroy() { NativeCall<void>(this, "UParticleModuleRequired.FinishDestroy()"); }
	void PostLoad() { NativeCall<void>(this, "UParticleModuleRequired.PostLoad()"); }
	void BeginDestroy() { NativeCall<void>(this, "UParticleModuleRequired.BeginDestroy()"); }
	bool ShouldUseVelocityForMotionBlur() { return NativeCall<bool>(this, "UParticleModuleRequired.ShouldUseVelocityForMotionBlur()"); }
};
