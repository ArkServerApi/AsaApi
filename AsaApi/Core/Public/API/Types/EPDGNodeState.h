#pragma once


enum class EPDGNodeState:unsigned char
{
	None = 0x0,
	Dirtied = 0x1,
	Dirtying = 0x2,
	Cooking = 0x3,
	Cook_Complete = 0x4,
	Cook_Failed = 0x5
};