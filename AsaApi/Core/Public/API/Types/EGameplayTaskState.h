#pragma once


enum class EGameplayTaskState:unsigned char
{
	Uninitialized = 0x0,
	AwaitingActivation = 0x1,
	Paused = 0x2,
	Active = 0x3,
	Finished = 0x4
};