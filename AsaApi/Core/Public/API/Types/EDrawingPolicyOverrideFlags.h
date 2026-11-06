#pragma once


enum class EDrawingPolicyOverrideFlags:int
{
	None = 0x0,
	TwoSided = 0x1,
	DitheredLODTransition = 0x2,
	Wireframe = 0x4,
	ReverseCullMode = 0x8
};