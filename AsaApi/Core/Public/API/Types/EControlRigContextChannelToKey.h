#pragma once


enum class EControlRigContextChannelToKey:unsigned int
{
	None = 0x0,
	TranslationX = 0x1,
	TranslationY = 0x2,
	TranslationZ = 0x4,
	Translation = 0x7,
	RotationX = 0x8,
	RotationY = 0x10,
	RotationZ = 0x20,
	Rotation = 0x38,
	ScaleX = 0x40,
	ScaleY = 0x80,
	ScaleZ = 0x100,
	Scale = 0x1C0,
	AllTransform = 0x1FF
};