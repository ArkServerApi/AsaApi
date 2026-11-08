#pragma once


enum class ECameraShakeSourceShakeStatus:unsigned char
{
	NotStarted = 0x0,
	Started = 0x1,
	BlendingOut = 0x2
};