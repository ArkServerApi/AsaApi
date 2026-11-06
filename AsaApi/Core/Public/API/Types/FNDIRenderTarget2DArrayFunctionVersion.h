#pragma once


namespace FNDIRenderTarget2DArrayFunctionVersion
{
	enum Type:int
	{
		InitialVersion = 0x0,
		AddedOptionalExecute = 0x1,
		AddedMipLevel = 0x2,
		VersionPlusOne = 0x3,
		LatestVersion = 0x2
	};
}