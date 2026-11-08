#pragma once


enum class ParticleReplayState:int
{
	PRS_Disabled = 0x0,
	PRS_Capturing = 0x1,
	PRS_Replaying = 0x2,
	PRS_MAX = 0x3
};