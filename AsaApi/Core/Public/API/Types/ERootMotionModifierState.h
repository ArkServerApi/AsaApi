#pragma once


enum class ERootMotionModifierState:unsigned char
{
	Waiting = 0x0,
	Active = 0x1,
	MarkedForRemoval = 0x2,
	Disabled = 0x3
};