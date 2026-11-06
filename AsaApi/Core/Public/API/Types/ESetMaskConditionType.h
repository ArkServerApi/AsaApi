#pragma once


enum class ESetMaskConditionType:int
{
	Field_Set_Always = 0x0,
	Field_Set_IFF_NOT_Interior = 0x1,
	Field_Set_IFF_NOT_Exterior = 0x2,
	Field_MaskCondition_Max = 0x3
};