#pragma once


enum class EAdditiveAnimationType:int
{
	AAT_None = 0x0,
	AAT_LocalSpaceBase = 0x1,
	AAT_RotationOffsetMeshSpace = 0x2,
	AAT_MAX = 0x3
};