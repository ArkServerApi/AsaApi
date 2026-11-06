#pragma once


enum class ECFCoreModStatus:unsigned char
{
	None = 0x0,
	New = 0x1,
	ChangesRequired = 0x2,
	UnderSoftReview = 0x3,
	Approved = 0x4,
	Rejected = 0x5,
	ChangesMade = 0x6,
	Inactive = 0x7,
	Abandoned = 0x8,
	Deleted = 0x9,
	UnderReview = 0xA
};