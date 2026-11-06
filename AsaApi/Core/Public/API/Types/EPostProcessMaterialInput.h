#pragma once


enum class EPostProcessMaterialInput:unsigned int
{
	SceneColor = 0x0,
	SeparateTranslucency = 0x1,
	CombinedBloom = 0x2,
	PreTonemapHDRColor = 0x2,
	PostTonemapHDRColor = 0x3,
	Velocity = 0x4
};