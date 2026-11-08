#pragma once


namespace EMessageToken
{
	enum Type:int
	{
		Action = 0x0,
		Actor = 0x1,
		AssetName = 0x2,
		Documentation = 0x3,
		Image = 0x4,
		Object = 0x5,
		Severity = 0x6,
		Text = 0x7,
		Tutorial = 0x8,
		URL = 0x9,
		EdGraph = 0xA,
		DynamicText = 0xB
	};
}