#pragma once


enum class EIllegalRefReason:unsigned char
{
	None = 0x0,
	ReferenceToOptional = 0x1,
	ReferenceFromOptionalToMissingGameExport = 0x2,
	UnsaveableClass = 0x3,
	UnsaveableOuter = 0x4
};