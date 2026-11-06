#pragma once


enum class ETriggerEvent:unsigned char
{
	None = 0x0,
	Triggered = 0x1,
	Started = 0x2,
	Ongoing = 0x4,
	Canceled = 0x8,
	Completed = 0x10
};