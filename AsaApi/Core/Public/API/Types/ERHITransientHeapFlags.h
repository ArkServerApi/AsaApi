#pragma once


enum class ERHITransientHeapFlags:unsigned char
{
	AllowBuffers = 0x1,
	AllowTextures = 0x2,
	AllowRenderTargets = 0x4,
	AllowAll = 0x7
};