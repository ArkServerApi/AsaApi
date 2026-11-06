#pragma once


enum class EPackageSegment:unsigned char
{
	Header = 0x0,
	Exports = 0x1,
	BulkDataDefault = 0x2,
	BulkDataOptional = 0x3,
	BulkDataMemoryMapped = 0x4,
	PayloadSidecar = 0x5
};