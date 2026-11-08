#pragma once


enum class ERenderResourceState:unsigned char
{
	Default = 0x0,
	BatchReleased = 0x1,
	Deleted = 0x2
};