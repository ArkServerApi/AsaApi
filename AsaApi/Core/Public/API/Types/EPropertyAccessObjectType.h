#pragma once


enum class EPropertyAccessObjectType:unsigned char
{
	None = 0x0,
	Object = 0x1,
	WeakObject = 0x2,
	SoftObject = 0x3
};