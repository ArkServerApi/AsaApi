#pragma once


enum class ESamplePhase:int
{
	Monlithic = 0x0,
	Init = 0x1,
	Accum = 0x2,
	Resolve = 0x3
};