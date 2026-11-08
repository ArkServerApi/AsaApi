#pragma once


namespace FExclusiveDepthStencil
{
	enum Type:int
	{
		DepthNop = 0x0,
		DepthRead = 0x1,
		DepthWrite = 0x2,
		DepthMask = 0xF,
		StencilNop = 0x0,
		StencilRead = 0x10,
		StencilWrite = 0x20,
		StencilMask = 0xF0,
		DepthNop_StencilNop = 0x0,
		DepthRead_StencilNop = 0x1,
		DepthWrite_StencilNop = 0x2,
		DepthNop_StencilRead = 0x10,
		DepthRead_StencilRead = 0x11,
		DepthWrite_StencilRead = 0x12,
		DepthNop_StencilWrite = 0x20,
		DepthRead_StencilWrite = 0x21,
		DepthWrite_StencilWrite = 0x22
	};
}