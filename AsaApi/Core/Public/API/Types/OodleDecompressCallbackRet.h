#pragma once


enum class OodleDecompressCallbackRet:int
{
	OodleDecompressCallbackRet_Continue = 0x0,
	OodleDecompressCallbackRet_Cancel = 0x1,
	OodleDecompressCallbackRet_Invalid = 0x2,
	OodleDecompressCallbackRet_Force32 = 0x40000000
};