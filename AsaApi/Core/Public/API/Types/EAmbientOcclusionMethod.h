#pragma once


enum class EAmbientOcclusionMethod:int
{
	Disabled = 0x0,
	SSAO = 0x1,
	SSGI = 0x2,
	RTAO = 0x3
};