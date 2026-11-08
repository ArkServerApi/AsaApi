#pragma once


enum class ERigVMPinDirection:unsigned char
{
	Input = 0x0,
	Output = 0x1,
	IO = 0x2,
	Visible = 0x3,
	Hidden = 0x4,
	Invalid = 0x5
};