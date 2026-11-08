#pragma once


enum class EDecalRenderTargetMode:unsigned char
{
	None = 0x0,
	DBuffer = 0x1,
	SceneColorAndGBuffer = 0x2,
	SceneColorAndGBufferNoNormal = 0x3,
	SceneColor = 0x4,
	AmbientOcclusion = 0x5
};