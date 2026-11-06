#pragma once


enum class EChaosSolverTickMode:unsigned char
{
	Fixed = 0x0,
	Variable = 0x1,
	VariableCapped = 0x2,
	VariableCappedWithTarget = 0x3
};