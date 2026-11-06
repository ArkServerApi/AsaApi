#pragma once


enum class ETransformSpaceMode:unsigned char
{
	LocalSpace = 0x0,
	GlobalSpace = 0x1,
	BaseSpace = 0x2,
	BaseJoint = 0x3,
	Max = 0x4
};