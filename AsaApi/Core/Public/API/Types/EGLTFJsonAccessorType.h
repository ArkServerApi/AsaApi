#pragma once


enum class EGLTFJsonAccessorType:int
{
	None = 0xFF,
	Scalar = 0x0,
	Vec2 = 0x1,
	Vec3 = 0x2,
	Vec4 = 0x3,
	Mat2 = 0x4,
	Mat3 = 0x5,
	Mat4 = 0x6
};