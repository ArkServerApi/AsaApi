#pragma once


enum class ECompareOperationEnum:unsigned char
{
	Dataflow_Compare_Equal = 0x0,
	Dataflow_Compare_Smaller = 0x1,
	Dataflow_Compare_SmallerOrEqual = 0x2,
	Dataflow_Compare_Greater = 0x3,
	Dataflow_Compare_GreaterOrEqual = 0x4,
	Dataflow_Max = 0x5
};