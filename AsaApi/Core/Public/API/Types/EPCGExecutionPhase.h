#pragma once


enum class EPCGExecutionPhase:unsigned char
{
	NotExecuted = 0x0,
	PrepareData = 0x1,
	Execute = 0x2,
	PostExecute = 0x3,
	Done = 0x4
};