#pragma once


enum class EPCGMedadataVectorOperation:unsigned short
{
	VectorOp = 0x0,
	Cross = 0x1,
	Dot = 0x2,
	Distance = 0x3,
	Normalize = 0x4,
	Length = 0x5,
	RotateAroundAxis = 0x6,
	TransformOp = 0x64,
	TransformDirection = 0x65,
	TransformLocation = 0x66,
	InverseTransformDirection = 0x67,
	InverseTransformLocation = 0x68
};