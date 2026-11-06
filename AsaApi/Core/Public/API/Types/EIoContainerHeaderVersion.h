#pragma once


enum class EIoContainerHeaderVersion:unsigned int
{
	Initial = 0x0,
	LocalizedPackages = 0x1,
	OptionalSegmentPackages = 0x2,
	LatestPlusOne = 0x3,
	Latest = 0x2
};