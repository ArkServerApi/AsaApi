#pragma once
#include "BulkForward.h"
#include "AShooterGameState.h"

struct ABattleGameState : public AShooterGameState
{
public:
	ABattleGameState() = delete;
	~ABattleGameState() = delete;
	ABattleGameState(const ABattleGameState&) = delete;
	ABattleGameState& operator=(const ABattleGameState&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("ABattleGameState"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("ABattleGameState"); }

};
