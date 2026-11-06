#pragma once


enum class EHairAuxilaryPassType:int
{
	MaterialData = 0x0,
	MaterialData_LightChannelMask = 0x1,
	LightChannelMask = 0x2,
	DepthPatch = 0x3,
	DepthClear = 0x4
};