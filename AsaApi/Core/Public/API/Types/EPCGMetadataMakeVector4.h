#pragma once


enum class EPCGMetadataMakeVector4:unsigned char
{
	FourValues = 0x0,
	Vector2AndTwoValues = 0x1,
	TwoVector2 = 0x2,
	Vector3AndValue = 0x3
};