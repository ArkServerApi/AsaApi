#pragma once


enum class EScreenProbeIntegrateTileClassification:int
{
	SimpleDiffuse = 0x0,
	SupportImportanceSampleBRDF = 0x1,
	SupportAll = 0x2,
	Num = 0x3
};