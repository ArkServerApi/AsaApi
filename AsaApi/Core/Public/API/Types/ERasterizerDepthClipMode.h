#pragma once


enum class ERasterizerDepthClipMode:unsigned char
{
	DepthClip = 0x0,
	DepthClamp = 0x1,
	Num = 0x2,
	NumBits = 0x1
};