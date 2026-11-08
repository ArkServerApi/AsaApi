#pragma once


enum class ECastToken:unsigned char
{
	CST_ObjectToInterface = 0x0,
	CST_ObjectToBool = 0x1,
	CST_InterfaceToBool = 0x2,
	CST_DoubleToFloat = 0x3,
	CST_FloatToDouble = 0x4,
	CST_Max = 0xFF
};