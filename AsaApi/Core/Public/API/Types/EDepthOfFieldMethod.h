#pragma once


enum class EDepthOfFieldMethod:int
{
	DOFM_BokehDOF = 0x0,
	DOFM_Gaussian = 0x1,
	DOFM_CircleDOF = 0x2,
	DOFM_MAX = 0x3
};