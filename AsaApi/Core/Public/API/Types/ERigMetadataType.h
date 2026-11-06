#pragma once


enum class ERigMetadataType:unsigned char
{
	Bool = 0x0,
	BoolArray = 0x1,
	Float = 0x2,
	FloatArray = 0x3,
	Int32 = 0x4,
	Int32Array = 0x5,
	Name = 0x6,
	NameArray = 0x7,
	Vector = 0x8,
	VectorArray = 0x9,
	Rotator = 0xA,
	RotatorArray = 0xB,
	Quat = 0xC,
	QuatArray = 0xD,
	Transform = 0xE,
	TransformArray = 0xF,
	LinearColor = 0x10,
	LinearColorArray = 0x11,
	RigElementKey = 0x12,
	RigElementKeyArray = 0x13,
	Invalid = 0x14
};