#pragma once


enum class EFieldFilterType:int
{
	Field_Filter_Dynamic = 0x0,
	Field_Filter_Kinematic = 0x1,
	Field_Filter_Static = 0x2,
	Field_Filter_All = 0x3,
	Field_Filter_Sleeping = 0x4,
	Field_Filter_Disabled = 0x5,
	Field_Filter_Max = 0x6
};