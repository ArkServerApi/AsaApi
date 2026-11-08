#pragma once
#include "BulkForward.h"


struct AHazardTrigger_Slide : AHazardTrigger
{
	// Fields

	UAudioComponent*& SoundToPlayField() { return *GetNativePointerField<UAudioComponent**>(this, "AHazardTrigger_Slide.SoundToPlay"); }
	TArray<USplineComponent*, TSizedDefaultAllocator<32> >& SplinesField() { return *GetNativePointerField<TArray<USplineComponent*, TSizedDefaultAllocator<32> >*>(this, "AHazardTrigger_Slide.Splines"); }
	TArray<UParticleSystem*, TSizedDefaultAllocator<32> >& SlideFXField() { return *GetNativePointerField<TArray<UParticleSystem*, TSizedDefaultAllocator<32> >*>(this, "AHazardTrigger_Slide.SlideFX"); }
	TArray<TSubclassOf<APrimalEmitterSpawnable>, TSizedDefaultAllocator<32> >& FinalEmitterField() { return *GetNativePointerField<TArray<TSubclassOf<APrimalEmitterSpawnable>, TSizedDefaultAllocator<32> >*>(this, "AHazardTrigger_Slide.FinalEmitter"); }
	TArray<TSubclassOf<APrimalEmitterSpawnable>, TSizedDefaultAllocator<32> >& WarningEmitterField() { return *GetNativePointerField<TArray<TSubclassOf<APrimalEmitterSpawnable>, TSizedDefaultAllocator<32> >*>(this, "AHazardTrigger_Slide.WarningEmitter"); }
	TArray<TSubclassOf<APrimalEmitterSpawnable>, TSizedDefaultAllocator<32> >& ImpactEmitterField() { return *GetNativePointerField<TArray<TSubclassOf<APrimalEmitterSpawnable>, TSizedDefaultAllocator<32> >*>(this, "AHazardTrigger_Slide.ImpactEmitter"); }
	USoundBase*& SlideSoundField() { return *GetNativePointerField<USoundBase**>(this, "AHazardTrigger_Slide.SlideSound"); }
	int& StructureDamageField() { return *GetNativePointerField<int*>(this, "AHazardTrigger_Slide.StructureDamage"); }
	TSubclassOf<UDamageType>& StructureDamageTypeField() { return *GetNativePointerField<TSubclassOf<UDamageType>*>(this, "AHazardTrigger_Slide.StructureDamageType"); }
	float& SplineSeparationField() { return *GetNativePointerField<float*>(this, "AHazardTrigger_Slide.SplineSeparation"); }
	float& MinTimeBetweenActivationsField() { return *GetNativePointerField<float*>(this, "AHazardTrigger_Slide.MinTimeBetweenActivations"); }
	float& SlideSpeedField() { return *GetNativePointerField<float*>(this, "AHazardTrigger_Slide.SlideSpeed"); }
	float& WaveWidthField() { return *GetNativePointerField<float*>(this, "AHazardTrigger_Slide.WaveWidth"); }
	float& ImpulseField() { return *GetNativePointerField<float*>(this, "AHazardTrigger_Slide.Impulse"); }
	float& MinWarningIntervalField() { return *GetNativePointerField<float*>(this, "AHazardTrigger_Slide.MinWarningInterval"); }
	float& MaxWarningIntervalField() { return *GetNativePointerField<float*>(this, "AHazardTrigger_Slide.MaxWarningInterval"); }
	float& ActivationChanceField() { return *GetNativePointerField<float*>(this, "AHazardTrigger_Slide.ActivationChance"); }
	float& ActivationIncrementField() { return *GetNativePointerField<float*>(this, "AHazardTrigger_Slide.ActivationIncrement"); }
	float& MinProjectileIntervalField() { return *GetNativePointerField<float*>(this, "AHazardTrigger_Slide.MinProjectileInterval"); }
	float& MaxProjectileIntervalField() { return *GetNativePointerField<float*>(this, "AHazardTrigger_Slide.MaxProjectileInterval"); }
	float& ImpulseVelocityLimitField() { return *GetNativePointerField<float*>(this, "AHazardTrigger_Slide.ImpulseVelocityLimit"); }
	TSubclassOf<AShooterProjectile>& ProjectileClassField() { return *GetNativePointerField<TSubclassOf<AShooterProjectile>*>(this, "AHazardTrigger_Slide.ProjectileClass"); }
	float& WarningTimerField() { return *GetNativePointerField<float*>(this, "AHazardTrigger_Slide.WarningTimer"); }
	float& CurrentActivationChanceField() { return *GetNativePointerField<float*>(this, "AHazardTrigger_Slide.CurrentActivationChance"); }
	float& ProjectileTimerField() { return *GetNativePointerField<float*>(this, "AHazardTrigger_Slide.ProjectileTimer"); }
	//TArray<FSlideData, TSizedDefaultAllocator<32> >& SlideComponentsField() { return *GetNativePointerField<TArray<FSlideData, TSizedDefaultAllocator<32> >*>(this, "AHazardTrigger_Slide.SlideComponents"); }
	TArray<UE::Math::TVector<double>, TSizedDefaultAllocator<32> >& SlidePositionsField() { return *GetNativePointerField<TArray<UE::Math::TVector<double>, TSizedDefaultAllocator<32> >*>(this, "AHazardTrigger_Slide.SlidePositions"); }
	TArray<TWeakObjectPtr<APrimalCharacter>, TSizedDefaultAllocator<32> >& CharactersInZoneField() { return *GetNativePointerField<TArray<TWeakObjectPtr<APrimalCharacter>, TSizedDefaultAllocator<32> >*>(this, "AHazardTrigger_Slide.CharactersInZone"); }

	// Bitfields

	// Functions

	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// static UClass* StaticClass();
	static UClass* StaticClass() { return AsaApi::ResolveClass("AHazardTrigger_Slide"); }
	void SpawnWarningFX() { NativeCall<void>(this, "AHazardTrigger_Slide.SpawnWarningFX()"); }
	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// static void StaticRegisterNativesAHazardTrigger_Slide();
	void BeginPlay() { NativeCall<void>(this, "AHazardTrigger_Slide.BeginPlay()"); }
	void Tick(float DeltaSeconds) { NativeCall<void, float>(this, "AHazardTrigger_Slide.Tick(float)", DeltaSeconds); }
	void UpdateActive(float DeltaSeconds) { NativeCall<void, float>(this, "AHazardTrigger_Slide.UpdateActive(float)", DeltaSeconds); }
	bool CanActivate() { return NativeCall<bool>(this, "AHazardTrigger_Slide.CanActivate()"); }
	void Activate() { NativeCall<void>(this, "AHazardTrigger_Slide.Activate()"); }
	void Deactivate() { NativeCall<void>(this, "AHazardTrigger_Slide.Deactivate()"); }
	void OnCharacterEnter_Implementation(APrimalCharacter* Character) { NativeCall<void, APrimalCharacter*>(this, "AHazardTrigger_Slide.OnCharacterEnter_Implementation(APrimalCharacter*)", Character); }
	void OnCharacterExit_Implementation(APrimalCharacter* Character) { NativeCall<void, APrimalCharacter*>(this, "AHazardTrigger_Slide.OnCharacterExit_Implementation(APrimalCharacter*)", Character); }
	void SpawnProjectile_Implementation(UE::Math::TVector<double>* Location, UE::Math::TVector<double>* Heading) { NativeCall<void, UE::Math::TVector<double>*, UE::Math::TVector<double>*>(this, "AHazardTrigger_Slide.SpawnProjectile_Implementation(UE::Math::TVector<double>,UE::Math::TVector<double>)", Location, Heading); }
	void SpawnWarningFX_Implementation() { NativeCall<void>(this, "AHazardTrigger_Slide.SpawnWarningFX_Implementation()"); }

	TArray<UNiagaraSystem*, TSizedDefaultAllocator<32> >& SlideFX_NiagaraField() { return *GetNativePointerField<TArray<UNiagaraSystem*, TSizedDefaultAllocator<32> >*>(this, "AHazardTrigger_Slide.SlideFX_Niagara"); }
	float& MaxSplineUphillToleranceField() { return *GetNativePointerField<float*>(this, "AHazardTrigger_Slide.MaxSplineUphillTolerance"); }
	float& SlideFXUpdateIntervalField() { return *GetNativePointerField<float*>(this, "AHazardTrigger_Slide.SlideFXUpdateInterval"); }
	void EndSlide() { NativeCall<void>(this, "AHazardTrigger_Slide.EndSlide()"); }
	void OnSlideFXUpdated(const UE::Math::TVector<double>& OldLocation, const UE::Math::TVector<double>& NewLocation) { NativeCall<void, const UE::Math::TVector<double>&, const UE::Math::TVector<double>&>(this, "AHazardTrigger_Slide.OnSlideFXUpdated(UE::Math::TVector<double>&,UE::Math::TVector<double>&)", OldLocation, NewLocation); }
	void StartSlide() { NativeCall<void>(this, "AHazardTrigger_Slide.StartSlide()"); }
	void SpawnProjectile(UE::Math::TVector<double>* Location, UE::Math::TVector<double>* Heading) { if (!Location) throw std::invalid_argument("Null native value parameter"); if (!Heading) throw std::invalid_argument("Null native value parameter"); return NativeCall<void, UE :: Math :: TVector < double >, UE :: Math :: TVector < double >>(this, "AHazardTrigger_Slide.SpawnProjectile(UE::Math::TVector<double>,UE::Math::TVector<double>)", *Location, *Heading); }
	void RebuildSplines() { NativeCall<void>(this, "AHazardTrigger_Slide.RebuildSplines()"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("AHazardTrigger_Slide"); }
};