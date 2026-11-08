#pragma once


enum class ESoftObjectPathSerializeType:unsigned char
{
	NeverSerialize = 0x0,
	SkipSerializeIfArchiveHasSize = 0x1,
	AlwaysSerialize = 0x2
};