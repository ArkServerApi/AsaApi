#pragma once


enum class EGLTFJsonTargetPath:int
{
	None = 0xFF,
	Translation = 0x0,
	Rotation = 0x1,
	Scale = 0x2,
	Weights = 0x3
};