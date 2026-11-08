#pragma once


namespace EAutomationTestFlags
{
	enum Type:int
	{
		None = 0x0,
		EditorContext = 0x1,
		ClientContext = 0x2,
		ServerContext = 0x4,
		CommandletContext = 0x8,
		ApplicationContextMask = 0xF,
		NonNullRHI = 0x100,
		RequiresUser = 0x200,
		FeatureMask = 0x300,
		Disabled = 0x10000,
		CriticalPriority = 0x100000,
		HighPriority = 0x200000,
		HighPriorityAndAbove = 0x300000,
		MediumPriority = 0x400000,
		MediumPriorityAndAbove = 0x700000,
		LowPriority = 0x800000,
		PriorityMask = 0xF00000,
		SmokeFilter = 0x1000000,
		EngineFilter = 0x2000000,
		ProductFilter = 0x4000000,
		PerfFilter = 0x8000000,
		StressFilter = 0x10000000,
		NegativeFilter = 0x20000000,
		FilterMask = 0x3F000000
	};
}