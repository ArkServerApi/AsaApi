#pragma once


enum class EGameplayDebuggerCategoryState:unsigned char
{
	EnabledInGameAndSimulate = 0x0,
	EnabledInGame = 0x1,
	EnabledInSimulate = 0x2,
	Disabled = 0x3,
	Hidden = 0x4
};