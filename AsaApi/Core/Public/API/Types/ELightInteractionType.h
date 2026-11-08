#pragma once


enum class ELightInteractionType:int
{
	LIT_CachedIrrelevant = 0x0,
	LIT_CachedLightMap = 0x1,
	LIT_Dynamic = 0x2,
	LIT_CachedSignedDistanceFieldShadowMap2D = 0x3,
	LIT_MAX = 0x4
};