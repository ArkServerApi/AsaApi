#pragma once


enum class EDataValidationResult:unsigned char
{
	Invalid = 0x0,
	Valid = 0x1,
	NotValidated = 0x2
};