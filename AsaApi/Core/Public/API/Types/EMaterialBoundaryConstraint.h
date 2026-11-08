#pragma once


enum class EMaterialBoundaryConstraint:unsigned char
{
	Fixed = 0x7,
	Refine = 0x5,
	Free = 0x1,
	Ignore = 0x0
};