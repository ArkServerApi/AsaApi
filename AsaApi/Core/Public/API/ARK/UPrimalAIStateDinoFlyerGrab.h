#pragma once
#include "BulkForward.h"
#include "GameplayForward.h"
#include "UPrimalAIStateDinoMeleeState.h"

struct UPrimalAIStateDinoFlyerGrab : UPrimalAIStateDinoMeleeState
{
public:
	UPrimalAIStateDinoFlyerGrab() = delete;
	~UPrimalAIStateDinoFlyerGrab() = delete;
	UPrimalAIStateDinoFlyerGrab(const UPrimalAIStateDinoFlyerGrab&) = delete;
	UPrimalAIStateDinoFlyerGrab& operator=(const UPrimalAIStateDinoFlyerGrab&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UPrimalAIStateDinoFlyerGrab"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UPrimalAIStateDinoFlyerGrab"); }



	void OnBegin(UPrimalAIState* InParentState) { NativeCall<void, UPrimalAIState*>(this, "UPrimalAIStateDinoFlyerGrab.OnBegin(UPrimalAIState*)", InParentState); }

	APrimalCharacter*& FirstHitField() { return *GetNativePointerField<APrimalCharacter**>(this, "UPrimalAIStateDinoFlyerGrab.FirstHit"); }

	void StartAnimationState(FName CustomEventName, ENetRole Role) { NativeCall<void, FName, ENetRole>(this, "UPrimalAIStateDinoFlyerGrab.StartAnimationState(FName,ENetRole)", CustomEventName, Role); }
	void OnHitActor(const FHitResult& HitResult) { NativeCall<void, const FHitResult&>(this, "UPrimalAIStateDinoFlyerGrab.OnHitActor(FHitResult&)", HitResult); }
};
