#pragma once


enum class ESocketBSDParam:unsigned char
{
	CanRead = 0x0,
	CanWrite = 0x1,
	HasError = 0x2
};