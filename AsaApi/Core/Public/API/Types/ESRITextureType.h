#pragma once


namespace ESRITextureType
{
	enum Type:int
	{
		None = 0x0,
		ScaledSRIForRender = 0x1,
		ScaledConservativeSRIForRender = 0x2,
		ConstructedSRI = 0x3,
		Num = 0x4
	};
}