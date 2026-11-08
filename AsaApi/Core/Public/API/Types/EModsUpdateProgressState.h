#pragma once


enum class EModsUpdateProgressState:unsigned char
{
	Validating = 0x0,
	Installing = 0x1,
	SuccessfullyCompleted = 0x2,
	FailedToComplete = 0x3
};