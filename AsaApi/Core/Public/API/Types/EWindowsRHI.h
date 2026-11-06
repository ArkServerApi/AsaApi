#pragma once


enum class EWindowsRHI:int
{
	D3D11 = 0x0,
	D3D12 = 0x1,
	Vulkan = 0x2,
	OpenGL = 0x3,
	count = 0x4
};