#pragma once


enum class EStructSerializerBackendFlags:int
{
	None = 0x0,
	WriteTextAsComplexString = 0x1,
	WriteByteArrayAsByteStream = 0x2,
	WriteCborStandardEndianness = 0x4,
	WriteLWCTypesAsFloats = 0x8,
	Legacy = 0x0,
	LegacyUE4 = 0xB,
	Default = 0x3
};