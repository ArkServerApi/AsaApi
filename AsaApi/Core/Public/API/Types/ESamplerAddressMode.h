#pragma once


enum class ESamplerAddressMode:int
{
	AM_Wrap = 0x0,
	AM_Clamp = 0x1,
	AM_Mirror = 0x2,
	AM_Border = 0x3,
	ESamplerAddressMode_Num = 0x4,
	ESamplerAddressMode_NumBits = 0x2
};