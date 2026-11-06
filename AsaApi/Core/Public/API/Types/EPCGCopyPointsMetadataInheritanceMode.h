#pragma once


enum class EPCGCopyPointsMetadataInheritanceMode:unsigned char
{
	SourceFirst = 0x0,
	TargetFirst = 0x1,
	SourceOnly = 0x2,
	TargetOnly = 0x3,
	None = 0x4
};