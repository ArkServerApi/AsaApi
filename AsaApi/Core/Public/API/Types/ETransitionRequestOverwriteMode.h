#pragma once


enum class ETransitionRequestOverwriteMode:unsigned char
{
	Append = 0x0,
	Ignore = 0x1,
	Overwrite = 0x2
};