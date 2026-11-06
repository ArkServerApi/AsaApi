#pragma once


enum class EInertializationState:unsigned char
{
	Inactive = 0x0,
	Pending = 0x1,
	Active = 0x2
};