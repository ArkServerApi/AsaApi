#pragma once


enum class EClearType:int
{
	CT_None = 0x0,
	CT_Depth = 0x1,
	CT_Stencil = 0x2,
	CT_Color = 0x4,
	CT_DepthStencil = 0x3
};