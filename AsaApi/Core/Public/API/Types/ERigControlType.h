#pragma once


enum class ERigControlType:unsigned char
{
	Bool = 0x0,
	Float = 0x1,
	Integer = 0x2,
	Vector2D = 0x3,
	Position = 0x4,
	Scale = 0x5,
	Rotator = 0x6,
	Transform = 0x7,
	TransformNoScale = 0x8,
	EulerTransform = 0x9
};