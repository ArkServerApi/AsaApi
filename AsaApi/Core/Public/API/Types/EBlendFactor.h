#pragma once


enum class EBlendFactor:int
{
	BF_Zero = 0x0,
	BF_One = 0x1,
	BF_SourceColor = 0x2,
	BF_InverseSourceColor = 0x3,
	BF_SourceAlpha = 0x4,
	BF_InverseSourceAlpha = 0x5,
	BF_DestAlpha = 0x6,
	BF_InverseDestAlpha = 0x7,
	BF_DestColor = 0x8,
	BF_InverseDestColor = 0x9,
	BF_ConstantBlendFactor = 0xA,
	BF_InverseConstantBlendFactor = 0xB,
	BF_Source1Color = 0xC,
	BF_InverseSource1Color = 0xD,
	BF_Source1Alpha = 0xE,
	BF_InverseSource1Alpha = 0xF,
	EBlendFactor_Num = 0x10,
	EBlendFactor_NumBits = 0x4
};