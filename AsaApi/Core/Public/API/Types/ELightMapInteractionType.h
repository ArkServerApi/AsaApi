#pragma once


enum class ELightMapInteractionType:int
{
	LMIT_None = 0x0,
	LMIT_GlobalVolume = 0x1,
	LMIT_Texture = 0x2,
	LMIT_NumBits = 0x3
};