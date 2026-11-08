#pragma once


enum class EDiffuseIndirectMethod:int
{
	Disabled = 0x0,
	SSGI = 0x1,
	RTGI = 0x2,
	Lumen = 0x3,
	Plugin = 0x4
};