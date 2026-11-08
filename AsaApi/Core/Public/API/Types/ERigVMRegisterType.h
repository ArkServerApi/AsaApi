#pragma once


enum class ERigVMRegisterType:unsigned char
{
	Plain = 0x0,
	String = 0x1,
	Name = 0x2,
	Struct = 0x3,
	Invalid = 0x4
};