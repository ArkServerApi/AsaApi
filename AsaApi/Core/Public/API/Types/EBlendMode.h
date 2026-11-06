#pragma once


enum class EBlendMode:int
{
	BLEND_Opaque = 0x0,
	BLEND_Masked = 0x1,
	BLEND_Translucent = 0x2,
	BLEND_Additive = 0x3,
	BLEND_Modulate = 0x4,
	BLEND_AlphaComposite = 0x5,
	BLEND_AlphaHoldout = 0x6,
	BLEND_TranslucentColoredTransmittance = 0x7,
	BLEND_MAX = 0x8,
	BLEND_TranslucentGreyTransmittance = 0x2,
	BLEND_ColoredTransmittanceOnly = 0x4
};