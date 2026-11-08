#pragma once


enum class TextureCompressionSettings:int
{
	TC_Default = 0x0,
	TC_Normalmap = 0x1,
	TC_Masks = 0x2,
	TC_Grayscale = 0x3,
	TC_Displacementmap = 0x4,
	TC_VectorDisplacementmap = 0x5,
	TC_HDR = 0x6,
	TC_EditorIcon = 0x7,
	TC_Alpha = 0x8,
	TC_DistanceFieldFont = 0x9,
	TC_HDR_Compressed = 0xA,
	TC_BC7 = 0xB,
	TC_HalfFloat = 0xC,
	TC_LQ = 0xD,
	TC_EncodedReflectionCapture = 0xE,
	TC_SingleFloat = 0xF,
	TC_HDR_F32 = 0x10,
	TC_MAX = 0x11
};