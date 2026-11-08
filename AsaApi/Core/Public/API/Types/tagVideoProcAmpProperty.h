#pragma once


enum class tagVideoProcAmpProperty:int
{
	VideoProcAmp_Brightness = 0x0,
	VideoProcAmp_Contrast = 0x1,
	VideoProcAmp_Hue = 0x2,
	VideoProcAmp_Saturation = 0x3,
	VideoProcAmp_Sharpness = 0x4,
	VideoProcAmp_Gamma = 0x5,
	VideoProcAmp_ColorEnable = 0x6,
	VideoProcAmp_WhiteBalance = 0x7,
	VideoProcAmp_BacklightCompensation = 0x8,
	VideoProcAmp_Gain = 0x9
};