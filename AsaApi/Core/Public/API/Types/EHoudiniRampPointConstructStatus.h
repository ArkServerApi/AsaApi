#pragma once


enum class EHoudiniRampPointConstructStatus:unsigned char
{
	None = 0x0,
	INITIALIZED = 0x1,
	POSITION_INSERTED = 0x2,
	VALUE_INSERTED = 0x3,
	INTERPTYPE_INSERTED = 0x4
};