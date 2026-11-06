#pragma once


enum class EGenerateNavDataTimeSlicedState:unsigned char
{
	Invalid = 0x0,
	Init = 0x1,
	GenerateLayers = 0x2
};