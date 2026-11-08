#pragma once


enum class _NVAPI_FUNCTION_NAME:int
{
	NVAPI_DecodeExecute = 0x0,
	NVAPI_DecodeBeginFrame = 0x1,
	NVAPI_DecodeEndFrame = 0x2,
	NVAPI_VideoProcessBlt = 0x3,
	NVAPI_ExtensionExecute = 0x4,
	NVAPI_FlipOverlay = 0x5,
	NVAPI_FlipOverlayNvApi = 0x6,
	NVAPI_OverlayTransfer = 0x7,
	NVAPI_nvRenderDeinterlace = 0x8,
	NVAPI_PresentVideoShow = 0x9,
	NVAPI_LAST_FUNCTION = 0xA
};