#pragma once


namespace EScriptInstrumentation
{
	enum Type:int
	{
		Class = 0x0,
		ClassScope = 0x1,
		Instance = 0x2,
		Event = 0x3,
		InlineEvent = 0x4,
		ResumeEvent = 0x5,
		PureNodeEntry = 0x6,
		NodeDebugSite = 0x7,
		NodeEntry = 0x8,
		NodeExit = 0x9,
		PushState = 0xA,
		RestoreState = 0xB,
		ResetState = 0xC,
		SuspendState = 0xD,
		PopState = 0xE,
		TunnelEndOfThread = 0xF,
		Stop = 0x10
	};
}