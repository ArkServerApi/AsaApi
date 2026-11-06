#pragma once


enum class ERPCBlockState:unsigned char
{
	Unchecked = 0x0,
	OnAllowList = 0x1,
	NotBlocked = 0x2,
	Blocked = 0x3
};