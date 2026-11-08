#pragma once
#include "BulkForward.h"
#include "GameplayForward.h"
#include "APrimalRaft.h"

struct APhysicsPrimalRaft : APrimalRaft
{
public:
	APhysicsPrimalRaft() = delete;
	~APhysicsPrimalRaft() = delete;
	APhysicsPrimalRaft(const APhysicsPrimalRaft&) = delete;
	APhysicsPrimalRaft& operator=(const APhysicsPrimalRaft&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("APhysicsPrimalRaft"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("APhysicsPrimalRaft"); }

	bool& bUseForcestoApplyField() { return *GetNativePointerField<bool*>(this, "APhysicsPrimalRaft.bUseForcestoApply"); }
	bool& bShouldLimitLinearVelocityField() { return *GetNativePointerField<bool*>(this, "APhysicsPrimalRaft.bShouldLimitLinearVelocity"); }
	float& ForcesToApplyScaleField() { return *GetNativePointerField<float*>(this, "APhysicsPrimalRaft.ForcesToApplyScale"); }
	float& TorquesToApplyScaleField() { return *GetNativePointerField<float*>(this, "APhysicsPrimalRaft.TorquesToApplyScale"); }
	bool& bUseBPIsInWaterField() { return *GetNativePointerField<bool*>(this, "APhysicsPrimalRaft.bUseBPIsInWater"); }
	bool& bIsInWaterField() { return *GetNativePointerField<bool*>(this, "APhysicsPrimalRaft.bIsInWater"); }
	bool& bCanHarvestCollectablesField() { return *GetNativePointerField<bool*>(this, "APhysicsPrimalRaft.bCanHarvestCollectables"); }
	float& ImpulseMagnitudeMultiplierField() { return *GetNativePointerField<float*>(this, "APhysicsPrimalRaft.ImpulseMagnitudeMultiplier"); }
	float& CollisionImpactMinIntervalField() { return *GetNativePointerField<float*>(this, "APhysicsPrimalRaft.CollisionImpactMinInterval"); }
	float& CollisionImpactAbsoluteMinImpulseField() { return *GetNativePointerField<float*>(this, "APhysicsPrimalRaft.CollisionImpactAbsoluteMinImpulse"); }
	float& ImpulseDamageMultiplierField() { return *GetNativePointerField<float*>(this, "APhysicsPrimalRaft.ImpulseDamageMultiplier"); }
	double& LastCollisionImpactTimeField() { return *GetNativePointerField<double*>(this, "APhysicsPrimalRaft.LastCollisionImpactTime"); }

	void ClearAnchorBlockedPhysics() { NativeCall<void>(this, "APhysicsPrimalRaft.ClearAnchorBlockedPhysics()"); }
	void BPMoveRight(float Val) { NativeCall<void, float>(this, "APhysicsPrimalRaft.BPMoveRight(float)", Val); }
	void SimulatePhysics(float DeltaSeconds) { NativeCall<void, float>(this, "APhysicsPrimalRaft.SimulatePhysics(float)", DeltaSeconds); }
	void Tick(float DeltaSeconds) { NativeCall<void, float>(this, "APhysicsPrimalRaft.Tick(float)", DeltaSeconds); }
	bool IsinWater() { return NativeCall<bool>(this, "APhysicsPrimalRaft.IsinWater()"); }
	void BPMoveUp(float Val) { NativeCall<void, float>(this, "APhysicsPrimalRaft.BPMoveUp(float)", Val); }
	bool IsPhysicalPrimalRaft() { return NativeCall<bool>(this, "APhysicsPrimalRaft.IsPhysicalPrimalRaft()"); }
	bool BP_IsinWater() { return NativeCall<bool>(this, "APhysicsPrimalRaft.BP_IsinWater()"); }
	void BPMoveForward(float Val) { NativeCall<void, float>(this, "APhysicsPrimalRaft.BPMoveForward(float)", Val); }
	void MoveRight(float Val) { NativeCall<void, float>(this, "APhysicsPrimalRaft.MoveRight(float)", Val); }
	UMeshComponent* GetCollisionMesh() { return NativeCall<UMeshComponent*>(this, "APhysicsPrimalRaft.GetCollisionMesh()"); }
	float BPFindDeltaAngle(float A, float B, bool bIsRadians) { return NativeCall<float, float, float, bool>(this, "APhysicsPrimalRaft.BPFindDeltaAngle(float,float,bool)", A, B, bIsRadians); }
	bool CanHarvestCollectables() { return NativeCall<bool>(this, "APhysicsPrimalRaft.CanHarvestCollectables()"); }
	void BPSetMaxLinearVelocity() { NativeCall<void>(this, "APhysicsPrimalRaft.BPSetMaxLinearVelocity()"); }
	void MoveForward(float Val) { NativeCall<void, float>(this, "APhysicsPrimalRaft.MoveForward(float)", Val); }
	void MoveUp(float Val) { NativeCall<void, float>(this, "APhysicsPrimalRaft.MoveUp(float)", Val); }
	bool AllowSkeletalMeshTicking(USkeletalMeshComponent* meshComp) { return NativeCall<bool, USkeletalMeshComponent*>(this, "APhysicsPrimalRaft.AllowSkeletalMeshTicking(USkeletalMeshComponent*)", meshComp); }

	UStaticMeshComponent*& CollisionMeshField() { return *GetNativePointerField<UStaticMeshComponent**>(this, "APhysicsPrimalRaft.CollisionMesh"); }

	void AddForceToBeAppliedAtCenterOfGravity(UE::Math::TVector<double>* Force, FName ForceName) { if (!Force) throw std::invalid_argument("Null native value parameter"); return NativeCall<void, UE :: Math :: TVector < double >, FName>(this, "APhysicsPrimalRaft.AddForceToBeAppliedAtCenterOfGravity(UE::Math::TVector<double>,FName)", *Force, ForceName); }
	UE::Math::TVector<double>* GetInterpolatedLocation(UE::Math::TVector<double>* result) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*>(this, "APhysicsPrimalRaft.GetInterpolatedLocation()", result); }
	void OnPhysicsHit(AActor* OtherActor, UPrimitiveComponent* OtherComp, UE::Math::TVector<double>* NormalImpulse, const FHitResult& Hit) { if (!NormalImpulse) throw std::invalid_argument("Null native value parameter"); return NativeCall<void, AActor *, UPrimitiveComponent *, UE :: Math :: TVector < double >, const FHitResult &>(this, "APhysicsPrimalRaft.OnPhysicsHit(AActor*,UPrimitiveComponent*,UE::Math::TVector<double>,FHitResult&)", OtherActor, OtherComp, *NormalImpulse, Hit); }
	void CustomPhysics(float DeltaTime, FBodyInstance* BodyInstance) { NativeCall<void, float, FBodyInstance*>(this, "APhysicsPrimalRaft.CustomPhysics(float,FBodyInstance*)", DeltaTime, BodyInstance); }
	void AddForceToBeAppliedAtCustomSocket(UE::Math::TVector<double>* Force, FName ForceName, FName SocketName) { if (!Force) throw std::invalid_argument("Null native value parameter"); return NativeCall<void, UE :: Math :: TVector < double >, FName, FName>(this, "APhysicsPrimalRaft.AddForceToBeAppliedAtCustomSocket(UE::Math::TVector<double>,FName,FName)", *Force, ForceName, SocketName); }
	void SpawnDestroyedMesh(float KillingDamage, const FDamageEvent& DamageEvent, APawn* InstigatingPawn, AActor* DamageCauser) { NativeCall<void, float, const FDamageEvent&, APawn*, AActor*>(this, "APhysicsPrimalRaft.SpawnDestroyedMesh(float,FDamageEvent&,APawn*,AActor*)", KillingDamage, DamageEvent, InstigatingPawn, DamageCauser); }
	void PlayDying(float KillingDamage, const FDamageEvent& DamageEvent, APawn* InstigatingPawn, AActor* DamageCauser) { NativeCall<void, float, const FDamageEvent&, APawn*, AActor*>(this, "APhysicsPrimalRaft.PlayDying(float,FDamageEvent&,APawn*,AActor*)", KillingDamage, DamageEvent, InstigatingPawn, DamageCauser); }
	void AddTorqueToBeApplied(UE::Math::TVector<double>* Force, FName ForceName) { if (!Force) throw std::invalid_argument("Null native value parameter"); return NativeCall<void, UE :: Math :: TVector < double >, FName>(this, "APhysicsPrimalRaft.AddTorqueToBeApplied(UE::Math::TVector<double>,FName)", *Force, ForceName); }
};
