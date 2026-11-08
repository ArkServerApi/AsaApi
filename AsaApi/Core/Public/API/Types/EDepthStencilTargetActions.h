#pragma once


enum class EDepthStencilTargetActions:unsigned char
{
	DepthMask = 0x4,
	DontLoad_DontStore = 0x0,
	DontLoad_StoreDepthStencil = 0x11,
	DontLoad_StoreStencilNotDepth = 0x1,
	ClearDepthStencil_StoreDepthStencil = 0x99,
	LoadDepthStencil_StoreDepthStencil = 0x55,
	LoadDepthNotStencil_StoreDepthNotStencil = 0x50,
	LoadDepthNotStencil_DontStore = 0x40,
	LoadDepthStencil_StoreStencilNotDepth = 0x45,
	ClearDepthStencil_DontStoreDepthStencil = 0x88,
	LoadDepthStencil_DontStoreDepthStencil = 0x44,
	ClearDepthStencil_StoreDepthNotStencil = 0x98,
	ClearDepthStencil_StoreStencilNotDepth = 0x89,
	ClearDepthStencil_ResolveDepthNotStencil = 0xA8,
	ClearDepthStencil_ResolveStencilNotDepth = 0x8A,
	LoadDepthClearStencil_StoreDepthStencil = 0x59,
	ClearStencilDontLoadDepth_StoreStencilNotDepth = 0x9
};