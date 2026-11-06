#pragma once


enum class EShadowDepthPixelShaderMode:int
{
	PixelShadowDepth_NonPerspectiveCorrect = 0x0,
	PixelShadowDepth_PerspectiveCorrect = 0x1,
	PixelShadowDepth_OnePassPointLight = 0x2,
	PixelShadowDepth_VirtualShadowMap = 0x3
};