#pragma once


enum class EHoudiniMultiParmModificationType:unsigned char
{
	None = 0x0,
	Inserted = 0x1,
	Removed = 0x2,
	Modified = 0x3
};