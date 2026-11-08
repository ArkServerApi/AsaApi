#pragma once


enum class EQueryFlags:unsigned short
{
	None = 0x0,
	PreFilter = 0x4,
	PostFilter = 0x8,
	AnyHit = 0x10,
	SkipNarrowPhase = 0x20
};