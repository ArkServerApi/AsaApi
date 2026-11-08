#pragma once


enum class EFieldPhysicsDefaultFields:int
{
	Field_RadialIntMask = 0x0,
	Field_RadialFalloff = 0x1,
	Field_UniformVector = 0x2,
	Field_RadialVector = 0x3,
	Field_RadialVectorFalloff = 0x4,
	Field_EFieldPhysicsDefaultFields_Max = 0x5
};