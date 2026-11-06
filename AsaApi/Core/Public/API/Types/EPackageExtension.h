#pragma once


enum class EPackageExtension:unsigned char
{
	Unspecified = 0x0,
	Asset = 0x1,
	Map = 0x2,
	TextAsset = 0x3,
	TextMap = 0x4,
	Custom = 0x5,
	EmptyString = 0x6,
	Exports = 0x7,
	BulkDataDefault = 0x8,
	BulkDataOptional = 0x9,
	BulkDataMemoryMapped = 0xA,
	PayloadSidecar = 0xB
};