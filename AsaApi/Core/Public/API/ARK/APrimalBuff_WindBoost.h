#pragma once
#include "GameplayForward.h"
#include "APrimalBuff.h"

struct APrimalBuff_WindBoost : APrimalBuff
{
public:
	APrimalBuff_WindBoost() = delete;
	~APrimalBuff_WindBoost() = delete;
	APrimalBuff_WindBoost(const APrimalBuff_WindBoost&) = delete;
	APrimalBuff_WindBoost& operator=(const APrimalBuff_WindBoost&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("APrimalBuff_WindBoost"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("APrimalBuff_WindBoost"); }



	void SetupForInstigator() { NativeCall<void>(this, "APrimalBuff_WindBoost.SetupForInstigator()"); }
};
