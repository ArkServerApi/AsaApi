#pragma once


enum class OodleLZ_Compressor:int
{
	OodleLZ_Compressor_Invalid = 0xFF,
	OodleLZ_Compressor_None = 0x3,
	OodleLZ_Compressor_Kraken = 0x8,
	OodleLZ_Compressor_Leviathan = 0xD,
	OodleLZ_Compressor_Mermaid = 0x9,
	OodleLZ_Compressor_Selkie = 0xB,
	OodleLZ_Compressor_Hydra = 0xC,
	OodleLZ_Compressor_Count = 0xE,
	OodleLZ_Compressor_Force32 = 0x40000000
};