#pragma once


namespace ESingleLayerWaterReflections
{
	enum Type:int
	{
		Disabled = 0x0,
		Enabled = 0x1,
		ReflectionCaptures = 0x2,
		SSR = 0x3,
		MaxValue = 0x3
	};
}