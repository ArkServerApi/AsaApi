#pragma once


enum class Beam2SourceTargetMethod:int
{
	PEB2STM_Default = 0x0,
	PEB2STM_UserSet = 0x1,
	PEB2STM_Emitter = 0x2,
	PEB2STM_Particle = 0x3,
	PEB2STM_Actor = 0x4,
	PEB2STM_MAX = 0x5
};