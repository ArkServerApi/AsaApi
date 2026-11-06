#pragma once


enum class EPropertyBagResult:unsigned char
{
	Success = 0x0,
	TypeMismatch = 0x1,
	OutOfBounds = 0x2,
	PropertyNotFound = 0x3
};