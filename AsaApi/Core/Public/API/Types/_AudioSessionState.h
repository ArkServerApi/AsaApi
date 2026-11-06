#pragma once


enum class _AudioSessionState:int
{
	AudioSessionStateInactive = 0x0,
	AudioSessionStateActive = 0x1,
	AudioSessionStateExpired = 0x2
};