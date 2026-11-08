#pragma once


enum class EPCGPointFilterConstantType:unsigned char
{
	Integer64 = 0x0,
	Float = 0x1,
	Vector = 0x2,
	Vector4 = 0x3,
	String = 0x4,
	Unknown = 0x5
};