#pragma once


enum class TextureAddress:int
{
	TA_Wrap = 0x0,
	TA_Clamp = 0x1,
	TA_Mirror = 0x2,
	TA_MAX = 0x3
};