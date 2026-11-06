#pragma once


enum class ESoundWaveLoadingBehavior:unsigned char
{
	Inherited = 0x0,
	RetainOnLoad = 0x1,
	PrimeOnLoad = 0x2,
	LoadOnDemand = 0x3,
	ForceInline = 0x4,
	Uninitialized = 0xFF
};