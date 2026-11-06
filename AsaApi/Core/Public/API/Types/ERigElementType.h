#pragma once


enum class ERigElementType:unsigned char
{
	None = 0x0,
	Bone = 0x1,
	Null = 0x2,
	Space = 0x2,
	Control = 0x4,
	Curve = 0x8,
	RigidBody = 0x10,
	Reference = 0x20,
	Last = 0x40,
	All = 0x3F,
	ToResetAfterConstructionEvent = 0xD
};