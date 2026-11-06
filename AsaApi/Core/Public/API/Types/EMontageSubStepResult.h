#pragma once


enum class EMontageSubStepResult:unsigned char
{
	Moved = 0x0,
	NotMoved = 0x1,
	InvalidSection = 0x2,
	InvalidMontage = 0x3
};