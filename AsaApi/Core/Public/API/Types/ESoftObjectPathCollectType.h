#pragma once


enum class ESoftObjectPathCollectType:unsigned char
{
	NonPackage = 0x0,
	NeverCollect = 0x1,
	EditorOnlyCollect = 0x2,
	AlwaysCollect = 0x3
};