#pragma once


enum class OodleLZ_Verbosity:int
{
	OodleLZ_Verbosity_None = 0x0,
	OodleLZ_Verbosity_Minimal = 0x1,
	OodleLZ_Verbosity_Some = 0x2,
	OodleLZ_Verbosity_Lots = 0x3,
	OodleLZ_Verbosity_Force32 = 0x40000000
};