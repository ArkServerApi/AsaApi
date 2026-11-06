#pragma once


enum class EControlRigTestDataPlaybackMode:unsigned char
{
	Live = 0x0,
	ReplayInputs = 0x1,
	GroundTruth = 0x2,
	Max = 0x3
};