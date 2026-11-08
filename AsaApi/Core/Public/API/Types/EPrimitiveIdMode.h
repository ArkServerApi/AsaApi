#pragma once


enum class EPrimitiveIdMode:int
{
	PrimID_FromPrimitiveSceneInfo = 0x0,
	PrimID_DynamicPrimitiveShaderData = 0x1,
	PrimID_ForceZero = 0x2,
	PrimID_Num = 0x4,
	PrimID_NumBits = 0x2
};