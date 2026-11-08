#pragma once


enum class EConcurrencyMode:unsigned char
{
	Group = 0x0,
	Owner = 0x1,
	OwnerPerSound = 0x2,
	Sound = 0x3
};