#pragma once


enum class ERHIInterfaceType:int
{
	Hidden = 0x0,
	Null = 0x1,
	D3D11 = 0x2,
	D3D12 = 0x3,
	Vulkan = 0x4,
	Metal = 0x5,
	Agx = 0x6,
	OpenGL = 0x7
};