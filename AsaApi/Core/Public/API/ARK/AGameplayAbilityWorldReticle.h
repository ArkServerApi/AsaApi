#pragma once
#include "BulkForward.h"
#include "AActor.h"

struct AGameplayAbilityWorldReticle : public AActor
{
public:
	AGameplayAbilityWorldReticle() = delete;
	~AGameplayAbilityWorldReticle() = delete;
	AGameplayAbilityWorldReticle(const AGameplayAbilityWorldReticle&) = delete;
	AGameplayAbilityWorldReticle& operator=(const AGameplayAbilityWorldReticle&) = delete;
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("AGameplayAbilityWorldReticle"); }

	FWorldReticleParameters& ParametersField() { return *GetNativePointerField<FWorldReticleParameters*>(this, "AGameplayAbilityWorldReticle.Parameters"); }
	bool& bFaceOwnerFlatField() { return *GetNativePointerField<bool*>(this, "AGameplayAbilityWorldReticle.bFaceOwnerFlat"); }
	bool& bSnapToTargetedActorField() { return *GetNativePointerField<bool*>(this, "AGameplayAbilityWorldReticle.bSnapToTargetedActor"); }
	bool& bIsTargetValidField() { return *GetNativePointerField<bool*>(this, "AGameplayAbilityWorldReticle.bIsTargetValid"); }
	bool& bIsTargetAnActorField() { return *GetNativePointerField<bool*>(this, "AGameplayAbilityWorldReticle.bIsTargetAnActor"); }
	static UClass* StaticClass() { return AsaApi::ResolveClass("AGameplayAbilityWorldReticle"); }
	void FaceTowardSource(bool bFaceIn2D) { NativeCall<void, bool>(this, "AGameplayAbilityWorldReticle.FaceTowardSource(bool)", bFaceIn2D); }
	bool IsNetRelevantFor(const AActor* RealViewer, const AActor* ViewTarget, const UE::Math::TVector<double>& SrcLocation) { return NativeCall<bool, const AActor*, const AActor*, const UE::Math::TVector<double>&>(this, "AGameplayAbilityWorldReticle.IsNetRelevantFor(AActor*,AActor*,UE::Math::TVector<double>&)", RealViewer, ViewTarget, SrcLocation); }
	void Tick(float DeltaTime) { NativeCall<void, float>(this, "AGameplayAbilityWorldReticle.Tick(float)", DeltaTime); }
};
