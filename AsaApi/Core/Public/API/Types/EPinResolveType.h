#pragma once


enum class EPinResolveType:unsigned char
{
	OwningNode = 0x0,
	LinkedTo = 0x1,
	SubPins = 0x2,
	ParentPin = 0x3,
	ReferencePassThroughConnection = 0x4
};