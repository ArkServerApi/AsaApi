#pragma once


enum class ELevelCollectionType:unsigned char
{
	DynamicSourceLevels = 0x0,
	DynamicDuplicatedLevels = 0x1,
	StaticLevels = 0x2,
	MAX = 0x3
};