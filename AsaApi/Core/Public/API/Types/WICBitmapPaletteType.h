#pragma once


enum class WICBitmapPaletteType:int
{
	WICBitmapPaletteTypeCustom = 0x0,
	WICBitmapPaletteTypeMedianCut = 0x1,
	WICBitmapPaletteTypeFixedBW = 0x2,
	WICBitmapPaletteTypeFixedHalftone8 = 0x3,
	WICBitmapPaletteTypeFixedHalftone27 = 0x4,
	WICBitmapPaletteTypeFixedHalftone64 = 0x5,
	WICBitmapPaletteTypeFixedHalftone125 = 0x6,
	WICBitmapPaletteTypeFixedHalftone216 = 0x7,
	WICBitmapPaletteTypeFixedWebPalette = 0x7,
	WICBitmapPaletteTypeFixedHalftone252 = 0x8,
	WICBitmapPaletteTypeFixedHalftone256 = 0x9,
	WICBitmapPaletteTypeFixedGray4 = 0xA,
	WICBitmapPaletteTypeFixedGray16 = 0xB,
	WICBitmapPaletteTypeFixedGray256 = 0xC,
	WICBITMAPPALETTETYPE_FORCE_DWORD = 0x7FFFFFFF
};