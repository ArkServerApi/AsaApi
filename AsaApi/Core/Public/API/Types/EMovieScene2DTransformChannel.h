#pragma once


enum class EMovieScene2DTransformChannel:unsigned int
{
	None = 0x0,
	TranslationX = 0x1,
	TranslationY = 0x2,
	Translation = 0x3,
	Rotation = 0x4,
	ScaleX = 0x8,
	ScaleY = 0x10,
	Scale = 0x18,
	ShearX = 0x20,
	ShearY = 0x40,
	Shear = 0x60,
	AllTransform = 0x7F
};