#pragma once


enum class EMovieSceneSequenceCompilerMask:unsigned char
{
	Hierarchy = 0x1,
	EvaluationTemplate = 0x2,
	EvaluationTemplateField = 0x4,
	EntityComponentField = 0x8,
	None = 0x0
};