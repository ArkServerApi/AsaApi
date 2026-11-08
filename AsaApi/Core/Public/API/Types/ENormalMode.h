#pragma once


enum class ENormalMode:int
{
	NM_PreserveSmoothingGroups = 0x0,
	NM_RecalculateNormals = 0x1,
	NM_RecalculateNormalsSmooth = 0x2,
	NM_RecalculateNormalsHard = 0x3,
	TEMP_BROKEN = 0x4,
	ENormalMode_MAX = 0x5
};