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
	static UClass* StaticClass() = delete;
	static UClass* GetPrivateStaticClass() = delete;

	float& MinAttackPriorityHeldTimeField() { return *GetNativePointerField<float*>(this, "ACorruptedAvatarAttackCoordinator.MinAttackPriorityHeldTime"); }
	float CalculateAttackerPriorityWeight_Implementation(APrimalDinoAIController* Attacker) { return NativeCall<float, APrimalDinoAIController*>(this, "ACorruptedAvatarAttackCoordinator.CalculateAttackerPriorityWeight_Implementation(APrimalDinoAIController*)", Attacker); }
};
