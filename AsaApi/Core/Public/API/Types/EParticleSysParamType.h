#pragma once


enum class EParticleSysParamType:int
{
	PSPT_None = 0x0,
	PSPT_Scalar = 0x1,
	PSPT_ScalarRand = 0x2,
	PSPT_Vector = 0x3,
	PSPT_VectorRand = 0x4,
	PSPT_Color = 0x5,
	PSPT_Actor = 0x6,
	PSPT_Material = 0x7,
	PSPT_VectorUnitRand = 0x8,
	PSPT_MAX = 0x9
};