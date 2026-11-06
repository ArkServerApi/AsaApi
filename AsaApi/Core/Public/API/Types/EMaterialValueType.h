#pragma once


enum class EMaterialValueType:unsigned __int64
{
	MCT_Float1 = 0x1,
	MCT_Float2 = 0x2,
	MCT_Float3 = 0x4,
	MCT_Float4 = 0x8,
	MCT_Float = 0xF,
	MCT_Texture2D = 0x10,
	MCT_TextureCube = 0x20,
	MCT_Texture2DArray = 0x40,
	MCT_TextureCubeArray = 0x80,
	MCT_VolumeTexture = 0x100,
	MCT_StaticBool = 0x200,
	MCT_Unknown = 0x400,
	MCT_MaterialAttributes = 0x800,
	MCT_TextureExternal = 0x1000,
	MCT_TextureVirtual = 0x2000,
	MCT_Texture = 0x31F0,
	MCT_VTPageTableResult = 0x4000,
	MCT_ShadingModel = 0xFFFF8000,
	MCT_Strata = 0x10000,
	MCT_LWCScalar = 0x20000,
	MCT_LWCVector2 = 0x40000,
	MCT_LWCVector3 = 0x80000,
	MCT_LWCVector4 = 0x100000,
	MCT_LWCType = 0x1E0000,
	MCT_Execution = 0x200000,
	MCT_VoidStatement = 0x400000,
	MCT_Bool = 0x800000,
	MCT_UInt1 = 0x1000000,
	MCT_UInt2 = 0x2000000,
	MCT_UInt3 = 0x4000000,
	MCT_UInt4 = 0x8000000,
	MCT_UInt = 0xF000000,
	MCT_Numeric = 0x9E000F
};