#pragma once


enum class EMaterialGetParameterValueFlags:unsigned int
{
	None = 0x0,
	CheckNonOverrides = 0x1,
	CheckInstanceOverrides = 0x2,
	CheckAll = 0x3,
	Default = 0x3
};