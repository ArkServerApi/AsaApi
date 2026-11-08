#pragma once


enum class AnimationCompressionFormat:int
{
	ACF_None = 0x0,
	ACF_Float96NoW = 0x1,
	ACF_Fixed48NoW = 0x2,
	ACF_IntervalFixed32NoW = 0x3,
	ACF_Fixed32NoW = 0x4,
	ACF_Float32NoW = 0x5,
	ACF_Identity = 0x6,
	ACF_MAX = 0x7
};