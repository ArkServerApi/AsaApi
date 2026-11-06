#pragma once


enum class EGameplayTaskRunResult:unsigned char
{
	Error = 0x0,
	Failed = 0x1,
	Success_Paused = 0x2,
	Success_Active = 0x3,
	Success_Finished = 0x4
};