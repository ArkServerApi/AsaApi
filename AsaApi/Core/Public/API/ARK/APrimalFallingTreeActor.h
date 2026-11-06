#pragma once
#include "BulkForward.h"
#include "ADestructibleBaseActor.h"

struct APrimalFallingTreeActor : public ADestructibleBaseActor
{
public:
	APrimalFallingTreeActor() = delete;
	~APrimalFallingTreeActor() = delete;
	APrimalFallingTreeActor(const APrimalFallingTreeActor&) = delete;
	APrimalFallingTreeActor& operator=(const APrimalFallingTreeActor&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("APrimalFallingTreeActor"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("APrimalFallingTreeActor"); }

	UStaticMeshComponent*& StaticMeshComponentField() { return *GetNativePointerField<UStaticMeshComponent**>(this, "APrimalFallingTreeActor.StaticMeshComponent"); }
	UAudioComponent*& AudioComponentField() { return *GetNativePointerField<UAudioComponent**>(this, "APrimalFallingTreeActor.AudioComponent"); }
	float& FallingProgressField() { return *GetNativePointerField<float*>(this, "APrimalFallingTreeActor.FallingProgress"); }
	float& HarvestSpeedField() { return *GetNativePointerField<float*>(this, "APrimalFallingTreeActor.HarvestSpeed"); }
	UE::Math::TVector<double>& HarvestDirectionField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "APrimalFallingTreeActor.HarvestDirection"); }
	float& CurrentHarvestAngleField() { return *GetNativePointerField<float*>(this, "APrimalFallingTreeActor.CurrentHarvestAngle"); }
	float& HarvestAngleTargetField() { return *GetNativePointerField<float*>(this, "APrimalFallingTreeActor.HarvestAngleTarget"); }
	float& FadeOutDurationField() { return *GetNativePointerField<float*>(this, "APrimalFallingTreeActor.FadeOutDuration"); }
	UE::Math::TVector<double>& FadeOutLocationOffsetField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "APrimalFallingTreeActor.FadeOutLocationOffset"); }
	UCurveLinearColor*& HarvestSwayCurveField() { return *GetNativePointerField<UCurveLinearColor**>(this, "APrimalFallingTreeActor.HarvestSwayCurve"); }
	USoundBase*& HarvestSoundField() { return *GetNativePointerField<USoundBase**>(this, "APrimalFallingTreeActor.HarvestSound"); }
	USoundBase*& GroundImpactSoundField() { return *GetNativePointerField<USoundBase**>(this, "APrimalFallingTreeActor.GroundImpactSound"); }
	float& DistanceAlongTreeToSpawnImpactSoundField() { return *GetNativePointerField<float*>(this, "APrimalFallingTreeActor.DistanceAlongTreeToSpawnImpactSound"); }
	TArray<UMaterialInstanceDynamic*, TSizedDefaultAllocator<32> >& HarvestMIDsField() { return *GetNativePointerField<TArray<UMaterialInstanceDynamic*, TSizedDefaultAllocator<32> >*>(this, "APrimalFallingTreeActor.HarvestMIDs"); }
	UPrimalWindSourceComponent*& WindSourceComponentField() { return *GetNativePointerField<UPrimalWindSourceComponent**>(this, "APrimalFallingTreeActor.WindSourceComponent"); }
	float& WindSourceSizeField() { return *GetNativePointerField<float*>(this, "APrimalFallingTreeActor.WindSourceSize"); }
	TArray<UE::Math::TVector<double>, TSizedDefaultAllocator<32> >& TreeFallGroundLocationsField() { return *GetNativePointerField<TArray<UE::Math::TVector<double>, TSizedDefaultAllocator<32> >*>(this, "APrimalFallingTreeActor.TreeFallGroundLocations"); }
	UE::Math::TVector<double>& InitialFadeOutLocationField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "APrimalFallingTreeActor.InitialFadeOutLocation"); }
	BitFieldValue<bool, unsigned char> bIsFalling() { return { this, "APrimalFallingTreeActor.bIsFalling"}; }
	BitFieldValue<bool, unsigned char> bUseAudioComponentForImpactSound() { return { this, "APrimalFallingTreeActor.bUseAudioComponentForImpactSound"}; }
	BitFieldValue<bool, unsigned char> bHasPlayedImpactSound() { return { this, "APrimalFallingTreeActor.bHasPlayedImpactSound"}; }
	BitFieldValue<bool, unsigned char> bFadeOutLocation() { return { this, "APrimalFallingTreeActor.bFadeOutLocation"}; }
	BitFieldValue<bool, unsigned char> bFadeOutMaterial() { return { this, "APrimalFallingTreeActor.bFadeOutMaterial"}; }
	void SetupForFalling(UStaticMesh* InMesh, const TArray<UMaterialInterface*, TSizedDefaultAllocator<32> >& OverrideDestructionMaterials, const UE::Math::TVector<double>& HitDirection, USkeletalMesh* InSKMesh, bool rotate, float Damage, float TotalHealth, UHierarchicalInstancedStaticMeshComponent* HISMComp, int InstanceIdx) { NativeCall<void, UStaticMesh*, const TArray<UMaterialInterface*, TSizedDefaultAllocator<32> >&, const UE::Math::TVector<double>&, USkeletalMesh*, bool, float, float, UHierarchicalInstancedStaticMeshComponent*, int>(this, "APrimalFallingTreeActor.SetupForFalling(UStaticMesh*,TArray<UMaterialInterface*,TSizedDefaultAllocator<32>>&,UE::Math::TVector<double>&,USkeletalMesh*,bool,float,float,UHierarchicalInstancedStaticMeshComponent*,int)", InMesh, OverrideDestructionMaterials, HitDirection, InSKMesh, rotate, Damage, TotalHealth, HISMComp, InstanceIdx); }
	void Tick(float DeltaSeconds) { NativeCall<void, float>(this, "APrimalFallingTreeActor.Tick(float)", DeltaSeconds); }
	bool IsFader() { return NativeCall<bool>(this, "APrimalFallingTreeActor.IsFader()"); }
	bool UseRotationalFall() { return NativeCall<bool>(this, "APrimalFallingTreeActor.UseRotationalFall()"); }
	void UpdateWindSource(float DeltaTime) { NativeCall<void, float>(this, "APrimalFallingTreeActor.UpdateWindSource(float)", DeltaTime); }
	void BeginPlay() { NativeCall<void>(this, "APrimalFallingTreeActor.BeginPlay()"); }
	void UpdateWindSource_Implementation(float DeltaTime) { NativeCall<void, float>(this, "APrimalFallingTreeActor.UpdateWindSource_Implementation(float)", DeltaTime); }
};
