#pragma once


enum class ESetOperationEnum:unsigned char
{
	Dataflow_SetOperation_AND = 0x0,
	Dataflow_SetOperation_OR = 0x1,
	Dataflow_SetOperation_XOR = 0x2,
	Dataflow_Max = 0x3
};