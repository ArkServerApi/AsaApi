#pragma once


enum class ETextFilterExpressionType:unsigned char
{
	Invalid = 0x0,
	Empty = 0x1,
	BasicString = 0x2,
	Complex = 0x3
};