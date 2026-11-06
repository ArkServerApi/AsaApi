#pragma once


enum class ESpectatorScreenMode:unsigned char
{
	Disabled = 0x0,
	SingleEyeLetterboxed = 0x1,
	Undistorted = 0x2,
	Distorted = 0x3,
	SingleEye = 0x4,
	SingleEyeCroppedToFill = 0x5,
	Texture = 0x6,
	TexturePlusEye = 0x7
};