#pragma once


enum class EParticleUVFlipMode:unsigned char
{
	None = 0x0,
	FlipUV = 0x1,
	FlipUOnly = 0x2,
	FlipVOnly = 0x3,
	RandomFlipUV = 0x4,
	RandomFlipUOnly = 0x5,
	RandomFlipVOnly = 0x6,
	RandomFlipUVIndependent = 0x7
};