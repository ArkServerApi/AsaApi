#pragma once


enum class EOpenGLFormatCapabilities:unsigned int
{
	None = 0x0,
	Texture = 0x1,
	Render = 0x2,
	Filterable = 0x4,
	Image = 0x8,
	DepthStencil = 0x10
};