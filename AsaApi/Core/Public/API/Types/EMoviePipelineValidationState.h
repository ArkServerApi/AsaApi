#pragma once


enum class EMoviePipelineValidationState:unsigned char
{
	Valid = 0x0,
	Warnings = 0x1,
	Errors = 0x2
};