#pragma once


enum class EFastArraySerializerDeltaFlags:unsigned char
{
	None = 0x0,
	HasBeenSerialized = 0x1,
	HasDeltaBeenRequested = 0x2,
	IsUsingDeltaSerialization = 0x4
};