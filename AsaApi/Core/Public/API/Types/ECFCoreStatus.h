#pragma once


enum class ECFCoreStatus:unsigned char
{
	None = 0x0,
	Draft = 0x1,
	Test = 0x2,
	PendingReview = 0x3,
	Rejected = 0x4,
	Approved = 0x5,
	Live = 0x6
};