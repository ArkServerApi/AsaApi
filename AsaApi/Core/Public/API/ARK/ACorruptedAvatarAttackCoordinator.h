#pragma once
#include "BulkForward.h"
#include "AAIAttackCoordinator.h"

struct ACorruptedAvatarAttackCoordinator : public AAIAttackCoordinator
{
public:
	ACorruptedAvatarAttackCoordinator() = delete;
	~ACorruptedAvatarAttackCoordinator() = delete;
	ACorruptedAvatarAttackCoordinator(const ACorruptedAvatarAttackCoordinator&) = delete;
	ACorruptedAvatarAttackCoordinator& operator=(const ACorruptedAvatarAttackCoordinator&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("ACorruptedAvatarAttackCoordinator"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("ACorruptedAvatarAttackCoordinator"); }

	float& MinAttackPriorityHeldTimeField() { return *GetNativePointerField<float*>(this, "ACorruptedAvatarAttackCoordinator.MinAttackPriorityHeldTime"); }
	float CalculateAttackerPriorityWeight_Implementation(APrimalDinoAIController* Attacker) { return NativeCall<float, APrimalDinoAIController*>(this, "ACorruptedAvatarAttackCoordinator.CalculateAttackerPriorityWeight_Implementation(APrimalDinoAIController*)", Attacker); }
};
