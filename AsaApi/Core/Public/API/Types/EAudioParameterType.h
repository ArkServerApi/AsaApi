#pragma once


enum class EAudioParameterType:unsigned char
{
	None = 0x0,
	Boolean = 0x1,
	Integer = 0x2,
	Float = 0x3,
	String = 0x4,
	Object = 0x5,
	NoneArray = 0x6,
	BooleanArray = 0x7,
	IntegerArray = 0x8,
	FloatArray = 0x9,
	StringArray = 0xA,
	ObjectArray = 0xB,
	Trigger = 0xC,
	COUNT = 0xD
};