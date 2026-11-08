#pragma once


enum class EHairCardsFactoryFlags:unsigned int
{
	InvertedUV = 0x1,
	TextureRootUV = 0x2,
	TextureGroupIndex = 0x4,
	TextureBaseColor = 0x8,
	TextureRoughness = 0xA,
	TextureAttribute = 0xC
};