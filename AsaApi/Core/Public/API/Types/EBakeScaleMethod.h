#pragma once


enum class EBakeScaleMethod:unsigned char
{
	BakeFullScale = 0x0,
	BakeNonuniformScale = 0x1,
	DoNotBakeScale = 0x2
};