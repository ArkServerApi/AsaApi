#pragma once


enum class EUsdDuplicateType:unsigned char
{
	FlattenComposedPrim = 0x0,
	SingleLayerSpecs = 0x1,
	AllLocalLayerSpecs = 0x2
};