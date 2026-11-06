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
	static UClass* StaticClass() = delete;
	static UClass* GetPrivateStaticClass() = delete;



	void SetupForInstigator() { NativeCall<void>(this, "APrimalBuff_WindBoost.SetupForInstigator()"); }
};
