#pragma once


namespace EHostType
{
	enum Type:int
	{
		Runtime = 0x0,
		RuntimeNoCommandlet = 0x1,
		RuntimeAndProgram = 0x2,
		CookedOnly = 0x3,
		UncookedOnly = 0x4,
		Developer = 0x5,
		DeveloperTool = 0x6,
		Editor = 0x7,
		EditorNoCommandlet = 0x8,
		EditorAndProgram = 0x9,
		Program = 0xA,
		ServerOnly = 0xB,
		ClientOnly = 0xC,
		ClientOnlyNoCommandlet = 0xD,
		Max = 0xE
	};
}