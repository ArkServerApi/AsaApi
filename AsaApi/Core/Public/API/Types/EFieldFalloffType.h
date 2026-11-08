#pragma once


enum class EFieldFalloffType:int
{
	Field_FallOff_None = 0x0,
	Field_Falloff_Linear = 0x1,
	Field_Falloff_Inverse = 0x2,
	Field_Falloff_Squared = 0x3,
	Field_Falloff_Logarithmic = 0x4,
	Field_Falloff_Max = 0x5
};