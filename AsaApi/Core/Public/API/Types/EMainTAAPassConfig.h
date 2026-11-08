#pragma once


enum class EMainTAAPassConfig:unsigned char
{
	Disabled = 0x0,
	TAA = 0x1,
	TSR = 0x2,
	ThirdParty = 0x3
};