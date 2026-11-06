#pragma once


enum class ESpawnActorScaleMethod:unsigned char
{
	OverrideRootScale = 0x0,
	MultiplyWithRoot = 0x1,
	SelectDefaultAtRuntime = 0x2
};