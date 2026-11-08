#pragma once


enum class EShaderParamBindingType:unsigned char
{
	None = 0x0,
	ConstantParameter = 0x1,
	ReadOnlyResource = 0x2,
	ReadWriteResource = 0x3
};