#pragma once


enum class EFunctionInputType:int
{
	FunctionInput_Scalar = 0x0,
	FunctionInput_Vector2 = 0x1,
	FunctionInput_Vector3 = 0x2,
	FunctionInput_Vector4 = 0x3,
	FunctionInput_Texture2D = 0x4,
	FunctionInput_TextureCube = 0x5,
	FunctionInput_Texture2DArray = 0x6,
	FunctionInput_VolumeTexture = 0x7,
	FunctionInput_StaticBool = 0x8,
	FunctionInput_MaterialAttributes = 0x9,
	FunctionInput_TextureExternal = 0xA,
	FunctionInput_Bool = 0xB,
	FunctionInput_Substrate = 0xC,
	FunctionInput_MAX = 0xD
};