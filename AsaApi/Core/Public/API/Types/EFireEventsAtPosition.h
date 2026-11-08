#pragma once


enum class EFireEventsAtPosition:unsigned char
{
	AtStartOfEvaluation = 0x0,
	AtEndOfEvaluation = 0x1,
	AfterSpawn = 0x2
};