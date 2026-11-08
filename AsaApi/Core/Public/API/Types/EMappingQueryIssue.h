#pragma once


enum class EMappingQueryIssue:unsigned char
{
	NoIssue = 0x0,
	ReservedByAction = 0x1,
	HidesExistingMapping = 0x2,
	HiddenByExistingMapping = 0x4,
	CollisionWithMappingInSameContext = 0x8,
	ForcesTypePromotion = 0x10,
	ForcesTypeDemotion = 0x20
};