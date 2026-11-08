#pragma once


enum class EDispatchComputeRenderSlot:unsigned char
{
	CRS_None = 0x0,
	CRS_PreRender = 0x1,
	CRS_PostOpaque = 0x2,
	CRS_Overlay = 0x3
};