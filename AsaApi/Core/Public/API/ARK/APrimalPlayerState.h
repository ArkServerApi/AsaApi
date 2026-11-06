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
	static UClass* GetPrivateStaticClass() { return StaticClass(); }



	bool IsLocallyControlledByPlayer() { return NativeCall<bool>(this, "APrimalPlayerState.IsLocallyControlledByPlayer()"); }
	static UClass* StaticClass() { return NativeCall<UClass*>(nullptr, "APrimalPlayerState.StaticClass()"); }
};
