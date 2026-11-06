#pragma once
#include "UEObjectForward.h"
#include "BulkForward.h"
#include "UFXSystemAsset.h"

struct UParticleSystem : public UFXSystemAsset
{
public:
	UParticleSystem() = delete;
	~UParticleSystem() = delete;
	UParticleSystem(const UParticleSystem&) = delete;
	UParticleSystem& operator=(const UParticleSystem&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UParticleSystem"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UParticleSystem"); }
	float& UpdateTime_FPSField() { return *GetNativePointerField<float*>(this, "UParticleSystem.UpdateTime_FPS"); }
	float& UpdateTime_DeltaField() { return *GetNativePointerField<float*>(this, "UParticleSystem.UpdateTime_Delta"); }
	float& WarmupTimeField() { return *GetNativePointerField<float*>(this, "UParticleSystem.WarmupTime"); }
	float& WarmupTickRateField() { return *GetNativePointerField<float*>(this, "UParticleSystem.WarmupTickRate"); }
	float& LODDistanceCheckTimeField() { return *GetNativePointerField<float*>(this, "UParticleSystem.LODDistanceCheckTime"); }
	float& MacroUVRadiusField() { return *GetNativePointerField<float*>(this, "UParticleSystem.MacroUVRadius"); }
	TArray<float, TSizedDefaultAllocator<32> >& LODDistancesField() { return *GetNativePointerField<TArray<float, TSizedDefaultAllocator<32> >*>(this, "UParticleSystem.LODDistances"); }
	float& SecondsBeforeInactiveField() { return *GetNativePointerField<float*>(this, "UParticleSystem.SecondsBeforeInactive"); }
	float& DelayField() { return *GetNativePointerField<float*>(this, "UParticleSystem.Delay"); }
	float& DelayLowField() { return *GetNativePointerField<float*>(this, "UParticleSystem.DelayLow"); }
	EParticleSignificanceLevel& MaxSignificanceLevelField() { return *GetNativePointerField<EParticleSignificanceLevel*>(this, "UParticleSystem.MaxSignificanceLevel"); }
	unsigned int& MinTimeBetweenTicksField() { return *GetNativePointerField<unsigned int*>(this, "UParticleSystem.MinTimeBetweenTicks"); }
	float& InsignificanceDelayField() { return *GetNativePointerField<float*>(this, "UParticleSystem.InsignificanceDelay"); }
	UE::Math::TVector<double>& MacroUVPositionField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "UParticleSystem.MacroUVPosition"); }
	EParticleSignificanceLevel& HighestSignificanceField() { return *GetNativePointerField<EParticleSignificanceLevel*>(this, "UParticleSystem.HighestSignificance"); }
	EParticleSignificanceLevel& LowestSignificanceField() { return *GetNativePointerField<EParticleSignificanceLevel*>(this, "UParticleSystem.LowestSignificance"); }
	float& OverrideMaxDrawDistanceField() { return *GetNativePointerField<float*>(this, "UParticleSystem.OverrideMaxDrawDistance"); }
	float& CustomTimeDilationField() { return *GetNativePointerField<float*>(this, "UParticleSystem.CustomTimeDilation"); }
	BitFieldValue<bool, unsigned char> bOrientZAxisTowardCamera() { return { this, "UParticleSystem.bOrientZAxisTowardCamera"}; }
	BitFieldValue<bool, unsigned char> bAllowLOD() { return { this, "UParticleSystem.bAllowLOD"}; }
	BitFieldValue<bool, unsigned char> bUseFixedRelativeBoundingBox() { return { this, "UParticleSystem.bUseFixedRelativeBoundingBox"}; }
	BitFieldValue<bool, unsigned char> bShouldResetPeakCounts() { return { this, "UParticleSystem.bShouldResetPeakCounts"}; }
	BitFieldValue<bool, unsigned char> bHasPhysics() { return { this, "UParticleSystem.bHasPhysics"}; }
	BitFieldValue<bool, unsigned char> bUseRealtimeThumbnail() { return { this, "UParticleSystem.bUseRealtimeThumbnail"}; }
	BitFieldValue<bool, unsigned char> ThumbnailImageOutOfDate() { return { this, "UParticleSystem.ThumbnailImageOutOfDate"}; }
	BitFieldValue<bool, unsigned char> bIsElligibleForAsyncTick() { return { this, "UParticleSystem.bIsElligibleForAsyncTick"}; }
	BitFieldValue<bool, unsigned char> bIsElligibleForAsyncTickComputed() { return { this, "UParticleSystem.bIsElligibleForAsyncTickComputed"}; }
	BitFieldValue<bool, unsigned char> bUseDelayRange() { return { this, "UParticleSystem.bUseDelayRange"}; }
	BitFieldValue<bool, unsigned char> bAllowManagedTicking() { return { this, "UParticleSystem.bAllowManagedTicking"}; }
	BitFieldValue<bool, unsigned char> bAutoDeactivate() { return { this, "UParticleSystem.bAutoDeactivate"}; }
	BitFieldValue<bool, unsigned char> bRegenerateLODDuplicate() { return { this, "UParticleSystem.bRegenerateLODDuplicate"}; }
	BitFieldValue<bool, unsigned char> bAnyEmitterLoopsForever() { return { this, "UParticleSystem.bAnyEmitterLoopsForever"}; }
	BitFieldValue<bool, unsigned char> bShouldManageSignificance() { return { this, "UParticleSystem.bShouldManageSignificance"}; }
	BitFieldValue<bool, unsigned char> bIsImmortal() { return { this, "UParticleSystem.bIsImmortal"}; }
	BitFieldValue<bool, unsigned char> bWillBecomeZombie() { return { this, "UParticleSystem.bWillBecomeZombie"}; }
	BitFieldValue<bool, unsigned __int32> bLocalSpaceUsesParticleBase() { return { this, "UParticleSystem.bLocalSpaceUsesParticleBase"}; }
	BitFieldValue<bool, unsigned __int32> bForceHighQualityEmitter() { return { this, "UParticleSystem.bForceHighQualityEmitter"}; }
	BitFieldValue<bool, unsigned __int32> bForcePreventInactiveLoopReset() { return { this, "UParticleSystem.bForcePreventInactiveLoopReset"}; }
	void PostLoad() { NativeCall<void>(this, "UParticleSystem.PostLoad()"); }
	bool CanBeClusterRoot() { return NativeCall<bool>(this, "UParticleSystem.CanBeClusterRoot()"); }
	void Serialize(FArchive& Ar) { NativeCall<void, FArchive&>(this, "UParticleSystem.Serialize(FArchive&)", Ar); }
	bool IsPostLoadThreadSafe() { return NativeCall<bool>(this, "UParticleSystem.IsPostLoadThreadSafe()"); }
	bool CalculateMaxActiveParticleCounts() { return NativeCall<bool>(this, "UParticleSystem.CalculateMaxActiveParticleCounts()"); }
	void PrecacheAssetPSOs() { NativeCall<void>(this, "UParticleSystem.PrecacheAssetPSOs()"); }
	bool CanTickInAnyThread() { return NativeCall<bool>(this, "UParticleSystem.CanTickInAnyThread()"); }
	int GetLODLevelCount() { return NativeCall<int>(this, "UParticleSystem.GetLODLevelCount()"); }
	bool SetLODDistance(int LODLevelIndex, float InDistance) { return NativeCall<bool, int, float>(this, "UParticleSystem.SetLODDistance(int,float)", LODLevelIndex, InDistance); }
	bool DoesAnyEmitterHaveMotionBlur(int LODLevelIndex) { return NativeCall<bool, int>(this, "UParticleSystem.DoesAnyEmitterHaveMotionBlur(int)", LODLevelIndex); }
	float GetLODDistance(int LODLevelIndex) { return NativeCall<float, int>(this, "UParticleSystem.GetLODDistance(int)", LODLevelIndex); }
};
