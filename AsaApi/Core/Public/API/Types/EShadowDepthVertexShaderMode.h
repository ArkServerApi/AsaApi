#pragma once


enum class EShadowDepthVertexShaderMode:int
{
	VertexShadowDepth_PerspectiveCorrect = 0x0,
	VertexShadowDepth_OutputDepth = 0x1,
	VertexShadowDepth_OnePassPointLight = 0x2,
	VertexShadowDepth_VirtualShadowMap = 0x3
};