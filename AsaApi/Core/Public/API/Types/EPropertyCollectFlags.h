#pragma once


enum class EPropertyCollectFlags:unsigned int
{
	None = 0x0,
	SkipTransient = 0x1,
	NeedsReferencer = 0x2,
	CallStructARO = 0x4,
	OnlyObjectProperty = 0x8
};