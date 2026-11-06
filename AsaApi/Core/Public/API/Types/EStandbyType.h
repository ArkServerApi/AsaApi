#pragma once


enum class EStandbyType:int
{
	STDBY_Rx = 0x0,
	STDBY_Tx = 0x1,
	STDBY_BadPing = 0x2,
	STDBY_MAX = 0x3
};