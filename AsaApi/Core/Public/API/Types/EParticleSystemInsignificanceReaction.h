#pragma once


enum class EParticleSystemInsignificanceReaction:unsigned char
{
	Auto = 0x0,
	Complete = 0x1,
	DisableTick = 0x2,
	DisableTickAndKill = 0x3,
	Num = 0x4
};