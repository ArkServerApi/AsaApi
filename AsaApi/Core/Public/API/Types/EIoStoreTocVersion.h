#pragma once


enum class EIoStoreTocVersion:unsigned char
{
	Invalid = 0x0,
	Initial = 0x1,
	DirectoryIndex = 0x2,
	PartitionSize = 0x3,
	PerfectHash = 0x4,
	PerfectHashWithOverflow = 0x5,
	LatestPlusOne = 0x6,
	Latest = 0x5
};