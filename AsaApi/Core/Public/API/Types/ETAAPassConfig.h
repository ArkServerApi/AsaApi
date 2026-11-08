#pragma once


enum class ETAAPassConfig:int
{
	Main = 0x0,
	MainUpsampling = 0x1,
	MainSuperSampling = 0x2,
	ScreenSpaceReflections = 0x3,
	LightShaft = 0x4,
	DiaphragmDOF = 0x5,
	DiaphragmDOFUpsampling = 0x6,
	Hair = 0x7,
	MAX = 0x8
};