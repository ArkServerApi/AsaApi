#pragma once


enum class EMaterialCommonBasis:int
{
	MCB_Tangent = 0x0,
	MCB_Local = 0x1,
	MCB_TranslatedWorld = 0x2,
	MCB_World = 0x3,
	MCB_View = 0x4,
	MCB_Camera = 0x5,
	MCB_MeshParticle = 0x6,
	MCB_Instance = 0x7,
	MCB_RefPose = 0x8,
	MCB_MAX = 0x9
};