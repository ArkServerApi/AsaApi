#pragma once


enum class _KINTERRUPT_POLARITY:int
{
	InterruptPolarityUnknown = 0x0,
	InterruptActiveHigh = 0x1,
	InterruptRisingEdge = 0x1,
	InterruptActiveLow = 0x2,
	InterruptFallingEdge = 0x2,
	InterruptActiveBoth = 0x3,
	InterruptActiveBothTriggerLow = 0x3,
	InterruptActiveBothTriggerHigh = 0x4
};