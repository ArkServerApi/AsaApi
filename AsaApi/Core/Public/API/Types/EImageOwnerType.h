#pragma once


enum class EImageOwnerType:unsigned char
{
	None = 0x0,
	LocalOwner = 0x1,
	ExternalOwner = 0x2,
	Aliased = 0x3
};