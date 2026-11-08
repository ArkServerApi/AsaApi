#pragma once


enum class EDynamicMeshSculptBrushType:unsigned char
{
	Move = 0x0,
	PullKelvin = 0x1,
	PullSharpKelvin = 0x2,
	Smooth = 0x3,
	Offset = 0x4,
	SculptView = 0x5,
	SculptMax = 0x6,
	Inflate = 0x7,
	ScaleKelvin = 0x8,
	Pinch = 0x9,
	TwistKelvin = 0xA,
	Flatten = 0xB,
	Plane = 0xC,
	PlaneViewAligned = 0xD,
	FixedPlane = 0xE,
	Resample = 0xF,
	LastValue = 0x10
};