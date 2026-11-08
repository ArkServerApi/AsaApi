#pragma once


namespace ESRIPreviewType
{
	enum Type:int
	{
		Off = 0x0,
		Projected = 0x1,
		ProjectedConservative = 0x2,
		BeforeReprojection = 0x3,
		Num = 0x4
	};
}