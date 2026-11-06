#pragma once


enum class EFloatArrayToIntArrayFunctionEnum:unsigned char
{
	Dataflow_FloatToInt_Function_Floor = 0x0,
	Dataflow_FloatToInt_Function_Ceil = 0x1,
	Dataflow_FloatToInt_Function_Round = 0x2,
	Dataflow_FloatToInt_Function_Truncate = 0x3,
	Dataflow_FloatToInt_NonZeroToIndex = 0x4,
	Dataflow_FloatToInt_ZeroToIndex = 0x5,
	Dataflow_Max = 0x6
};