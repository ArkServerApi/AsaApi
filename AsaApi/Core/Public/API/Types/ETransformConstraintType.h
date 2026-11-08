#pragma once


enum class ETransformConstraintType:unsigned char
{
	Translation = 0x0,
	Rotation = 0x1,
	Scale = 0x2,
	Parent = 0x3,
	LookAt = 0x4
};