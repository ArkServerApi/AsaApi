#pragma once
#include "BulkForward.h"
#include "GameplayForward.h"
#include "UPrimalAIStateDinoMeleeState.h"

struct UPrimalAIStateDinoGrabAndReleaseState : UPrimalAIStateDinoMeleeState
{
public:
	UPrimalAIStateDinoGrabAndReleaseState() = delete;
	~UPrimalAIStateDinoGrabAndReleaseState() = delete;
	UPrimalAIStateDinoGrabAndReleaseState(const UPrimalAIStateDinoGrabAndReleaseState&) = delete;
	UPrimalAIStateDinoGrabAndReleaseState& operator=(const UPrimalAIStateDinoGrabAndReleaseState&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UPrimalAIStateDinoGrabAndReleaseState"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UPrimalAIStateDinoGrabAndReleaseState"); }



	void OnBegin(UPrimalAIState* InParentState) { NativeCall<void, UPrimalAIState*>(this, "UPrimalAIStateDinoGrabAndReleaseState.OnBegin(UPrimalAIState*)", InParentState); }
	void OnEnd() { NativeCall<void>(this, "UPrimalAIStateDinoGrabAndReleaseState.OnEnd()"); }

	APrimalCharacter*& FirstHitField() { return *GetNativePointerField<APrimalCharacter**>(this, "UPrimalAIStateDinoGrabAndReleaseState.FirstHit"); }

	void StartAnimationState(FName CustomEventName, ENetRole Role) { NativeCall<void, FName, ENetRole>(this, "UPrimalAIStateDinoGrabAndReleaseState.StartAnimationState(FName,ENetRole)", CustomEventName, Role); }
	void OnHitActor(const FHitResult& HitResult) { NativeCall<void, const FHitResult&>(this, "UPrimalAIStateDinoGrabAndReleaseState.OnHitActor(FHitResult&)", HitResult); }
};
