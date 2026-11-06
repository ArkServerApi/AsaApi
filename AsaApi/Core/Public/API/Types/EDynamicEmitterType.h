#pragma once


enum class EDynamicEmitterType:int
{
	DET_Unknown = 0x0,
	DET_Sprite = 0x1,
	DET_Mesh = 0x2,
	DET_Beam2 = 0x3,
	DET_Ribbon = 0x4,
	DET_AnimTrail = 0x5,
	DET_Custom = 0x6
};