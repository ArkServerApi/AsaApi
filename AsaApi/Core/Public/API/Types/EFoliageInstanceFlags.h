#pragma once


enum class EFoliageInstanceFlags:int
{
	FOLIAGE_AlignToNormal = 0x1,
	FOLIAGE_NoRandomYaw = 0x2,
	FOLIAGE_Readjusted = 0x4,
	FOLIAGE_InstanceDeleted = 0x8
};