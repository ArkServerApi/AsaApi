#pragma once


enum class ERepLayoutCmdFlags:unsigned char
{
	None = 0x0,
	IsSharedSerialization = 0x1,
	IsStruct = 0x2,
	IsEmptyArrayStruct = 0x4
};