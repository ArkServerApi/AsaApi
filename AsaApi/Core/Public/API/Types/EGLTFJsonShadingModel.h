#pragma once


enum class EGLTFJsonShadingModel:int
{
	None = 0xFF,
	Default = 0x0,
	Unlit = 0x1,
	ClearCoat = 0x2,
	NumShadingModels = 0x3
};