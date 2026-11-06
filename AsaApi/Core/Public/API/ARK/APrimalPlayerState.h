#pragma once
#include "GameplayForward.h"
#include "APlayerState.h"

struct APrimalPlayerState : APlayerState
{
public:
	APrimalPlayerState() = delete;
	~APrimalPlayerState() = delete;
	APrimalPlayerState(const APrimalPlayerState&) = delete;
	APrimalPlayerState& operator=(const APrimalPlayerState&) = delete;
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("APrimalPlayerState"); }



	bool IsLocallyControlledByPlayer() { return NativeCall<bool>(this, "APrimalPlayerState.IsLocallyControlledByPlayer()"); }
	static UClass* StaticClass() { return AsaApi::ResolveClass("APrimalPlayerState"); }
};
