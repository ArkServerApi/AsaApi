#pragma once


enum class EConstraintTransformComponentFlags:unsigned char
{
	None = 0x0,
	ChildPosition = 0x1,
	ChildRotation = 0x2,
	ParentPosition = 0x4,
	ParentRotation = 0x8,
	AllChild = 0x3,
	AllParent = 0xC,
	AllPosition = 0x5,
	AllRotation = 0xA,
	All = 0xF
};