#pragma once


enum class EGLTFJsonAlphaMode:int
{
	None = 0xFF,
	Opaque = 0x0,
	Mask = 0x1,
	Blend = 0x2
};