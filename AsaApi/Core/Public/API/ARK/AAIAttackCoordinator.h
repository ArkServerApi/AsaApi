#pragma once
#include "BulkForward.h"


struct AAIAttackCoordinator : AActor
{
	// Fields

	int& MaxAttackersPerTargetField() { return *GetNativePointerField<int*>(this, "AAIAttackCoordinator.MaxAttackersPerTarget"); }
	float& UpdateIntervalField() { return *GetNativePointerField<float*>(this, "AAIAttackCoordinator.UpdateInterval"); }
	TArray<TWeakObjectPtr<APrimalDinoAIController>, TSizedDefaultAllocator<32> >& AttackersField() { return *GetNativePointerField<TArray<TWeakObjectPtr<APrimalDinoAIController>, TSizedDefaultAllocator<32> >*>(this, "AAIAttackCoordinator.Attackers"); }
	long double& LastUpdateTimeField() { return *GetNativePointerField<long double*>(this, "AAIAttackCoordinator.LastUpdateTime"); }

	// Bitfields

	// Functions

	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("AAIAttackCoordinator"); }
	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// static void StaticRegisterNativesAAIAttackCoordinator();
	void Tick(float DeltaSeconds) { NativeCall<void, float>(this, "AAIAttackCoordinator.Tick(float)", DeltaSeconds); }
	int GetNumAttackersForTarget(const AActor* Target) { return NativeCall<int, const AActor*>(this, "AAIAttackCoordinator.GetNumAttackersForTarget(AActor*)", Target); }
	int GetNumAttackersWithPriorityForTarget(const AActor* Target) { return NativeCall<int, const AActor*>(this, "AAIAttackCoordinator.GetNumAttackersWithPriorityForTarget(AActor*)", Target); }
	void UpdateAttackPriorities() { NativeCall<void>(this, "AAIAttackCoordinator.UpdateAttackPriorities()"); }
	void UpdateAttackGroup_Implementation(TArray<APrimalDinoAIController*, TSizedDefaultAllocator<32> >* AttackGroup) { NativeCall<void, TArray<APrimalDinoAIController*, TSizedDefaultAllocator<32> >*>(this, "AAIAttackCoordinator.UpdateAttackGroup_Implementation(TArray<APrimalDinoAIController*,TSizedDefaultAllocator<32>>&)", AttackGroup); }
	float CalculateAttackerPriorityWeight_Implementation(APrimalDinoAIController* Attacker) { return NativeCall<float, APrimalDinoAIController*>(this, "AAIAttackCoordinator.CalculateAttackerPriorityWeight_Implementation(APrimalDinoAIController*)", Attacker); }

	static UClass* StaticClass() { return AsaApi::ResolveClass("AAIAttackCoordinator"); }

	void RemoveAttacker(APrimalDinoAIController* Controller) { NativeCall<void, APrimalDinoAIController*>(this, "AAIAttackCoordinator.RemoveAttacker(APrimalDinoAIController*)", Controller); }
	float CalculateAttackerPriorityWeight(APrimalDinoAIController* Attacker) { return NativeCall<float, APrimalDinoAIController*>(this, "AAIAttackCoordinator.CalculateAttackerPriorityWeight(APrimalDinoAIController*)", Attacker); }
	void AddAttackerCharacter(APrimalDinoCharacter* Character) { NativeCall<void, APrimalDinoCharacter*>(this, "AAIAttackCoordinator.AddAttackerCharacter(APrimalDinoCharacter*)", Character); }
	void AddAttacker(APrimalDinoAIController* Controller) { NativeCall<void, APrimalDinoAIController*>(this, "AAIAttackCoordinator.AddAttacker(APrimalDinoAIController*)", Controller); }
	void UpdateAttackGroup(TArray<APrimalDinoAIController*, TSizedDefaultAllocator<32> >& AttackGroup) { NativeCall<void, TArray<APrimalDinoAIController*, TSizedDefaultAllocator<32> >&>(this, "AAIAttackCoordinator.UpdateAttackGroup(TArray<APrimalDinoAIController*,TSizedDefaultAllocator<32>>&)", AttackGroup); }
	void ClearAllAttackers() { NativeCall<void>(this, "AAIAttackCoordinator.ClearAllAttackers()"); }
};