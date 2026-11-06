#pragma once


enum class ECFCoreFileStatus:unsigned char
{
	None = 0x0,
	Processing = 0x1,
	ChangesRequired = 0x2,
	UnderReview = 0x3,
	Approved = 0x4,
	Rejected = 0x5,
	MalwareDetected = 0x6,
	Deleted = 0x7,
	Archived = 0x8,
	Testing = 0x9,
	Released = 0xA,
	ReadyForReview = 0xB,
	Deprecated = 0xC,
	Baking = 0xD,
	AwaitingPublishing = 0xE,
	FailedPublishing = 0xF
};