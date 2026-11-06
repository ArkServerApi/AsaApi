#pragma once


enum class EMeshVertexSculptBrushType:unsigned char
{
	Move = 0x0,
	PullKelvin = 0x1,
	PullSharpKelvin = 0x2,
	Smooth = 0x3,
	SmoothFill = 0x4,
	Offset = 0x5,
	SculptView = 0x6,
	SculptMax = 0x7,
	Inflate = 0x8,
	ScaleKelvin = 0x9,
	Pinch = 0xA,
	TwistKelvin = 0xB,
	Flatten = 0xC,
	Plane = 0xD,
	PlaneViewAligned = 0xE,
	FixedPlane = 0xF,
	LastValue = 0x10
};