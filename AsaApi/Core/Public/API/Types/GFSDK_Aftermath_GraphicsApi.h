#pragma once


enum class GFSDK_Aftermath_GraphicsApi:unsigned int
{
	GFSDK_Aftermath_GraphicsApi_Unknown = 0x0,
	GFSDK_Aftermath_GraphicsApi_D3D_10_0 = 0x1,
	GFSDK_Aftermath_GraphicsApi_D3D_10_1 = 0x2,
	GFSDK_Aftermath_GraphicsApi_D3D_11_0 = 0x3,
	GFSDK_Aftermath_GraphicsApi_D3D_11_1 = 0x4,
	GFSDK_Aftermath_GraphicsApi_D3D_11_2 = 0x5,
	GFSDK_Aftermath_GraphicsApi_D3D_12_0 = 0x6,
	GFSDK_Aftermath_GraphicsApi_Vulkan = 0x7
};