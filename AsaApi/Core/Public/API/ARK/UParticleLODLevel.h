#pragma once
#include "UEObjectForward.h"
#include "BulkForward.h"
#include "UObject.h"

class UParticleLODLevel : public UObject
{
public:
	UParticleLODLevel() = delete;
	~UParticleLODLevel() = delete;
	UParticleLODLevel(const UParticleLODLevel&) = delete;
	UParticleLODLevel& operator=(const UParticleLODLevel&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UParticleLODLevel"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UParticleLODLevel"); }
	int& LevelField() { return *GetNativePointerField<int*>(this, "UParticleLODLevel.Level"); }
	int& PeakActiveParticlesField() { return *GetNativePointerField<int*>(this, "UParticleLODLevel.PeakActiveParticles"); }
	BitFieldValue<bool, unsigned __int32> bEnabled() { return { this, "UParticleLODLevel.bEnabled"}; }
	BitFieldValue<bool, unsigned __int32> ConvertedModules() { return { this, "UParticleLODLevel.ConvertedModules"}; }
	bool IsPostLoadThreadSafe() { return NativeCall<bool>(this, "UParticleLODLevel.IsPostLoadThreadSafe()"); }
	int CalculateMaxActiveParticleCount() { return NativeCall<int>(this, "UParticleLODLevel.CalculateMaxActiveParticleCount()"); }
	void PostLoad() { NativeCall<void>(this, "UParticleLODLevel.PostLoad()"); }
	void SetLevelIndex(int InLevelIndex) { NativeCall<void, int>(this, "UParticleLODLevel.SetLevelIndex(int)", InLevelIndex); }
	void UpdateModuleLists() { NativeCall<void>(this, "UParticleLODLevel.UpdateModuleLists()"); }
	bool GenerateFromLODLevel(UParticleLODLevel* SourceLODLevel, float Percentage, bool bGenerateModuleData) { return NativeCall<bool, UParticleLODLevel*, float, bool>(this, "UParticleLODLevel.GenerateFromLODLevel(UParticleLODLevel*,float,bool)", SourceLODLevel, Percentage, bGenerateModuleData); }
};
