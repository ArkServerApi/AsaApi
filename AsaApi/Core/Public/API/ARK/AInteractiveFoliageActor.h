#pragma once
#include "BulkForward.h"
#include "AStaticMeshActor.h"

struct AInteractiveFoliageActor : public AStaticMeshActor
{
public:
	AInteractiveFoliageActor() = delete;
	~AInteractiveFoliageActor() = delete;
	AInteractiveFoliageActor(const AInteractiveFoliageActor&) = delete;
	AInteractiveFoliageActor& operator=(const AInteractiveFoliageActor&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("AInteractiveFoliageActor"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("AInteractiveFoliageActor"); }

	UE::Math::TVector<double>& TouchingActorEntryPositionField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "AInteractiveFoliageActor.TouchingActorEntryPosition"); }
	UE::Math::TVector<double>& FoliageVelocityField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "AInteractiveFoliageActor.FoliageVelocity"); }
	UE::Math::TVector<double>& FoliageForceField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "AInteractiveFoliageActor.FoliageForce"); }
	UE::Math::TVector<double>& FoliagePositionField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "AInteractiveFoliageActor.FoliagePosition"); }
	float& FoliageDamageImpulseScaleField() { return *GetNativePointerField<float*>(this, "AInteractiveFoliageActor.FoliageDamageImpulseScale"); }
	float& FoliageTouchImpulseScaleField() { return *GetNativePointerField<float*>(this, "AInteractiveFoliageActor.FoliageTouchImpulseScale"); }
	float& FoliageStiffnessField() { return *GetNativePointerField<float*>(this, "AInteractiveFoliageActor.FoliageStiffness"); }
	float& FoliageStiffnessQuadraticField() { return *GetNativePointerField<float*>(this, "AInteractiveFoliageActor.FoliageStiffnessQuadratic"); }
	float& FoliageDampingField() { return *GetNativePointerField<float*>(this, "AInteractiveFoliageActor.FoliageDamping"); }
	float& MaxDamageImpulseField() { return *GetNativePointerField<float*>(this, "AInteractiveFoliageActor.MaxDamageImpulse"); }
	float& MaxTouchImpulseField() { return *GetNativePointerField<float*>(this, "AInteractiveFoliageActor.MaxTouchImpulse"); }
	float& MaxForceField() { return *GetNativePointerField<float*>(this, "AInteractiveFoliageActor.MaxForce"); }
	float& MassField() { return *GetNativePointerField<float*>(this, "AInteractiveFoliageActor.Mass"); }
	void PostActorCreated() { NativeCall<void>(this, "AInteractiveFoliageActor.PostActorCreated()"); }
	float TakeDamage(float DamageAmount, const FDamageEvent& DamageEvent, AController* EventInstigator, AActor* DamageCauser) { return NativeCall<float, float, const FDamageEvent&, AController*, AActor*>(this, "AInteractiveFoliageActor.TakeDamage(float,FDamageEvent&,AController*,AActor*)", DamageAmount, DamageEvent, EventInstigator, DamageCauser); }
	void Tick(float DeltaSeconds) { NativeCall<void, float>(this, "AInteractiveFoliageActor.Tick(float)", DeltaSeconds); }
	void PostLoad() { NativeCall<void>(this, "AInteractiveFoliageActor.PostLoad()"); }
	void SetupCollisionCylinder() { NativeCall<void>(this, "AInteractiveFoliageActor.SetupCollisionCylinder()"); }
};
