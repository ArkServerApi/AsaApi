#pragma once


enum class EDynamicResolutionStateEvent:unsigned char
{
	BeginFrame = 0x0,
	BeginDynamicResolutionRendering = 0x1,
	EndDynamicResolutionRendering = 0x2,
	EndFrame = 0x3
};