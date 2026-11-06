#pragma once


enum class ERigVMAnimEasingType:unsigned char
{
	Linear = 0x0,
	QuadraticEaseIn = 0x1,
	QuadraticEaseOut = 0x2,
	QuadraticEaseInOut = 0x3,
	CubicEaseIn = 0x4,
	CubicEaseOut = 0x5,
	CubicEaseInOut = 0x6,
	QuarticEaseIn = 0x7,
	QuarticEaseOut = 0x8,
	QuarticEaseInOut = 0x9,
	QuinticEaseIn = 0xA,
	QuinticEaseOut = 0xB,
	QuinticEaseInOut = 0xC,
	SineEaseIn = 0xD,
	SineEaseOut = 0xE,
	SineEaseInOut = 0xF,
	CircularEaseIn = 0x10,
	CircularEaseOut = 0x11,
	CircularEaseInOut = 0x12,
	ExponentialEaseIn = 0x13,
	ExponentialEaseOut = 0x14,
	ExponentialEaseInOut = 0x15,
	ElasticEaseIn = 0x16,
	ElasticEaseOut = 0x17,
	ElasticEaseInOut = 0x18,
	BackEaseIn = 0x19,
	BackEaseOut = 0x1A,
	BackEaseInOut = 0x1B,
	BounceEaseIn = 0x1C,
	BounceEaseOut = 0x1D,
	BounceEaseInOut = 0x1E
};