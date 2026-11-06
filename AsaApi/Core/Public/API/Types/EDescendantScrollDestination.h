#pragma once


enum class EDescendantScrollDestination:unsigned char
{
	IntoView = 0x0,
	TopOrLeft = 0x1,
	Center = 0x2,
	BottomOrRight = 0x3
};