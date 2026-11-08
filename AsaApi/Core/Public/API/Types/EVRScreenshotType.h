#pragma once


enum class EVRScreenshotType:int
{
	k_EVRScreenshotType_None = 0x0,
	k_EVRScreenshotType_Mono = 0x1,
	k_EVRScreenshotType_Stereo = 0x2,
	k_EVRScreenshotType_MonoCubemap = 0x3,
	k_EVRScreenshotType_MonoPanorama = 0x4,
	k_EVRScreenshotType_StereoPanorama = 0x5
};