#pragma once
#include "BulkForward.h"
#include "AHUD.h"

struct AAbilitySystemDebugHUD : public AHUD
{
public:
	AAbilitySystemDebugHUD() = delete;
	~AAbilitySystemDebugHUD() = delete;
	AAbilitySystemDebugHUD(const AAbilitySystemDebugHUD&) = delete;
	AAbilitySystemDebugHUD& operator=(const AAbilitySystemDebugHUD&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("AAbilitySystemDebugHUD"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("AAbilitySystemDebugHUD"); }

	bool ShouldDisplayDebugForActor(UCanvas* InCanvas, const AActor* Actor, const UE::Math::TVector<double>& CameraPosition, const UE::Math::TVector<double>& CameraDir) { return NativeCall<bool, UCanvas*, const AActor*, const UE::Math::TVector<double>&, const UE::Math::TVector<double>&>(this, "AAbilitySystemDebugHUD.ShouldDisplayDebugForActor(UCanvas*,AActor*,UE::Math::TVector<double>&,UE::Math::TVector<double>&)", InCanvas, Actor, CameraPosition, CameraDir); }
};
