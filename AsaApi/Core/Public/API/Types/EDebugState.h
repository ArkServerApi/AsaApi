#pragma once


enum class EDebugState:int
{
	DEBUGSTATE_None = 0x0,
	DEBUGSTATE_IsolateDryAudio = 0x1,
	DEBUGSTATE_IsolateReverb = 0x2,
	DEBUGSTATE_TestLPF = 0x3,
	DEBUGSTATE_TestHPF = 0x4,
	DEBUGSTATE_TestLFEBleed = 0x5,
	DEBUGSTATE_DisableLPF = 0x6,
	DEBUGSTATE_DisableHPF = 0x7,
	DEBUGSTATE_DisableRadio = 0x8,
	DEBUGSTATE_MAX = 0x9
};