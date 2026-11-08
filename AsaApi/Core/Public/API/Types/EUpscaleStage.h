#pragma once


enum class EUpscaleStage:int
{
	PrimaryToSecondary = 0x0,
	PrimaryToOutput = 0x1,
	SecondaryToOutput = 0x2,
	MAX = 0x3
};