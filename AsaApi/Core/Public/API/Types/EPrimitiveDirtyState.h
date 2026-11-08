#pragma once


enum class EPrimitiveDirtyState:unsigned char
{
	None = 0x0,
	ChangedId = 0x1,
	ChangedTransform = 0x2,
	ChangedStaticLighting = 0x4,
	ChangedOther = 0x8,
	Added = 0x10,
	Removed = 0x20,
	ChangedAll = 0xF,
	AddedMask = 0x1F
};