#pragma once


enum class EHoudiniAssetState:unsigned char
{
	NeedInstantiation = 0x0,
	NewHDA = 0x1,
	PreInstantiation = 0x2,
	Instantiating = 0x3,
	PreCook = 0x4,
	Cooking = 0x5,
	PostCook = 0x6,
	PreProcess = 0x7,
	Processing = 0x8,
	None = 0x9,
	NeedRebuild = 0xA,
	NeedDelete = 0xB,
	Deleting = 0xC,
	ProcessTemplate = 0xD
};