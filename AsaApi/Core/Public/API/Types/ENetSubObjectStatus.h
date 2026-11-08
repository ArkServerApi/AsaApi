#pragma once


enum class ENetSubObjectStatus:unsigned char
{
	Active = 0x0,
	TearOff = 0x1,
	Delete = 0x2
};