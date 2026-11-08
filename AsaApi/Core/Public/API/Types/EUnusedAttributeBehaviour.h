#pragma once


enum class EUnusedAttributeBehaviour:unsigned char
{
	Copy = 0x0,
	Zero = 0x1,
	None = 0x2,
	MarkInvalid = 0x3,
	PassThrough = 0x4
};