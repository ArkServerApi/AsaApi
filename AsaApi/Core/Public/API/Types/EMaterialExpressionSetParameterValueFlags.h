#pragma once


enum class EMaterialExpressionSetParameterValueFlags:unsigned int
{
	None = 0x0,
	SendPostEditChangeProperty = 0x1,
	NoUpdateExpressionGuid = 0x2,
	AssignGroupAndSortPriority = 0x4
};