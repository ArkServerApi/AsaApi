#pragma once


enum class USetSpanCondition:int
{
	USET_SPAN_NOT_CONTAINED = 0x0,
	USET_SPAN_CONTAINED = 0x1,
	USET_SPAN_SIMPLE = 0x2,
	USET_SPAN_CONDITION_COUNT = 0x3
};