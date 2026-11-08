#pragma once


enum class ETickableTickType:unsigned char
{
	Conditional = 0x0,
	Always = 0x1,
	Never = 0x2
};