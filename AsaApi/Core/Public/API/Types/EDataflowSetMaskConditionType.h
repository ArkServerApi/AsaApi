#pragma once


enum class EDataflowSetMaskConditionType:unsigned char
{
	Dataflow_SetMaskConditionType_Always = 0x0,
	Dataflow_SetMaskConditionType_IFF_NOT_Interior = 0x1,
	Dataflow_SetMaskConditionType_IFF_NOT_Exterior = 0x2,
	Dataflow_Max = 0x3
};