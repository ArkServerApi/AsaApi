#pragma once


enum class EFieldObjectType:int
{
	Field_Object_Rigid = 0x0,
	Field_Object_Cloth = 0x1,
	Field_Object_Destruction = 0x2,
	Field_Object_Character = 0x3,
	Field_Object_All = 0x4,
	Field_Object_Max = 0x5
};