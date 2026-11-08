#pragma once


enum class EShadowMapInteractionType:int
{
	SMIT_None = 0x0,
	SMIT_GlobalVolume = 0x1,
	SMIT_Texture = 0x2,
	SMIT_NumBits = 0x3
};