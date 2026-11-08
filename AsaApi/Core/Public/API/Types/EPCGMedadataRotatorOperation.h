#pragma once


enum class EPCGMedadataRotatorOperation:unsigned short
{
	RotatorOp = 0x0,
	Combine = 0x1,
	Invert = 0x2,
	Lerp = 0x3,
	TransformOp = 0x64,
	TransformRotation = 0x65,
	InverseTransformRotation = 0x66
};