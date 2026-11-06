#pragma once


enum class EPDGLinkState:unsigned char
{
	Inactive = 0x0,
	Linking = 0x1,
	Linked = 0x2,
	Error_Not_Linked = 0x3
};