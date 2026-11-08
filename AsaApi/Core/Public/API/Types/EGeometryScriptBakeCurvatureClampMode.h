#pragma once


enum class EGeometryScriptBakeCurvatureClampMode:unsigned char
{
	None = 0x0,
	OnlyPositive = 0x1,
	OnlyNegative = 0x2
};