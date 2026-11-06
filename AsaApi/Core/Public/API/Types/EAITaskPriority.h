#pragma once


enum class EAITaskPriority:unsigned char
{
	Lowest = 0x0,
	Low = 0x40,
	AutonomousAI = 0x7F,
	High = 0xC0,
	Ultimate = 0xFE
};