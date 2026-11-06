#pragma once
#include "BulkForward.h"
#include "GameplayForward.h"
#include "UPrimalAIStateDinoRangedState.h"

struct UPrimalAIStateDinoSpineyLizardTailRangeState : UPrimalAIStateDinoRangedState
{
public:
	UPrimalAIStateDinoSpineyLizardTailRangeState() = delete;
	~UPrimalAIStateDinoSpineyLizardTailRangeState() = delete;
	UPrimalAIStateDinoSpineyLizardTailRangeState(const UPrimalAIStateDinoSpineyLizardTailRangeState&) = delete;
	UPrimalAIStateDinoSpineyLizardTailRangeState& operator=(const UPrimalAIStateDinoSpineyLizardTailRangeState&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UPrimalAIStateDinoSpineyLizardTailRangeState"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UPrimalAIStateDinoSpineyLizardTailRangeState"); }

	float& minPercentField() { return *GetNativePointerField<float*>(this, "UPrimalAIStateDinoSpineyLizardTailRangeState.minPercent"); }
	float& maxPercentField() { return *GetNativePointerField<float*>(this, "UPrimalAIStateDinoSpineyLizardTailRangeState.maxPercent"); }



	void SpineyAttack(const UE::Math::TVector<double>& TargetLoc, const UE::Math::TVector<double>& TargetVel) { NativeCall<void, const UE::Math::TVector<double>&, const UE::Math::TVector<double>&>(this, "UPrimalAIStateDinoSpineyLizardTailRangeState.SpineyAttack(UE::Math::TVector<double>&,UE::Math::TVector<double>&)", TargetLoc, TargetVel); }
	void EndAnimationState(FName CustomEventName, ENetRole Role) { NativeCall<void, FName, ENetRole>(this, "UPrimalAIStateDinoSpineyLizardTailRangeState.EndAnimationState(FName,ENetRole)", CustomEventName, Role); }
};
