#pragma once


enum class EBakeOpState:int
{
	Clean = 0x0,
	Evaluate = 0x1,
	EvaluateDetailMesh = 0x2,
	Invalid = 0x4
};