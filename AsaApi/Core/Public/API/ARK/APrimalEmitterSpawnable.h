#pragma once
#include "BulkForward.h"

struct APrimalEmitterSpawnable : AEmitter {
	float& CameraShakeInnerRadiusField() { return *GetNativePointerField<float*>(this, "APrimalEmitterSpawnable.CameraShakeInnerRadius"); }
	float& CameraShakeOuterRadiusField() { return *GetNativePointerField<float*>(this, "APrimalEmitterSpawnable.CameraShakeOuterRadius"); }
	float& CameraShakeFalloffField() { return *GetNativePointerField<float*>(this, "APrimalEmitterSpawnable.CameraShakeFalloff"); }
	float& CameraShakeScaleMultiplierField() { return *GetNativePointerField<float*>(this, "APrimalEmitterSpawnable.CameraShakeScaleMultiplier"); }
	float& ShallowEmitterDontSpawnOutOfViewCheckRadiusField() { return *GetNativePointerField<float*>(this, "APrimalEmitterSpawnable.ShallowEmitterDontSpawnOutOfViewCheckRadius"); }
	float& ShallowEmitterOverrideSecondsBeforeInactiveField() { return *GetNativePointerField<float*>(this, "APrimalEmitterSpawnable.ShallowEmitterOverrideSecondsBeforeInactive"); }
	float& ActivateSoundFadeInDurationField() { return *GetNativePointerField<float*>(this, "APrimalEmitterSpawnable.ActivateSoundFadeInDuration"); }
	float& DeactivateSoundFadeOutDurationField() { return *GetNativePointerField<float*>(this, "APrimalEmitterSpawnable.DeactivateSoundFadeOutDuration"); }
	float& ShallowEmitterSpawnableMaxDistanceField() { return *GetNativePointerField<float*>(this, "APrimalEmitterSpawnable.ShallowEmitterSpawnableMaxDistance"); }
	bool& bUseNiagaraComponentField() { return *GetNativePointerField<bool*>(this, "APrimalEmitterSpawnable.bUseNiagaraComponent"); }
	bool& bEnableDistanceBasedVfxField() { return *GetNativePointerField<bool*>(this, "APrimalEmitterSpawnable.bEnableDistanceBasedVfx"); }
	bool& bEmitterVfxActiveField() { return *GetNativePointerField<bool*>(this, "APrimalEmitterSpawnable.bEmitterVfxActive"); }
	bool& bDelayedDeactivationField() { return *GetNativePointerField<bool*>(this, "APrimalEmitterSpawnable.bDelayedDeactivation"); }
	float& WarmupSecondsPerFrameCapField() { return *GetNativePointerField<float*>(this, "APrimalEmitterSpawnable.WarmupSecondsPerFrameCap"); }
	int& MaxConcurrentActivatedVfxField() { return *GetNativePointerField<int*>(this, "APrimalEmitterSpawnable.MaxConcurrentActivatedVfx"); }

	static UClass* StaticClass() { return AsaApi::ResolveClass("APrimalEmitterSpawnable"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("APrimalEmitterSpawnable"); }

	USceneComponent*& RootTransformCompField() { return *GetNativePointerField<USceneComponent**>(this, "APrimalEmitterSpawnable.RootTransformComp"); }
	UAudioComponent*& SoundToPlayField() { return *GetNativePointerField<UAudioComponent**>(this, "APrimalEmitterSpawnable.SoundToPlay"); }
	FDecalData& DecalToSpawnField() { return *GetNativePointerField<FDecalData*>(this, "APrimalEmitterSpawnable.DecalToSpawn"); }
	FLinearColor& ColorParameterField() { return *GetNativePointerField<FLinearColor*>(this, "APrimalEmitterSpawnable.ColorParameter"); }
	UNiagaraComponent*& NiagaraComponentField() { return *GetNativePointerField<UNiagaraComponent**>(this, "APrimalEmitterSpawnable.NiagaraComponent"); }
	AActor*& SpawnedForActorField() { return *GetNativePointerField<AActor**>(this, "APrimalEmitterSpawnable.SpawnedForActor"); }
	UE::Math::TVector<double>& ImpulseDataField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "APrimalEmitterSpawnable.ImpulseData"); }
	UE::Math::TVector<double>& HitLocationField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "APrimalEmitterSpawnable.HitLocation"); }
	UNiagaraComponent*& EmitterNiagaraComponentField() { return *GetNativePointerField<UNiagaraComponent**>(this, "APrimalEmitterSpawnable.EmitterNiagaraComponent"); }
	TWeakObjectPtr<UAnimNotifyState_SpawnProp const , FWeakObjectPtr>& SourceNotifyField() { return *GetNativePointerField<TWeakObjectPtr<UAnimNotifyState_SpawnProp const , FWeakObjectPtr>*>(this, "APrimalEmitterSpawnable.SourceNotify"); }
	BitFieldValue<bool, unsigned __int32> bCameraShakeOrientTowardsEpicenter() { return { this, "APrimalEmitterSpawnable.bCameraShakeOrientTowardsEpicenter"}; }
	BitFieldValue<bool, unsigned __int32> bHighPrioritySound() { return { this, "APrimalEmitterSpawnable.bHighPrioritySound"}; }
	BitFieldValue<bool, unsigned __int32> bShallowEmitterSpawnable() { return { this, "APrimalEmitterSpawnable.bShallowEmitterSpawnable"}; }
	BitFieldValue<bool, unsigned __int32> bShallowEmitterDontSpawnOutOfView() { return { this, "APrimalEmitterSpawnable.bShallowEmitterDontSpawnOutOfView"}; }
	BitFieldValue<bool, unsigned __int32> bAllowLoopingEmitter() { return { this, "APrimalEmitterSpawnable.bAllowLoopingEmitter"}; }
	BitFieldValue<bool, unsigned __int32> bForceNoRotation() { return { this, "APrimalEmitterSpawnable.bForceNoRotation"}; }
	BitFieldValue<bool, unsigned __int32> bTickSoundInRangePlayback() { return { this, "APrimalEmitterSpawnable.bTickSoundInRangePlayback"}; }
	BitFieldValue<bool, unsigned __int32> bWasActivated() { return { this, "APrimalEmitterSpawnable.bWasActivated"}; }
	BitFieldValue<bool, unsigned __int32> bAddedToArray() { return { this, "APrimalEmitterSpawnable.bAddedToArray"}; }
	BitFieldValue<bool, unsigned __int32> bHasImpulseDataAvailable() { return { this, "APrimalEmitterSpawnable.bHasImpulseDataAvailable"}; }
	BitFieldValue<bool, unsigned __int32> bUseBPCustomApplyColor() { return { this, "APrimalEmitterSpawnable.bUseBPCustomApplyColor"}; }
	BitFieldValue<bool, unsigned __int32> bUseNiagaraDestroyOnSystemFinish() { return { this, "APrimalEmitterSpawnable.bUseNiagaraDestroyOnSystemFinish"}; }
	void EndPlay(EEndPlayReason::Type EndPlayReason) { NativeCall<void, EEndPlayReason::Type>(this, "APrimalEmitterSpawnable.EndPlay(EEndPlayReason::Type)", EndPlayReason); }
	void DeactivateEmitter() { NativeCall<void>(this, "APrimalEmitterSpawnable.DeactivateEmitter()"); }
	void Deactivate() { NativeCall<void>(this, "APrimalEmitterSpawnable.Deactivate()"); }
	void UpdateAmbientSound() { NativeCall<void>(this, "APrimalEmitterSpawnable.UpdateAmbientSound()"); }
	void ToggleActivation(bool DoActivate) { NativeCall<void, bool>(this, "APrimalEmitterSpawnable.ToggleActivation(bool)", DoActivate); }
	void SetImpulseData(const FDamageEvent& DamageEvent, APawn* InstigatingPawn) { NativeCall<void, const FDamageEvent&, APawn*>(this, "APrimalEmitterSpawnable.SetImpulseData(FDamageEvent&,APawn*)", DamageEvent, InstigatingPawn); }
	void Activate() { NativeCall<void>(this, "APrimalEmitterSpawnable.Activate()"); }
	void BPOnSetEmitterInstigatorFromSpawn(APawn* NewInstigator) { NativeCall<void, APawn*>(this, "APrimalEmitterSpawnable.BPOnSetEmitterInstigatorFromSpawn(APawn*)", NewInstigator); }
	void UpdateEmitter(float DeltaTime, float Alpha, AActor* FromActor) { NativeCall<void, float, float, AActor*>(this, "APrimalEmitterSpawnable.UpdateEmitter(float,float,AActor*)", DeltaTime, Alpha, FromActor); }
	void SetupEmitter(AActor* FromActor) { NativeCall<void, AActor*>(this, "APrimalEmitterSpawnable.SetupEmitter(AActor*)", FromActor); }
	void ActivateEmitter() { NativeCall<void>(this, "APrimalEmitterSpawnable.ActivateEmitter()"); }
	void PreActivation() { NativeCall<void>(this, "APrimalEmitterSpawnable.PreActivation()"); }
	void SetSourceNotify(const UAnimNotifyState_SpawnProp* Notify) { NativeCall<void, const UAnimNotifyState_SpawnProp*>(this, "APrimalEmitterSpawnable.SetSourceNotify(UAnimNotifyState_SpawnProp*)", Notify); }
	void SetEmitterVfxActive(bool bActive) { NativeCall<void, bool>(this, "APrimalEmitterSpawnable.SetEmitterVfxActive(bool)", bActive); }
	void BeginPlay() { NativeCall<void>(this, "APrimalEmitterSpawnable.BeginPlay()"); }
	void StartDeactivation() { NativeCall<void>(this, "APrimalEmitterSpawnable.StartDeactivation()"); }
	void Unstasis() { NativeCall<void>(this, "APrimalEmitterSpawnable.Unstasis()"); }
	void OnNiagaraSystemFinished(UNiagaraComponent* FinishedComponent) { NativeCall<void, UNiagaraComponent*>(this, "APrimalEmitterSpawnable.OnNiagaraSystemFinished(UNiagaraComponent*)", FinishedComponent); }
	void PostInitializeComponents() { NativeCall<void>(this, "APrimalEmitterSpawnable.PostInitializeComponents()"); }
	bool IsSameSourceNotify(const UAnimNotifyState_SpawnProp* Notify) { return NativeCall<bool, const UAnimNotifyState_SpawnProp*>(this, "APrimalEmitterSpawnable.IsSameSourceNotify(UAnimNotifyState_SpawnProp*)", Notify); }
	bool TemplateAllowActorSpawn(UWorld* World, const UE::Math::TVector<double>& AtLocation, const UE::Math::TRotator<double>& AtRotation, const FActorSpawnParameters& SpawnParameters) { return NativeCall<bool, UWorld*, const UE::Math::TVector<double>&, const UE::Math::TRotator<double>&, const FActorSpawnParameters&>(this, "APrimalEmitterSpawnable.TemplateAllowActorSpawn(UWorld*,UE::Math::TVector<double>&,UE::Math::TRotator<double>&,FActorSpawnParameters&)", World, AtLocation, AtRotation, SpawnParameters); }
	void PreInitializeComponents() { NativeCall<void>(this, "APrimalEmitterSpawnable.PreInitializeComponents()"); }
	void Destroyed() { NativeCall<void>(this, "APrimalEmitterSpawnable.Destroyed()"); }
	void StartActivation() { NativeCall<void>(this, "APrimalEmitterSpawnable.StartActivation()"); }
};