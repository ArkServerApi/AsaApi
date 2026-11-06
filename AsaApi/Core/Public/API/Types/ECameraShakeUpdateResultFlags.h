#pragma once


enum class ECameraShakeUpdateResultFlags:unsigned char
{
	ApplyAsAbsolute = 0x1,
	SkipAutoScale = 0x2,
	SkipAutoPlaySpace = 0x4,
	Default = 0x0
};