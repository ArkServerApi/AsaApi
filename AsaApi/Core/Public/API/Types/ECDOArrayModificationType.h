#pragma once


enum class ECDOArrayModificationType:unsigned char
{
	MODIFY = 0x0,
	ADD = 0x1,
	REMOVE = 0x2,
	REPLACE_TARRAY = 0x3
};