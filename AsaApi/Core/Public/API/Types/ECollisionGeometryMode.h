#pragma once


enum class ECollisionGeometryMode:int
{
	Default = 0x0,
	SimpleAndComplex = 0x1,
	UseSimpleAsComplex = 0x2,
	UseComplexAsSimple = 0x3
};