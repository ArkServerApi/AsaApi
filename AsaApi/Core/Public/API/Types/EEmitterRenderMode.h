#pragma once


enum class EEmitterRenderMode:int
{
	ERM_Normal = 0x0,
	ERM_Point = 0x1,
	ERM_Cross = 0x2,
	ERM_LightsOnly = 0x3,
	ERM_None = 0x4,
	ERM_MAX = 0x5
};