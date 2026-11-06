#pragma once


enum class EConstructTextureFlags:int
{
	CTF_Compress = 0x1,
	CTF_DeferCompression = 0x2,
	CTF_SRGB = 0x4,
	CTF_AllowMips = 0x8,
	CTF_ForceOneBitAlpha = 0x10,
	CTF_RemapAlphaAsMasked = 0x20,
	CTF_ForceOpaque = 0x40,
	CTF_Default = 0x5
};