#pragma once


enum class EFloatToIntFunctionEnum:unsigned char
{
	Dataflow_FloatToInt_Function_Floor = 0x0,
	Dataflow_FloatToInt_Function_Ceil = 0x1,
	Dataflow_FloatToInt_Function_Round = 0x2,
	Dataflow_FloatToInt_Function_Truncate = 0x3,
	Dataflow_Max = 0x4
};