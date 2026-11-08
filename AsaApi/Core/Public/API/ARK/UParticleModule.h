#pragma once
#include "UEObjectForward.h"
#include "BulkForward.h"
#include "UObject.h"

class UParticleModule : public UObject
{
public:
	UParticleModule() = delete;
	~UParticleModule() = delete;
	UParticleModule(const UParticleModule&) = delete;
	UParticleModule& operator=(const UParticleModule&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UParticleModule"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UParticleModule"); }
	unsigned char& LODValidityField() { return *GetNativePointerField<unsigned char*>(this, "UParticleModule.LODValidity"); }
	BitFieldValue<bool, unsigned char> bSpawnModule() { return { this, "UParticleModule.bSpawnModule"}; }
	BitFieldValue<bool, unsigned char> bUpdateModule() { return { this, "UParticleModule.bUpdateModule"}; }
	BitFieldValue<bool, unsigned char> bFinalUpdateModule() { return { this, "UParticleModule.bFinalUpdateModule"}; }
	BitFieldValue<bool, unsigned char> bUpdateForGPUEmitter() { return { this, "UParticleModule.bUpdateForGPUEmitter"}; }
	BitFieldValue<bool, unsigned char> bCurvesAsColor() { return { this, "UParticleModule.bCurvesAsColor"}; }
	BitFieldValue<bool, unsigned char> b3DDrawMode() { return { this, "UParticleModule.b3DDrawMode"}; }
	BitFieldValue<bool, unsigned char> bSupported3DDrawMode() { return { this, "UParticleModule.bSupported3DDrawMode"}; }
	BitFieldValue<bool, unsigned char> bEnabled() { return { this, "UParticleModule.bEnabled"}; }
	BitFieldValue<bool, unsigned char> bEditable() { return { this, "UParticleModule.bEditable"}; }
	BitFieldValue<bool, unsigned char> LODDuplicate() { return { this, "UParticleModule.LODDuplicate"}; }
	BitFieldValue<bool, unsigned char> bSupportsRandomSeed() { return { this, "UParticleModule.bSupportsRandomSeed"}; }
	BitFieldValue<bool, unsigned char> bRequiresLoopingNotification() { return { this, "UParticleModule.bRequiresLoopingNotification"}; }
	void GetParticleSysParamsUtilized(TArray<FString, TSizedDefaultAllocator<32> >& ParticleSysParamList) { NativeCall<void, TArray<FString, TSizedDefaultAllocator<32> >&>(this, "UParticleModule.GetParticleSysParamsUtilized(TArray<FString,TSizedDefaultAllocator<32>>&)", ParticleSysParamList); }
	void GetParticleParametersUtilized(TArray<FString, TSizedDefaultAllocator<32> >& ParticleParameterList) { NativeCall<void, TArray<FString, TSizedDefaultAllocator<32> >&>(this, "UParticleModule.GetParticleParametersUtilized(TArray<FString,TSizedDefaultAllocator<32>>&)", ParticleParameterList); }
	bool GenerateLODModuleValues(UParticleModule* SourceModule, float Percentage, UParticleLODLevel* LODLevel) { return NativeCall<bool, UParticleModule*, float, UParticleLODLevel*>(this, "UParticleModule.GenerateLODModuleValues(UParticleModule*,float,UParticleLODLevel*)", SourceModule, Percentage, LODLevel); }
	bool IsSizeMultiplyLife() { return NativeCall<bool>(this, "UParticleModule.IsSizeMultiplyLife()"); }
	bool ConvertVectorDistribution(UDistributionVector* VectorDist, UDistributionVector* SourceVectorDist, float Percentage) { return NativeCall<bool, UDistributionVector*, UDistributionVector*, float>(this, "UParticleModule.ConvertVectorDistribution(UDistributionVector*,UDistributionVector*,float)", VectorDist, SourceVectorDist, Percentage); }
	void EmitterLoopingNotify(FParticleEmitterInstance* Owner) { NativeCall<void, FParticleEmitterInstance*>(this, "UParticleModule.EmitterLoopingNotify(FParticleEmitterInstance*)", Owner); }
	bool IsPostLoadThreadSafe() { return NativeCall<bool>(this, "UParticleModule.IsPostLoadThreadSafe()"); }
	bool IsUsedInLODLevel(int SourceLODIndex) { return NativeCall<bool, int>(this, "UParticleModule.IsUsedInLODLevel(int)", SourceLODIndex); }
	void RefreshModule(UInterpCurveEdSetup* EdSetup, UParticleEmitter* InEmitter, int InLODLevel) { NativeCall<void, UInterpCurveEdSetup*, UParticleEmitter*, int>(this, "UParticleModule.RefreshModule(UInterpCurveEdSetup*,UParticleEmitter*,int)", EdSetup, InEmitter, InLODLevel); }
	bool IsUsedInGPUEmitter() { return NativeCall<bool>(this, "UParticleModule.IsUsedInGPUEmitter()"); }
	bool SetRandomSeedEntry(int InIndex, int InRandomSeed) { return NativeCall<bool, int, int>(this, "UParticleModule.SetRandomSeedEntry(int,int)", InIndex, InRandomSeed); }
	bool ConvertFloatDistribution(UDistributionFloat* FloatDist, UDistributionFloat* SourceFloatDist, float Percentage) { return NativeCall<bool, UDistributionFloat*, UDistributionFloat*, float>(this, "UParticleModule.ConvertFloatDistribution(UDistributionFloat*,UDistributionFloat*,float)", FloatDist, SourceFloatDist, Percentage); }
	FParticleRandomSeedInfo* GetRandomSeedInfo() { return NativeCall<FParticleRandomSeedInfo*>(this, "UParticleModule.GetRandomSeedInfo()"); }
	bool CanTickInAnyThread() { return NativeCall<bool>(this, "UParticleModule.CanTickInAnyThread()"); }
	unsigned int RequiredBytesPerInstance() { return NativeCall<unsigned int>(this, "UParticleModule.RequiredBytesPerInstance()"); }
	UParticleModule* GenerateLODModule(UParticleLODLevel* SourceLODLevel, UParticleLODLevel* DestLODLevel, float Percentage, bool bGenerateModuleData, bool bForceModuleConstruction) { return NativeCall<UParticleModule*, UParticleLODLevel*, UParticleLODLevel*, float, bool, bool>(this, "UParticleModule.GenerateLODModule(UParticleLODLevel*,UParticleLODLevel*,float,bool,bool)", SourceLODLevel, DestLODLevel, Percentage, bGenerateModuleData, bForceModuleConstruction); }
	bool TouchesMeshRotation() { return NativeCall<bool>(this, "UParticleModule.TouchesMeshRotation()"); }
	void SetToSensibleDefaults(UParticleEmitter* Owner) { NativeCall<void, UParticleEmitter*>(this, "UParticleModule.SetToSensibleDefaults(UParticleEmitter*)", Owner); }
	void AutoPopulateInstanceProperties(UParticleSystemComponent* PSysComp) { NativeCall<void, UParticleSystemComponent*>(this, "UParticleModule.AutoPopulateInstanceProperties(UParticleSystemComponent*)", PSysComp); }
	void CompileModule(FParticleEmitterBuildInfo& EmitterInfo) { NativeCall<void, FParticleEmitterBuildInfo&>(this, "UParticleModule.CompileModule(FParticleEmitterBuildInfo&)", EmitterInfo); }
	unsigned int PrepRandomSeedInstancePayload(FParticleEmitterInstance* Owner, FParticleRandomSeedInstancePayload* InRandSeedPayload, const FParticleRandomSeedInfo& InRandSeedInfo) { return NativeCall<unsigned int, FParticleEmitterInstance*, FParticleRandomSeedInstancePayload*, const FParticleRandomSeedInfo&>(this, "UParticleModule.PrepRandomSeedInstancePayload(FParticleEmitterInstance*,FParticleRandomSeedInstancePayload*,FParticleRandomSeedInfo&)", Owner, InRandSeedPayload, InRandSeedInfo); }
	unsigned int PrepPerInstanceBlock(FParticleEmitterInstance* Owner, void* InstData) { return NativeCall<unsigned int, FParticleEmitterInstance*, void*>(this, "UParticleModule.PrepPerInstanceBlock(FParticleEmitterInstance*,void*)", Owner, InstData); }
	unsigned int RequiredBytes(UParticleModuleTypeDataBase* TypeData) { return NativeCall<unsigned int, UParticleModuleTypeDataBase*>(this, "UParticleModule.RequiredBytes(UParticleModuleTypeDataBase*)", TypeData); }
	bool WillGeneratedModuleBeIdentical(UParticleLODLevel* SourceLODLevel, UParticleLODLevel* DestLODLevel, float Percentage) { return NativeCall<bool, UParticleLODLevel*, UParticleLODLevel*, float>(this, "UParticleModule.WillGeneratedModuleBeIdentical(UParticleLODLevel*,UParticleLODLevel*,float)", SourceLODLevel, DestLODLevel, Percentage); }
};
