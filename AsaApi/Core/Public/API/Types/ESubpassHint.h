#pragma once


enum class ESubpassHint:unsigned char
{
	None = 0x0,
	DepthReadSubpass = 0x1,
	DeferredShadingSubpass = 0x2
};