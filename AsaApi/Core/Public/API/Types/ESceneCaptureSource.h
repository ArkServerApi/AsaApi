#pragma once


enum class ESceneCaptureSource:int
{
	SCS_SceneColorHDR = 0x0,
	SCS_SceneColorHDRNoAlpha = 0x1,
	SCS_FinalColorLDR = 0x2,
	SCS_SceneColorSceneDepth = 0x3,
	SCS_SceneDepth = 0x4,
	SCS_DeviceDepth = 0x5,
	SCS_Normal = 0x6,
	SCS_BaseColor = 0x7,
	SCS_FinalColorHDR = 0x8,
	SCS_FinalToneCurveHDR = 0x9,
	SCS_MAX = 0xA
};