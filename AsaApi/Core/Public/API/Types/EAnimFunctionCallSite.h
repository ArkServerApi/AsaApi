#pragma once


enum class EAnimFunctionCallSite:int
{
	OnInitialize = 0x0,
	OnUpdate = 0x1,
	OnBecomeRelevant = 0x2,
	OnEvaluate = 0x3,
	OnInitializePostRecursion = 0x4,
	OnUpdatePostRecursion = 0x5,
	OnBecomeRelevantPostRecursion = 0x6,
	OnEvaluatePostRecursion = 0x7,
	OnStartedBlendingOut = 0x8,
	OnStartedBlendingIn = 0x9,
	OnFinishedBlendingOut = 0xA,
	OnFinishedBlendingIn = 0xB
};