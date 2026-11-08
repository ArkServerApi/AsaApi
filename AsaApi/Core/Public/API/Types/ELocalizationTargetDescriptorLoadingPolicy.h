#pragma once


namespace ELocalizationTargetDescriptorLoadingPolicy
{
	enum Type:int
	{
		Never = 0x0,
		Always = 0x1,
		Editor = 0x2,
		Game = 0x3,
		PropertyNames = 0x4,
		ToolTips = 0x5,
		Max = 0x6
	};
}