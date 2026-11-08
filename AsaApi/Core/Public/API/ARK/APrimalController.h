#pragma once
#include "BulkForward.h"


struct APrimalController : AController
{
	// Fields

	int& LastValidUnstasisCasterFrameField() { return *GetNativePointerField<int*>(this, "APrimalController.LastValidUnstasisCasterFrame"); }
	long double& ServerLastReceivedSpectatorLocTimeField() { return *GetNativePointerField<long double*>(this, "APrimalController.ServerLastReceivedSpectatorLocTime"); }

	// Bitfields

	BitFieldValue<bool, unsigned __int32> bDebugPathing() { return { this, "APrimalController.bDebugPathing" }; }

	// Functions

	AActor* GetAimedUseActor(UActorComponent** UseComponent, int* hitBodyIndex, bool bForceUseActorLocation, bool bForceUpdateAimedActors) { return NativeCall<AActor*, UActorComponent**, int*, bool, bool>(this, "APrimalController.GetAimedUseActor(UActorComponent**,int*,bool,bool)", UseComponent, hitBodyIndex, bForceUseActorLocation, bForceUpdateAimedActors); }
	APawn* GetResponsibleDamager(AActor* DamageCauser) { return NativeCall<APawn*, AActor*>(this, "APrimalController.GetResponsibleDamager(AActor*)", DamageCauser); }
	static UClass* StaticClass() { return AsaApi::ResolveClass("APrimalController"); }

	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("APrimalController"); }

	bool OverrideHasReachedGoalWithUseHeight(const UE::Math::TVector<double>& GoalLoc, float UseRadius, float UseHeight, float ZDelta) { return NativeCall<bool, const UE::Math::TVector<double>&, float, float, float>(this, "APrimalController.OverrideHasReachedGoalWithUseHeight(UE::Math::TVector<double>&,float,float,float)", GoalLoc, UseRadius, UseHeight, ZDelta); }
	float GetAcceptanceRadiusOffset() { return NativeCall<float>(this, "APrimalController.GetAcceptanceRadiusOffset()"); }
	float ModifyReachedGoalRadius() { return NativeCall<float>(this, "APrimalController.ModifyReachedGoalRadius()"); }
	bool CheckForForceAbortMove(const UE::Math::TVector<double>& GoalLoc) { return NativeCall<bool, const UE::Math::TVector<double>&>(this, "APrimalController.CheckForForceAbortMove(UE::Math::TVector<double>&)", GoalLoc); }
	UE::Math::TVector<double>* ModifyGoalLocation(UE::Math::TVector<double>* result, const UE::Math::TVector<double>& GoalLoc) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*, const UE::Math::TVector<double>&>(this, "APrimalController.ModifyGoalLocation(UE::Math::TVector<double>&)", result, GoalLoc); }
	AActor* GetLastControlledPlayerChar() { return NativeCall<AActor*>(this, "APrimalController.GetLastControlledPlayerChar()"); }
	AActor* BaseGetPlayerCharacter() { return NativeCall<AActor*>(this, "APrimalController.BaseGetPlayerCharacter()"); }
	void DisconnectVoiceUser(bool __formal) { NativeCall<void, bool>(this, "APrimalController.DisconnectVoiceUser(bool)", __formal); }
	bool AllowToReachGoal(const UE::Math::TVector<double>& GoalLoc) { return NativeCall<bool, const UE::Math::TVector<double>&>(this, "APrimalController.AllowToReachGoal(UE::Math::TVector<double>&)", GoalLoc); }
	float GetAcceptanceHeightOffset() { return NativeCall<float>(this, "APrimalController.GetAcceptanceHeightOffset()"); }
};