#pragma once


enum class EVRSGenerationFlags:unsigned int
{
	None = 0x0,
	StereoRendering = 0x1,
	SideBySideStereo = 0x2,
	HMDFixedFoveation = 0x4,
	HMDEyeTrackedFoveation = 0x8
};