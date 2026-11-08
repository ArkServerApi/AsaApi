#pragma once


namespace EComponentType
{
	enum Type:int
	{
		None = 0x0,
		TranslationX = 0x1,
		TranslationY = 0x2,
		TranslationZ = 0x3,
		RotationX = 0x4,
		RotationY = 0x5,
		RotationZ = 0x6,
		Scale = 0x7,
		ScaleX = 0x8,
		ScaleY = 0x9,
		ScaleZ = 0xA
	};
}