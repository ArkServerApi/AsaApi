#pragma once


enum class ECborCode:unsigned char
{
	None = 0x0,
	Uint = 0x0,
	Int = 0x20,
	ByteString = 0x40,
	TextString = 0x60,
	Array = 0x80,
	Map = 0xA0,
	Tag = 0xC0,
	Prim = 0xE0,
	Value_1Byte = 0x18,
	Value_2Bytes = 0x19,
	Value_4Bytes = 0x1A,
	Value_8Bytes = 0x1B,
	Unused_28 = 0x1C,
	Unused_29 = 0x1D,
	Unused_30 = 0x1E,
	Indefinite = 0x1F,
	False = 0x14,
	True = 0x15,
	Null = 0x16,
	Undefined = 0x17,
	Break = 0xFF,
	Dummy = 0x1C,
	StreamEnd = 0x3C,
	ErrorReservedItem = 0x1D,
	ErrorStreamFailure = 0x1E,
	ErrorBreak = 0x3D,
	ErrorMapContainer = 0x3E,
	ErrorNoHalfFloat = 0x5D,
	ErrorContext = 0x5E,
	ErrorStringNesting = 0x7D
};