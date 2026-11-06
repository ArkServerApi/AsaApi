#pragma once
#include "BulkForward.h"
#include "AActor.h"

struct ALODActor : public AActor
{
public:
	ALODActor() = delete;
	~ALODActor() = delete;
	ALODActor(const ALODActor&) = delete;
	ALODActor& operator=(const ALODActor&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("ALODActor"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("ALODActor"); }

	FName& KeyField() { return *GetNativePointerField<FName*>(this, "ALODActor.Key"); }
	float& LODDrawDistanceField() { return *GetNativePointerField<float*>(this, "ALODActor.LODDrawDistance"); }
	int& LODLevelField() { return *GetNativePointerField<int*>(this, "ALODActor.LODLevel"); }
	unsigned char& CachedNumHLODLevelsField() { return *GetNativePointerField<unsigned char*>(this, "ALODActor.CachedNumHLODLevels"); }
	float& ResetDrawDistanceTimeField() { return *GetNativePointerField<float*>(this, "ALODActor.ResetDrawDistanceTime"); }
	BitFieldValue<bool, unsigned char> bHasActorTriedToRegisterComponents() { return { this, "ALODActor.bHasActorTriedToRegisterComponents"}; }
	BitFieldValue<bool, unsigned char> bHasPatchedUpParent() { return { this, "ALODActor.bHasPatchedUpParent"}; }
	BitFieldValue<bool, unsigned char> bRequiresLODScreenSizeConversion() { return { this, "ALODActor.bRequiresLODScreenSizeConversion"}; }
	BitFieldValue<bool, unsigned char> bNeedsDrawDistanceReset() { return { this, "ALODActor.bNeedsDrawDistanceReset"}; }
	void UpdateOverrideTransitionDistance() { NativeCall<void>(this, "ALODActor.UpdateOverrideTransitionDistance()"); }
	FString* GetDetailedInfoInternal(FString* result) { return NativeCall<FString*, FString*>(this, "ALODActor.GetDetailedInfoInternal()", result); }
	static void ParseOverrideDistancesCVar() { NativeCall<void>(nullptr, "ALODActor.ParseOverrideDistancesCVar()"); }
	void UpdateRegistrationToMatchMaximumLODLevel() { NativeCall<void>(this, "ALODActor.UpdateRegistrationToMatchMaximumLODLevel()"); }
	void UnregisterMeshComponents() { NativeCall<void>(this, "ALODActor.UnregisterMeshComponents()"); }
	void Serialize(FArchive& Ar) { NativeCall<void, FArchive&>(this, "ALODActor.Serialize(FArchive&)", Ar); }
	void PostRegisterAllComponents() { NativeCall<void>(this, "ALODActor.PostRegisterAllComponents()"); }
	bool IsLevelBoundsRelevant() { return NativeCall<bool>(this, "ALODActor.IsLevelBoundsRelevant()"); }
	void SetComponentsMinDrawDistance(float InMinDrawDistance, bool bInMarkRenderStateDirty) { NativeCall<void, float, bool>(this, "ALODActor.SetComponentsMinDrawDistance(float,bool)", InMinDrawDistance, bInMarkRenderStateDirty); }
	void Tick(float DeltaSeconds) { NativeCall<void, float>(this, "ALODActor.Tick(float)", DeltaSeconds); }
	static void OnCVarsChanged() { NativeCall<void>(nullptr, "ALODActor.OnCVarsChanged()"); }
	void OnSubActorEndPlay(AActor* Actor, EEndPlayReason::Type Reason) { NativeCall<void, AActor*, EEndPlayReason::Type>(this, "ALODActor.OnSubActorEndPlay(AActor*,EEndPlayReason::Type)", Actor, Reason); }
	void PostLoad() { NativeCall<void>(this, "ALODActor.PostLoad()"); }
};
