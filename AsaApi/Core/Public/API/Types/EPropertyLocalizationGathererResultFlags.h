#pragma once


enum class EPropertyLocalizationGathererResultFlags:unsigned char
{
	Empty = 0x0,
	HasText = 0x1,
	HasScript = 0x2,
	HasTextWithInvalidPackageLocalizationID = 0x4
};