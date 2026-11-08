#pragma once
#include "BulkForward.h"
#include "AGameplayAbilityTargetActor.h"

struct AGameplayAbilityTargetActor_Radius : public AGameplayAbilityTargetActor
{
public:
	AGameplayAbilityTargetActor_Radius() = delete;
	~AGameplayAbilityTargetActor_Radius() = delete;
	AGameplayAbilityTargetActor_Radius(const AGameplayAbilityTargetActor_Radius&) = delete;
	AGameplayAbilityTargetActor_Radius& operator=(const AGameplayAbilityTargetActor_Radius&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("AGameplayAbilityTargetActor_Radius"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("AGameplayAbilityTargetActor_Radius"); }

	float& RadiusField() { return *GetNativePointerField<float*>(this, "AGameplayAbilityTargetActor_Radius.Radius"); }
	void StartTargeting(UGameplayAbility* InAbility) { NativeCall<void, UGameplayAbility*>(this, "AGameplayAbilityTargetActor_Radius.StartTargeting(UGameplayAbility*)", InAbility); }
	void ConfirmTargetingAndContinue() { NativeCall<void>(this, "AGameplayAbilityTargetActor_Radius.ConfirmTargetingAndContinue()"); }
	TArray<TWeakObjectPtr<AActor, FWeakObjectPtr>, TSizedDefaultAllocator<32> >* PerformOverlap(TArray<TWeakObjectPtr<AActor, FWeakObjectPtr>, TSizedDefaultAllocator<32> >* result, const UE::Math::TVector<double>& Origin) { return NativeCall<TArray<TWeakObjectPtr<AActor, FWeakObjectPtr>, TSizedDefaultAllocator<32> >*, TArray<TWeakObjectPtr<AActor, FWeakObjectPtr>, TSizedDefaultAllocator<32> >*, const UE::Math::TVector<double>&>(this, "AGameplayAbilityTargetActor_Radius.PerformOverlap(UE::Math::TVector<double>&)", result, Origin); }
};
