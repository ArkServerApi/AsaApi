#pragma once


enum class EShaderResourceUsageFlags:unsigned char
{
	GlobalUniformBuffer = 0x1,
	BindlessResources = 0x2,
	BindlessSamplers = 0x4
};