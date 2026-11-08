#pragma once


enum class EDataflowFloatFieldOperationType:unsigned char
{
	Dataflow_FloatFieldOperationType_Multiply = 0x0,
	Dataflow_FloatFieldFalloffType_Divide = 0x1,
	Dataflow_FloatFieldFalloffType_Add = 0x2,
	Dataflow_FloatFieldFalloffType_Substract = 0x3,
	Dataflow_FloatFieldFalloffType_Min = 0x4,
	Dataflow_FloatFieldFalloffType_Max = 0x5,
	Dataflow_Max = 0x6
};