#pragma once
#include "BulkForward.h"
#include "AActor.h"

struct AGameplayAbilityTargetActor : public AActor
{
public:
	AGameplayAbilityTargetActor() = delete;
	~AGameplayAbilityTargetActor() = delete;
	AGameplayAbilityTargetActor(const AGameplayAbilityTargetActor&) = delete;
	AGameplayAbilityTargetActor& operator=(const AGameplayAbilityTargetActor&) = delete;
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("AGameplayAbilityTargetActor"); }

	bool& ShouldProduceTargetDataOnServerField() { return *GetNativePointerField<bool*>(this, "AGameplayAbilityTargetActor.ShouldProduceTargetDataOnServer"); }
	FGameplayAbilityTargetingLocationInfo& StartLocationField() { return *GetNativePointerField<FGameplayAbilityTargetingLocationInfo*>(this, "AGameplayAbilityTargetActor.StartLocation"); }
	bool& bDestroyOnConfirmationField() { return *GetNativePointerField<bool*>(this, "AGameplayAbilityTargetActor.bDestroyOnConfirmation"); }
	FWorldReticleParameters& ReticleParamsField() { return *GetNativePointerField<FWorldReticleParameters*>(this, "AGameplayAbilityTargetActor.ReticleParams"); }
	FGameplayTargetDataFilterHandle& FilterField() { return *GetNativePointerField<FGameplayTargetDataFilterHandle*>(this, "AGameplayAbilityTargetActor.Filter"); }
	bool& bDebugField() { return *GetNativePointerField<bool*>(this, "AGameplayAbilityTargetActor.bDebug"); }
	FDelegateHandle& GenericConfirmHandleField() { return *GetNativePointerField<FDelegateHandle*>(this, "AGameplayAbilityTargetActor.GenericConfirmHandle"); }
	FDelegateHandle& GenericCancelHandleField() { return *GetNativePointerField<FDelegateHandle*>(this, "AGameplayAbilityTargetActor.GenericCancelHandle"); }
	bool IsNetRelevantFor(const AActor* RealViewer, const AActor* ViewTarget, const UE::Math::TVector<double>& SrcLocation) { return NativeCall<bool, const AActor*, const AActor*, const UE::Math::TVector<double>&>(this, "AGameplayAbilityTargetActor.IsNetRelevantFor(AActor*,AActor*,UE::Math::TVector<double>&)", RealViewer, ViewTarget, SrcLocation); }
	void ConfirmTargeting() { NativeCall<void>(this, "AGameplayAbilityTargetActor.ConfirmTargeting()"); }
	void ConfirmTargetingAndContinue() { NativeCall<void>(this, "AGameplayAbilityTargetActor.ConfirmTargetingAndContinue()"); }
	bool ShouldProduceTargetData() { return NativeCall<bool>(this, "AGameplayAbilityTargetActor.ShouldProduceTargetData()"); }
	void StartTargeting(UGameplayAbility* Ability) { NativeCall<void, UGameplayAbility*>(this, "AGameplayAbilityTargetActor.StartTargeting(UGameplayAbility*)", Ability); }
	static UClass* StaticClass() { return AsaApi::ResolveClass("AGameplayAbilityTargetActor"); }
	bool IsConfirmTargetingAllowed() { return NativeCall<bool>(this, "AGameplayAbilityTargetActor.IsConfirmTargetingAllowed()"); }
	void BindToConfirmCancelInputs() { NativeCall<void>(this, "AGameplayAbilityTargetActor.BindToConfirmCancelInputs()"); }
	void CancelTargeting() { NativeCall<void>(this, "AGameplayAbilityTargetActor.CancelTargeting()"); }
	void EndPlay(EEndPlayReason::Type EndPlayReason) { NativeCall<void, EEndPlayReason::Type>(this, "AGameplayAbilityTargetActor.EndPlay(EEndPlayReason::Type)", EndPlayReason); }
	bool OnReplicatedTargetDataReceived(FGameplayAbilityTargetDataHandle& Data) { return NativeCall<bool, FGameplayAbilityTargetDataHandle&>(this, "AGameplayAbilityTargetActor.OnReplicatedTargetDataReceived(FGameplayAbilityTargetDataHandle&)", Data); }
};
