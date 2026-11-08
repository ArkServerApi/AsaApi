#pragma once


enum class TextureCookPlatformTilingSettings:unsigned char
{
	TCPTS_FromTextureGroup = 0x0,
	TCPTS_Tile = 0x1,
	TCPTS_DoNotTile = 0x2,
	TCPTS_MAX = 0x3
};