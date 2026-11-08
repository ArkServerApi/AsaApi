#pragma once


enum class ERenderFocusRule:unsigned char
{
	Always = 0x0,
	NonPointer = 0x1,
	NavigationOnly = 0x2,
	Never = 0x3
};