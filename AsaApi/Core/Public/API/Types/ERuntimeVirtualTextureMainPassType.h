#pragma once


enum class ERuntimeVirtualTextureMainPassType:unsigned char
{
	Never = 0x0,
	Exclusive = 0x1,
	Always = 0x2
};