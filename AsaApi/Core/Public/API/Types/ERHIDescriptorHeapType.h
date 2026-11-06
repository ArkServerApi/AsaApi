#pragma once


enum class ERHIDescriptorHeapType:unsigned char
{
	Standard = 0x0,
	Sampler = 0x1,
	RenderTarget = 0x2,
	DepthStencil = 0x3,
	Count = 0x4,
	Invalid = 0xFF
};