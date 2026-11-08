#pragma once


enum class EPrimaryAssetCookRule:unsigned char
{
	Unknown = 0x0,
	NeverCook = 0x1,
	ProductionNeverCook = 0x2,
	DevelopmentCook = 0x2,
	DevelopmentAlwaysProductionNeverCook = 0x3,
	DevelopmentAlwaysCook = 0x3,
	DevelopmentAlwaysProductionUnknownCook = 0x4,
	AlwaysCook = 0x5
};