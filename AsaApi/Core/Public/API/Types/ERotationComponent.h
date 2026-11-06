#pragma once


enum class ERotationComponent:unsigned char
{
	EulerX = 0x0,
	EulerY = 0x1,
	EulerZ = 0x2,
	QuaternionAngle = 0x3,
	SwingAngle = 0x4,
	TwistAngle = 0x5
};