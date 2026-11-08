#pragma once


namespace ECurveBlendOption
{
	enum Type:int
	{
		Override = 0x0,
		DoNotOverride = 0x1,
		NormalizeByWeight = 0x2,
		BlendByWeight = 0x3,
		UseBasePose = 0x4,
		UseMaxValue = 0x5,
		UseMinValue = 0x6
	};
}