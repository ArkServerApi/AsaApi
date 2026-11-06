#pragma once


enum class EUnrealObjectInputNodeType:unsigned char
{
	Invalid = 0x0,
	Container = 0x1,
	Reference = 0x2,
	Leaf = 0x3
};