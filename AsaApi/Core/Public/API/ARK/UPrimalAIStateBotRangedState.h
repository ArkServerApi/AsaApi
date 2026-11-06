#pragma once
#include "BulkForward.h"
#include "GameplayForward.h"
#include "UPrimalAIStateDinoRangedState.h"

struct UPrimalAIStateBotRangedState : UPrimalAIStateDinoRangedState
{
public:
	UPrimalAIStateBotRangedState() = delete;
	~UPrimalAIStateBotRangedState() = delete;
	UPrimalAIStateBotRangedState(const UPrimalAIStateBotRangedState&) = delete;
	UPrimalAIStateBotRangedState& operator=(const UPrimalAIStateBotRangedState&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UPrimalAIStateBotRangedState"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UPrimalAIStateBotRangedState"); }

	bool& bDrawDebugField() { return *GetNativePointerField<bool*>(this, "UPrimalAIStateBotRangedState.bDrawDebug"); }
	float& ChanceBotWillAimDirectlyAtPlayerField() { return *GetNativePointerField<float*>(this, "UPrimalAIStateBotRangedState.ChanceBotWillAimDirectlyAtPlayer"); }
	float& ChanceBotWillAimDirectlyAtDinoField() { return *GetNativePointerField<float*>(this, "UPrimalAIStateBotRangedState.ChanceBotWillAimDirectlyAtDino"); }
	float& ChanceBotWillCompletelyMissPlayerField() { return *GetNativePointerField<float*>(this, "UPrimalAIStateBotRangedState.ChanceBotWillCompletelyMissPlayer"); }
	float& ChanceBotWillCompletelyMissDinoField() { return *GetNativePointerField<float*>(this, "UPrimalAIStateBotRangedState.ChanceBotWillCompletelyMissDino"); }
	float& ConeHalfAngleField() { return *GetNativePointerField<float*>(this, "UPrimalAIStateBotRangedState.ConeHalfAngle"); }
	float& ConeHalfAngleRandRangeField() { return *GetNativePointerField<float*>(this, "UPrimalAIStateBotRangedState.ConeHalfAngleRandRange"); }
	bool& bUseBPGetSocketLocationField() { return *GetNativePointerField<bool*>(this, "UPrimalAIStateBotRangedState.bUseBPGetSocketLocation"); }



	UE::Math::TVector<double>* BPGetSocketLocation(UE::Math::TVector<double>* result) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*>(this, "UPrimalAIStateBotRangedState.BPGetSocketLocation()", result); }
	void EndAnimationState(FName CustomEventName, ENetRole Role) { NativeCall<void, FName, ENetRole>(this, "UPrimalAIStateBotRangedState.EndAnimationState(FName,ENetRole)", CustomEventName, Role); }
};
