#pragma once


enum class EBTDecoratorAbortRequest:unsigned char
{
	ConditionResultChanged = 0x0,
	ConditionPassing = 0x1
};