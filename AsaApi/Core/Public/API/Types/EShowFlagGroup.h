#pragma once


enum class EShowFlagGroup:int
{
	SFG_Normal = 0x0,
	SFG_Advanced = 0x1,
	SFG_PostProcess = 0x2,
	SFG_CollisionModes = 0x3,
	SFG_Developer = 0x4,
	SFG_Visualize = 0x5,
	SFG_LightTypes = 0x6,
	SFG_LightingComponents = 0x7,
	SFG_LightingFeatures = 0x8,
	SFG_Lumen = 0x9,
	SFG_Hidden = 0xA,
	SFG_Transient = 0xB,
	SFG_Custom = 0xC,
	SFG_Max = 0xD
};