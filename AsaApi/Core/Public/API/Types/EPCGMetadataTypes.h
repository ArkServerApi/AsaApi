#pragma once


enum class EPCGMetadataTypes:unsigned char
{
	Float = 0x0,
	Double = 0x1,
	Integer32 = 0x2,
	Integer64 = 0x3,
	Vector2 = 0x4,
	Vector = 0x5,
	Vector4 = 0x6,
	Quaternion = 0x7,
	Transform = 0x8,
	String = 0x9,
	Boolean = 0xA,
	Rotator = 0xB,
	Name = 0xC,
	Count = 0xD,
	Unknown = 0xFF
};