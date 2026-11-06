#pragma once


enum class EDataflowFieldFalloffType:unsigned char
{
	Dataflow_FieldFalloffType_None = 0x0,
	Dataflow_FieldFalloffType_Linear = 0x1,
	Dataflow_FieldFalloffType_Inverse = 0x2,
	Dataflow_FieldFalloffType_Squared = 0x3,
	Dataflow_FieldFalloffType_Logarithmic = 0x4,
	Dataflow_Max = 0x5
};