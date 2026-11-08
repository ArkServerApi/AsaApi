#pragma once


enum class EHapticEffectType:int
{
	HET_MenuTick = 0x0,
	HET_MenuSelection = 0x1,
	HET_RadialTick = 0x2,
	HET_RadialSelection = 0x3,
	HET_MenuAnalogSweep = 0x4,
	HET_StatLevelUp = 0x5,
	HET_StructureFail = 0x6,
	HET_StructureSuccess = 0x7,
	HET_StructureDestroy = 0x8,
	HET_StructureFlip = 0x9,
	HET_ResourceGather = 0xA,
	HET_EnterWater = 0xB,
	HET_StartFlying = 0xC,
	HET_Explosion = 0xD,
	HET_BossTeleport = 0xE,
	HET_BigDinoWalking = 0xF,
	HET_MAX = 0x10
};