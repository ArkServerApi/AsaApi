#pragma once


enum class TextureFilter:int
{
	TF_Nearest = 0x0,
	TF_Bilinear = 0x1,
	TF_Trilinear = 0x2,
	TF_Default = 0x3,
	TF_MAX = 0x4
};