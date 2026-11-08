#pragma once
#include "UEObjectForward.h"
#include "BulkForward.h"
#include "UObject.h"

class UParticleEmitter : public UObject
{
public:
	UParticleEmitter() = delete;
	~UParticleEmitter() = delete;
	UParticleEmitter(const UParticleEmitter&) = delete;
	UParticleEmitter& operator=(const UParticleEmitter&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UParticleEmitter"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UParticleEmitter"); }
	FName& EmitterNameField() { return *GetNativePointerField<FName*>(this, "UParticleEmitter.EmitterName"); }
	int& SubUVDataOffsetField() { return *GetNativePointerField<int*>(this, "UParticleEmitter.SubUVDataOffset"); }
	EParticleSignificanceLevel& SignificanceLevelField() { return *GetNativePointerField<EParticleSignificanceLevel*>(this, "UParticleEmitter.SignificanceLevel"); }
	int& PeakActiveParticlesField() { return *GetNativePointerField<int*>(this, "UParticleEmitter.PeakActiveParticles"); }
	int& InitialAllocationCountField() { return *GetNativePointerField<int*>(this, "UParticleEmitter.InitialAllocationCount"); }
	float& QualityLevelSpawnRateScaleField() { return *GetNativePointerField<float*>(this, "UParticleEmitter.QualityLevelSpawnRateScale"); }
	unsigned int& DetailModeBitmaskField() { return *GetNativePointerField<unsigned int*>(this, "UParticleEmitter.DetailModeBitmask"); }
	TArray<UMaterialInterface*, TSizedDefaultAllocator<32> >& MeshMaterialsField() { return *GetNativePointerField<TArray<UMaterialInterface*, TSizedDefaultAllocator<32> >*>(this, "UParticleEmitter.MeshMaterials"); }
	int& DynamicParameterDataOffsetField() { return *GetNativePointerField<int*>(this, "UParticleEmitter.DynamicParameterDataOffset"); }
	int& LightDataOffsetField() { return *GetNativePointerField<int*>(this, "UParticleEmitter.LightDataOffset"); }
	float& LightVolumetricScatteringIntensityField() { return *GetNativePointerField<float*>(this, "UParticleEmitter.LightVolumetricScatteringIntensity"); }
	int& CameraPayloadOffsetField() { return *GetNativePointerField<int*>(this, "UParticleEmitter.CameraPayloadOffset"); }
	int& ParticleSizeField() { return *GetNativePointerField<int*>(this, "UParticleEmitter.ParticleSize"); }
	int& ReqInstanceBytesField() { return *GetNativePointerField<int*>(this, "UParticleEmitter.ReqInstanceBytes"); }
	UE::Math::TVector2<double>& PivotOffsetField() { return *GetNativePointerField<UE::Math::TVector2<double>*>(this, "UParticleEmitter.PivotOffset"); }
	int& TypeDataOffsetField() { return *GetNativePointerField<int*>(this, "UParticleEmitter.TypeDataOffset"); }
	int& TypeDataInstanceOffsetField() { return *GetNativePointerField<int*>(this, "UParticleEmitter.TypeDataInstanceOffset"); }
	float& MinFacingCameraBlendDistanceField() { return *GetNativePointerField<float*>(this, "UParticleEmitter.MinFacingCameraBlendDistance"); }
	float& MaxFacingCameraBlendDistanceField() { return *GetNativePointerField<float*>(this, "UParticleEmitter.MaxFacingCameraBlendDistance"); }
	USubUVAnimation*& SubUVAnimationField() { return *GetNativePointerField<USubUVAnimation**>(this, "UParticleEmitter.SubUVAnimation"); }
	BitFieldValue<bool, unsigned char> bUseLegacySpawningBehavior() { return { this, "UParticleEmitter.bUseLegacySpawningBehavior"}; }
	BitFieldValue<bool, unsigned char> bRequiresLoopNotification() { return { this, "UParticleEmitter.bRequiresLoopNotification"}; }
	BitFieldValue<bool, unsigned char> bAxisLockEnabled() { return { this, "UParticleEmitter.bAxisLockEnabled"}; }
	BitFieldValue<bool, unsigned char> bMeshRotationActive() { return { this, "UParticleEmitter.bMeshRotationActive"}; }
	BitFieldValue<bool, unsigned char> ConvertedModules() { return { this, "UParticleEmitter.ConvertedModules"}; }
	BitFieldValue<bool, unsigned char> bIsSoloing() { return { this, "UParticleEmitter.bIsSoloing"}; }
	BitFieldValue<bool, unsigned char> bCookedOut() { return { this, "UParticleEmitter.bCookedOut"}; }
	BitFieldValue<bool, unsigned char> bDisabledLODsKeepEmitterAlive() { return { this, "UParticleEmitter.bDisabledLODsKeepEmitterAlive"}; }
	BitFieldValue<bool, unsigned char> bDisableWhenInsignficant() { return { this, "UParticleEmitter.bDisableWhenInsignficant"}; }
	BitFieldValue<bool, unsigned char> bRemoveHMDRollInVR() { return { this, "UParticleEmitter.bRemoveHMDRollInVR"}; }
	void SetToSensibleDefaults() { NativeCall<void>(this, "UParticleEmitter.SetToSensibleDefaults()"); }
	bool CalculateMaxActiveParticleCount() { return NativeCall<bool>(this, "UParticleEmitter.CalculateMaxActiveParticleCount()"); }
	bool AutogenerateLowestLODLevel(bool bDuplicateHighest) { return NativeCall<bool, bool>(this, "UParticleEmitter.AutogenerateLowestLODLevel(bool)", bDuplicateHighest); }
	void PostLoad() { NativeCall<void>(this, "UParticleEmitter.PostLoad()"); }
	UParticleLODLevel* GetLODLevel(int LODLevel) { return NativeCall<UParticleLODLevel*, int>(this, "UParticleEmitter.GetLODLevel(int)", LODLevel); }
	float GetQualityLevelSpawnRateMult() { return NativeCall<float>(this, "UParticleEmitter.GetQualityLevelSpawnRateMult()"); }
	void CacheEmitterModuleInfo() { NativeCall<void>(this, "UParticleEmitter.CacheEmitterModuleInfo()"); }
	void UpdateModuleLists() { NativeCall<void>(this, "UParticleEmitter.UpdateModuleLists()"); }
	UParticleLODLevel* GetCurrentLODLevel(FParticleEmitterInstance* Instance) { return NativeCall<UParticleLODLevel*, FParticleEmitterInstance*>(this, "UParticleEmitter.GetCurrentLODLevel(FParticleEmitterInstance*)", Instance); }
	FParticleEmitterInstance* CreateInstance(IParticleEmitterInstanceOwner& InComponent) { return NativeCall<FParticleEmitterInstance*, IParticleEmitterInstanceOwner&>(this, "UParticleEmitter.CreateInstance(IParticleEmitterInstanceOwner&)", InComponent); }
	bool IsSignificant(EParticleSignificanceLevel RequiredSignificance) { return NativeCall<bool, EParticleSignificanceLevel>(this, "UParticleEmitter.IsSignificant(EParticleSignificanceLevel)", RequiredSignificance); }
	bool IsPostLoadThreadSafe() { return NativeCall<bool>(this, "UParticleEmitter.IsPostLoadThreadSafe()"); }
	void SetLODCount(int LODCount) { NativeCall<void, int>(this, "UParticleEmitter.SetLODCount(int)", LODCount); }
	void Serialize(FArchive& Ar) { NativeCall<void, FArchive&>(this, "UParticleEmitter.Serialize(FArchive&)", Ar); }
	bool HasAnyEnabledLODs() { return NativeCall<bool>(this, "UParticleEmitter.HasAnyEnabledLODs()"); }
};
