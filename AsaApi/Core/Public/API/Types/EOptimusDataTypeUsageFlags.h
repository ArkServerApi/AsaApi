#pragma once


enum class EOptimusDataTypeUsageFlags:unsigned char
{
	None = 0x0,
	Resource = 0x1,
	Variable = 0x2,
	AnimAttributes = 0x4
};