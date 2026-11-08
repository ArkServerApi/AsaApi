#pragma once


enum class EGenerateTileTimeSlicedState:unsigned char
{
	Invalid = 0x0,
	GenerateCompressedLayers = 0x1,
	GenerateNavigationData = 0x2
};