#pragma once


enum class EMeshBoundaryConstraint:unsigned char
{
	Fixed = 0x7,
	Refine = 0x5,
	Free = 0x1
};