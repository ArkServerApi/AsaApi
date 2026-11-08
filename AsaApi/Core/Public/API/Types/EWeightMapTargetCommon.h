#pragma once


enum class EWeightMapTargetCommon:unsigned char
{
	None = 0x0,
	MaxDistance = 0x1,
	BackstopDistance = 0x2,
	BackstopRadius = 0x3,
	AnimDriveStiffness = 0x4,
	AnimDriveDamping_DEPRECATED = 0x5
};