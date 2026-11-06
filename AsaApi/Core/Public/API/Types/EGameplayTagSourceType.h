#pragma once


enum class EGameplayTagSourceType:unsigned char
{
	Native = 0x0,
	DefaultTagList = 0x1,
	TagList = 0x2,
	RestrictedTagList = 0x3,
	DataTable = 0x4,
	Invalid = 0x5
};