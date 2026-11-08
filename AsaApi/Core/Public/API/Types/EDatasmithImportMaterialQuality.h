#pragma once


enum class EDatasmithImportMaterialQuality:unsigned char
{
	UseNoFresnelCurves = 0x0,
	UseSimplifierFresnelCurves = 0x1,
	UseRealFresnelCurves = 0x2
};