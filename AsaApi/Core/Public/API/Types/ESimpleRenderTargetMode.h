#pragma once


enum class ESimpleRenderTargetMode:int
{
	EExistingColorAndDepth = 0x0,
	EUninitializedColorAndDepth = 0x1,
	EUninitializedColorExistingDepth = 0x2,
	EUninitializedColorClearDepth = 0x3,
	EClearColorExistingDepth = 0x4,
	EClearColorAndDepth = 0x5,
	EExistingContents_NoDepthStore = 0x6,
	EExistingColorAndClearDepth = 0x7,
	EExistingColorAndDepthAndClearStencil = 0x8
};