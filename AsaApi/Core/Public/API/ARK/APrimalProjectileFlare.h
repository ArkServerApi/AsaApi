#pragma once


struct APrimalProjectileFlare : AShooterProjectile
{
	// Fields

	UParticleSystemComponent*& SecondParticleCompField() { return *GetNativePointerField<UParticleSystemComponent**>(this, "APrimalProjectileFlare.SecondParticleComp"); }
	float& TimeToActivateSecondParticleCompField() { return *GetNativePointerField<float*>(this, "APrimalProjectileFlare.TimeToActivateSecondParticleComp"); }
	float& RandomFallingMovementIntervalField() { return *GetNativePointerField<float*>(this, "APrimalProjectileFlare.RandomFallingMovementInterval"); }
	float& RandomFallingMovementStrengthField() { return *GetNativePointerField<float*>(this, "APrimalProjectileFlare.RandomFallingMovementStrength"); }
	USoundBase*& SecondParticleSoundField() { return *GetNativePointerField<USoundBase**>(this, "APrimalProjectileFlare.SecondParticleSound"); }
	float& LightColorIntensityField() { return *GetNativePointerField<float*>(this, "APrimalProjectileFlare.LightColorIntensity"); }

	// Bitfields

	// Functions

	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// static UClass* StaticClass();
	static UClass* StaticClass() { return AsaApi::ResolveClass("APrimalProjectileFlare"); }
	void BeginPlay() { NativeCall<void>(this, "APrimalProjectileFlare.BeginPlay()"); }
	void DeactivateProjectileEffects() { NativeCall<void>(this, "APrimalProjectileFlare.DeactivateProjectileEffects()"); }
	void ActivateSecondParticles() { NativeCall<void>(this, "APrimalProjectileFlare.ActivateSecondParticles()"); }
	void ApplyRandomMovement() { NativeCall<void>(this, "APrimalProjectileFlare.ApplyRandomMovement()"); }
	void Tick(float DeltaSeconds) { NativeCall<void, float>(this, "APrimalProjectileFlare.Tick(float)", DeltaSeconds); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("APrimalProjectileFlare"); }
};