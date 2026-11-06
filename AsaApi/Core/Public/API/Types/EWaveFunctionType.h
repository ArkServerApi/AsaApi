#pragma once


enum class EWaveFunctionType:int
{
	Field_Wave_Cosine = 0x0,
	Field_Wave_Gaussian = 0x1,
	Field_Wave_Falloff = 0x2,
	Field_Wave_Decay = 0x3,
	Field_Wave_Max = 0x4
};