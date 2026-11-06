#pragma once


enum class EBlueprintTextLiteralType:unsigned char
{
	Empty = 0x0,
	LocalizedText = 0x1,
	InvariantText = 0x2,
	LiteralString = 0x3,
	StringTableEntry = 0x4
};