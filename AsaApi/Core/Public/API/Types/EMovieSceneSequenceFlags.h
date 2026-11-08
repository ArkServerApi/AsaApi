#pragma once


enum class EMovieSceneSequenceFlags:unsigned char
{
	None = 0x0,
	Volatile = 0x1,
	BlockingEvaluation = 0x2,
	DynamicWeighting = 0x4,
	InheritedFlags = 0x1
};