#pragma once
#include "BulkForward.h"
#include "ADestroyedMeshActor.h"

struct AFadingDestructibleActor : public ADestroyedMeshActor
{
public:
	AFadingDestructibleActor() = delete;
	~AFadingDestructibleActor() = delete;
	AFadingDestructibleActor(const AFadingDestructibleActor&) = delete;
	AFadingDestructibleActor& operator=(const AFadingDestructibleActor&) = delete;
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("AFadingDestructibleActor"); }

	float& Fall_RotAccelField() { return *GetNativePointerField<float*>(this, "AFadingDestructibleActor.Fall_RotAccel"); }
	float& Fall_RotAccelRateField() { return *GetNativePointerField<float*>(this, "AFadingDestructibleActor.Fall_RotAccelRate"); }
	UE::Math::TVector<double>& Fall_Direction_RightField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "AFadingDestructibleActor.Fall_Direction_Right"); }
	float& Fall_Spin_RandField() { return *GetNativePointerField<float*>(this, "AFadingDestructibleActor.Fall_Spin_Rand"); }
	float& Fall_SpinVelocityField() { return *GetNativePointerField<float*>(this, "AFadingDestructibleActor.Fall_SpinVelocity"); }
	float& Fall_SpinAccelField() { return *GetNativePointerField<float*>(this, "AFadingDestructibleActor.Fall_SpinAccel"); }
	float& Fall_SpinAccelRateField() { return *GetNativePointerField<float*>(this, "AFadingDestructibleActor.Fall_SpinAccelRate"); }
	float& Fall_RotVelocityField() { return *GetNativePointerField<float*>(this, "AFadingDestructibleActor.Fall_RotVelocity"); }
	float& FadeOutDelayTimeField() { return *GetNativePointerField<float*>(this, "AFadingDestructibleActor.FadeOutDelayTime"); }
	float& FadeOutTimeField() { return *GetNativePointerField<float*>(this, "AFadingDestructibleActor.FadeOutTime"); }
	bool& bIsDoingDropField() { return *GetNativePointerField<bool*>(this, "AFadingDestructibleActor.bIsDoingDrop"); }
	float& DefaultFadeOutTimeField() { return *GetNativePointerField<float*>(this, "AFadingDestructibleActor.DefaultFadeOutTime"); }
	bool& bHasSetupField() { return *GetNativePointerField<bool*>(this, "AFadingDestructibleActor.bHasSetup"); }
	float& OriginalZField() { return *GetNativePointerField<float*>(this, "AFadingDestructibleActor.OriginalZ"); }
	float& TargetZField() { return *GetNativePointerField<float*>(this, "AFadingDestructibleActor.TargetZ"); }
	TArray<UMaterialInstanceDynamic*, TSizedDefaultAllocator<32> >& FadeMatsField() { return *GetNativePointerField<TArray<UMaterialInstanceDynamic*, TSizedDefaultAllocator<32> >*>(this, "AFadingDestructibleActor.FadeMats"); }
	UStaticMeshComponent*& StaticMeshComponentField() { return *GetNativePointerField<UStaticMeshComponent**>(this, "AFadingDestructibleActor.StaticMeshComponent"); }
	BitFieldValue<bool, unsigned __int32> bFadeOut() { return { this, "AFadingDestructibleActor.bFadeOut"}; }
	BitFieldValue<bool, unsigned __int32> bRotationalFall() { return { this, "AFadingDestructibleActor.bRotationalFall"}; }
	BitFieldValue<bool, unsigned __int32> bDontUseRotationalFall() { return { this, "AFadingDestructibleActor.bDontUseRotationalFall"}; }
	BitFieldValue<bool, unsigned __int32> bUseBPSetupForFalling() { return { this, "AFadingDestructibleActor.bUseBPSetupForFalling"}; }
	void BPSetupForFalling(UStaticMesh* InMesh, const TArray<UMaterialInterface*, TSizedDefaultAllocator<32> >& OverrideDestructionMaterials, const UE::Math::TVector<double>& HitDirection, USkeletalMesh* InSKMesh, bool rotate, float Damage, float TotalHealth) { NativeCall<void, UStaticMesh*, const TArray<UMaterialInterface*, TSizedDefaultAllocator<32> >&, const UE::Math::TVector<double>&, USkeletalMesh*, bool, float, float>(this, "AFadingDestructibleActor.BPSetupForFalling(UStaticMesh*,TArray<UMaterialInterface*,TSizedDefaultAllocator<32>>&,UE::Math::TVector<double>&,USkeletalMesh*,bool,float,float)", InMesh, OverrideDestructionMaterials, HitDirection, InSKMesh, rotate, Damage, TotalHealth); }
	static UClass* StaticClass() { return AsaApi::ResolveClass("AFadingDestructibleActor"); }
	void Tick(float DeltaSeconds) { NativeCall<void, float>(this, "AFadingDestructibleActor.Tick(float)", DeltaSeconds); }
	bool IsFader() { return NativeCall<bool>(this, "AFadingDestructibleActor.IsFader()"); }
	void SetupForFalling(UStaticMesh* InMesh, const TArray<UMaterialInterface*, TSizedDefaultAllocator<32> >& OverrideDestructionMaterials, const UE::Math::TVector<double>& HitDirection, USkeletalMesh* InSKMesh, bool rotate, float Damage, float TotalHealth, UHierarchicalInstancedStaticMeshComponent* HISMComp, int InstanceIdx) { NativeCall<void, UStaticMesh*, const TArray<UMaterialInterface*, TSizedDefaultAllocator<32> >&, const UE::Math::TVector<double>&, USkeletalMesh*, bool, float, float, UHierarchicalInstancedStaticMeshComponent*, int>(this, "AFadingDestructibleActor.SetupForFalling(UStaticMesh*,TArray<UMaterialInterface*,TSizedDefaultAllocator<32>>&,UE::Math::TVector<double>&,USkeletalMesh*,bool,float,float,UHierarchicalInstancedStaticMeshComponent*,int)", InMesh, OverrideDestructionMaterials, HitDirection, InSKMesh, rotate, Damage, TotalHealth, HISMComp, InstanceIdx); }
	bool UseRotationalFall() { return NativeCall<bool>(this, "AFadingDestructibleActor.UseRotationalFall()"); }
	void BeginPlay() { NativeCall<void>(this, "AFadingDestructibleActor.BeginPlay()"); }
	void SetupFade() { NativeCall<void>(this, "AFadingDestructibleActor.SetupFade()"); }
};
