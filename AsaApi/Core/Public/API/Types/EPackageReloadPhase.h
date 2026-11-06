#pragma once


enum class EPackageReloadPhase:unsigned char
{
	PrePackageLoad = 0x0,
	PrePackageFixup = 0x1,
	OnPackageFixup = 0x2,
	PostPackageFixup = 0x3,
	PreBatch = 0x4,
	PostBatchPreGC = 0x5,
	PostBatchPostGC = 0x6
};