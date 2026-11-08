#pragma once


enum class EMovieSceneBlendType:unsigned char
{
	Invalid = 0x0,
	Absolute = 0x1,
	Additive = 0x2,
	Relative = 0x4,
	AdditiveFromBase = 0x8
};